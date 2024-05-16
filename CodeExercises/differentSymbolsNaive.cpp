int solution(std::string s) {
    unsigned int i = 0, _diff_Char_Count{};
    while(i < s.length()){
        for(unsigned int j = 1; j < s.length(); ++j) {
            if(s[i] == s[j]){
              s.erase(s.begin() + j);
              --j;
            }
        }
        s.erase(s.begin() + i);
        ++_diff_Char_Count; 
    }
    return _diff_Char_Count;
}