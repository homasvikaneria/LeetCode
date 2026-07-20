class Solution {
public:
    int networkDelayTime(vector<vector<int>>& times, int n, int k) {

        // Adjacency List
        vector<vector<pair<int,int>>> graph(n + 1);

        for (auto &edge : times) {
            int u = edge[0];
            int v = edge[1];
            int w = edge[2];

            graph[u].push_back({w, v});
        }

        vector<int> dist(n + 1, INT_MAX);
        dist[k] = 0;

        priority_queue<
            pair<int,int>,
            vector<pair<int,int>>,
            greater<pair<int,int>>
        > pq;

        pq.push({0, k});

        while (!pq.empty()) {

            int d = pq.top().first;
            int u = pq.top().second;
            pq.pop();

            if (d > dist[u])
                continue;

            for (auto edge : graph[u]) {

                int w = edge.first;
                int v = edge.second;

                if (dist[v] > dist[u] + w) {
                    dist[v] = dist[u] + w;
                    pq.push({dist[v], v});
                }
            }
        }

        int ans = 0;

        for (int i = 1; i <= n; i++) {
            if (dist[i] == INT_MAX)
                return -1;

            ans = max(ans, dist[i]);
        }

        return ans;
    }
};