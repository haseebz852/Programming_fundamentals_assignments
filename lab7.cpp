#include <iostream>
#include <iomanip>
using namespace std;

void table ()
{
cout <<setw(10)<<left<<"+--------------------------------+\n"<<setw(10)<<left<<"For even odd check press 1 \n"<<setw(10)<<left<<"+-------------------------------------------+\n"<<setw(10)<<left<<"For counting the total entered digit press 2 \n"
<<setw(10)<<left<<"+--------------------------------------------------------+\n"<<setw(10)<<left<<"For adding all the digits of the entered number prsss 3  \n"<<setw(10)<<left<<"+------------------------------------------------------+\n"<<setw(10)<<left
<<"For checking weather the number is prime or not press 4"<<endl<<setw(10)<<left<<"+-----------------------------------------------------------+\n"<<endl;

}
int printings(int p)
{
    if (p==1)
     cout <<"Even"<<endl;
    else if (p==2)
     cout << "odd" <<endl;
    else if (p==3)
      cout << "Not a prime number";
    else if (p==4)
      cout << "Prime number";
    else if (p==5)
      cout <<"wrong number entered ";
      return 0;

}

void evenodd(int num)
{
   if (num%2==0)
   {
    int a;
    a=1;
    printings(a);

   }
   else 
   {
   int a = 2;
    printings(a);

   }
   }

int digitcount(int n )
{
   int count=0;
   while(n!=0)
   {
   count++;
n=n/10;
   }
   cout << "digits :"<<count<<endl;
   return 0 ;
}

int digitsum(int z)
{
    int sum =0;
     while (z != 0) {
        int digit = z % 10;  
        sum += digit;          
        z /= 10;  
}
cout <<"the sum of digits is: "<<sum<<endl;

return 0;

}
int prime(int c)
{
     if (c == 1)
    {
        int a = 3;
     printings(a);
    }
    else
    {
        bool isPrime = true; 
        for (int i = 2; i < c; i++)
        {
            if (c % i == 0)  
            {
                isPrime = false;  
                break;           
            }
        }
        if (isPrime)
          { int a=4;
           printings(a);
          }
    
        else
        {
            int a=3;
            printings(a);
        }
    }
    return 0;
}



int main ()
{
  start:

    int x;
    cout<< "enter a number :";
    cin>>x;
    int y;
    table();
    
    cin>>y;
    

    if(y==1)
    {
    evenodd(x);
    }
  else if (y==2)
    {
    digitcount(x);
    }
  else if (y==3)
    {
        digitsum(x);
    }
  else if (y==4)
  {
      
    prime (x);
  }
  else 
  {
  int a=5;
  printings(a);
  }
  cout<<endl;
 goto start;
    return 0;
}