#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

// sides_len은 배열 sides의 길이입니다.
int solution(int sides[], size_t sides_len) {
    int answer = 0;
    // 배열을 내림차순 정렬 (선택 정렬 사용)
    for(int i = 0; i < sides_len; i++){
        for(int j = 0; j < sides_len; j++){
            if(sides[i] > sides[j]){
            int temp = sides[i];
            sides[i] = sides[j];
            sides[j] = temp;
            }
        }
    }
    // 가장 긴 변과 나머지 두 변의 합 비교
    if(sides[0] < sides[1] + sides[2]){
        answer = 1;
    } else{
        answer = 2;
    }

    return answer;
}