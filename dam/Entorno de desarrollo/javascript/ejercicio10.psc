Algoritmo ejercicio10
	definir a Como Entero
	definir b Como Entero
	definir c Como Entero
	definir mensaje Como Caracter
	escribir "Introduce el dia"
	leer a
	escribir "Introduce el numero del mes"
	leer b
	escribir "Introduce el año"
	leer c
	si ((a <= 31 & a > 0) & (b <= 12 & b >= 1) & (c >= 0 & c <= 2024))
		si (b == 1)
			escribir "Es " a " de Enero de " c
		FinSi
		si (b == 2)
			escribir "Es " a " de Febrero de " c
		FinSi
		si (b == 3)
			escribir "Es " a " de Marzo de " c
		FinSi
		si (b == 4)
			escribir "Es " a " de Abril de " c
		FinSi
		si (b == 5)
			escribir "Es " a " de Mayo de " c
		FinSi
		si (b == 6)
			escribir "Es " a " de Junio de " c
		FinSi
		si (b == 7)
			escribir "Es " a " de Julio de " c
		FinSi
		si (b == 8)
			escribir "Es " a " de Agosto de " c
		FinSi
		si (b == 9)
			escribir "Es " a " de Septiembre de " c
		FinSi
		si (b == 10)
			escribir "Es " a " de Octubre de " c
		FinSi
		si (b == 11)
			escribir "Es " a " de Noviembre de " c
		FinSi
		si (b == 12)
			escribir "Es " a " de Diciembre de " c
		FinSi
	FinSi
FinAlgoritmo
