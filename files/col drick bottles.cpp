#include <bits/stdc++.h>

using namespace std;
 

void min_visible_bottles(int* arr, int n)
{

    map<int, int> m;

    int ans = 0;

    for (int i = 0; i < n; i++) {

        m[arr[i]]++;

        ans = max(ans, m[arr[i]]);

    }
 

    cout << "Minimum number of "

         << "Visible Bottles are: "

         << ans << endl;
}
 
int main()
{

    int n = 8;

    int arr[] = { 1, 1, 2, 3, 4, 5, 5, 4 };
 
   min_visible_bottles(arr, n);
 

    return 0;
}
