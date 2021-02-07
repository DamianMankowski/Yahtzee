#pragma once
#include <cstdlib>
#include <sstream>
#include <iostream>
#include <string>
#include<ctime>


#include "REMIS.h"

#include "WYGRANA_1.h"

#include "WYGRANA2h.h"

int tab[7] = { 0 };
int tab1[7] = { 0 };
int tablica[5] = { 0 };
bool a;
int wynik1[15];
int wynik2[15];

int second = 300;



namespace Koœci2 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Podsumowanie informacji o Koœci_15maj_2
	/// </summary>
	public ref class Koœci_15maj_2 : public System::Windows::Forms::Form
	{
		
		

	public:
		Koœci_15maj_2(void)
		{
			InitializeComponent();
			//
			//TODO: W tym miejscu dodaj kod konstruktora
			//
		}

	protected:
		/// <summary>
		/// Wyczyœæ wszystkie u¿ywane zasoby.
		/// </summary>
		~Koœci_15maj_2()
		{
			if (components)
			{
				delete components;
			}
		}

	protected:
	private: System::Windows::Forms::Button^  button2;
	private: System::Windows::Forms::Button^  button3;
	private: System::Windows::Forms::Button^  button4;
	private: System::Windows::Forms::Button^  button5;
	private: System::Windows::Forms::Button^  button6;
	private: System::Windows::Forms::Button^  button7;
	private: System::Windows::Forms::Button^  button8;
	private: System::Windows::Forms::Button^  button9;
	private: System::Windows::Forms::Button^  button10;
	private: System::Windows::Forms::Button^  button11;
	private: System::Windows::Forms::Button^  button12;
	private: System::Windows::Forms::Button^  button13;
	private: System::Windows::Forms::Button^  button14;
	private: System::Windows::Forms::Button^  button15;
	public: System::Windows::Forms::Timer^  timer1;
	private:

	private: System::Windows::Forms::Button^  button16;
	private: System::Windows::Forms::Button^  button17;
	private: System::Windows::Forms::Button^  button18;
	private: System::Windows::Forms::Button^  button19;
	private: System::Windows::Forms::Button^  button20;
	private: System::Windows::Forms::Button^  button21;
	private: System::Windows::Forms::Button^  button22;
	private: System::Windows::Forms::Button^  button23;
	private: System::Windows::Forms::Button^  button24;
	private: System::Windows::Forms::Button^  button25;
	private: System::Windows::Forms::Button^  button26;
	private: System::Windows::Forms::Button^  button27;
	private: System::Windows::Forms::Button^  button28;
	private: System::Windows::Forms::Button^  button29;
	private: System::Windows::Forms::Button^  button30;
	private: System::Windows::Forms::Button^  button31;
	private: System::Windows::Forms::Button^  button32;
	private: System::Windows::Forms::Button^  button33;
	private: System::Windows::Forms::Button^  button34;
	private: System::Windows::Forms::Button^  button35;
	private: System::Windows::Forms::Button^  button36;
	private: System::Windows::Forms::Button^  button37;
	private: System::Windows::Forms::Button^  button38;
	private: System::Windows::Forms::Button^  button39;
	private: System::Windows::Forms::Button^  button40;
	private: System::Windows::Forms::Button^  button41;
	private: System::Windows::Forms::Button^  button42;
	private: System::Windows::Forms::Button^  button43;
	private: System::Windows::Forms::Button^  button44;
	private: System::Windows::Forms::Button^  button45;
	private: System::Windows::Forms::Button^  button46;
	private: System::Windows::Forms::Button^  button47;
	private: System::Windows::Forms::Button^  button48;








	private: System::Windows::Forms::Button^  button57;





	private: System::Windows::Forms::Button^  button53;

	private: System::Windows::Forms::Button^  button1;
	private: System::Windows::Forms::Button^  k4;

	private: System::Windows::Forms::Button^  k3;

	private: System::Windows::Forms::Button^  k2;
	private: System::Windows::Forms::Button^  k5;


	private: System::Windows::Forms::Button^  k1;
private: System::Windows::Forms::Label^  timer;
private: System::Windows::Forms::Label^  tura;
private: System::Windows::Forms::Label^  gracz;
private: System::Windows::Forms::Button^  button49;
private: System::Windows::Forms::Button^  button50;
private: System::Windows::Forms::Button^  button51;
private: System::Windows::Forms::Button^  button52;
private: System::Windows::Forms::Button^  button54;
private: System::Windows::Forms::Button^  button55;
private: System::Windows::Forms::Button^  button56;
private: System::Windows::Forms::Button^  button58;
private: System::Windows::Forms::Button^  button59;
private: System::Windows::Forms::Button^  button60;
private: System::Windows::Forms::Button^  button61;
private: System::Windows::Forms::Button^  button62;
private: System::Windows::Forms::Button^  button63;
private: System::Windows::Forms::Button^  button64;
private: System::Windows::Forms::Button^  button65;
private: System::Windows::Forms::Button^  button66;

















	private: System::ComponentModel::IContainer^  components;

	protected:

	protected:

	protected:

	private:
		/// <summary>
		/// Wymagana zmienna projektanta.
		/// </summary>


#pragma region Windows Form Designer generated code
		/// <summary>
		/// Metoda wymagana do obs³ugi projektanta — nie nale¿y modyfikowaæ
		/// jej zawartoœci w edytorze kodu.
		/// </summary>
		void InitializeComponent(void)
		{
			this->components = (gcnew System::ComponentModel::Container());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->button5 = (gcnew System::Windows::Forms::Button());
			this->button6 = (gcnew System::Windows::Forms::Button());
			this->button7 = (gcnew System::Windows::Forms::Button());
			this->button8 = (gcnew System::Windows::Forms::Button());
			this->button9 = (gcnew System::Windows::Forms::Button());
			this->button10 = (gcnew System::Windows::Forms::Button());
			this->button11 = (gcnew System::Windows::Forms::Button());
			this->button12 = (gcnew System::Windows::Forms::Button());
			this->button13 = (gcnew System::Windows::Forms::Button());
			this->button14 = (gcnew System::Windows::Forms::Button());
			this->button15 = (gcnew System::Windows::Forms::Button());
			this->timer1 = (gcnew System::Windows::Forms::Timer(this->components));
			this->button16 = (gcnew System::Windows::Forms::Button());
			this->button17 = (gcnew System::Windows::Forms::Button());
			this->button18 = (gcnew System::Windows::Forms::Button());
			this->button19 = (gcnew System::Windows::Forms::Button());
			this->button20 = (gcnew System::Windows::Forms::Button());
			this->button21 = (gcnew System::Windows::Forms::Button());
			this->button22 = (gcnew System::Windows::Forms::Button());
			this->button23 = (gcnew System::Windows::Forms::Button());
			this->button24 = (gcnew System::Windows::Forms::Button());
			this->button25 = (gcnew System::Windows::Forms::Button());
			this->button26 = (gcnew System::Windows::Forms::Button());
			this->button27 = (gcnew System::Windows::Forms::Button());
			this->button28 = (gcnew System::Windows::Forms::Button());
			this->button29 = (gcnew System::Windows::Forms::Button());
			this->button30 = (gcnew System::Windows::Forms::Button());
			this->button31 = (gcnew System::Windows::Forms::Button());
			this->button32 = (gcnew System::Windows::Forms::Button());
			this->button33 = (gcnew System::Windows::Forms::Button());
			this->button34 = (gcnew System::Windows::Forms::Button());
			this->button35 = (gcnew System::Windows::Forms::Button());
			this->button36 = (gcnew System::Windows::Forms::Button());
			this->button37 = (gcnew System::Windows::Forms::Button());
			this->button38 = (gcnew System::Windows::Forms::Button());
			this->button39 = (gcnew System::Windows::Forms::Button());
			this->button40 = (gcnew System::Windows::Forms::Button());
			this->button41 = (gcnew System::Windows::Forms::Button());
			this->button42 = (gcnew System::Windows::Forms::Button());
			this->button43 = (gcnew System::Windows::Forms::Button());
			this->button44 = (gcnew System::Windows::Forms::Button());
			this->button45 = (gcnew System::Windows::Forms::Button());
			this->button46 = (gcnew System::Windows::Forms::Button());
			this->button47 = (gcnew System::Windows::Forms::Button());
			this->button48 = (gcnew System::Windows::Forms::Button());
			this->button57 = (gcnew System::Windows::Forms::Button());
			this->button53 = (gcnew System::Windows::Forms::Button());
			this->k4 = (gcnew System::Windows::Forms::Button());
			this->k3 = (gcnew System::Windows::Forms::Button());
			this->k2 = (gcnew System::Windows::Forms::Button());
			this->k5 = (gcnew System::Windows::Forms::Button());
			this->k1 = (gcnew System::Windows::Forms::Button());
			this->timer = (gcnew System::Windows::Forms::Label());
			this->tura = (gcnew System::Windows::Forms::Label());
			this->gracz = (gcnew System::Windows::Forms::Label());
			this->button49 = (gcnew System::Windows::Forms::Button());
			this->button50 = (gcnew System::Windows::Forms::Button());
			this->button51 = (gcnew System::Windows::Forms::Button());
			this->button52 = (gcnew System::Windows::Forms::Button());
			this->button54 = (gcnew System::Windows::Forms::Button());
			this->button55 = (gcnew System::Windows::Forms::Button());
			this->button56 = (gcnew System::Windows::Forms::Button());
			this->button58 = (gcnew System::Windows::Forms::Button());
			this->button59 = (gcnew System::Windows::Forms::Button());
			this->button60 = (gcnew System::Windows::Forms::Button());
			this->button61 = (gcnew System::Windows::Forms::Button());
			this->button62 = (gcnew System::Windows::Forms::Button());
			this->button63 = (gcnew System::Windows::Forms::Button());
			this->button64 = (gcnew System::Windows::Forms::Button());
			this->button65 = (gcnew System::Windows::Forms::Button());
			this->button66 = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(0, 53);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(121, 36);
			this->button1->TabIndex = 0;
			this->button1->Text = L"1";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &Koœci_15maj_2::button1_Click);
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(0, 303);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(121, 36);
			this->button2->TabIndex = 1;
			this->button2->Text = L"=(+)";
			this->button2->UseVisualStyleBackColor = true;
			// 
			// button3
			// 
			this->button3->Location = System::Drawing::Point(0, 555);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(121, 36);
			this->button3->TabIndex = 2;
			this->button3->Text = L"genera³";
			this->button3->UseVisualStyleBackColor = true;
			// 
			// button4
			// 
			this->button4->Location = System::Drawing::Point(0, 179);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(121, 36);
			this->button4->TabIndex = 3;
			this->button4->Text = L"4";
			this->button4->UseVisualStyleBackColor = true;
			// 
			// button5
			// 
			this->button5->Location = System::Drawing::Point(0, 387);
			this->button5->Name = L"button5";
			this->button5->Size = System::Drawing::Size(121, 36);
			this->button5->TabIndex = 4;
			this->button5->Text = L"4x";
			this->button5->UseVisualStyleBackColor = true;
			// 
			// button6
			// 
			this->button6->Location = System::Drawing::Point(0, 95);
			this->button6->Name = L"button6";
			this->button6->Size = System::Drawing::Size(121, 36);
			this->button6->TabIndex = 5;
			this->button6->Text = L"2";
			this->button6->UseVisualStyleBackColor = true;
			// 
			// button7
			// 
			this->button7->Location = System::Drawing::Point(0, 12);
			this->button7->Name = L"button7";
			this->button7->Size = System::Drawing::Size(121, 36);
			this->button7->TabIndex = 6;
			this->button7->Text = L"Gracz 1";
			this->button7->UseVisualStyleBackColor = true;
			// 
			// button8
			// 
			this->button8->Location = System::Drawing::Point(0, 261);
			this->button8->Name = L"button8";
			this->button8->Size = System::Drawing::Size(121, 36);
			this->button8->TabIndex = 7;
			this->button8->Text = L"6";
			this->button8->UseVisualStyleBackColor = true;
			// 
			// button9
			// 
			this->button9->Location = System::Drawing::Point(0, 345);
			this->button9->Name = L"button9";
			this->button9->Size = System::Drawing::Size(121, 36);
			this->button9->TabIndex = 8;
			this->button9->Text = L"3x";
			this->button9->UseVisualStyleBackColor = true;
			// 
			// button10
			// 
			this->button10->Location = System::Drawing::Point(0, 471);
			this->button10->Name = L"button10";
			this->button10->Size = System::Drawing::Size(121, 36);
			this->button10->TabIndex = 9;
			this->button10->Text = L"ma³y strit";
			this->button10->UseVisualStyleBackColor = true;
			// 
			// button11
			// 
			this->button11->Location = System::Drawing::Point(0, 513);
			this->button11->Name = L"button11";
			this->button11->Size = System::Drawing::Size(121, 36);
			this->button11->TabIndex = 10;
			this->button11->Text = L"du¿y strit";
			this->button11->UseVisualStyleBackColor = true;
			// 
			// button12
			// 
			this->button12->Location = System::Drawing::Point(0, 137);
			this->button12->Name = L"button12";
			this->button12->Size = System::Drawing::Size(121, 36);
			this->button12->TabIndex = 11;
			this->button12->Text = L"3";
			this->button12->UseVisualStyleBackColor = true;
			// 
			// button13
			// 
			this->button13->Location = System::Drawing::Point(0, 429);
			this->button13->Name = L"button13";
			this->button13->Size = System::Drawing::Size(121, 36);
			this->button13->TabIndex = 12;
			this->button13->Text = L"full";
			this->button13->UseVisualStyleBackColor = true;
			// 
			// button14
			// 
			this->button14->Location = System::Drawing::Point(0, 221);
			this->button14->Name = L"button14";
			this->button14->Size = System::Drawing::Size(121, 36);
			this->button14->TabIndex = 13;
			this->button14->Text = L"5";
			this->button14->UseVisualStyleBackColor = true;
			// 
			// button15
			// 
			this->button15->Location = System::Drawing::Point(0, 597);
			this->button15->Name = L"button15";
			this->button15->Size = System::Drawing::Size(121, 36);
			this->button15->TabIndex = 14;
			this->button15->Text = L"szansa";
			this->button15->UseVisualStyleBackColor = true;
			// 
			// timer1
			// 
			this->timer1->Enabled = true;
			this->timer1->Interval = 1000;
			this->timer1->Tick += gcnew System::EventHandler(this, &Koœci_15maj_2::timer1_Tick);
			// 
			// button16
			// 
			this->button16->Location = System::Drawing::Point(0, 639);
			this->button16->Name = L"button16";
			this->button16->Size = System::Drawing::Size(121, 36);
			this->button16->TabIndex = 15;
			this->button16->Text = L"=";
			this->button16->UseVisualStyleBackColor = true;
			// 
			// button17
			// 
			this->button17->Location = System::Drawing::Point(127, 555);
			this->button17->Name = L"button17";
			this->button17->Size = System::Drawing::Size(73, 36);
			this->button17->TabIndex = 16;
			this->button17->UseVisualStyleBackColor = true;
			this->button17->Click += gcnew System::EventHandler(this, &Koœci_15maj_2::button17_Click);
			// 
			// button18
			// 
			this->button18->Location = System::Drawing::Point(127, 597);
			this->button18->Name = L"button18";
			this->button18->Size = System::Drawing::Size(73, 36);
			this->button18->TabIndex = 17;
			this->button18->UseVisualStyleBackColor = true;
			this->button18->Click += gcnew System::EventHandler(this, &Koœci_15maj_2::button18_Click);
			// 
			// button19
			// 
			this->button19->Location = System::Drawing::Point(127, 471);
			this->button19->Name = L"button19";
			this->button19->Size = System::Drawing::Size(73, 36);
			this->button19->TabIndex = 18;
			this->button19->UseVisualStyleBackColor = true;
			this->button19->Click += gcnew System::EventHandler(this, &Koœci_15maj_2::button19_Click);
			// 
			// button20
			// 
			this->button20->Location = System::Drawing::Point(127, 429);
			this->button20->Name = L"button20";
			this->button20->Size = System::Drawing::Size(73, 36);
			this->button20->TabIndex = 19;
			this->button20->UseVisualStyleBackColor = true;
			this->button20->Click += gcnew System::EventHandler(this, &Koœci_15maj_2::button20_Click);
			// 
			// button21
			// 
			this->button21->Location = System::Drawing::Point(127, 387);
			this->button21->Name = L"button21";
			this->button21->Size = System::Drawing::Size(73, 36);
			this->button21->TabIndex = 20;
			this->button21->UseVisualStyleBackColor = true;
			this->button21->Click += gcnew System::EventHandler(this, &Koœci_15maj_2::button21_Click);
			// 
			// button22
			// 
			this->button22->Location = System::Drawing::Point(127, 346);
			this->button22->Name = L"button22";
			this->button22->Size = System::Drawing::Size(73, 36);
			this->button22->TabIndex = 21;
			this->button22->UseVisualStyleBackColor = true;
			this->button22->Click += gcnew System::EventHandler(this, &Koœci_15maj_2::button22_Click_1);
			// 
			// button23
			// 
			this->button23->Location = System::Drawing::Point(127, 513);
			this->button23->Name = L"button23";
			this->button23->Size = System::Drawing::Size(73, 36);
			this->button23->TabIndex = 22;
			this->button23->UseVisualStyleBackColor = true;
			this->button23->Click += gcnew System::EventHandler(this, &Koœci_15maj_2::button23_Click);
			// 
			// button24
			// 
			this->button24->Location = System::Drawing::Point(127, 261);
			this->button24->Name = L"button24";
			this->button24->Size = System::Drawing::Size(73, 36);
			this->button24->TabIndex = 23;
			this->button24->UseVisualStyleBackColor = true;
			this->button24->Click += gcnew System::EventHandler(this, &Koœci_15maj_2::button24_Click);
			// 
			// button25
			// 
			this->button25->Location = System::Drawing::Point(127, 221);
			this->button25->Name = L"button25";
			this->button25->Size = System::Drawing::Size(73, 36);
			this->button25->TabIndex = 24;
			this->button25->UseVisualStyleBackColor = true;
			this->button25->Click += gcnew System::EventHandler(this, &Koœci_15maj_2::button25_Click);
			// 
			// button26
			// 
			this->button26->Location = System::Drawing::Point(127, 178);
			this->button26->Name = L"button26";
			this->button26->Size = System::Drawing::Size(73, 36);
			this->button26->TabIndex = 25;
			this->button26->UseVisualStyleBackColor = true;
			this->button26->Click += gcnew System::EventHandler(this, &Koœci_15maj_2::button26_Click);
			// 
			// button27
			// 
			this->button27->Location = System::Drawing::Point(127, 136);
			this->button27->Name = L"button27";
			this->button27->Size = System::Drawing::Size(73, 36);
			this->button27->TabIndex = 26;
			this->button27->UseVisualStyleBackColor = true;
			this->button27->Click += gcnew System::EventHandler(this, &Koœci_15maj_2::button27_Click);
			// 
			// button28
			// 
			this->button28->Location = System::Drawing::Point(127, 95);
			this->button28->Name = L"button28";
			this->button28->Size = System::Drawing::Size(73, 36);
			this->button28->TabIndex = 27;
			this->button28->UseVisualStyleBackColor = true;
			this->button28->Click += gcnew System::EventHandler(this, &Koœci_15maj_2::button28_Click);
			// 
			// button29
			// 
			this->button29->Location = System::Drawing::Point(127, 53);
			this->button29->Name = L"button29";
			this->button29->Size = System::Drawing::Size(73, 36);
			this->button29->TabIndex = 28;
			this->button29->UseVisualStyleBackColor = true;
			this->button29->Click += gcnew System::EventHandler(this, &Koœci_15maj_2::button29_Click);
			// 
			// button30
			// 
			this->button30->Location = System::Drawing::Point(127, 12);
			this->button30->Name = L"button30";
			this->button30->Size = System::Drawing::Size(73, 36);
			this->button30->TabIndex = 29;
			this->button30->Text = L"#1";
			this->button30->UseVisualStyleBackColor = true;
			// 
			// button31
			// 
			this->button31->Location = System::Drawing::Point(127, 302);
			this->button31->Name = L"button31";
			this->button31->Size = System::Drawing::Size(73, 36);
			this->button31->TabIndex = 30;
			this->button31->UseVisualStyleBackColor = true;
			this->button31->Click += gcnew System::EventHandler(this, &Koœci_15maj_2::button31_Click);
			// 
			// button32
			// 
			this->button32->Location = System::Drawing::Point(914, 11);
			this->button32->Name = L"button32";
			this->button32->Size = System::Drawing::Size(73, 36);
			this->button32->TabIndex = 31;
			this->button32->Text = L"#2";
			this->button32->UseVisualStyleBackColor = true;
			// 
			// button33
			// 
			this->button33->Location = System::Drawing::Point(914, 262);
			this->button33->Name = L"button33";
			this->button33->Size = System::Drawing::Size(73, 35);
			this->button33->TabIndex = 32;
			this->button33->UseVisualStyleBackColor = true;
			this->button33->Click += gcnew System::EventHandler(this, &Koœci_15maj_2::button33_Click);
			// 
			// button34
			// 
			this->button34->Location = System::Drawing::Point(914, 223);
			this->button34->Name = L"button34";
			this->button34->Size = System::Drawing::Size(73, 33);
			this->button34->TabIndex = 33;
			this->button34->UseVisualStyleBackColor = true;
			this->button34->Click += gcnew System::EventHandler(this, &Koœci_15maj_2::button34_Click);
			// 
			// button35
			// 
			this->button35->Location = System::Drawing::Point(914, 180);
			this->button35->Name = L"button35";
			this->button35->Size = System::Drawing::Size(73, 34);
			this->button35->TabIndex = 34;
			this->button35->UseVisualStyleBackColor = true;
			this->button35->Click += gcnew System::EventHandler(this, &Koœci_15maj_2::button35_Click);
			// 
			// button36
			// 
			this->button36->Location = System::Drawing::Point(914, 138);
			this->button36->Name = L"button36";
			this->button36->Size = System::Drawing::Size(73, 35);
			this->button36->TabIndex = 35;
			this->button36->UseVisualStyleBackColor = true;
			this->button36->Click += gcnew System::EventHandler(this, &Koœci_15maj_2::button36_Click);
			// 
			// button37
			// 
			this->button37->Location = System::Drawing::Point(914, 429);
			this->button37->Name = L"button37";
			this->button37->Size = System::Drawing::Size(73, 36);
			this->button37->TabIndex = 36;
			this->button37->UseVisualStyleBackColor = true;
			this->button37->Click += gcnew System::EventHandler(this, &Koœci_15maj_2::button37_Click);
			// 
			// button38
			// 
			this->button38->Location = System::Drawing::Point(914, 471);
			this->button38->Name = L"button38";
			this->button38->Size = System::Drawing::Size(73, 36);
			this->button38->TabIndex = 37;
			this->button38->UseVisualStyleBackColor = true;
			this->button38->Click += gcnew System::EventHandler(this, &Koœci_15maj_2::button38_Click);
			// 
			// button39
			// 
			this->button39->Location = System::Drawing::Point(914, 53);
			this->button39->Name = L"button39";
			this->button39->Size = System::Drawing::Size(73, 36);
			this->button39->TabIndex = 38;
			this->button39->UseVisualStyleBackColor = true;
			this->button39->Click += gcnew System::EventHandler(this, &Koœci_15maj_2::button39_Click);
			// 
			// button40
			// 
			this->button40->Location = System::Drawing::Point(914, 387);
			this->button40->Name = L"button40";
			this->button40->Size = System::Drawing::Size(73, 36);
			this->button40->TabIndex = 39;
			this->button40->UseVisualStyleBackColor = true;
			this->button40->Click += gcnew System::EventHandler(this, &Koœci_15maj_2::button40_Click);
			// 
			// button41
			// 
			this->button41->Location = System::Drawing::Point(914, 304);
			this->button41->Name = L"button41";
			this->button41->Size = System::Drawing::Size(73, 35);
			this->button41->TabIndex = 40;
			this->button41->UseVisualStyleBackColor = true;
			// 
			// button42
			// 
			this->button42->Location = System::Drawing::Point(914, 95);
			this->button42->Name = L"button42";
			this->button42->Size = System::Drawing::Size(73, 36);
			this->button42->TabIndex = 41;
			this->button42->UseVisualStyleBackColor = true;
			this->button42->Click += gcnew System::EventHandler(this, &Koœci_15maj_2::button42_Click);
			// 
			// button43
			// 
			this->button43->Location = System::Drawing::Point(914, 513);
			this->button43->Name = L"button43";
			this->button43->Size = System::Drawing::Size(73, 36);
			this->button43->TabIndex = 42;
			this->button43->UseVisualStyleBackColor = true;
			this->button43->Click += gcnew System::EventHandler(this, &Koœci_15maj_2::button43_Click);
			// 
			// button44
			// 
			this->button44->Location = System::Drawing::Point(914, 347);
			this->button44->Name = L"button44";
			this->button44->Size = System::Drawing::Size(73, 35);
			this->button44->TabIndex = 43;
			this->button44->UseVisualStyleBackColor = true;
			this->button44->Click += gcnew System::EventHandler(this, &Koœci_15maj_2::button44_Click);
			// 
			// button45
			// 
			this->button45->Location = System::Drawing::Point(914, 555);
			this->button45->Name = L"button45";
			this->button45->Size = System::Drawing::Size(73, 36);
			this->button45->TabIndex = 44;
			this->button45->UseVisualStyleBackColor = true;
			this->button45->Click += gcnew System::EventHandler(this, &Koœci_15maj_2::button45_Click);
			// 
			// button46
			// 
			this->button46->Location = System::Drawing::Point(914, 597);
			this->button46->Name = L"button46";
			this->button46->Size = System::Drawing::Size(73, 36);
			this->button46->TabIndex = 45;
			this->button46->UseVisualStyleBackColor = true;
			this->button46->Click += gcnew System::EventHandler(this, &Koœci_15maj_2::button46_Click);
			// 
			// button47
			// 
			this->button47->Location = System::Drawing::Point(914, 639);
			this->button47->Name = L"button47";
			this->button47->Size = System::Drawing::Size(73, 36);
			this->button47->TabIndex = 46;
			this->button47->UseVisualStyleBackColor = true;
			// 
			// button48
			// 
			this->button48->Location = System::Drawing::Point(127, 639);
			this->button48->Name = L"button48";
			this->button48->Size = System::Drawing::Size(73, 36);
			this->button48->TabIndex = 47;
			this->button48->UseVisualStyleBackColor = true;
			// 
			// button57
			// 
			this->button57->Location = System::Drawing::Point(488, 10);
			this->button57->Name = L"button57";
			this->button57->Size = System::Drawing::Size(66, 39);
			this->button57->TabIndex = 56;
			this->button57->Text = L"X";
			this->button57->UseVisualStyleBackColor = true;
			this->button57->Click += gcnew System::EventHandler(this, &Koœci_15maj_2::button57_Click);
			// 
			// button53
			// 
			this->button53->Location = System::Drawing::Point(437, 540);
			this->button53->Name = L"button53";
			this->button53->Size = System::Drawing::Size(150, 150);
			this->button53->TabIndex = 62;
			this->button53->Text = L"reroll";
			this->button53->UseVisualStyleBackColor = true;
			this->button53->Click += gcnew System::EventHandler(this, &Koœci_15maj_2::button53_Click);
			// 
			// k4
			// 
			this->k4->Location = System::Drawing::Point(286, 472);
			this->k4->Name = L"k4";
			this->k4->Size = System::Drawing::Size(80, 80);
			this->k4->TabIndex = 0;
			this->k4->Text = L"k4";
			this->k4->UseVisualStyleBackColor = true;
			this->k4->Click += gcnew System::EventHandler(this, &Koœci_15maj_2::k4_Click_1);
			// 
			// k3
			// 
			this->k3->Location = System::Drawing::Point(465, 343);
			this->k3->Name = L"k3";
			this->k3->Size = System::Drawing::Size(80, 80);
			this->k3->TabIndex = 1;
			this->k3->Text = L"k3";
			this->k3->UseVisualStyleBackColor = true;
			this->k3->Click += gcnew System::EventHandler(this, &Koœci_15maj_2::k3_Click);
			// 
			// k2
			// 
			this->k2->Location = System::Drawing::Point(645, 223);
			this->k2->Name = L"k2";
			this->k2->Size = System::Drawing::Size(80, 80);
			this->k2->TabIndex = 2;
			this->k2->Text = L"k2";
			this->k2->UseVisualStyleBackColor = true;
			this->k2->Click += gcnew System::EventHandler(this, &Koœci_15maj_2::k2_Click);
			// 
			// k5
			// 
			this->k5->Location = System::Drawing::Point(659, 469);
			this->k5->Name = L"k5";
			this->k5->Size = System::Drawing::Size(80, 80);
			this->k5->TabIndex = 3;
			this->k5->Text = L"k5";
			this->k5->UseVisualStyleBackColor = true;
			this->k5->Click += gcnew System::EventHandler(this, &Koœci_15maj_2::k5_Click);
			// 
			// k1
			// 
			this->k1->Location = System::Drawing::Point(366, 180);
			this->k1->Name = L"k1";
			this->k1->Size = System::Drawing::Size(80, 80);
			this->k1->TabIndex = 4;
			this->k1->Text = L"k1";
			this->k1->UseVisualStyleBackColor = true;
			this->k1->Click += gcnew System::EventHandler(this, &Koœci_15maj_2::k1_Click);
			// 
			// timer
			// 
			this->timer->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->timer->Location = System::Drawing::Point(688, 52);
			this->timer->Name = L"timer";
			this->timer->Size = System::Drawing::Size(192, 67);
			this->timer->TabIndex = 63;
			this->timer->Text = L"0:0";
			this->timer->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// tura
			// 
			this->tura->AutoSize = true;
			this->tura->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 22.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->tura->Location = System::Drawing::Point(243, 60);
			this->tura->Name = L"tura";
			this->tura->Size = System::Drawing::Size(245, 44);
			this->tura->TabIndex = 64;
			this->tura->Text = L"Tura gracza:";
			this->tura->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// gracz
			// 
			this->gracz->AutoSize = true;
			this->gracz->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 22.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->gracz->Location = System::Drawing::Point(542, 60);
			this->gracz->Name = L"gracz";
			this->gracz->Size = System::Drawing::Size(151, 44);
			this->gracz->TabIndex = 65;
			this->gracz->Text = L"1 gracz";
			this->gracz->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// button49
			// 
			this->button49->Location = System::Drawing::Point(993, 472);
			this->button49->Name = L"button49";
			this->button49->Size = System::Drawing::Size(121, 35);
			this->button49->TabIndex = 66;
			this->button49->Text = L"ma³y strit";
			this->button49->UseVisualStyleBackColor = true;
			// 
			// button50
			// 
			this->button50->Location = System::Drawing::Point(993, 430);
			this->button50->Name = L"button50";
			this->button50->Size = System::Drawing::Size(121, 35);
			this->button50->TabIndex = 67;
			this->button50->Text = L"full";
			this->button50->UseVisualStyleBackColor = true;
			// 
			// button51
			// 
			this->button51->Location = System::Drawing::Point(993, 388);
			this->button51->Name = L"button51";
			this->button51->Size = System::Drawing::Size(121, 35);
			this->button51->TabIndex = 68;
			this->button51->Text = L"4x";
			this->button51->UseVisualStyleBackColor = true;
			// 
			// button52
			// 
			this->button52->Location = System::Drawing::Point(993, 346);
			this->button52->Name = L"button52";
			this->button52->Size = System::Drawing::Size(121, 35);
			this->button52->TabIndex = 69;
			this->button52->Text = L"3x";
			this->button52->UseVisualStyleBackColor = true;
			// 
			// button54
			// 
			this->button54->Location = System::Drawing::Point(993, 304);
			this->button54->Name = L"button54";
			this->button54->Size = System::Drawing::Size(121, 35);
			this->button54->TabIndex = 70;
			this->button54->Text = L"=(+)";
			this->button54->UseVisualStyleBackColor = true;
			// 
			// button55
			// 
			this->button55->Location = System::Drawing::Point(993, 262);
			this->button55->Name = L"button55";
			this->button55->Size = System::Drawing::Size(121, 35);
			this->button55->TabIndex = 71;
			this->button55->Text = L"6";
			this->button55->UseVisualStyleBackColor = true;
			// 
			// button56
			// 
			this->button56->Location = System::Drawing::Point(993, 222);
			this->button56->Name = L"button56";
			this->button56->Size = System::Drawing::Size(121, 35);
			this->button56->TabIndex = 72;
			this->button56->Text = L"5";
			this->button56->UseVisualStyleBackColor = true;
			// 
			// button58
			// 
			this->button58->Location = System::Drawing::Point(993, 180);
			this->button58->Name = L"button58";
			this->button58->Size = System::Drawing::Size(121, 35);
			this->button58->TabIndex = 73;
			this->button58->Text = L"4";
			this->button58->UseVisualStyleBackColor = true;
			// 
			// button59
			// 
			this->button59->Location = System::Drawing::Point(993, 138);
			this->button59->Name = L"button59";
			this->button59->Size = System::Drawing::Size(121, 35);
			this->button59->TabIndex = 74;
			this->button59->Text = L"3";
			this->button59->UseVisualStyleBackColor = true;
			// 
			// button60
			// 
			this->button60->Location = System::Drawing::Point(993, 95);
			this->button60->Name = L"button60";
			this->button60->Size = System::Drawing::Size(121, 35);
			this->button60->TabIndex = 75;
			this->button60->Text = L"2";
			this->button60->UseVisualStyleBackColor = true;
			// 
			// button61
			// 
			this->button61->Location = System::Drawing::Point(993, 54);
			this->button61->Name = L"button61";
			this->button61->Size = System::Drawing::Size(121, 35);
			this->button61->TabIndex = 76;
			this->button61->Text = L"1";
			this->button61->UseVisualStyleBackColor = true;
			// 
			// button62
			// 
			this->button62->Location = System::Drawing::Point(993, 12);
			this->button62->Name = L"button62";
			this->button62->Size = System::Drawing::Size(121, 35);
			this->button62->TabIndex = 77;
			this->button62->Text = L"Gracz 2";
			this->button62->UseVisualStyleBackColor = true;
			// 
			// button63
			// 
			this->button63->Location = System::Drawing::Point(993, 639);
			this->button63->Name = L"button63";
			this->button63->Size = System::Drawing::Size(121, 36);
			this->button63->TabIndex = 78;
			this->button63->Text = L"=";
			this->button63->UseVisualStyleBackColor = true;
			// 
			// button64
			// 
			this->button64->Location = System::Drawing::Point(993, 597);
			this->button64->Name = L"button64";
			this->button64->Size = System::Drawing::Size(121, 36);
			this->button64->TabIndex = 79;
			this->button64->Text = L"szansa";
			this->button64->UseVisualStyleBackColor = true;
			// 
			// button65
			// 
			this->button65->Location = System::Drawing::Point(993, 555);
			this->button65->Name = L"button65";
			this->button65->Size = System::Drawing::Size(121, 36);
			this->button65->TabIndex = 80;
			this->button65->Text = L"genera³";
			this->button65->UseVisualStyleBackColor = true;
			// 
			// button66
			// 
			this->button66->Location = System::Drawing::Point(993, 513);
			this->button66->Name = L"button66";
			this->button66->Size = System::Drawing::Size(121, 36);
			this->button66->TabIndex = 81;
			this->button66->Text = L"du¿y strit";
			this->button66->UseVisualStyleBackColor = true;
			// 
			// Koœci_15maj_2
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::Gray;
			this->ClientSize = System::Drawing::Size(1114, 694);
			this->Controls->Add(this->button66);
			this->Controls->Add(this->button65);
			this->Controls->Add(this->button64);
			this->Controls->Add(this->button63);
			this->Controls->Add(this->button62);
			this->Controls->Add(this->button61);
			this->Controls->Add(this->button60);
			this->Controls->Add(this->button59);
			this->Controls->Add(this->button58);
			this->Controls->Add(this->button56);
			this->Controls->Add(this->button55);
			this->Controls->Add(this->button54);
			this->Controls->Add(this->button52);
			this->Controls->Add(this->button51);
			this->Controls->Add(this->button50);
			this->Controls->Add(this->button49);
			this->Controls->Add(this->gracz);
			this->Controls->Add(this->tura);
			this->Controls->Add(this->timer);
			this->Controls->Add(this->k1);
			this->Controls->Add(this->button53);
			this->Controls->Add(this->k4);
			this->Controls->Add(this->k3);
			this->Controls->Add(this->k2);
			this->Controls->Add(this->k5);
			this->Controls->Add(this->button57);
			this->Controls->Add(this->button48);
			this->Controls->Add(this->button47);
			this->Controls->Add(this->button46);
			this->Controls->Add(this->button45);
			this->Controls->Add(this->button44);
			this->Controls->Add(this->button43);
			this->Controls->Add(this->button42);
			this->Controls->Add(this->button41);
			this->Controls->Add(this->button40);
			this->Controls->Add(this->button39);
			this->Controls->Add(this->button38);
			this->Controls->Add(this->button37);
			this->Controls->Add(this->button36);
			this->Controls->Add(this->button35);
			this->Controls->Add(this->button34);
			this->Controls->Add(this->button33);
			this->Controls->Add(this->button32);
			this->Controls->Add(this->button31);
			this->Controls->Add(this->button30);
			this->Controls->Add(this->button29);
			this->Controls->Add(this->button28);
			this->Controls->Add(this->button27);
			this->Controls->Add(this->button26);
			this->Controls->Add(this->button25);
			this->Controls->Add(this->button24);
			this->Controls->Add(this->button23);
			this->Controls->Add(this->button22);
			this->Controls->Add(this->button21);
			this->Controls->Add(this->button20);
			this->Controls->Add(this->button19);
			this->Controls->Add(this->button18);
			this->Controls->Add(this->button17);
			this->Controls->Add(this->button16);
			this->Controls->Add(this->button15);
			this->Controls->Add(this->button14);
			this->Controls->Add(this->button13);
			this->Controls->Add(this->button12);
			this->Controls->Add(this->button11);
			this->Controls->Add(this->button10);
			this->Controls->Add(this->button9);
			this->Controls->Add(this->button8);
			this->Controls->Add(this->button7);
			this->Controls->Add(this->button6);
			this->Controls->Add(this->button5);
			this->Controls->Add(this->button4);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->Name = L"Koœci_15maj_2";
			this->Text = L"Koœci_15maj_2";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion

	private: System::Void comboBox1_SelectedIndexChanged(System::Object^  sender, System::EventArgs^  e) {
		
		
	}

	private: System::Void timer1_Tick(System::Object^  sender, System::EventArgs^  e) {
		second--;
		int minut, sekund;
		String^ min;
		String^ sec;
		minut = second / 60;
		min = Convert::ToString(minut);
		if (minut < 10) min = "0" + min;
		sekund = second - minut * 60;
		sec = Convert::ToString(sekund);
		if (sekund < 10) sec = "0" + sec;

		timer->Text = min + ":" + sec;

		if (second <= 0)
		{
			timer->Text = "Koniec czasu";
			timer1->Enabled = false;
			this->Close();
		
		}



	}

	private: System::Void button54_Click(System::Object^  sender, System::EventArgs^  e) {
	}
	private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {

	}
	
	private: System::Void checkBox5_CheckedChanged(System::Object^  sender, System::EventArgs^  e) {
	}
	private: System::Void k1_Click(System::Object^  sender, System::EventArgs^  e) {
		k1->Enabled = false;
		
	}
	private: System::Void k2_Click(System::Object^  sender, System::EventArgs^  e) {
		k2->Enabled = false;
	}
	private: System::Void k3_Click(System::Object^  sender, System::EventArgs^  e) {
		k3->Enabled = false;
	}
	private: System::Void k4_Click_1(System::Object^  sender, System::EventArgs^  e) {
		k4->Enabled = false;
	}
	private: System::Void k5_Click(System::Object^  sender, System::EventArgs^  e) {
		k5->Enabled = false;
	}
	

private: System::Void button28_Click(System::Object^  sender, System::EventArgs^  e) {
	gracz->Text = "2 gracz";
	button28->Enabled = false;
	button53->Enabled = true;
	if (button28->Enabled == false)
	{
		wynik1[1] = (tab[2] * 2);
	}
}
private: System::Void button27_Click(System::Object^  sender, System::EventArgs^  e) {
	gracz->Text = "2 gracz";
	button27->Enabled = false;
	button53->Enabled = true;
	if (button27->Enabled == false)
	{
		wynik1[2] = tab[3] * 3;
	}
}
private: System::Void button26_Click(System::Object^  sender, System::EventArgs^  e) {
	gracz->Text = "2 gracz";
	button26->Enabled = false;
	button53->Enabled = true;
	if (button26->Enabled == false)
	{
		wynik1[3] = tab[4] * 4;
	}
}
private: System::Void button25_Click(System::Object^  sender, System::EventArgs^  e) {
	gracz->Text = "2 gracz";
	button25->Enabled = false;
	button53->Enabled = true;
	if (button25->Enabled == false)
	{
		wynik1[4] = tab[5] * 5;
	}
}

private: System::Void button24_Click(System::Object^  sender, System::EventArgs^  e) {
	gracz->Text = "2 gracz";
	button24->Enabled = false;
	button53->Enabled = true;
	if (button24->Enabled == false)
	{
		wynik1[5] = tab[6] * 6;
	}
}


private: System::Void button39_Click(System::Object^  sender, System::EventArgs^  e) {
	gracz->Text = "1 gracz";
	button39->Enabled = false;
	button53->Enabled = true;
}

private: System::Void button42_Click(System::Object^  sender, System::EventArgs^  e) {
	gracz->Text = "1 gracz";
	button42->Enabled = false;
	button53->Enabled = true;
}

private: System::Void button36_Click(System::Object^  sender, System::EventArgs^  e) {
	gracz->Text = "1 gracz";
	button36->Enabled = false;
	button53->Enabled = true;
}

private: System::Void button35_Click(System::Object^  sender, System::EventArgs^  e) {
	gracz->Text = "1 gracz";
	button35->Enabled = false;
	button53->Enabled = true;
}

private: System::Void button34_Click(System::Object^  sender, System::EventArgs^  e) {
	gracz->Text = "1 gracz";
	button34->Enabled = false;
	button53->Enabled = true;
}

private: System::Void button33_Click(System::Object^  sender, System::EventArgs^  e) {
	gracz->Text = "1 gracz";
	button33->Enabled = false;
	button53->Enabled = true;
}
private: System::Void button22_Click_1(System::Object^  sender, System::EventArgs^  e) {
	gracz->Text = "2 gracz";
	button22->Enabled = false;
	button53->Enabled = true;
	if (button22->Enabled == false)
	{
		wynik1[6] = Convert::ToInt32(button22->Text);
	}
}

private: System::Void button21_Click(System::Object^  sender, System::EventArgs^  e) {
	gracz->Text = "2 gracz";
	button21->Enabled = false;
	button53->Enabled = true;
	if (button21->Enabled == false)
	{
		wynik1[7] = Convert::ToInt32(button21->Text);
	}
}

private: System::Void button20_Click(System::Object^  sender, System::EventArgs^  e) {
	gracz->Text = "2 gracz";
	button20->Enabled = false;
	button53->Enabled = true;
	if (button20->Enabled == false)
	{
		wynik1[8] = Convert::ToInt32(button20->Text);
	}
}

private: System::Void button19_Click(System::Object^  sender, System::EventArgs^  e) {
	gracz->Text = "2 gracz";
	button19->Enabled = false;
	button53->Enabled = true;
	if (button19->Enabled == false)
	{
		wynik1[9] = Convert::ToInt32(button19->Text);
	}
}

private: System::Void button23_Click(System::Object^  sender, System::EventArgs^  e) {
	gracz->Text = "2 gracz";
	button23->Enabled = false;
	button53->Enabled = true;
	if (button23->Enabled == false)
	{
		wynik1[10] = Convert::ToInt32(button23->Text);
	}
}

private: System::Void button17_Click(System::Object^  sender, System::EventArgs^  e) {
	gracz->Text = "2 gracz";
	button17->Enabled = false;
	button53->Enabled = true;
	if (button17->Enabled == false)
	{
		wynik1[11] = Convert::ToInt32(button17->Text);
	}
}

private: System::Void button18_Click(System::Object^  sender, System::EventArgs^  e) {
	gracz->Text = "2 gracz";
	button18->Enabled = false;
	button53->Enabled = true;
	if (button18->Enabled == false)
	{
		wynik1[12] = Convert::ToInt32(button18->Text);
	}
}

private: System::Void button44_Click(System::Object^  sender, System::EventArgs^  e) {
	gracz->Text = "1 gracz";
	button44->Enabled = false;
	button53->Enabled = true;
}

private: System::Void button40_Click(System::Object^  sender, System::EventArgs^  e) {
	gracz->Text = "1 gracz";
	button40->Enabled = false;
	button53->Enabled = true;
}

private: System::Void button37_Click(System::Object^  sender, System::EventArgs^  e) {
	gracz->Text = "1 gracz";
	button37->Enabled = false;
	button53->Enabled = true;
}

private: System::Void button38_Click(System::Object^  sender, System::EventArgs^  e) {
	gracz->Text = "1 gracz";
	button38->Enabled = false;
	button53->Enabled = true;
}

private: System::Void button43_Click(System::Object^  sender, System::EventArgs^  e) {
	gracz->Text = "1 gracz";
	button43->Enabled = false;
	button53->Enabled = true;
}

private: System::Void button45_Click(System::Object^  sender, System::EventArgs^  e) {
	gracz->Text = "1 gracz";
	button45->Enabled = false;
	button53->Enabled = true;
}

private: System::Void button46_Click(System::Object^  sender, System::EventArgs^  e) {
	gracz->Text = "1 gracz";
	button46->Enabled = false;
	button53->Enabled = true;
}

private: System::Void button31_Click(System::Object^  sender, System::EventArgs^  e) {
	if (wynik1[0] + wynik1[1])
	{
		wynik1[0] = Convert::ToInt32(button29->Text);
	}
}
	private: System::Void button53_Click(System::Object^  sender, System::EventArgs^  e) {
		button53->Enabled = false;
		button31->Enabled = false;
		button41->Enabled = false;
		srand(time(NULL));
		k1->Enabled = false;
		k2->Enabled = false;
		k3->Enabled = false;
		k4->Enabled = false;
		k5->Enabled = false;
		
		
			tablica[0] = rand() % 6 + 1;
			k1->Text = Convert::ToString(tablica[0]);
		 
			tablica[1] = rand() % 6 + 1;
			k2->Text = Convert::ToString(tablica[1]);
		
		    tablica[2] = rand() % 6 + 1;
			k3->Text = Convert::ToString(tablica[2]);
	
		    tablica[3] = rand() % 6 + 1;
			k4->Text = Convert::ToString(tablica[3]);
		
		    tablica[4] = rand() % 6 + 1;
			k5->Text = Convert::ToString(tablica[4]);
		


		for (int i = 0; i < 7; i++) {

			//if(button29 /* nie jest zablokowany*/) to zeruj
			//if (k1->Enabled = Convert::ToString(true))
			//{
			tab[i] = 0;
			//}

		}
		for (int i = 0; i < 7; i++) {


			tab1[i] = 0;


		}


		if (gracz->Text == "1 gracz")
		{

			tab[Convert::ToInt32(k1->Text)]++;
			tab[Convert::ToInt32(k2->Text)]++;
			tab[Convert::ToInt32(k3->Text)]++;
			tab[Convert::ToInt32(k4->Text)]++;
			tab[Convert::ToInt32(k5->Text)]++;
		}
		else if (gracz->Text == "2 gracz")
		{


			tab1[Convert::ToInt32(k1->Text)]++;
			tab1[Convert::ToInt32(k2->Text)]++;
			tab1[Convert::ToInt32(k3->Text)]++;
			tab1[Convert::ToInt32(k4->Text)]++;
			tab1[Convert::ToInt32(k5->Text)]++;
		}

		//1 gracz
		if (gracz->Text == "1 gracz")
		{

			if (button29->Enabled == false);

			else
			{
				wynik1[0] = tab[1] * 1;
			button29->Text = Convert::ToString(tab[1] * 1);
				
			}
			if (button28->Enabled == false);

			else
			{
				wynik1[1] = tab[2] * 2;
				button28->Text = Convert::ToString(tab[2]*2);
			}
			if (button27->Enabled == false);

			else
			{
				wynik1[2] = tab[3] * 3;
				button27->Text = Convert::ToString(tab[3] * 3);
			}
			if (button26->Enabled == false);

			else
			{
				wynik1[3] = tab[4] * 4;
				button26->Text = Convert::ToString(tab[4] * 4);
			}
			if (button25->Enabled == false);

			else
			{
				wynik1[4] = tab[5] * 5;
				button25->Text = Convert::ToString(tab[5] * 5);
			}
			if (button24->Enabled == false);

			else
			{
				wynik1[5] = tab[6] * 6;
				button24->Text = Convert::ToString(tab[6] * 6);
			}
			//3x
			if (button22->Enabled == false);
			else
			{
				if ((k1->Text == k2->Text && k2->Text == k3->Text) ||
					(k1->Text == k2->Text && k2->Text == k4->Text) ||
					(k1->Text == k2->Text && k2->Text == k5->Text) ||
					(k1->Text == k3->Text && k3->Text == k4->Text) ||
					(k1->Text == k4->Text && k4->Text == k5->Text) ||
					(k2->Text == k3->Text && k3->Text == k4->Text) ||
					(k2->Text == k3->Text && k3->Text == k5->Text) ||
					(k3->Text == k4->Text && k4->Text == k5->Text) ||
					(k1->Text == k3->Text && k3->Text == k5->Text) ||
					(k2->Text == k4->Text && k4->Text == k5->Text))
				{
					wynik1[6] = tab[1] * 1 + tab[2] * 2 + tab[3] * 3 + tab[4] * 4 + tab[5] * 5 + tab[6] * 6;
					button22->Text = Convert::ToString(tab[1] * 1 + tab[2] * 2 + tab[3] * 3 + tab[4] * 4 + tab[5] * 5 + tab[6] * 6);
				}
				else
				{
					button22->Text = "0";
				}
			}
			//4x
			if (button21->Enabled == false);
			else
			{
				if ((k1->Text == k2->Text && k2->Text == k3->Text && k3->Text == k4->Text) ||
					(k1->Text == k2->Text && k2->Text == k4->Text && k4->Text == k5->Text) ||
					(k1->Text == k3->Text && k3->Text == k4->Text && k4->Text == k5->Text) ||
					(k2->Text == k3->Text && k3->Text == k4->Text && k4->Text == k5->Text) ||
					(k1->Text == k2->Text && k2->Text == k3->Text && k3->Text == k5->Text))
				{
					wynik1[7] = tab[1] * 1 + tab[2] * 2 + tab[3] * 3 + tab[4] * 4 + tab[5] * 5 + tab[6] * 6;
					button21->Text = Convert::ToString(tab[1] * 1 + tab[2] * 2 + tab[3] * 3 + tab[4] * 4 + tab[5] * 5 + tab[6] * 6);
				}
				else
				{
					button21->Text = "0";
				}

			}
			//full
			if (button20->Enabled == false);
			else
			{
				if ((k1->Text == k2->Text && k2->Text == k3->Text && k4->Text == k5->Text) ||
					(k1->Text == k2->Text && k2->Text == k4->Text && k3->Text == k5->Text) ||
					(k1->Text == k2->Text && k2->Text == k5->Text && k3->Text == k4->Text) ||
					(k1->Text == k3->Text && k3->Text == k4->Text && k2->Text == k5->Text) ||
					(k1->Text == k4->Text && k4->Text == k5->Text && k2->Text == k3->Text) ||
					(k2->Text == k3->Text && k3->Text == k4->Text && k1->Text == k5->Text) ||
					(k2->Text == k3->Text && k3->Text == k5->Text && k1->Text == k4->Text) ||
					(k3->Text == k4->Text && k4->Text == k5->Text && k1->Text == k2->Text) ||
					(k1->Text == k3->Text && k3->Text == k5->Text && k2->Text == k4->Text) ||
					(k2->Text == k4->Text && k4->Text == k5->Text && k1->Text == k3->Text))
				{
					wynik1[8] = 25;
					button20->Text = "25";
				}
				else
				{
					button20->Text = "0";
				}
			}

			for (int i = 0; i < 5; i++) {
				if (tablica[i] == 1) {
					for (int j = 0; j < 5; j++) {
						if (tablica[j] == 2) {
							for (int k = 0; k < 5; k++) {
								if (tablica[k] == 3) {
									for (int l = 0; l < 5; l++) {
										if (tablica[l] == 4) {
											a = true;
											break;
										}
									}
								}
							}
						}
					}
				}
			}
			for (int i = 0; i < 5; i++) {
				if (tablica[i] == 3) {
					for (int j = 0; j < 5; j++) {
						if (tablica[j] == 4) {
							for (int k = 0; k < 5; k++) {
								if (tablica[k] == 5) {
									for (int l = 0; l < 5; l++) {
										if (tablica[l] == 6) {
											a = true;

											break;
										}
									}
								}
							}
						}
					}
				}
			}
			for (int i = 0; i < 5; i++) {
				if (tablica[i] == 2) {
					for (int j = 0; j < 5; j++) {
						if (tablica[j] == 3) {
							for (int k = 0; k < 5; k++) {
								if (tablica[k] == 4) {
									for (int l = 0; l < 5; l++) {
										if (tablica[l] == 5) {
											a = true;
											break;
										}
									}
								}
							}
						}
					}
				}
			}
			//maly strit
			if (button19->Enabled == false);
			else if (a == true)
			{
				wynik1[9] =30;
				button19->Text = "30";
				a = false;
			}
			else
			{
				button19->Text = "0";
			}
			for (int i = 0; i < 5; i++) {
				if (tablica[i] == 2) {
					for (int j = 0; j < 5; j++) {
						if (tablica[j] == 3) {
							for (int k = 0; k < 5; k++) {
								if (tablica[k] == 4) {
									for (int l = 0; l < 5; l++) {
										if (tablica[l] == 5) {
											for (int m = 0; m < 5; m++) {
												if (tablica[m] == 6) {
													a = true;
												}
											}
										}
									}
								}
							}
						}
					}
				}
			}

			for (int i = 0; i < 5; i++) {
				if (tablica[i] == 1) {
					for (int j = 0; j < 5; j++) {
						if (tablica[j] == 2) {
							for (int k = 0; k < 5; k++) {
								if (tablica[k] == 3) {
									for (int l = 0; l < 5; l++) {
										if (tablica[l] == 4) {
											for (int m = 0; m < 5; m++) {
												if (tablica[m] == 5) {
													a = true;
												}
											}
										}
									}
								}
							}
						}
					}
				}
			}
			//duzy strit
			if (button23->Enabled == false);
			else if (a)
			{
				wynik1[10] = 40;
				button23->Text = "40";
				a = false;
			}
			else
			{
				button23->Text = "0";
			}
			//general
			if (button17->Enabled == false);
			else
			{
				if (k1->Text == k2->Text && k2->Text == k3->Text && k3->Text == k4->Text && k4->Text == k5->Text)
				{
					wynik1[11] = 50;
					button17->Text = "50";
				}
				else
				{
					button17->Text = "0";
				}
			}
			//szansa
			if (button18->Enabled == false);
			else
			{
				wynik1[12] = tab[1] * 1 + tab[2] * 2 + tab[3] * 3 + tab[4] * 4 + tab[5] * 5 + tab[6] * 6;
				button18->Text = Convert::ToString(tab[1] * 1 + tab[2] * 2 + tab[3] * 3 + tab[4] * 4 + tab[5] * 5 + tab[6] * 6);
			}





		}

		//2gracz
		else if (gracz->Text == "2 gracz")
		{
			if (button39->Enabled == false);

			else
			{
				wynik2[0] = tab1[1] * 1;
				button39->Text = Convert::ToString(tab1[1] * 1);


			}
			if (button42->Enabled == false);

			else
			{
				wynik2[1] = tab1[2] * 2;
				button42->Text = Convert::ToString(tab1[2] * 2);
			}
			if (button36->Enabled == false);

			else
			{
				wynik2[2] = tab1[3] * 3;
				button36->Text = Convert::ToString(tab1[3] * 3);
			}
			if (button35->Enabled == false);

			else
			{
				wynik2[3] = tab1[4] * 4;
				button35->Text = Convert::ToString(tab1[4] * 4);
			}
			if (button34->Enabled == false);

			else
			{
				wynik2[4] = tab1[5] * 5;
				button34->Text = Convert::ToString(tab1[5] * 5);
			}
			if (button33->Enabled == false);

			else
			{
				wynik2[5] = tab1[6] * 6;
				button33->Text = Convert::ToString(tab1[6] * 6);
			}
			//3x
			if (button44->Enabled == false);

			else
			{
				if ((k1->Text == k2->Text && k2->Text == k3->Text) ||
					(k1->Text == k2->Text && k2->Text == k4->Text) ||
					(k1->Text == k2->Text && k2->Text == k5->Text) ||
					(k1->Text == k3->Text && k3->Text == k4->Text) ||
					(k1->Text == k4->Text && k4->Text == k5->Text) ||
					(k2->Text == k3->Text && k3->Text == k4->Text) ||
					(k2->Text == k3->Text && k3->Text == k5->Text) ||
					(k3->Text == k4->Text && k4->Text == k5->Text) ||
					(k1->Text == k3->Text && k3->Text == k5->Text) ||
					(k2->Text == k4->Text && k4->Text == k5->Text))
				{
					wynik1[6] = tab1[1] * 1 + tab1[2] * 2 + tab1[3] * 3 + tab1[4] * 4 + tab1[5] * 5 + tab1[6] * 6;
					button44->Text = Convert::ToString(tab1[1] * 1 + tab1[2] * 2 + tab1[3] * 3 + tab1[4] * 4 + tab1[5] * 5 + tab1[6] * 6);
				}
				else
				{
					button44->Text = "0";
				}
			}
			//4x
			if (button40->Enabled == false);
			else
			{
				if ((k1->Text == k2->Text && k2->Text == k3->Text && k3->Text == k4->Text) ||
					(k1->Text == k2->Text && k2->Text == k4->Text && k4->Text == k5->Text) ||
					(k1->Text == k3->Text && k3->Text == k4->Text && k4->Text == k5->Text) ||
					(k2->Text == k3->Text && k3->Text == k4->Text && k4->Text == k5->Text) ||
					(k1->Text == k2->Text && k2->Text == k3->Text && k3->Text == k5->Text))
				{
					wynik2[7] = tab1[1] * 1 + tab1[2] * 2 + tab1[3] * 3 + tab1[4] * 4 + tab1[5] * 5 + tab1[6] * 6;
					button40->Text = Convert::ToString(tab1[1] * 1 + tab1[2] * 2 + tab1[3] * 3 + tab1[4] * 4 + tab1[5] * 5 + tab1[6] * 6);
				}
				else
				{
					button40->Text = "0";
				}
			}
			//full
			if (button37->Enabled == false);
			else
			{
				if ((k1->Text == k2->Text && k2->Text == k3->Text && k4->Text == k5->Text) ||
					(k1->Text == k2->Text && k2->Text == k4->Text && k3->Text == k5->Text) ||
					(k1->Text == k2->Text && k2->Text == k5->Text && k3->Text == k4->Text) ||
					(k1->Text == k3->Text && k3->Text == k4->Text && k2->Text == k5->Text) ||
					(k1->Text == k4->Text && k4->Text == k5->Text && k2->Text == k3->Text) ||
					(k2->Text == k3->Text && k3->Text == k4->Text && k1->Text == k5->Text) ||
					(k2->Text == k3->Text && k3->Text == k5->Text && k1->Text == k4->Text) ||
					(k3->Text == k4->Text && k4->Text == k5->Text && k1->Text == k2->Text) ||
					(k1->Text == k3->Text && k3->Text == k5->Text && k2->Text == k4->Text) ||
					(k2->Text == k4->Text && k4->Text == k5->Text && k1->Text == k3->Text))
				{
					wynik2[8] = 25;
					button37->Text = "25";
				}
				else
				{
					button37->Text = "0";
				}
			}
			for (int i = 0; i < 5; i++) {
				if (tablica[i] == 1) {
					for (int j = 0; j < 5; j++) {
						if (tablica[j] == 2) {
							for (int k = 0; k < 5; k++) {
								if (tablica[k] == 3) {
									for (int l = 0; l < 5; l++) {
										if (tablica[l] == 4) {
											a = true;
											break;
										}
									}
								}
							}
						}
					}
				}
			}
			for (int i = 0; i < 5; i++) {
				if (tablica[i] == 3) {
					for (int j = 0; j < 5; j++) {
						if (tablica[j] == 4) {
							for (int k = 0; k < 5; k++) {
								if (tablica[k] == 5) {
									for (int l = 0; l < 5; l++) {
										if (tablica[l] == 6) {
											a = true;

											break;
										}
									}
								}
							}
						}
					}
				}
			}
			for (int i = 0; i < 5; i++) {
				if (tablica[i] == 2) {
					for (int j = 0; j < 5; j++) {
						if (tablica[j] == 3) {
							for (int k = 0; k < 5; k++) {
								if (tablica[k] == 4) {
									for (int l = 0; l < 5; l++) {
										if (tablica[l] == 5) {
											a = true;
											break;
										}
									}
								}
							}
						}
					}
				}
			}
			//maly strit
			if (button38->Enabled == false);
			else if (a == true)
			{
				wynik2[9] = 30;
				button38->Text = "30";
				a = false;
			}
			else
			{
				button38->Text = "0";
			}
			for (int i = 0; i < 5; i++) {
				if (tablica[i] == 2) {
					for (int j = 0; j < 5; j++) {
						if (tablica[j] == 3) {
							for (int k = 0; k < 5; k++) {
								if (tablica[k] == 4) {
									for (int l = 0; l < 5; l++) {
										if (tablica[l] == 5) {
											for (int m = 0; m < 5; m++) {
												if (tablica[m] == 6) {
													a = true;
												}
											}
										}
									}
								}
							}
						}
					}
				}
			}

			for (int i = 0; i < 5; i++) {
				if (tablica[i] == 1) {
					for (int j = 0; j < 5; j++) {
						if (tablica[j] == 2) {
							for (int k = 0; k < 5; k++) {
								if (tablica[k] == 3) {
									for (int l = 0; l < 5; l++) {
										if (tablica[l] == 4) {
											for (int m = 0; m < 5; m++) {
												if (tablica[m] == 5) {
													a = true;
												}
											}
										}
									}
								}
							}
						}
					}
				}
			}

			//duzy strit
			if (button43->Enabled == false);
			else if (a)
			{
				wynik2[10] = 40;
				button43->Text = "40";
				a = false;
			}
			else
			{
				button43->Text = "0";

			}
			//general
			if (button45->Enabled == false);
			else
			{
				if (k1->Text == k2->Text && k2->Text == k3->Text && k3->Text == k4->Text && k4->Text == k5->Text)
				{
					wynik2[11] = 50;
					button45->Text = "50";
				}
				else
				{
					button45->Text = "0";
				}
			}
			//szansa
			if (button46->Enabled == false);
			else
			{
				wynik2[12] = tab1[1] * 1 + tab1[2] * 2 + tab1[3] * 3 + tab1[4] * 4 + tab1[5] * 5 + tab1[6] * 6;
				button46->Text = Convert::ToString(tab1[1] * 1 + tab1[2] * 2 + tab1[3] * 3 + tab1[4] * 4 + tab1[5] * 5 + tab1[6] * 6);
			}


		}

		//1-6 gracz 1
		if ((button29->Enabled == false) && (button28->Enabled == false) && (button27->Enabled == false) && (button26->Enabled == false) && (button25->Enabled == false) && (button24->Enabled == false))
		{
			button31->Enabled = true;
			wynik1[13] = wynik1[0] + wynik1[1] + wynik1[2] + wynik1[3] + wynik1[4] + wynik1[5];
			if (wynik1[13] > 42)
			{
				wynik1[13] + 25;
				button31->Text = Convert::ToString(wynik1[0] + wynik1[1] + wynik1[2] + wynik1[3] + wynik1[4] + wynik1[5] + 25);
				button31->Enabled = false;
			}
			else
			{
				button31->Text = Convert::ToString(wynik1[0] + wynik1[1] + wynik1[2] + wynik1[3] + wynik1[4] + wynik1[5]);
				button31->Enabled = false;
			}
		}
		//1-6 gracz 2
		if ((button39->Enabled == false) && (button42->Enabled == false) && (button36->Enabled == false) && (button35->Enabled == false) && (button34->Enabled == false) && (button33->Enabled == false))
		{
			button41->Enabled = true;
			wynik2[13] = wynik2[0] + wynik2[1] + wynik2[2] + wynik2[3] + wynik2[4] + wynik2[5];
			if (wynik2[13] > 42)
			{
				wynik2[13] + 25;
				button41->Text = Convert::ToString(wynik2[0] + wynik2[1] + wynik2[2] + wynik2[3] + wynik2[4] + wynik2[5]+25);
				button41->Enabled = false;
			}
			else
			{
				button41->Text = Convert::ToString(wynik2[0] + wynik2[1] + wynik2[2] + wynik2[3] + wynik2[4] + wynik2[5]);
				button41->Enabled = false;
			}
		}
		//3x-szansa gracz 1
		if (button31->Enabled == false && button22->Enabled == false && button21->Enabled == false && button20->Enabled == false && button19->Enabled == false && button23->Enabled == false && button17->Enabled == false && button18->Enabled == false)
		{
			wynik1[14] = wynik1[6] + wynik1[7] + wynik1[8] + wynik1[9] + wynik1[10] + wynik1[11] + wynik1[12] + wynik1[13];
			button48->Text = Convert::ToString(wynik1[14]);
			button48->Enabled = false;
		}
		//3x-szansa gracz 2 
		if (button41->Enabled == false && button44->Enabled == false && button40->Enabled == false && button37->Enabled == false && button38->Enabled == false && button43->Enabled == false && button45->Enabled == false && button46->Enabled == false)
		{
			wynik2[14] = wynik2[6] + wynik2[7] + wynik2[8] + wynik2[9] + wynik2[10] + wynik2[11] + wynik2[12] + wynik2[13];
			button47->Text = Convert::ToString(wynik2[14]);
			button47->Enabled = false;
		}
		//warunek wygranej
		if (button31->Enabled == false && button22->Enabled == false
			&& button21->Enabled == false && button20->Enabled == false 
			&& button19->Enabled == false && button23->Enabled == false 
			&& button17->Enabled == false && button18->Enabled == false 
			&& button41->Enabled == false && button44->Enabled == false 
			&& button40->Enabled == false && button37->Enabled == false 
			&& button38->Enabled == false && button43->Enabled == false 
			&& button45->Enabled == false && button46->Enabled == false)
		{
			if (wynik1[14] > wynik2[14])
			{
				projectPO::WYGRANA_1 XD_1;
				XD_1.ShowDialog();
				this->Show();
				

				//wygra³ gracz 1
			}
			else if (wynik1[14] < wynik2[14])
			{
				projectPO::WYGRANA2h XD_2;
				XD_2.ShowDialog();
				this->Show();

				//wygra³ gracz 2
			}
			else
			{
				projectPO::WYGRANA XD_3;
				XD_3.ShowDialog();
				this->Show();
				//remis
			}
		}
		
		
	}
		private: System::Void button29_Click(System::Object^  sender, System::EventArgs^  e) {
				 gracz->Text = "2 gracz";
				 button29->Enabled = false;
				 button53->Enabled = true;
			 }	 


private: System::Void button57_Click(System::Object^  sender, System::EventArgs^  e) {
	this->Close();
}
};

}
