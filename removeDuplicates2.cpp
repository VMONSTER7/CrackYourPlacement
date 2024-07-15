#include<iostream>

using namespace std;

int removeDuplicates(int arr[],int n);

 int main(){
    int arr[10] = {0,0,1,1,1,2,2,3,3,4};
    int n = 10 ;
    int ans = removeDuplicates(arr,n);
    cout<<ans;
    return 0 ; 
 }
 
 int removeDuplicates(int arr[],int n){
    int i = 0 , j = 0;
    while(j<n){
        if(arr[i]==arr[j]){
            j++;
        }
        else{
            swap(arr[i+1],arr[j]);
            i++;
            j++;
        }
    }
    return i+1;
 }
