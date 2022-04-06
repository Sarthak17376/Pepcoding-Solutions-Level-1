// 1												1	
// 1	2										2	1	
// 1	2	3								3	2	1	
// 1	2	3	4						4	3	2	1	
// 1	2	3	4	5				5	4	3	2	1	
// 1	2	3	4	5	6		6	5	4	3	2	1	
// 1	2	3	4	5	6	7	6	5	4	3	2	1	

#include <iostream>
using namespace std;
int main(int argc, char**argv){
    int n;
    cin >> n;

    for(int i=1; i<=n; i++){
        int num = 1;
        for(int j=1; j<=2*n-1; j++){
            if(j<=i || j>2*n-1-i)
                cout<<num<<"\t";
            else
                cout<<"\t";
            if(j<n){
                num++;
            }
            else{
                num--;
            }
        }
        cout<<endl;
    }
    
    return 0;
}