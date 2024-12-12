#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

int solution(int n) {
    int answer = 0;
    int sqrt_val = sqrt(n);
    if(sqrt_val * sqrt_val == n){
        answer = 1;
    }else{
        answer = 2;
    }
    return answer;
}