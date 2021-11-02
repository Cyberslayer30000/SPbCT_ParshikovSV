#pragma once

namespace ЛР153 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Сводка для MyForm
	/// </summary>
	public ref class MyForm : public System::Windows::Forms::Form
	{
	public:
		MyForm(void)
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
		~MyForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ label1;
	protected:
	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::TextBox^ textBox2;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::TextBox^ textBox3;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Button^ button3;

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
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(13, 31);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(142, 20);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Киллометраж, км";
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(17, 55);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(100, 26);
			this->textBox1->TabIndex = 1;
			this->textBox1->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &MyForm::textBox1_KeyPress);
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(17, 88);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(172, 20);
			this->label2->TabIndex = 2;
			this->label2->Text = L"Расход топлива, л/км";
			// 
			// textBox2
			// 
			this->textBox2->Location = System::Drawing::Point(17, 112);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(100, 26);
			this->textBox2->TabIndex = 3;
			this->textBox2->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &MyForm::textBox2_KeyPress);
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(17, 156);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(220, 20);
			this->label3->TabIndex = 4;
			this->label3->Text = L"Цена единицы топлива, руб";
			// 
			// textBox3
			// 
			this->textBox3->Location = System::Drawing::Point(17, 193);
			this->textBox3->Name = L"textBox3";
			this->textBox3->Size = System::Drawing::Size(100, 26);
			this->textBox3->TabIndex = 5;
			this->textBox3->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &MyForm::textBox3_KeyPress);
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(417, 152);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(133, 42);
			this->button1->TabIndex = 6;
			this->button1->Text = L"Вычислить";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm::button1_Click);
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(417, 73);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(133, 65);
			this->button2->TabIndex = 7;
			this->button2->Text = L"По умолчанию";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &MyForm::button2_Click);
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(276, 276);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(0, 20);
			this->label4->TabIndex = 8;
			// 
			// button3
			// 
			this->button3->Location = System::Drawing::Point(417, 201);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(133, 54);
			this->button3->TabIndex = 9;
			this->button3->Text = L"Очистить";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &MyForm::button3_Click);
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(9, 20);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(614, 324);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->textBox3);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->textBox2);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->label1);
			this->Name = L"MyForm";
			this->Text = L"MyForm";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
		double exp; //расход
		double dist; //километраж
		double price; //цена единицы топлива
		double cost; //стоимость поездки
		try {
			dist = Convert::ToDouble(textBox1->Text);
			exp = Convert::ToDouble(textBox2->Text);
			price = Convert::ToDouble(textBox3->Text);
			cost = exp * price * dist;
			label4->Text = "Стоимость поездки: " + Convert::ToString(cost) + " руб.";
		}
		catch (System::FormatException^ ex) {
			MessageBox::Show(
				"Надо ввести исходные данные", "ОШИБКА!!!!!!!!!",
				MessageBoxButtons::OK,
				MessageBoxIcon::Exclamation);
			textBox1->Focus();
		}
	}
private: System::Void textBox1_KeyPress(System::Object^ sender, System::Windows::Forms::KeyPressEventArgs^ e) {
	if ((e->KeyChar >= '0') && (e->KeyChar <= '9')) return;
	if (e->KeyChar == '.') e->KeyChar = ',';
	if (e->KeyChar == ',') {
		if (textBox1->Text->IndexOf(',') != -1)
			e->Handled = true;
		return;
	}
	if (Char::IsControl(e->KeyChar)) {
		if (e->KeyChar == (char)Keys::Enter)
			button1->Focus();
		return;
	}
	e->Handled = true;
}
private: System::Void textBox2_KeyPress(System::Object^ sender, System::Windows::Forms::KeyPressEventArgs^ e) {
	if ((e->KeyChar >= '0') && (e->KeyChar <= '9')) return;
	if (e->KeyChar == '.') e->KeyChar = ',';
	if (e->KeyChar == ',') {
		if (textBox2->Text->IndexOf(',') != -1)
			e->Handled = true;
		return;
	}
	if (Char::IsControl(e->KeyChar)) {
		if (e->KeyChar == (char)Keys::Enter)
			button1->Focus();
		return;
	}
	e->Handled = true;
}
private: System::Void textBox3_KeyPress(System::Object^ sender, System::Windows::Forms::KeyPressEventArgs^ e) {
	if ((e->KeyChar >= '0') && (e->KeyChar <= '9')) return;
	if (e->KeyChar == '.') e->KeyChar = ',';
	if (e->KeyChar == ',') {
		if (textBox3->Text->IndexOf(',') != -1)
			e->Handled = true;
		return;
	}
	if (Char::IsControl(e->KeyChar)) {
		if (e->KeyChar == (char)Keys::Enter)
			button1->Focus();
		return;
	}
	e->Handled = true;
}
private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
	label4->Text = "";
	textBox1->Text = "240";
	textBox2->Text = "8,4";
	textBox3->Text = "16,5";

}
private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e) {
	label4->Text = "";
	textBox1->Text = "";
	textBox2->Text = "";
	textBox3->Text = "";
}
};
}
