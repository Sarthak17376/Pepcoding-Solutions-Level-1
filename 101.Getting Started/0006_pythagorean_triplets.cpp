#include <iostream>
using namespace std;
int main(int argc, char **argv){
    int a,b,c,max;
    cin>>a>>b>>c;
    
    if(a>b){
        if(a>c){
            max = a;
        }
        else{
            max = c;
        }
    }
    else{
        if(b>c){
            max = b;
        }
        else{
            max = c;
        }
    }

    if(max==a){
        if(a*a==b*b+c*c){
            cout<<"Yes"<<endl;
        }
        else{
            cout<<"No"<<endl;
        }
    }
    else if(max==b){
        if(b*b==a*a+c*c){
            cout<<"Yes"<<endl;
        }
        else{
            cout<<"No"<<endl;
        }
    }
    else{
        if(c*c==a*a+b*b){
            cout<<"Yes"<<endl;
        }
        else{
            cout<<"No"<<endl;
        }
    }
    
    return 0;
}