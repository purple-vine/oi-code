a = [0] * 10
b = a
b[0] = 1
n = int(input())
ans = 0
for i in range(n - 1):
    for j in range(7):
        if j == 0:
            a[j] = b[7] + b[1]
        elif j == 7:
            a[j] = b[6] + b[0]
        elif j == 4:
            a[j]= b[3] + b[5]
            ans += a[4]
        else:
            a[j] = b[j - 1] + b[j + 1]
    for j in range(7):
        b[j] = a[j]
print(ans)
