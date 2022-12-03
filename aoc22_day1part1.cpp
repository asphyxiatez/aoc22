#include <iostream>
#include <fstream>
using namespace std;

int main() {
  int total = 0;
  int maximum = 0;
  string myNums;
  ifstream data("adventofcode_day1.txt");
  while (getline(data, myNums)){
    if (myNums.empty()){
        if (maximum == 0){
          maximum = total;
        } else if (total>maximum){
          maximum = total;
        }
        total = 0;
      } else{
        total += stoi(myNums);
      }
    }
  cout<< "The largest value is " << maximum;
  return 0;
}