//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop

#include "EXAU.h"
#include <stdlib.h>
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"
int x;
TForm1 *Form1;
//---------------------------------------------------------------------------
__fastcall TForm1::TForm1(TComponent* Owner)
        : TForm(Owner)
{
}
//---------------------------------------------------------------------------


void __fastcall TForm1::ButNexClick(TObject *Sender)
{
  EdiOutput->Text="";
  ButAns->Enabled=true;
  LaOutput5->Visible=false;
  LaOutput6->Visible=false;
  LaOutput2->Visible=true;
  LaOutput3->Visible=true;
  switch (random(5)){
    case 0:
      LaOutput1->Caption="誰是萬獸之王?";
      LaOutput2->Caption="1.動物園園長";
      LaOutput3->Caption="2.獅子";
      LaOutput4->Caption="3.狗";
      LaOutput5->Caption="答案是1";
      LaOutput6->Caption="管動物園最大啦";
      x=1;
      break;
    case 1:
      LaOutput1->Caption="甚麼樣的人死後還會出現?";
      LaOutput2->Caption="1.電影中的人";
      LaOutput3->Caption="2.我";
      LaOutput4->Caption="3.聰明人";
      LaOutput5->Caption="答案是1";
      LaOutput6->Caption="電影是演的啦";
      x=2;
      break;
    case 2:
      LaOutput1->Caption="什麼帽不能帶?";
      LaOutput2->Caption="1.綠帽";
      LaOutput3->Caption="2.螺帽";
      LaOutput4->Caption="3.牛仔帽";
      LaOutput5->Caption="答案是2";
      LaOutput6->Caption="螺帽這麼小";
      x=3;
      break;
    case 3:
      LaOutput1->Caption="書店裡買不到甚麼書?";
      LaOutput2->Caption="1.黃書";
      LaOutput3->Caption="2.動物百科全書";
      LaOutput4->Caption="3.遺書";
      LaOutput5->Caption="答案是3";
      LaOutput6->Caption="你想買遺書?";
      x=4;
      break;
    case 4:
      LaOutput1->Caption="甚麼水永遠用不完?";
      LaOutput2->Caption="1.淚水";
      LaOutput3->Caption="2.水龍頭的水";
      LaOutput4->Caption="3.山泉水";
      LaOutput5->Caption="答案是1";
      LaOutput6->Caption="淚水流不完阿";
      x=5;
      break;
  }
}
//---------------------------------------------------------------------------

void __fastcall TForm1::ButAnsClick(TObject *Sender)
{
  if (x==1&EdiOutput->Text==1){
    LaOutput5->Visible=true;
    LaOutput6->Visible=true;
    LaOutput2->Visible=false;
    LaOutput3->Visible=false;
    ButAns->Enabled=false;
    TrueTimes->Caption=TrueTimes->Caption.ToInt()+1;
  }else{
    if (x==2&EdiOutput->Text==1){
      LaOutput5->Visible=true;
      LaOutput6->Visible=true;
      LaOutput2->Visible=false;
      LaOutput3->Visible=false;
      ButAns->Enabled=false;
      TrueTimes->Caption=TrueTimes->Caption.ToInt()+1;
    }else{
      if (x==3&EdiOutput->Text==2){
        LaOutput5->Visible=true;
        LaOutput6->Visible=true;
        LaOutput2->Visible=false;
        LaOutput3->Visible=false;
        ButAns->Enabled=false;
        TrueTimes->Caption=TrueTimes->Caption.ToInt()+1;
      }else{
        if (x==4&EdiOutput->Text==3){
          LaOutput5->Visible=true;
          LaOutput6->Visible=true;
          LaOutput2->Visible=false;
          LaOutput3->Visible=false;
          ButAns->Enabled=false;
          TrueTimes->Caption=TrueTimes->Caption.ToInt()+1;
        }else{
          if (x==5&EdiOutput->Text==1){
            LaOutput5->Visible=true;
            LaOutput6->Visible=true;
            LaOutput2->Visible=false;
            LaOutput3->Visible=false;
            ButAns->Enabled=false;
            TrueTimes->Caption=TrueTimes->Caption.ToInt()+1;
          }else{
            ShowMessage("答錯囉");
            FalseTimes->Caption=FalseTimes->Caption.ToInt()+1;
          }
        }
      }
    }
  }
}
//---------------------------------------------------------------------------

