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
