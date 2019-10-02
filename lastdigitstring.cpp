#include <iostream>
#include<string>
using namespace std;

int main()
{
    string user;
    int len;
    cout<<"Enter a string";
    getline(cin,user);
    cout<<"String Entered by user :"<<user<<endl;
    len=user.length();
    int lastdigit=len-1;
    cout<<"Length of user String is :"<<len<<endl;
    cout<<"Last Digit is :"<<user[lastdigit];    
    return 0;
}
