/* chuong trinh do do am dat voi cam bien
 *  author: nguyen thanh bao
 *  email: thanhbao0390@gmail.com
 *  
 *  board: 
 *    arduino
 *  cach noi chan:
 *    AO noi voi A1, DO noi voi chan so 4, 
 *    GND noi chan nguon am, VCC noi chan nguon duong
 *    
 *    
 */

// dung chan A1 tren broad de doc tin hieu analog
#define Analog 1

// dung chan so 4 de doc tin hieu digital
#define Digital 4

// dung chan 12 de dieu khien led
#define Led 12

int valueAnalog, valueDigital;

void setup() {
  // thiet lap che do truyen du lieu len man hinh
  Serial.begin(9600);
  
  // setting chan so 4 la INPUT
  pinMode(Digital, INPUT);

  // setting chan so 12 la output
  pinMode(Led, OUTPUT);

}

void loop() {
  // lay gia tri tu analog va digital
  valueAnalog = analogRead(Analog);
  valueDigital = digitalRead(Digital);
  
  // in ra man hinh
  Serial.println("Value Analog:" + valueAnalog);
  Serial.println("Value Digital:" + valueDigital);

  delay(1000); 

  if(valueAnalog > 500) {
     // bat led sang
     digitalWrite(Led, HIGH);
     delay(1000);
  } else {
    // tat led
    digitalWrite(Led, LOW);
    delay(1000);
  }

}
