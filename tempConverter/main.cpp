#include <iostream>



double celcius_to_fah(double temp){
   return temp * (9.0/5.0) + 32;
}

double celcius_to_kel(double temp){
   return temp + 273.15;
}


int main(){
   double temp;
   std::cin >> temp;
   
   std::cout <<"----Welcome, to the converter----"<<std::endl;
   std::cout <<"Escala padrão: "<<temp<<" Celcius"<<std::endl;
   std::cout <<"Temp em Fahrenheit: "<<celcius_to_fah(temp)<<std::endl;
   std::cout <<"Temp em Kelvin: "<<celcius_to_kel(temp)<<std::endl;
}



