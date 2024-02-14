const float consigneYaw = 0.0, consignePitch = 0.0, consigneRoll;
float erreurYaw = 0.0, erreurPitch = 0.0, erreurRoll = 0.0;
const int kp = 100, ki = 0.2, kd = 5;
float SerreurY = 0.0, SerreurP = 0.0, SerreurR = 0.0;
const float Yaw = 0, Pitch = 0, Roll = 0;
float erreurY_avant = 0.0, erreurP_avant = 0.0, erreurR_avant = 0.0;
float deltaerreurY = 0.0, deltaerreurP = 0.0, deltaerreurR = 0.0;

void setup() {
  float outYaw = consigneYaw, outPitch = consignePitch, outRoll= consigneRoll;
}

void loop() {
  erreurYaw = consigneYaw - Yaw;
  erreurPitch = consignePitch - Pitch ;
  erreurRoll = consigneRoll - Roll ;
  SerreurY += erreurYaw;
  SerreurP += erreurPitch;
  SerreurR += erreurRoll;
  deltaerreurY = erreurYaw - erreurY_avant;
  erreurY_avant = erreurYaw;
  deltaerreurP = erreurPitch - erreurP_avant;
  erreurP_avant = erreurPitch;
  deltaerreurR = erreurRoll - erreurR_avant;
  erreurR_avant = erreurRoll;
  outYaw= kp * erreurYaw + ki*SerreurY + kp*deltaerreurY;
  outPitch = kp * erreurPitch + ki*SerreurP + kp*deltaerreurP;
  outRoll = kp * erreurRoll + ki*SerreurR + kp*deltaerreurR;
}
