/**
 * Day 14 - Perform String Shifts
 * 
 * https://github.com/agileshaw/30-Day-LeetCoding-Challenge
 **/

char * stringShift(char * s, int** shift, int shiftSize, int* shiftColSize){
    int i, j = 0, count = 0;
    char *new_str = (char*)malloc(strlen(s)+1);
    
    for (i = 0; i < shiftSize; i++) {
        if (shift[i][0] == 0)
            count -= shift[i][1];
        else
            count += shift[i][1];
    }
    
    if (abs(count) % strlen(s) == 0)
        return s;
    else if (count < 0)
        count = abs(count) % strlen(s);
    else if (count > 0)
        count = strlen(s) - (count % strlen(s));
    
    for (i = count; i < strlen(s); i++, j++)
        new_str[j] = s[i];
    for (i = 0; i < count; i++, j++)
        new_str[j] = s[i];
    new_str[j] = '\0';
    
    return new_str;
}