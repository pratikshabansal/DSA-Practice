#include<bits/stdc++.h>
using namespace std;
int merge(int *arr,int s,int e){

}
int mergesort(int *arr,int s, int e){
    if(s>=e){
        return 0;
    }
    int mid=(e-s)/2;
    mergesort(arr,s,mid);
    mergesort(arr,mid+1,e);
    merge(arr,s,e);
}
int main()
{
    int arr[5]={2,5,3,1,4};
    int n=5;
    int s=0;
    int e=n-1;
    mergesort(arr,s,e);
 return 0;
}