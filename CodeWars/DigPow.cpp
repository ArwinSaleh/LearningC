#include <iostream>
using namespace std;

int reverseNumber(int n)  
{  
int reverse=0, rem;    
  while(n!=0)    
  {    
     rem=n%10;      
     reverse=reverse*10+rem;    
     n/=10;    
  }    
return reverse;  
}  

static int pow(int n, int p){
  int res = n;
  for (int i = 0; i < p; i++){
    res *= res;
  }
  return res;
}

static int digPow(int n, int p){
  int sum = 0;
  int k = 1;
  int nTmp = n;
  
  while (nTmp > 0){
    sum += pow( (reverseNumber(nTmp) % 10), p );
    p += 1;
    nTmp /= 10;
  }
  while ( (k * n) < sum){
    if ( (k * n) == sum ){
      return k;
    }
    k += 1;
  }
  
  return -1;
}

int main(){
  cout << digPow(89, 1);
  return 0;
}