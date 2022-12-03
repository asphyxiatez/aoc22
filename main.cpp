#include <iostream>
#include <fstream>
using namespace std;

int main() {
  int total = 0;
  int maximum = 0;
  string strNums;
  ifstream data("adventofcode_day1.txt");
  while (getline(data, strNums)){
    if (strNums.empty()){
        if (maximum == 0){
          maximum = total;
        } else if (total>maximum){
          maximum = total;
        }
        total = 0;
      } else{
        total += stoi(strNums);
      }
    }
  cout<< "The largest value is " << maximum;
  return 0;
}