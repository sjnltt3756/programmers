#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

// numbers_len은 배열 numbers의 길이입니다.
int compareDescending(const void *a, const void *b) {
    return *(int *)b - *(int *)a;
}

int solution(int numbers[], size_t numbers_len) {
    qsort(numbers,numbers_len,sizeof(int),compareDescending);
    int answer = numbers[0]*numbers[1];
    return answer;
}