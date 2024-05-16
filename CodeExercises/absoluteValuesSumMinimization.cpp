#include <iostream>
#include <vector>
int solution(std::vector<int> a) {
    
  return a[(a.size() - 1) / 2];
    
}
int main(int argc, char const *argv[]){
    
    std::cout<<solution({2});

    return 0;
}