def name_into_score(name):
    S = 0
    for i in name:
        S += ord(i) - 64
    return S


with open("0022_names_sorted.txt", "r", encoding="utf-8") as f:
    content = f.read().strip()


names = [name.strip() for name in content.split(",") if name.strip()]

S = 0
for i in range(len(names)):
    S += name_into_score(names[i])*(i+1)

print(S)
i = 982
print(name_into_score(names[i])*(i+1))