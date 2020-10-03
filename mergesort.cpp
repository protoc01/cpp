#include<bits/stdc++.h>

using namespace std;

int merge(){
	

}

void mergesort(int arr[],int low,int high){
	
	if(low<high){

		int mid = low+(high-low) / 2;
	
		mergesort(arr,low,mid);
		mergesort(arr,mid+1,high);
		merge(arr,low,high);	
	}

}

int main(){

	int n;
	cin>>n;
	int arr[n];
	for(int i=0; i<n;++i){
		cin>>arr[i];
	}
	
	mergesort(arr,0,n-1);
}
