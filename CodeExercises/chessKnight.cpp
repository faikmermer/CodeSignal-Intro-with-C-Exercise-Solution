#include <iostream>
#include <string>
#include <vector>
using namespace std;
int solution(string cell) {

    int locationCol = cell[0] - 'a';
    int locationRow = cell[1] - '1';
    int move = 0;

    vector<int> row = {-1, -2, -2, -1,  1,  2, 2, 1};
    vector<int> col = { 2,  1, -1, -2, -2, -1, 1, 2 }; 
    
    for(unsigned i = 0; i < 8; ++i) if((locationRow + row[i] >= 0 && locationRow + row[i] <= 7) && 
        (locationCol + col[i] >= 0 &&  locationCol + col[i] <= 7 )) 
        ++move;

    return move;
}

int main(){

    std::cout<<solution("a5");
    return 0;
}