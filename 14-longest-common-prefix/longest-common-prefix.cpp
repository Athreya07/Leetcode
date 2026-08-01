class Solution {
public:
    std::string longestCommonPrefix(std::vector<std::string>& strs) {
        if (strs.empty()) return "";
        
        std::string_view first_str = strs[0];
        
        for (size_t i = 0; i < first_str.length(); ++i) {
            char current_char = first_str[i];
            
            for (size_t j = 1; j < strs.size(); ++j) {
                if (i == strs[j].length() || strs[j][i] != current_char) {
                    return strs[0].substr(0, i);
                }
            }
        }
        
        return strs[0];
    }
};
