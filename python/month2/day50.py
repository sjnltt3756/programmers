def solution(str_list, ex):
    answer = ''
    for i in str_list:
        # 현재 문자열 i에 ex가 포함되어 있는지 확인
        if ex in i : continue
        answer+=i
    return answer