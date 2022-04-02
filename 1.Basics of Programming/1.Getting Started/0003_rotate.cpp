#include <bits/stdc++.h>

using namespace std;
int main(){
    int n,k;
    cin>>n>>k;
    
    int count = 0, temp=n;
    while(temp!=0){
        temp/=10;
        count++;
    }
    if(k>=0){
        k=k%count;
    }
    else{
        k=k%count;
        k=count-abs(k);
    }
    int div = 1;
    int mult = 1;
    
    for(int i=1;i<=count;i++){
        if(i<=k){
            div=div*10;
        }
        else{
            mult*=10;
        }
    }
    int q = n/div;
    int r = n%div;
    
    r = r*mult+q;
    
    cout<<r;
    return 0;
}