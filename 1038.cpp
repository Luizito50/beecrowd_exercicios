 #include <iostream> 
 #include <iomanip>
  using namespace std; 
int main(){
    int cod,quantidade;
    double valor;
    cin>>cod>>quantidade;
cout<<fixed<<setprecision(2);
if(cod==1){
    valor=4*quantidade;
        cout<<"Total: R$ "<<valor<<endl; 
}else if(cod==2){
    valor=4.50*quantidade;
        cout<<"Total: R$ "<<valor<<endl; 
}else if(cod==3){
    valor=5*quantidade;
        cout<<"Total: R$ "<<valor<<endl; 
}else if(cod==4){
    valor=2*quantidade;
        cout<<"Total: R$ "<<valor<<endl; 
}else if(cod==5){
    valor=1.50*quantidade;
        cout<<"Total: R$ "<<valor<<endl; 
}
     return 0;
}
