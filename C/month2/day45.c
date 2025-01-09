#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

int solution(int a, int b) {
     char str_a[6], str_b[6]; // 최대 5자리 숫자를 저장할 수 있는 문자열
    char combined_ab[11], combined_ba[11];

    // 숫자를 문자열로 변환
    sprintf(str_a, "%d", a);
    sprintf(str_b, "%d", b);

    // 두 문자열을 결합
    strcpy(combined_ab, str_a);
    strcat(combined_ab, str_b);

    strcpy(combined_ba, str_b);
    strcat(combined_ba, str_a);

    // 결합된 문자열을 숫자로 변환
    int num_ab = atoi(combined_ab);
    int num_ba = atoi(combined_ba);

    // 더 큰 값을 반환
    return (num_ab >= num_ba) ? num_ab : num_ba;
}