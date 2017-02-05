//---------------------------------------------------------------------------
#include <stdio.h>

#include <vcl.h>
#pragma hdrstop

#include "UFrm_Principal.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"
TfrmOrganizador *frmOrganizador;
FILE *Arquivo=NULL;

//---------------------------------------------------------------------------
__fastcall TfrmOrganizador::TfrmOrganizador(TComponent* Owner)
        : TForm(Owner)
{
        edtArquivo->Text = "Tarefas.txt";

        this->btoAbrirClick(Owner);
}
//---------------------------------------------------------------------------
void __fastcall TfrmOrganizador::btoAbrirClick(TObject *Sender)
{

        mmoTarefas->Lines->LoadFromFile(edtArquivo->Text);
        /*
        char linha[256];
        
        if (Arquivo != NULL)
        {
                fclose(Arquivo);
        }

        Arquivo = fopen( edtArquivo->Text.c_str(), "r+");

        if (Arquivo == NULL)
        {
                Arquivo = fopen( edtArquivo->Text.c_str(), "w+");
        }

        while( !feof(Arquivo) )
        {
                fgets(linha, 255, Arquivo);
                mmoTarefas->Lines->Add(linha);
        }

        fclose(Arquivo);
        */

}
//---------------------------------------------------------------------------
void __fastcall TfrmOrganizador::btoSalvarClick(TObject *Sender)
{
        mmoTarefas->Lines->SaveToFile(edtArquivo->Text);

        /*
        int i=0,j=0;
        AnsiString t;

        fclose(Arquivo);
        Arquivo = fopen( edtArquivo->Text.c_str(), "w+");

        t = mmoTarefas->Lines->GetText();
        fputs(mmoTarefas->Lines->GetText(), Arquivo);
        fclose(Arquivo);
        */
}
//---------------------------------------------------------------------------
void __fastcall TfrmOrganizador::btoSairClick(TObject *Sender)
{
        this->Close();
}
//---------------------------------------------------------------------------
