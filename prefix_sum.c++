    #include <iostream>
    using namespace std;

    int main()
    {
        int n;
        cout << "Enter size of array: ";
        cin >> n;

        int arr[n];
        cout << "Enter " << n << " element: ";
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }

        int prefix[n];
        prefix[0] = arr[0];
        for (int i = 1; i < n; i++)
        {
            prefix[i] = prefix[i - 1] + arr[i];
        }
        cout << "Prefix array: ";
        for (int i = 0; i < n; i++)
        {
            cout << prefix[i] << " ";
        }
        cout << endl;

        int l, r;
        cout << "Enter subarray start and end index (0-based): ";
        cin >> l >> r;

        int subarraySum;
        if (l == 0)
        {
            subarraySum = prefix[r];
        }
        else
        {
            subarraySum = prefix[r] - prefix[l - 1];
        }

        cout << "Sum of subarray from index " << l << " to " << r << " = " << subarraySum << endl;
        return 0;
    }