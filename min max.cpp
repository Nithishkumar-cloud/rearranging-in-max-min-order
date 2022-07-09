#include<bits/stdc++.h>
using namespace std;
int main(){
	int n;
	cin>>n;
	int arr[n];
	int temp[n];
	for(int i=0;i<n;i++){
		cin>>arr[i];
	}
	int small=0;
	int large=n-1;
	int flag=true;
	for(int i=0;i<n;i++){
		if(flag){
		
		temp[i]=arr[large];
		large--;
	}
	else{
		temp[i]=arr[small];
		small++;
		
	}
	flag=!flag;
	}
	for(int i=0;i<n;i++){
		cout<<temp[i];
	}
}
