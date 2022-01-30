#include <iostream>
#include <fstream>

using namespace std;

int main()
{
    int n,i,x,p1,p2;
    ifstream in("bac.txt");

    while(in>>x)
    {
        n++;
        if(x>0 && p1==0)
            p1=n;
            else
        if(x>0)
            p2=n;
    }
    if(p2!=0)
        if(n-p1+1>p2)
        cout<<n-p1+1;
    else
        cout<<p2;
    if(p2==0)
        if(p1>n/2)
        cout<<p1;
    else
        cout<<n-p1+1;
    in.close();

    return 0;
}
