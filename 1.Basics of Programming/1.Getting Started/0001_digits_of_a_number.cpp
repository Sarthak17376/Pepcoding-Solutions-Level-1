#include <bits/stdc++.h>
using namespace std;

int main(int argc, char **argv){
    int n;
    cin >> n;

    int temp = n, count = 0;
    while(temp!=0){
        temp/=10;
        count++;
    }
    
    int div = pow(10,count-1);
    while(div!=0){
        int q = n/div;
        cout<<q<<endl;
        n%=div;
        div/=10;
    }

    return 0;
}