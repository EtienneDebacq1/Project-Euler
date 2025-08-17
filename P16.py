def sum_big_number(N):
    s = 0
    ret = 1
    while N >= ret:
        s += (N//ret)%10
        ret = ret*10
    return s


N = 2**1000
print(sum_big_number(N))