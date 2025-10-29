#define IR_PIN 13
int RED_LED = 12;
int GREEN_LED =8;
int reset_BUTTON = 7;

int counter = 0;

void setup() {
  // put your setup code here, to run once:
pinMode (IR_PIN,INPUT);
pinMode (RED_LED,OUTPUT);
pinMode (GREEN_LED,OUTPUT);
pinMode (reset_BUTTON,INPUT_PULLUP);
Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
int BUTTON_State = digitalRead(reset_BUTTON);
int IR_State = digitalRead(IR_PIN);
if (IR_State ==LOW)
{
 Serial.println("object_detected");
 Serial.println(counter);
  counter++;
  delay(800);
 if (counter<10){
 digitalWrite(GREEN_LED,HIGH);
  digitalWrite(RED_LED,LOW);
 }
else{
  digitalWrite(GREEN_LED,LOW);
  digitalWrite(RED_LED,HIGH);
   Serial.println(counter);
}
}
else
{
   Serial.println("NO_Object"); 
   
   Serial.println("---");
    delay(500);
}

if(digitalRead(reset_BUTTON) == LOW){
counter =0;
 digitalWrite(RED_LED,LOW);
  digitalWrite(GREEN_LED,LOW);
Serial.println("Counter reset to 0");
delay(200);
}
}