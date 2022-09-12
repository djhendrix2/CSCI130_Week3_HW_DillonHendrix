/**************************************
  Programmer: Dillon Hendrix
  Date: 09/10/2022
  Description: Kattis Spavanac Problem
*****************************************/

#include <iostream>
using namespace std;
#include <iomanip>
#include <cmath>

int main() {
  // initialize variables
  int H, M; // hours 
  cin >> H >> M;

  // Calculate 45 min. timer offset
  if (M < 45 && H > 0) {
    M = M - 45;
    M = M + 60;
    H--;
    cout << H << " " << M;
  }
  else if (M >= 45) {
    M = M - 45;
    cout << H << " " << M;
  }
  else if (M < 45 && H == 0) {
    M = M - 45;
    M = M + 60;
    H = 23;
    cout << H << " " << M;
  }
  
  return 0;
  }

  