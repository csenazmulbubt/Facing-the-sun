#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;

    while(t--){

        int n,count=0,max=0;
        cin>>n;
        int arr[n];
        for(int i=0;i<n;i++){
            cin>>arr[i];
        }
        count=0,max=0;
        for(int i=0;i<n;i++){

            if(arr[i]>max)
            {
               max=arr[i] ;
               count++;

            }

        }
        cout<<count<<endl;
    }

}
