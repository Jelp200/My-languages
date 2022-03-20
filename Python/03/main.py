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
"""