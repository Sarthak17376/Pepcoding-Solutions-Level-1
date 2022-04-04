#include <iostream>
using namespace std;
int main(int argc, char **argv){
    int num1, num2;
    cin >> num1 >> num2;
    
    int p,q,rem;
    if(num1>num2){
        p = num1;
        q = num2;
    }
    else{
        p = num2;
        q = num1;
    }
    
    int HCF, LCM;
    
    while(rem!=0){
        rem = p%q;
        p = q;
        q = rem;
    }
    HCF = p;
    cout<<HCF<<endl;
    return 0;
}