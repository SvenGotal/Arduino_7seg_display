#define DIG_PINS_NUM 7
// D_PIN = DIGITAL PIN - DEFINE physical PINS below
#define D_PIN1 2
#define D_PIN2 3
#define D_PIN3 4
#define D_PIN4 5
#define D_PIN5 6
#define D_PIN6 7
#define D_PIN7 8
//////////////////////////////////////////////////////

int digitalPins[DIG_PINS_NUM] = { D_PIN1,D_PIN2,D_PIN3,D_PIN4,D_PIN5,D_PIN6,D_PIN7};

// SEGMENT MAP by D_PINs
#define SEG_e (digitalPins[0])
#define SEG_d (digitalPins[1])
#define SEG_c (digitalPins[2])
#define SEG_g (digitalPins[3])
#define SEG_f (digitalPins[4])
#define SEG_a (digitalPins[5])
#define SEG_b (digitalPins[6])

// LED map for 7-segment display:
//   PIN:  | Segment: | Array_index:
  // pin2  |    e     |  [0],
  // pin3  |    d     |  [1],
  // pin4  |    c     |  [2],
  // pin5  |    g     |  [3],
  // pin6  |    f     |  [4],
  // pin7  |    a     |  [5],
  // pin8  |    b     |  [6].



// Character map :
#define mode_t unsigned
void char_1(mode_t mode){
  // b -> c
  digitalWrite(SEG_b, mode);
  digitalWrite(SEG_c, mode);
}
void char_2(mode_t mode){
  // a - b- g- e- d
  digitalWrite(SEG_a, mode);
  digitalWrite(SEG_b, mode);
  digitalWrite(SEG_g, mode);
  digitalWrite(SEG_e, mode);
  digitalWrite(SEG_d, mode);
}
void char_3(mode_t mode){
  // a -b- g- c- d
  digitalWrite(SEG_a, mode);
  digitalWrite(SEG_b, mode);
  digitalWrite(SEG_g, mode);
  digitalWrite(SEG_c, mode);
  digitalWrite(SEG_d, mode);
}
void char_4(mode_t mode){
  //f -g- b- c
  digitalWrite(SEG_f, mode);
  digitalWrite(SEG_g, mode);
  digitalWrite(SEG_b, mode);
  digitalWrite(SEG_c, mode);
}
void char_5(mode_t mode){
  //a - f - g - c - d
  digitalWrite(SEG_a, mode);
  digitalWrite(SEG_f, mode);
  digitalWrite(SEG_g, mode);
  digitalWrite(SEG_c, mode);
  digitalWrite(SEG_d, mode);
}
void char_6(mode_t mode){
  // a - f - g - c - d - e
  digitalWrite(SEG_a, mode);
  digitalWrite(SEG_f, mode);
  digitalWrite(SEG_g, mode);
  digitalWrite(SEG_c, mode);
  digitalWrite(SEG_d, mode);
  digitalWrite(SEG_e, mode);
}
void char_7(mode_t mode){
  // a - b - c
  digitalWrite(SEG_a, mode);
  digitalWrite(SEG_b, mode);
  digitalWrite(SEG_c, mode);
}
void char_8(mode_t mode){
  // full segments
  digitalWrite(SEG_f, mode);
  digitalWrite(SEG_a, mode);
  digitalWrite(SEG_b, mode);
  digitalWrite(SEG_g, mode);
  digitalWrite(SEG_e, mode);
  digitalWrite(SEG_d, mode);
  digitalWrite(SEG_c, mode);
}
void char_9(mode_t mode){
  // full segments - e
  digitalWrite(SEG_g, mode);
  digitalWrite(SEG_f, mode);
  digitalWrite(SEG_a, mode);
  digitalWrite(SEG_b, mode); 
  digitalWrite(SEG_c, mode);
  digitalWrite(SEG_d, mode);  
}
void char_0(mode_t mode){
  // full segments - g
  digitalWrite(SEG_f, mode);
  digitalWrite(SEG_a, mode);
  digitalWrite(SEG_b, mode);
  digitalWrite(SEG_e, mode);
  digitalWrite(SEG_d, mode);
  digitalWrite(SEG_c, mode);
}

#define ON HIGH
#define OFF LOW
#define DELAY 1000


void setup() {
  // put your setup code here, to run once:
  
  for(int i = 0; i < DIG_PINS_NUM;++i){
    pinMode(digitalPins[i], OUTPUT);
  }
  
}



void loop() {
  // put your main code here, to run repeatedly:

  char_9(ON);
  delay(DELAY);
  char_9(OFF);
  char_8(ON);
  delay(DELAY);
  char_8(OFF);
  char_7(ON);
  delay(DELAY);
  char_7(OFF);
  char_6(ON);
  delay(DELAY);
  char_6(OFF);
  char_5(ON);
  delay(DELAY);
  char_5(OFF);
  char_4(ON);
  delay(DELAY);
  char_4(OFF);
  char_3(ON);
  delay(DELAY);
  char_3(OFF);
  char_2(ON);
  delay(DELAY);
  char_2(OFF);
  char_1(ON);
  delay(DELAY);
  char_1(OFF);
  char_0(ON);
  delay(DELAY);
  char_0(OFF);
}
