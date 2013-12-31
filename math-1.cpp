#include <cstdlib>
#include <iostream>

using namespace std;

//This function counts the sum of adding from 1 to a certain number.

int SUM(int input)
{
    int out=0;
    out=((input+1)*input)/2;
    return out;
}

//This function will check if a number is a Prime.

bool CHK(int input)
{
    int i;
    bool Prime;
    Prime=true;                                                                 //initialize with true,indicate that the number is a Prime.
    for(i=2;i<input;i++)
    {
       if(input%i==0)
       {
          Prime=false;                                                          //set to false if a number is not a Prime.
          break;                                                                //and than jump out from this loop.
       }
    }
    return Prime;
}

//This function will print out all Primes from 1 to a certain number.

int sub(int input)
{
    int i, j, k;
    bool Prime2;
    for(i=2;i<input;i++)
    {
       Prime2=CHK(i);
       if(Prime2==true)
       {
          cout<<i<<endl;                                                                //and than jump out from this loop.
       }
    }
}

int main(int argc, char *argv[])
{
    int input, sum;
    bool Prime;
    cout<<"type a number"<<endl;
    cin>>input;
    sum=SUM(input);                                                             //throw a number to function"SUM"
    cout<<"Sum of 1 to "<<input<<" resault with:"<<sum<<endl<<endl;
    Prime=CHK(input);                                                           //throw anumber to check if it is a Prime
    if(Prime==true)
    {
       cout<<"This number is a Prime."<<endl;
       cout<<"====================================="<<endl;
       cout<<"From 1 to "<<input<<" contains these Primes:"<<endl<<input<<endl;
    }
    else
    {
        cout<<"This number is not a Prime!"<<endl;
        cout<<"====================================="<<endl;
        cout<<"From 1 to "<<input<<" contains these Primes:"<<endl;
        sub(input);
    }
    system("PAUSE");
    return 0;
}
