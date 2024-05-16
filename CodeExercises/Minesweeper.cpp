#include <iostream>
#include <vector>

std::vector<std::vector<int>> solution(std::vector<std::vector<bool>> matrix) {
    std::vector<std::vector<int>> mineSweeper(matrix.size(), std::vector<int>(matrix[0].size(), 0));

    const int rowSize = matrix.size();
    const int colSize = matrix[0].size();
 
    for( int i = 0; i < rowSize; ++i){
        for( int j = 0; j < colSize; ++j){
            //right one step control
            if(i + 1 < rowSize) if(matrix[i + 1][j] == 1) 
                ++mineSweeper[i][j];
            if(j + 1 < colSize) if(matrix[i][j + 1] == 1) 
                ++mineSweeper[i][j];
            //left one step control
            if(i - 1 >= 0) if(matrix[i - 1][j] == 1) 
                ++mineSweeper[i][j];
            if(j - 1 >= 0) if(matrix[i][j - 1] == 1) 
                ++mineSweeper[i][j];
            //right one step row and col control
            if(i + 1 < rowSize && j + 1 < colSize) if(matrix[i + 1][j + 1] == 1)
                ++mineSweeper[i][j];
            //right one step row and left one step col control 
            if(i + 1 < rowSize && j - 1 >= 0) if(matrix[i + 1][j - 1] == 1)
                ++mineSweeper[i][j];
            //left one step row and left one step col control
            if(i - 1 >= 0 && j - 1 >= 0) if(matrix[i - 1][j - 1] == 1)
                ++mineSweeper[i][j];
            //left one step row and right one step col control
            if(i - 1 >= 0 && j + 1 < colSize) if(matrix[i - 1][j + 1] == 1)
                ++mineSweeper[i][j];

        }
    }
    return mineSweeper;
}
int main(int argc, char const *argv[])
{
    std::vector<std::vector<int>> sol = solution({{false,true,true,false},
                                                  {true,true,false,true},
                                                  {false,false,true,false}});

    for(auto &row : sol){
        for(auto &col: row)
            std::cout<<col<<" ";
        std::cout<<std::endl;
    }
    
    return 0;
}