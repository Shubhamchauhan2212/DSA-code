#include <iostream>
using namespace std;

int main()
{
    int arr[5] = {4, 5, 1, 2, 4};
    int max = arr[0];
    int min = arr[0];

    for (int i = 1; i < 5; i++)
    {
        if (arr[i] > max)
        {
            max = arr[i];
        }
        if (arr[i] < min)
        {
            min = arr[i];
        }
    }
    cout <<"maximum: " << max << endl;
    cout << "minimun: " << min;

    return 0;
}