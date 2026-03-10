#include<iostream>
using namespace std;

// int add(int a,int b=10)
// {
//     return a+b;
// }
// int main(int a,int 20)
// {
//    cout<<add(20);


// };

void add(int=1,int=3);
int main()
{   
    add();
    add(10);
    add(10,25);
}
void add(int a,int b)
{
    cout<<a+b;
}