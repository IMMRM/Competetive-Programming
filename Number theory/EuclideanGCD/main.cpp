#include <iostream>

using namespace std;
int EuclidGCD(int,int);
int main()
{
    int a,b,res=0;
    cout << "Enter the number a" << endl;
    cin>>a;
    cout<<"Enter the number b"<<endl;
    cin>>b;
    res=EuclidGCD(a,b);
    cout<<res;
    return 0;
}
int EuclidGCD(int a,int b){

int result;
    if(b==0){
        return a;
    }
    else{
        result= EuclidGCD(b,a%b);
        return result;
    }



}
