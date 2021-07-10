// ---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop

#include "Unit2.h"
// ---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"
TForm2 *Form2;

// ---------------------------------------------------------------------------
__fastcall TForm2::TForm2(TComponent* Owner) : TForm(Owner) {
}
void pedirDatos(TStringGrid *v){
  int i=0;
  int j=0;
  while(j<=2)
  {i=0;
	   while(i<=2){
   v->Cells[i][j]=InputBox("ingrese dato","n=","1");
		   i++;  }
	   j++;
  }
}
void pedirDatosX(TStringGrid *v){
  int j=0;
  int i=0;
	   while(j<=2){
	   v->Cells[i][j]=InputBox("ingrese dato","n=","1");
		j++;
	   }
}


// ---------------------------------------------------------------------------

// ---------------------------------------------------------------------------
void __fastcall TForm2::Button1Click(TObject *Sender)
{
 StringGrid1->ColCount=3;
 StringGrid1->RowCount=3;
 pedirDatos(StringGrid1);

}

//---------------------------------------------------------------------------

void __fastcall TForm2::Button2Click(TObject *Sender)
{
StringGrid2->ColCount=1;
 StringGrid2->RowCount=3;
 pedirDatosX(StringGrid2);

}
void primer_paso(TStringGrid *v,TStringGrid *v1,TStringGrid *v2)
{
double a,b,c,d,e,f,j,h,i,ag,bg,dg,ah,bh,dh,ei;
a=StrToInt(v->Cells[0][0]);
b=StrToInt(v->Cells[0][1]);
d=StrToInt(v->Cells[0][2]);
ag=a*StrToInt(v->Cells[1][0]);
ah=a*StrToInt(v->Cells[2][0]);
c=StrToInt(v->Cells[1][1])-(b*StrToInt(v->Cells[1][0]));
i=(StrToInt(v->Cells[2][1])-(b*StrToInt(v->Cells[2][0])))/c;
e= StrToInt(v->Cells[1][2])-(d*StrToInt(v->Cells[1][0]));
f=-(d*StrToInt(v->Cells[2][0]))-(e*i)+StrToInt(v->Cells[2][2]);
//A
v1->Cells[0][0]=a;
v1->Cells[0][1]=b;
v1->Cells[0][2]=d;
v1->Cells[1][1]=c;
v1->Cells[1][2]=e;
v1->Cells[2][2]=f;
v1->Cells[1][0]=0;
v1->Cells[2][0]=0;
v1->Cells[2][1]=0;
// LU
v2->Cells[0][0]=1;
v2->Cells[0][1]=0;
v2->Cells[0][2]=0;
v2->Cells[1][1]=1;
v2->Cells[1][2]=0;
v2->Cells[2][2]=1;
v2->Cells[1][0]=StrToInt(v->Cells[1][0]);
v2->Cells[2][0]=StrToInt(v->Cells[2][0]);
v2->Cells[2][1]=i;
}

//---------------------------------------------------------------------------

void __fastcall TForm2::Button3Click(TObject *Sender)
{
StringGrid3->ColCount=4;
StringGrid3->RowCount=4;
StringGrid4->ColCount=4;
StringGrid4->RowCount=4;
primer_paso(StringGrid1,StringGrid3,StringGrid4);

}
void segundo_paso(TStringGrid *v,TStringGrid *x,TStringGrid *d){
double d1,d2,d3,d3aux;
d1=StrToInt(x->Cells[0][0])/StrToInt(v->Cells[0][0]);
d2=(StrToInt(x->Cells[0][1])-(StrToInt(v->Cells[0][1])*d1))/(StrToInt(v->Cells[1][1]));
d3aux=(StrToInt(v->Cells[0][2])*d1)+(StrToInt(v->Cells[1][2])*d2);
double x1=StrToFloat(v->Cells[2][2]);
d3=((StrToInt(x->Cells[0][2])-d3aux)/x1);
d->Cells[0][0]=d1;
d->Cells[0][1]=d2;
d->Cells[0][2]=d3;
}


//---------------------------------------------------------------------------

void __fastcall TForm2::Button4Click(TObject *Sender)
{
StringGrid5->ColCount=1;
StringGrid5->RowCount=4;
segundo_paso(StringGrid3,StringGrid2,StringGrid5);

}
void tercer_paso(TStringGrid *v,TStringGrid *d,TStringGrid *x){
int x1,x2,x3,x3aux;
x3=StrToInt(d->Cells[0][2])/StrToInt(v->Cells[2][2]);
x2=(StrToFloat(d->Cells[0][1])-(StrToFloat(v->Cells[2][1])*x3))/(StrToFloat(v->Cells[1][1]));
x3aux=(StrToFloat(v->Cells[1][0])*x2)+(StrToFloat(v->Cells[2][0])*x3);
double x11=StrToFloat(v->Cells[0][0]);
x1=((StrToFloat(d->Cells[0][0])-x3aux)/x11);
x->Cells[0][0]=x1;
x->Cells[0][1]=x2;
x->Cells[0][2]=x3;
}

//---------------------------------------------------------------------------

void __fastcall TForm2::Button5Click(TObject *Sender)
{
  StringGrid6->ColCount=1;
StringGrid6->RowCount=4;
tercer_paso(StringGrid4,StringGrid5,StringGrid6);

}
//---------------------------------------------------------------------------

