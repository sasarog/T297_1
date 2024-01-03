#pragma once

namespace Kino {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// —водка дл€ KinoMain
	/// </summary>
	public ref class KinoMain : public System::Windows::Forms::Form
	{
	public:
		KinoMain(void)
		{
			InitializeComponent();
			//
			//TODO: добавьте код конструктора
			//
		}

	protected:
		/// <summary>
		/// ќсвободить все используемые ресурсы.
		/// </summary>
		~KinoMain()
		{
			if (components)
			{
				delete components;
			}
		}
	private: AxWMPLib::AxWindowsMediaPlayer^ axWMP1;
	protected:

	protected:
	private: System::Windows::Forms::Button^ btnPlay;
	private: System::Windows::Forms::Button^ btnPause;
	private: System::Windows::Forms::Button^ btnStop;
	private: System::Windows::Forms::Button^ btnOpen;
	private: System::Windows::Forms::Button^ btnFullScreen;

	private: System::Windows::Forms::TrackBar^ trackBar1;
	private: System::Windows::Forms::TrackBar^ trackBarVolume;

	private:
		/// <summary>
		/// ќб€зательна€ переменна€ конструктора.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// “ребуемый метод дл€ поддержки конструктора Ч не измен€йте 
		/// содержимое этого метода с помощью редактора кода.
		/// </summary>
		void InitializeComponent(void)
		{
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(KinoMain::typeid));
			this->axWMP1 = (gcnew AxWMPLib::AxWindowsMediaPlayer());
			this->btnPlay = (gcnew System::Windows::Forms::Button());
			this->btnPause = (gcnew System::Windows::Forms::Button());
			this->btnStop = (gcnew System::Windows::Forms::Button());
			this->btnOpen = (gcnew System::Windows::Forms::Button());
			this->btnFullScreen = (gcnew System::Windows::Forms::Button());
			this->trackBar1 = (gcnew System::Windows::Forms::TrackBar());
			this->trackBarVolume = (gcnew System::Windows::Forms::TrackBar());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->axWMP1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->trackBar1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->trackBarVolume))->BeginInit();
			this->SuspendLayout();
			// 
			// axWMP1
			// 
			this->axWMP1->Enabled = true;
			this->axWMP1->Location = System::Drawing::Point(61, 58);
			this->axWMP1->Name = L"axWMP1";
			this->axWMP1->OcxState = (cli::safe_cast<System::Windows::Forms::AxHost::State^>(resources->GetObject(L"axWMP1.OcxState")));
			this->axWMP1->Size = System::Drawing::Size(1045, 438);
			this->axWMP1->TabIndex = 0;
			this->axWMP1->PlayStateChange += gcnew AxWMPLib::_WMPOCXEvents_PlayStateChangeEventHandler(this, &KinoMain::axWMP1_PlayStateChange);
			this->axWMP1->KeyUpEvent += gcnew AxWMPLib::_WMPOCXEvents_KeyUpEventHandler(this, &KinoMain::axWMP1_KeyUpEvent);
			// 
			// btnPlay
			// 
			this->btnPlay->Location = System::Drawing::Point(72, 650);
			this->btnPlay->Name = L"btnPlay";
			this->btnPlay->Size = System::Drawing::Size(75, 23);
			this->btnPlay->TabIndex = 1;
			this->btnPlay->Text = L"Play";
			this->btnPlay->UseVisualStyleBackColor = true;
			this->btnPlay->Click += gcnew System::EventHandler(this, &KinoMain::btnPlay_Click);
			// 
			// btnPause
			// 
			this->btnPause->Location = System::Drawing::Point(175, 650);
			this->btnPause->Name = L"btnPause";
			this->btnPause->Size = System::Drawing::Size(75, 23);
			this->btnPause->TabIndex = 2;
			this->btnPause->Text = L"Pause";
			this->btnPause->UseVisualStyleBackColor = true;
			this->btnPause->Click += gcnew System::EventHandler(this, &KinoMain::btnPause_Click);
			// 
			// btnStop
			// 
			this->btnStop->Location = System::Drawing::Point(283, 650);
			this->btnStop->Name = L"btnStop";
			this->btnStop->Size = System::Drawing::Size(75, 23);
			this->btnStop->TabIndex = 3;
			this->btnStop->Text = L"Stop";
			this->btnStop->UseVisualStyleBackColor = true;
			this->btnStop->Click += gcnew System::EventHandler(this, &KinoMain::btnStop_Click);
			// 
			// btnOpen
			// 
			this->btnOpen->Location = System::Drawing::Point(61, 12);
			this->btnOpen->Name = L"btnOpen";
			this->btnOpen->Size = System::Drawing::Size(75, 23);
			this->btnOpen->TabIndex = 4;
			this->btnOpen->Text = L"Open";
			this->btnOpen->UseVisualStyleBackColor = true;
			this->btnOpen->Click += gcnew System::EventHandler(this, &KinoMain::btnOpen_Click);
			// 
			// btnFullScreen
			// 
			this->btnFullScreen->Location = System::Drawing::Point(550, 650);
			this->btnFullScreen->Name = L"btnFullScreen";
			this->btnFullScreen->Size = System::Drawing::Size(100, 23);
			this->btnFullScreen->TabIndex = 5;
			this->btnFullScreen->Text = L"FullScreen";
			this->btnFullScreen->UseVisualStyleBackColor = true;
			this->btnFullScreen->Click += gcnew System::EventHandler(this, &KinoMain::btnFullScreen_Click);
			// 
			// trackBar1
			// 
			this->trackBar1->Location = System::Drawing::Point(72, 588);
			this->trackBar1->Name = L"trackBar1";
			this->trackBar1->Size = System::Drawing::Size(1034, 56);
			this->trackBar1->TabIndex = 6;
			this->trackBar1->Scroll += gcnew System::EventHandler(this, &KinoMain::trackBar1_Scroll);
			this->trackBar1->DragDrop += gcnew System::Windows::Forms::DragEventHandler(this, &KinoMain::trackBar1_DragDrop);
			this->trackBar1->MouseUp += gcnew System::Windows::Forms::MouseEventHandler(this, &KinoMain::trackBar1_MouseUp);
			// 
			// trackBarVolume
			// 
			this->trackBarVolume->Location = System::Drawing::Point(-1, 58);
			this->trackBarVolume->Maximum = 100;
			this->trackBarVolume->Name = L"trackBarVolume";
			this->trackBarVolume->Orientation = System::Windows::Forms::Orientation::Vertical;
			this->trackBarVolume->Size = System::Drawing::Size(56, 467);
			this->trackBarVolume->TabIndex = 7;
			this->trackBarVolume->MouseUp += gcnew System::Windows::Forms::MouseEventHandler(this, &KinoMain::trackBarVolume_MouseUp);
			// 
			// KinoMain
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1354, 719);
			this->Controls->Add(this->trackBarVolume);
			this->Controls->Add(this->trackBar1);
			this->Controls->Add(this->btnFullScreen);
			this->Controls->Add(this->btnOpen);
			this->Controls->Add(this->btnStop);
			this->Controls->Add(this->btnPause);
			this->Controls->Add(this->btnPlay);
			this->Controls->Add(this->axWMP1);
			this->Name = L"KinoMain";
			this->Text = L"KinoMain";
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->axWMP1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->trackBar1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->trackBarVolume))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void btnOpen_Click(System::Object^ sender, System::EventArgs^ e) {
		OpenFileDialog^ ofd = gcnew OpenFileDialog();
		
		if (ofd->ShowDialog() == System::Windows::Forms::DialogResult::OK) {
			axWMP1->URL = ofd->FileName;
		}
	}
