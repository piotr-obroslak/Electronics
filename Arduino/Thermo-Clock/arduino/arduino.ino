const int pin_seg0 = 10;
const int pin_seg1 = 11;
const int pin_seg2 = 12;
const int pin_seg3 = 13;

const int pin_leddot = 0;
const int pin_led1 = 1;
const int pin_led2 = 2;
const int pin_led3 = 3;
const int pin_led4 = 4;
const int pin_led5 = 5;
const int pin_led6 = 6;
const int pin_led7 = 7;

unsigned long previous_millis = 0;
unsigned long previous_segment = pin_seg0;

void printNan() {
  digitalWrite(pin_leddot, HIGH);
  digitalWrite(pin_led1, HIGH);
  digitalWrite(pin_led2, HIGH);
  digitalWrite(pin_led3, HIGH);
  digitalWrite(pin_led4, HIGH);
  digitalWrite(pin_led5, HIGH);
  digitalWrite(pin_led6, HIGH);
  digitalWrite(pin_led7, HIGH);
}

void print0() {
  digitalWrite(pin_leddot, HIGH);
  digitalWrite(pin_led1, LOW);
  digitalWrite(pin_led2, LOW);
  digitalWrite(pin_led3, LOW);
  digitalWrite(pin_led4, LOW);
  digitalWrite(pin_led5, LOW);
  digitalWrite(pin_led6, LOW);
  digitalWrite(pin_led7, HIGH);
}

void print1() {
  digitalWrite(pin_leddot, HIGH);
  digitalWrite(pin_led1, LOW);
  digitalWrite(pin_led2, HIGH);
  digitalWrite(pin_led3, HIGH);
  digitalWrite(pin_led4, LOW);
  digitalWrite(pin_led5, HIGH);
  digitalWrite(pin_led6, HIGH);
  digitalWrite(pin_led7, HIGH);
}

void print2() {
  digitalWrite(pin_leddot, HIGH);
  digitalWrite(pin_led1, HIGH);
  digitalWrite(pin_led2, LOW);
  digitalWrite(pin_led3, LOW);
  digitalWrite(pin_led4, LOW);
  digitalWrite(pin_led5, LOW);
  digitalWrite(pin_led6, HIGH);
  digitalWrite(pin_led7, LOW);
}

void print3() {
  digitalWrite(pin_leddot, HIGH);
  digitalWrite(pin_led1, LOW);
  digitalWrite(pin_led2, LOW);
  digitalWrite(pin_led3, HIGH);
  digitalWrite(pin_led4, LOW);
  digitalWrite(pin_led5, LOW);
  digitalWrite(pin_led6, HIGH);
  digitalWrite(pin_led7, LOW);
}

void print4() {
  digitalWrite(pin_leddot, HIGH);
  digitalWrite(pin_led1, LOW);
  digitalWrite(pin_led2, HIGH);
  digitalWrite(pin_led3, HIGH);
  digitalWrite(pin_led4, LOW);
  digitalWrite(pin_led5, HIGH);
  digitalWrite(pin_led6, LOW);
  digitalWrite(pin_led7, LOW);
}

void print5() {
  digitalWrite(pin_leddot, HIGH);
  digitalWrite(pin_led1, LOW);
  digitalWrite(pin_led2, LOW);
  digitalWrite(pin_led3, HIGH);
  digitalWrite(pin_led4, HIGH);
  digitalWrite(pin_led5, LOW);
  digitalWrite(pin_led6, LOW);
  digitalWrite(pin_led7, LOW);
}

void print6() {
  digitalWrite(pin_leddot, HIGH);
  digitalWrite(pin_led1, LOW);
  digitalWrite(pin_led2, LOW);
  digitalWrite(pin_led3, LOW);
  digitalWrite(pin_led4, HIGH);
  digitalWrite(pin_led5, LOW);
  digitalWrite(pin_led6, LOW);
  digitalWrite(pin_led7, LOW);
}

void print7() {
  digitalWrite(pin_leddot, HIGH);
  digitalWrite(pin_led1, LOW);
  digitalWrite(pin_led2, HIGH);
  digitalWrite(pin_led3, HIGH);
  digitalWrite(pin_led4, LOW);
  digitalWrite(pin_led5, LOW);
  digitalWrite(pin_led6, HIGH);
  digitalWrite(pin_led7, HIGH);
}

void print8() {
  digitalWrite(pin_leddot, HIGH);
  digitalWrite(pin_led1, LOW);
  digitalWrite(pin_led2, LOW);
  digitalWrite(pin_led3, LOW);
  digitalWrite(pin_led4, LOW);
  digitalWrite(pin_led5, LOW);
  digitalWrite(pin_led6, LOW);
  digitalWrite(pin_led7, LOW);
}

void print9() {
  digitalWrite(pin_leddot, HIGH);
  digitalWrite(pin_led1, LOW);
  digitalWrite(pin_led2, LOW);
  digitalWrite(pin_led3, HIGH);
  digitalWrite(pin_led4, LOW);
  digitalWrite(pin_led5, LOW);
  digitalWrite(pin_led6, LOW);
  digitalWrite(pin_led7, LOW);
}

