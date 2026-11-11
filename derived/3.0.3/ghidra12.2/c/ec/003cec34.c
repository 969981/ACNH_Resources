
void FUN_003cec34(long param_1,uint param_2,int param_3)

{
  undefined1 uVar1;
  uint uVar2;
  undefined1 uVar3;
  int iVar4;
  float fVar5;
  
  uVar2 = (uint)*(byte *)(param_1 + 0x101);
  if ((param_2 & 1) == 0) {
    if (2 < uVar2 - 1) {
      return;
    }
    if (*(int *)(param_1 + 0xd8) < *(int *)(param_1 + 0xd4)) {
      fVar5 = *(float *)(param_1 + 0xcc) +
              ((*(float *)(param_1 + 0xd0) - *(float *)(param_1 + 0xcc)) *
              (float)*(int *)(param_1 + 0xd8)) / (float)*(int *)(param_1 + 0xd4);
    }
    else {
      fVar5 = *(float *)(param_1 + 0xd0);
    }
    *(float *)(param_1 + 0xcc) = fVar5;
    iVar4 = (int)((1.0 - fVar5) * (float)param_3);
    if (iVar4 < 2) {
      iVar4 = 1;
    }
    *(undefined4 *)(param_1 + 0xd0) = 0x3f800000;
    *(int *)(param_1 + 0xd4) = iVar4;
    uVar1 = 1;
    uVar3 = 3;
  }
  else {
    if (3 < uVar2 || uVar2 == 2) {
      return;
    }
    if (*(int *)(param_1 + 0xd8) < *(int *)(param_1 + 0xd4)) {
      fVar5 = *(float *)(param_1 + 0xcc) +
              ((*(float *)(param_1 + 0xd0) - *(float *)(param_1 + 0xcc)) *
              (float)*(int *)(param_1 + 0xd8)) / (float)*(int *)(param_1 + 0xd4);
    }
    else {
      fVar5 = *(float *)(param_1 + 0xd0);
    }
    uVar1 = 0;
    *(float *)(param_1 + 0xcc) = fVar5;
    iVar4 = (int)(fVar5 * (float)param_3);
    if (iVar4 < 2) {
      iVar4 = 1;
    }
    *(undefined4 *)(param_1 + 0xd0) = 0;
    *(int *)(param_1 + 0xd4) = iVar4;
    uVar3 = 1;
  }
  *(undefined4 *)(param_1 + 0xd8) = 0;
  *(undefined1 *)(param_1 + 0x101) = uVar3;
  *(undefined1 *)(param_1 + 0xf1) = uVar1;
  *(undefined4 *)(param_1 + 0xf4) = 0;
  return;
}

