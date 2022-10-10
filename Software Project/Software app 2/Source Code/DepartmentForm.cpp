//---------------------------------------------------------------------------

#include <fmx.h>
#pragma hdrstop
#include <fstream>
#include <string>
#include <iostream>
#include <ostream>


#include "DepartmentForm.h"
#include "MainForm.h"
#include "LoginForm.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.fmx"

 //using namespace std;
TDepartment *Department;
//---------------------------------------------------------------------------
__fastcall TDepartment::TDepartment(TComponent* Owner)
	: TForm(Owner)
{

}
//---------------------------------------------------------------------------
void __fastcall TDepartment::AssignButtonClick(TObject *Sender)
{
	  fstream Store;
	  Store.open("AssignTask.txt",ios::app);

	  if(Store.is_open()){

		 AnsiString Task = assignBox->Text;
		 Store<<Task<<std::endl;
		 Store.close();
	   }

	  assignBox->Text="";

	 // Form1->CheckBox1->Text= "Change";
	 // Form1->Show();
}
//---------------------------------------------------------------------------

void __fastcall TDepartment::FormClose(TObject *Sender, TCloseAction &Action)
{
 Form2->Close();
}
//---------------------------------------------------------------------------

