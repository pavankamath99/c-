#include<iostream>

using namespace std;

class Abc
{
    int i;
    public:
    Abc()
    {
        i=0;
        cout << "constructor";
    }
    ~Abc()
    {
        cout << "destructor";
    }
};

void f()
{
    static Abc obj;
}

int main()
{
    int x=0;
    if(x==0)
    {
        f();
    }
    cout << "END";
}//OUTPUT:-constructorENDdestructor

/*You must be thinking, why was the destructor not called upon the end of the scope of
 if condition, where the reference of object obj should get destroyed. 
 This is because object was static, which has scope till the program's lifetime,
 hence destructor for this object was called when main() function exits*/
