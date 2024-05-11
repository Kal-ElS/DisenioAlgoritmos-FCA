def leerNumeros():
    numeros = []
    for i in range(3):
        num = int(input(f"Ingrese el número {i + 1}: "))
        if num < 3 or num > 15:
            print("Error: El número debe estar entre 3 y 15.")
            return None
        numeros.append(num)
    return numeros

def ordenar(numeros):
    return sorted(numeros, reverse=True)

def main():
    print("Ingrese tres números para ordenar que se encuentren entre 3 y 15:")
    numeros = leerNumeros()
    if numeros:
        numeros_ordenados = ordenar(numeros)
        print("Números ordenados de mayor a menor:", numeros_ordenados)

if __name__ == "__main__":
    main()
