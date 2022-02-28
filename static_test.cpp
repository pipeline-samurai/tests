// C++ program to demonstrate 
// the use of static Static 
// variables in a Function
#include <iostream>
#include <string>
using namespace std;
  
void demo()
{ 
    // static variable
    static int count = 0;
    cout << count << " ";
      
    // value is updated and
    // will be carried to next
    // function calls
    count++;
}
  
int main()
{
    for (int i=0; i<5; i++)    
        demo();
    return 0;
}

 19:18:25 up 8 days, 23:21,  0 users,  load average: 0.00, 0.00, 0.00
 19:18:32 up 8 days, 23:21,  0 users,  load average: 0.08, 0.02, 0.01
 19:18:38 up 8 days, 23:21,  0 users,  load average: 0.07, 0.02, 0.00
 19:18:45 up 8 days, 23:21,  0 users,  load average: 0.06, 0.02, 0.00
 19:18:51 up 8 days, 23:21,  0 users,  load average: 0.06, 0.02, 0.00
 19:18:58 up 8 days, 23:21,  0 users,  load average: 0.05, 0.02, 0.00
 19:19:04 up 8 days, 23:21,  0 users,  load average: 0.05, 0.02, 0.00
 19:19:11 up 8 days, 23:21,  0 users,  load average: 0.04, 0.01, 0.00
 19:19:18 up 8 days, 23:21,  0 users,  load average: 0.04, 0.01, 0.00
 19:19:25 up 8 days, 23:22,  0 users,  load average: 0.03, 0.01, 0.00
 19:19:31 up 8 days, 23:22,  0 users,  load average: 0.11, 0.03, 0.01
 19:19:38 up 8 days, 23:22,  0 users,  load average: 0.09, 0.03, 0.00
