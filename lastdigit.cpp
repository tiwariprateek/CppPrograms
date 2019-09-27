#include<iostream>
using namespace std;
int main(){
	int j=1;
	double num;
	int number1,number2,number3,number4,number5;
	int mod1,mod2,mod3,mod4,mod5;
	cout<<"Enter your decimal number : ";
	cin>>num;
	number1=num*10;
	number2=num*100;
	number3=num*1000;
	number4=num*10000;
	number5=num*100000;
	mod1=number1%10;
	mod2=number2%10;
	mod3=number3%10;
	mod4=number4%10;
	mod5=number5%10;
	int arr[5]={mod1,mod2,mod3,mod4,mod5};
	cout<<"Value of mod10 is "<<mod1<<endl;
	cout<<"Value of mod100 is "<<mod2<<endl;
	cout<<"Value of mod1000 is "<<mod3<<endl;
	cout<<"Value of mod10000 is "<<mod4<<endl;
	cout<<"Value of mod100000 is "<<mod5<<endl;
	cout<<"Numbers after decimal are"<<mod1<<mod2<<mod3<<mod4<<mod5<<endl;
	for(int i=0;i<5;i++){
		if(arr[i]==0 && arr[i+1]!=0){
			cout<<"Value of last decimal is"<<arr[i-1];
			for(int j=i+2;j<6;j++)
				if(arr[j]!=0)
					cout<<"Value inside nested for loop is "<<arr[j];
					break;
		}
	}
}
