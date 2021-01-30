
extern int x;  // link the global variable from the another main file.c
 
 int func(void){
	 
	 x=150; //reinitialize the global variable
	 
	 return x; // returning the value of x
 }