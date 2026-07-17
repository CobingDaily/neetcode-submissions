class Solution {
public:
    bool isValid(string s) {
        std::unordered_map<char, char> m;
        m[')'] = '(';
        m[']'] = '[';
        m['}'] = '{';

        stack<char> st;

        for (const auto& c : s) {
            if (st.empty()) {
                if (m.contains(c)) return false;
                st.push(c);
                continue;
            }
            else {
                const auto& top = st.top();
                if (m.contains(c)) {
                    const auto& opp = m[c];

                    if (top == opp) {
                        st.pop();
                        continue;
                    }
                }
                st.push(c);
            }
        }
        return st.empty();
        
    }
};
