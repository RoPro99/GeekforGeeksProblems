#include<bits/stdc++.h>
using namespace std;
bool check(int *arr,int n){
	int cnt=0;
	for(int i=0;i<n;i++){
		if(arr[i]>arr[i+1]){
			cnt++;
		}
	}
	
	if(cnt>1){
		return false;
	}
	return true;
}
int main(){
	int n;
	cin>>n;
	int arr[1000];
	for(int i=0;i<n;i++){
		cin>>arr[i];
	}
	if(check(arr,n)){
		cout<<"1"<<endl;
		
	}
	else{
		cout<<"0"<<endl;
	}

return 0;	
}