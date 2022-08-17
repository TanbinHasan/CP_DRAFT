mx = 10000000000
n = int(input())
a = [mx]
a += list(map(int, input().split()))
a += [mx]
m = 0
mxi = 0
ans = 0
for i in range(1, n+1):
    if a[i-1] > a[i]:
        l = a[i-1]
        m = a[i]
    if a[i+1] < m:
        m = 0
    elif a[i+1] > m:
        r = a[i+1]
        mxi = max(mxi, m)
        if l == mx and r == mx:
            pass
        else:
            ans += (min(l, r) - m)
print(min(ans+mxi, n))
