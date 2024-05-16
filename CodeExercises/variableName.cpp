bool solution(string name) {
    if(isdigit(name[0]) || name[0] == ' ') return false;
    for(unsigned int i = 0; i < name.length(); ++i) if((!isalpha(name[i]) && !isdigit(name[i]) && name[i] != '_') || name[i] == ' ')
        return false;
    return true;
}
