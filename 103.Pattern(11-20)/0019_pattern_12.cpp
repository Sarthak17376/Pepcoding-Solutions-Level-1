// 0	
// 1	1	
// 2	3	5	
// 8	13	21	34	
// 55	89	144	233	377	

#include <iostream>
using namespace std;

int main(int argc, char **argv){
    int n;
    cin >> n;
    
    int F1=0, F2=1, Fn;
    for(int i=1; i<=n; i++){
        for(int j=1; j<=i; j++){
            cout<<F1<<"\t";
            Fn=F1+F2;
            F1=F2;
            F2=Fn;
        }
        cout<<endl;
    }
    
}