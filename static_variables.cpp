#include<iostream>

using namespace std;

void counter()
{
    static int count=0;//static variable
    cout << count++;
}

void counter1()
{
    int count=0; //non static variable
    cout << count++;
}

int main()
{
    for(int i=0;i<5;i++)
    {
        counter();
    }//output:- 0 1 2 3 4
    cout<<endl;
     for(int i=0;i<5;i++)
    {
        counter1();
    }//output:- 0 0 0 0 0
}