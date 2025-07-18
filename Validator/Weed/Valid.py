# Author : ysh
# 2025/07/18 Fri 01:36:20
n = int(input())
assert(1 <= n <= (10 ** 5) << 1)
f = [[int(i) for i in input().split()] for _ in range(1, n)]
assert([i for i in f if len(i) == 3] == f)
assert([i for i in f if 1 <= i[0] <= n] == f)
assert([i for i in f if 1 <= i[1] <= n] == f)
assert([i for i in f if 0 <= i[1] <= 10 ** 9] == f)

k = int(input())
assert(1 <= k <= 10 ** 6)
p = [[int(i) for i in input().split()] for _ in range(k)]
l = [i for i in p if i[0] == 0]
r = [i for i in p if i[0] == 1]

assert([i for i in l if len(i) == 2] == l)
assert([i for i in l if 1 <= i[1] <= n] == l)
assert([i for i in r if 1 <= i[1] <= n] == r)
assert([i for i in r if 1 <= i[2] <= n] == r)
assert([i for i in r if 0 <= i[3] <= 10 ** 9] == r)

quit()