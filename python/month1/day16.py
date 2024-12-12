def solution(num_list):
    answer = []  # 빈 리스트 생성

    # 짝수와 홀수를 위한 초기 값 추가
    answer.append(0)  # 짝수 개수
    answer.append(0)  # 홀수 개수

    for num in num_list:  # num_list의 모든 원소를 순회
        if num % 2 == 0:  # 짝수일 경우
            answer[0] += 1
        else:             # 홀수일 경우
            answer[1] += 1

    return answer