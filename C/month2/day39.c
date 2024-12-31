#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

int solution(int a, int b) {
    char buffer[20]; // 두 정수를 연결한 문자열을 저장할 버퍼 (최대 20자리)

    // ⊕ 연산: 두 정수를 붙여서 문자열로 만든 후 정수로 변환
    sprintf(buffer, "%d%d", a, b);
    int concatValue = atoi(buffer);

    // 2 * a * b 계산
    int productValue = 2 * a * b;

    // 더 큰 값 반환 (같으면 concatValue 반환)
    return (concatValue >= productValue) ? concatValue : productValue;
}