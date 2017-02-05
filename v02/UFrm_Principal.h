//---------------------------------------------------------------------------

#ifndef UFrm_PrincipalH
#define UFrm_PrincipalH
//---------------------------------------------------------------------------
#include <Classes.hpp>
#include <Controls.hpp>
#include <StdCtrls.hpp>
#include <Forms.hpp>
#include <Buttons.hpp>
//---------------------------------------------------------------------------
class TfrmOrganizador : public TForm
{
__published:	// IDE-managed Components
        TMemo *mmoTarefas;
        TSpeedButton *btoAbrir;
        TSpeedButton *btoSalvar;
        TSpeedButton *btoAjuda;
        TSpeedButton *btoSair;
        TEdit *edtArquivo;
        void __fastcall btoAbrirClick(TObject *Sender);
        void __fastcall btoSalvarClick(TObject *Sender);
        void __fastcall btoSairClick(TObject *Sender);
private:	// User declarations
public:		// User declarations
        __fastcall TfrmOrganizador(TComponent* Owner);
};
//---------------------------------------------------------------------------
extern PACKAGE TfrmOrganizador *frmOrganizador;
//---------------------------------------------------------------------------
#endif
