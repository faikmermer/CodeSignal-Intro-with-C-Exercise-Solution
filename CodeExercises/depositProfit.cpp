#include <iostream>
#include <cmath>
int solution(int deposit, int rate, int threshold) {
    int years{};
    double money = deposit;
    bool threshHOLD = false;
    while(!threshHOLD){
        money += static_cast<double>(money * rate ) / 100 ;
        ++years;
        if(money >= threshold) threshHOLD = true;
    }
    return years;
    
}
int main(){
    
  
    std::cout<<solution(1, 1, 200);  
}