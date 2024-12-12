#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

// 파라미터로 주어지는 문자열은 const로 주어집니다. 변경하려면 문자열을 복사해서 사용하세요.
int solution(const char* str1, const char* str2) {
    int answer = 0;
    // strstr 함수는 str1에서 str2를 찾고, 존재하면 그 위치의 포인터를 반환
    // 존재하지 않으면 NULL을 반환
    if(strstr(str1,str2) != NULL){
        answer = 1;
    }else{
        answer = 2;
    }
    return answer;
}