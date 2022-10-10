//---------------------------------------------------------------------------

#include <fmx.h>
#pragma hdrstop
#include <iostream>
#include <ostream>
#include <string>
#include <LoginForm.h>
#include <fstream>
#include "DepartmentForm.h"
#include "RegistrationForm.h"
#include "MainForm.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.fmx"

using namespace std;
TForm2 *Form2;
//---------------------------------------------------------------------------
__fastcall TForm2::TForm2(TComponent* Owner)
	: TForm(Owner)
{
}
//---------------------------------------------------------------------------
void __fastcall TForm2::LoginButtonClick(TObject *Sender)
{
		   String PasswordBox = TypeBox->Text;
		   String UsernameBox = TypeBox2->Text;

		   fstream myFile;
		   fstream FileOpen;

		   if(UsernameBox=="admin" && PasswordBox=="admin"){
			 this->Visible=false;
			 Department->Show();
		   }
		 //  FileOpen.open("Input123.txt",ios::app);
		   myFile.open("Input123.txt",ios::in);

		  /* if (FileOpen.is_open()){
			   AnsiString t=a;
			   FileOpen<<t;
			   FileOpen.close();
		   }   */

			  string Password;
			  string Username;
		   if (myFile.is_open()){
			while (myFile>>Password && !myFile.eof()) {
				if(Password.c_str()==PasswordBox){
					 myFile>>Username;
				  if(Username.c_str()== UsernameBox){
					 this->Visible=false;
					 Form1->Show();

					 myFile.close();

					 break;
				  }
				}
			   myFile<<endl;
		   }
		}






}
//---------------------------------------------------------------------------

void __fastcall TForm2::SignUpButtonClick(TObject *Sender)
{
		   this->Visible=false;
		   Registration->Show();



}
//---------------------------------------------------------------------------


