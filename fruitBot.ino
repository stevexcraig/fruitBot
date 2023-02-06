const int touchPinA = 15;
const int touchPinB = 13;
const int touchPinC = 12;
const int touchPinD = 4;
const int touchPinE = 14;


const int threshold = 25;

int touchValueA;
int touchValueB;
int touchValueC;
int touchValueD;
int touchValueE;


int noid1 = 16;
int noid2 = 17;
int noid3 = 5;
int noid4 = 18;
int noid5 = 19;

int noidonTime = 50;
int noidoffTime = 200;

void setup() {
  delay(250);
  Serial.begin(115200);

  pinMode (noid1, OUTPUT);
  pinMode (noid2, OUTPUT);
  pinMode (noid3, OUTPUT);
  pinMode (noid4, OUTPUT);
  pinMode (noid5, OUTPUT);
}

void loop() {

  touchValueA = touchRead(touchPinA);
  Serial.println(touchValueA);
  if (touchValueA < threshold + 5) {
    noidA();
    noidOffA();
  }
  touchValueB = touchRead(touchPinB);
  Serial.println(touchValueB);
  if (touchValueB < threshold) {
    noidB();
    noidOffB();
  }
  touchValueC = touchRead(touchPinC);
  Serial.println(touchValueC);
  if (touchValueC < threshold) {
    noidC();
    noidOffC();
  }
  touchValueD = touchRead(touchPinD);
  Serial.println(touchValueD);
  if (touchValueD < threshold) {
    noidD();
    noidOffD();
  }
//  touchValueE = touchRead(touchPinE);
//  Serial.println(touchValueE);
//  if (touchValueE < threshold) {
//    noidE();
//    noidOffE();
//  }
}

///////////////

void noidA() {

  unsigned long snapshotOfTime = 0;
  snapshotOfTime = millis();
  while (millis() < snapshotOfTime + noidonTime) {
    digitalWrite(noid1, HIGH);

    if (millis() - snapshotOfTime > noidonTime) break;
  }
}

void noidOffA () {

  unsigned long snapshotOfTime = 0;
  snapshotOfTime = millis();
  while (millis() < snapshotOfTime + noidoffTime) {
    digitalWrite(noid1, LOW);

    if (millis() - snapshotOfTime > noidoffTime) break;
  }
}

void noidB () {

  unsigned long snapshotOfTime = 0;
  snapshotOfTime = millis();
  while (millis() < snapshotOfTime + noidonTime) {
    digitalWrite(noid2, HIGH);

    if (millis() - snapshotOfTime > noidonTime) break;
  }
}

void noidOffB () {

  unsigned long snapshotOfTime = 0;
  snapshotOfTime = millis();
  while (millis() < snapshotOfTime + noidoffTime) {
    digitalWrite(noid2, LOW);

    if (millis() - snapshotOfTime > noidoffTime) break;
  }
}

void noidC () {

  unsigned long snapshotOfTime = 0;
  snapshotOfTime = millis();
  while (millis() < snapshotOfTime + noidonTime) {
    digitalWrite(noid3, HIGH);

    if (millis() - snapshotOfTime > noidonTime) break;
  }
}

void noidOffC () {

  unsigned long snapshotOfTime = 0;
  snapshotOfTime = millis();
  while (millis() < snapshotOfTime + noidoffTime) {
    digitalWrite(noid3, LOW);

    if (millis() - snapshotOfTime > noidoffTime) break;
  }
}

void noidD () {

  unsigned long snapshotOfTime = 0;
  snapshotOfTime = millis();
  while (millis() < snapshotOfTime + noidonTime) {
    digitalWrite(noid4, HIGH);

    if (millis() - snapshotOfTime > noidonTime) break;
  }
}

void noidOffD () {

  unsigned long snapshotOfTime = 0;
  snapshotOfTime = millis();
  while (millis() < snapshotOfTime + noidoffTime) {
    digitalWrite(noid4, LOW);

    if (millis() - snapshotOfTime > noidoffTime) break;
  }
}
//void noidE () {
//
//  unsigned long snapshotOfTime = 0;
//  snapshotOfTime = millis();
//  while (millis() < snapshotOfTime + noidonTime) {
//    digitalWrite(noid5, HIGH);
//
//    if (millis() - snapshotOfTime > noidonTime) break;
//  }
//}
//
//void noidOffE () {
//
//  unsigned long snapshotOfTime = 0;
//  snapshotOfTime = millis();
//  while (millis() < snapshotOfTime + noidoffTime) {
//    digitalWrite(noid5, LOW);
//
//    if (millis() - snapshotOfTime > noidoffTime) break;
//  }
//}
