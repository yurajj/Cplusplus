#include <iostream> 
using namespace std; 
void main() 
{ 
  int num; 
  cout<<"���� �Է��ϼ���(0�� �Է��ϸ� ����) : "; 
  cin>>num; 
  while(num!=0) { 
    cout<< num <<"�� �Է��ϼ̱���.\n"; 
    cout<<"���� �Է��ϼ���(0�� �Է��ϸ� ����) : "; 
    cin>>num; 
  } 
  cout<< num <<"�� �Է��Ͽ��⿡ �ݺ����� ����Ǿ����ϴ�.\n"; 
} 