/*
 file: quadratic.cpp
 author: Jesus Efrain Gonzalez Jr
 date created: 10 July 2018
 version 1.0.0

 This program calculates the roots of a quadratic function using the quadratic formula

 */
#include<iostream>
#include<cmath>

using namespace std;


int main()
{
  //declare variables for the program. ax^2 + bx + c = 0
  double a, b, c;

  //prompt the user for the values of a, b, and c
  cout << "The quadratic formula has the format ax^2 + bx + c = 0\na: ";
  cin >> a;
  cout << "b: ";
  cin >> b;
  cout << "c: ";
  cin >> c;

  //calculate the discriminant of the function d = b^2 - 4ac
  double d = pow(b, 2) - 4 * a * c;

  //discriminant must be greater than 0 for real roots
  if(d < 0)
  {
    cout << "Discriminant is less than 0, the function contains no real roots" << endl;
    return 0;
  }

  //initialize variables to store root values
  double root1, root2;
  //calculate roots using quadratic formula
  root1 = (-b + sqrt(d)) / (2 * a);
  root2 = (-b - sqrt(d)) / (2 * a);

  cout << "Roots:\n" << root1 << endl << root2 << endl;

  return 0;
}
