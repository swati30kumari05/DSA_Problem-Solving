class Solution {
public:
    void dfs(vector<vector<int>>& image, int r, int c, int color, int oldColor) {
        if (r < 0 || c < 0 || r >= image.size() || c >= image[0].size())
            return;

        if (image[r][c] != oldColor)
            return;

        image[r][c] = color;

        dfs(image, r + 1, c, color, oldColor);
        dfs(image, r - 1, c, color, oldColor);
        dfs(image, r, c + 1, color, oldColor);
        dfs(image, r, c - 1, color, oldColor);
    }

    vector<vector<int>> floodFill(vector<vector<int>>& image, int sr, int sc, int color) {
        int oldColor = image[sr][sc];

        if (oldColor == color)
            return image;

        dfs(image, sr, sc, color, oldColor);

        return image;
    }
};