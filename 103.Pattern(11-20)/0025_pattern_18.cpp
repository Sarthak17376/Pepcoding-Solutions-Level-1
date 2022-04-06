//*	  *	  *	  *	  *	  *   *	
//	  *				  *	
//		  *		  *	
//			  *	
//		  *	  *	  *	
//	  *	  *	  *	  *	  *	
//*	  *	  *	  *	  *	  *	  *	

#include <iostream>
using namespace std;
int main(int agrc, char**argv){
    int n;
    cin >> n;
    int stars = n;
    int spaces = 0;
    for(int i=1; i<=n; i++){
        for(int j=1; j<=spaces; j++){
            cout<<"\t";
        }
        for(int k=1; k<=stars; k++){
            if(i>1 && i<=n/2){
                if(k==1 || k==stars){
                    cout<<"*\t";
                }
                else{
                    cout<<"\t";
                }
            }
            else{
                cout<<"*\t";
            }
        }
        cout<<endl;
        if(i<=n/2){
            stars-=2;
            spaces++;
        }
        else{
            stars+=2;
            spaces--;
        }
    }
    return 0;
}