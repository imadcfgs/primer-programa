/***********************************************************
**                                                        **
**                Descripcio programa                     **       
**                                                        **
***********************************************************/


//*****  Includes   ****************************************



//*****  Variables  ****************************************

//*****  Setup  ******************************************** 

void setup() {
  // seleciona pin numero 13  de la sortida
    pinMode(13, OUTPUT);

}

//*****  Loop     ******************************************* 
void loop() {
  
  //activa pin numero 13 durant 1 segon
 digitalWrite(13,HIGH);
 delay(1000);
 
 //desactivar pin numero 13 duranr 1 segon
 digitalWrite(13,LOW);
 delay(1000);

}
