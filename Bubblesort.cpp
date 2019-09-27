#include<iostream>
using namespace std;
void Bubblesort(int A[],int n){
	for(int i=0;i<n-1;i++){
		for(int j=0;j<n-i-1;j++){
			if(A[j]>A[j+1]){
				int temp=A[j];
				A[j]=A[j+1];
				A[j+1]=temp;
			}
		}
	}
}
int main(){
	int arr[5]={99,3,22,0,1};
	Bubblesort(arr,5);
	for(int i=0;i<5;i++)
	cout<<arr[i]<<" ";
}
