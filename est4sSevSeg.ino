//first digit

const int a=11;
const int b=10;
const int c=2;
const int d=4;
const int e=5;
const int f=12;
const int g=3;

//second digit
const int aa=A0;
const int bb=13;
const int cc=6;
const int dd=7;
const int ee=8;
const int ff=9;
const int gg=A1;


int z=0;

void setup() {
  pinMode(a,OUTPUT);
  pinMode(b,OUTPUT);
  pinMode(c,OUTPUT);
  pinMode(d,OUTPUT);
  pinMode(e,OUTPUT);
  pinMode(f,OUTPUT);
  pinMode(g,OUTPUT);
  pinMode(aa,OUTPUT);
  pinMode(bb,OUTPUT);
  pinMode(cc,OUTPUT);
  pinMode(dd,OUTPUT);
  pinMode(ee,OUTPUT);
  pinMode(ff,OUTPUT);
  pinMode(gg,OUTPUT);
  
  digitalWrite(a,HIGH);
  digitalWrite(b,HIGH);
  digitalWrite(c,HIGH);
  digitalWrite(d,HIGH);
  digitalWrite(e,HIGH);
  digitalWrite(f,HIGH);
  digitalWrite(g,HIGH);
  digitalWrite(aa,HIGH);
  digitalWrite(bb,HIGH);
  digitalWrite(cc,HIGH);
  digitalWrite(dd,HIGH);
  digitalWrite(ee,HIGH);
  digitalWrite(ff,HIGH);
  digitalWrite(gg,HIGH);

}

void loop() {
  sevSegDisp(z);
  z=z+1;
  delay(1000);
}

void sevSegDisp(int input){
  int firstDig=input%10;
  int secDig=(input/10)%10;
  firstDigit(firstDig);
  secondDigit(secDig);
  }

int firstDigit(int firstDig){
  if(firstDig==0){
  digitalWrite(a,LOW);
  digitalWrite(b,LOW);
  digitalWrite(c,LOW);
  digitalWrite(d,LOW);
  digitalWrite(e,LOW);
  digitalWrite(f,LOW);
  digitalWrite(g,HIGH);
    }
  else if(firstDig==1){
  digitalWrite(a,HIGH);
  digitalWrite(b,LOW);
  digitalWrite(c,LOW);
  digitalWrite(d,HIGH);
  digitalWrite(e,HIGH);
  digitalWrite(f,HIGH);
  digitalWrite(g,HIGH);
    }
  else if(firstDig==2){
  digitalWrite(a,LOW);
  digitalWrite(b,LOW);
  digitalWrite(c,HIGH);
  digitalWrite(d,LOW);
  digitalWrite(e,LOW);
  digitalWrite(f,HIGH);
  digitalWrite(g,LOW);
    }
  else if(firstDig==3){
  digitalWrite(a,LOW);
  digitalWrite(b,LOW);
  digitalWrite(c,LOW);
  digitalWrite(d,LOW);
  digitalWrite(e,HIGH);
  digitalWrite(f,HIGH);
  digitalWrite(g,LOW);
    }
  else if(firstDig==4){
  digitalWrite(a,HIGH);
  digitalWrite(b,LOW);
  digitalWrite(c,LOW);
  digitalWrite(d,HIGH);
  digitalWrite(e,HIGH);
  digitalWrite(f,LOW);
  digitalWrite(g,LOW);
    }
  else if(firstDig==5){
  digitalWrite(a,LOW);
  digitalWrite(b,HIGH);
  digitalWrite(c,LOW);
  digitalWrite(d,LOW);
  digitalWrite(e,HIGH);
  digitalWrite(f,LOW);
  digitalWrite(g,LOW);
    }
  else if(firstDig==6){
  digitalWrite(a,LOW);
  digitalWrite(b,HIGH);
  digitalWrite(c,LOW);
  digitalWrite(d,LOW);
  digitalWrite(e,LOW);
  digitalWrite(f,LOW);
  digitalWrite(g,LOW);
    }
  else if(firstDig==7){
  digitalWrite(a,LOW);
  digitalWrite(b,LOW);
  digitalWrite(c,LOW);
  digitalWrite(d,HIGH);
  digitalWrite(e,HIGH);
  digitalWrite(f,HIGH);
  digitalWrite(g,HIGH);
    }
  else if(firstDig==8){
  digitalWrite(a,LOW);
  digitalWrite(b,LOW);
  digitalWrite(c,LOW);
  digitalWrite(d,LOW);
  digitalWrite(e,LOW);
  digitalWrite(f,LOW);
  digitalWrite(g,LOW);
    }
  else if(firstDig==9){
  digitalWrite(a,LOW);
  digitalWrite(b,LOW);
  digitalWrite(c,LOW);
  digitalWrite(d,LOW);
  digitalWrite(e,HIGH);
  digitalWrite(f,LOW);
  digitalWrite(g,LOW);
    }
  }
