#include <Adafruit_NeoPixel.h>

#define LED_PIN     7
#define NUM_LEDS    60
#define NUMPIXELS   61


#define L_START    0
#define L_END      14
#define A_START    15
#define A_END      34
#define B_START    35
#define B_END      56


Adafruit_NeoPixel pixels = Adafruit_NeoPixel(NUMPIXELS, LED_PIN, NEO_GRB + NEO_KHZ800);


void setup() {

  pixels.begin();
  pixels.setBrightness(250);
  
}



void L(uint8_t r, uint8_t g, uint8_t b){
  for (int i = L_START;i<=L_END;i++){
    
    pixels.setPixelColor(i, pixels.Color(r, g, b));
    pixels.show();    
  }
}

void A(uint8_t r, uint8_t g, uint8_t b){
  for (int i = A_START;i<=A_END;i++){
    
    pixels.setPixelColor(i, pixels.Color(r, g, b));
    pixels.show();    
  }
}

void B(uint8_t r, uint8_t g, uint8_t b){
  for (int i = B_START;i<=B_END;i++){
    
    pixels.setPixelColor(i, pixels.Color(r, g, b));
    pixels.show();    
  }
}





void fadeR(uint8_t first, uint8_t last){
  for (int i = 0; i < 255; i++)
  {
    for(int j=first;j<=last;j++){
       pixels.setPixelColor(j, pixels.Color(i, 0, i));
    } 
      
      pixels.show();
      delay(5);
  }

  
}

void fadeG(uint8_t first, uint8_t last){
  for (int i = 0; i < 255; i++)
  {
    for(int j=first;j<=last;j++){
       pixels.setPixelColor(j, pixels.Color(i, i, 0));
    } 
      
      pixels.show();
      delay(5);
  }

  
}

void fadeB(uint8_t first, uint8_t last){
  for (int i = 0; i < 255; i++)
  {
    for(int j=first;j<=last;j++){
       pixels.setPixelColor(j, pixels.Color(0, i, i));
    } 
      
      pixels.show();
      delay(5);
  }

  
}