void printP() {
  digitalWrite(pin_leddot, HIGH);
  digitalWrite(pin_led1, HIGH);
  digitalWrite(pin_led2, HIGH);
  digitalWrite(pin_led3, LOW);
  digitalWrite(pin_led4, LOW);
  digitalWrite(pin_led5, LOW);
  digitalWrite(pin_led6, LOW);
  digitalWrite(pin_led7, LOW);
}

void printU() {
  digitalWrite(pin_leddot, HIGH);
  digitalWrite(pin_led1, LOW);
  digitalWrite(pin_led2, LOW);
  digitalWrite(pin_led3, LOW);
  digitalWrite(pin_led4, LOW);
  digitalWrite(pin_led5, HIGH);
  digitalWrite(pin_led6, LOW);
  digitalWrite(pin_led7, HIGH);
}

void printA() {
  digitalWrite(pin_leddot, HIGH);
  digitalWrite(pin_led1, LOW);
  digitalWrite(pin_led2, HIGH);
  digitalWrite(pin_led3, LOW);
  digitalWrite(pin_led4, LOW);
  digitalWrite(pin_led5, LOW);
  digitalWrite(pin_led6, LOW);
  digitalWrite(pin_led7, LOW);
}

void printS() {
    digitalWrite(pin_leddot, HIGH);
  digitalWrite(pin_led1, LOW);
  digitalWrite(pin_led2, LOW);
  digitalWrite(pin_led3, HIGH);
  digitalWrite(pin_led4, HIGH);
  digitalWrite(pin_led5, LOW);
  digitalWrite(pin_led6, LOW);
  digitalWrite(pin_led7, LOW);
}  
void printL() {
    digitalWrite(pin_leddot, HIGH);
  digitalWrite(pin_led1, HIGH);
  digitalWrite(pin_led2, LOW);
  digitalWrite(pin_led3, LOW);
  digitalWrite(pin_led4, HIGH);
  digitalWrite(pin_led5, HIGH);
  digitalWrite(pin_led6, LOW);
  digitalWrite(pin_led7, HIGH);
}
void printG() {
  digitalWrite(pin_leddot, HIGH);
  digitalWrite(pin_led1, LOW);
  digitalWrite(pin_led2, LOW);
  digitalWrite(pin_led3, LOW);
  digitalWrite(pin_led4, HIGH);
  digitalWrite(pin_led5, LOW);
  digitalWrite(pin_led6, LOW);
  digitalWrite(pin_led7, LOW);
}

 void setup() {
  pinMode(pin_seg0, OUTPUT);
  pinMode(pin_seg1, OUTPUT);
  pinMode(pin_seg2, OUTPUT);
  pinMode(pin_seg3, OUTPUT);

  digitalWrite(pin_seg0, HIGH);
  digitalWrite(pin_seg1, HIGH);
  digitalWrite(pin_seg2, HIGH);
  digitalWrite(pin_seg3, HIGH);

  pinMode(pin_leddot, OUTPUT);
  pinMode(pin_led1, OUTPUT);
  pinMode(pin_led2, OUTPUT);
  pinMode(pin_led3, OUTPUT);
  pinMode(pin_led4, OUTPUT);
  pinMode(pin_led5, OUTPUT);
  pinMode(pin_led6, OUTPUT);
  pinMode(pin_led7, OUTPUT);

  printNan();
}

void print_number(const unsigned No)
{
  switch(No) {
    case 0:
      print0();
      break;
    case 1:
      print1();
      break;
    case 2:
      print2();
      break;
    case 3:
      print3();
      break;
    case 4:
      print4();
      break;
    case 5:
      print5();
      break;
    case 6:
      print6();
      break;
    case 7:
      print7();
      break;
    case 8:
      print8();
      break;
    case 9:
      print9();
      break;
    default:
      printNan();
      break;
  }
}

unsigned switch_segment() {
  switch(previous_segment) {
    case pin_seg0:
      return previous_segment = pin_seg1;
    case pin_seg1:
      return previous_segment = pin_seg2;
    case pin_seg2:
      return previous_segment = pin_seg3;
    case pin_seg3:
      return previous_segment = pin_seg0;
  }

  return 0;
}

//unsigned number = 0;

void loop() {
  const unsigned long segment_interval = 5;
  const unsigned long current_millis = millis();

  if((current_millis - previous_millis) >= segment_interval) {
    digitalWrite(previous_segment, HIGH);
    switch_segment();
    if (previous_segment == pin_seg0)
      printNan();
    else if (previous_segment == pin_seg1)
      printG();
    else if (previous_segment == pin_seg2)
      print0();
    else if (previous_segment == pin_seg3)
      printP();
    digitalWrite(previous_segment, LOW);
    previous_millis = current_millis;
  }
}
