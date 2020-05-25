



//hola ,me siento bien, quiero salir,quiero ir a la escuela, //
// quiero ir al teleton, quiero ver televidion, quiero bañarme, quiero vestirme, quiero peinarme, quiero ir al baño, quiero descansar//
//NO, me duele la panza, estoy aburrida, me duele la cabeza, estoy sucia, estoy triste, tengo comezon en las manos//
//quiuero dibujar, quiero jugar, quiero oir musica, estoy llena, quiero sentarme, me duelen los pies, los quiero mucho//

int hola=A0;
int luzA0=22;
int Me_siento_bien=A1;
int luzA1=24;
int quiero_salir=A2;
int luzA2=26;
int quiero_ir_a_la_escuela=A3;
int luzA3=28;

int teleton=A4;
int luzA4=30;
int television=A5;
int luzA5=32;
int banar=A6;
int luzA6=34;
int cambiar=A7;
int luzA7=36;
int peinar=A8;
int luzA8=38;
int wc=A9;
int luzA9=40;
int acostar=A10;
int luzA10=42;

int no=A11;
int luzA11=44;
int dolor_estomago=A12;
int luzA12=46;
int cansada=A13;
int luzA13=48;
int me_siento_mal=A14;
int luzA14=2;
int sucia=A15;
int luzA15=3;
int aburrida=27;
int luz27=4;
int comezon=29;
int luz29=5;

int dibujar=31;
int luz31=14;
int jugar=33;
int luz33=7;
int musica=35;
int luz35=13;
int llena=37;
int luz37=9;
int sentar=39;
int luz39=10;
int zapatos=41;
int luz41=11;
int quiero=43;
int luz43=12;


#include <SoftwareSerial.h>

#include <DFRobotDFPlayerMini.h>

DFRobotDFPlayerMini myMP3;

void printDetail(uint8_t type, int value);


SoftwareSerial mySerial ( 51 , 50 ) ; // RX, TX 


void setup() {
  
  Serial.begin(9600);
    
  mySerial.begin(9600);
  pinMode(A0,INPUT);
  pinMode(A1,INPUT);
  pinMode(A2,INPUT);
  pinMode(A3,INPUT);
  pinMode(22, OUTPUT);
  pinMode(24, OUTPUT);
  pinMode(26, OUTPUT);
  pinMode(28, OUTPUT);


  pinMode(A4,INPUT);
  pinMode(A5,INPUT);
  pinMode(A6,INPUT);
  pinMode(A7,INPUT);
  pinMode(A8,INPUT);
  pinMode(A9,INPUT);
  pinMode(A10,INPUT);
  pinMode(30, OUTPUT);
  pinMode(32, OUTPUT);
  pinMode(34, OUTPUT);
  pinMode(36, OUTPUT);
  pinMode(38, OUTPUT);
  pinMode(40, OUTPUT);
  pinMode(42, OUTPUT);

   pinMode(A11,INPUT);
  pinMode(A12,INPUT);
  pinMode(A13,INPUT);
  pinMode(A14,INPUT);
  pinMode(A15,INPUT);
  pinMode(27,INPUT);
  pinMode(29,INPUT);
  
  pinMode(44, OUTPUT);
  pinMode(46, OUTPUT);
  pinMode(48, OUTPUT);
  pinMode(2, OUTPUT);
  pinMode(3, OUTPUT);
  pinMode(4, OUTPUT);
  pinMode(5, OUTPUT);

  pinMode(31,INPUT);
  pinMode(33,INPUT);
  pinMode(35,INPUT);
  pinMode(37,INPUT);
  pinMode(39,INPUT);
  pinMode(41,INPUT);
  pinMode(43,INPUT);

  pinMode(7, OUTPUT);
  pinMode(13, OUTPUT);
  pinMode(9, OUTPUT);
  pinMode(10, OUTPUT);
  pinMode(11, OUTPUT);
  pinMode(12, OUTPUT);
  pinMode(14, OUTPUT);

  Serial.println();
  Serial.println(F("DFRobot DFPlayer Mini Demo"));
  Serial.println(F("Initializing DFPlayer ... (May take 3~5 seconds)"));
  
  if (!myMP3.begin(mySerial)) {  //Use softwareSerial to communicate with mp3.
    Serial.println(F("Unable to begin:"));
    Serial.println(F("1.Please recheck the connection!"));
    Serial.println(F("2.Please insert the SD card!"));
    while(true){
      delay(0); // Code to compatible with ESP8266 watch dog.
    }
  }
  Serial.println(F("DFPlayer Mini online."));
  
  myMP3.volume(30);  //Set volume value. From 0 to 30
  myMP3.play(1);  //Play the first mp3
  delay(3000);
}
  



