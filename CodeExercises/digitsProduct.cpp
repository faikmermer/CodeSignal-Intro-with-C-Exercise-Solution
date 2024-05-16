#include <iostream>
bool reduceProduct(int divison);

int solution(int product) {
    int Int_product = 1, digitNum = product + 1;
    if(product < 10 && product > 0 ) return product ;
    if(product >= 10 && !reduceProduct(product)) return -1; 
    else{
        int n = digitNum;
        while(true){
            Int_product *= n % 10;
            n /= 10;
            if(n == 0){
                if(Int_product == product) return digitNum;
                ++digitNum;
                n = digitNum;
                Int_product = 1;
            }
        }
    }
}

bool reduceProduct(int divison){
    int divisionCopy = divison;
    if(divison < 10) return true;
    
    if(divison % 2 == 0){
        divison /= 2;
        if(reduceProduct(divison)) return true;
        else divison = divisionCopy;
    }if(divison % 3 == 0){
        divison /= 3;
        if(reduceProduct(divison)) return true;
        else divison = divisionCopy;
    }if(divison % 5 == 0){
        divison /= 5;
        if(reduceProduct(divison)) return true;
        else divison = divisionCopy;
    }
    return false;
    
}

int main(){
    std::cout<<solution(14);
}