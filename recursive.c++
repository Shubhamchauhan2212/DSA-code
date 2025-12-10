#include <iostream>
using namespace std;
void printnumber(int n)
{
    if (n == 0)
        return;
    printnumber(n - 1);
    cout << n << " ";
}
int main()
{
    printnumber(50);

    return 0;
}