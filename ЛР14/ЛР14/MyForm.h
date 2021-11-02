#pragma once

namespace ЛР14 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	//
	class ChessFigure {
	public:
		int type;
		char name[10];
		int x;
		int y;
		int countKills = 0; // количество фигур, которые может убить данная фигура
		int kills[10]; //массив фигур, которые может убить данная фигура
	};

	class Ferz : public ChessFigure {

	public:
		bool canKill(int myX, int myY, int otherX, int otherY) {
			if ((myX - myY == otherX - otherY) || (myY + myX == otherX + otherY) || (myX == otherX) || (myY == otherY)) {
				return true;
			}
			else
			{
				return false;
			}
		}
	};

	class Peshka : public ChessFigure {

	public:
		bool canKill(int myX, int myY, int otherX, int otherY) {
			if ((myX + 1 == otherX) && (myY - 1 == otherY) || ((myX - 1 == otherX) && (myY - 1 == otherY))) {
				return true;
			}
			else {
				return false;
			}
		}
	};

	class Horse : public ChessFigure {
	public:

		bool canKill(int myX, int myY, int otherX, int otherY) {
			if (((myY + 2 == otherY) && (myX + 1 == otherX)) || ((myY + 2 == otherY) && (myX - 1 == otherX)) || ((myY - 2 == otherY) && (myX + 1 == otherX)) || ((myY - 2 == otherY) && (myX - 1 == otherX)) || ((myY + 1 == otherY) && (myX + 2 == otherX)) || ((myY - 1 == otherY) && (myX + 2 == otherX)) || ((myY + 1 == otherY) && (myX - 2 == otherX)) || ((myY - 1 == otherY) && (myX - 2 == otherX))) {
				return true;
			}
			else {
				return false;
			}
		}
	};
	//

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
	private: System::Windows::Forms::DataGridView^ dataGridView1;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::RadioButton^ radioButton1;
	private: System::Windows::Forms::RadioButton^ radioButton2;
	private: System::Windows::Forms::RadioButton^ radioButton3;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::Label^ label7;

	protected:

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
			this->dataGridView1 = (gcnew System::Windows::Forms::DataGridView());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->radioButton1 = (gcnew System::Windows::Forms::RadioButton());
			this->radioButton2 = (gcnew System::Windows::Forms::RadioButton());
			this->radioButton3 = (gcnew System::Windows::Forms::RadioButton());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label7 = (gcnew System::Windows::Forms::Label());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->BeginInit();
			this->SuspendLayout();
			// 
			// dataGridView1
			// 
			this->dataGridView1->AllowUserToAddRows = false;
			this->dataGridView1->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView1->Location = System::Drawing::Point(165, 12);
			this->dataGridView1->Name = L"dataGridView1";
			this->dataGridView1->ReadOnly = true;
			this->dataGridView1->RowHeadersWidth = 30;
			this->dataGridView1->RowTemplate->Height = 28;
			this->dataGridView1->Size = System::Drawing::Size(1344, 426);
			this->dataGridView1->TabIndex = 0;
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(1379, 534);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(130, 37);
			this->button1->TabIndex = 1;
			this->button1->Text = L"Выполнить";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm::button1_Click);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(12, 40);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(81, 20);
			this->label1->TabIndex = 2;
			this->label1->Text = L"1 - Ферзь";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(12, 60);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(82, 20);
			this->label2->TabIndex = 3;
			this->label2->Text = L"2 - Пешка";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(12, 80);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(68, 20);
			this->label3->TabIndex = 4;
			this->label3->Text = L"3 - Конь";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(16, 13);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(114, 20);
			this->label4->TabIndex = 5;
			this->label4->Text = L"Обозначения:";
			// 
			// radioButton1
			// 
			this->radioButton1->AutoSize = true;
			this->radioButton1->Checked = true;
			this->radioButton1->Location = System::Drawing::Point(4, 454);
			this->radioButton1->Name = L"radioButton1";
			this->radioButton1->Size = System::Drawing::Size(84, 24);
			this->radioButton1->TabIndex = 6;
			this->radioButton1->TabStop = true;
			this->radioButton1->Text = L"Ферзь";
			this->radioButton1->UseVisualStyleBackColor = true;
			// 
			// radioButton2
			// 
			this->radioButton2->AutoSize = true;
			this->radioButton2->Location = System::Drawing::Point(4, 485);
			this->radioButton2->Name = L"radioButton2";
			this->radioButton2->Size = System::Drawing::Size(85, 24);
			this->radioButton2->TabIndex = 7;
			this->radioButton2->Text = L"Пешка";
			this->radioButton2->UseVisualStyleBackColor = true;
			// 
			// radioButton3
			// 
			this->radioButton3->AutoSize = true;
			this->radioButton3->Location = System::Drawing::Point(4, 515);
			this->radioButton3->Name = L"radioButton3";
			this->radioButton3->Size = System::Drawing::Size(71, 24);
			this->radioButton3->TabIndex = 8;
			this->radioButton3->Text = L"Конь";
			this->radioButton3->UseVisualStyleBackColor = true;
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(12, 418);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(147, 20);
			this->label5->TabIndex = 9;
			this->label5->Text = L"Выберите фигуру:";
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Location = System::Drawing::Point(267, 454);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(0, 20);
			this->label6->TabIndex = 10;
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Location = System::Drawing::Point(271, 485);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(0, 20);
			this->label7->TabIndex = 11;
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(9, 20);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1521, 583);
			this->Controls->Add(this->label7);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->radioButton3);
			this->Controls->Add(this->radioButton2);
			this->Controls->Add(this->radioButton1);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->dataGridView1);
			this->Name = L"MyForm";
			this->Text = L"MyForm";
			this->Load += gcnew System::EventHandler(this, &MyForm::MyForm_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void MyForm_Load(System::Object^ sender, System::EventArgs^ e) {
		Ferz ferz;
		ferz.x = 7;
		ferz.y = 3;
		ferz.type = 1;

		Peshka peshka;
		peshka.x = 3;
		peshka.y = 4;
		peshka.type = 2;

		Horse horse;
		horse.x = 4;
		horse.y = 6;
		horse.type = 3;

		
		dataGridView1->Columns->Clear();

		dataGridView1->ColumnCount = 8;
		dataGridView1->RowCount = 8;

		for (int i = 0; i < 8; i++) { //прорисовка шахматного поля и выставление фигур
			for (int j = 0; j < 8; j++) {
				if (i == horse.y && j == horse.x) {
					this->dataGridView1->Rows[i]->Cells[j]->Value = 3;
				}
				else if (i == peshka.y && j == peshka.x) {
					this->dataGridView1->Rows[i]->Cells[j]->Value = 2;
				}
				else if (i == ferz.y && j == ferz.x) {
					this->dataGridView1->Rows[i]->Cells[j]->Value = 1;
				}
				else
				{
					this->dataGridView1->Rows[i]->Cells[j]->Value = 0;
				}
			}
		}
	}
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
		Ferz ferz;
		ferz.x = 7;
		ferz.y = 3;
		ferz.type = 1;

		Peshka peshka;
		peshka.x = 3;
		peshka.y = 4;
		peshka.type = 2;

		Horse horse;
		horse.x = 4;
		horse.y = 6;
		horse.type = 3;
		

		ChessFigure figures[3] = { ferz, peshka, horse }; //массив фигур
		for (int i = 0; i < 3; i++) {
			if (i + 1 == 1) {
				for (int j = 1; j < 3; j++) {
					if (ferz.canKill(ferz.x, ferz.y, figures[j].x, figures[j].y) == true) {
						ferz.kills[ferz.countKills] = figures[j].type;
						ferz.countKills += 1;

					}
				}
			}
			else if (i + 1 == 2) {
				for (int j = 0; j < 3; j++) {
					if (peshka.canKill(peshka.x, peshka.y, figures[j].x, figures[j].y) == true) {
						peshka.kills[peshka.countKills] = figures[j].type;
						peshka.countKills += 1;
					}
				}
			}
			else {
				for (int j = 0; j < 2; j++) {
					if (horse.canKill(horse.x, horse.y, figures[j].x, figures[j].y) == true) {
						horse.kills[horse.countKills] = figures[j].type;
						horse.countKills += 1;
					}
				}
			}
		}

		label6->Text = "Списко фигур, которые может убить выбранная:";
		label7->Text = "";
		if (radioButton1->Checked == true) {
			if (ferz.countKills == 0) {
				label7->Text += "Никого не убивает";
			}
			else {
				for (int i = 0; i < ferz.countKills; i++) {
					if (ferz.kills[i] == 1) {
						label7->Text += "ферзь ";
					}
					else if (ferz.kills[i] == 2) {
						label7->Text += "пешка ";
					}
					else if (ferz.kills[i] == 3) {
						label7->Text += "конь";
					}

				}
			}
		}
		else if (radioButton2->Checked == true) {
			if (peshka.countKills == 0) {
				label7->Text += "Никого не убивает";
			}
			else {
				for (int i = 0; i < peshka.countKills; i++) {
					if (peshka.kills[i] == 1) {
						label7->Text += "ферзь ";
					}
					else if (peshka.kills[i] == 2) {
						label7->Text += "пешка ";
					}
					else if (peshka.kills[i] == 3) {
						label7->Text += "конь";
					}

				}
			}
		}
		else {
			if (horse.countKills == 0) {
				label7->Text += "Никого не убивает";
			}
			else {
				for (int i = 0; i < horse.countKills; i++) {

					if (horse.kills[i] == 1) {
						label7->Text += "ферзь ";
					}
					else if (horse.kills[i] == 2) {
						label7->Text += "пешка ";
					}
					else if (horse.kills[i] == 3) {
						label7->Text += "конь ";
					}
				}
			}
		}
	}
};
}
