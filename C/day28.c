#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

// 파라미터로 주어지는 문자열은 const로 주어집니다. 변경하려면 문자열을 복사해서 사용하세요.
char* solution(const char* my_string, const char* letter) {
    // return 값은 malloc 등 동적 할당을 사용해주세요. 할당 길이는 상황에 맞게 변경해주세요.
    char* answer = (char*)malloc(strlen(my_string)+1); // 문자열 길이 + 종료 문자('\0')를 위한 메모리 할당
    int index = 0; // 새로운 문자열의 인덱스
    for(int i = 0; i<strlen(my_string); i++){
        if(my_string[i] != letter[0]){ // letter는 문자열이므로 letter[0]으로 비교
            answer[index++] = my_string[i];
        }
    }
    answer[index] = '\0'; // 문자열 종료 문자 추가
    return answer;
}