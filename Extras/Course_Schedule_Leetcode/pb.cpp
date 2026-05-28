class Solution {
public:

    vector<vector<int>> g;
    vector<int> state;

    bool dfs(int u){

        state[u] = 1;

        for(int v : g[u]){

            if(state[v] == 1){
                return true;
            }

            if(state[v] == 0){
                if(dfs(v)) return true;
            }
        }

        state[u] = 2;

        return false;
    }

    bool canFinish(int numCourses, vector<vector<int>>& prerequisites) {

        g.resize(numCourses);
        state.assign(numCourses, 0);

        for(auto &p : prerequisites){

            int a = p[0];
            int b = p[1];

            g[b].push_back(a);
        }

        for(int i = 0; i < numCourses; i++){

            if(state[i] == 0){

                if(dfs(i)){
                    return false;
                }
            }
        }

        return true;
    }
};
