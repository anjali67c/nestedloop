//for value increment
#include<iostream>
using namespace std;
int main()
{
    int a = 1;
    for(int row=1; row<=5; row++)
    {
        for(int col=1; col<=row; col++)
        {
            cout<<a<<"  ";
            a++;
        }
        cout<<"\n";
    }
}
