// this program shows the difference between local and global variables

#include<iostream>
using namespace std ;
int x, y; 
int main()
{   
    int y = 2 ;
    {
        int y = 3 ; 
        cout << x << "  " << y ;
    }
    return 0 ;
}
