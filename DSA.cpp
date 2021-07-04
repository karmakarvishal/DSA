// DSA.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

using namespace std;
#include <iostream>
#include <list>
#include <vector>;
#include "GraphDS.h";
#include "Recursion.h";









int main()
{

    
    //For Recursion

    int n = 3;
    Recursion rec;
    int factorial  = rec.factorial(n);
    cout << "Factorial: " << factorial << endl;
    int fibonacci = rec.fibonacci(n);
    cout << "Fibonacci: " << fibonacci << endl;
    int sum = rec.sumOf_N_NaturalNumber(n);
    cout << "sumOf_N_NaturalNumber: " << sum << endl;
    string s = "sdfsdfdsfdsf";
    cout << "IsPalindrome: " << rec.isPalindrome(s, 0, s.length() - 1) << endl;
    int number = 10;
    cout << "Sum Of Digits: " << rec.sumOfDigits(number) << endl;




    //For Array
   /* vector<int> A = { 34,30,3,5,9 };

    Array arr;
    arr.largestNumber(A);*/

    //For BFS.
   /* GraphDS g(4);
    g.addEdge(0, 1);
    g.addEdge(0, 2);
    g.addEdge(1, 2);
    g.addEdge(2, 0);
    g.addEdge(2, 3);
    g.addEdge(3, 3);
    g.BFS(0);*/

    //For DFS.

    /*GraphDS g(5);
    g.addEdge(1, 0);
    g.addEdge(0, 2);
    g.addEdge(2, 1);
    g.addEdge(0, 3);
    g.addEdge(1, 4);

    cout << "Following is Depth First Traversal\n";
    g.DFS(0);*/
}


// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
