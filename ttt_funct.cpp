#include <iostream>
#include <vector>
#include "ttt.hpp"

int player1Turn(){
  int square1;
  std::cout<<"Player One, please enter the square\nyou would like to play: ";
  std::cin>>square1;
  if(std::cin.fail() || returnIndexGV(square1 - 1) != ' '){
    std::cin.clear();
    std::cin.ignore(256,'\n');
    std::cout<<"You did not enter a valid number, please try again: ";
    square1 = player1Turn();
  }
  return square1;
}

int player2Turn(){
  int square2;
  std::cout<<"Player Two, please enter the square\nyou would like to play: ";
  std::cin>>square2;
  if(std::cin.fail() || returnIndexGV(square2 - 1) != ' '){
    std::cin.clear();
    std::cin.ignore(256,'\n');
    std::cout<<"You did not enter a valid     number, please try again: ";
    square2 = player2Turn();
  }
  return square2;
  
}

void display(std::vector <char> gameVector){

  std::cout<<"\n"<<gameVector[0]<<"|"<<gameVector[1]<<"|"<<gameVector[2]<<"\n";
   std::cout<<gameVector[3]<<"|"<<gameVector[4]<<"|"<<gameVector[5]<<"\n";
    std::cout<<gameVector[6]<<"|"<<gameVector[7]<<"|"<<gameVector[8]<<"\n";
   
}


bool checkwin(std::vector <char> gameVector){

//------------------------------------------
//Horizontal Checks
//Checks first row
  if(gameVector[0] == gameVector[1] && gameVector[0] == gameVector[2]){
    if(gameVector[0] == 'X' && gameVector[0] != ' '){
      std::cout<<"Player 1 Wins!!!!!\n";
      return true;
    }
    else if(gameVector[0] == 'O' && gameVector[0] != ' '){
      std::cout<<"Player 2 Wins!!!!!\n";
      return true;
    }
    else{
      return false;
    }
  }

  //Checks second row
if(gameVector[3] == gameVector[4] && gameVector[3] == gameVector[5]){
    if(gameVector[3] == 'X' && gameVector[3] != ' '){
      std::cout<<"Player 1 Wins!!!!!\n";
      return true;
    }
    else if(gameVector[3] == 'O' && gameVector[3] != ' '){
      std::cout<<"Player 2 Wins!!!!!\n";
      return true;
    }
    else{
      return false;
    }
  }

  //Checks third row
  if(gameVector[6] == gameVector[7] && gameVector[6] == gameVector[8]){
    if(gameVector[6] == 'X' && gameVector[6] != ' '){
      std::cout<<"Player 1 Wins!!!!!\n";
      return true;
    }
    else if(gameVector[6] == 'O' && gameVector[6] != ' '){
      std::cout<<"Player 2 Wins!!!!!\n";
      return true;
    }
    else{
      return false;
    }
  }

  //----------------------------------------
  //Vertical Checks
  //Checks first column
  if(gameVector[0] == gameVector[3] && gameVector[0] == gameVector[6]){
    if(gameVector[0] == 'X' && gameVector[0] != ' '){
      std::cout<<"Player 1 Wins!!!!!\n";
      return true;
    }
    else if(gameVector[0] == 'O' && gameVector[0] != ' '){
      std::cout<<"Player 2 Wins!!!!!\n";
      return true;
    }
    else{
      return false;
    }
  }

  //Checks second column
  if(gameVector[1] == gameVector[4] && gameVector[0] == gameVector[7]){
    if(gameVector[1] == 'X' && gameVector[1] != ' '){
      std::cout<<"Player 1 Wins!!!!!\n";
      return true;
    }
    else if(gameVector[1] == 'O' && gameVector[1] != ' '){
      std::cout<<"Player 2 Wins!!!!!\n";
      return true;
    }
    else{
      return false;
    }
  }

  //Checks third column
  if(gameVector[2] == gameVector[5] && gameVector[2] == gameVector[8]){
    if(gameVector[2] == 'X' && gameVector[2] != ' '){
      std::cout<<"Player 1 Wins!!!!!\n";
      return true;
    }
    else if(gameVector[2] == 'O' && gameVector[2] != ' '){
      std::cout<<"Player 2 Wins!!!!!\n";
      return true;
    }
    else{
      return false;
    }
  }

  //-------------------------------------------
  //Diagonal Checks

  //Left to Right
if(gameVector[0] == gameVector[4] && gameVector[0] == gameVector[8]){
  if(gameVector[0] == 'X' && gameVector[0] != ' '){
      std::cout<<"Player 1 Wins!!!!!\n";
      return true;
    }
    else if(gameVector[0] == 'O' && gameVector[0] != ' '){
      std::cout<<"Player 2 Wins!!!!!\n";
      return true;
    }
    else{
      return false;
    }

  }

  //Right to left
  if(gameVector[2] == gameVector[4] && gameVector[2] == gameVector[6]){
  if(gameVector[2] == 'X' && gameVector[2] != ' '){
      std::cout<<"Player 1 Wins!!!!!\n";
      return true;
    }
    else if(gameVector[2] == 'O' && gameVector[2] != ' '){
      std::cout<<"Player 2 Wins!!!!!\n";
      return true;
    }
    else{
      return false;
    }

  }
}

