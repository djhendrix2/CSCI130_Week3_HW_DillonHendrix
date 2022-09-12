/**************************************
  Programmer: Dillon Hendrix
  Date: 09/10/2022
  Description: Exercise 1 in Bronson Chapter 3 
*****************************************/

#include <iostream>
using namespace std;
#include <iomanip>

int main() {
  // initialize variables
  double x1, y1, x2, y2, m; // Cordinate units 

  // Manipulate variables 
  cout << setprecision(2) << fixed;
  cout << setw(3) << setfill ('0');
  
  // Prompt user to input x1, y1, x2, y2
  // Obtain x1
  cout << "Enter coordinate x1: ";
  cin >> x1;
  cout << endl;

  // Obtain y1
  cout << "Enter coordinate y1: ";
  cin >> y1;
  cout << endl;

  // Obtain x2
  cout << "Enter coordinate x2: ";
  cin >> x2;
  cout << endl;

  // Obtain y2
  cout << "Enter coordinate y2: ";
  cin >> y2;
  cout << endl;

  // Calculate slope m
  m = ((y2-y1)/(x2-x1));

  // Display m
  cout << "The value of the slope is " << setprecision(2) << setw(6) << setfill ('0') << m << endl;
  
  return 0;
}