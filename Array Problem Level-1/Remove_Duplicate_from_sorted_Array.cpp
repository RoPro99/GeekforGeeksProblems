#include<bits/stdc++.h>
using namespace std;
int  removeduplicate(int *arr,int n){
	  int counter=0;
        for(int i =0;i<n-1;i++)
        {
            if(arr[i]==arr[i+1])
            {
                arr[i]=INT_MAX;
                counter++;
            }
        }
        sort(arr,arr+n);
    
        return n-counter;
    }
int main(){
	int n;
	cin>>n;
	int arr[1000];
	for(int i=0;i<n;i++){
		cin>>arr[i];
	}
	cout<<removeduplicate(arr,n);

return 0;	
}