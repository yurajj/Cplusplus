#include <iostream> 
using namespace std; 
void main() 
{ 
  int score; // �Է¹��� ������ ������ ���� 
  char grade; // ���� ������ ������ ���� 
  cout<<"������ �Է��ϼ��� -> "; 
  cin>>score; 
  
  switch(score/10) { // �� 
    case 10 : cout<< "A�����Դϴ�."<<endl; 
    case 9 : cout<< "A�����Դϴ�."<<endl; 
    case 8 : cout<< "B�����Դϴ�."<<endl; 
    case 7 : cout<< "C�����Դϴ�."<<endl; 
    case 6 : cout<< "D�����Դϴ�."<<endl; 
    default : cout<< "F�����Դϴ�."<<endl; 
  } 
} 