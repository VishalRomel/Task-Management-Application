//---------------------------------------------------------------------------

#ifndef DepartmentFormH
#define DepartmentFormH
//---------------------------------------------------------------------------
#include <System.Classes.hpp>
#include <FMX.Controls.hpp>
#include <FMX.Forms.hpp>
#include <FMX.Controls.Presentation.hpp>
#include <FMX.StdCtrls.hpp>
#include <FMX.Types.hpp>
#include <FMX.Edit.hpp>
//---------------------------------------------------------------------------
class TDepartment : public TForm
{
__published:	// IDE-managed Components
	TButton *AssignButton;
	TEdit *assignBox;
	void __fastcall AssignButtonClick(TObject *Sender);
	void __fastcall FormClose(TObject *Sender, TCloseAction &Action);
private:	// User declarations
public:		// User declarations
	__fastcall TDepartment(TComponent* Owner);
};
//---------------------------------------------------------------------------
extern PACKAGE TDepartment *Department;
//---------------------------------------------------------------------------
#endif
