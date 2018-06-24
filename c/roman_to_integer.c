// Roman to Integer

int table(char c) {
    switch (c){
        case 'M':
            return 1000;
        case 'D':
            return 500;
        case 'C':
            return 100;
        case 'L':
            return 50;
        case 'X':
            return 10;
        case 'V':
            return 5;
        case 'I':
            return 1;
        default:
            return 0;
    }
}

int romanToInt(char* s) {
    int len = strlen(s);
    int current = table(s[len-1]);
    int integer = current;
    int tmp;
    for(int i = len-2; i >=0; i--) {
        tmp = table(s[i]);
        if (tmp < current)
            integer -= tmp;
        else {
            integer += tmp;
            current = tmp;
        }
    }
    return integer;
}
