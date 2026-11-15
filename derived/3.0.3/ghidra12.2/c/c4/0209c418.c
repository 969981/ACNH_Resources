
void FUN_0209c418(long param_1)

{
  int iVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  
  if (*(int *)(param_1 + 0xe4) == 3) {
    return;
  }
  if (*(int *)(param_1 + 0xe4) == 1) {
    iVar1 = *(int *)(param_1 + 0xcc);
    if (*(int *)(param_1 + 0xd0) != -1) {
      iVar1 = *(int *)(param_1 + 0xd0) + 10;
    }
    FUN_0209c5b0(param_1,param_1 + 0x8c,iVar1);
    FUN_0209ce98(param_1,param_1 + 0x8c);
  }
  if (*(int *)(param_1 + 0x28) == 2) {
    if (*(int *)(param_1 + 0x38) == 3) {
      fVar2 = -50.0;
    }
    else {
      if (*(int *)(param_1 + 0x38) != 4) goto LAB_0209c4c0;
      fVar2 = -5.0;
    }
    fVar2 = fVar2 + *(float *)(param_1 + 0x2c);
    fVar4 = 100.0;
    if (fVar2 <= 100.0) {
      fVar4 = fVar2;
    }
    fVar3 = 0.0;
    if (0.0 <= fVar2) {
      fVar3 = fVar4;
    }
    *(float *)(param_1 + 0x2c) = fVar3;
  }
LAB_0209c4c0:
  *(undefined1 *)(param_1 + 0x34) = 0;
  *(undefined4 *)(param_1 + 0x38) = 0;
  *(undefined4 *)(param_1 + 0x30) = 0xbf800000;
  if (*(int *)(param_1 + 0x48) == 2) {
    if (*(int *)(param_1 + 0x58) == 3) {
      fVar2 = -50.0;
    }
    else {
      if (*(int *)(param_1 + 0x58) != 4) goto LAB_0209c528;
      fVar2 = -5.0;
    }
    fVar2 = fVar2 + *(float *)(param_1 + 0x4c);
    fVar4 = 100.0;
    if (fVar2 <= 100.0) {
      fVar4 = fVar2;
    }
    fVar3 = 0.0;
    if (0.0 <= fVar2) {
      fVar3 = fVar4;
    }
    *(float *)(param_1 + 0x4c) = fVar3;
  }
LAB_0209c528:
  *(undefined1 *)(param_1 + 0x54) = 0;
  *(undefined4 *)(param_1 + 0x58) = 0;
  *(undefined4 *)(param_1 + 0x50) = 0xbf800000;
  if (*(int *)(param_1 + 0x68) == 2) {
    if (*(int *)(param_1 + 0x78) == 3) {
      fVar2 = -50.0;
    }
    else {
      if (*(int *)(param_1 + 0x78) != 4) goto LAB_0209c58c;
      fVar2 = -5.0;
    }
    fVar2 = fVar2 + *(float *)(param_1 + 0x6c);
    fVar4 = 100.0;
    if (fVar2 <= 100.0) {
      fVar4 = fVar2;
    }
    fVar3 = 0.0;
    if (0.0 <= fVar2) {
      fVar3 = fVar4;
    }
    *(float *)(param_1 + 0x6c) = fVar3;
  }
LAB_0209c58c:
  *(undefined1 *)(param_1 + 0x74) = 0;
  *(undefined4 *)(param_1 + 0x78) = 0;
  *(undefined4 *)(param_1 + 0x70) = 0xbf800000;
  return;
}

