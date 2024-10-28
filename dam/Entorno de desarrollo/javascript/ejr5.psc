Algoritmo ejr5
	definir a Como Entero
	definir t Como Entero
	definir i Como Entero
	escribir "Introduce un numero: "
	leer a
	t = 0
	i = 0
	mientras (a <> -1)
		t = t + a
		i = i + 1
		escribir "Introduce un numero: "
		leer a
	FinMientras
	t = t / i
	escribir "La media aritmetica de todos los numeros es " t
FinAlgoritmo
