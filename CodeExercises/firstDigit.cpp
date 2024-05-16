char solution(string inputString) {
    char c = ' ';
    for(unsigned int i = 0; i <inputString.length(); ++i){
        if(isdigit(inputString[i])) return c = inputString[i];
    }
}
