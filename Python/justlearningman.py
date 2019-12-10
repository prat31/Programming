import random

print('Hello there! Please enter your name : ', end=' ')
name = input()
print('Hello '+name+'. I have chosen a number for you between 1 and 10, try to guess it in 5 tries')
ans=random.randint(1, 10)

for i in range(5):
    print('Enter your guess : ', end=' ')
    guess=int(input())
    if guess<ans :
        print('Your guess is too low.')
    elif guess>ans :
        print('Your guess is too high.')
    else :
        break
    
if guess == ans :
    print('Congratulations! You have guessed the correct number ' +str(ans))
else :
    print('Sorry, your guesse are over. The answer is : '+str(ans))

      
