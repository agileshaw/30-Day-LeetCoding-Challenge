/**
 * Day 12 - Last Stone Weight
 * 
 * https://github.com/agileshaw/30-Day-LeetCoding-Challenge
 **/

int lastStoneWeight(int* stones, int stonesSize) {
    int i, available, index1, index2, left = 0;
    
    if (stonesSize > 1)
        available = stonesSize;
    else
        return stones[0];

    while (available > 1) {
        if (stones[0] >= stones[1]) {
            index1 = 0;
            index2 = 1;
        } else {
            index1 = 1;
            index2 = 0;
        }

        if (stonesSize > 2) {
            for (i = 2; i < stonesSize; i++) {
                if (stones[i] > stones[index1]) {
                    index2 = index1;
                    index1 = i;
                } else if (stones[i] > stones[index2])
                    index2 = i;
            }
        }
        
        if (stones[index1] > stones[index2]) {
            stones[index1] -= stones[index2];
            stones[index2] = 0;
            available--;
        } else if (stones[index1] == stones[index2]) {
            stones[index1] = 0;
            stones[index2] = 0;
            available -= 2;
        }
    }
    
    if (available == 1) {
        for (i = 0; i < stonesSize; i++) {
            if (stones[i] > 0)
                left = stones[i];
        }
    }
    
    return left;
}