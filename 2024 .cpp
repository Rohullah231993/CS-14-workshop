#include <iostream>
using namespace std;

int main () {
  int car = 850;
  cout << "The value car is " << car << endl;
  cin >> car;

  while (car >= 1000 & car < 800) {
    cout << car << "You are not qualified to buy" << endl;
    ++car; 
  }
  
  return 0;
}
