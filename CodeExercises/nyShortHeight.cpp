#include <iostream>
#include <vector>

std::vector <int> solution(std::vector<int> a){
    int i = 0, low = 0, lowIndex, j;
    bool change;
    
    do{
        low = a[i];
        
        if(a[i] != -1){
            j = i + 1;
            while(j < a.size()){
              change = false;
                if(a[j] != -1 && low > a[j]){
                    low = a[j];
                    change = true;
                }
                if(change){
                    a[j] = a[i];
                    a[i] = low;
                }
                ++j;
            }
        }
        ++i;
    }while( i < static_cast<int>(a.size()));

    return a;
}

int main(int argc, char const *argv[]){
    std::vector<int> s = { 23, 54, -1, 43, 1, -1, -1, 77, -1, -1, -1, 10000,3};
    std::vector<int> sira = solution(s);
    for(int i = 0; i < sira.size(); ++i)
        std::cout<<sira[i]<< " ";
    return 0;
}