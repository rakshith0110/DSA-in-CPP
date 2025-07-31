/*
1.print spiral Matrix

problem:
given a 2D matrix ,print it in spiral order.

Input:
1 2 3
4 5 6
7 8 9

output:
1 2 3 6 9 8 7 4 5
*

/*

2.Count frequency of character
Problem:
Given a string,count the frequency of each character and print it in alphabetical order.
Input: "computercomputer"
output: e4 f1 g2 k2 o1 r1 s2

*/

/*

3. Reverse words in a sentence
Problem:
Reverse the words in a sentence without reversing individual characters.

Input: "I write coding"
Output: "coding write I"

*/

/*

4.Write a function to check if two strings are anagrams of each other.
Input:
str1 = "listen",str2 = "silent"

Output: true

*/

#include<iostream>
using namespace std;

int main(){
    int mat[10][10];
    int n;
    cout<<"Enter  N:\n";
    cin>>n;

    cout<<"\nEnter the matrix:\n";
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cin>>mat[i][j];
        }
    }

    cout<<"\n\nmatrix:\n"<<endl;
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cout<<mat[i][j]<<"\t";
        }
        cout<<endl;
    }

    cout<<"\n\nspiral matrix:\n"<<endl;
    int flag=0;
    for(int i=flag;i<n;i++){
        for(int j=0;j<n;j++){
            cout<<mat[i][j]<<"\t";
        }
        cout<<endl;
    }
return 0;
}

/*

5.Leaders in an Array.
An element is a leader if it is greater then all elements its right.
find all such elements.

Input: {16,17,4,3,5,2}
Output: 17 5 2

*/
