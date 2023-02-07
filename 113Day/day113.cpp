// 0x113Day of 0x365Days challenge
// VEDANT BHARAD
// 7-2-2023
//{ Driver Code Starts
#include <bits/stdc++.h> 
using namespace std;
// } Driver Code Ends
class Solution{
    public: 
    //Function to return a list of integers denoting spiral traversal of matrix.
    // vector<int>
    vector<int> spirallyTraverse(vector<vector<int> > matrix, int r, int c){
        // code here 
        vector<int> toret;
        int rs=0,re=r-1,cs=0,ce=c-1;
        while (rs<=re && cs<=ce){
            for (int i = cs; i <= ce; i++){
                toret.push_back(matrix[rs][i]);}
            rs=rs+1;
            for (int i = rs; i <= re; i++){
                toret.push_back(matrix[i][ce]);}
            ce-=1;
            if(rs<=re){
                for (int i = ce; i >= cs; i--){
                    toret.push_back(matrix[re][i]);}
                re-=1;
            }
            if(cs<=ce){
                for (int i = re; i >= rs; i--){
                    toret.push_back(matrix[i][cs]);}
                cs+=1;
            }
        }
        return toret;
    }
};
//{ Driver Code Starts.
int main() {
    int t;
    cin>>t;
    while(t--){
        int r,c;
        cin>>r>>c;
        vector<vector<int> > matrix(r);
        for(int i=0; i<r; i++){
            matrix[i].assign(c, 0);
            for( int j=0; j<c; j++){
                cin>>matrix[i][j];}
        }
        Solution ob;
        // ob.spirallyTraverse(matrix, r, c);
        vector<int> result = ob.spirallyTraverse(matrix, r, c);
        for (int i = 0; i < result.size(); ++i)
            cout<<result[i]<<" ";
        cout<<endl;
    }
    return 0;
}
// } Driver Code Ends