#include<iostream>
using namespace std;
void print(int n,char c)
{
    for (int i = 0; i < n; i++)
    {
        cout << c <<" ";
    }
    cout << endl;
}
int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int n;
        char c;
        cin >> n >> c;
        print(n,c);
    }
    return 0;
}