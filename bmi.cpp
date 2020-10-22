#include <iostream>
#include <cstring>
using namespace std;

double BMI(double masa_ciala, double wzrost){
    double BMI = (masa_ciala)/(wzrost * wzrost);
    return BMI;
}

int main(){
    double wzrost;
    double masa_ciala;
    cout<<"Wprowadz wzrost(w metrach): "<<endl;
    cin>>wzrost;
    cout<<"Wprowadz mase ciala: "<<endl;
    cin>>masa_ciala;
    double warunek = BMI(masa_ciala, wzrost);
    cout<<"BMI = "<<warunek<<endl;
    if(warunek<16){
        cout<<"Wyglodzenie"<<endl;
    }else if(warunek>=16 && warunek<17){
        cout<<"Wychudzenie"<<endl;
    }else if(warunek>=17 && warunek<18.5){
        cout<<"Niedowaga"<<endl;
    }else if(warunek>=18.5 && warunek<25){
        cout<<"Wartosc prawidlowa"<<endl;
    }else if(warunek>=25 && warunek<30){
        cout<<"Nadwaga"<<endl;
    }else if(warunek>=30 && warunek<35){
        cout<<"I stopien otylosci"<<endl;
    }else if(warunek>=35 && warunek<40){
        cout<<"II stopien otylosci"<<endl;
    }else{
        cout<<"Otylosc skrajna"<<endl;
    }

    return 0;
}