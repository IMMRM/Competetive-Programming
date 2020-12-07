#include <iostream>
int iterfindFactorial(int);
int recursiveFindFactorial(int);
using namespace std;
//Calculating factorial of a number using iterative and recursive approach
int main()
{
    int num;
    cout << "Enter number- " << endl;
    cin>>num;
    iterfindFactorial(num);
    cout<<"Recursive Approach ";
    int res=recursiveFindFactorial(num);
    cout<<res;
    return 0;
}

int iterfindFactorial(int n){
    cout<<"Using Iterative Approach"<<endl;
    int fact=1;
    if(n>0){
        if(n>2){
            for(int i=n;i>0;i--){
                fact=fact*i;
            }
            cout<<fact;
            return 0;
        }
        cout<<n;
        return n;
    }
    cout<<"Error";
    return -1;



}

int recursiveFindFactorial(int n){

int fact=n;
if(fact<=0){
    return 1;
}
return fact*recursiveFindFactorial(fact-1);

}

