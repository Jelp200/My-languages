"""
    Practica #1

    Compuertas a utilizar:
        - AND
        - NAND
        - OR*
        - NOR
        - XOR
        - XNOR
"""

# Variables
a = int(input("De el valor del switch1 (0/1): "))
b = int(input("De el valor del switch2 (0/1): "))

# Asignación de valores booleanos en a y b
if a == 0:
    a = False
else:
    a = True

if b == 0:
    b = False
else:
    b = True

# AND & NAND
if a and b:
    print(f"Led encendido")
else:
    print(f"Led apagado")

if not (a and b):
    print(f"Led encendido")
else:
    print(f"Led apagado")

# OR & NOR
if a or b:
    print(f"Led encendido")
else:
    print(f"Led apagado")

if not (a or b):
    print(f"Led encendido")
else:
    print(f"Led apagado")

# XOR & XNOR
if (a == False) and (b == True):
    print(f"Led encendido")
elif (a == True) and (b == False):
    print(f"Led encendido")
else:
    print(f"Led apagado")

if not ((a == False) and (b == True)):
    print(f"Led encendido")
elif not ((a == True) and (b == False)):
    print(f"Led encendido")
else:
    print(f"Led apagado")