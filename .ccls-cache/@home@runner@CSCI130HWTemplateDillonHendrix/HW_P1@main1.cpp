/**************************************
  Programmer: Dillon Hendrix
  Date: 09/05/2022
  Description: Manipulator Worksheet
*****************************************/

#include <cmath>
#include <iostream>
#include <iomanip>
using namespace std;

int main() {
  /* Lable parameters */
  // Hard coded parameters
  int c0;   // number of initial cases
  double r; // growth rate factor
  double m; // power polynomial

  // Calculated values
  double ct; // c(t)
  double A;  // equation constant related to equation 1

  // User input
  double t; // weeks

  /* initialize model parameters */
  c0 = 10;
  r = 0.2;
  m = 1.65;
  t = 10;

  /* Input */

  // Start of Section B
  cout << setprecision(0) << fixed;
  // cout << fixed << showpoint;
  cout << "c(" << t/7.0 << ") = " << ct << endl;

  /* cout << setprecision(0) << fixed;
  cout << "c(" << t/7.0 << ") = " << setprecision(2) << ct <<        endl; */

  // Scientific
  cout << scientific;
  cout << "c(" << t/7.0 << ") = " << ct << endl;

  // test formatting from setw
  cout << setprecision(0) << fixed;
  cout << setw(10) << "Your input is being evaluated...";
  cout << "\n";
  cout << setw(10) << "c(" << t/7.0 << ") = " << ct << endl;

  cout << "We recommend tring the following time points: \n";
  cout << setw(5) << 10 << setw(7) << 20 << setw(7) << 50 << endl;

  cout << "We recomment trying the following time points: \n";
  cout << setw(5) << setfill ('*') << 10;
  cout << setw(7) << setfill ('*') << 20;
  cout << setw(7) << setfill ('#') << 50 << endl;
  
  // End of Section B
  
  // Request user input
  cout << "for modle where m = " << m
       << ", c0 = " << c0; // Thus equation 2 will work
  cout << ", and r = " << r << "  --->" << endl;
  cout << "Input t [weeks] for the sub-exponential growth model" << endl;
  cin >> t;
  

  /* Coversions and Calculations */
  // convert t from weeks to days
  t = t * 7;

  // Solve equation 2, that finds a
  A = pow(c0, (1 / m));

  // Find c(t)
  ct = pow( (((r/m)*t) + A), m);

  /* Display results to users */
  // Output for the form c(t) = xx where t is shown in weeks
  cout << "c(" << t/7.0 << ") = " << ct << endl;

  return 0;

}