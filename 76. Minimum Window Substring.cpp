class Solution {
public:
    string minWindow(string base_string, string target) {
        vector<int> count_map(128, 0);

        for (auto character : target)
            count_map[character]++;

        int left = 0, right = 0;
        int min_left = 0, min_right = INT_MAX;
        int target_length = target.size();

        while (right < base_string.size()) {
            if (count_map[base_string[right++]]-- > 0)
                target_length--;

            while (target_length == 0) {
                if (right - left < min_right)
                    min_right = right - (min_left = left);

                if (count_map[base_string[left++]]++ == 0)
                    target_length++;

            }
        }

        return min_right == INT_MAX ? "" : base_string.substr(min_left, min_right);
    }
};
