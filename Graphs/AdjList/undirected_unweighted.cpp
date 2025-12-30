#include <iostream>
#include <vector>

using namespace std;

int main(){

        int vertex, edges;
        cout << "Enter No. of Vertex and Edges" << endl;
        cin >> vertex >> edges;

        vector<vector<int>> AdjList(vertex);

        
        int u, v;

        cout << "Enter Edges" << endl;
        for(int i=0; i<edges; i++){

            cin >> u >> v;
            AdjList[u].push_back(v);
            AdjList[v].push_back(u);

        }


        // Print the list
        for(int i=0; i< AdjList.size(); i++){
            
            cout << i << " is connected to -> ";
            for(int j=0; j<AdjList[i].size(); j++){

                cout << AdjList[i][j] << " ";
            }

            cout << endl;
        }

    return 0;
}