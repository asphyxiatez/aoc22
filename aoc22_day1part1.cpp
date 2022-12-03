#include <iostream>
#include <fstream>
using namespace std;

int main() {
  int total = 0;
  int largest = 0;
  string myNums;
  ifstream data("adventofcode_day1.txt");
  while (getline(data, myNums)){
    if (myNums.empty()){
        if (largest == 0){
          largest = total;
        } else if (total > largest){
          largest = total;
        }
        total = 0;
      } else{
        total += stoi(myNums);
      }
    }
  cout << "The largest value is " << largest;
  return 0;
}