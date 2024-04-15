#include<iostream>
using namespace std;

int main(){
    int n;
    cout<<"Enter the number of elements in the array: ";
    cin>>n;
    int arr[n];
    cout<<"Enter the elements of the array: ";
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
    int sum = 0;
    for(int i=0; i<n; i++){
        sum += arr[i];
    }
    float avg = sum/n;
    int max = arr[0];
    int min = arr[0];
    for(int i=0; i<n; i++){
        if(arr[i] > max){
            max = arr[i];
        }
        if(arr[i] < min){
            min = arr[i];
        }
    }
    cout<<"Sum: "<<sum<<endl;
    cout<<"Average: "<<avg<<endl;
    cout<<"Maximum: "<<max<<endl;
    cout<<"Minimum: "<<min<<endl;
    return 0;
    
}
