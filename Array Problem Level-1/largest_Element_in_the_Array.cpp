#include<bits/stdc++.h>
using namespace std;
int largestele(int *arr,int n){
	int maxx=INT_MIN;
	for(int i=0;i<n;i++){
		if(arr[i]>maxx){
			maxx=arr[i];
		}
	}
	return maxx;
}
int largestele2(int *arr,int n){
	int maxx1=0;
	for(int i=0;i<n;i++){
		maxx1 = max(maxx1,arr[i]);
	}
	return maxx1;
}
int main(){
	int n;
	cin>>n;
	int arr[1000];
	for(int i=0;i<n;i++){
		cin>>arr[i];
	}
	cout<<largestele(arr,n)<<endl;
	cout<<endl;
	cout<<largestele2(arr,n)<<endl;

return 0;	
}