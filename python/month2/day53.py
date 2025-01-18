def solution(arr, delete_list):
    for i in delete_list:
        if i in arr:
            arr.remove(i)
    return arr

# delete_list를 그래도 넣은 내 실수 -> delete_list의 요소들을 순회하면서 제거 해야함