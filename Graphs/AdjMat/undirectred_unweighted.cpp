#include <iostream>
#include <vector>
using namespace std;

int main (){

    int vertex, edges;
    cout << "Enter No. of Vertex and Edges" << endl;
    cin >> vertex >> edges;

    vector<vector <bool>> adjMat (vertex, vector<bool> (vertex, 0));

    int u, v;
    cout << "Enter Edges" << endl;

    for(int i=0; i < edges; i++){

        cin >> u >> v;

        adjMat[u][v] = 1;
        adjMat [v][u] = 1;

    }

    cout << "Your Adjacency Matrix" << endl;
    for (int i=0; i < vertex; i++) {
        
        for(int j=0; j<vertex; j++){
            cout << adjMat[i][j] << " ";
        }

        cout << endl;

    }

    return 0;
}