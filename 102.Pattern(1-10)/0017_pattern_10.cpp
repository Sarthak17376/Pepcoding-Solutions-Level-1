// 		    *	
// 	   *		*	
// *				*	
//     *		*	
// 		    *

#include <iostream>
using namespace std;

int main(int argc, char **argv){
    int n;
    cin >> n;

    for(int i=1; i<=n; i++){
        if(i<=(n+1)/2){
            for(int j=1; j<=n; j++){
                if(j==(n+1)/2+i-1 || j==(n+1)/2-i+1){
                    cout<<"*\t";
                }
                else{
                    cout<<"\t";
                }
            }
        }
        else{
            for(int j=1; j<=n; j++){
                if(j==(n+1)/2+(n-i) || j==(n+1)/2-(n-i)){
                    cout<<"*\t";
                }
                else{
                    cout<<"\t";
                }
            }
        }
        cout<<endl;
    }
    
}