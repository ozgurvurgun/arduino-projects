/*
  7 SEGMENT PINS
  
         A:2      
       _______
      |       |
  F:7 |       | B:3
      |_______|
      |  G:8  |
  E:6 |       | C:4
      |_______|
      
         D:5      
*/

int a=2;
int b=3;
int c=4;
int d=5;
int e=6;
int f=7;
int g=8;

int incrementButton = 10, decreaseButton = 9;
int counter = 0;

byte truth_table[10][7]
{
  {1,1,1,1,1,1,0}, //0
  {0,1,1,0,0,0,0}, //1
  {1,1,0,1,1,0,1}, //2
  {1,1,1,1,0,0,1}, //3
  {0,1,1,0,0,1,1}, //4
  {1,0,1,1,0,1,1}, //5
  {1,0,1,1,1,1,1}, //6
  {1,1,1,0,0,0,0}, //7
  {1,1,1,1,1,1,1}, //8
  {1,1,1,1,0,1,1}, //9
};


void setup() {
  for(int i=2; i<9; i++)
  {
    pinMode(i,OUTPUT);
  }
  pinMode(incrementButton, INPUT);
  pinMode(decreaseButton, INPUT);
  
}
 
void loop() {


  if(digitalRead(incrementButton) == 1)
  {
    counter++;
    delay(200);
  }

  if(digitalRead(decreaseButton) == 1)
  {
    counter--; 
    delay(200);
  }

  if(counter > 9)
  {
    counter = 0;
  }

  if(counter < 0)
  {
    counter = 9;
  }


  for(int pin=2; pin<9; pin++)
  {
    digitalWrite(pin,truth_table[counter][pin-2]);
  }
}