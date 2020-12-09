#include <iostream>

using namespace std;
int LCM(int,int);
int EuclideanGCD(int,int);
int main()
{
    int a,b,result;
    cout << "Enter a" << endl;
    cin>>a;
    cout<<"Enter b"<<endl;
    cin>>b;
    result=LCM(a,b);
    cout<<result;
    return 0;
}
int LCM(int a,int b){
int res=0;
res=(a*b)/EuclideanGCD(a,b);
return res;
}
int EuclideanGCD(int a,int b){
int res=0;
if(b==0){
    return a;
}
else{
    res=EuclideanGCD(b,a%b);
    return res;
}


}
