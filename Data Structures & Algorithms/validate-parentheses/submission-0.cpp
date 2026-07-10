class Solution {
public:
    bool isValid(string s) {
        std::unordered_map<char, char> m;
        m[')'] = '(';
        m['}'] = '{';
        m[']'] = '[';

        std::stack<char> st;

        for (const auto& c : s) {
            if (st.size() > 0) {
                char& top = st.top();
                if (m.contains(c)) {
                    char& opp = m[c];
                    if (top == opp) {
                        st.pop();
                        continue;
                    }
                }
            }
            st.push(c);
        }

        return st.empty();
        
    }
};
