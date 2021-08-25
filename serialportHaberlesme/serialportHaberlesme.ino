String dataReceived;
const char dataTransmitted [] = "Tamam";

void setup(){
  Serial.begin(9600);
}

void loop(){
  while(Serial.available()>0){
    dataReceived = Serial.readString();
    if(dataReceived == "Ok"){
      Serial.print(dataTransmitted);
    }
    else{
      Serial.print("Uygun degil");
    }
  }
}
