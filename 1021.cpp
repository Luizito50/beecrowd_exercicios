#include

using namespace std;

int main(){
int cem,cinquenta,vinte,dez,cinco,dois,um,resto;
int cemMoe,cinquentaMoe,vinteCincoMoe,dezMoe,cincoMoe,umaMoe;
double valor;
cin>>valor;
int entrada =(int)valor;
double moedas = valor - entrada;

cem=entrada/100;//76
cinquenta=(entrada%100)/50;//26
vinte=((entrada%100)%50)/20;//6
dez=(((entrada%100)%50)%20)/10;//6
cinco=((((entrada%100)%50)%20)%10)/5;//1
dois=(((((entrada%100)%50)%20)%10)%5)/2;//1
um = (((((entrada%100)%50)%20)%10)%5)%2;
resto=(um+moedas)*100;
cemMoe=resto/100;
cinquentaMoe=(resto%100)/50;		
vinteCincoMoe=((resto%100)%50)/25;
dezMoe=(((resto%100)%50)%25)/10;
cincoMoe=((((resto%100)%50)%25)%10)/5;
umaMoe=(((((resto%100)%50)%25)%10)%5)/1;

	cout<<"NOTAS:"<<endl;
	cout<<cem<<" nota(s) de R$ 100.00"<<endl;
	cout<<cinquenta<<" nota(s) de R$ 50.00"<<endl;
	cout<<vinte<<" nota(s) de R$ 20.00"<<endl;
	cout<<dez<<" nota(s) de R$ 10.00"<<endl;
	cout<<cinco<<" nota(s) de R$ 5.00"<<endl;
	cout<<dois<<" nota(s) de R$ 2.00"<<endl;

	cout<<"MOEDAS:"<<endl;
	cout<<cemMoe<<" moeda(s) de R$ 1.00"<<endl;
	cout<<cinquentaMoe<<" moeda(s) de R$ 0.50"<<endl;
	cout<<vinteCincoMoe<<" moeda(s) de R$ 0.25"<<endl;
	cout<<dezMoe<<" moeda(s) de R$ 0.10"<<endl;
	cout<<cincoMoe<<" moeda(s) de R$ 0.05"<<endl;
	cout<<umaMoe<<" moeda(s) de R$ 0.01"<<endl;

return 0;
}
