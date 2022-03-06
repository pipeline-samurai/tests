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
 20:26:12 up 15 days, 28 min,  0 users,  load average: 0.07, 0.02, 0.00
 20:26:18 up 15 days, 28 min,  0 users,  load average: 0.07, 0.02, 0.00
 20:26:24 up 15 days, 29 min,  0 users,  load average: 0.14, 0.03, 0.01
 20:26:31 up 15 days, 29 min,  0 users,  load average: 0.12, 0.03, 0.01
 20:26:37 up 15 days, 29 min,  0 users,  load average: 0.11, 0.03, 0.01
 20:26:43 up 15 days, 29 min,  0 users,  load average: 0.10, 0.03, 0.01
 20:26:50 up 15 days, 29 min,  0 users,  load average: 0.09, 0.03, 0.01
 20:26:56 up 15 days, 29 min,  0 users,  load average: 0.08, 0.03, 0.01
