int main(){
void setup(){
  Serial.begin(9600);
  pinMode(2, INPUT);
  pinMode(3, INPUT);
  pinMode(4, INPUT);
  pinMode(5, INPUT);
  pinMode(6, OUTPUT);
  pinMode(7, OUTPUT);
}

void loop(){
  
  if(digitalRead(2) == LOW || digitalRead(3) == LOW){
    digitalWrite(6, !LOW);
    digitalWrite(7, !LOW);  
  }
  else{
    digitalWrite(6, !HIGH);
    digitalWrite(7, !HIGH);    
  }
  if(digitalRead(4) == LOW){
    digitalWrite(7, !LOW);
  }
  else{
    digitalWrite(6, !HIGH);
  }
  
  if(digitalRead(5) == LOW){
    digitalWrite(6, !LOW);
  }
  else{
    digitalWrite(7, !HIGH);
  }
}

  while(1){

  }

  return 0;
}