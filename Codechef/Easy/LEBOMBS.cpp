/*
*   Author:- Rahul Malhotra
*   Source:- Programming Vidya
*   Description:- Solution for Codechef LEBOMBS Problem
*   Problem Link:- https://www.codechef.com/problems/LEBOMBS
*   Website:- www.programmingvidya.com
*/
#include <iostream>
#include <stdio.h>
using namespace std;

int main() {

    /*
    *   Used to take input from input.txt
    *   and write output to output.txt
    */
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif

    // * Initializing variables
    int numberOfTestCases, n, remainingBuildings;
    string s;

    // * Accepting the number of test cases
    cin>>numberOfTestCases;

    // * Executing each test case one by one
    while(numberOfTestCases--) {

        // * Initialize the remaining buildings count to 0 for the current test case
        remainingBuildings = 0;

        // * Accepting the inputs for the current test case
        cin>>n>>s;

        // * Marking the buildings that will explode for the current test case
        for(int i=0; i<n; i++) {
            if(s[i]=='1') {
                s[i-1] = '1';
                s[i+1] = '1';
                i++;
            }
        }

        // * Counting the buildings that will remain safe after all the bombs explode
        for(int i=0; i<n; i++) {
            if(s[i]=='0') {
                remainingBuildings++;
            }
        }

        // * Displaying the count of remaining buildings for the current test case
        cout<<remainingBuildings<<endl;
    }
}