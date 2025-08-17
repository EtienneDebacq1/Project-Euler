def eratosthene(count):
    P = []

    i = 2
    while(len(P) != count):
        if len(P) == 0:
            P.append(i)
            i += 1
        else:
            prem = True
            for k in P:
                if i % k == 0:
                    prem = False
            if prem == True:
                P.append(i)
            i += 1
    
    return P

guess = 10001
answer = eratosthene(guess)[-1]
print(answer)