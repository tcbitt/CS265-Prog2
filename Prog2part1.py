# Name: Travis Bittner
# Email: travis.bittner@und.edu
#
# Simple Python program that gets user input for grades and loops until the user inputs -1

totalGrades = 0
totalPoints = 0
totalPossible = 0
perfectScores = 0

while True:
    currentGrade = input("Enter a score: ")
    
    if int(currentGrade) == -1:
        break
    
    totalGrades += 1
    totalPoints += int(currentGrade)
    
    possibleGrade = input("Enter a possible score: ") 
    
    totalPossible += int(possibleGrade)
    
    if currentGrade == possibleGrade:
        perfectScores += 1

average = (totalPoints/totalPossible) * 100

if average < 60:
    letterGrade = 'F'
elif average < 70:
    letterGrade = 'D'
elif average < 80:
    letterGrade = 'C'
elif average < 90:
    letterGrade = 'B'
else:
    letterGrade = 'A'

print("Number of scores: " + str(totalGrades))
print("Total points: " + str(totalPoints))
print("Total possible: " + str(totalPossible))
print("Average: " + '{0:.3f}'.format(average))
print("Grade: " + letterGrade)
print("Perfect scores: " + str(perfectScores))
