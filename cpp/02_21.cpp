#include <iostream> 
using namespace std; 
void main() 
{ 
  int a , b , c; 
  int max; 
  
  cout << " �� ���� �Է��ϼ��� : "; 
  cin >> a >> b >> c; 
  
  max = (a > b) ? a : b; 
  max = (max > c) ? max : c; 
 
  cout << " ���� ū ���� : " << max <<"\n"; 
} 