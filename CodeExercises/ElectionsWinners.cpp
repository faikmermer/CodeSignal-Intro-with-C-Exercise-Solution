#include <iostream>
#include <vector>
#include <algorithm>
int solution(std::vector<int> votes, int k) {
    unsigned int i = 0, win = 0, count = 0;
    auto max_elem = std::max_element(votes.begin(), votes.end());
    int max = *max_elem;
    do{
        if(votes[i] == max) ++count;
        ++i;
    }while(i < votes.size());
    
    for(unsigned int j = 0; j < votes.size(); ++j){
        if(votes[j] + k > max && k != 0) ++win;
        if(k == 0 && count == 1) return count;
    }
    return win;
}

int main(){
    std::cout<<solution({5, 1, 5, 3, 1}, 2);
}