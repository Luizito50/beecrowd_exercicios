#include <iostream>
    using namespace std; 
int main(){
double entrada; 
    cin>>entrada;
if(entrada<0.0000 or entrada>100.0000){
    cout<<"Fora de intervalo"<<endl; 
}else if(entrada>=0.0000 && entrada<=25.0000){
    cout<<"Intervalo [0,25]"<<endl;  
}else if(entrada>25.0000 && entrada<=50.0000){
        cout<<"Intervalo (25,50]"<<endl;
}else if(entrada>50.0000 && entrada<=75.0000){
        cout<<"Intervalo (50,75]"<<endl;
}else if(entrada>75.0000 && entrada<=100.0000){
        cout<<"Intervalo (75,100]"<<endl;
}
return 0;
}
