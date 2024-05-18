def sumarPares(n):
    suma = 0  # Inicializar la variable en 0
    for i in range(1, n + 1):  # Bucle repetitivo
        par = 2 * i
        suma += par
        print(f"Para n = {i}, Suma = {suma}.")

def main():
    try:
        n = int(input("Ingrese un número entero positivo: "))
        if n > 0:  # Validación de positivos
            sumarPares(n)
        else:
            print("El valor no es válido. Debe ser un número entero positivo.")
            main()  # Volver a correr main para volver a pedir la entrada
    except ValueError:  # Error en caso de que la transformación a int falle
        print("Entrada no válida. Por favor, ingrese un número entero positivo.")
        main()  # Volver a correr main para volver a pedir la entrada

if __name__ == "__main__":
    main()