# ----------------------------------------------------------------------------------------------------------------------
""" First program with PY
print(f"Hello world in Python")
"""
# ----------------------------------------------------------------------------------------------------------------------
""" Variables in PY 
myVariable = "Hi from PY with variables"
print(myVariable)

x = 10
y = 5
R = x + y
print(R)
print(id(R))                                                # The output is the direction of memory for the variable R
"""
# ----------------------------------------------------------------------------------------------------------------------
""" Data types in PY
# Numeric = int, float, complex
# Dictionary
# Boolean = 0, 1
# Set
# Sequence type = Strings, tuple, list

x = 13; print(str(x)); print(type(x))
x = 05.1613; print(str(x)); print(type(x))
x = 'K'; print(x + "\n" + str(type(x)))
x = True; print(str(x) + "\n" + str(type(x)))
x = False; print(str(x) + "\n" + str(type(x)))
"""
# ----------------------------------------------------------------------------------------------------------------------
""" Chains
myFavGroup = "Slipknot"
print("My favorite group is: " + myFavGroup)

mySchool = "ESIME"
myUniversity = "IPN"
print("I'm study in: " + mySchool + " | " + myUniversity)

print("My favorite group is:", myFavGroup, "and i study in the", myUniversity)

n1 = "5"; n2 = "13"
print("Concatenation:", n1 + n2); print("Sum:", int(n1) + int(n2))
"""
# ----------------------------------------------------------------------------------------------------------------------
""" Boolean type
V = True
V = 5 > 10
if V:
    print("The result is true")
else:
    print("The result is false")
"""
# ----------------------------------------------------------------------------------------------------------------------
""" Input
result = input("Give a msj: ")
print(result)
print("The result is:", result)
print("End of the program")

n1 = int(input("First number: "))
n2 = int(input("Second number: "))
r = n1 + n2
print("The result is:", r)

# How is going your day?
day = input("How is going your day? (1 - 10): ")
print(day)
"""