// 		    1	
// 	    2	3	2	
// 3	4	5	4	3	
// 	    2	3	2	
// 		    1	

#include <iostream>
using namespace std;
int main(int argc, char**argv){
    int n;
    cin >> n;

    for(int i=1; i<=n; i++){
        if(i<=(n+1)/2){
            int k=i;
            for(int j=(n+1)/2-i; j>=1; j--){
                cout<<"\t";
            }
            for(int j=1; j<=2*i-1; j++){
                cout<<k<<"\t";
                if(j>=i){
                    k--;
                }
                else{
                    k++;
                }
            }
        }
        else{
            int l=n-i+1;
            for(int j=i-(n+1)/2; j>=1; j--){
                cout<<"\t";
            }
            for(int j=1; j<=2*(n-i+1)-1; j++){
                cout<<l<<"\t";
                if(j>=n-i+1){
                    l--;
                }
                else{
                    l++;
                }
            }
        }
        cout<<endl;
    }

    return 0;
}