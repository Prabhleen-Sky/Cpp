#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
   
    for(int i=0;i<n-1;i++){
        int  min_i = i;
        for(int j=i+1;j<n;j++){
            if(arr[j]<arr[min_i]){
                min_i = j;
            }
        }
        int temp = arr[min_i];
        arr[min_i] = arr[i];
        arr[i] = temp;
    }
    
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}