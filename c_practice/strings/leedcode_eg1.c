#include <stdio.h>
#include <stdlib.h> 

int scoreOfString(char* s) {
    int score = 0;
    int len = 0;
    
    // Calculate the length of the string
    while (s[len] != '\0') {
        len++;
    }
    
    // Allocate space for the difference array
    int chararr[len - 1];

    // Calculate the differences between consecutive characters
    for (int i = 0; i < len - 1; i++) {
        int num = (unsigned int )s[i] - (unsigned int)s[i + 1];
        chararr[i]=abs(num);
    }
    
    // Sum up the differences to get the score
    for (int i = 0; i < len - 1; i++) {
        score = score + chararr[i];     
    }
    
    return score;
}

int main() {
    char s[] = "hello";
    int score = scoreOfString(s);
    printf("Score of the string: %d\n", score);
    return 0;
}