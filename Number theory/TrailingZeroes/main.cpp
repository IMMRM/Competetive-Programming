#include <iostream>

using namespace std;
int trailingZeroes(int);
int main()
{
    int n;
    cout << "Enter the number" << endl;
    cin>>n;
    cout<<"Number of zeroes="<<trailingZeroes(n)<<endl;
    return 0;
}

int trailingZeroes(int n){
int res=0;
for(int i=5;i<=n;i*=5){
    res=res+n/i;

}
return res;


}
