/*
Consider arranging n numbers stored in an array A, by first finding the smallest element of A and exchanging it with the element in A[1]. Then find the second smallest element of A and exchange it with A[2] continue in this manner for the first (n-1) elements. Based on the approach described above, write an algorithm for arranging the given n numbers in an increasing order of the numbers. Compute the best-case running time, worst-case running time and the average-case running time of the algorithm. Compare this algorithm with that of the insertion-sort algorithm, based on the respective T . Based on your analysis, conclude which algorithm performs better for which type of inputs etc.
*/
#include <iostream>
using namespace std;
int main() {
int i,j,k,n,temp;
int index;
cin>>n;
int a[n];
for(i=0;i<n;i++){
cin>>a[i];
}
for(i = 0; i < n - 1; i++) {
index = i;
for (j = i + 1; j < n; j++){
if (a[j] < a[index]){
index = j;
}
}
temp = a[index];
a[index] = a[i];
a[i] = temp;
}
for(i=0;i<n;i++){
cout<<a[i]<<" ";
}
return 0;
}

