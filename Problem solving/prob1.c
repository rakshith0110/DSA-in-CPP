/*

The function accepts two positive integers 'r' and 'unit' and a positive integer aray 'arr'
of size 'n' as its argument 'r' represents the number of rats present in an area,'unit' is
the amount of food each rat consumes and each i'th element of array 'arr' represents the amount
of food present in 'i+1' house number,where 0<=i.

Note:
Return -1 if the array is null
Return 0 if the total amount of food from all houses is not sufficient for all the rats.
Computed values lie within the integer range.

ex:

Input:

r: 7
unit :2
n:8
arr:2 8 3 5 7 4 1 2
output:
4

*/

#include<stdio.h>


int calculate(int r,int unit,int arr[],int n)
{
    if(n==0)
        return -1;
    int totalFoodRequired = r * unit;
    int foodTillNow = 0;
    int house = 0;
    for (house = 0; house < n; ++house)
    {
        foodTillNow += arr[house];
        if (foodTillNow >= totalFoodRequired){
            break;
        }
    }
    if(totalFoodRequired > foodTillNow){
        return 0;
    }
    return house + 1;
}



int main()
{
    int r;
    scanf("%d",&r);
    int unit;
    scanf("%d",&unit);
    int n;
    scanf("%d",&n);

    int arr[n];
    for(int i=0;i<n;++i)
    {
        scanf("%d",&arr[i]);
    }
    printf("%d",calculate(r,unit,arr,n));
    return 0;
}
