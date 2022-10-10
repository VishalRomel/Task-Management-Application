//---------------------------------------------------------------------------

#include <fmx.h>
#pragma hdrstop

#include <iostream>
#include <string>
#include <fstream>
#include <ostream>
#include <MainForm.h>


#include "RegistrationForm.h"
#include "LoginForm.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.fmx"
TRegistration *Registration;
//---------------------------------------------------------------------------
__fastcall TRegistration::TRegistration(TComponent* Owner)
	: TForm(Owner)
{


}
//---------------------------------------------------------------------------

void __fastcall TRegistration::Reg_SignUpButtonClick(TObject *Sender)
{

			fstream Store;
	  Store.open("Input123.txt",ios::app);


	  if(Store.is_open()){

		 AnsiString Password= Reg_PasswordBox->Text;
		 AnsiString Username= Reg_UsernameBox->Text;
		 AnsiString Email= Reg_EmailBox->Text;

		 Store<<"\n"<<Password<<" "<<Username<<" "<<Email<<"\n";

		 Store.close();
	  }
	 Form2->Show();
	 this->Close();
}
//---------------------------------------------------------------------------

