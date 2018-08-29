#define ch1 3         //vertical
#define ch2 5         //horizontal
#define In1 6         //cima, esquerda
#define In2 9         //cima, direita
#define In3 10        //baixo, esquerda 
#define In4 11        //baixo, direita
#define Max 1900
#define Min 1000
#define meio 1500
#define erro 100
int Pulso1=0;
int Pulso2=0;



void setup() {
  pinMode(ch1, INPUT);
  pinMode(ch2, INPUT);
  pinMode (In1, OUTPUT);
  pinMode (In2, OUTPUT);
  pinMode (In3, OUTPUT);
  pinMode (In4, OUTPUT);  
}

void loop() {
  Pulso1=pulseIn(ch1, HIGH);
  Pulso2=pulseIn(ch2, HIGH);
  if (Pulso1>Max){
    Pulso1=Max;
  }
  if (Pulso1<Min){
    Pulso1=Min;
  }
  if (Pulso2>Max){
    Pulso2=Max;
  }
  if (Pulso2<Min){
    Pulso2=Min;
  }

//------------Funçoes

//parado
if(Pulso1<meio+erro&&Pulso1>meio-erro&&Pulso2<meio+erro&&Pulso2>meio-erro){
  controle(0, 0, 0, 0);
}

//frente
if(Pulso1>meio+erro&&Pulso2<meio+erro&&Pulso2>meio-erro){
  Pulso1 = map(Pulso1, meio+erro, Max, 0, 255);
  controle(Pulso1, Pulso1, 0, 0);
}

//tras
if(Pulso1<meio-erro&&Pulso2<meio+erro&&Pulso2>meio-erro){
  Pulso1= map(Pulso1, meio-erro, Min, 0, 255);
  controle(0, 0, Pulso1, Pulso1);
}

//esquerda
if(Pulso1<meio+erro&&Pulso1>meio-erro&&Pulso2<meio-erro){
  Pulso2= map(Pulso2, meio-erro, Min, 0, 255);
  controle(Pulso2, 0, Pulso2, 0);
}
 
//direita
if(Pulso1<meio+erro&&Pulso1>meio-erro&&Pulso2>meio+erro){
  Pulso2= map(Pulso2, meio+erro, Max, 0, 255);
  controle(0, Pulso2, 0, Pulso2);
}
  
//diagonal superior direita
if(Pulso1>meio+erro&&Pulso2>meio+erro){
  Pulso1= map(Pulso1, meio+erro, Max, 0, 255);
  Pulso2= map(Pulso2, meio+erro, Max, 0, 255);
  controle(Pulso1, Pulso2/2, 0, 0);
}
  
//diagonal superior esquerda
if(Pulso1>meio+erro&&Pulso2<meio-erro){
  Pulso1= map(Pulso1, meio+erro, Max, 0, 255);
  Pulso2= map(Pulso2, meio-erro, Min, 0, 255);
  controle(Pulso2/2, Pulso1, 0, 0);
}
  
//diagonal inferior direita
if(Pulso1<meio-erro&&Pulso2>meio+erro){
  Pulso1= map(Pulso1, meio-erro, Min, 0, 255);
  Pulso2= map(Pulso2, meio+erro, Max, 0, 255);
  controle(0, 0, Pulso1, Pulso2/2);
}
  
//diagonal inferior esquerda
if(Pulso1<meio-erro&&Pulso2<meio-erro){
  Pulso1= map(Pulso1, meio-erro, Min, 0, 255);
  Pulso2= map(Pulso2, meio-erro, Min, 0, 255);
  controle(0, 0, Pulso2/2, Pulso1);
}
  
}

void controle (int a, int b, int c, int d){
  analogWrite(In1, a);
  analogWrite(In2, b);
  analogWrite(In3, c);
  analogWrite(In4, d);
}

