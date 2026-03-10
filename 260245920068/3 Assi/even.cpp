#include<iostream>
using namespace std;
int main()
{
    int a[5]={1,2,3,4,5};
   static int count=0;
    static int countodd=0;
    for (int i = 0; i < 5; i++)
    {
        if(a[i]%2==0)
            count++;
        else 
        {
            countodd++;
        }
        
       
    }
     cout<<"even of array is  "<<count<<endl;
       cout<<"odd of array is  "<<countodd;

};