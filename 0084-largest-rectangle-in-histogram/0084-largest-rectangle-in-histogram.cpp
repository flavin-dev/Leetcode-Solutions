class Solution {
public:
    int largestRectangleArea(vector<int>& heights) {
        int N = heights.size(), maxArea = 0;

        stack<int> st;

        for (int i = 0; i < N; i++) {
            while (!st.empty() && heights[st.top()] >= heights[i]) {
                int curr = heights[st.top()];
                st.pop();

                int width = st.empty() ? i : i - st.top() - 1;
                maxArea = max(maxArea, curr * width);
            }
            st.push(i);
        }

        while (!st.empty()) {
            int curr = heights[st.top()];
            st.pop();

            int width = st.empty() ? N : N - 1 - st.top();
            maxArea = max(maxArea, curr * width);
        }

        return maxArea;
    }
};