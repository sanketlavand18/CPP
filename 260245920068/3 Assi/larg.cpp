#include<iostream>
using namespace std;
int main()
{
    int a[5]={1,2,3,4};
    int large=a[0];
    int min=a[0];
    for (int i = 0; i < sizeof(a[0]/4); i++)
    {
        if(a[i]<min)
            min=a[i];
        else if (a[i]>large)
        {
            large=a[i];
        }
        
       
    }
     cout<<"large of array is  "<<large<<endl;
       cout<<"min of array is  "<<min<<endl;

};