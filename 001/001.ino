/***************************************************************
**                                                            **
**                          Titol:                            **
**                002 Cruïlla de semàfors                     **
**                                                            **
**   Nom: mohamed oufli                     DATA: 17/01/2020  **
****************************************************************/
//************************ INCLUDE ******************************
 
 
 
//************************ VARIABLES ****************************
unsigned int temps=1000 ; 
const int v1=7;
const int tar1=8;
const int ver1=9;
const int v2=10;
const int tar2=11;
const int ver2=12;



//************************ SETUP ********************************

void setup(){                //configura el final de salida
  pinMode(v1,OUTPUT);
 pinMode (tar1,OUTPUT);
 pinMode (ver1,OUTPUT);
  pinMode (v2,OUTPUT);
 pinMode (tar2,OUTPUT);
 pinMode (ver2,OUTPUT); 
  
}
//*************************** LOOP ******************************
void  loop() {                //inicia el bucle del programa
 digitalWrite(v1,HIGH);
 digitalWrite(tar1,LOW);
 digitalWrite(ver1,LOW);
 digitalWrite(v2,HIGH);
 digitalWrite(tar2,LOW);
 digitalWrite(ver2,LOW);
 delay (temps);
  digitalWrite(v1,HIGH);
 digitalWrite(tar1,LOW);
 digitalWrite(ver1,LOW);
 digitalWrite(v2,LOW);
 digitalWrite(tar2,LOW);
 digitalWrite(ver2,HIGH);
 delay (4*temps);
  digitalWrite(v1,HIGH);
 digitalWrite(tar1,LOW);
 digitalWrite(ver1,LOW);
 digitalWrite(v2,LOW);
 digitalWrite(tar2,HIGH);
 digitalWrite(ver2,LOW);
 delay (temps);
 digitalWrite(v1,HIGH);
 digitalWrite(tar1,LOW);
 digitalWrite(ver1,LOW);
 digitalWrite(v2,HIGH);
 digitalWrite(tar2,LOW);
 digitalWrite(ver2,LOW);
 delay (temps);
  digitalWrite(v1,LOW);
 digitalWrite(tar1,LOW);
 digitalWrite(ver1,HIGH);
 digitalWrite(v2,HIGH);
 digitalWrite(tar2,LOW);
 digitalWrite(ver2,LOW);
 delay (4*temps);
  digitalWrite(v1,LOW);
 digitalWrite(tar1,HIGH);
 digitalWrite(ver1,LOW);
 digitalWrite(v2,HIGH);
 digitalWrite(tar2,LOW);
 digitalWrite(ver2,LOW);
 delay (temps);
  digitalWrite(v1,HIGH);
 digitalWrite(tar1,LOW);
 digitalWrite(ver1,LOW);
 digitalWrite(v2,HIGH);
 digitalWrite(tar2,LOW);
 digitalWrite(ver2,LOW);
 delay (temps);
}

//************************* FUNCIONS ****************************  
