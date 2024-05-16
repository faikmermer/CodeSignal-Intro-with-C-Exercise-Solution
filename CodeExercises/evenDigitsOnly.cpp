#include <iostream>


bool solution(int n) {
    int oddOrEven = 1;
    while(n){
        oddOrEven = n % 10;
        n /= 10;
        if(oddOrEven % 2 != 0) return false;
    }
    return true;
    
}
int main(){
    std::cout<<solution(248622);
}