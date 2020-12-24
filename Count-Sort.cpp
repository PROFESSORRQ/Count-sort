#include <bits/stdc++.h>
#include <algorithm>
#include <hashtable.h>
#include <math.h>
#include <vector>
#include <string>
using namespace std;
#define Nmax INT_MAX;
#define Nmin INT_MIN;
void countsort(int arr[],int n){
     int maxno=0;
    for(int i=0;i<n;i++){
  maxno=max(maxno,arr[i]);
}
    int a[20]={0};
    int b[n];
    for(int i=0;i<n;i++){
        a[arr[i]]++;
    }
    for(int i=1;i<=maxno;i++){
        a[i]=a[i]+a[i-1];
    }
    for(int i=n-1;i>=0;i--){
        b[--a[arr[i]]]=arr[i];
    }
    for(int i=0;i<n;i++){
        arr[i]=b[i];
    }
}
int main(){
   
      int n;
      cin>>n;
      int arr[n];
       for(int i=0;i<n;i++){
        cin>>arr[i];
       
    }

   
    countsort(arr,n);
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }

}