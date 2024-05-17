#pragma once

namespace Lab5 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Ñâîäêà äëÿ MyForm
	/// </summary>
	public ref class MyForm : public System::Windows::Forms::Form
	{
	public:
		MyForm(void)
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
		~MyForm()
		{
			if (components)
			{
				delete components;
			}
		}

	protected:





	private: System::Windows::Forms::ContextMenuStrip^ contextMenuStrip1;
	private: System::Windows::Forms::ContextMenuStrip^ contextMenuStrip2;
	private: System::Windows::Forms::ContextMenuStrip^ contextMenuStrip3;
	private: System::Windows::Forms::ContextMenuStrip^ contextMenuStrip4;
	private: System::Windows::Forms::MenuStrip^ menuStrip1;
	private: System::Windows::Forms::ToolStripMenuItem^ êîë³ğToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ ôîíToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ òåêñòToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ ÷åğâîíèéToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ çåëåíèéToolStripMenuItem;

	private: System::Windows::Forms::ToolStripMenuItem^ âèõ³äToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ ñèí³éToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ ÷åğâîíèéToolStripMenuItem1;
	private: System::Windows::Forms::ToolStripMenuItem^ çåëåíèéToolStripMenuItem1;
	private: System::Windows::Forms::ToolStripMenuItem^ ñèí³éToolStripMenuItem1;
	private: System::ComponentModel::BackgroundWorker^ backgroundWorker1;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::ContextMenuStrip^ contextMenuStrip5;
	private: System::Windows::Forms::ContextMenuStrip^ contextMenuStrip6;





	private: System::ComponentModel::IContainer^ components;

	private:
		/// <summary>
		/// Îáÿçàòåëüíàÿ ïåğåìåííàÿ êîíñòğóêòîğà.
		/// </summary>


#pragma region Windows Form Designer generated code
		/// <summary>
		/// Òğåáóåìûé ìåòîä äëÿ ïîääåğæêè êîíñòğóêòîğà — íå èçìåíÿéòå 
		/// ñîäåğæèìîå ıòîãî ìåòîäà ñ ïîìîùüş ğåäàêòîğà êîäà.
		/// </summary>
		void InitializeComponent(void)
		{
			this->components = (gcnew System::ComponentModel::Container());
			this->contextMenuStrip1 = (gcnew System::Windows::Forms::ContextMenuStrip(this->components));
			this->contextMenuStrip2 = (gcnew System::Windows::Forms::ContextMenuStrip(this->components));
			this->contextMenuStrip3 = (gcnew System::Windows::Forms::ContextMenuStrip(this->components));
			this->contextMenuStrip4 = (gcnew System::Windows::Forms::ContextMenuStrip(this->components));
			this->menuStrip1 = (gcnew System::Windows::Forms::MenuStrip());
			this->êîë³ğToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->ôîíToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->÷åğâîíèéToolStripMenuItem1 = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->çåëåíèéToolStripMenuItem1 = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->ñèí³éToolStripMenuItem1 = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->òåêñòToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->÷åğâîíèéToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->çåëåíèéToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->ñèí³éToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->âèõ³äToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->backgroundWorker1 = (gcnew System::ComponentModel::BackgroundWorker());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->contextMenuStrip5 = (gcnew System::Windows::Forms::ContextMenuStrip(this->components));
			this->contextMenuStrip6 = (gcnew System::Windows::Forms::ContextMenuStrip(this->components));
			this->menuStrip1->SuspendLayout();
			this->SuspendLayout();
			// 
			// contextMenuStrip1
			// 
			this->contextMenuStrip1->Name = L"contextMenuStrip1";
			this->contextMenuStrip1->Size = System::Drawing::Size(61, 4);
			// 
			// contextMenuStrip2
			// 
			this->contextMenuStrip2->Name = L"contextMenuStrip2";
			this->contextMenuStrip2->Size = System::Drawing::Size(61, 4);
			// 
			// contextMenuStrip3
			// 
			this->contextMenuStrip3->Name = L"contextMenuStrip3";
			this->contextMenuStrip3->Size = System::Drawing::Size(61, 4);
			// 
			// contextMenuStrip4
			// 
			this->contextMenuStrip4->Name = L"contextMenuStrip4";
			this->contextMenuStrip4->Size = System::Drawing::Size(61, 4);
			// 
			// menuStrip1
			// 
			this->menuStrip1->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(2) {
				this->êîë³ğToolStripMenuItem,
					this->âèõ³äToolStripMenuItem
			});
			this->menuStrip1->Location = System::Drawing::Point(0, 0);
			this->menuStrip1->Name = L"menuStrip1";
			this->menuStrip1->Size = System::Drawing::Size(439, 24);
			this->menuStrip1->TabIndex = 4;
			this->menuStrip1->Text = L"menuStrip1";
			this->menuStrip1->ItemClicked += gcnew System::Windows::Forms::ToolStripItemClickedEventHandler(this, &MyForm::menuStrip1_ItemClicked);
			// 
			// êîë³ğToolStripMenuItem
			// 
			this->êîë³ğToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(2) {
				this->ôîíToolStripMenuItem,
					this->òåêñòToolStripMenuItem
			});
			this->êîë³ğToolStripMenuItem->Name = L"êîë³ğToolStripMenuItem";
			this->êîë³ğToolStripMenuItem->Size = System::Drawing::Size(50, 20);
			this->êîë³ğToolStripMenuItem->Text = L"Êîë³ğ";
			// 
			// ôîíToolStripMenuItem
			// 
			this->ôîíToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(3) {
				this->÷åğâîíèéToolStripMenuItem1,
					this->çåëåíèéToolStripMenuItem1, this->ñèí³éToolStripMenuItem1
			});
			this->ôîíToolStripMenuItem->Name = L"ôîíToolStripMenuItem";
			this->ôîíToolStripMenuItem->Size = System::Drawing::Size(180, 22);
			this->ôîíToolStripMenuItem->Text = L"Ôîí";
			// 
			// ÷åğâîíèéToolStripMenuItem1
			// 
			this->÷åğâîíèéToolStripMenuItem1->Name = L"÷åğâîíèéToolStripMenuItem1";
			this->÷åğâîíèéToolStripMenuItem1->Size = System::Drawing::Size(129, 22);
			this->÷åğâîíèéToolStripMenuItem1->Text = L"×åğâîíèé";
			this->÷åğâîíèéToolStripMenuItem1->Click += gcnew System::EventHandler(this, &MyForm::÷åğâîíèéToolStripMenuItem1_Click_1);
			// 
			// çåëåíèéToolStripMenuItem1
			// 
			this->çåëåíèéToolStripMenuItem1->Name = L"çåëåíèéToolStripMenuItem1";
			this->çåëåíèéToolStripMenuItem1->Size = System::Drawing::Size(129, 22);
			this->çåëåíèéToolStripMenuItem1->Text = L"Çåëåíèé";
			this->çåëåíèéToolStripMenuItem1->Click += gcnew System::EventHandler(this, &MyForm::çåëåíèéToolStripMenuItem1_Click_1);
			// 
			// ñèí³éToolStripMenuItem1
			// 
			this->ñèí³éToolStripMenuItem1->Name = L"ñèí³éToolStripMenuItem1";
			this->ñèí³éToolStripMenuItem1->Size = System::Drawing::Size(129, 22);
			this->ñèí³éToolStripMenuItem1->Text = L"Ñèí³é";
			this->ñèí³éToolStripMenuItem1->Click += gcnew System::EventHandler(this, &MyForm::ñèí³éToolStripMenuItem1_Click_1);
			// 
			// òåêñòToolStripMenuItem
			// 
			this->òåêñòToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(3) {
				this->÷åğâîíèéToolStripMenuItem,
					this->çåëåíèéToolStripMenuItem, this->ñèí³éToolStripMenuItem
			});
			this->òåêñòToolStripMenuItem->Name = L"òåêñòToolStripMenuItem";
			this->òåêñòToolStripMenuItem->Size = System::Drawing::Size(180, 22);
			this->òåêñòToolStripMenuItem->Text = L"Òåêñò";
			// 
			// ÷åğâîíèéToolStripMenuItem
			// 
			this->÷åğâîíèéToolStripMenuItem->Name = L"÷åğâîíèéToolStripMenuItem";
			this->÷åğâîíèéToolStripMenuItem->Size = System::Drawing::Size(180, 22);
			this->÷åğâîíèéToolStripMenuItem->Text = L"×åğâîíèé";
			this->÷åğâîíèéToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::÷åğâîíèéToolStripMenuItem_Click);
			// 
			// çåëåíèéToolStripMenuItem
			// 
			this->çåëåíèéToolStripMenuItem->Name = L"çåëåíèéToolStripMenuItem";
			this->çåëåíèéToolStripMenuItem->Size = System::Drawing::Size(180, 22);
			this->çåëåíèéToolStripMenuItem->Text = L"Çåëåíèé";
			this->çåëåíèéToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::çåëåíèéToolStripMenuItem_Click_1);
			// 
			// ñèí³éToolStripMenuItem
			// 
			this->ñèí³éToolStripMenuItem->Name = L"ñèí³éToolStripMenuItem";
			this->ñèí³éToolStripMenuItem->Size = System::Drawing::Size(180, 22);
			this->ñèí³éToolStripMenuItem->Text = L"Ñèí³é";
			this->ñèí³éToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::ñèí³éToolStripMenuItem_Click_1);
			// 
			// âèõ³äToolStripMenuItem
			// 
			this->âèõ³äToolStripMenuItem->Name = L"âèõ³äToolStripMenuItem";
			this->âèõ³äToolStripMenuItem->Size = System::Drawing::Size(48, 20);
			this->âèõ³äToolStripMenuItem->Text = L"Âèõ³ä";
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->ContextMenuStrip = this->contextMenuStrip1;
			this->label1->Location = System::Drawing::Point(210, 192);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(37, 13);
			this->label1->TabIndex = 5;
			this->label1->Text = L"Òåêñò";
			this->label1->Click += gcnew System::EventHandler(this, &MyForm::label1_Click);
			// 
			// contextMenuStrip5
			// 
			this->contextMenuStrip5->Name = L"contextMenuStrip5";
			this->contextMenuStrip5->Size = System::Drawing::Size(61, 4);
			// 
			// contextMenuStrip6
			// 
			this->contextMenuStrip6->Name = L"contextMenuStrip6";
			this->contextMenuStrip6->Size = System::Drawing::Size(61, 4);
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(439, 392);
			this->ContextMenuStrip = this->contextMenuStrip2;
			this->Controls->Add(this->label1);
			this->Controls->Add(this->menuStrip1);
			this->MainMenuStrip = this->menuStrip1;
			this->Name = L"MyForm";
			this->Text = L"MyForm";
			this->Load += gcnew System::EventHandler(this, &MyForm::MyForm_Load);
			this->menuStrip1->ResumeLayout(false);
			this->menuStrip1->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	
