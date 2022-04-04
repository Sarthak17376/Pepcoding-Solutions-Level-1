// 		    *	
// 	    *	*	*	
//  *   *	*	*	*	
// 	    *	*	*	
// 		    *	
// for n = 5

#include <iostream>
using namespace std;

int main(int argc, char **argv){
    int n;
    cin >> n;

    for(int i=1; i<=n; i++){
        if(i<=(n+1)/2){
            for(int k=1; k<=(n+1)/2-i; k++){
                cout<<"\t";
            }
            for(int j=1; j<=2*i-1; j++){
                cout<<"*\t";
            }
        }
        else{
            for(int k=1; k<=i-(n+1)/2; k++){
                cout<<"\t";
            }
            for(int j=1; j<=2*n-2*i+1; j++){
                cout<<"*\t";
            }
        }
        cout<<endl;
    }

}