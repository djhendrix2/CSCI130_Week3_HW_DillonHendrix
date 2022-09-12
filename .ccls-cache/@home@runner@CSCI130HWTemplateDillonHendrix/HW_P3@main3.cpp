/**************************************
  Programmer: Dillon Hendrix
  Date: 09/10/2022
  Description: Exercise 9 in Bronson Chapter 3 
*****************************************/

#include <iostream>
using namespace std;
#include <iomanip>
#include <cmath>

int main() {
  // initialize variables
  double E, R, RC, t, i; // Cordinate units 
  const double e = 2.17828;

  // Manipulate variables 
  cout << setprecision(2) << setw(3) << setfill ('0') << fixed;
  cout << setw(3) << setfill ('0');
  
  // Prompt user to input E, R, C, t
  // Obtain E
  cout << "Enter battery voltage in volts (E): ";
  cin >> E;
  cout << endl;

  // Obtain R
  cout << "Enter the value of the resitor in ohms (R): ";
  cin >> R;
  cout << endl;

  // Obtain C
  cout << "Enter the value of the capacitor in farads (C) : ";
  cin >> RC;
  cout << endl;

  // Obtain t
  cout << "Enter time in seconds after the switch is closed (t): ";
  cin >> t;
  cout << endl;

  // Calculate slope m
  i = pow((E/R)*e,(-t/RC));
  cout << "The current flowing throught the curcuit (i); " << i << endl;
  
  // Display i
  // cout << "The voltage across the capacitor is " << i << endl;
  
  return 0;
}