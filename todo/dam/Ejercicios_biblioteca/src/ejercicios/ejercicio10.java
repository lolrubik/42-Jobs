package ejercicios;

import java.util.Random;

public class ejercicio10 {
	public static void main(String[] args) {
		int num1 = (int) (Math.random() * 6) + 1;
		System.out.println("El primer jugador ha sacado: " + num1);
		int num2 = (int) (Math.random() * 6) + 1;
		System.out.println("El segundo jugador ha sacado: " + num2);
		int num3 = (int) (Math.random() * 6) + 1;
		System.out.println("El tercer jugador ha sacado: " + num3);
		boolean imayo = num1 > num2  ? true : false;
		boolean jmayo = num3 > num1 ? true : false;
		boolean kmayo = num2 > num3 ? true : false;
		String msg = imayo ? (jmayo ? "El segundo jugador ha sacado el número más grande" : "El primer jugador ha sacado el número más grande") : kmayo ? "El tercer jugador ha sacado el número más grande" : "El segundo jugador ha sacado el número más grande";
		System.out.println(msg);
	}
}