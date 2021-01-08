class DigPow
{
public:
  static int digPow(int n, int p){
    int sum = 0;
    int k = 1;
    int nTmp = n;
    
    while (nTmp > 0){
      sum += pow( (nTmp % 10), p );
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
  
  static int pow(int n, int p){
    int res = n;
    for (int i = 0; i < p; i++){
      res *= res;
    }
    return res;
  }
};
