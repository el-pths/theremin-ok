
public class SineGenerator {
	public static void main(String[] args) {
		int n = 512;
		double[] arr = new double [n];
		double x = 255;
		for(int i = 0; i < n; i++){
			arr[i] = 127.5*(Math.sin(x/162.48 - Math.PI/2) + 1);
			x+=2;
		}
		System.out.print("[");
		for(int i = 0; i < n - 1; i++){
			System.out.print((int)Math.floor(arr[i]) + "," + " ");
		}
		System.out.print((int) arr[n - 1] + "]");
	}
}
