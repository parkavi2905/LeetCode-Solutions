char* intToRoman(int num) {
    char *symbol[] = {"M", "CM", "D", "CD", "C", "XC", "L", "XL", "X", "IX", "V", "IV", "I"};
    int value[] = {1000, 900, 500, 400, 100, 90, 50, 40, 10, 9, 5, 4, 1};
    char *result = (char *)malloc(20 * sizeof(char)); 
    result[0] = '\0';     
    int i = 0;    
    while (num > 0) {
        while (num >= value[i]) {
            strcat(result, symbol[i]);
            num -= value[i];
        }
        i++;
    }    
    return result;
}
