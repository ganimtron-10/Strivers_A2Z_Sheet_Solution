// https://practice.geeksforgeeks.org/problems/triangle-pattern-1661493231/1?utm_source=youtube&utm_medium=collab_striver_ytdescription&utm_campaign=pattern_8

#include <bits/stdc++.h>
using namespace std;

int main()
{

    int n = 5;

    for (int i = n; i >= 0; i--)
    {
        for (int j = 1; j <= n - i; j++)
        {
            cout << " ";
        }
        for (int j = 1; j <= (2 * i) + 1; j++)
        {
            cout << "*";
        }
        cout << endl;
    }
}
// Input
// 5

// output
// ***********
//  *********
//   *******
//    *****
//     ***
//      *
