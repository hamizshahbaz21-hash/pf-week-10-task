#include<iostream>
using namespace std;
int add(int a,int b)
{
    return a+b;
}
int main(){
    int n1,n2;
    cout<<"enter first number";
    cin>>n1;
    cout<<"enter second number";
    cin>>n2;
    int sum =add (n1,n2);
    cout<< sum;
return 0;
}