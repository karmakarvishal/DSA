// DSA.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

using namespace std;
#include <iostream>
#include <list>



class Graph
{
    int Vertices;
    list<int>* adjencylist;

public:
    Graph(int numberofVertex)
    {
        this->Vertices = numberofVertex;
        this->adjencylist = new list<int>[numberofVertex];
    }

    void addEdge(int vertex, int adjVertex)
    {
        this->adjencylist[vertex].push_back(adjVertex);
    }

    void BFS(int startingVertex)
    {
        bool* visitedArr = new bool[Vertices];
        for (int i = 0; i < Vertices; i++)
            visitedArr[i] = false;


        list<int> queue;
        list<int>::iterator itr;
        visitedArr[startingVertex] = true;
        queue.push_back(startingVertex);


        while (!queue.empty())
        {
            int vertexAtFront = queue.front();
            cout << vertexAtFront << "->";
            queue.pop_front();

            for (itr = adjencylist[vertexAtFront].begin(); itr != adjencylist[vertexAtFront].end(); itr++)
            {
                if (!visitedArr[*itr])
                {
                    visitedArr[*itr] = true;
                    queue.push_back(*itr);
                }
            }




        }




    }


    void DFS(int startingVertex)
    {
        bool* visitedArr = new bool[Vertices];
        for (int i = 0; i < Vertices; i++)
        {
            visitedArr[i] = false;
        }

        list<int> stack;
        list<int>::iterator itr;
        visitedArr[startingVertex] = true;
        cout << startingVertex << " ";
        stack.push_front(startingVertex);

        while (!stack.empty())
        {
            int vertexAtTop = stack.front();
            stack.pop_front();

            if (!visitedArr[vertexAtTop])
            {
                cout << vertexAtTop << " ";
            }
            for (itr = adjencylist[vertexAtTop].begin(); itr != adjencylist[vertexAtTop].end(); itr++)
            {
                if (!visitedArr[*itr])
                {
                    stack.push_front(*itr);
                    visitedArr[vertexAtTop] = true;

                }
            }
        }




    }



};




int main()
{

    //For BFS.
   /* Graph g(4);
    g.addEdge(0, 1);
    g.addEdge(0, 2);
    g.addEdge(1, 2);
    g.addEdge(2, 0);
    g.addEdge(2, 3);
    g.addEdge(3, 3);
    g.BFS(0);*/

    //For DFS.
    Graph g(5);
    g.addEdge(1, 0);
    g.addEdge(0, 2);
    g.addEdge(2, 1);
    g.addEdge(0, 3);
    g.addEdge(1, 4);

    cout << "Following is Depth First Traversal\n";
    g.DFS(0);
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
