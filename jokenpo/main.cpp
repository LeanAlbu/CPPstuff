#include <iostream>
enum gesture{
   paper,
   scissors,
   rock,
};

typedef struct Hand{
  enum gesture handGesture; 
  int wins = 0;
}Hand;


std::string Comparer(Hand* p1, Hand* computer){
   if(p1->handGesture == computer->handGesture) return "Draw\n";
   else{
      if(p1->handGesture == paper && computer->handGesture == rock){
         p1->wins++;
         return "You win!\n";
      }
      if(p1->handGesture == scissors && computer->handGesture == paper){
         p1->wins++;
         return "You win!\n";
      }
      if(p1->handGesture == rock && computer->handGesture == scissors){
         p1->wins++;
         return "You win!\n";
      }
   }
   computer->wins++;
   return "You lose!\n";
}

int interfacePrinter(Hand* p1, Hand* computer){
   int picker;
   std::cout << "---- Welcome to the AMAZING JO-KEN-PO ----" << std::endl;
   std::cout << "Scores: " << "Player wins: " << p1->wins << "\n" << "Computer wins: " << computer->wins << "\n";
   std::cout << "Input your hand\n1- Paper\n2- Scissors\n3- Rock\n";
   std::cin >> picker;
   return picker-1;
}

void gameLoop(Hand* p1, Hand* computer){
   computer->handGesture = rock;
   int flag = 1;
   while(flag == 1){
      int picker = interfacePrinter(p1, computer);
      p1->handGesture = static_cast<gesture>(picker);
      std::cout << Comparer(p1, computer);
   }
}

int main(){
   Hand p1, computer;
   gameLoop(&p1, &computer);
}
