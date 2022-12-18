// https://bit.ly/3dsROaZ 

#include<bits/stdc++.h> 
using namespace std; 

class Solution 
{ 
    public: 
    void sort012(int a[], int n) 
    { 
        // code here  
        int prefix[3] = {}; 
        for(int i = 0; i < n; i++){ 
            prefix[a[i]]++; 
        } 
         
        int ap = 0; 
        for(int i = 0; i < 3; i++){ 
            for(int j = 0; j < prefix[i]; j++){ 
                a[ap++] = i; 
            } 
        } 
    } 
     
}; 

int main() { 
 
    int t; 
    cin >> t; 
 
    while(t--){ 
        int n; 
        cin >>n; 
        int a[n]; 
        for(int i=0;i<n;i++){ 
            cin >> a[i]; 
        } 
 
        Solution ob; 
        ob.sort012(a, n); 
 
        for(int i=0;i<n;i++){ 
            cout << a[i]  << " "; 
        } 
 
        cout << endl; 
         
         
    } 
    return 0; 
} 

// Input
// 1
// 5
// 1 2 0 2 1
// Output
// 0 1 1 2 2 