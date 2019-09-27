#include<iostream>
#include<string>
using namespace std;
int main(){
	string userinput;
	char alphabet[26] = {'a','b','c','d','e','f','g','h','i','j','k','l','m','n','o','p','q','r','s','t','u','v','w','x','y','z'};
	cout<<"Enter your word :";
	getline(cin,userinput);
	cout<<"User input was :"<<userinput<<endl;
	cout<<"Encrypted text is :";
	int length=userinput.length();
	char userarr[length]={};
	for(int i=0;i<length;i++){
		for(int j=0;j<26;j++){
			if(userinput[i]==alphabet[j]){
				//cout<<"Encryped alphabets :"<<alphabet[25-j]<<endl;
				int newindex=25-j;
				//cout<<newindex<<endl;
				//cout<<"Encrypted text is :"<<endl;
				cout<<alphabet[newindex];
			}
			}
		
	}
return 0;
}
