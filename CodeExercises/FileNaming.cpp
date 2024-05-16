#include <iostream>
#include <string>
#include <vector>
using namespace std;
int  backtracking(vector<string> &names, int finish, int same);
vector<string> solution(vector<string> names) {
    int same = 0;
    int size = names.size();
    string paranthes = "";
    for( int i = 0; i < size - 1 ; ++i){
        for( int j = i + 1; j < size; ++j){
            if(names[i] == names[j] && i != j){
                ++same;
                paranthes = "(" + to_string(same) + ")" ;
                names[j].insert(names[j].size(), paranthes);
                same = backtracking(names, j, same);
            }
        }
        same = 0;
    }
    return names;
}
int backtracking(vector<string> &names, int finish, int same){

    for( int i = 0; i < finish; ++i){
        if(names[i] == names[finish] &&  i != finish){
            size_t ind = names[finish].find(to_string(same));
            ++same;
            names[finish].replace(ind, 1, to_string(same));
        }
    }
    return same;
}
int main(){
    vector<string> sol{};

    sol = solution({"a", 
 "b", 
 "cd", 
 "b ", 
 "a(3)"});

    for(const auto r : sol)
        cout<<r << " " ;
}