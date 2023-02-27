// 0x132Day of 0x365Days challenge
// VEDANT BHARAD
// 27-2-2023
//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends

class Solution {
    public:
    // Function to return Breadth First Traversal of given graph.
        vector<int> bfsOfGraph(int V, vector<int> adj[]) {
            // Code here
            vector<int> toreturn;
            int temparr[V]={0};
            temparr[0]=1;
            queue<int> tempqueue;
            tempqueue.push(0);
            
            while(!tempqueue.empty()){
                int node=tempqueue.front();
                tempqueue.pop();
                toreturn.push_back(node);
                for(auto loop : adj[node]){
                    
                    if(!temparr[loop]){
                        temparr[loop]=1;
                        tempqueue.push(loop);
                    }
                }
            }
            return toreturn;
        }
};

//{ Driver Code Starts.
int main() {
    int tc;
    cin >> tc;
    while (tc--) {
        int V, E;
        cin >> V >>E;
        vector<int> adj[V];
        for (int i = 0; i < E; i++) {
            int u, v;
            cin >> u >> v;
            adj[u].push_back(v);
            // 		adj[v].push_back(u);
        }
        // string s1;
        // cin>>s1;
        Solution obj;
        vector<int> ans = obj.bfsOfGraph(V, adj);
        for (int i = 0; i < ans.size(); i++) {
            cout << ans[i] << " ";
        }
        cout << endl;
    }
    return 0;
}
// } Driver Code Ends