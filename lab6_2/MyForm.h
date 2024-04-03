#pragma once
const int n = 3, m = 3;
int a[n][m];
int i, j, dop, min;
namespace lab62 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for MyForm
	/// </summary>
	public ref class MyForm : public System::Windows::Forms::Form
	{
	public:
		MyForm(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~MyForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::PictureBox^ pictureBox1;
	protected:
	private: System::Windows::Forms::DataGridView^ dataGridView1;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::CheckBox^ checkBox1;
	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::Button^ button3;
	private: System::Windows::Forms::Panel^ panel1;










	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>
		System::ComponentModel::Container^ components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(MyForm::typeid));
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->dataGridView1 = (gcnew System::Windows::Forms::DataGridView());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->checkBox1 = (gcnew System::Windows::Forms::CheckBox());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->BeginInit();
			this->panel1->SuspendLayout();
			this->SuspendLayout();
			// 
			// pictureBox1
			// 
			this->pictureBox1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.Image")));
			this->pictureBox1->Location = System::Drawing::Point(65, 27);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(629, 40);
			this->pictureBox1->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->pictureBox1->TabIndex = 0;
			this->pictureBox1->TabStop = false;
			// 
			// dataGridView1
			// 
			this->dataGridView1->BackgroundColor = System::Drawing::Color::PaleTurquoise;
			this->dataGridView1->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView1->Location = System::Drawing::Point(119, 92);
			this->dataGridView1->Name = L"dataGridView1";
			this->dataGridView1->RowHeadersWidth = 62;
			this->dataGridView1->RowTemplate->Height = 28;
			this->dataGridView1->Size = System::Drawing::Size(543, 191);
			this->dataGridView1->TabIndex = 1;
			// 
			// button1
			// 
			this->button1->BackColor = System::Drawing::Color::Yellow;
			this->button1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button1->Location = System::Drawing::Point(145, 320);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(223, 42);
			this->button1->TabIndex = 2;
			this->button1->Text = L"Заповнити масив";
			this->button1->UseVisualStyleBackColor = false;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm::button1_Click);
			// 
			// button2
			// 
			this->button2->BackColor = System::Drawing::Color::Yellow;
			this->button2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button2->Location = System::Drawing::Point(418, 320);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(223, 42);
			this->button2->TabIndex = 3;
			this->button2->Text = L"Очистити масив";
			this->button2->UseVisualStyleBackColor = false;
			this->button2->Click += gcnew System::EventHandler(this, &MyForm::button2_Click);
			// 
			// checkBox1
			// 
			this->checkBox1->AutoSize = true;
			this->checkBox1->BackColor = System::Drawing::Color::Orange;
			this->checkBox1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->checkBox1->Location = System::Drawing::Point(42, 32);
			this->checkBox1->Name = L"checkBox1";
			this->checkBox1->Size = System::Drawing::Size(150, 24);
			this->checkBox1->TabIndex = 4;
			this->checkBox1->Text = L"max_елемент";
			this->checkBox1->UseVisualStyleBackColor = false;
			this->checkBox1->CheckedChanged += gcnew System::EventHandler(this, &MyForm::checkBox1_CheckedChanged);
			// 
			// textBox1
			// 
			this->textBox1->BackColor = System::Drawing::Color::AntiqueWhite;
			this->textBox1->Location = System::Drawing::Point(309, 32);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(156, 26);
			this->textBox1->TabIndex = 5;
			// 
			// button3
			// 
			this->button3->BackColor = System::Drawing::Color::Plum;
			this->button3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button3->Location = System::Drawing::Point(287, 565);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(223, 42);
			this->button3->TabIndex = 6;
			this->button3->Text = L"Поміняти";
			this->button3->UseVisualStyleBackColor = false;
			this->button3->Click += gcnew System::EventHandler(this, &MyForm::button3_Click);
			// 
			// panel1
			// 
			this->panel1->Controls->Add(this->textBox1);
			this->panel1->Controls->Add(this->checkBox1);
			this->panel1->Location = System::Drawing::Point(145, 414);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(496, 95);
			this->panel1->TabIndex = 7;
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(9, 20);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::PaleTurquoise;
			this->ClientSize = System::Drawing::Size(794, 702);
			this->Controls->Add(this->panel1);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->dataGridView1);
			this->Controls->Add(this->pictureBox1);
			this->Name = L"MyForm";
			this->Text = L"Лабораторна робота 6";
			this->Load += gcnew System::EventHandler(this, &MyForm::MyForm_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->EndInit();
			this->panel1->ResumeLayout(false);
			this->panel1->PerformLayout();
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
		Random^ rnd = gcnew Random();
		for (int i = 0; i < n; i++)//рядок
			for (int j = 0; j < m; j++)//стовпець
			{
				dataGridView1[j, i]->Value = Convert::ToString(rnd->Next(50));
			};
	}
	private: System::Void MyForm_Load(System::Object^ sender, System::EventArgs^ e) {
		dataGridView1->ColumnCount = 3;
		dataGridView1->Rows->Add(2);
		
	}
private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
	const int n = 3, m = 3;

	int a[n][m], i, j;

	for (int i = 0; i < n; i++)
		for (int j = 0; j < m; j++)
			dataGridView1[j, i]->Value = " ";
}
private: System::Void checkBox1_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
	for (int i = 0; i < n; i++)
		for (int j = 0; j < m; j++)
		{
			a[i][j] = Convert::ToInt32(dataGridView1[j, i]->Value);
		}
	int maxs = a[0][0];
	for (int i = 0; i < n; i++)
		for (int j = 0; j < m; j++)
			if (checkBox1->Checked == true)
			{

				{
					if (a[i][j] > maxs)
					{
						maxs = a[i][j];
					}
				}

			}
	textBox1->Text = maxs.ToString();
}
	private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e) {
		int maxs = a[0][0];
		int maxIndexI = 0;
		int maxIndexJ = 0;

		for (int i = 0; i < n; i++) {
			for (int j = 0; j < m; j++) {
				if (a[i][j] > maxs) {
					maxs = a[i][j];
					maxIndexI = i;
					maxIndexJ = j;
				}
			}
		}

		// Обмін значень першого елементу із найбільшим елементом
		Object^ temp = dataGridView1->Rows[0]->Cells[0]->Value;
		dataGridView1->Rows[0]->Cells[0]->Value = dataGridView1->Rows[maxIndexI]->Cells[maxIndexJ]->Value;
		dataGridView1->Rows[maxIndexI]->Cells[maxIndexJ]->Value = temp;
	}
};
}