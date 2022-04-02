#include <iostream>
using namespace std;
int main(int argc, char **argv){
    int n;
    cin >> n;
    
    while(n!=1){
        for(int div=2;div<=n;div++){
            if(n%div==0){
                cout<<div<<" ";
				n/=div;
                div--;
            }
        }
    }
	return 0;
}
