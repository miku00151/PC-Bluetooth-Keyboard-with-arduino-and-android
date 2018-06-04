#include<Keyboard.h>
#include<Mouse.h>
#define HC05 Serial1
char ch;
int input;
void setup() {
  // put your setup code here, to run once:

  Mouse.begin();
  Keyboard.begin();
  SerialUSB.begin(38400);
  HC05.begin(38400);


}

void loop() {
  input = HC05.read();
  Keyboard.press(input);
  Keyboard.release(input);
  input = 0 ;
  //char REV = (char)Serial1.read();
  // put your main code here, to run repeatedly:
  /*if (HC05.available()){
    SerialUSB.write(HC05.read());
  }*/
  /*if (SerialUSB.available()) {
    HC05.write(SerialUSB.read());
  }*/
  /*if(HC05.read()==11){
    
    Keyboard.press('k');
    Keyboard.release('k');
  }
  if(HC05.read()==12){
    Keyboard.press('l');
    Keyboard.release('l');
  }*/
  /*switch(HC05.read()){
    case 97:
    Keyboard.press('a');
    Keyboard.release('a');
    break;
    case 98:
    Keyboard.press('b');
    Keyboard.release('b');
    break;
    case 99:
    Keyboard.press('c');
    Keyboard.release('c');
    break;
    case 100:
    Keyboard.press('d');
    Keyboard.release('d');
    break;
    case 101:
    Keyboard.press('e');
    Keyboard.release('e');
    break;
    case 102:
    Keyboard.press('f');
    Keyboard.release('f');
    break;
    case 103:
    Keyboard.press('g');
    Keyboard.release('g');
    break;
    case 104:
    Keyboard.press('h');
    Keyboard.release('h');
    break;
    case 105:
    Keyboard.press('i');
    Keyboard.release('i');
    break;
    case 106:
    Keyboard.press('j');
    Keyboard.release('j');
    break;
    case 107:
    Keyboard.press('k');
    Keyboard.release('k');
    break;
    case 108:
    Keyboard.press('l');
    Keyboard.release('l');
    break;
    case 109:
    Keyboard.press('m');
    Keyboard.release('m');
    break;
    case 110:
    Keyboard.press('n');
    Keyboard.release('n');
    break;
    case 111:
    Keyboard.press('o');
    Keyboard.release('o');
    break;
    case 112:
    Keyboard.press('p');
    Keyboard.release('p');
    break;
    case 113:
    Keyboard.press('q');
    Keyboard.release('q');
    break;
    case 114:
    Keyboard.press('r');
    Keyboard.release('r');
    break;
    case 115:
    Keyboard.press('s');
    Keyboard.release('s');
    break;
    case 116:
    Keyboard.press('t');
    Keyboard.release('t');
    break;
    case 117:
    Keyboard.press('u');
    Keyboard.release('u');
    break;
    case 118:
    Keyboard.press('v');
    Keyboard.release('v');
    break;
    case 119:
    Keyboard.press('w');
    Keyboard.release('w');
    break;
    case 120:
    Keyboard.press('x');
    Keyboard.release('x');
    break;
    case 121:
    Keyboard.press('y');
    Keyboard.release('y');
    break;
    case 122:
    Keyboard.press('z');
    Keyboard.release('z');
    break;
    case 48:
    Keyboard.press('0');
    Keyboard.release('0');
    break;
    case 49:
    Keyboard.press('1');
    Keyboard.release('1');
    break;
  }*/

}
