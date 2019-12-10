t=int(input())
for z in range(t):
    n=int(input())
    arr=input().split()
    count=0
    for i in range(n-1):
        for j in range(i+1, n):
            if int(arr[i])+int(arr[j])==int(arr[i])*int(arr[j]) :
                count+=1
    print(count)
