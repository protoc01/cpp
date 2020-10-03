#include <bits/stdc++.h>
using namespace std;

void merge(int h,int mid, int l,int arr[])
{
	int s1 = mid - l + 1;
	int s2 = h - mid;
	int L[s1],R[s2];
	
	
	for(int i=0; i<s1; ++i){
		L[i]=arr[l+i];	
	}
	for(int i=0; i<s2;++i){
		R[i]=arr[mid+1+i];
	}

	int i=0,j=0,k=l;
	
	while(i<s1 && j<s2){
		if(L[i]<=R[j]){
			arr[k]=L[i];
			++i;
		}
		else{
			arr[k]=R[j];
			++j;
		}
		++k;
	}

	while(i<s1){
		arr[k]=L[i];
		++i,++k;
	}
	while(j<s2){
		arr[k]=R[j];
		++j,++k;
	}

}

int mergesort(int l,int h,int arr[])
{
	

	if(l<h){
		int mid = l + (h - l) / 2;
		mergesort(l,mid,arr);
		mergesort(mid+1,h,arr);
	
		merge(h,mid,l,arr);
	}

}

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(nullptr);

	int arr[5] = {2,1,5,2,0};
	int arrsize = sizeof(arr)/sizeof(arr[0]);

	mergesort(0,arrsize-1,arr);
	
	for(auto x:arr){
		cout<<x<<"\t";
	}
}
