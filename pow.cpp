#include<iostream>
using namespace std;


//Function with time complexity O(n).
int pow(int x, int n)
{
    if(n == 0)
        return 1;
    return x*pow(x, n-1);
}


//Function with time complexity O(log n).
int pow2(int x, int n)
{
    if(n==0)
        return 1;
    if(n%2==0)
        return pow2(x*x, n/2);
    else
        return x*pow2(x*x, (n-1)/2);
}

int main()
{
    int x, n;
    cout << "Enter the number and it's power: ";
    cin >> x >> n;
    cout << pow2(x, n);
    return 0;
}
