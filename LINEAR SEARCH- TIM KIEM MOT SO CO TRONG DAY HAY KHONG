#include <bits/stdc++.h>
#include <vector>
using namespace std;
bool ls(int a[], int n,int x){
   for (int i=0;i<n;i++){
    if (a[i]==x) return true;
   }
   return false;
}
//CACH 1

bool bs(int a[], int n, int x){
        int l=0, r=n-1;
    while(l<=r){
        int m=(l+r)/2;
        if(a[m]==x){
            return true;}
        else if(a[m]<x){
            l=m+1;
        }
        else {
            r=m-1;
        }
}
    return false;
}
//CACH 2
bool binary_search(int a[], int l, int r, int x){
    if (l>r) return false;
    int m=(l+r)/2;
    if (a[m]==x) return true;
    else if(a[m]<x){
        binary_search(a,m+1,r,x);
    }
    else if(a[m]>x){
        binary_search(a,l,m-1,x);
    }
    return false;
}
//CACH 3
int main(){
    int n,x; cin>>n>>x;
    vector<int>v(n);
    for(int i=0;i<n;i++){
        cin>>v[i];
    }
    if(binary_search(v.begin(),v.end(),x)==1){
    cout<<"FOUND";}
    else {cout<<"NOT FOUND";}
}
