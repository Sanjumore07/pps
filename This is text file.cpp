#include<fstream>
#include <iostream>
using namespace std;

int main(){
    ofstream outfile("example.txt");
   
     if(outfile.is_open()){
     outfile<<"Hello,world/n";
     outfile<<"This is a text file in c++/n";
     outfile.close();
    cout<<"Data written to file seccessfullay."<<endl;
    }else{
        cout<<"Error:could not open the file."<<endl;
    }
    return 0;
}
