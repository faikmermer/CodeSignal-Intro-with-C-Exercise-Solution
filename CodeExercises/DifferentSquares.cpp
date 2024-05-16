#include <iostream>
#include <vector>
using namespace std;


int makeUnique(vector<vector<int>> &matrix, vector<vector<int>> twotwo, vector<vector<int>> &uniqueMap, vector<int> row, vector<int> col);
void removeSame(vector<vector<int>> &matrix, int row, int col);

int solution(vector<vector<int>> matrix) {
    vector<vector<int>> twotwo(2, vector<int>(2, -1));
    vector<int> row = {0, 0, 1, 1};
    vector<int> col = {0, 1, 0, 1};
    vector<vector<int>> uniqueMap(matrix.size(), vector<int>(matrix[0].size(), 0));

    int unique_Count = 0;

    for( int i = 0; i < static_cast<int>(matrix.size()) - 1; ++i){
        for( int j = 0,  k = 0; j < static_cast<int>(matrix[0].size()) - 1; ++k){
            twotwo[row[k]][col[k]] = matrix[i + row[k]][j + col[k]];
            std::cout<<twotwo[row[k]][col[k]]<< " ";
            if(k == 3){
                std::cout<< std::endl;
                unique_Count +=  makeUnique(matrix, twotwo, uniqueMap, row, col);
                ++j, k = - 1;
            }

        }
    }
    return unique_Count;
}
int makeUnique(vector<vector<int>> &matrix,vector<vector<int>> twotwo, vector<vector<int>> &uniqueMap, vector<int> row, vector<int> col){
    int same = 0;
    int elementSame = 0;

    for( unsigned int i = 0; i < matrix.size() - 1; ++i){
        unsigned int j = 0;
        for(int k = 0; j <  matrix[0].size() - 1; ++k){

            if(twotwo[row[k]][col[k]] == matrix[i + row[k]][j + col[k]] && uniqueMap[i][j] != 1) ++elementSame;
            else k = 3;

            if(elementSame == 4) uniqueMap[i][j] = 1 ,++same ;
            if(k == 3) ++j, k = - 1, elementSame = 0;
        }

    }
    if(same >= 1)  return 1;
    return 0;

}

int main(){
    std::cout<<solution({{2,5,3,4,3,1,3,2}, 
                         {4,5,4,1,2,4,1,3}, 
                         {1,1,2,1,4,1,1,5}, 
                         {1,3,4,2,3,4,2,4}, 
                         {1,5,5,2,1,3,1,1}, 
                         {1,2,3,3,5,1,2,4}, 
                         {3,1,4,4,4,1,5,5}, 
                         {5,1,3,3,1,5,3,5}, 
                         {5,4,4,3,5,4,4,4}});
}
