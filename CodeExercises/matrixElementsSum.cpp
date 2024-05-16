#include <iostream>
#include <vector>
using namespace std;

int solution(vector<vector<int>> matrix){
    int row = matrix.size(), col = matrix[0].size(), sum = 0;
    
    for( int i = 0; i < row; ++i){ //3
        for(int j = 0; j < col; ++j){ //4
            if(row > 1 && (matrix[i][j] == 0 && i + 1 < row)) matrix[i + 1][j] = 0;
            sum += matrix[i][j];
        }
    }
    return sum;
}


int main() {
    vector<vector<int>> matrix = {{0,1,1,2}, {0,5,0,0}, {2,0,3,3}};

    // Her sütun için döngü
    for (unsigned int i = 0; i < matrix[0].size(); ++i) {
        // Her satır için döngü
        for (unsigned int j = 0; j < matrix.size(); ++j) {
            // Her bir elemanı yazdır
            cout << matrix[j][i] << " ";
        }
        // Satır sonu
        cout << endl;
    }

    return 0;
}
