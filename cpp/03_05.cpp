#include<iostream> 
using namespace std; 
void main() 
{ 
  int score; // �Է¹��� ������ ������ ���� 
  char grade; // ���� ������ ������ ���� 
  cout<<"������ �Է��ϼ��� -> "; 
  cin>>score; 
  
  switch(score/10) { // ����� ������ ������ ����� 
    case 10 : grade='A';break; 
    case 9 : grade='A';break; 
    case 8 : grade='B';break; 
    case 7 : grade='C';break; 
    case 6 : grade='D';break; 
    default : grade='F'; 
  } 
  cout<<"�Է��� ���� " <<score<<" �� "<<grade<<"�����Դϴ�.\n"; 
} 