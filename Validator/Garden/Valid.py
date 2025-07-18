# Author : ysh
# 2025/07/17 Thu 10:10:10
n = int(input())
assert(0 <= n <= 10 ** 5)

f = [[int(i) for i in input().split()] for _ in range(n)]
assert(len(set([i[0] for i in f])) == n)
assert(len([i[1] for i in f if 1 <= i[1] <= 10 ** 6]) == n)
assert(1 <= sum([i[1] for i in f]) <= 10 ** 6)
assert(len([i[0] for i in f if 0 <= i[0] <= n]) == n)

quit()