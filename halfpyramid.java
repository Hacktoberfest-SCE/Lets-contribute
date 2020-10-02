 public static void printStars(int n) 
	    { 
	        int i, j;
	     for(i=0; i<n; i++) 
	        { 
	     
	            for(j=0; j<=i; j++) 
	            { 
	                // printing stars 
	                System.out.print("* "); 
	            } 
	  
	            // ending line after each row 
	            System.out.println(); 
	        } 
	   } 
	    public static void main(String args[]) 
	    { 
	        int n = 6; 
	        printStars(n); 
	    } 
	} 
