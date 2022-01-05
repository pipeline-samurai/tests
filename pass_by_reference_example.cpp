#include <iostream>
using namespace std;

void doubleTheValue(int &param) // passing by reference using "&(varname)"
{ 
 param = param*2; 
}  
int main() 
{ 
 int a = 5;
 cout << "Value of a before calling double function = " << a << "\n"; 
 doubleTheValue(a); 
 cout << "Value of a = " << a << "\n"; 
}
