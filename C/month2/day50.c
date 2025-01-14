#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

// str_list_len은 배열 str_list의 길이입니다.
// 파라미터로 주어지는 문자열은 const로 주어집니다. 변경하려면 문자열을 복사해서 사용하세요.
char* solution(const char* str_list[], size_t str_list_len, const char* ex) {
    // return 값은 malloc 등 동적 할당을 사용해주세요. 할당 길이는 상황에 맞게 변경해주세요.
    char* answer = (char*)malloc(10000);


    // 각 문자열 검사 후 제외 조건에 맞지 않으면 결과 문자열에 추가
    for(size_t i = 0; i<str_list_len; i++){
        // 문자열에 ex가 포함되지 않은 경우
        if(strstr(str_list[i],ex)==NULL){
            strcat(answer,str_list[i]);
        }
    }
    return answer;
}