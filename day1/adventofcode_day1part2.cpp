#include <iostream>
#include <fstream>
using namespace std;

int main() {
  int total = 0;
  int total1 = 0;
  int total2 = 0;
  int largest = 0;
  int second_largest = 0;
  int third_largest = 0;
  string myNums, myNums1, myNums2;
  
  ifstream myFile("adventofcode_day1.txt");
  while (getline(myFile, myNums)){
    if (myNums.empty()){
        if (total > largest){
          largest = total;
        }
        total = 0;
   }else{
        total += stoi(myNums);
      }
    }
  myFile.close();
  
  ifstream myFile1("adventofcode_day1.txt");
  while (getline(myFile1, myNums1)){
    if (myNums1.empty()){
        if (total1 > second_largest && total1 < largest){
          second_largest = total1;
        }
        total1 = 0;
   }else{
        total1 += stoi(myNums1);
      }
    }
  myFile1.close();

  ifstream myFile2("adventofcode_day1.txt");
  while (getline(myFile2, myNums2)){
    if (myNums2.empty()){
        if (total2 > third_largest && total2 < second_largest){
          third_largest = total2;
        }
        total2 = 0;
   }else{
        total2 += stoi(myNums2);
      }
    }
  myFile2.close();
  
  int sum = 0;
  sum = (largest + second_largest + third_largest);
  cout << "The sum is " << sum;
  return 0;
}