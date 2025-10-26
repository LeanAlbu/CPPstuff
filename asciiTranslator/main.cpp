#include <iostream>
#include <string>

int main(){
   std::string myString = "Lean de Albuquerque!";
   std::cout << "String: " << myString << std::endl;
   for(int i = 0; i < myString.length(); i++){
      std::cout << (int)myString[i] << " ";
   }
   std::cout << "\n";
}
