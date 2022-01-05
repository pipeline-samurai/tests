#include 
using namespace std;
int main() {
 int maths = 99, science = 70; 
 // Create a pointer pointing to maths
 int * pMaths = &maths; // Explicit referencing 
 // value of variable that the pointer is pointing to
 cout << *pMaths << "\n";  
 // Both give the memory address of maths variable
 cout << &maths << "\n"; 
 cout << pMaths << "\n"; 
 // Gives location of pointer
 cout << &pMaths << "\n"; 
 // pointer can be reassigned to point to some other address
 pMaths = &science; // pMaths no longer points to maths 
 cout << pMaths << "\n"; // prints the address of science
 cout << &pMaths << "\n"; // pointer location is same though points to different variable
 // Create a reference (alias) to maths
 int & refMaths = maths; // maths and not &maths
 // not pointer *refMaths, just refMaths (value of maths)
 refMaths = 92;  
 cout << refMaths << "\n"; // 92
 cout << maths << "\n"; //92 
 //Both &maths and &refMaths give memory address of maths variable</span
 cout << &maths << "\n"; 
 cout << &refMaths << "\n";  
 //This code is wrong, you cannot assign reference to another. In other words "invalid conversion from 'int*' to 'int'"
 //refMaths = &science;  
 // This will change maths and refMaths both to the value of science
 refMaths = science; 
 science++; 
 cout << refMaths << "\n"; // 70
 cout << maths << "\n"; // 70
 cout << science << "\n"; // 71
}
