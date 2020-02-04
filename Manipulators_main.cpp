#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;

const double PI = acos(-1.0);

int main() {

//Declare and initialize objects 
double radius=10, area; 
area = PI * radius * radius; 

cout<<fixed<<setprecision(2);
cout << "The radius of the circle is: " 
     << setw(10) << radius << " centermeters" << endl; 
cout << " The area of the circle is " << setw(10) << area 
     << " square centimeters" << endl; 

    //end program
     return 0;

  
  
}