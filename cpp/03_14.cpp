#include <iostream> 
using namespace std; 
void main() 
{ 
   int total=0;
   int i;
   for(i=1; i<=10; i++) { 
      if(i%2==0) // i가 2로 나누어서 떨어지면 
         break;  // for문을 벗어남 
      total+=i; 
   } 
   cout<<"i가 "<< i <<" 일 때 for문을 벗어남\n"; 
}