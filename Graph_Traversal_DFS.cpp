#include<bits/stdc++.h>
using namespace std;
// BFS -> Queue
// DFS -> Stack

int main(){
    int n, edges; 
    cout << "How many nodes and edges are there: ";
    cin >> n >> edges;
    int adj[n][n];

    for(int i = 0; i<n; i++)
    {      //initialise all elements to zero
        for(int j = 0; j<n; j++){
            adj[i][j]=0;
        }
    }

    cout<<"Enter the start vertex and end vertex of all the edges: ";
    int start_vertex, end_vertex;
    for(int i = 0; i<edges; i++)
    {
        cin>>start_vertex>>end_vertex;
        adj[start_vertex][end_vertex] = 1;
    } //taking in one edge at a time and appending to the adjacency matrix

    //printing the matrix
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cout << adj[i][j]<<" ";
        }cout<<endl;
    }

    int start, queue[n], bfs[n], status[n], f=-1, r=-1;
    cout<<"kahanse ghumna suru karega beta: ";
    cin >> start;

    for(int i = 0; i<n; i++)
    {
        status[i] = 0;
    }
    f = r = 0;
    queue[f] = start;
    status[start] = 1;
    while()





    return 0;
}