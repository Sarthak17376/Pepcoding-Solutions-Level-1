// *   *	*		*
// 	        *       *
// *	*	*   *   *
// *		*      
// *		*   *	*

#include <iostream>
using namespace std;
int main(int argc, char** argv){
    int n;
    cin >> n;

    for(int i=1; i<=n; i++){
        for(int j=1; j<=n; j++){
            if(j==n/2+1 || i==n/2+1){
                cout<<"*\t";
            }
            else if(i<=n/2 && j==n){
                cout<<"*\t";
            }
            else if(i==1 && j<=n/2){
                cout<<"*\t";
            }
            else if(i==n && j>n/2+1){
                cout<<"*\t";
            }
            else if(i>n/2+1 && j==1){
                cout<<"*\t";
            }
            else{
                cout<<"\t";
            }
        }
        cout<<endl;
    }
    return 0;
}