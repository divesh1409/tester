#include<iostream>
using namespace std;

int main(){
	int n;

	cout<<"Enter the number of elements"<<endl;
	cin>>n;
		int arr[n];
	cout<<"enter the elemnts"<<endl;
	for(int i =0;i<n;i++){
	cin>>arr[i];
	}
	int sum = 0;
	for(int i=0;i<n;i++)
	{
	sum += arr[i];
	}
	float avg = sum/n;
	int max =arr[0];
	int min = arr[0];
	for(int i =0;i<n;i++){
	
	if (arr[i] > max)
	  {max = arr[i] ;
	  }
	  if(arr[i] < min){
	  	min = arr[i];
	  }}
	  cout<<"sum : "<<sum<<endl;
	  cout<<"Avg : "<<avg<<endl;
	  cout<<"max : "<<max<<endl;
	  cout<<"min : "<<min<<endl;
return 0;
}
