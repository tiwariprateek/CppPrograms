#include<iostream>
using namespace std;
class Methods{
	public :
		void Enterelements(int A[],int n){
			for (int i=0;i<n;i++){
			cout<<"Enter elements :"<<endl;
			cin>>A[i];
			}
		}
	void Showelements(int A[],int n){
		for (int i=0;i<n;i++){
			cout<<A[i]<<" ";
			}
		}	
	void Selectionsort(int A[],int n){
		for (int i=0;i<n-1;i++){
			int imin=i;
			for(int j=i+1;j<n;j++){
				if(A[j]<A[imin])
					imin=j;
				}
			int temp=A[i];
			A[i]=A[imin];
			A[imin]=temp;	
		}	
	}
};
int main(){
	int size;
	int arr[size];
	cout<<"Enter size of array :"<<endl;
	cin>>size;
	Methods obj;
	obj.Enterelements(arr,size);
	obj.Selectionsort(arr,size);
	obj.Showelements(arr,size);
}

