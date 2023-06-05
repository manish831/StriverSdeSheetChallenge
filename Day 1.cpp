#include <bits/stdc++.h>

void setZeros(vector<vector<int>> &matrix)
{
	// Write your code here.
	int nr = matrix.size();	// no. of rows.
	int nc = matrix[0].size();	//no. of columns

	vector<int>r;
	vector<int>c;

	for(int i=0; i<nr ; i++){
		for(int j=0; j<nc ; j++){
			if(matrix[i][j] == 0){
				r.push_back(i);
				c.push_back(j);
			}
		}
	}

	int cnt = nr * nc;	// total cells

	//iterate over rows(r) vector
	cnt -= (nc);
	for(int i = 0; i<r.size() ; i++){
		int iIdx = r[i];
		for(int j = 0; j<nc ; j++){
			matrix[iIdx][j] = 0;
		}
	}
	// kya pta saare rows cover ho gye ho, to no need of traversing colmn vectr again
	if(cnt == 0){
		return;
	}
	for(int j = 0 ; j<c.size() ; j++){
		int jIdx = c[j];
		for(int i =0 ;i<nr ; i++){
			matrix[i][jIdx] = 0;
		}
	}


}