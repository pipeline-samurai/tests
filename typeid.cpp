// This program prints in stOut the ID type of a variable

#include<iostream>
#include<typeinfo>
using namespace std ;
int main()
{   
    auto a = 5 ; 
    auto b = 10.5 ;
    cout << a << " " << b << "\n" ; 
    cout << typeid(a).name() << " " << typeid(b).name();
    return 0 ;
}
 20:25:52 up 15 days, 28 min,  0 users,  load average: 0.00, 0.00, 0.00
 20:25:59 up 15 days, 28 min,  0 users,  load average: 0.00, 0.00, 0.00
 20:26:05 up 15 days, 28 min,  0 users,  load average: 0.08, 0.02, 0.01
