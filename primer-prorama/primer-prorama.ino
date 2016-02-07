/***********************************************************
**                                                        **
**                Descripcio programa                     **
**                                                        **
***********************************************************/


//*****  Includes   ****************************************



//*****  Variables  ****************************************
int ledpin = 13;
//*****  Setup  ********************************************

void setup() {
  // seleciona pin numero 13  de la sortida
  pinMode(ledpin, OUTPUT);

}

//*****  Loop     *******************************************
void loop() {

  //activa pin numero 13 durant 1 segon
  digitalWrite(ledpin, HIGH);
  delay(1000);

  //desactivar pin numero 13 duranr 1 segon
  digitalWrite(ledpin, LOW);
  delay(1000);

}
