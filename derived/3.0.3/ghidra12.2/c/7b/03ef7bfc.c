
/* WARNING: Type propagation algorithm not settling */

void FUN_03ef7bfc(long param_1)

{
  int iVar1;
  undefined4 uVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float local_8;
  float local_4;
  
  if (*(long *)(param_1 + 8) == 0) {
    return;
  }
  FUN_03ef35c4(*(long *)(param_1 + 8),&local_4,&local_8,0);
  fVar4 = *(float *)(param_1 + 0x1c);
  fVar3 = *(float *)(param_1 + 0x20);
  fVar5 = *(float *)(param_1 + 0x2c);
  iVar1 = *(int *)(param_1 + 0x14);
  if (iVar1 == 0) {
    fVar4 = fVar4 + fVar5;
  }
  else if (iVar1 == 2) {
    fVar3 = fVar3 - fVar5;
  }
  else if (iVar1 == 1) {
    fVar3 = fVar3 + fVar5;
    fVar4 = fVar4 - fVar5;
  }
  if (fVar4 <= local_4) {
    if (local_4 <= fVar3) {
      uVar2 = 1;
    }
    else {
      uVar2 = 2;
    }
  }
  else {
    uVar2 = 0;
  }
  *(undefined4 *)(param_1 + 0x14) = uVar2;
  fVar5 = *(float *)(param_1 + 0x30);
  fVar4 = *(float *)(param_1 + 0x24);
  fVar3 = *(float *)(param_1 + 0x28);
  iVar1 = *(int *)(param_1 + 0x18);
  if (iVar1 == 0) {
    fVar4 = fVar4 + fVar5;
  }
  else if (iVar1 == 2) {
    fVar3 = fVar3 - fVar5;
  }
  else if (iVar1 == 1) {
    fVar3 = fVar3 + fVar5;
    fVar4 = fVar4 - fVar5;
  }
  if (fVar4 <= local_8) {
    if (local_8 <= fVar3) {
      uVar2 = 1;
    }
    else {
      uVar2 = 2;
    }
  }
  else {
    uVar2 = 0;
  }
  *(undefined4 *)(param_1 + 0x18) = uVar2;
  return;
}

