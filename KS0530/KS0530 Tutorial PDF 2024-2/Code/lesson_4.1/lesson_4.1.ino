/*
  keyestudio sun_follower
  lesson 4.1
  buzzer
  http://www.keyestudio.com
*/
#define buzzer 6 //buzzer pin to D6

void setup() {
  pinMode(buzzer, OUTPUT);//set the digital pin 6 as output
}

void loop () {
  tone(buzzer, 262);  //output the sound with frequency of 262Hz
  delay(300);   //delay in 300ms
  tone(buzzer, 294);;   //output the sound with frequency of 294Hz
  delay(300);   //delay in 300ms
  tone(buzzer, 330);
  delay(300);
  tone(buzzer, 349);
  delay(300);
  tone(buzzer, 392);
  delay(300);
  tone(buzzer, 440);
  delay(300);
  tone(buzzer, 494);
  delay(300);
  tone(buzzer, 532);
  delay(300);
  noTone(buzzer);   //stop sound output
  delay(1000);
}
