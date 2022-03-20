""" Operators
A = 2; B = 3
S = A + B
R = A - B
P = A * B
D = A / B
print(f'Adittion: {S}'), print(f'Substraction: {R}'), print(f'Product: {P}'), print(f'Division: {D}')

intD = A // B
M = A % B
E = A ** B
print(f'Integer division: {intD}'), print(f'Module: {M}'), print(f'Exponent: {E}')

# Area & Perimeter of a rectangle
b = int(input("Give the base: "))
h = int(input("Give the high: "))

a = b * h; p = (b + h) * 2

print(f'The area is: {a}'), print(f'The perimeter is: {p}')
"""
# ----------------------------------------------------------------------------------------------------------------------
""" Assignation operators
myVariable = 10

myVariable += 1
print(f'The reassignment  is: {myVariable}')
myVariable -= 1
print(f'The reassignment  is: {myVariable}')
myVariable *= 5
print(f'The reassignment  is: {myVariable}')
myVariable /= 2
print(f'The reassignment  is: {myVariable}')
"""
# ----------------------------------------------------------------------------------------------------------------------
""" Comparison operators
a = 4; b = 2

R = (a == b)
print(f'Result operator {a} == {b} is: {R}')

R = (a != b)
print(f'Result operator {a} != {b} is: {R}')

R = (a < b)
print(f'Result operator {a} < {b} is: {R}')

R = (a > b)
print(f'Result operator {a} > {b} is: {R}')

R = (a <= b)
print(f'Result operator {a} <= {b} is: {R}')

R = (a >= b)
print(f'Result operator {a} >= {b} is: {R}')

# Even or odd
n1 = int(input("Give a number: "))

if (n1 % 2) == 0:
    print(f"{n1} is even")
else:
    print(f"{n1} is odd")

# 18+?
age = int(input("Give your age: "))

if age >= 18:
    print(f"You're a adult")
else:
    print(f"You´re young")
"""
# ----------------------------------------------------------------------------------------------------------------------
""" Logic operators
a = True
b = True

R = a and b
print(R)

R = a or b
print(R)

R = not a
print(R)

# And exercise
minimalValue = 0
maximalValue = 5

n = int(input("Give the number: "))

inRange = (n >= minimalValue) and (n <= maximalValue)

if inRange:
    print(f"The value {n} is in range.")
else:
    print(f"The value {n} is not in range.")

# Or exercise
vacations = False
weekend = False

if vacations or weekend:
    print("He can rest.")
else:
    print("He can't rest.")

# Not exercise
vacations = False
weekend = False

if not (vacations or weekend):
    print("He can't rest.")
else:
    print("He can rest.")


# Age range
age = int(input("Give your age: "))

twenties = (age >= 20) and (age < 30)
thirties = (age >= 30) and (age < 40)

if twenties or thirties:
    if twenties:
        print(f"Your age is {age} and you're in the 20's")
    elif thirties:
        print(f"Your age is {age} and you're in the 30's")
else:
    print(f"Your age is {age} and you're not in the range")

# The biggest number of two
n1 = int(input("Give the first number: "))
n2 = int(input("Give the second number: "))

if n1 > n2:
    print(f"The number {n1} is bigger than {n2}")
elif n2 > n1:
    print(f"The number {n2} is bigger than {n1}")
print("End of the program")

# Library shop
bookName = input("Give the name of the book: ")
bookId = int(input("ID of the book: "))
price = float(input("Price: $"))
shipping = input("Free shipping (True/False): ")

if (shipping == 'True') or (shipping == 'true') or (shipping == 'T'):
    shipping = True
elif (shipping == 'False') or (shipping == 'false') or (shipping == 'F'):
    shipping = False
else:
    print("Give a correct value")

print(f'''
    Name: {bookName}.
    ID: {bookId}
    Price: ${price} mxn
    Free shipping?: {shipping}.
''')
"""