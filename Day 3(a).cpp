// Sort 0 1 2

#include <bits/stdc++.h> 
void sort012(int *arr, int n)
{
   //   Write your code here
   /*
   Method 1 : Using Sort
      sort(arr, arr+n);


   Method 2 : Using Count Sort
   -  Count the number of 0s, 1s and 2s.
   -  Reiterate the array and add elements accordingly
   SC- O(1) and TC : O(2N)

   Method 3 : Using Dutch National Flag Concept.
   -  It uses 3 pointers, low, mid, high
   `  Low and Mid points to 0th index, while high points to N-1th index
   ## It just chek the mid pointer:
   -  If arr[mid] == 0 => swap(arr[low], arr[mid]) and do low++, mid++
   -  If arr[mid] ==1 => mid++;
   -  If arr[mid] == 2 => swap(arr[mid], arr[high]) and do high--;
   */

   //Implementaton of 3rd method
   int low = 0, mid = 0, high = n-1;
   while(true){
      if(mid > high){      //in previous i did mid >= high viz wrong.
         break;
      }
      if(arr[mid] == 0){
         swap(arr[low], arr[mid]);
         low++, mid++;
      }
      else if(arr[mid] == 1){
         mid++;
      }
      else if(arr[mid] == 2){
         swap(arr[mid], arr[high]);
         high--;
      }
   }

   
}
