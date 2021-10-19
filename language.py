t = int(input())
for i in range(t):
    n, k = map(int, input().split())
    words = list(map(str, input().split()))
    all_phrases = []
    for i in range(k):
        phrases = input().split()
        phrases = phrases[1:]
        all_phrases += phrases
    ans = []
    for i in words:
        if i in all_phrases:
            ans.append("YES")
        else:
            ans.append("NO")
    for i in ans:
        print(i, end=" ")
    print()
