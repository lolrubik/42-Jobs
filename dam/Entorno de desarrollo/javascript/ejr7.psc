Algoritmo ejr7
	escribir "Introduce un numero"
	leer a
	m = 0
	i = 0
	max = a
	min = a
	mientras (a <> 0)
		m = m + a
		i = i + 1
		si (a < min)
			min = a
		FinSi
		si (a > max)
			max = a
		FinSi
		escribir "Introduce un numero"
		leer a
	FinMientras
	m = m / i
	escribir "La media aritmetica de todos los numeroes es " m
	escribir "El numero maximo es " max
	escribir "El numero minimo es " min
FinAlgoritmo
