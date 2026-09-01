class Solution {
public:
    int slidingPuzzle(vector<vector<int>>& board) {
        string start, target = "123450";

        for (auto &row : board)
            for (int x : row)
                start += char('0' + x);

        vector<vector<int>> adj = {
            {1, 3},
            {0, 2, 4},
            {1, 5},
            {0, 4},
            {1, 3, 5},
            {2, 4}
        };

        queue<string> q;
        unordered_set<string> vis;

        q.push(start);
        vis.insert(start);

        int moves = 0;

        while (!q.empty()) {
            int sz = q.size();

            while (sz--) {
                string cur = q.front();
                q.pop();

                if (cur == target)
                    return moves;

                int zero = cur.find('0');

                for (int next : adj[zero]) {
                    string temp = cur;
                    swap(temp[zero], temp[next]);

                    if (!vis.count(temp)) {
                        vis.insert(temp);
                        q.push(temp);
                    }
                }
            }

            moves++;
        }

        return -1;
    }
};