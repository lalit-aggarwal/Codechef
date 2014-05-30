import java.io.BufferedReader;
import java.io.FileInputStream;
import java.io.InputStreamReader;
import java.math.BigInteger;


public class GoogleCodeJamBullsEye {
	public static void main(String args[]) throws Exception{
		BufferedReader br = new BufferedReader(new InputStreamReader(
				new FileInputStream("/Users/ashwinjain/Desktop/bull_in_large.txt")));
		int cases = Integer.parseInt(br.readLine());
		
		for(int xx=0;xx<cases;xx++){
			String temp[] = br.readLine().split(" ");
			BigInteger t = new BigInteger(temp[1]);
			BigInteger r = new BigInteger(temp[0]);
			
			BigInteger n = calc(r,t);
			BigInteger a = n.add(BigInteger.ONE);
			BigInteger n2 = a.multiply(a.multiply(new BigInteger("2")).add(r.multiply(new BigInteger("2"))).subtract(BigInteger.ONE));
			if(t.compareTo(n2)>=0)
				System.out.printf("Case #%d: %s\n",(xx+1),a);
			else
				System.out.printf("Case #%d: %s\n",(xx+1),n);
			}
	}
	
	public static BigInteger calc(BigInteger r, BigInteger t){
		BigInteger x = r.multiply(new BigInteger("2")).subtract(BigInteger.ONE);
		
		BigInteger q = x.multiply(x).add(t.multiply(new BigInteger("8")));
		BigInteger num = bigIntSqRootFloor(q).subtract(x);
		return num.divide(new BigInteger("4"));
	}
	
	public static BigInteger bigIntSqRootFloor(BigInteger x)
	        throws IllegalArgumentException {
	    if (x.compareTo(BigInteger.ZERO) < 0) {
	        throw new IllegalArgumentException("Negative argument.");
	    }
	    // square roots of 0 and 1 are trivial and
	    // y == 0 will cause a divide-by-zero exception
	    if (x == BigInteger.ZERO || x == BigInteger.ONE) {
	        return x;
	    } // end if
	    BigInteger two = BigInteger.valueOf(2L);
	    BigInteger y;
	    // starting with y = x / 2 avoids magnitude issues with x squared
	    for (y = x.divide(two);
	            y.compareTo(x.divide(y)) > 0;
	            y = ((x.divide(y)).add(y)).divide(two));
	    return y;
	}
}
