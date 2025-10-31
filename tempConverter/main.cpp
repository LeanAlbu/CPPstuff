#include <iostream>
#include <cstdlib>


double celcius_to_fah(double temp){
   return temp * (9.0/5.0) + 32;
}

double celcius_to_kel(double temp){
   return temp + 273.15;
}


int main(){
   double temp = 0.0;
   char scale;

   std::cout<<"Pick a default scale"<<std::endl<<" C°"<<std::endl<<" F°"<<std::endl<<" K°"<<std::endl;
   std::cin >> scale;
   if(scale != 'C' && scale != 'F' && scale != 'K'){
      scale = 'C';
   }
   system("clear");
   std::cout <<"----Welcome, to the converter----"<<std::endl;
   std::cout <<"Escala padrão: "<<scale<<std::endl;
   std::cout <<"Temp em Fahrenheit: "<<celcius_to_fah(temp)<<std::endl;
   std::cout <<"Temp em Kelvin: "<<celcius_to_kel(temp)<<std::endl;
}



