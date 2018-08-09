import java.util.Scanner; 			// Incluindo Scanner

public class Exercicios {
	/********************
	 **primeira questao**
	 ********************
	 
	  public static void main (String[] args) {
		int numero;
		for (numero=150; numero<300; numero++) {
		System.out.println(numero);
		}
	}
	 ********************
	 **segunda questao **
	 ********************

	public static void main (String[] args) {
	int numero;
	for (numero=1; numero<100; numero++) {
		if (numero%3==0) {
			System.out.println(numero);
		}
	}
}
	 *********************
	 ** terceira questao**
	 *********************
	 
 	public static void main (String[] args) {
	int fat;
	fat=1;
	for (int n=1; n<=10; n++) {
		fat=fat*n;
		System.out.println(fat);
	}
}
	 ******************
	 **quinta questao**
	 ******************
	
	public static void main (String[] args) {
		Scanner input= new Scanner(System.in); 
		System.out.println("x=?");
		String aux= input.nextLine(); 			 // Entrada de dados
		input.close();				 			// Fechando o Scanner
		int x=Integer.parseInt(aux);			// Transformando o dado tipo String em Int, possibilitando operaçoes
		if (x=1) {
			System.out.println(x);
			}
		while (x!=1) {
			if (x%2==0) {
				x=x/2;
				System.out.print(x);
			}
			else {
				x=(3*x)+1;
				System.out.print(x);
			}
			if (x!=1) {
				System.out.print("->");
			}
		}
	} 
	 ******************
	 **quarta questao**
	 ******************
	 
	public static void main (String[] args) {
		Scanner input= new Scanner(System.in);
		System.out.println("n=?");
		String aux=input.nextLine();					// Entrada de dados
		input.close();									// Fechando Scanner
		int n=Integer.parseInt(aux);  					// Transformando o dado tipo String em Int, possibilitando operaçoes
		for (int i=1; i<=n; i++) {
			for (int j=1; j<=i; j++) {
				System.out.print(i*j +" ");}
			System.out.print("\n"); }
				

			} 
	 ************************
	 **sexta/setima questao**
	 ************************
	
	public static void main (String[] args) {
		int gastosJaneiro=15000;
		int gastosFevereiro=23000;
		int gastosMarco=17000;
		int gastosTrimestre= gastosJaneiro+gastosFevereiro+gastosMarco;
		System.out.println(gastosTrimestre);	
		int mediaMensal=gastosTrimestre/3;
		System.out.println("Media Mensal:" +mediaMensal);
		} 
	
	 ***********************
	 **oitava/nona questao**
	 ***********************
		
	public static void main(String[] args) {
		for (int i=0;i<=100;i++) {
			System.out.println(+Exercicios.fibonacci(i) +"\t");
		
		}
	}
				//metodo para retornar o elemento da sequencia
	
	static int fibonacci (int n) { 				
		if (n<2) {
			return n;
		}
		else {
			return fibonacci(n-1) + fibonacci (n-2);
		} */
		
		
		
	}
