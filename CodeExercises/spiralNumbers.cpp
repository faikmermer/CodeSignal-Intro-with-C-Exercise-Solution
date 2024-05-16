#include <iostream>
#include <vector>
#include <iomanip>
std::vector<std::vector<int>> solution(int n) {
    std::vector<int> col = {1, 0, -1,  0};
    std::vector<int> row = {0, 1,  0, -1};
    std::vector<std::vector<int>> nn(n, std::vector<int>(n, 0));
    int d = 0, tour = n - 1; // d is one cycle for each spiral order.n is the number of steps for an equal spiral motion. 
    int membeRow = 0, memberCol = 0, element = 1; // member variables holds memory for the last spiral. 
    int spiralTour = 1, startSpiralTour = 3; //The first spiral takes place in 3 steps and the other spiral steps move continuously in 2 steps.
    nn[0][0] = 1;
    while(tour > 0){

        int c = col[d];
        int r = row[d];
        if(c == 1){ 
          for( int i = memberCol + 1; i <= tour + memberCol; ++i) nn[membeRow][i] = ++element;// tour + memberCol = includes [memberCol + 1, tour count + startPoint(memberCol)]
          memberCol = tour + memberCol;
        }
        else if(r == 1){ 
            for( int i = membeRow + 1; i <= tour + membeRow; ++i) nn[i][memberCol] = ++element;//tour + membeRow = includes [memberCol + 1, tour count + startPoint(membeRow)]
            membeRow = tour + membeRow;
        }else if(c == - 1){ 
            for( int i = memberCol - 1; i >= abs(memberCol - tour); --i) nn[membeRow][i]= ++element; // when there is a backtrack, we do subtraction.
            memberCol = abs(memberCol - tour);
        }else {
            for( int i = membeRow - 1; i>= abs(membeRow - tour); --i) nn[i][memberCol] = ++element;    
            membeRow = abs(membeRow - tour);
        }    
        if(spiralTour == startSpiralTour){
            --tour;
            startSpiralTour = 2;
            spiralTour = 1;
        } 
        else ++spiralTour;
        if(d == 3) d = 0;
        else ++d;
    }
    return nn;
    
}

int main() {
    std::vector<std::vector<int>> sol{};
    sol = solution(40);
    for(const auto &r : sol){
        for(const auto &c: r){
            std::cout<<std::setw(5)<<std::right<<c;
        }
        std::cout<<std::endl;
    }
}