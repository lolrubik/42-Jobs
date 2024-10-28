Algoritmo ejr6
	definir i Como Entero
	definir clave como caracter
	i = 0
	mientras (i < 3)
		escribir "Introduce la clave: "
		leer clave
		si (i >= 0 y clave == "eureka")
			escribir "Clave correcta"
			i = 3
		SiNo
			escribir "Error"
			si ((i + 1) == 3)
				escribir "Ya no te quedan mas intentos"
			FinSi
		FinSi
		i = i + 1
	FinMientras
FinAlgoritmo