private: System::Void btnPlay_Click(System::Object^ sender, System::EventArgs^ e) {
	if (axWMP1->URL != "") {
		axWMP1->Ctlcontrols->play();
	}
}
private: System::Void btnPause_Click(System::Object^ sender, System::EventArgs^ e) {
	axWMP1->Ctlcontrols->pause();
}
private: System::Void btnStop_Click(System::Object^ sender, System::EventArgs^ e) {
	axWMP1->Ctlcontrols->stop();
}
private: System::Void axWMP1_PlayStateChange(System::Object^ sender, AxWMPLib::_WMPOCXEvents_PlayStateChangeEvent^ e) {
	switch (e->newState)
	{
		//Start play
	case 3:
		trackBar1->Maximum =
			axWMP1->currentMedia->duration;
		trackBar1->SmallChange = 10;
		break;
	default:
		break;
	}
}
private: System::Void trackBar1_DragDrop(System::Object^ sender, System::Windows::Forms::DragEventArgs^ e) {
	
}
private: System::Void trackBar1_Scroll(System::Object^ sender, System::EventArgs^ e) {

}
private: System::Void trackBar1_MouseUp(System::Object^ sender, System::Windows::Forms::MouseEventArgs^ e) {
	axWMP1->Ctlcontrols->currentPosition =
		trackBar1->Value;
}
private: System::Void trackBarVolume_MouseUp(System::Object^ sender, System::Windows::Forms::MouseEventArgs^ e) {
	axWMP1->settings->volume = trackBarVolume->Value;
}
private: System::Void btnFullScreen_Click(System::Object^ sender, System::EventArgs^ e) {
	axWMP1->fullScreen = true;
}
private: System::Void axWMP1_KeyUpEvent(System::Object^ sender, AxWMPLib::_WMPOCXEvents_KeyUpEvent^ e) {
	if (static_cast<Keys>(e->nKeyCode) == Keys::Escape) {
		axWMP1->fullScreen = false;
	}
}
};
}