private: System::Void label1_Click(System::Object^ sender, System::EventArgs^ e) {
}


private: System::Void ñèí³éToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
	this->label1->ForeColor = Color::Blue;
}

private: System::Void menuStrip1_ItemClicked(System::Object^ sender, System::Windows::Forms::ToolStripItemClickedEventArgs^ e) {
}
private: System::Void MyForm_Load(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void ÷åğâîíèéToolStripMenuItem1_Click_1(System::Object^ sender, System::EventArgs^ e) {
	this->BackColor = Color::Red;
}
private: System::Void çåëåíèéToolStripMenuItem1_Click_1(System::Object^ sender, System::EventArgs^ e) {
	this->BackColor = Color::Green;
}
private: System::Void ñèí³éToolStripMenuItem1_Click_1(System::Object^ sender, System::EventArgs^ e) {
	this->BackColor = Color::Blue;
}
private: System::Void ÷åğâîíèéToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
	this->label1->ForeColor = Color::Red;
}
private: System::Void çåëåíèéToolStripMenuItem_Click_1(System::Object^ sender, System::EventArgs^ e) {
	this->label1->ForeColor = Color::Green;
}
private: System::Void ñèí³éToolStripMenuItem_Click_1(System::Object^ sender, System::EventArgs^ e) {
	this->label1->ForeColor = Color::Blue;
}
};
}
