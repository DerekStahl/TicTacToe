#include <iostream>
#include <vector>
#include "ttt_funct.hpp"


 std::vector <char> gameVector = {' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' '};


int main(){

  int square1;
  int square2;
  int playerTurns = 0;
  bool playerWon = false;
  



std::cout<<"--------------\nHello Players!\n ";
std::cout<<"Player 1 will be going first and they will be using X, so please decide who that is.\n";
std::cout<< "Whenever selecting what box to enter your letter in, please enter the number of the corresponding box:\n\n";
std::cout<<"1|2|3\n4|5|6\n7|8|9\n";
std::cout<<"--------------\n";

while(playerTurns < 9 && playerWon != true){



if(playerTurns % 2 == 0 && playerTurns != 0){

std::cout<< "Whenever selecting what box to  enter your letter in, please enter the number of the corresponding box:\n\n";
std::cout<<"1|2|3\n4|5|6\n7|8|9\n";
  square1 = player1Turn();
  gameVector[square1 - 1] = 'X';
 
  display(gameVector);
  playerWon = checkwin(gameVector);

  
  playerTurns++;

}
else if(playerTurns == 0){

  square1 = player1Turn();
  gameVector[square1 - 1] = 'X';
 
  display(gameVector);
  playerWon = checkwin(gameVector);

  
  playerTurns++;

}
else{

  std::cout<< "Whenever selecting what box to  enter your letter in, please enter the number of the corresponding box:\n\n";
std::cout<<"1|2|3\n4|5|6\n7|8|9\n";
  square2 = player2Turn();
  gameVector[square2 - 1] = 'O';
 
  display(gameVector);
  playerWon = checkwin(gameVector);
  
  playerTurns++;
}


}
if(playerTurns == 9 && playerWon != true){
  std::cout<<"Draw :(\n";
}
else{
  ; //do nothing
}
return 0;


}


char returnIndexGV(int indexGV){
    return gameVector[indexGV];
  }