Array Equality
Chef has an array of N integers. Chef can rearrange this array in any manner.

Chef doesn’t like the array if any two adjacent elements are equal. Determine whether there exists a rearrangement of the array that Chef likes.


#include <iostream>
#include<bits/stdc++.h>
using namespace std;
int main() {
	// your code goes here
	int t;
	cin >> t;
	while(t--)
    {
        int n;
        cin >> n;
        int a[n];
        map<int,int>mp;
        for(int i=0;i<n;i++)
        {
            cin >> a[i];
            mp[a[i]]++;
        }
        int maxi=INT_MIN;
        for(auto it:mp)
            maxi=max(maxi, it.second);
        if(maxi>(n+1)/2)
            cout << "No" << "\n";
        else
          cout << "Yes" << "\n";
    }
	return 0;
}
