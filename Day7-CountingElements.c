/**
 * Day 7 - Counting Elements
 * 
 * https://github.com/agileshaw/30-Day-LeetCoding-Challenge
 **/

int countElements(int* arr, int arrSize){
    int hash[1002];
    int i, count = 0;
    
    for (i = 0; i < 1002; i++)
        hash[i] = 0;
    
    for (i = 0; i < arrSize; i++)
        hash[arr[i]] = 1;
    
    for (i = 0; i < arrSize; i++) {
        if (hash[arr[i]+1] == 1) {
            count++;
        }
    }
    
    return count;
}
