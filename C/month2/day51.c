#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

// 파라미터로 주어지는 문자열은 const로 주어집니다. 변경하려면 문자열을 복사해서 사용하세요.
int solution(const char* str1, const char* str2) {
    int answer = 0;
    // strstr 함수로 str1이 str2에 포함되어 있는지 확인
    if(strstr(str2, str1) != NULL){
        answer = 1;
    }
    return answer;
}