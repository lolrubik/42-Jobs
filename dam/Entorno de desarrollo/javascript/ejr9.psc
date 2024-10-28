Algoritmo ejr9
	escribir "Introduzca un numero: "
	leer a
	t = a
	str = ''
	str1 = '*'
	si (a == 1)
		escribir '*'
	SiNo
		mientras (a <> 0)
			str = str + '*'
			a = a - 1
			si (a == 0)
				str1 = str1 + '*'
				escribir str
				mientras (t <> 2)
					escribir str1
					t = t - 1
				FinMientras
				escribir str
			FinSi
			si (a <> 1)
				str1 = str1 + ' '
			FinSi
		FinMientras
	FinSi
FinAlgoritmo
