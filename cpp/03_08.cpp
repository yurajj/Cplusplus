#include <iostream> 
using namespace std; 
void main() 
{ 
  int total=0; 
  for(int i=1;i<=5;i+=2) { 
    cout<<"i = "<<i<<endl; 
    total=total+i; 
    cout<<"total = "<<total<<endl; 
  } 
  cout<<"1���� 5������ Ȧ�� �հ�� "<< total <<"�Դϴ�"<<endl; 
} 