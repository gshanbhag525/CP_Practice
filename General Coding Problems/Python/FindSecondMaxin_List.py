if __name__ == '__main__':
    n = int(input())
    arr = map(int, input().split())
    arr = list(arr).sort()
    # print(type(arr))
    print(arr[-2])