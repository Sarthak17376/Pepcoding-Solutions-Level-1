// 1	
// 1	1	
// 1	2	1	
// 1	3	3	1	
// 1	4	6	4	1	

#include <iostream>
using namespace std;
int factorial(int x){
    if(x==0 || x==1){
        return 1;
    }
    else{
        return x*factorial(x-1);
    }
}

int main(int argc, char **argv){
    int n;
    cin >> n;
    
    for(int i=1; i<=n; i++){
        for(int j=1; j<=i; j++){
            cout<<factorial(i-1)/factorial(j-1)/factorial(i-j)<<"\t";
        }
        cout<<endl;
    }
    return 0;
}
