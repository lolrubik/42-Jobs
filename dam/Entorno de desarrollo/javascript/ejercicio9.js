const prompt = require('prompt-sync')({sigint: true});

a = (prompt('Has terminado bachillerato: '));
b = (prompt('Has hecho una prueba de acceso: '));

if (a == 'Si' || a == 'si' || b == 'Si' || b == 'si')
    console.log("Puedes cursar un grado superior");
else
    console.log("No puedes cursar un grado superior");