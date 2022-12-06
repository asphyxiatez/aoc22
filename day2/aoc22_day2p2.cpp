#include <iostream>
#include <fstream>
using namespace std;

int main() {
  fstream file("adventofcode_day2.txt");
  char result[3] = {'X','Y','Z'};
  char enemy[3] = {'A','B','C'};
  string myString;
  char temp1;
  char temp2;
  int round = 0;
  int score = 0;

  while (getline(file, myString)){
    temp1 = myString[2];
    temp2 = myString[0];
    round = 0;
    if (temp1 == result[0]){
      if (temp2 == enemy[0]){
        round += 3;
      }
      else if (temp2 == enemy[1]){
        round += 1;
      }
      else {
        round += 2;
      }
    }
    else if (temp1 == result[1]){
      round += 3;
      if (temp2 == enemy[0]){
        round += 1;
      }
      else if (temp2 == enemy[1]){
        round += 2;
      }
      else {
        round += 3;
      }
    }
    else{
      round += 6;
      if (temp2 == enemy[0]){
        round += 2;
      }
      else if (temp2 == enemy[1]){
        round += 3;
      }
      else {
        round += 1;
      }
    }
    score += round;
  }
  cout << "The total score is " << score << endl;
  return 0;
}