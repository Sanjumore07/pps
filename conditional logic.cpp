#include <iostream>
using namespace std;

int main(){
  int age;
  
  //prompt the user for their age
  cout<<"Enter your age :";
  cin>>age;
  
  //conditional logic using 'if-else'
  if(age>=18){
    cout<<"you are an adult."<<endl;
  }else{
    cout<<"you are not an adult."<<endl;
  }
  return 0;
  }
 