#include<iostream>
#include<algorithm>
using namespace std;
int main(){
	int n;
	cout<<"Size:";
	cin>>n;
	int arr[n];
	cout<<"Element:";
	for(int i=0;i<n;i++){
		cin>>arr[i];
	}
	for(int i=0;i<n;i++){
		cout<<arr[i]<<" ";
	}
	sort(arr,arr+n);
	    int flag=0;
	    int a=0;
	        a=arr[1]-arr[0];
        for(int i=0;i<n-1;i++){
            if(a!=arr[i+1]-arr[i]){
            	flag++;
            	break;
			}
        }
       
	return 0;
}
