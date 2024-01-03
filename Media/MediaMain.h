#pragma once

namespace MediaSpace {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Ñâîäêà äëÿ MediaMain
	/// </summary>
	public ref class MediaMain : public System::Windows::Forms::Form
	{
	public:
		MediaMain(void)
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
		~MediaMain()
		{
			if (components)
			{
				delete components;
			}
		}
	private: AxWMPLib::AxWindowsMediaPlayer^ axWindowsMediaPlayer1;
	protected:
	private: System::Windows::Forms::MenuStrip^ menuStrip1;
	private: System::Windows::Forms::ToolStripMenuItem^ ôàéëToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ îòêğûòüToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ âûõîäToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ ïğàâêàToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ çàïóñêToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ ïàóçàToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ ãğîìêîñòüToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ ãğîìêîñòüToolStripMenuItem1;
	private: System::Windows::Forms::ToolStripMenuItem^ ñòîïToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ âèäToolStripMenuItem;

	private:
		/// <summary>
		/// Îáÿçàòåëüíàÿ ïåğåìåííàÿ êîíñòğóêòîğà.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Òğåáóåìûé ìåòîä äëÿ ïîääåğæêè êîíñòğóêòîğà — íå èçìåíÿéòå 
		/// ñîäåğæèìîå ıòîãî ìåòîäà ñ ïîìîùüş ğåäàêòîğà êîäà.
		/// </summary>
		void InitializeComponent(void)
		{
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(MediaMain::typeid));
			this->axWindowsMediaPlayer1 = (gcnew AxWMPLib::AxWindowsMediaPlayer());
			this->menuStrip1 = (gcnew System::Windows::Forms::MenuStrip());
			this->ôàéëToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->ïğàâêàToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->âèäToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->îòêğûòüToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->âûõîäToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->çàïóñêToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->ïàóçàToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->ãğîìêîñòüToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->ãğîìêîñòüToolStripMenuItem1 = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->ñòîïToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->axWindowsMediaPlayer1))->BeginInit();
			this->menuStrip1->SuspendLayout();
			this->SuspendLayout();
			// 
			// axWindowsMediaPlayer1
			// 
			this->axWindowsMediaPlayer1->Enabled = true;
			this->axWindowsMediaPlayer1->Location = System::Drawing::Point(57, 115);
			this->axWindowsMediaPlayer1->Name = L"axWindowsMediaPlayer1";
			this->axWindowsMediaPlayer1->OcxState = (cli::safe_cast<System::Windows::Forms::AxHost::State^>(resources->GetObject(L"axWindowsMediaPlayer1.OcxState")));
			this->axWindowsMediaPlayer1->Size = System::Drawing::Size(1137, 455);
			this->axWindowsMediaPlayer1->TabIndex = 0;
			// 
			// menuStrip1
			// 
			this->menuStrip1->ImageScalingSize = System::Drawing::Size(20, 20);
			this->menuStrip1->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(3) {
				this->ôàéëToolStripMenuItem,
					this->ïğàâêàToolStripMenuItem, this->âèäToolStripMenuItem
			});
			this->menuStrip1->Location = System::Drawing::Point(0, 0);
			this->menuStrip1->Name = L"menuStrip1";
			this->menuStrip1->Size = System::Drawing::Size(1305, 28);
			this->menuStrip1->TabIndex = 1;
			this->menuStrip1->Text = L"menuStrip1";
			// 
			// ôàéëToolStripMenuItem
			// 
			this->ôàéëToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(2) {
				this->îòêğûòüToolStripMenuItem,
					this->âûõîäToolStripMenuItem
			});
			this->ôàéëToolStripMenuItem->Name = L"ôàéëToolStripMenuItem";
			this->ôàéëToolStripMenuItem->Size = System::Drawing::Size(59, 24);
			this->ôàéëToolStripMenuItem->Text = L"Ôàéë";
			// 
			// ïğàâêàToolStripMenuItem
			// 
			this->ïğàâêàToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(5) {
				this->çàïóñêToolStripMenuItem,
					this->ïàóçàToolStripMenuItem, this->ãğîìêîñòüToolStripMenuItem, this->ãğîìêîñòüToolStripMenuItem1, this->ñòîïToolStripMenuItem
			});
			this->ïğàâêàToolStripMenuItem->Name = L"ïğàâêàToolStripMenuItem";
			this->ïğàâêàToolStripMenuItem->Size = System::Drawing::Size(74, 24);
			this->ïğàâêàToolStripMenuItem->Text = L"Ïğàâêà";
			// 
			// âèäToolStripMenuItem
			// 
			this->âèäToolStripMenuItem->Name = L"âèäToolStripMenuItem";
			this->âèäToolStripMenuItem->Size = System::Drawing::Size(49, 24);
			this->âèäToolStripMenuItem->Text = L"Âèä";
			// 
			// îòêğûòüToolStripMenuItem
			// 
			this->îòêğûòüToolStripMenuItem->Name = L"îòêğûòüToolStripMenuItem";
			this->îòêğûòüToolStripMenuItem->Size = System::Drawing::Size(224, 26);
			this->îòêğûòüToolStripMenuItem->Text = L"Îòêğûòü";
			this->îòêğûòüToolStripMenuItem->Click += gcnew System::EventHandler(this, &MediaMain::îòêğûòüToolStripMenuItem_Click);
			// 
			// âûõîäToolStripMenuItem
			// 
			this->âûõîäToolStripMenuItem->Name = L"âûõîäToolStripMenuItem";
			this->âûõîäToolStripMenuItem->Size = System::Drawing::Size(224, 26);
			this->âûõîäToolStripMenuItem->Text = L"Âûõîä";
			// 
			// çàïóñêToolStripMenuItem
			// 
			this->çàïóñêToolStripMenuItem->Name = L"çàïóñêToolStripMenuItem";
			this->çàïóñêToolStripMenuItem->Size = System::Drawing::Size(224, 26);
			this->çàïóñêToolStripMenuItem->Text = L"Çàïóñê";
			// 
			// ïàóçàToolStripMenuItem
			// 
			this->ïàóçàToolStripMenuItem->Name = L"ïàóçàToolStripMenuItem";
			this->ïàóçàToolStripMenuItem->Size = System::Drawing::Size(224, 26);
			this->ïàóçàToolStripMenuItem->Text = L"Ïàóçà";
			// 
			// ãğîìêîñòüToolStripMenuItem
			// 
			this->ãğîìêîñòüToolStripMenuItem->Name = L"ãğîìêîñòüToolStripMenuItem";
			this->ãğîìêîñòüToolStripMenuItem->Size = System::Drawing::Size(224, 26);
			this->ãğîìêîñòüToolStripMenuItem->Text = L"Ãğîìêîñòü +";
			// 
			// ãğîìêîñòüToolStripMenuItem1
			// 
			this->ãğîìêîñòüToolStripMenuItem1->Name = L"ãğîìêîñòüToolStripMenuItem1";
			this->ãğîìêîñòüToolStripMenuItem1->Size = System::Drawing::Size(224, 26);
			this->ãğîìêîñòüToolStripMenuItem1->Text = L"Ãğîìêîñòü -";
			// 
			// ñòîïToolStripMenuItem
			// 
			this->ñòîïToolStripMenuItem->Name = L"ñòîïToolStripMenuItem";
			this->ñòîïToolStripMenuItem->Size = System::Drawing::Size(224, 26);
			this->ñòîïToolStripMenuItem->Text = L"Ñòîï";
			// 
			// MediaMain
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1305, 708);
			this->Controls->Add(this->axWindowsMediaPlayer1);
			this->Controls->Add(this->menuStrip1);
			this->MainMenuStrip = this->menuStrip1;
			this->Name = L"MediaMain";
			this->Text = L"MediaMain";
			this->Load += gcnew System::EventHandler(this, &MediaMain::MediaMain_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->axWindowsMediaPlayer1))->EndInit();
			this->menuStrip1->ResumeLayout(false);
			this->menuStrip1->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void MediaMain_Load(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void îòêğûòüToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {

	}
};
}
