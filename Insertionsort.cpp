#include<iostream>
using namespace std;
void Insertionsort(int A[],int n){
	for (int i=1;i<n;i++){
		int value=A[i];
		int hole=i-1;
		while(hole>=0 && A[hole]>value){
			A[hole+1]=A[hole];
			hole=hole-1;
		}
		A[hole+1]=value;	
	}
}
int main(){
int arr[]={22,0,6,9};
int size=4;
Insertionsort(arr,size);
for (int i=0;i<4;i++)
cout<<arr[i]<<" ";	
}

