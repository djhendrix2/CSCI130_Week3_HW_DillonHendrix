/**************************************
  Programmer: Dillon Hendrix
  Date: 09/10/2022
  Description: Kattis Sort Two Numbers Problem 
*****************************************/

#include <iostream>
using namespace std;
#include <iomanip>
#include <cmath>

int main() {
  // Initalize variables 
  int a, b;
  // cin >> a >> b;

  // Obtain a
  cout << "Enter a: ";
  cin >> a;
  cout << endl;

  // Obtain b
  cout << "Enter b: ";
  cin >> b;
  cout << endl;
  
  // Sort a and b from lowest to highest
  if (a >= b)
    cout << b << " " << a << endl;
    
  else if (a <= b)
    cout << a << " " << b << endl;

  else
    cout << "Try again!" << endl;

  return 0;
  }

  