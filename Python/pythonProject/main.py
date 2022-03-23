"""
*** CICLO WHILE ***
while 'variable':
    ...
    Code
    ...
else: (Optional)
    ...
    Code
    ...

i = 0

while i <= 3:
    print(i)
    i += 1
else:
    print("End")

# Print 1 to 10
i = 0

while i < 10:
    i += 1
    print(i)
else:
    print("End")

# Print 5 to 0
i = 6

while i > 0:
    i -= 1
    print(i)
else:
    print("End")

*** CICLO FOR ***
for 'variableX' in 'variableY':
    ...
    Code
    ...
else: (Optional)

chain = "Hola"

for letter in chain:
    print(letter)
else:
    print("End")

*** BREAK ***

chain = "Instituto Politecnico Nacional"

for letter in chain:
    if letter == 'o':
        print(f"The letter is {letter}")
        break
else:
    print("End")

*** CONTINUE ***

# for i in range(6):
#     if i % 2 == 0:
#         print(f"Value: {i}")
for i in range(6):
    if i % 2 != 0:
        continue
    print(f"Value: {i}")
"""
