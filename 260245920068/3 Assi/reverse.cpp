#include<iostream>
using namespace std;
int main()
{
    int a[5]={1,2,3,4,5};
    int i;
    int j;
    int b[5];
    for ( i = 0,j=4; i <=5; i++,j--)
    {
        // for ( j = 0; j < 5; j++)
        // {
            
        //     b[j]=a[i];
            
        // } 
        //  cout <<b[i];

        // b[i]=a[5-i];
        // cout<<b[i];
         int temp=a[i];
         a[i]=b[j];
         b[j]=temp;
         
   }
   for (int i = 0; i < 5; i++)
   {
    cout<<b[i];


    
   }
   
    

     
return 0;
};