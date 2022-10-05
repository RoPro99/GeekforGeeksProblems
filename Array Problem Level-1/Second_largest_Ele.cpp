#include<bits/stdc++.h>
using namespace std;
int  secondlarge(int *arr,int n){
	
	int firstlargest=INT_MIN;
	for(int i=0;i<n;i++){
		firstlargest=max(firstlargest,arr[i]);
		}
		//cout<<firstlargest<<endl;
		int secondlargest=INT_MIN;
		for(int i=0;i<n;i++){
			if(arr[i]>secondlargest&&arr[i]<firstlargest){
				secondlargest =arr[i];
				
			}
		}
		return secondlargest;
}
int main(){
	int n;
	cin>>n;
	int arr[1000];
	for(int i=0;i<n;i++){
		cin>>arr[i];
	}
	cout<<secondlarge(arr,n)<<endl-;

return 0;	
}