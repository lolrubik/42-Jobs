Algoritmo ejercicio7
	definir a Como Real
	definir b Como Caracter
	escribir "Introduce el importe: "
	leer a
	escribir "Introduce el mes que es: "
	leer b
	si (b == "octubre" o b == "Octubre")
		a = (a - (a * 0.15))
	FinSi
	escribir "El importe final es: " a
FinAlgoritmo
