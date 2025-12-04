#include <iostream>
using namespace std;
int main()
{

int arr[5]={1,2,3,5,6};
for (int i = 0; i<= 5;i++)
{
    cout <<arr[i]<<endl;
    
}
arr[0]=arr[0]+arr[5];
arr[5]=arr[0]-arr[5];
arr[0]=arr[0]-arr[5];
arr[1]=arr[1]+arr[4];
arr[4]=arr[1]-arr[4];
arr[1]=arr[1]-arr[4];
arr[2]=arr[2]+arr[3];
arr[3]=arr[2]-arr[3];
arr[2]=arr[2]-arr[3];

for (int i = 0 ; i<=6;i++)
{
    cout <<"swaped "<<arr[i]<< endl;
    
}
}

