""" IF Condition
Structure.
------------------------------------------------------------------------------------------------------------------------
if (condition):
    ...
    Code
    ...
------------------------------------------------------------------------------------------------------------------------
if (condition):
    ...
    Code
    ...
else:
    ...
    Code
    ...
------------------------------------------------------------------------------------------------------------------------
if (condition)
    ...
    Code
    ...
elif (condition):
    ...
    Code
    ...
else:
    ...
    Code
    ...

condition = False

if condition:
    print("True condition")
else:
    print("False condition")

condition2 = 10

if condition2 == True:
    print("True condition")
elif condition2 == False:
    print("False condition")
else:
    print("None condition")

# Number to text
n = int(input("Give a number (1 to 3): "))

if n == 1:
    nText = "Number one"
elif n == 2:
    nText = "Number two"
elif n == 3:
    nText = "Number three"
else:
    print("Give a correct value...")

print(f"The number that you give is {n} and in text is {nText}")

# Ternary operator
condition = False
print("True condition") if condition else print("False condition")

# Season
month = int(input("Give a month of the year (1-12): "))
season = None

if month == 1 or month == 2 or month == 12:
    season = "Winter"
elif month == 3 or month == 4 or month == 5:
    season = "Spring"
elif month == 6 or month == 7 or month == 8:
    season = "Summer"
elif month == 9 or month == 10 or month == 11:
    season = "Fall"
else:
    season = "Incorrect month"
print(f"For the month {month} the season is {season}")

# Life
age = int(input("Give your age: "))

if age <= 12:
    print("0 - 12: Child")
elif (age > 13) and (age <= 19):
    print("13 - 19: Teen")
elif (age > 20) and (age <= 30):
    print("20 - 30: Young adult")
else:
    print("Other age")

# Notes
note = float(input("Give the note (0 - 10): "))

if (note >= 9) or (note == 10):
    print("A")
elif (note >= 8) or (note == 9):
    print("B")
elif (note >= 7) or (note == 8):
    print("C")
elif (note >= 6) or (note == 7):
    print("D")
elif note <= 6:
    print("F")
else:
    print("Give a correct note")
"""
¿¿