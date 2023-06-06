// Pascal's triangle

#include <bits/stdc++.h>

vector<vector<long long int>> printPascal(int nR) 
{
  // Write your code here.
  if(nR == 1)        {
            return {{1}};
        }
        vector<vector<long long int>>res;
        res.push_back({1});
        res.push_back({1, 1});;
        if(nR == 2){
            return res;
        }
        for(int i=2; i<nR ; i++){
            //ith row me i+1 element hotein hai.
            vector<long long int>tmp(i+1);
            tmp[0] = tmp[i] = 1;
            for(int j=1; j < i ; j++){
                tmp[j] = res[i-1][j-1]+res[i-1][j];
            }
            res.push_back(tmp);
        }
        return res;
}


