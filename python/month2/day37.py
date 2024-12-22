def solution(sides):
    answer = 0
    # 오름차순 정렬
    sides.sort()
    if sides[2] < sides[0] + sides[1]:
        answer = 1
    else:
        answer = 2
    return answer