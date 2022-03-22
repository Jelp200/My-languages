"""
    Comportamiento de las compuertas lógicas en físico y en la programación
        - AND
        - OR
        - NOT
"""

# Valores
from cgi import print_form


a = int(input("De el valor del switch1 (0/1): "))
b = int(input("De el valor del switch2 (0/1): "))

if a == 0:
    a = False
else:
    a = True

if b == 0:
    b = False
else:
    b = True

if (a and b) or (a or b):
    print("Led encendido.")
else:
    print("Led apagado.")
