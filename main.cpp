#include <string>
#include <iostream>
#include <cmath>
#include <stdio.h>

using namespace std;

double findGrav(double latt, double h);


int main(){

  const double pi = 3.14;
  double latt;
  double h;

  cout << "Hello there." << endl;
  cout << "lattitude: ";
  cin >> latt;
  cout << "height: ";
  cin >> h;

  double ans = findGrav(latt*(pi/180), h);

  printf ("Earth's gravity at this point is %.8f.\n", ans);



  return 0;
}

double findGrav(double latt, double h){
  return (980.6160*(1-(0.0026373*cos(2*latt))+(5.9*(pow(10, -6))*pow(cos(2*latt), 2))))-(((3.085462*pow(10, -7))+(2.27*pow(10, -7)*cos(2*latt)))*h)+(((7.254*pow(10, -11))+(pow(10, -18)*cos(2*latt)))*pow(h, 2))-(((1.517*pow(10, -17)+(6*pow(10, -20)*cos(2*latt))))*pow(h, 3));
}

