
void setup(){
 
   pinMode (4, OUTPUT);
   pinMode (2, INPUT);
   Serial.begin(9600);
}
void loop() {
 
   int hasil = digitalRead(2);
   if (hasil == LOW) //buzzer on
   {
     Serial.println("Hambatan Terdeteksi");
     digitalWrite(4, HIGH);
   }
   if (hasil == HIGH ) //buzzer off
   {
     Serial.println ("Tidak Ada Hambatan");
     digitalWrite (4, LOW);
   }
   delay(200);
}