void fade(){
  
  for (int i = 255; i > 0; i--)
  {
          // GREEN
      pixels.setPixelColor(0, pixels.Color(0, i, 0));
      pixels.setPixelColor(1, pixels.Color(0, i, 0));
      pixels.setPixelColor(2, pixels.Color(0, i, 0));
    
      pixels.setPixelColor(22, pixels.Color(0, i, 0));
      pixels.setPixelColor(23, pixels.Color(i, i, 0));
      pixels.setPixelColor(24, pixels.Color(i, 0, 0));
      pixels.setPixelColor(25, pixels.Color(0, 0, i));

            
       // BLUE
      pixels.setPixelColor(3, pixels.Color(0, 0, i));
      pixels.setPixelColor(4, pixels.Color(0, 0, i));
      pixels.setPixelColor(5, pixels.Color(0, 0, i));   
      pixels.setPixelColor(6, pixels.Color(0, 0, i));
      pixels.setPixelColor(7, pixels.Color(0, 0, i));
      
      pixels.setPixelColor(18, pixels.Color(0, 0, i));
      pixels.setPixelColor(19, pixels.Color(0, 0, i));
      pixels.setPixelColor(20, pixels.Color(0, 0, i));
      pixels.setPixelColor(21, pixels.Color(0, 0, i));



      // RED

      pixels.setPixelColor(8, pixels.Color(i, 0, 0));   
      pixels.setPixelColor(9, pixels.Color(i, 0, 0));  
      pixels.setPixelColor(10, pixels.Color(i, 0, 0));  
      pixels.setPixelColor(11, pixels.Color(i, 0, 0));  
      pixels.setPixelColor(12, pixels.Color(i, 0, 0));   
      pixels.setPixelColor(13, pixels.Color(i, 0, 0));  
      pixels.setPixelColor(14, pixels.Color(i, 0, 0));  
      
      pixels.setPixelColor(15, pixels.Color(i, 0, 0));
      pixels.setPixelColor(16, pixels.Color(i, 0, 0));
      pixels.setPixelColor(17, pixels.Color(i, 0, 0));
      
      // GREEN
      pixels.setPixelColor(26, pixels.Color(0, i, 0));
      pixels.setPixelColor(27, pixels.Color(0, i, 0));
      pixels.setPixelColor(28, pixels.Color(0, i, 0));
    
      pixels.setPixelColor(48, pixels.Color(0, i, 0));
      pixels.setPixelColor(49, pixels.Color(0, i, 0));
      pixels.setPixelColor(50, pixels.Color(0, i, 0));
      pixels.setPixelColor(51, pixels.Color(0, i, 0));
      pixels.setPixelColor(52, pixels.Color(0, i, 0));
      pixels.setPixelColor(53, pixels.Color(0, i, 0));

            
       // BLUE
      pixels.setPixelColor(29, pixels.Color(0, 0, i));
      pixels.setPixelColor(30, pixels.Color(0, 0, i));
      pixels.setPixelColor(31, pixels.Color(0, 0, i));   
      pixels.setPixelColor(32, pixels.Color(0, 0, i));
      pixels.setPixelColor(33, pixels.Color(0, 0, i));
      
      pixels.setPixelColor(44, pixels.Color(0, 0, i));
      pixels.setPixelColor(45, pixels.Color(0, 0, i));
      pixels.setPixelColor(46, pixels.Color(0, 0, i));
      pixels.setPixelColor(47, pixels.Color(0, 0, i));
      pixels.setPixelColor(54, pixels.Color(0, 0, i));
      pixels.setPixelColor(55, pixels.Color(0, 0, i));
      pixels.setPixelColor(56, pixels.Color(0, 0, i));



      // RED

      pixels.setPixelColor(34, pixels.Color(i, 0, 0));   
      pixels.setPixelColor(35, pixels.Color(i, 0, 0));  
      pixels.setPixelColor(36, pixels.Color(i, 0, 0));  
      pixels.setPixelColor(37, pixels.Color(i, 0, 0));  
      pixels.setPixelColor(38, pixels.Color(i, 0, 0));   
      pixels.setPixelColor(39, pixels.Color(i, 0, 0));  
      pixels.setPixelColor(40, pixels.Color(i, 0, 0));  
      
      pixels.setPixelColor(41, pixels.Color(i, 0, 0));
      pixels.setPixelColor(42, pixels.Color(i, 0, 0));
      pixels.setPixelColor(43, pixels.Color(i, 0, 0));
 

            
      pixels.show();
      delay(5);
  }

  for (int i = 0; i < 255; i++)
  {
      pixels.setPixelColor(0, pixels.Color(0, i, 0));
      pixels.setPixelColor(1, pixels.Color(0, i, 0));
      pixels.setPixelColor(2, pixels.Color(0, i, 0));
      
      pixels.setPixelColor(22, pixels.Color(0, i, 0));
      pixels.setPixelColor(23, pixels.Color(i, i, 0));
      pixels.setPixelColor(24, pixels.Color(i, 0, 0));
      pixels.setPixelColor(25, pixels.Color(0, 0, i));


      // BLUE
      pixels.setPixelColor(3, pixels.Color(0, 0, i));
      pixels.setPixelColor(4, pixels.Color(0, 0, i));
      pixels.setPixelColor(5, pixels.Color(0, 0, i));   
      pixels.setPixelColor(6, pixels.Color(0, 0, i));
      pixels.setPixelColor(7, pixels.Color(0, 0, i));
    
      pixels.setPixelColor(18, pixels.Color(0, 0, i));
      pixels.setPixelColor(19, pixels.Color(0, 0, i));
      pixels.setPixelColor(20, pixels.Color(0, 0, i));
      pixels.setPixelColor(21, pixels.Color(0, 0, i));



      // RED
      pixels.setPixelColor(8, pixels.Color(i, 0, 0));   
      pixels.setPixelColor(9, pixels.Color(i, 0, 0));  
      pixels.setPixelColor(10, pixels.Color(i, 0, 0));  
      pixels.setPixelColor(11, pixels.Color(i, 0, 0));  
      pixels.setPixelColor(12, pixels.Color(i, 0, 0));   
      pixels.setPixelColor(13, pixels.Color(i, 0, 0));  
      pixels.setPixelColor(14, pixels.Color(i, 0, 0));  
      
      pixels.setPixelColor(15, pixels.Color(i, 0, 0));
      pixels.setPixelColor(16, pixels.Color(i, 0, 0));
      pixels.setPixelColor(17, pixels.Color(i, 0, 0));
      

      // GREEN
      pixels.setPixelColor(26, pixels.Color(0, i, 0));
      pixels.setPixelColor(27, pixels.Color(0, i, 0));
      pixels.setPixelColor(28, pixels.Color(0, i, 0));
    
      pixels.setPixelColor(48, pixels.Color(0, i, 0));
      pixels.setPixelColor(49, pixels.Color(0, i, 0));
      pixels.setPixelColor(50, pixels.Color(0, i, 0));
      pixels.setPixelColor(51, pixels.Color(0, i, 0));
      pixels.setPixelColor(52, pixels.Color(0, i, 0));
      pixels.setPixelColor(53, pixels.Color(0, i, 0));


            
       // BLUE
      pixels.setPixelColor(29, pixels.Color(0, 0, i));
      pixels.setPixelColor(30, pixels.Color(0, 0, i));
      pixels.setPixelColor(31, pixels.Color(0, 0, i));   
      pixels.setPixelColor(32, pixels.Color(0, 0, i));
      pixels.setPixelColor(33, pixels.Color(0, 0, i));
      
      pixels.setPixelColor(44, pixels.Color(0, 0, i));
      pixels.setPixelColor(45, pixels.Color(0, 0, i));
      pixels.setPixelColor(46, pixels.Color(0, 0, i));
      pixels.setPixelColor(47, pixels.Color(0, 0, i));
      pixels.setPixelColor(54, pixels.Color(0, 0, i));
      pixels.setPixelColor(55, pixels.Color(0, 0, i));
      pixels.setPixelColor(56, pixels.Color(0, 0, i));


      // RED

      pixels.setPixelColor(34, pixels.Color(i, 0, 0));   
      pixels.setPixelColor(35, pixels.Color(i, 0, 0));  
      pixels.setPixelColor(36, pixels.Color(i, 0, 0));  
      pixels.setPixelColor(37, pixels.Color(i, 0, 0));  
      pixels.setPixelColor(38, pixels.Color(i, 0, 0));   
      pixels.setPixelColor(39, pixels.Color(i, 0, 0));  
      pixels.setPixelColor(40, pixels.Color(i, 0, 0));  
      
      pixels.setPixelColor(41, pixels.Color(i, 0, 0));
      pixels.setPixelColor(42, pixels.Color(i, 0, 0));
      pixels.setPixelColor(43, pixels.Color(i, 0, 0));

            
      
      pixels.show();
      delay(5);
  }
  
}

void forward_backward(){

  L(0, 255, 0);
  pixels.clear();
  delay(250);
  A(255, 0, 0);
  pixels.clear();
  delay(250);
  B(0, 0, 255);
  pixels.clear();
  delay(250);
  A(255, 0, 0);
  pixels.clear();
  delay(250);
  L(0, 255, 0);

}

void loop() {
    fadeR(L_START, L_END);
    fadeG(A_START, A_END);
    fadeB(B_START, B_END);
    pixels.clear();
    delay(500);
    forward_backward();
    pixels.clear();
    delay(500);
    for(int i=0;i<3;i++)
      fade();
    pixels.clear();

  
}
