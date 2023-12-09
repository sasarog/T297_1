#pragma once

namespace T2971 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Ñâîäêà äëÿ MainForm
	/// </summary>
	public ref class MainForm : public System::Windows::Forms::Form
	{
	public:
		MainForm(void)
		{
			InitializeComponent();
			//
			//TODO: äîáàâüòå êîä êîíñòğóêòîğà
			//
		}

	protected:
		/// <summary>
		/// Îñâîáîäèòü âñå èñïîëüçóåìûå ğåñóğñû.
		/// </summary>
		~MainForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^ button1;
	protected:
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::LinkLabel^ linkLabel1;
	private: System::Windows::Forms::TabControl^ tabControl1;
	private: System::Windows::Forms::TabPage^ tabPage1;
	private: System::Windows::Forms::TabPage^ tabPage2;
	private: System::Windows::Forms::Button^ button2;

	private: System::Windows::Forms::MenuStrip^ menuStrip1;
	private: System::Windows::Forms::ToolStripMenuItem^ ôàéëToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ îòêğûòüToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ ñîõğàíèòüToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ âûõîäToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ ğåäàêòèğîâàòüToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ ñîõğàíèòüÊàêToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ ôàéëToolStripMenuItem1;
	private: System::Windows::Forms::ToolStripMenuItem^ òåêñòToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ êàğòèíêóToolStripMenuItem;
	private: System::Windows::Forms::Button^ btnCalculate;
	private: System::Windows::Forms::Label^ lblResult;


	private: System::Windows::Forms::Button^ button3;
	private: System::Windows::Forms::CheckBox^ checkBox2;
	private: System::Windows::Forms::CheckBox^ checkBox3;
	private: System::Windows::Forms::CheckBox^ checkBox4;
	private: System::Windows::Forms::RadioButton^ radioButton1;
	private: System::Windows::Forms::RadioButton^ radioButton2;
	private: System::Windows::Forms::RadioButton^ radioButton3;
	private: System::Windows::Forms::Panel^ panel1;
	private: System::Windows::Forms::RadioButton^ radioButton5;
	private: System::Windows::Forms::RadioButton^ radioButton4;
	private: System::Windows::Forms::PictureBox^ pictureBox1;


	private:
		/// <summary>
		/// Îáÿçàòåëüíàÿ ïåğåìåííàÿ êîíñòğóêòîğà.
		/// </summary>
		System::ComponentModel::Container^ components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Òğåáóåìûé ìåòîä äëÿ ïîääåğæêè êîíñòğóêòîğà — íå èçìåíÿéòå 
		/// ñîäåğæèìîå ıòîãî ìåòîäà ñ ïîìîùüş ğåäàêòîğà êîäà.
		/// </summary>
		void InitializeComponent(void)
		{
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(MainForm::typeid));
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->linkLabel1 = (gcnew System::Windows::Forms::LinkLabel());
			this->tabControl1 = (gcnew System::Windows::Forms::TabControl());
			this->tabPage1 = (gcnew System::Windows::Forms::TabPage());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->tabPage2 = (gcnew System::Windows::Forms::TabPage());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->menuStrip1 = (gcnew System::Windows::Forms::MenuStrip());
			this->ôàéëToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->îòêğûòüToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->ñîõğàíèòüToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->âûõîäToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->ğåäàêòèğîâàòüToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->ñîõğàíèòüÊàêToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->ôàéëToolStripMenuItem1 = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->òåêñòToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->êàğòèíêóToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->btnCalculate = (gcnew System::Windows::Forms::Button());
			this->lblResult = (gcnew System::Windows::Forms::Label());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->checkBox2 = (gcnew System::Windows::Forms::CheckBox());
			this->checkBox3 = (gcnew System::Windows::Forms::CheckBox());
			this->checkBox4 = (gcnew System::Windows::Forms::CheckBox());
			this->radioButton1 = (gcnew System::Windows::Forms::RadioButton());
			this->radioButton2 = (gcnew System::Windows::Forms::RadioButton());
			this->radioButton3 = (gcnew System::Windows::Forms::RadioButton());
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->radioButton5 = (gcnew System::Windows::Forms::RadioButton());
			this->radioButton4 = (gcnew System::Windows::Forms::RadioButton());
			this->tabControl1->SuspendLayout();
			this->tabPage1->SuspendLayout();
			this->tabPage2->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			this->menuStrip1->SuspendLayout();
			this->panel1->SuspendLayout();
			this->SuspendLayout();
			// 
			// button1
			// 
			this->button1->BackColor = System::Drawing::SystemColors::MenuHighlight;
			this->button1->Location = System::Drawing::Point(137, 265);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(114, 85);
			this->button1->TabIndex = 0;
			this->button1->Text = L"button1";
			this->button1->UseVisualStyleBackColor = false;
			this->button1->Click += gcnew System::EventHandler(this, &MainForm::button1_Click);
			this->button1->MouseEnter += gcnew System::EventHandler(this, &MainForm::button1_MouseEnter);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(198, 87);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(44, 16);
			this->label1->TabIndex = 1;
			this->label1->Text = L"label1";
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(201, 107);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(100, 22);
			this->textBox1->TabIndex = 2;
			// 
			// linkLabel1
			// 
			this->linkLabel1->AutoSize = true;
			this->linkLabel1->Location = System::Drawing::Point(395, 87);
			this->linkLabel1->Name = L"linkLabel1";
			this->linkLabel1->Size = System::Drawing::Size(68, 16);
			this->linkLabel1->TabIndex = 3;
			this->linkLabel1->TabStop = true;
			this->linkLabel1->Text = L"linkLabel1";
			// 
			// tabControl1
			// 
			this->tabControl1->Controls->Add(this->tabPage1);
			this->tabControl1->Controls->Add(this->tabPage2);
			this->tabControl1->Location = System::Drawing::Point(623, 29);
			this->tabControl1->Name = L"tabControl1";
			this->tabControl1->SelectedIndex = 0;
			this->tabControl1->Size = System::Drawing::Size(419, 259);
			this->tabControl1->TabIndex = 4;
			// 
			// tabPage1
			// 
			this->tabPage1->Controls->Add(this->button2);
			this->tabPage1->Location = System::Drawing::Point(4, 25);
			this->tabPage1->Name = L"tabPage1";
			this->tabPage1->Padding = System::Windows::Forms::Padding(3);
			this->tabPage1->Size = System::Drawing::Size(411, 230);
			this->tabPage1->TabIndex = 0;
			this->tabPage1->Text = L"tabPage1";
			this->tabPage1->UseVisualStyleBackColor = true;
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(81, 86);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(75, 23);
			this->button2->TabIndex = 0;
			this->button2->Text = L"button2";
			this->button2->UseVisualStyleBackColor = true;
			// 
			// tabPage2
			// 
			this->tabPage2->Controls->Add(this->pictureBox1);
			this->tabPage2->Location = System::Drawing::Point(4, 25);
			this->tabPage2->Name = L"tabPage2";
			this->tabPage2->Padding = System::Windows::Forms::Padding(3);
			this->tabPage2->Size = System::Drawing::Size(411, 230);
			this->tabPage2->TabIndex = 1;
			this->tabPage2->Text = L"tabPage2";
			this->tabPage2->UseVisualStyleBackColor = true;
			// 
			// pictureBox1
			// 
			this->pictureBox1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.Image")));
			this->pictureBox1->Location = System::Drawing::Point(6, 6);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(399, 221);
			this->pictureBox1->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->pictureBox1->TabIndex = 17;
			this->pictureBox1->TabStop = false;
			// 
			// menuStrip1
			// 
			this->menuStrip1->BackColor = System::Drawing::SystemColors::ButtonShadow;
			this->menuStrip1->ImageScalingSize = System::Drawing::Size(20, 20);
			this->menuStrip1->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(2) {
				this->ôàéëToolStripMenuItem,
					this->ğåäàêòèğîâàòüToolStripMenuItem
			});
			this->menuStrip1->Location = System::Drawing::Point(0, 0);
			this->menuStrip1->Name = L"menuStrip1";
			this->menuStrip1->Size = System::Drawing::Size(1214, 28);
			this->menuStrip1->TabIndex = 5;
			this->menuStrip1->Text = L"menuStrip1";
			// 
			// ôàéëToolStripMenuItem
			// 
			this->ôàéëToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(3) {
				this->îòêğûòüToolStripMenuItem,
					this->ñîõğàíèòüToolStripMenuItem, this->âûõîäToolStripMenuItem
			});
			this->ôàéëToolStripMenuItem->Name = L"ôàéëToolStripMenuItem";
			this->ôàéëToolStripMenuItem->Size = System::Drawing::Size(59, 24);
			this->ôàéëToolStripMenuItem->Text = L"Ôàéë";
			// 
			// îòêğûòüToolStripMenuItem
			// 
			this->îòêğûòüToolStripMenuItem->Name = L"îòêğûòüToolStripMenuItem";
			this->îòêğûòüToolStripMenuItem->Size = System::Drawing::Size(166, 26);
			this->îòêğûòüToolStripMenuItem->Text = L"Îòêğûòü";
			// 
			// ñîõğàíèòüToolStripMenuItem
			// 
			this->ñîõğàíèòüToolStripMenuItem->Name = L"ñîõğàíèòüToolStripMenuItem";
			this->ñîõğàíèòüToolStripMenuItem->Size = System::Drawing::Size(166, 26);
			this->ñîõğàíèòüToolStripMenuItem->Text = L"Ñîõğàíèòü";
			// 
			// âûõîäToolStripMenuItem
			// 
			this->âûõîäToolStripMenuItem->Name = L"âûõîäToolStripMenuItem";
			this->âûõîäToolStripMenuItem->Size = System::Drawing::Size(166, 26);
			this->âûõîäToolStripMenuItem->Text = L"Âûõîä";
			// 
			// ğåäàêòèğîâàòüToolStripMenuItem
			// 
			this->ğåäàêòèğîâàòüToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(1) { this->ñîõğàíèòüÊàêToolStripMenuItem });
			this->ğåäàêòèğîâàòüToolStripMenuItem->Name = L"ğåäàêòèğîâàòüToolStripMenuItem";
			this->ğåäàêòèğîâàòüToolStripMenuItem->Size = System::Drawing::Size(125, 24);
			this->ğåäàêòèğîâàòüToolStripMenuItem->Text = L"Ğåäàêòèğîâàòü";
			// 
			// ñîõğàíèòüÊàêToolStripMenuItem
			// 
			this->ñîõğàíèòüÊàêToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(3) {
				this->ôàéëToolStripMenuItem1,
					this->òåêñòToolStripMenuItem, this->êàğòèíêóToolStripMenuItem
			});
			this->ñîõğàíèòüÊàêToolStripMenuItem->Name = L"ñîõğàíèòüÊàêToolStripMenuItem";
			this->ñîõğàíèòüÊàêToolStripMenuItem->Size = System::Drawing::Size(201, 26);
			this->ñîõğàíèòüÊàêToolStripMenuItem->Text = L"Ñîõğàíèòü êàê...";
			// 
			// ôàéëToolStripMenuItem1
			// 
			this->ôàéëToolStripMenuItem1->Name = L"ôàéëToolStripMenuItem1";
			this->ôàéëToolStripMenuItem1->Size = System::Drawing::Size(156, 26);
			this->ôàéëToolStripMenuItem1->Text = L"Ôàéë";
			// 
			// òåêñòToolStripMenuItem
			// 
			this->òåêñòToolStripMenuItem->Name = L"òåêñòToolStripMenuItem";
			this->òåêñòToolStripMenuItem->Size = System::Drawing::Size(156, 26);
			this->òåêñòToolStripMenuItem->Text = L"Òåêñò";
			// 
			// êàğòèíêóToolStripMenuItem
			// 
			this->êàğòèíêóToolStripMenuItem->Name = L"êàğòèíêóToolStripMenuItem";
			this->êàğòèíêóToolStripMenuItem->Size = System::Drawing::Size(156, 26);
			this->êàğòèíêóToolStripMenuItem->Text = L"Êàğòèíêó";
			// 
			// btnCalculate
			// 
			this->btnCalculate->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->btnCalculate->Location = System::Drawing::Point(302, 265);
			this->btnCalculate->Name = L"btnCalculate";
			this->btnCalculate->Size = System::Drawing::Size(161, 90);
			this->btnCalculate->TabIndex = 6;
			this->btnCalculate->Text = L"Ïîñ÷èòàòü";
			this->btnCalculate->UseVisualStyleBackColor = true;
			this->btnCalculate->Click += gcnew System::EventHandler(this, &MainForm::btnCalculate_Click);
			// 
			// lblResult
			// 
			this->lblResult->AutoSize = true;
			this->lblResult->Font = (gcnew System::Drawing::Font(L"Old English Text MT", 16.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lblResult->Location = System::Drawing::Point(602, 338);
			this->lblResult->Name = L"lblResult";
			this->lblResult->Size = System::Drawing::Size(82, 33);
			this->lblResult->TabIndex = 7;
			this->lblResult->Text = L"label2";
			// 
			// button3
			// 
			this->button3->Location = System::Drawing::Point(337, 421);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(253, 97);
			this->button3->TabIndex = 9;
			this->button3->Text = L"button3";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &MainForm::button3_Click);
			// 
			// checkBox2
			// 
			this->checkBox2->AutoSize = true;
			this->checkBox2->Checked = true;
			this->checkBox2->CheckState = System::Windows::Forms::CheckState::Checked;
			this->checkBox2->Location = System::Drawing::Point(781, 329);
			this->checkBox2->Name = L"checkBox2";
			this->checkBox2->Size = System::Drawing::Size(95, 20);
			this->checkBox2->TabIndex = 10;
			this->checkBox2->Text = L"checkBox2";
			this->checkBox2->UseVisualStyleBackColor = true;
			// 
			// checkBox3
			// 
			this->checkBox3->AutoSize = true;
			this->checkBox3->Location = System::Drawing::Point(781, 356);
			this->checkBox3->Name = L"checkBox3";
			this->checkBox3->Size = System::Drawing::Size(95, 20);
			this->checkBox3->TabIndex = 11;
			this->checkBox3->Text = L"checkBox3";
			this->checkBox3->UseVisualStyleBackColor = true;
			// 
			// checkBox4
			// 
			this->checkBox4->AutoSize = true;
			this->checkBox4->Location = System::Drawing::Point(781, 383);
			this->checkBox4->Name = L"checkBox4";
			this->checkBox4->Size = System::Drawing::Size(95, 20);
			this->checkBox4->TabIndex = 12;
			this->checkBox4->Text = L"checkBox4";
			this->checkBox4->UseVisualStyleBackColor = true;
			// 
			// radioButton1
			// 
			this->radioButton1->AutoSize = true;
			this->radioButton1->Location = System::Drawing::Point(951, 338);
			this->radioButton1->Name = L"radioButton1";
			this->radioButton1->Size = System::Drawing::Size(103, 20);
			this->radioButton1->TabIndex = 13;
			this->radioButton1->TabStop = true;
			this->radioButton1->Text = L"radioButton1";
			this->radioButton1->UseVisualStyleBackColor = true;
			// 
			// radioButton2
			// 
			this->radioButton2->AutoSize = true;
			this->radioButton2->Location = System::Drawing::Point(951, 365);
			this->radioButton2->Name = L"radioButton2";
			this->radioButton2->Size = System::Drawing::Size(103, 20);
			this->radioButton2->TabIndex = 14;
			this->radioButton2->TabStop = true;
			this->radioButton2->Text = L"radioButton2";
			this->radioButton2->UseVisualStyleBackColor = true;
			// 
			// radioButton3
			// 
			this->radioButton3->AutoSize = true;
			this->radioButton3->Location = System::Drawing::Point(951, 400);
			this->radioButton3->Name = L"radioButton3";
			this->radioButton3->Size = System::Drawing::Size(103, 20);
			this->radioButton3->TabIndex = 15;
			this->radioButton3->TabStop = true;
			this->radioButton3->Text = L"radioButton3";
			this->radioButton3->UseVisualStyleBackColor = true;
			// 
			// panel1
			// 
			this->panel1->Controls->Add(this->radioButton5);
			this->panel1->Controls->Add(this->radioButton4);
			this->panel1->Location = System::Drawing::Point(743, 467);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(228, 110);
			this->panel1->TabIndex = 16;
			// 
			// radioButton5
			// 
			this->radioButton5->AutoSize = true;
			this->radioButton5->Location = System::Drawing::Point(29, 38);
			this->radioButton5->Name = L"radioButton5";
			this->radioButton5->Size = System::Drawing::Size(103, 20);
			this->radioButton5->TabIndex = 18;
			this->radioButton5->TabStop = true;
			this->radioButton5->Text = L"radioButton5";
			this->radioButton5->UseVisualStyleBackColor = true;
			// 
			// radioButton4
			// 
			this->radioButton4->AutoSize = true;
			this->radioButton4->Location = System::Drawing::Point(21, 12);
			this->radioButton4->Name = L"radioButton4";
			this->radioButton4->Size = System::Drawing::Size(103, 20);
			this->radioButton4->TabIndex = 17;
			this->radioButton4->TabStop = true;
			this->radioButton4->Text = L"radioButton4";
			this->radioButton4->UseVisualStyleBackColor = true;
			// 
			// MainForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::SystemColors::ActiveBorder;
			this->ClientSize = System::Drawing::Size(1214, 606);
			this->Controls->Add(this->panel1);
			this->Controls->Add(this->radioButton3);
			this->Controls->Add(this->radioButton2);
			this->Controls->Add(this->radioButton1);
			this->Controls->Add(this->checkBox4);
			this->Controls->Add(this->checkBox3);
			this->Controls->Add(this->checkBox2);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->lblResult);
			this->Controls->Add(this->btnCalculate);
			this->Controls->Add(this->tabControl1);
			this->Controls->Add(this->linkLabel1);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->menuStrip1);
			this->MainMenuStrip = this->menuStrip1;
			this->Name = L"MainForm";
			this->Text = L"MainForm";
			this->tabControl1->ResumeLayout(false);
			this->tabPage1->ResumeLayout(false);
			this->tabPage2->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			this->menuStrip1->ResumeLayout(false);
			this->menuStrip1->PerformLayout();
			this->panel1->ResumeLayout(false);
			this->panel1->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
		//Íàæàòèå íà êíîïêó
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
		//Îáúåêò, õğàíÿùèé, êàêóş êíîïêó íàæàë ïîëüçîâàòåëü
		System::Windows::Forms::DialogResult dr;
		//Ïîêàç äèàëîãîâîãî îêíà
		dr = MessageBox::Show(
			//Íàäïèñü íà îêíå
			"ABOBA",
			//Íàäïèñü â çàãîëîâêå 
			"BIBA",
			//Êàêèå êíîïêè îòîáğàæàòü
			System::Windows::Forms::MessageBoxButtons::YesNo,
			//Êàêîé çíà÷îê îòîáğàæàòü
			System::Windows::Forms::MessageBoxIcon::Error
		);
		//Èñõîäÿ èç òîãî, ÷òî íàæàë ïîëüçîâàòåëü
		switch (dr)
		{
		case System::Windows::Forms::DialogResult::None:
			break;
		case System::Windows::Forms::DialogResult::OK:
			break;
		case System::Windows::Forms::DialogResult::Cancel:
			break;
		case System::Windows::Forms::DialogResult::Abort:
			this->Close();
			break;
		case System::Windows::Forms::DialogResult::Retry:
			System::Diagnostics::Process::Start("https://kbp.by/");
			

			break;
		case System::Windows::Forms::DialogResult::Ignore:
			System::Diagnostics::Process::Start("https://www.mil.by/ru/all_about/officers/");
			break;
		case System::Windows::Forms::DialogResult::Yes:
			break;
		case System::Windows::Forms::DialogResult::No:
			break;
		default:
			break;
		}
	}
	private: System::Void button1_MouseEnter(System::Object^ sender, System::EventArgs^ e) {
		Random rd;
		this->BackColor = System::Drawing::Color::FromArgb(
			rd.Next(0, 255),
			rd.Next(0, 255),
			rd.Next(0, 255)
		);
	}
	/// <summary>
	/// Îáğàáîò÷èê ñîáûòèÿ íàæàòèÿ íà êíîïêó ïîäñ÷¸òà
	/// </summary>
	/// <param name="sender"></param>
	/// <param name="e"></param>
	/// <returns></returns>
	private: System::Void btnCalculate_Click(System::Object^ sender, System::EventArgs^ e) {
		try {
			double eva = Convert::ToDouble(textBox1->Text);
			lblResult->Text = Math::Pow(eva, 2).ToString();
		}
		catch (Exception^ ex) {
			MessageBox::Show(ex->Message);
		}
		catch (FormatException^ ex) {
	
			MessageBox::Show(ex->Message);
		}
	}
	private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e) {


	}


};
}
