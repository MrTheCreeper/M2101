public class debordement_java{

	public static void main(String[] args){
		System.out.println(Debordement(1000));
		System.out.println(Debordement(1000000));
	}

	public static int Debordement(int n){
		if(n<=0){
			return 0;
		}else{
			return (1+Debordement(n-1));
		}
	}


}
