//---------------------------------------------------------------------------

#ifndef RegistrationFormH
#define RegistrationFormH
//---------------------------------------------------------------------------
#include <System.Classes.hpp>
#include <FMX.Controls.hpp>
#include <FMX.Forms.hpp>
#include <FMX.Controls.Presentation.hpp>
#include <FMX.Edit.hpp>
#include <FMX.StdCtrls.hpp>
#include <FMX.Types.hpp>
//---------------------------------------------------------------------------
class TRegistration : public TForm
{
__published:	// IDE-managed Components
	TLabel *Reg_UsernameLabel;
	TLabel *EmailLabel;
	TLabel *Reg_RegisterLabel;
	TLabel *Reg_PasswordLabel;
	TEdit *Reg_EmailBox;
	TEdit *Reg_UsernameBox;
	TEdit *Reg_PasswordBox;
	TButton *Reg_SignUpButton;
	void __fastcall Reg_SignUpButtonClick(TObject *Sender);
private:	// User declarations
public:		// User declarations
	__fastcall TRegistration(TComponent* Owner);
};
//---------------------------------------------------------------------------
extern PACKAGE TRegistration *Registration;
//---------------------------------------------------------------------------
#endif