int secondDigit(int secondDig){
  if(secondDig==0){
  digitalWrite(aa,LOW);
  digitalWrite(bb,LOW);
  digitalWrite(cc,LOW);
  digitalWrite(dd,LOW);
  digitalWrite(ee,LOW);
  digitalWrite(ff,LOW);
  digitalWrite(gg,HIGH);
    }
  else if(secondDig==1){
  digitalWrite(aa,HIGH);
  digitalWrite(bb,LOW);
  digitalWrite(cc,LOW);
  digitalWrite(dd,HIGH);
  digitalWrite(ee,HIGH);
  digitalWrite(ff,HIGH);
  digitalWrite(gg,HIGH);
    }
  else if(secondDig==2){
  digitalWrite(aa,LOW);
  digitalWrite(bb,LOW);
  digitalWrite(cc,HIGH);
  digitalWrite(dd,LOW);
  digitalWrite(ee,LOW);
  digitalWrite(ff,HIGH);
  digitalWrite(gg,LOW);
    }
  else if(secondDig==3){
  digitalWrite(aa,LOW);
  digitalWrite(bb,LOW);
  digitalWrite(cc,LOW);
  digitalWrite(dd,LOW);
  digitalWrite(ee,HIGH);
  digitalWrite(ff,HIGH);
  digitalWrite(gg,LOW);
    }
  else if(secondDig==4){
  digitalWrite(aa,HIGH);
  digitalWrite(bb,LOW);
  digitalWrite(cc,LOW);
  digitalWrite(dd,HIGH);
  digitalWrite(ee,HIGH);
  digitalWrite(ff,LOW);
  digitalWrite(gg,LOW);
    }
  else if(secondDig==5){
  digitalWrite(aa,LOW);
  digitalWrite(bb,HIGH);
  digitalWrite(cc,LOW);
  digitalWrite(dd,LOW);
  digitalWrite(ee,HIGH);
  digitalWrite(ff,LOW);
  digitalWrite(gg,LOW);
    }
  else if(secondDig==6){
  digitalWrite(aa,LOW);
  digitalWrite(bb,HIGH);
  digitalWrite(cc,LOW);
  digitalWrite(dd,LOW);
  digitalWrite(ee,LOW);
  digitalWrite(ff,LOW);
  digitalWrite(gg,LOW);
    }
  else if(secondDig==7){
  digitalWrite(aa,LOW);
  digitalWrite(bb,LOW);
  digitalWrite(cc,LOW);
  digitalWrite(dd,HIGH);
  digitalWrite(ee,HIGH);
  digitalWrite(ff,HIGH);
  digitalWrite(gg,HIGH);
    }
  else if(secondDig==8){
  digitalWrite(aa,LOW);
  digitalWrite(bb,LOW);
  digitalWrite(cc,LOW);
  digitalWrite(dd,LOW);
  digitalWrite(ee,LOW);
  digitalWrite(ff,LOW);
  digitalWrite(gg,LOW);
    }
  else if(secondDig==9){
  digitalWrite(aa,LOW);
  digitalWrite(bb,LOW);
  digitalWrite(cc,LOW);
  digitalWrite(dd,LOW);
  digitalWrite(ee,HIGH);
  digitalWrite(ff,LOW);
  digitalWrite(gg,LOW);
    }
  }
