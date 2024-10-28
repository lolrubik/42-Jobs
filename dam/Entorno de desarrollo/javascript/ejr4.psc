Algoritmo ejr4
	definir a Como Entero
	definir i Como Entero
	definir total Como Entero
	escribir "Introduce a: "
	leer a
	i = 1
	total = 0
	mientras (a > 0)
		si (i % 2 == 0)
			total = total + i
			a = a - 1
		FinSi
		i = i + 1
	FinMientras
	escribir total
FinAlgoritmo
