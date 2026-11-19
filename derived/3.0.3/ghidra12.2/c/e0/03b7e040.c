
void FUN_03b7e040(long param_1)

{
  bool bVar1;
  bool bVar2;
  long lVar3;
  float fVar4;
  undefined4 uVar5;
  float fVar6;
  
  if (*(char *)(param_1 + 8) == '\0' || *(char *)(param_1 + 9) == '\0') {
    return;
  }
  fVar4 = *(float *)(param_1 + 0x1c);
  if (fVar4 <= 0.0) {
    uVar5 = 0xbf800000;
  }
  else {
    fVar6 = *(float *)(param_1 + 0x28);
    bVar1 = true;
    bVar2 = false;
    if (0.0 <= fVar6) {
      bVar1 = false;
      bVar2 = true;
      if (!NAN(fVar6) && !NAN(fVar4)) {
        bVar1 = fVar6 < fVar4;
        bVar2 = false;
      }
    }
    if (bVar1 == bVar2) {
      uVar5 = 0;
      *(undefined8 *)(param_1 + 0x30) = 0xc2c80000c2c80000;
      *(undefined8 *)(param_1 + 0x38) = 0xc2c80000c2c80000;
      *(undefined8 *)(param_1 + 0x60) = 0xc2c80000c2c80000;
      *(undefined8 *)(param_1 + 0x40) = 0xc2c80000c2c80000;
      *(undefined8 *)(param_1 + 0x48) = 0xc2c80000c2c80000;
      *(undefined8 *)(param_1 + 0x50) = 0xc2c80000c2c80000;
      *(undefined8 *)(param_1 + 0x58) = 0xc2c80000c2c80000;
    }
    else {
      uVar5 = 0;
      if (0.0 <= fVar6) goto LAB_03b7e0b8;
    }
  }
  *(undefined4 *)(param_1 + 0x28) = uVar5;
LAB_03b7e0b8:
  lVar3 = *(long *)(param_1 + 0x10);
  fVar4 = *(float *)(lVar3 + 0xd8);
  if (*(float *)(lVar3 + 0xd8) <= *(float *)(param_1 + 0x30)) {
    fVar4 = *(float *)(param_1 + 0x30);
  }
  *(float *)(param_1 + 0x30) = fVar4;
  fVar4 = *(float *)(lVar3 + 0xdc);
  if (*(float *)(lVar3 + 0xdc) <= *(float *)(param_1 + 0x34)) {
    fVar4 = *(float *)(param_1 + 0x34);
  }
  *(float *)(param_1 + 0x34) = fVar4;
  fVar4 = *(float *)(lVar3 + 0xe4);
  if (*(float *)(lVar3 + 0xe4) <= *(float *)(param_1 + 0x38)) {
    fVar4 = *(float *)(param_1 + 0x38);
  }
  *(float *)(param_1 + 0x38) = fVar4;
  fVar4 = *(float *)(lVar3 + 0xfc);
  if (fVar4 == 0.0) {
    fVar4 = -100.0;
  }
  else if (fVar4 <= 0.0) {
    fVar4 = -90.4;
  }
  else {
    fVar4 = log10f(fVar4);
    lVar3 = *(long *)(param_1 + 0x10);
    fVar4 = fVar4 * 20.0;
  }
  if (fVar4 <= *(float *)(param_1 + 0x50)) {
    fVar4 = *(float *)(param_1 + 0x50);
  }
  *(float *)(param_1 + 0x50) = fVar4;
  fVar4 = *(float *)(lVar3 + 0xe8);
  if (*(float *)(lVar3 + 0xe8) <= *(float *)(param_1 + 0x3c)) {
    fVar4 = *(float *)(param_1 + 0x3c);
  }
  *(float *)(param_1 + 0x3c) = fVar4;
  fVar4 = *(float *)(lVar3 + 0x100);
  if (fVar4 == 0.0) {
    fVar4 = -100.0;
  }
  else if (fVar4 <= 0.0) {
    fVar4 = -90.4;
  }
  else {
    fVar4 = log10f(fVar4);
    lVar3 = *(long *)(param_1 + 0x10);
    fVar4 = fVar4 * 20.0;
  }
  if (fVar4 <= *(float *)(param_1 + 0x54)) {
    fVar4 = *(float *)(param_1 + 0x54);
  }
  *(float *)(param_1 + 0x54) = fVar4;
  fVar4 = *(float *)(lVar3 + 0xec);
  if (*(float *)(lVar3 + 0xec) <= *(float *)(param_1 + 0x40)) {
    fVar4 = *(float *)(param_1 + 0x40);
  }
  *(float *)(param_1 + 0x40) = fVar4;
  fVar4 = *(float *)(lVar3 + 0x104);
  if (fVar4 == 0.0) {
    fVar4 = -100.0;
  }
  else if (fVar4 <= 0.0) {
    fVar4 = -90.4;
  }
  else {
    fVar4 = log10f(fVar4);
    lVar3 = *(long *)(param_1 + 0x10);
    fVar4 = fVar4 * 20.0;
  }
  if (fVar4 <= *(float *)(param_1 + 0x58)) {
    fVar4 = *(float *)(param_1 + 0x58);
  }
  *(float *)(param_1 + 0x58) = fVar4;
  fVar4 = *(float *)(lVar3 + 0xf0);
  if (*(float *)(lVar3 + 0xf0) <= *(float *)(param_1 + 0x44)) {
    fVar4 = *(float *)(param_1 + 0x44);
  }
  *(float *)(param_1 + 0x44) = fVar4;
  fVar4 = *(float *)(lVar3 + 0x108);
  if (fVar4 == 0.0) {
    fVar4 = -100.0;
  }
  else if (fVar4 <= 0.0) {
    fVar4 = -90.4;
  }
  else {
    fVar4 = log10f(fVar4);
    lVar3 = *(long *)(param_1 + 0x10);
    fVar4 = fVar4 * 20.0;
  }
  if (fVar4 <= *(float *)(param_1 + 0x5c)) {
    fVar4 = *(float *)(param_1 + 0x5c);
  }
  *(float *)(param_1 + 0x5c) = fVar4;
  fVar4 = *(float *)(lVar3 + 0xf4);
  if (*(float *)(lVar3 + 0xf4) <= *(float *)(param_1 + 0x48)) {
    fVar4 = *(float *)(param_1 + 0x48);
  }
  *(float *)(param_1 + 0x48) = fVar4;
  fVar4 = *(float *)(lVar3 + 0x10c);
  if (fVar4 == 0.0) {
    fVar4 = -100.0;
  }
  else if (fVar4 <= 0.0) {
    fVar4 = -90.4;
  }
  else {
    fVar4 = log10f(fVar4);
    lVar3 = *(long *)(param_1 + 0x10);
    fVar4 = fVar4 * 20.0;
  }
  if (fVar4 <= *(float *)(param_1 + 0x60)) {
    fVar4 = *(float *)(param_1 + 0x60);
  }
  *(float *)(param_1 + 0x60) = fVar4;
  fVar4 = *(float *)(lVar3 + 0xf8);
  if (*(float *)(lVar3 + 0xf8) <= *(float *)(param_1 + 0x4c)) {
    fVar4 = *(float *)(param_1 + 0x4c);
  }
  *(float *)(param_1 + 0x4c) = fVar4;
  fVar4 = *(float *)(lVar3 + 0x110);
  if (fVar4 == 0.0) {
    fVar4 = -100.0;
  }
  else if (fVar4 <= 0.0) {
    fVar4 = -90.4;
  }
  else {
    fVar4 = log10f(fVar4);
    fVar4 = fVar4 * 20.0;
  }
  if (fVar4 <= *(float *)(param_1 + 100)) {
    fVar4 = *(float *)(param_1 + 100);
  }
  *(float *)(param_1 + 100) = fVar4;
  if (((0.0 <= *(float *)(param_1 + 0x28)) && (DAT_05aebb78 != 0)) &&
     (*(long *)(DAT_05aebb78 + 0x10) != 0)) {
    *(float *)(param_1 + 0x28) =
         *(float *)(param_1 + 0x28) + *(float *)(*(long *)(DAT_05aebb78 + 0x10) + 0x1c);
  }
  return;
}

