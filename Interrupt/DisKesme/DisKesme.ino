// Dış Kesme
int buzzer = 7;

void setup()
{
  pinMode(buzzer, OUTPUT);
  attachInterrupt(0, buzzeryak, RISING);
  /* 0 dış kesmesi ayarlandı. 
  Yani Arduino Uno için dugme 2. pine bağlanmalıdır */
  /*pindeki gerilim
  0’dan 5 Volta çıktığında kesmeye girer.*/
  Serial.begin(9600);
}

void loop()
{
  delay(100);
}
void buzzeryak()
{
  /* Hareket algılandığında çalışacak fonksiyon */
  digitalWrite(buzzer, HIGH);
  attachInterrupt(0, buzzersondur, FALLING);
  /*pindeki gerilim
  5’ten 0 Volta düştüğünde kesmeye girer.*/
}
 
void buzzersondur()
{
  /* Hareket algılanmadığında çalışacak fonksiyon */
  digitalWrite(buzzer, LOW);
  attachInterrupt(0, buzzeryak, RISING);
  /*pindeki gerilim
  0’dan 5 Volta çıktığında kesmeye girer.*/
}
