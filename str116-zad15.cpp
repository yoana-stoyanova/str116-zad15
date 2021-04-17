//Програмата извежда средноаритметичното на положителните елементи от редицата
#include <iostream>
using namespace std;
int main ()
{
    int n;
    while(n<=2 || n>=25) {cout<<"n = "; cin>>n;}

    double a[n];
    for(int i=0; i<n; i++) cin>>a[i];

    int br=0;
    double sum=0;
    for(int j=0; j<n; j++)
    {
        if(a[j]>0)
        {
            br++;
            sum=sum+a[j];
        }
    }

    double sredno=sum/br;

    if(br==0) cout<<"0";
    else cout<<"srednoaritmetichno = "<<sredno;


    return 0;
}
