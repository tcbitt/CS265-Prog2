# Name: Travis Bittner
# Email: travis.bittner@und.edu
# 
# Simple Python program that gets 2 values from the user, a start and end.
# Checks if start is less than end, if so loop and count up, else loop and count down

start = int(input("Enter starting value: "))
end = int(input("Enter ending value: "))

if start < end:
    for i in range(start, end + 1, 1):
        print(i)
else:
    for i in range(start, end - 1, -1):
        print(i)
