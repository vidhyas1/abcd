#include"funcheader.h"
int fatorial(int n){
if(n!=1){
return(n*factorial(n-1));
}
else return 1;
}
