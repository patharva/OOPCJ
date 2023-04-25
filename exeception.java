import java.io.*;
import java.util.Scanner;

class InvalidAge extends Exception{
	int age;
	InvalidAge(int age){
		System.out.println("AGE ENTERED IS INVALID!");
	}
}

class employee{
	private static Scanner xy;
	public static void validage(int age)throws InvalidAge {
		if(age < 18) {
			throw new InvalidAge(age);
		}
		else
			System.out.println("AGE IS VALID");
	}
	
	public static void main(String[] args) {
		int age;
		xy = new Scanner(System.in);
		try {
			System.out.println("ENTER NAME: ");
			age=xy.nextInt();
			validage(age);
			
		}catch(InvalidAge e) {
			System.out.println(e);
		}
		
	}
}

