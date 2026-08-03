class Solution {
public:
    bool isValid(string s) {
        std::unordered_map<char, char> opp;
        opp[')'] = '(';
        opp[']'] = '[';
        opp['}'] = '{';

        std::stack<char> st;
        for (const auto& c : s) {
            if (st.empty()) {
                st.push(c);
                continue;
            }

            const auto& top = st.top();
            if (top == opp[c]) {
                st.pop();
                continue;
            }

            st.push(c);
        }

        return st.empty();
    }
};
