#include <iostream>
#include <bitset>

std::string solution(std::string code) {
    std::string str = "";
    std::string asciistr = "";
    char asciichr = ' ';
    unsigned int ascii = 0, tour = 1;
    for( int i = code.length() - 1; i >= 0; --i){
        if(tour == 8){
            str.insert(0, 1, code[i]);
            ascii = std::bitset<8>(str).to_ulong();
            asciichr = ascii;
            asciistr.insert(0, 1, asciichr);
            tour = 1;
            str = "";
        }else str.insert(0, 1, code[i]), ++tour;
    }
    
    return asciistr;
}
int main(){

    std::cout<<solution("010011100110010101110110011001010111001000100000011100100110010101100111011100100110010101110100001000000110000101101110011110010111010001101000011010010110111001100111001000000111010001101000011000010111010000100000011011010110000101100100011001010010000001111001011011110111010100100000011100110110110101101001011011000110010100101110");
}