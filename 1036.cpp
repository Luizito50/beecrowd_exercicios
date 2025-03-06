#include <iostream>
#include <iomanip>
#include <math.h>

 using namespace std;
int main(){
double A,B,C,delta,raizQuadrada;
double R1,R2;
    cin>>A>>B>>C;
    delta=(B*B)-4*A*C;
    raizQuadrada=sqrt(delta); 
if(A==0 || B==0 || C==0 || delta<0){
    cout<<"Impossivel calcular"<<endl;        
}else{
    R1=(-B+raizQuadrada)/(2*A);
    R2=(-B-raizQuadrada)/(2*A);
    cout<<fixed<<setprecision(5); 
    cout<<"R1 = "<<R1<<endl;
    cout<<"R2 = "<<R2<<endl; 
}
    return 0;
}
