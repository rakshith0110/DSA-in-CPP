/*

Sonia is organizing a sports event and needs to arrange the scores of participants.
she writes a C++ program that allows her to sort the scores in ascending order
for the first half and descending order for the remaining half, so she can display
the rankings accordingly.

input Format
Input consists of size and followed by elements.

output Format
Print the array in required format.

Sample input
8
5 4 6 3 7 2 8 1

sample output
1 2 3 4 8 7 6 5

*/

#include<bits/stdc++.h>
using namespace std;
void ascDecFunc(int a[],int n){
    sort(a,a+n);

    for(int i = 0;i < n/2;i++)
        cout<<a[i]<<" ";

    for(int j=n -1 ; j >= n/2; j--)
        cout<<a[j]<<" ";
}

int main(){
    int size;
    cin>>size;
    int arr[size];
    for(int i=0;i<size;i++)
        cin>>arr[i];
    ascDecFunc(arr,size);
    return 0;
}

