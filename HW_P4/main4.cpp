/**************************************
  Programmer: Dillon Hendrix
  Date: 09/10/2022
  Description: Kattis Pizza Crust Problem 
*****************************************/

#include <iostream>
using namespace std;
#include <iomanip>
#include <cmath>

int main() {

  // Initalize variables 
  double R, C, percent_cheese, percent_crust;



  // Determine cheese ratio
  cin >> R >> C;
  if (R == C){
    percent_cheese = 0;
    cout << percent_cheese;
    return 0;
    
  }
  
  // Calculate percent cheese
  percent_cheese = ((C * C)/(R * R)) * 100;
  cout << "The percentage of pizza that has cheese is   " << setprecision(6) << percent_cheese << endl;
  return 0;

}