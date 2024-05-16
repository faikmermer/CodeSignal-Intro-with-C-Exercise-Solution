bool solution(std::string inputString) {
  int pointCount = 0;
  int number = 0;
  char prevchar = ' ';
  std::string StrNumber = "";
  //first element control
  if(inputString[0] == '.') return false;
  for(unsigned int i = 0; i < inputString.length(); ++i){

    //consecutive point control
    if(prevchar == '.' && inputString[i] == prevchar) return false;
    prevchar = inputString[i];

    // //[0, 255] control
    if(isdigit(inputString[i])) number = number * 10 + (inputString[i] - '0');

    //[0, 255] control
    if(number < 0 || number > 255) return false;

    //number control
    if(!isdigit(inputString[i]) && inputString[i] != '.') return false;

    //point control
    if(inputString[i] == '.') {
      ++pointCount;
      number = 0;
    }
    // leading zeros control
    if(inputString[i] != '.'){
        StrNumber += inputString[i];
        if(StrNumber.length() > 1 && StrNumber[0] == '0') return false;
    }else StrNumber = "";
    

  }
  if(pointCount != 3) return false;

  return true;

}