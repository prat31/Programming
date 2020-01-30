def min_final_length (input, substrings):
    best = len(input)
    for substr in substrings:
        beg = 0
        while (find_substring(input, substr, from=beg)):
            found=find_substring(input, substr, from=beg)
            input_without_substr = input[0:found]+input[found+len(substr):len(input)]
            best = min(best, min_final_length(input_without_substr,substrings))
            beg = found+1
    return best

n=int(input())
str=input()
print(min_final_length(str, "ab"))