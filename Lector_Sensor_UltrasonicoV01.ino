#define Trigger 7 //Trigger en el pin 7
#define Echo 6 //Echo en el pin 6
void setup(){
  Serial.begin (9600);
  pinMode (Trigger, OUTPUT); //definimos el pin trigger como salida
  pinMode (Echo, INPUT); //definimos el pin echo como entrada
  digitalWrite (Trigger, LOW); //Inicializamos el pin con
}
void loop (){
  long t; //timepo que demora en llegar el eco
  long d; //distancia en centimetros
  
  digitalWrite (Trigger, HIGH); 
  delayMicroseconds (10); 
  digitalWrite (Trigger, LOW);
  
  t= pulseIn (Echo, HIGH);
  d= t/59; 
  Serial.print ("Distancia: ");
  Serial.print (d); 
  Serial.println();
  delay (100);
}
