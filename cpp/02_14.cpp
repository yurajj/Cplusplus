#include <iostream> 
using namespace std; 
void main()
{ 
  int a = 3, b = 5, c = 3; 
  bool istrue; 
  istrue = a > b; 
  cout<<" a > b �� " << istrue << "\n"; 
   
  istrue = a * b < b + c ; 
  cout<<" a * b < b + c �� " << istrue << "\n"; 
   
  istrue = a * b == b * c ; 
  cout<<" a * b == b * c �� " << istrue << "\n"; 
}