void loop() {
 
  
  int valor=digitalRead(A0);
  int valor1=digitalRead(A1);
  int valor2=digitalRead(A2);
  int valor3=digitalRead(A3);
  
  int valor4=digitalRead(A4);
  int valor5=digitalRead(A5);
  int valor6=digitalRead(A6);
  int valor7=digitalRead(A7);
  int valor8=digitalRead(A8);
  int valor9=digitalRead(A9);
  int valor10=digitalRead(A10);

   int valor11=digitalRead(A11);
  int valor12=digitalRead(A12);
  int valor13=digitalRead(A13);
  int valor14=digitalRead(A14);
  int valor15=digitalRead(A15);
  int valor16=digitalRead(27);
  int valor17=digitalRead(29);

   int valor18=digitalRead(31);
  int valor19=digitalRead(33);
  int valor20=digitalRead(35);
  int valor21=digitalRead(37);
  int valor22=digitalRead(39);
  int valor23=digitalRead(41);
  int valor24=digitalRead(43);

  
  if(valor==1){
    Serial.print("hola");
    digitalWrite(28, HIGH);
    myMP3.play(2);
    
    digitalWrite(26, LOW);
    digitalWrite(24, LOW);
    digitalWrite(22, LOW);
    
    digitalWrite(30, LOW);
    digitalWrite(32, LOW);
    digitalWrite(34, LOW);
    digitalWrite(36, LOW);
    digitalWrite(38, LOW);
    digitalWrite(40, LOW);
    digitalWrite(42, LOW);

    digitalWrite(44, LOW);
    digitalWrite(46, LOW);
    digitalWrite(48, LOW);
    digitalWrite(2, LOW);
    digitalWrite(3, LOW);
    digitalWrite(4, LOW);
    digitalWrite(5, LOW);

        digitalWrite(14, LOW);
    digitalWrite(7, LOW);
    digitalWrite(13, LOW);
    digitalWrite(9, LOW);
    digitalWrite(10, LOW);
    digitalWrite(11, LOW);
    digitalWrite(12, LOW);

    
    
    
    
 
    
  }
   
    
  
  if(valor1==1){
      Serial.print("Estoy bien");
    digitalWrite(26, HIGH);
    myMP3.play(3);

    digitalWrite(28, LOW);
    digitalWrite(24, LOW);
    digitalWrite(22, LOW);

      
    digitalWrite(30, LOW);
    digitalWrite(32, LOW);
    digitalWrite(34, LOW);
    digitalWrite(36, LOW);
    digitalWrite(38, LOW);
    digitalWrite(40, LOW);
    digitalWrite(42, LOW);

     digitalWrite(44, LOW);
    digitalWrite(46, LOW);
    digitalWrite(48, LOW);
    digitalWrite(2, LOW);
    digitalWrite(3, LOW);
    digitalWrite(4, LOW);
    digitalWrite(5, LOW);

        digitalWrite(14, LOW);
    digitalWrite(7, LOW);
    digitalWrite(13, LOW);
    digitalWrite(9, LOW);
    digitalWrite(10, LOW);
    digitalWrite(11, LOW);
    digitalWrite(12, LOW);
    
    
    
  }
 
  

  if(valor2==1){
      Serial.print("quiero salir");
    digitalWrite(24, HIGH);
    myMP3.play(4);

    digitalWrite(26, LOW);
    digitalWrite(28, LOW);
    digitalWrite(22, LOW);

      
    digitalWrite(30, LOW);
    digitalWrite(32, LOW);
    digitalWrite(34, LOW);
    digitalWrite(36, LOW);
    digitalWrite(38, LOW);
    digitalWrite(40, LOW);
    digitalWrite(42, LOW);

     digitalWrite(44, LOW);
    digitalWrite(46, LOW);
    digitalWrite(48, LOW);
    digitalWrite(2, LOW);
    digitalWrite(3, LOW);
    digitalWrite(4, LOW);
    digitalWrite(5, LOW);

        digitalWrite(14, LOW);
    digitalWrite(7, LOW);
    digitalWrite(13, LOW);
    digitalWrite(9, LOW);
    digitalWrite(10, LOW);
    digitalWrite(11, LOW);
    digitalWrite(12, LOW);
    
    
    
  }
  

  if(valor3==1){
      Serial.print("quiero ir a la escuela");
    digitalWrite(22, HIGH);
     myMP3.play(5);
     
    digitalWrite(26, LOW);
    digitalWrite(24, LOW);
    digitalWrite(28, LOW);

      
    digitalWrite(30, LOW);
    digitalWrite(32, LOW);
    digitalWrite(34, LOW);
    digitalWrite(36, LOW);
    digitalWrite(38, LOW);
    digitalWrite(40, LOW);
    digitalWrite(42, LOW);

     digitalWrite(44, LOW);
    digitalWrite(46, LOW);
    digitalWrite(48, LOW);
    digitalWrite(2, LOW);
    digitalWrite(3, LOW);
    digitalWrite(4, LOW);
    digitalWrite(5, LOW);

        digitalWrite(14, LOW);
    digitalWrite(7, LOW);
    digitalWrite(13, LOW);
    digitalWrite(9, LOW);
    digitalWrite(10, LOW);
    digitalWrite(11, LOW);
    digitalWrite(12, LOW);
    
    
  
    
  }


  if (valor4==1){
      Serial.print("quiero ir al teleton");

    digitalWrite(30,HIGH);
    myMP3.play(6);

    digitalWrite(22, LOW);
    digitalWrite(24, LOW);
    digitalWrite(26, LOW);
    digitalWrite(28, LOW);
    
    digitalWrite(32, LOW);
    digitalWrite(34, LOW);
    digitalWrite(36, LOW);
    digitalWrite(38, LOW);
    digitalWrite(40, LOW);
    digitalWrite(42, LOW);

     digitalWrite(44, LOW);
    digitalWrite(46, LOW);
    digitalWrite(48, LOW);
    digitalWrite(2, LOW);
    digitalWrite(3, LOW);
    digitalWrite(4, LOW);
    digitalWrite(5, LOW);

        digitalWrite(14, LOW);
    digitalWrite(7, LOW);
    digitalWrite(13, LOW);
    digitalWrite(9, LOW);
    digitalWrite(10, LOW);
    digitalWrite(11, LOW);
    digitalWrite(12, LOW);
    
    
    
  }
   if (valor5==1){
      Serial.print("quiero ver la tele");

    digitalWrite(32,HIGH);
    myMP3.play(7);

    digitalWrite(22, LOW);
    digitalWrite(24, LOW);
    digitalWrite(26, LOW);
    digitalWrite(28, LOW);
    
    digitalWrite(30, LOW);
    digitalWrite(34, LOW);
    digitalWrite(36, LOW);
    digitalWrite(38, LOW);
    digitalWrite(40, LOW);
    digitalWrite(42, LOW);

     digitalWrite(44, LOW);
    digitalWrite(46, LOW);
    digitalWrite(48, LOW);
    digitalWrite(2, LOW);
    digitalWrite(3, LOW);
    digitalWrite(4, LOW);
    digitalWrite(5, LOW);
    
       digitalWrite(14, LOW);
    digitalWrite(7, LOW);
    digitalWrite(13, LOW);
    digitalWrite(9, LOW);
    digitalWrite(10, LOW);
    digitalWrite(11, LOW);
    digitalWrite(12, LOW);
    
    
    
    
  }
   if (valor6==1){
      Serial.print("quiero bañarme");

    digitalWrite(34,HIGH);
    myMP3.play(8);

    digitalWrite(22, LOW);
    digitalWrite(24, LOW);
    digitalWrite(26, LOW);
    digitalWrite(28, LOW);
    
    digitalWrite(30, LOW);
    digitalWrite(32, LOW);
    digitalWrite(36, LOW);
    digitalWrite(38, LOW);
    digitalWrite(40, LOW);
    digitalWrite(42, LOW);

     digitalWrite(44, LOW);
    digitalWrite(46, LOW);
    digitalWrite(48, LOW);
    digitalWrite(2, LOW);
    digitalWrite(3, LOW);
    digitalWrite(4, LOW);
    digitalWrite(5, LOW);

        digitalWrite(14, LOW);
    digitalWrite(7, LOW);
    digitalWrite(13, LOW);
    digitalWrite(9, LOW);
    digitalWrite(10, LOW);
    digitalWrite(11, LOW);
    digitalWrite(12, LOW);
    
    
    
    
  }
  if (valor7==1){
      Serial.print("quiero cambiarme");

    digitalWrite(36,HIGH);
    myMP3.play(9);

    digitalWrite(22, LOW);
    digitalWrite(24, LOW);
    digitalWrite(26, LOW);
    digitalWrite(28, LOW);
    
    digitalWrite(30, LOW);
    digitalWrite(32, LOW);
    digitalWrite(34, LOW);
    digitalWrite(38, LOW);
    digitalWrite(40, LOW);
    digitalWrite(42, LOW);

     digitalWrite(44, LOW);
    digitalWrite(46, LOW);
    digitalWrite(48, LOW);
    digitalWrite(2, LOW);
    digitalWrite(3, LOW);
    digitalWrite(4, LOW);
    digitalWrite(5, LOW);

        digitalWrite(14, LOW);
    digitalWrite(7, LOW);
    digitalWrite(13, LOW);
    digitalWrite(9, LOW);
    digitalWrite(10, LOW);
    digitalWrite(11, LOW);
    digitalWrite(12, LOW);
    
    
    
  }
   if (valor8==1){
    Serial.print("quiero peinarme");

    digitalWrite(38,HIGH);
    myMP3.play(10);

    digitalWrite(22, LOW);
    digitalWrite(24, LOW);
    digitalWrite(26, LOW);
    digitalWrite(28, LOW);
    
    digitalWrite(30, LOW);
    digitalWrite(32, LOW);
    digitalWrite(34, LOW);
    digitalWrite(36, LOW);
    digitalWrite(40, LOW);
    digitalWrite(42, LOW);
    
    digitalWrite(44, LOW);
    digitalWrite(46, LOW);
    digitalWrite(48, LOW);
    digitalWrite(2, LOW);
    digitalWrite(3, LOW);
    digitalWrite(4, LOW);
    digitalWrite(5, LOW);

        digitalWrite(14, LOW);
    digitalWrite(7, LOW);
    digitalWrite(13, LOW);
    digitalWrite(9, LOW);
    digitalWrite(10, LOW);
    digitalWrite(11, LOW);
    digitalWrite(12, LOW);
    
    
  }
   if (valor9==1){
    Serial.print("quiero ir al baño");

    digitalWrite(40,HIGH);
    myMP3.play(11);

    digitalWrite(22, LOW);
    digitalWrite(24, LOW);
    digitalWrite(26, LOW);
    digitalWrite(28, LOW);
    
    digitalWrite(30, LOW);
    digitalWrite(32, LOW);
    digitalWrite(34, LOW);
    digitalWrite(36, LOW);
    digitalWrite(38, LOW);
    digitalWrite(42, LOW);
   

     digitalWrite(44, LOW);
    digitalWrite(46, LOW);
    digitalWrite(48, LOW);
    digitalWrite(2, LOW);
    digitalWrite(3, LOW);
    digitalWrite(4, LOW);
    digitalWrite(5, LOW);

        digitalWrite(14, LOW);
    digitalWrite(7, LOW);
    digitalWrite(13, LOW);
    digitalWrite(9, LOW);
    digitalWrite(10, LOW);
    digitalWrite(11, LOW);
    digitalWrite(12, LOW);
    
    
    
    
  }

   if (valor10==1){
    Serial.print("quiero descansar");

    digitalWrite(42,HIGH);
    myMP3.play(12);

    digitalWrite(22, LOW);
    digitalWrite(24, LOW);
    digitalWrite(26, LOW);
    digitalWrite(28, LOW);
    
    digitalWrite(30, LOW);
    digitalWrite(32, LOW);
    digitalWrite(34, LOW);
    digitalWrite(36, LOW);
    digitalWrite(38, LOW);
    digitalWrite(40, LOW);
      

     digitalWrite(44, LOW);
    digitalWrite(46, LOW);
    digitalWrite(48, LOW);
    digitalWrite(2, LOW);
    digitalWrite(3, LOW);
    digitalWrite(4, LOW);
    digitalWrite(5, LOW);

        digitalWrite(14, LOW);
    digitalWrite(7, LOW);
    digitalWrite(13, LOW);
    digitalWrite(9, LOW);
    digitalWrite(10, LOW);
    digitalWrite(11, LOW);
    digitalWrite(12, LOW);
    
    
    
    
  }


   if (valor11==1){
  Serial.print("No quiero");
    digitalWrite(44,HIGH);
    myMP3.play(13);

    digitalWrite(22, LOW);
    digitalWrite(24, LOW);
    digitalWrite(26, LOW);
    digitalWrite(28, LOW);
    
    digitalWrite(30, LOW);
    digitalWrite(32, LOW);
    digitalWrite(34, LOW);
    digitalWrite(36, LOW);
    digitalWrite(38, LOW);
    digitalWrite(40, LOW);
      digitalWrite(42, LOW);

    digitalWrite(46, LOW);
    digitalWrite(48, LOW);
    digitalWrite(2, LOW);
    digitalWrite(3, LOW);
    digitalWrite(4, LOW);
    digitalWrite(5, LOW);

        digitalWrite(14, LOW);
    digitalWrite(7, LOW);
    digitalWrite(13, LOW);
    digitalWrite(9, LOW);
    digitalWrite(10, LOW);
    digitalWrite(11, LOW);
    digitalWrite(12, LOW);
    
    
    
  }


  if (valor12==1){
    Serial.print("Me duele el estomago");

    digitalWrite(46,HIGH);
    myMP3.play(14);

    digitalWrite(22, LOW);
    digitalWrite(24, LOW);
    digitalWrite(26, LOW);
    digitalWrite(28, LOW);
    
    digitalWrite(30, LOW);
    digitalWrite(32, LOW);
    digitalWrite(34, LOW);
    digitalWrite(36, LOW);
    digitalWrite(38, LOW);
    digitalWrite(40, LOW);
      digitalWrite(42, LOW);

    digitalWrite(44, LOW);
    digitalWrite(48, LOW);
    digitalWrite(2, LOW);
    digitalWrite(3, LOW);
    digitalWrite(4, LOW);
    digitalWrite(5, LOW);


        digitalWrite(14, LOW);
    digitalWrite(7, LOW);
    digitalWrite(13, LOW);
    digitalWrite(9, LOW);
    digitalWrite(10, LOW);
    digitalWrite(11, LOW);
    digitalWrite(12, LOW);
    
    
  }


   if (valor13==1){

    Serial.print("Estoy aburrida");

    digitalWrite(48,HIGH);
    myMP3.play(15);

    digitalWrite(22, LOW);
    digitalWrite(24, LOW);
    digitalWrite(26, LOW);
    digitalWrite(28, LOW);
    
    digitalWrite(30, LOW);
    digitalWrite(32, LOW);
    digitalWrite(34, LOW);
    digitalWrite(36, LOW);
    digitalWrite(38, LOW);
    digitalWrite(40, LOW);
     digitalWrite(42, LOW);

    digitalWrite(44, LOW);
    digitalWrite(46, LOW);
    digitalWrite(2, LOW);
    digitalWrite(3, LOW);
    digitalWrite(4, LOW);
    digitalWrite(5, LOW);

        digitalWrite(14, LOW);
    digitalWrite(7, LOW);
    digitalWrite(13, LOW);
    digitalWrite(9, LOW);
    digitalWrite(10, LOW);
    digitalWrite(11, LOW);
    digitalWrite(12, LOW);
    
    
    
  }

   if (valor14==1){
    Serial.print("Me duele la cabeza");

    digitalWrite(3,HIGH);
    myMP3.play(16);

    digitalWrite(22, LOW);
    digitalWrite(24, LOW);
    digitalWrite(26, LOW);
    digitalWrite(28, LOW);
    
    digitalWrite(30, LOW);
    digitalWrite(32, LOW);
    digitalWrite(34, LOW);
    digitalWrite(36, LOW);
    digitalWrite(38, LOW);
    digitalWrite(40, LOW);
    digitalWrite(42, LOW);

    digitalWrite(44, LOW);
    digitalWrite(46, LOW);
    digitalWrite(48, LOW);
    digitalWrite(2, LOW);
    digitalWrite(4, LOW);
    digitalWrite(5, LOW);

        digitalWrite(14, LOW);
    digitalWrite(7, LOW);
    digitalWrite(13, LOW);
    digitalWrite(9, LOW);
    digitalWrite(10, LOW);
    digitalWrite(11, LOW);
    digitalWrite(12, LOW);
    
    
    
  }
   if (valor15==1){
    Serial.print("Estoy sucia");
    digitalWrite(2,HIGH);
    myMP3.play(17);

    digitalWrite(22, LOW);
    digitalWrite(24, LOW);
    digitalWrite(26, LOW);
    digitalWrite(28, LOW);
    
    digitalWrite(30, LOW);
    digitalWrite(32, LOW);
    digitalWrite(34, LOW);
    digitalWrite(36, LOW);
    digitalWrite(38, LOW);
    digitalWrite(40, LOW);
    digitalWrite(42, LOW);

    digitalWrite(44, LOW);
    digitalWrite(46, LOW);
    digitalWrite(48, LOW);
    digitalWrite(3, LOW);
    digitalWrite(4, LOW);
    digitalWrite(5, LOW);

        digitalWrite(14, LOW);
    digitalWrite(7, LOW);
    digitalWrite(13, LOW);
    digitalWrite(9, LOW);
    digitalWrite(10, LOW);
    digitalWrite(11, LOW);
    digitalWrite(12, LOW);
    
    
    
  }
  if (valor16==1){
    Serial.print("Me siento mal");
    digitalWrite(4,HIGH);
    myMP3.play(18);

    digitalWrite(22, LOW);
    digitalWrite(24, LOW);
    digitalWrite(26, LOW);
    digitalWrite(28, LOW);
    
    digitalWrite(30, LOW);
    digitalWrite(32, LOW);
    digitalWrite(34, LOW);
    digitalWrite(36, LOW);
    digitalWrite(38, LOW);
    digitalWrite(40, LOW);
    digitalWrite(42, LOW);

    digitalWrite(44, LOW);
    digitalWrite(46, LOW);
    digitalWrite(48, LOW);
    digitalWrite(2, LOW);
    digitalWrite(3, LOW);
    digitalWrite(5, LOW);

        digitalWrite(14, LOW);
    digitalWrite(7, LOW);
    digitalWrite(13, LOW);
    digitalWrite(9, LOW);
    digitalWrite(10, LOW);
    digitalWrite(11, LOW);
    digitalWrite(12, LOW);
    
    
    
  }
 if (valor17==1){
  Serial.print("Tengo comezon en la manos");
    digitalWrite(5,HIGH);
    myMP3.play(19);

    digitalWrite(22, LOW);
    digitalWrite(24, LOW);
    digitalWrite(26, LOW);
    digitalWrite(28, LOW);
    
    digitalWrite(30, LOW);
    digitalWrite(32, LOW);
    digitalWrite(34, LOW);
    digitalWrite(36, LOW);
    digitalWrite(38, LOW);
    digitalWrite(40, LOW);
   digitalWrite(42, LOW);

    digitalWrite(44, LOW);
    digitalWrite(46, LOW);
    digitalWrite(48, LOW);
    digitalWrite(2, LOW);
    digitalWrite(3, LOW);
    digitalWrite(4, LOW);
    
     digitalWrite(14, LOW);
    digitalWrite(7, LOW);
    digitalWrite(13, LOW);
    digitalWrite(9, LOW);
    digitalWrite(10, LOW);
    digitalWrite(11, LOW);
    digitalWrite(12, LOW);
    
    
 }


  if (valor18==1){
    Serial.print("quiero dibujar");

    digitalWrite(14,HIGH);
    myMP3.play(20);

    digitalWrite(22, LOW);
    digitalWrite(24, LOW);
    digitalWrite(26, LOW);
    digitalWrite(28, LOW);
    
    digitalWrite(30, LOW);
    digitalWrite(32, LOW);
    digitalWrite(34, LOW);
    digitalWrite(36, LOW);
    digitalWrite(38, LOW);
    digitalWrite(40, LOW);
   digitalWrite(42, LOW);

    digitalWrite(44, LOW);
    digitalWrite(46, LOW);
    digitalWrite(48, LOW);
    digitalWrite(2, LOW);
    digitalWrite(3, LOW);
    digitalWrite(4, LOW);
    digitalWrite(5, LOW);

     digitalWrite(7, LOW);
    digitalWrite(13, LOW);
    digitalWrite(9, LOW);
    digitalWrite(10, LOW);
    digitalWrite(11, LOW);
    digitalWrite(12, LOW);
   
    
 }
 if (valor19==1){
  Serial.print("quiero jugar");

    digitalWrite(7,HIGH);
    myMP3.play(21);

    digitalWrite(22, LOW);
    digitalWrite(24, LOW);
    digitalWrite(26, LOW);
    digitalWrite(28, LOW);
    
    digitalWrite(30, LOW);
    digitalWrite(32, LOW);
    digitalWrite(34, LOW);
    digitalWrite(36, LOW);
    digitalWrite(38, LOW);
    digitalWrite(40, LOW);
   digitalWrite(42, LOW);

    digitalWrite(44, LOW);
    digitalWrite(46, LOW);
    digitalWrite(48, LOW);
    digitalWrite(2, LOW);
    digitalWrite(3, LOW);
    digitalWrite(4, LOW);
    digitalWrite(5, LOW);

     digitalWrite(14, LOW);
    digitalWrite(13, LOW);
    digitalWrite(9, LOW);
    digitalWrite(10, LOW);
    digitalWrite(11, LOW);
    digitalWrite(12, LOW);
   
    
 }

 if (valor20==1){
    Serial.print("quiero oir musica");
    digitalWrite(13,HIGH);
    myMP3.play(22);

    digitalWrite(22, LOW);
    digitalWrite(24, LOW);
    digitalWrite(26, LOW);
    digitalWrite(28, LOW);
    
    digitalWrite(30, LOW);
    digitalWrite(32, LOW);
    digitalWrite(34, LOW);
    digitalWrite(36, LOW);
    digitalWrite(38, LOW);
    digitalWrite(40, LOW);
   digitalWrite(42, LOW);

    digitalWrite(44, LOW);
    digitalWrite(46, LOW);
    digitalWrite(48, LOW);
    digitalWrite(2, LOW);
    digitalWrite(3, LOW);
    digitalWrite(4, LOW);
    digitalWrite(5, LOW);

     digitalWrite(7, LOW);
    digitalWrite(14, LOW);
    digitalWrite(11, LOW);
    digitalWrite(10, LOW);
    digitalWrite(9, LOW);
    digitalWrite(12, LOW);
   
    
 }
 if (valor21==1){
  Serial.print("estoy llena");

    digitalWrite(9,HIGH);
    myMP3.play(23);

    digitalWrite(22, LOW);
    digitalWrite(24, LOW);
    digitalWrite(26, LOW);
    digitalWrite(28, LOW);
    
    digitalWrite(30, LOW);
    digitalWrite(32, LOW);
    digitalWrite(34, LOW);
    digitalWrite(36, LOW);
    digitalWrite(38, LOW);
    digitalWrite(40, LOW);
   digitalWrite(42, LOW);

    digitalWrite(44, LOW);
    digitalWrite(46, LOW);
    digitalWrite(48, LOW);
    digitalWrite(2, LOW);
    digitalWrite(3, LOW);
    digitalWrite(4, LOW);
    digitalWrite(5, LOW);

     digitalWrite(7, LOW);
    digitalWrite(11, LOW);
    digitalWrite(14, LOW);
    digitalWrite(10, LOW);
    digitalWrite(13, LOW);
    digitalWrite(12, LOW);
   
    
 }

  if (valor22==1){
  Serial.print("quiero sentarme");

    digitalWrite(10,HIGH);
    myMP3.play(24);

    digitalWrite(22, LOW);
    digitalWrite(24, LOW);
    digitalWrite(26, LOW);
    digitalWrite(28, LOW);
    
    digitalWrite(30, LOW);
    digitalWrite(32, LOW);
    digitalWrite(34, LOW);
    digitalWrite(36, LOW);
    digitalWrite(38, LOW);
    digitalWrite(40, LOW);
   digitalWrite(42, LOW);

    digitalWrite(44, LOW);
    digitalWrite(46, LOW);
    digitalWrite(48, LOW);
    digitalWrite(2, LOW);
    digitalWrite(3, LOW);
    digitalWrite(4, LOW);
    digitalWrite(5, LOW);

     digitalWrite(7, LOW);
    digitalWrite(14, LOW);
    digitalWrite(9, LOW);
    digitalWrite(6, LOW);
    digitalWrite(11, LOW);
    digitalWrite(12, LOW);
   
    
 }

  if (valor23==1){
    Serial.print("quitame los zapatos");

    digitalWrite(11,HIGH);
    myMP3.play(25);

    digitalWrite(22, LOW);
    digitalWrite(24, LOW);
    digitalWrite(26, LOW);
    digitalWrite(28, LOW);
    
    digitalWrite(30, LOW);
    digitalWrite(32, LOW);
    digitalWrite(34, LOW);
    digitalWrite(36, LOW);
    digitalWrite(38, LOW);
    digitalWrite(40, LOW);
   digitalWrite(42, LOW);

    digitalWrite(44, LOW);
    digitalWrite(46, LOW);
    digitalWrite(48, LOW);
    digitalWrite(2, LOW);
    digitalWrite(3, LOW);
    digitalWrite(4, LOW);
    digitalWrite(5, LOW);

     digitalWrite(7, LOW);
    digitalWrite(13, LOW);
    digitalWrite(9, LOW);
    digitalWrite(10, LOW);
    digitalWrite(14, LOW);
    digitalWrite(12, LOW);
   
    
 }

 if (valor24==1){
  Serial.print("los quiero mucho");
    digitalWrite(12,HIGH);
    myMP3.play(26);

    digitalWrite(22, LOW);
    digitalWrite(24, LOW);
    digitalWrite(26, LOW);
    digitalWrite(28, LOW);
    
    digitalWrite(30, LOW);
    digitalWrite(32, LOW);
    digitalWrite(34, LOW);
    digitalWrite(36, LOW);
    digitalWrite(38, LOW);
    digitalWrite(40, LOW);
   digitalWrite(42, LOW);

    digitalWrite(44, LOW);
    digitalWrite(46, LOW);
    digitalWrite(48, LOW);
    digitalWrite(2, LOW);
    digitalWrite(3, LOW);
    digitalWrite(4, LOW);
    digitalWrite(5, LOW);

     digitalWrite(7, LOW);
    digitalWrite(13, LOW);
    digitalWrite(9, LOW);
    digitalWrite(10, LOW);
    digitalWrite(11, LOW);
    digitalWrite(14, LOW);
   
    
 }


}
