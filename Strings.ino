int redled=13;
int blueled=12;
int redledOnTime=1000;
int redledOffTime=500;
int blueledOnTime=1000;
int blueledOffTime=500;
int numredblink=20;
int numblueblink=20;
String redmessege="The red led is blinking";
String bluemessege="The blue led is blinking";

void setup() {
  Serial.begin(9600);
  String wm1="welcome to";
  String wm2="my program";
  String wm3;
  wm3=wm1+wm2;      //concatanating wm1 and wm2 into wm3
  Serial.println(wm3);
  pinMode(redled,OUTPUT);
  pinMode(blueled,OUTPUT);
  

}

void loop() {
  Serial.println(redmessege);
for(int i=1; i<=numredblink; i=i+1){
  Serial.println("   your blink on= ");
  Serial.println(i);
  digitalWrite(redled,HIGH);
  delay(redledOnTime);
  digitalWrite(redled,LOW);
  delay(redledOffTime);
  }
  
Serial.print("");

Serial.println(bluemessege);
for(int i=1; i<=numblueblink; i=i+1){
  Serial.println("   yourblink is on= ");
  Serial.println(i);
  digitalWrite(blueled,HIGH);
  delay(blueledOnTime);
  digitalWrite(blueled,LOW);
  delay(blueledOffTime);
  }
Serial.println("");  
}
