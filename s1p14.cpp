#include<iostream>
using namespace std;

int main()
{
    int arr[5] = {10, 20, 30, 40, 50};
    int search;

    cout << "Enter element to search: ";
    cin >> search;

    int low = 0, high = 4;

    while(low <= high)
    {
        int mid = (low + high) / 2;

        if(arr[mid] == search)
        {
            cout << "Element found at index = " << mid;
            return 0;
        }

        if(search > arr[mid])
            low = mid + 1;
        else
            high = mid - 1;
    }

    cout << "Element not found!";

    return 0;
}