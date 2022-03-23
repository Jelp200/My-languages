"""
    *** LIST IN PY ***

# Define the list
names = ["Jorge", "Karol", "Sofia", "Moca"]
# Print the list
print(names)
print(names[0])
print(names[-1])

# Print range
print(names[0:2])           # Not 2
print(names[:3])            # Not 3
print(names[1:])

# Change the value in the list
names[3] = "Loca"
print(names)

# Iterate names
for name in names:
    print(name)
else:
    print("No more names in the list")

# Ask the large of the list
print(len(names))

# Add elements
names.append("Francesca")
print(names)

# Add a element in a index
names.insert(0, "Octavio")
print(names)

# Remove a element
names.remove("Octavio")
print(names)

# Remove the last element
names.pop()
print(names)

# Remove one element in a specific index
del names[0]
print(names)

# Clean all the elements of the list
names.clear()
print(names)

# Delete the list
del names
print(names)

# Iterate a range between 0 - 10 and print the numbers divisible around three
for i in range(10):
    if i % 3 == 0:
        print(i)

    *** TUPLES IN PY ***

fruits = ("Orange", "Banana", "Guava")

# Length of the tuple
print(len(fruits))

# Access to a element
print(fruits[0])

# Inverse nav
print(fruits[-1])

# Value range
print(fruits[0:2])

# Traverse a tuple
for fruit in fruits:
    print(fruit, end=' ')

# Change a value of a tuple
# fruits[0] = "Watermelon"

# Tuple to list
fruitsList = list(fruits)
fruitsList[0] = "Watermelon"
fruits = tuple(fruitsList)
print(f"\n{fruits}")

# Delete the tuple
del fruits
print(fruits)

# EXERCISE
# tuplas = (13, 1, 8, 3, 2, 5)
#
# tuplasList = list(tuplas)
# print(tuplasList)
# for tupla in tuplas:
#     if tupla <= 5:
#         print(tupla)

tupla = (13, 1, 8, 3, 2, 5, 8)
lista = []

for elemento in tupla:
    if elemento < 5:
        lista.append(elemento)

print(lista)
"""
