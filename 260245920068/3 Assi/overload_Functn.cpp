#include<iostream>
using namespace std;
void add(int a)
{
    cout<<a*a<<"square";
}
void add(int a, int b)
{
    cout<<a*b<<"traingle";
}
int main()
{
   add(2);
   add(1,2);

};