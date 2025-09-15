


import java.util.Random;
import java.util.Scanner;



public class jogoadivinha {

    public static void main(String[] args){
        Scanner scanner = new Scanner(System.in);

        Random rand = new Random();
        int numero = rand.nextInt(101);


        System.out.println("Digite um número entre 0 a 100: ");
        int palpite = scanner.nextInt();

    while(palpite != numero ){
        
        

        if(palpite < numero){
            System.out.println("O número é maior que o seu palpite");
        }else{
            System.out.println("O número é menor que o seu palpite");
        }

        System.out.println("Digite um número entre 0 a 100: ");
        palpite = scanner.nextInt(); 
        

        
    }

    System.out.println("Você acertou");

    scanner.close();
        
        


    }
    
}
