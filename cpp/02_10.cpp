#include <iostream> 
#include <cstring> //strlen( ) �Լ��� ����ϱ� ���� �������
using namespace std; 
void main() 
{ 
  char flowers1[5] = "rose"; 
  char flowers2[6] = {'l', 'i', 'l', 'a', 'c'}; 
  char flowers3[] = "tulip"; 

  cout << flowers1 <<"\n"; 
  cout << flowers2 <<"\n"; 
  cout << flowers3 <<"\n"; 
  
  cout << strlen(flowers1) <<"\n"; // ���ڿ��� ���� 
  cout << sizeof(flowers3) <<"\n"; // �迭�� ũ�� 
} 