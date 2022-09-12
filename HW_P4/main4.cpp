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

  
  
  // Prompt user to input C, R
  /* cout << "The amount of cheese to crust (R): " << setprecision(7) << percent_cheese;
  cin >> C;
  cout << endl;
  
  cout << " The amount of crust to cheese (C): " << setprecision(7) << percent_crust;
  cin >> R;
  cout << endl; */

  // Determine cheese ratio
  cin >> R >> C;
  if (R == C){
    percent_cheese = 0;
    cout << percent_cheese;
    return 0;
    
  }
  

  // Calculate percent cheese
  percent_cheese = ((C * C)/(R * R)) * 100;
  cout << setprecision(7) << percent_cheese;
  return 0;

}