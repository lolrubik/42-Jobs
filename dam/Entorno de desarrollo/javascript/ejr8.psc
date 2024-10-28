Algoritmo ejr8
	definir a Como Entero
	definir aux Como Entero
	definir t Como Entero
	definir str Como Caracter
	escribir "Introduce un numero: "
	leer a
	aux = a
	t = a
	str = ''
	mientras (a <> 0)
		str = str + '*'
		a = a - 1
		si (a == 0)
			mientras (t <> 0)
				escribir str
				t = t - 1
			FinMientras
		FinSi
	FinMientras
FinAlgoritmo
