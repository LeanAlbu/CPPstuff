#include <iostream>
#include <fstream>
#include <cmath>

#define E 0.1

std::ofstream myFile("table.dat");

double func(double x){
   return (pow(x,2)-3);
}

double bissec_main(double a, double b, int iter, double pm_old){
   iter++;
   double pm = (a + b)/2;
   
   std::cout<<iter<<": "<<a<<" "<<b<<" "<<pm<<" "<<func(pm)<<std::endl;
   myFile<<iter<<" "<<a<<" "<<b<<" "<<pm<<" "<<func(pm)<<std::endl;


   if(iter > 1 && fabs(pm - pm_old) < E){
      return pm;
   }
   if(func(a) * func(pm) < 0){
      return bissec_main(a, pm, iter, pm);
   }else{
      return bissec_main(pm, b, iter, pm);
   }
}

int main(){
   double a = 1, b = 2;
   
   if(!myFile.is_open()){
      std::cout<<"Failed to open file";
      return 1;
   }
   
   if(func(a) * func(b) >= 0){
      myFile.close();
      std::cout<<"There's no root";
      return 1;
   }
   if(func(a) * func(b) < 0){
      double root = bissec_main(a,  b, 0, 0);
      myFile.close();
      std::cout<<"A raiz aproximada é: "<<root<<std::endl;
   }
}
