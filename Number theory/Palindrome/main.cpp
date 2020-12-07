#include <iostream>

using namespace std;
//This is a program to check whether a number is palindrome or not
bool isPalindrome(int);
int main()
{
    int num;
    cout<<"Enter the number"<<endl;
    cin>>num;
    int res=isPalindrome(num);
    cout<<res;
    return 0;
}


bool isPalindrome(int n){
if(n==0){
    return true;
}
else{

    int rev=0;
    int div=n;
    int rem=0;
    while(div>0){
        rem=div%10;
        div=div/10;
        rev=rev*10+rem;

    }
    if(rev==n){
        return true;
    }
    else{
        return false;
    }

}

}
