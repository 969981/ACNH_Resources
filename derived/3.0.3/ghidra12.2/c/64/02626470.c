
float FUN_02626470(undefined8 param_1,undefined8 param_2,char param_3)

{
  bool bVar1;
  bool bVar2;
  float fVar3;
  uint uVar4;
  float fVar5;
  float fVar6;
  
  fVar5 = (float)FUN_026253e0();
  fVar6 = fVar5 + 1.0;
  bVar1 = false;
  bVar2 = true;
  if (-1.1920929e-07 <= fVar6) {
    bVar1 = false;
    bVar2 = true;
    if (!NAN(fVar6)) {
      bVar1 = fVar6 == 1.1920929e-07;
      bVar2 = 1.1920929e-07 <= fVar6;
    }
  }
  if (!bVar2 || bVar1) {
    fVar6 = -1.0;
  }
  else {
    if (fVar5 <= 1000.0) {
      fVar5 = 1001.0;
    }
    if (param_3 == '\x03') {
      fVar6 = fVar5 / 1000.0;
      fVar5 = fVar5 * 3.0;
      uVar4 = 0;
      if (fVar6 != (float)(int)fVar6) {
        uVar4 = (uint)(0.0 <= fVar6);
      }
      fVar3 = 1.2;
      fVar6 = (float)(int)(uVar4 + (int)fVar6) * 5.0 * 3.0;
    }
    else {
      if (param_3 != '\x02') {
        fVar5 = fVar5 / 1000.0;
        uVar4 = 0;
        if (fVar5 != (float)(int)fVar5) {
          uVar4 = (uint)(0.0 <= fVar5);
        }
        return (float)(int)(uVar4 + (int)fVar5) * 5.0;
      }
      fVar6 = fVar5 / 1000.0;
      fVar5 = fVar5 + fVar5;
      uVar4 = 0;
      if (fVar6 != (float)(int)fVar6) {
        uVar4 = (uint)(0.0 <= fVar6);
      }
      fVar3 = 1.1;
      fVar6 = (float)(int)(uVar4 + (int)fVar6) * 5.0;
      fVar6 = fVar6 + fVar6;
    }
    fVar5 = (fVar5 * fVar3) / 1000.0;
    uVar4 = 0;
    if (fVar5 != (float)(int)fVar5) {
      uVar4 = (uint)(0.0 <= fVar5);
    }
    fVar5 = (float)(int)(uVar4 + (int)fVar5) * 5.0;
    if (fVar6 <= fVar5) {
      fVar6 = fVar5;
    }
  }
  return fVar6;
}

