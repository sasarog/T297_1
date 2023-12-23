#pragma once

namespace CLRPainting {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Сводка для PaintingForm
	/// </summary>
	public ref class PaintingForm : public System::Windows::Forms::Form
	{
	public:
		PaintingForm(void)
		{
			InitializeComponent();
			//
			//TODO: добавьте код конструктора
			//
		}

	protected:
		/// <summary>
		/// Освободить все используемые ресурсы.
		/// </summary>
		~PaintingForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::PictureBox^ pictureBox1;
	protected:
	private: System::Windows::Forms::Button^ bLine;

	private:
		/// <summary>
		/// Обязательная переменная конструктора.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Требуемый метод для поддержки конструктора — не изменяйте 
		/// содержимое этого метода с помощью редактора кода.
		/// </summary>
		void InitializeComponent(void)
		{
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->bLine = (gcnew System::Windows::Forms::Button());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			this->SuspendLayout();
			// 
			// pictureBox1
			// 
			this->pictureBox1->Location = System::Drawing::Point(12, 12);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(1257, 585);
			this->pictureBox1->TabIndex = 0;
			this->pictureBox1->TabStop = false;
			// 
			// bLine
			// 
			this->bLine->Location = System::Drawing::Point(12, 603);
			this->bLine->Name = L"bLine";
			this->bLine->Size = System::Drawing::Size(190, 100);
			this->bLine->TabIndex = 1;
			this->bLine->Text = L"button1";
			this->bLine->UseVisualStyleBackColor = true;
			this->bLine->Click += gcnew System::EventHandler(this, &PaintingForm::bLine_Click);
			// 
			// PaintingForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1281, 718);
			this->Controls->Add(this->bLine);
			this->Controls->Add(this->pictureBox1);
			this->Name = L"PaintingForm";
			this->Text = L"PaintingForm";
			this->Load += gcnew System::EventHandler(this, &PaintingForm::PaintingForm_Load);
			this->SizeChanged += gcnew System::EventHandler(this, &PaintingForm::PaintingForm_SizeChanged);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			this->ResumeLayout(false);

		}
#pragma endregion
		Graphics^ gr;
	private: System::Void Painting() {
		//Заливка окна
		gr->Clear(Color::DarkGreen);
		//Перо для рисования
		Pen^ pero = gcnew Pen(Color::Red, 3);
		//Линия
		gr->DrawLine(pero, 0, 0, 500, 500);
		//дуга
		gr->DrawArc(pero, 100, 100, 300, 150, 0, 90);
		array<PointF>^ mas = gcnew 	 array<PointF>(10);
		Random^ rd = gcnew Random;
		for (size_t i = 0; i < 10; i++)
		{
			mas[i].X = rd->Next(pictureBox1->Width);
			mas[i].Y = rd->Next(pictureBox1->Height); 
		}
		//Курва
		gr->DrawCurve(pero, mas);
		//Рисование текста
		gr->DrawString(
			L"T-297", 
			gcnew System::Drawing::Font("Arial", 44),
			Brushes::Aqua,
			RectangleF(this->Width / 2 -110,0,200,100)
		);
		
	
	}
	private: System::Void bLine_Click(System::Object^ sender, System::EventArgs^ e) {
		Painting();
	}
	private: System::Void PaintingForm_Load(System::Object^ sender, System::EventArgs^ e) {
		gr = pictureBox1->CreateGraphics();
	}
	private: System::Void PaintingForm_SizeChanged(System::Object^ sender, System::EventArgs^ e) {
		this->pictureBox1->Width = this->Width - 50;
		this->pictureBox1->Height = this->Height - 80;
		gr = pictureBox1->CreateGraphics();
		bLine->Location =  System::Drawing::Point(20, this->Height - 120);
		Painting();
	}
};
}
