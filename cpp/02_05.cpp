#include <iostream> 
#include <iomanip> // setiosflags ���۱� ����� ���� ������ ������� 
using namespace std; 
 
void main() 
{ 
  float a=123456.789123; 
  double b=123456.789123; 
  
  // �Ǽ��� �Ҽ��� ���·� ����ϰڴٴ� �ǹ� 
  cout<<setiosflags(ios::fixed); 
  cout<<a<<endl; 
  cout<<b<<endl; 
}