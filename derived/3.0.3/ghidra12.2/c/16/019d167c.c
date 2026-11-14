
bool FUN_019d167c(char *param_1,float *param_2)

{
  uint uVar1;
  bool bVar2;
  bool bVar3;
  float fVar4;
  float fVar5;
  
  fVar4 = *(float *)(param_1 + 8);
  if (*param_1 == '\0') {
    if (0.0 <= fVar4) {
      if (fVar4 <= 0.0) goto LAB_019d172c;
      fVar5 = fVar4 + -0.1;
      bVar2 = false;
      bVar3 = false;
      if (fVar5 <= fVar4) {
        bVar2 = false;
        bVar3 = true;
        if (!NAN(fVar5)) {
          bVar2 = fVar5 == 0.0;
          bVar3 = 0.0 <= fVar5;
        }
      }
      fVar4 = 0.0;
      if (bVar3 && !bVar2) {
        fVar4 = fVar5;
      }
    }
    else {
      fVar5 = fVar4 + 0.1;
      bVar2 = false;
      bVar3 = false;
      if (fVar4 <= fVar5) {
        bVar2 = false;
        bVar3 = true;
        if (!NAN(fVar5)) {
          bVar2 = fVar5 < 0.0;
          bVar3 = false;
        }
      }
      fVar4 = 0.0;
      if (bVar2 != bVar3) {
        fVar4 = fVar5;
      }
    }
  }
  else if (1.0 <= fVar4) {
    if (fVar4 <= 1.0) goto LAB_019d172c;
    fVar5 = fVar4 + -0.05;
    bVar2 = false;
    bVar3 = false;
    if (fVar5 <= fVar4) {
      bVar2 = false;
      bVar3 = true;
      if (!NAN(fVar5)) {
        bVar2 = fVar5 == 1.0;
        bVar3 = 1.0 <= fVar5;
      }
    }
    fVar4 = 1.0;
    if (bVar3 && !bVar2) {
      fVar4 = fVar5;
    }
  }
  else {
    fVar5 = fVar4 + 0.05;
    bVar2 = false;
    bVar3 = false;
    if (fVar4 <= fVar5) {
      bVar2 = false;
      bVar3 = true;
      if (!NAN(fVar5)) {
        bVar2 = fVar5 < 1.0;
        bVar3 = false;
      }
    }
    fVar4 = 1.0;
    if (bVar2 != bVar3) {
      fVar4 = fVar5;
    }
  }
  *(float *)(param_1 + 8) = fVar4;
LAB_019d172c:
  if (fVar4 != 0.0) {
    uVar1 = *(int *)(param_1 + 0xc) + *(int *)(param_1 + 0x10);
    *(uint *)(param_1 + 0xc) = uVar1;
    if (param_2 != (float *)0x0) {
      *param_2 = fVar4 * *(float *)(param_1 + 4) *
                         ((float)(&DAT_04199798)[(ulong)(uVar1 >> 0x18) * 4] +
                         (float)(&DAT_0419979c)[(ulong)(uVar1 >> 0x18) * 4] *
                         (float)(uVar1 & 0xffffff) * 5.9604645e-08);
    }
  }
  return fVar4 != 0.0;
}

