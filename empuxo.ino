
// 
// Exemplo retirado do livro Arduino & Ensino de Física, do Oséas Mourão
// Link: http://www1.fisica.org.br/mnpef/sites/default/files/produto_oseias.pdf
//
// Aplicação de princípio físico de empuxo com ARDUINO
// Exemplo prático de percepção do ambiente
//
//

int ledPin = 2; 
int inPinUM = 3;          //nivel UM inicial 0cm  | volume deslocado 0 
int inPinDOIS = 4;         //nivel dois    0,5cm  | volume deslocado ~33 ml 
int inPinTRES = 5;         //nivel tres    1,0cm  | volume deslocado ~66 ml
int inPinQUATRO = 6;      //nivel quatro   1,5cm  | volume deslocado ~100 ml 
int inPinCINCO = 7;        //nivel cinco   2,0cm  | volume deslocado ~133 ml 
int inPinSEIS = 8;         //nivel seis    2,5cm  | volume deslocado ~167 ml
int inPinSETE = 9;         //nivel sete    3,0cm  | volume deslocado ~200 ml 
int valUM = 0; 
int valDOIS = 0; 
int valTRES = 0; 
int valQUATRO = 0; 
int valCINCO = 0; 
int valSEIS = 0; 
int valSETE = 0; 
float empuxo;

void setup() {
  Serial.begin(9600);
  Serial.println("....................................................."); 
  
  delay(2000);//Pausa de 2 segundos 
  Serial.println(".....................................................");
  Serial.println("HIDROSTATICA: EMPUXO"); 
  Serial.println("....................................................."); 
  delay(2000); //Pausa de 2 segundos 
  Serial.println("....................................................."); 
  Serial.println("Aferição do volume deslocado e o EMPUXO"); 
  Serial.println(".....................................................");

  delay(1000); //Pausa de 1 segundos 
  Serial.println("::INICIE O EXPERIMENTO::"); 
  Serial.println("....................................................."); 
  delay(1000); //Pausa de 1 segundos      
  
  pinMode (ledPin, OUTPUT); 
  pinMode (inPinUM, INPUT); 
  pinMode (inPinDOIS, INPUT); 
  pinMode (inPinTRES, INPUT); 
  pinMode (inPinQUATRO, INPUT); 
  pinMode (inPinCINCO, INPUT); 
  pinMode (inPinSEIS, INPUT); 
  pinMode (inPinSETE, INPUT); }   
  

void loop() {  
   // NIVEL  UM 0 ml 
valUM = digitalRead(inPinUM);

if (valUM == HIGH){
  digitalWrite(ledPin, LOW);   
  Serial.println("Atencao liquido Abaixo do Nivel complete o Recipiente!");     
  } else {
    digitalWrite(ledPin, HIGH);   
    Serial.println(".....................................................");     
    Serial.println("Tudo Pronto! Abandone Um objeto na superficie do Liquido.");   
    Serial.println(".....................................................");       
  }  

// NIVEL DOIS 33,3 ml
valDOIS = digitalRead(inPinDOIS);  
if (valDOIS == HIGH){
  Serial.println(".");
} else {
  Serial.println(".....................................................");     
  Serial.print("ULTIMO VOLUME DETECTADO =");     
  Serial.println(" 33 mililitros");     
  Serial.print("EMPUXO =");     
  Serial.println(" 0,33 newtons");     
  Serial.println(".....................................................");       
  }

// NIVEL  TRES 66,7 ml 
valTRES = digitalRead(inPinTRES);  
if (valTRES == HIGH){
  Serial.println(".");
     
} else { 
  Serial.println(".....................................................");     
  Serial.print("ULTIMO VOLUME DETECTADO =");     
  Serial.println(" 66,7 mililitros");     
  Serial.print("EMPUXO =");     
  Serial.println(" 0,65 newtons");  
  Serial.println(".....................................................");       
  }  
      
// NIVEL QUATRO 100 ml 
valQUATRO = digitalRead(inPinQUATRO);  
if (valQUATRO == HIGH){     
  Serial.println(".");   
} else {
  Serial.println(".....................................................");        
  Serial.print("ULTIMO VOLUME DETECTADO =");     
  Serial.println(" 100 mililitros");     
  Serial.print("EMPUXO =");     
  Serial.println(" 0,98 newtons");    
  Serial.println(".....................................................");        
  }      
    
// NIVEL CINCO 133 ml 
valCINCO = digitalRead(inPinCINCO);  
if (valCINCO == HIGH){ 
  Serial.println(".");   
    } else {
      Serial.println(".....................................................");        
      Serial.print("ULTIMO VOLUME DETECTADO =");     
      Serial.println(" 133,3 mililitros");     
      Serial.print("EMPUXO =");     
      Serial.println(" 1,3 newtons");    
      Serial.println(".....................................................");                
    }




// NIVEL CINCO 167 ml 
valSEIS = digitalRead(inPinSEIS);  
if (valSEIS == HIGH){ 
  Serial.println(".");   
    } else {
      Serial.println(".....................................................");        
      Serial.print("ULTIMO VOLUME DETECTADO =");     
      Serial.println(" 167 mililitros");     
      Serial.print("EMPUXO =");     
      Serial.println(" 1,67 newtons");    
      Serial.println(".....................................................");                
    }

// NIVEL CINCO 200 ml 
valSETE = digitalRead(inPinSETE);  
if (valSETE == HIGH){ 
  Serial.println(".");   
    } else {
      Serial.println(".....................................................");        
      Serial.print("ULTIMO VOLUME DETECTADO =");     
      Serial.println(" 200 mililitros");     
      Serial.print("EMPUXO =");     
      Serial.println(" 1,9 newtons");    
      Serial.println(".....................................................");                
    }

delay(3000); //Pausa de 3 segundos
Serial.flush();
      

}
