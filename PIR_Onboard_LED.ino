int PIR = 2; // The PIR is conencted to pin 2
int LED = 13; //The LED is connected to pin 13

void setup() {
pinMode(LED, OUTPUT);
pinMode(PIR, INPUT);
}


void loop() {

//  digitalWrite(13,LOW);
digitalRead(PIR);

if ( digitalRead(PIR) == HIGH)
{
digitalWrite(LED, HIGH);   // turn the LED on (HIGH is the voltage level)
delay(5000);              // wait for a second
digitalWrite(LED, LOW);    // turn the LED off by making the voltage LOW
delay(5000);
}

else {
digitalWrite(LED, HIGH);   // turn the LED on (HIGH is the voltage level)
delay(250);              // wait for a second
digitalWrite(LED, LOW);    // turn the LED off by making the voltage LOW
delay(250);
}
}
