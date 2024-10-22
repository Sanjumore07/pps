#include <iostream>
using namespace std;

int main() 
{
  int num=2;
  
  int*ptr=&num;
  
  cout<<"Address of num _>"<<&num<<endl;
  cout<<"Address of stored in pointer _>"<<ptr<<endl;
  
  cout<<"Value of num _>"<<num<<endl;
  cout<<"value of num using pointer _>"<<*ptr<<endl;
  
  return 0;
}
  