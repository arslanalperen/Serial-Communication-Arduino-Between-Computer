String dataReceived;
const char dataTransmitted [] = "Tamam";

void setup(){
  Serial.begin(115200);
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
