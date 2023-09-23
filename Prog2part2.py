# Name: Travis Bittner
# Email: travis.bittner@und.edu
#
# Simple Python program that gets width, height, and fill character from the user
# Two nested while loops to create a width x height box made of the fill character

width = int(input("Enter width: "))
height = int(input("Enter height: "))
symbol = input("Enter character: ")

while height > 0:
    i = width
    while i > 0:
        print(symbol, end = '')
        i -= 1
    print()
    height -= 1
