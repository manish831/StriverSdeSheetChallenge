//Missing and repeating numbers

#include <bits/stdc++.h>

pair<int,int> missingAndRepeating(vector<int> &arr, int n)
{
	// Write your code here 
	vector<int>v(n+1, 0);
	for(int x : arr){
		v[x]++;
	}
	int x, y;
	for(int i=1; i<=n; i++){
		if(v[i] == 0){
			x = i;
		}
		if(v[i] == 2){
			y = i;
		}
	}
        return {x, y};
}
