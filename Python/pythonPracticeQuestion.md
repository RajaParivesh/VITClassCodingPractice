	Python Practice code

1. Write a Python program which accepts the radius of a circle from the user and
compute the area.

```import math
radius = int(input('Enter the value of the radius'))
area = math.pi*radius**2
print (area)
```


2. Write a python code to check whether a given number of odd or even?

```n= int(input('Enter a number'))

if (n%2==0):
    print ('even')
else:
    print ('odd')
```


3. Write a python code to check whether a given year is leap year or not

```year = int(input('Enter the year'))

if (year%100==0):
    if (year%4==0):
        print ('leap year')
    else:
        print ('non leap year')
elif(year%4==0):
        print ('leap year')

else:
    print ('Non leap year')
```
4. Write a python code in finding the roots of a quadratic equation?


5. Write a python program to segregate student based on their CGPA. The details
are as follows:
<=9 CGPA <=10 - outstanding
<=8 CGPA <9 - excellent
<=7 CGPA <8 - good
<=6 CGPA <7 - average
<=5 CGPA <6 - better
CGPA<5
- poor



cgpa= float(input("Enter your cgpa"))

if(cgpa==10):
    print ('outstanding')
if(cgpa>=8 and cgpa<9):
    print ('excellent')
if(cgpa>=7 and cgpa<8):
    print ('good')
if(cgpa>=6 and cgpa<7):
    print ('avarage')
if(cgpa>=5 and cgpa<6):
    print ('better')
if(cgpa<5):
    print ('poor')



6. Write a program that read a group ‘g’ of five numbers and another number ‘n’
and print a number in ‘g’ if it is a factor for a given number n?

str=input()
g=str.split(' ')
n=int(input())
print()
for i in g:
    gInt = int(i)
    
    if(gInt%n==0):
        print (i)
        



7. Write a program to find the factorial of a number n?
8. Write a menu driven program which get user choice to perform
add/sub/mul/div with the obtained two input?
9. Write a program to display few odd multiples of an odd number n ?

