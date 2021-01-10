#include <string>
#include <iostream>

class RGBToHex
{
  public:
  static std::string decToHex(int dec_num)
  {
    int r;
    std::string hexdec_num="";
    char hex[]={'0','1','2','3','4','5','6','7','8','9','A','B','C','D','E','F'};
		
      while(dec_num>=0)
      {
        r = dec_num % 16;
        hexdec_num = hex[r] + hexdec_num;
        dec_num = dec_num/16;

        if (dec_num == 0){
          hexdec_num = "0" + hexdec_num;
          break;
        }
      }

      
    return hexdec_num; 
  }
  
  static std::string rgb(int r, int g, int b){
    
    return decToHex(r) + decToHex(g) + decToHex(b);
  }
};

int main(){
  std::cout << RGBToHex::rgb(0, 0, 0) + "\n" + "\n";
  std::cout << RGBToHex::rgb(1, 2, 3) + "\n" + "\n";
  std::cout << RGBToHex::rgb(255, 255, 255) + "\n" + "\n";
  return 0;
}