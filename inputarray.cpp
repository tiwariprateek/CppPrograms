#include<iostream>
using namespace std;
void Enterelements(int arr[],int size){
 for (int i=0;i<size;i++){	
		cout<<"Enter Elements :"<<endl;
		cin>>arr[i];
}
}
void ShowElements(int arr[],int size){
    for(int i=0;i<size;i++){
		cout<<arr[i]<<" ";
	}
}
int main(){
	int size;
	int arr[size];
	cout<<"Enter the size of array :";
	cin>>size;
	Enterelements(arr,size);
	ShowElements(arr,size);
    return 0;
}
