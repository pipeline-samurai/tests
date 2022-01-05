#include <iostream>
using namespace std;

void doubleTheValue(int a) 
{ 
 a = a*2; 
} 
int main() 
{ 
 int a = 5;
 cout << "Value of a before calling double function = " << a << "\n"; 
 doubleTheValue(a); 
 cout << "Final Value of a = " << a << "\n"; 
}
