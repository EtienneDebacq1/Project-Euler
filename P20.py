def facto(N):
    if N == 1:
        return 1
    return N*facto(N-1)


def sum_big_number(N):
    s = 0
    ret = 1
    while N >= ret:
        s += (N//ret)%10
        ret = ret*10
    return s


N = facto(100)
print(sum_big_number(N))