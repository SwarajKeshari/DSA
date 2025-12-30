#include <iostream>
#include <vector>


using namespace std;

int main(){

    int vertex, edges;
    cout << "Enter No. of Vertex and Edges" << endl;
    cin >> vertex >> edges;

    vector<vector<pair<int,int>>> AdjList(vertex);

    int u, v, w;
    cout << "Enter Edges and Weight" << endl;;

    for(int i=0; i < edges; i++){

        cin >> u >> v >> w;
        AdjList[u].push_back(make_pair(v,w));
        AdjList[v].push_back(make_pair(u,w));
    }

    for(int i=0; i < AdjList.size(); i++){

        for(int j=0; j < AdjList[i].size(); j++){

            cout << i << " is connected to " << AdjList[i][j].first << " with weight " << AdjList[i][j].second << endl;
        }
    }

    return 0;
}
