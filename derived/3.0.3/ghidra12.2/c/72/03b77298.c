
void FUN_03b77298(long param_1)

{
  int iVar1;
  float fVar2;
  float __x;
  float fVar3;
  float fVar4;
  float fVar5;
  
  if (*(float *)(param_1 + 0x10) == *(float *)(param_1 + 0x18)) {
    return;
  }
  fVar3 = *(float *)(param_1 + 0x14);
  *(float *)(param_1 + 0x10) = fVar3;
  if (fVar3 == *(float *)(param_1 + 0x18)) {
    *(undefined4 *)(param_1 + 8) = *(undefined4 *)(param_1 + 0xc);
    return;
  }
  if ((*(int *)(param_1 + 0x20) != 0) && (fVar4 = *(float *)(param_1 + 0x24), fVar4 != 0.0)) {
    iVar1 = *(int *)(param_1 + 0x20);
    fVar5 = 1.0;
    if (fVar3 < 0.0) {
      fVar5 = -1.0;
    }
    fVar2 = -fVar3;
    if (fVar3 >= 0.0) {
      fVar2 = fVar3;
    }
    __x = 1.0;
    if (fVar2 / fVar4 <= 1.0) {
      __x = fVar2 / fVar4;
    }
    if (iVar1 == 3) {
      fVar3 = sinf(__x * 1.5707964);
    }
    else {
      if (iVar1 != 2) {
        if (iVar1 == 1) {
          fVar3 = fVar4 * __x * fVar5 * __x;
        }
        goto LAB_03b77370;
      }
      fVar3 = SQRT(__x);
      if (NAN(fVar3)) {
        fVar3 = sqrtf(__x);
      }
    }
    fVar3 = fVar5 * fVar3 * *(float *)(param_1 + 0x24);
  }
LAB_03b77370:
  *(float *)(param_1 + 8) = fVar3;
  fVar4 = *(float *)(param_1 + 0x18);
  fVar3 = *(float *)(param_1 + 0x10) +
          *(float *)(*(long *)(DAT_05aebb78 + 0x10) + 0x1c) * *(float *)(param_1 + 0x1c);
  if (0.0 <= *(float *)(param_1 + 0x1c)) {
    if (fVar3 <= fVar4) goto LAB_03b773a8;
  }
  else if (fVar4 <= fVar3) goto LAB_03b773a8;
  fVar3 = fVar4;
LAB_03b773a8:
  *(float *)(param_1 + 0x14) = fVar3;
  return;
}

