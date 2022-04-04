// *  *	 *		    *	*	*	
// *  *				    *	*	
// *						*	
// *  *				    *	*	
// *  *  *		    *	*	*	

#include <iostream>
using namespace std;

int main(int argc, char **argv){
    int n;
    cin >> n;

    for(int i=1; i<=n; i++){
        if(i<=(n+1)/2){
            for(int j=(n+1)/2-i+1; j>=1; j--){
                cout<<"*\t";
            }
            for(int k=1; k<=2*i-1; k++){
                cout<<"\t";
            }
            for(int l=(n+1)/2-i+1; l>=1; l--){
                cout<<"*\t";
            }
        }
        else{
            for(int j=i-(n+1)/2+1; j>=1; j--){
                cout<<"*\t";
            }
            for(int k=1; k<=2*n-2*i+1; k++){
                cout<<"\t";
            }
            for(int l=i-(n+1)/2+1; l>=1; l--){
                cout<<"*\t";
            }
        }
        cout<<endl;
    }
    return 0;
}