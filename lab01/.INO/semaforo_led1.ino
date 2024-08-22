int rouge_voiture =13;
int orange_voiture =12;
int vert_voiture =11;
int rouge_pieton =10;
int vert_pieton =9;
int bouton =8;

void setup() {

  pinMode(rouge_voiture,OUTPUT); 
  pinMode(orange_voiture,OUTPUT);  
  pinMode(vert_voiture,OUTPUT);  
  pinMode(rouge_pieton,OUTPUT);  
  pinMode(vert_pieton,OUTPUT);

  
  pinMode(bouton,INPUT);
  
 
  digitalWrite(rouge_pieton,LOW);
  digitalWrite(vert_voiture,LOW);
  digitalWrite(orange_voiture,LOW);
  digitalWrite(rouge_voiture,LOW);
  digitalWrite(vert_pieton,LOW);
}

void loop() {
  
  digitalWrite(vert_voiture,HIGH);
  digitalWrite(rouge_pieton,HIGH);
  
  if(digitalRead(bouton)==HIGH)               
  {
    delay(50);
    digitalWrite(orange_voiture,HIGH);  
    digitalWrite(vert_voiture,LOW);
    delay(2000);
    digitalWrite(rouge_voiture,HIGH);     
    digitalWrite(orange_voiture,LOW);
    delay(500);
    digitalWrite(vert_pieton,HIGH);       
    digitalWrite(rouge_pieton,LOW);
    delay(3000);
    digitalWrite(rouge_pieton,HIGH);      
    digitalWrite(vert_pieton,LOW);
    delay(50);
    digitalWrite(rouge_voiture,LOW);      
    digitalWrite(vert_voiture,HIGH);
  }
  delay(50);
}