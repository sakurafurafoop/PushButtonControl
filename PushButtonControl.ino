//ボタンが押されている間LEDをつける

const int LED = 13; //LEDが接続されているピン
const int BUTTON = 7; //プッシュボタンが接続されているボタン

int val = 0;  //入力ボタンの状態が保存される変数val

void setup() {
  // put your setup code here, to run once:
  pinMode(LED,OUTPUT);//LEDが出力である
  pinMode(BUTTON,INPUT);//BUTTONが入力である
}

void loop() {
  // put your main code here, to run repeatedly:
  val = digitalRead(BUTTON);//入力をvalに格納
  
  //入力はHIGH（ボタンが押されている状態）か
  if(val == HIGH){
    digitalWrite(LED,HIGH);//LED ON
  }else{
    digitalWrite(LED,LOW);//LED OFF
  }
}
