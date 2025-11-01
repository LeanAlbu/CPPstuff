#include <cctype>
#include <ios>
#include <iostream>
#include <cstdlib>


void resolver();
double celcius_to_fah(double temp);
double celcius_to_kel(double temp);
double fah_to_cel(double temp);
double fah_to_kel(double temp);
double kel_to_cel(double temp);
double kel_to_fah(double temp);

int main(){
   resolver();
  
}

void resolver(){
   bool flag = true;
   double temp = 0.0;
   char scale;

   std::cout<<"Pick a default scale"<<std::endl<<" C°"<<std::endl<<" F°"<<std::endl<<" K°"<<std::endl;
   std::cin >> scale;
   scale = std::toupper(scale);
   if(scale != 'C' && scale != 'F' && scale != 'K'){
      scale = 'C';
   }

   while(flag){
      system("clear");
      int picker;

      std::cout <<"----Welcome, to the converter----"<<std::endl;
      std::cout<<"Escala padrão: "<<scale<<std::endl;
      std::cout <<"Temperatura: "<<temp<<std::endl;

      if(scale == 'C'){
         std::cout <<"Temp em Fahrenheit: "<<celcius_to_fah(temp)<<std::endl;
         std::cout <<"Temp em Kelvin: "<<celcius_to_kel(temp)<<std::endl;
      }
      if(scale == 'F'){
         std::cout<<"Temp em Celcius: "<<fah_to_cel(temp)<<std::endl;
         std::cout<<"Temp em Kelvin: "<<fah_to_kel(temp)<<std::endl;
      }
      if(scale == 'K'){
         std::cout<<"Temp em Celcius: "<<kel_to_cel(temp)<<std::endl;
         std::cout<<"Temp em Fahrenheit: "<<kel_to_fah(temp)<<std::endl;
      }
      

      std::cout<<"(1) Change temp  (2) Change scale  (3)Quit"<<std::endl;
      std::cin>>picker;
      switch(picker){
         case 1:
            std::cout<<"Input new temp"<<std::endl;
            std::cin>>temp;
            break;
         case 2:
            std::cout<<"Input default scale"<<std::endl;
            std::cin>>scale;
            break;
         case 3:
            flag = false;
            break;
      }
   }
}


double celcius_to_fah(double temp){
   return temp * (9.0/5.0) + 32;
}

double celcius_to_kel(double temp){
   return temp + 273.15;
}

double fah_to_cel(double temp){
   return (temp-32)/1.8;
}

double fah_to_kel(double temp){
   return (temp-32) * (5.0/9.0) + 273;
}

double kel_to_cel(double temp){
   return temp - 273.15;
}

double kel_to_fah(double temp){
   return (temp-273) * 1.8 + 32;
}



