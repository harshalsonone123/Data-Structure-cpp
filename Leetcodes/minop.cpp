class Solution
{
public:
    vector<int> minOperations(string boxes)
    {
        vector<int> res;
        pair<int, int> left = {0, 0};
        pair<int, int> right = {0, 0};
        int n = boxes.size();
        for (int i = 0; i < n; i++)
        {
            if (boxes[i] == '1')
            {
                right.first++;
                right.second += 1;
            }
        }
        for (int i = 0; i < n; i++)
        {
            int L = left.first * i - left.second;
            int R = right.second - right.first * i;
            res.push_back(L + R);
            if (boxes[i] == '1')
            {
                left.first++;
                left.second += i;
                right.first++;
                right.second -= i;
            }
        }
        return res;
    }
};