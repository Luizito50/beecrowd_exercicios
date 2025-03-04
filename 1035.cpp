#include
using namespace std;
int main(){

int A,B,C,D;
int CD,AB;
cin>>A>>B>>C>>D;
CD=C+D;
AB=A+B;
if(B>C && D>A && CD>AB && C>0 && D>0 && A%2==0){
cout<<"Valores aceitos"<<endl;
}else{
cout<<"Valores nao aceitos"<<endl;
}
return 0;
}
