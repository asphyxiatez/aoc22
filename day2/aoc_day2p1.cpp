#include <iostream>
#include <fstream>
using namespace std;

int main() {
  fstream data("adventofcode_day2.txt");
  string myString;
  int round;
  int score = 0;
  char player1[3] = {'X','Y','Z'};
  char player2[3] = {'A','B','C'};
  char temp1;
  char temp2;
  
  while (getline(data, myString)){
    round = 0;
    temp2 = myString[0];
    temp1 = myString[2];
    if (temp1 == player1[0]){
      round += 1;
      if (temp2 == player2[2]){
        round += 6;
      }
      else if (temp2 == player2[0]){
        round += 3;
      }
    }
    else if (temp1 == player1[1]){
      round += 2;
      if (temp2 == player2[0]){
        round += 6;
      }
      else if (temp2 == player2[1]){
        round += 3;
      }
    }
    else if (temp1 == player1[2]){
      round += 3;
      if (temp2 == player2[1]){
        round += 6;
      }
      else if (temp2 == player2[2]){
        round += 3;
      }
    }
    score += round;
    //cout  << score << endl;
  }
  cout << "The total score is " << score << endl;
  return 0;
}