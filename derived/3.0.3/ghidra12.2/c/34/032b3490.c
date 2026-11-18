
bool FUN_032b3490(long param_1)

{
  int iVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  
  iVar1 = *(int *)(param_1 + 8);
  fVar2 = 0.0;
  if (iVar1 == 0) {
    fVar5 = *(float *)(param_1 + 0x40);
    fVar3 = (*(float *)(param_1 + 0x28) - *(float *)(param_1 + 0x20)) + *(float *)(param_1 + 0xb8) +
            *(float *)(param_1 + 0xbc);
    fVar4 = *(float *)(param_1 + 0x38);
  }
  else {
    if (iVar1 != 1) {
      if (iVar1 == 2) {
        fVar3 = *(float *)(param_1 + 0x28) - *(float *)(param_1 + 0x20);
        fVar2 = *(float *)(param_1 + 0xb8);
        fVar5 = *(float *)(param_1 + 0x40) - *(float *)(param_1 + 0x38);
        if (1.0 < fVar5 / (fVar3 + fVar2 + *(float *)(param_1 + 0xbc))) {
          return true;
        }
        fVar3 = *(float *)(param_1 + 0xbc) + fVar2 + (fVar3 - fVar5);
        if (fVar3 <= 0.0) {
          return false;
        }
        return (fVar2 + (*(float *)(param_1 + 0x30) - *(float *)(param_1 + 0x20))) / fVar3 == 1.0;
      }
      goto LAB_032b35f4;
    }
    fVar5 = *(float *)(param_1 + 0x3c);
    fVar3 = (*(float *)(param_1 + 0x24) - *(float *)(param_1 + 0x1c)) + *(float *)(param_1 + 0xc0) +
            *(float *)(param_1 + 0xc4);
    fVar4 = *(float *)(param_1 + 0x34);
  }
  if (1.0 <= (fVar5 - fVar4) / fVar3) {
    return true;
  }
  if (iVar1 == 1) {
    fVar3 = *(float *)(param_1 + 0x1c);
    fVar5 = *(float *)(param_1 + 0xc0);
    fVar4 = *(float *)(param_1 + 0xc4) +
            fVar5 + ((*(float *)(param_1 + 0x24) - fVar3) -
                    (*(float *)(param_1 + 0x3c) - *(float *)(param_1 + 0x34)));
    if (fVar4 <= 0.0) goto LAB_032b35f4;
    fVar2 = *(float *)(param_1 + 0x2c);
  }
  else {
    if (iVar1 != 0) goto LAB_032b35f4;
    fVar3 = *(float *)(param_1 + 0x20);
    fVar5 = *(float *)(param_1 + 0xb8);
    fVar4 = *(float *)(param_1 + 0xbc) +
            fVar5 + ((*(float *)(param_1 + 0x28) - fVar3) -
                    (*(float *)(param_1 + 0x40) - *(float *)(param_1 + 0x38)));
    if (fVar4 <= 0.0) goto LAB_032b35f4;
    fVar2 = *(float *)(param_1 + 0x30);
  }
  fVar2 = (fVar5 + (fVar2 - fVar3)) / fVar4;
LAB_032b35f4:
  return fVar2 == 1.0;
}

