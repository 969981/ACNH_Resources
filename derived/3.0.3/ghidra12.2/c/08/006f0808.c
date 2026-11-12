
void FUN_006f0808(float param_1,uint *param_2,uint *param_3,uint *param_4)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  
  uVar5 = *param_3;
  uVar4 = *param_4;
  if (uVar5 - uVar4 != 0) {
    uVar3 = uVar5 - uVar4;
    if (uVar4 >= uVar5) {
      uVar3 = uVar4 - uVar5;
    }
    uVar1 = -uVar3;
    if (uVar3 < 0x80000001) {
      uVar1 = uVar3;
    }
    iVar2 = -(int)((float)uVar1 * param_1);
    if (uVar4 < uVar5 != uVar3 < 0x80000001) {
      iVar2 = (int)((float)uVar1 * param_1);
    }
    uVar5 = iVar2 + uVar5;
  }
  *param_2 = uVar5;
  uVar5 = param_3[1];
  uVar4 = param_4[1];
  if (uVar5 - uVar4 != 0) {
    uVar3 = uVar5 - uVar4;
    if (uVar4 >= uVar5) {
      uVar3 = uVar4 - uVar5;
    }
    uVar1 = -uVar3;
    if (uVar3 < 0x80000001) {
      uVar1 = uVar3;
    }
    iVar2 = -(int)((float)uVar1 * param_1);
    if (uVar4 < uVar5 != uVar3 < 0x80000001) {
      iVar2 = (int)((float)uVar1 * param_1);
    }
    uVar5 = iVar2 + uVar5;
  }
  param_2[1] = uVar5;
  uVar5 = param_3[2];
  uVar4 = param_4[2];
  if (uVar5 - uVar4 != 0) {
    uVar3 = uVar5 - uVar4;
    if (uVar4 >= uVar5) {
      uVar3 = uVar4 - uVar5;
    }
    uVar1 = -uVar3;
    if (uVar3 < 0x80000001) {
      uVar1 = uVar3;
    }
    iVar2 = -(int)((float)uVar1 * param_1);
    if (uVar4 < uVar5 != uVar3 < 0x80000001) {
      iVar2 = (int)((float)uVar1 * param_1);
    }
    uVar5 = iVar2 + uVar5;
  }
  param_2[2] = uVar5;
  return;
}

