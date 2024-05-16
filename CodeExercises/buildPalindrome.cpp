#include <iostream>
#include <string>
bool isPalidrome(std::string st);

std::string solution(std::string st) {
    for(unsigned int i = 0, j = st.length(); i <st.length() / 2; ++i, --j ){
        if(isPalidrome(st)) return st;
        else st.insert(j + i, 1, st[i]);
    }
}
bool isPalidrome(std::string st){
    for(unsigned int i = 0, j = st.length() - 1; i < st.length() / 2; ++i, --j) if(st[i] != st [j]) 
        return false;    
    return true;
}
int main(int argc, char const *argv[]){
    
    std::cout<<solution("fadgtwe");
    return 0;
}