#include <iostream> 
using namespace std; 
void main() 
{ 
   int i=0;
   int total=0;   
   // ���� �ݺ�
   for( ; ; )   {   
      i++;
      total+=i;
      if(total > 100)    // ���� 100�� �Ѱ� �Ǹ� 
           break; //for���� �����.
   }
   cout << "���� ���ʷ� 100�� ���� ���� �ڿ��� : " << i << endl;
   cout << "�� �� : " << total << endl;
} 