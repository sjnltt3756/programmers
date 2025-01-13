def solution(num_list, n):
    answer = 0
    for i in num_list:
        if i == n:
            answer = 1
            break
    return answer


def solution(num_list, n):
    return 1 if n in num_list else 0