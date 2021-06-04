#pragma once
using namespace std;
#include <iostream>
#include <list>
class GraphDS
{
    int Vertices;
    list<int>* adjencylist;

public:
    GraphDS(int numberofVertex)
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

