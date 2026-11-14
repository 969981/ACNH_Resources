
int FUN_01a23f80(uint *param_1,int param_2)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  
  uVar3 = *param_1;
  uVar1 = uVar3 - (uVar3 >> 1 & 0x55555555);
  uVar1 = (uVar1 >> 2 & 0x33333333) + (uVar1 & 0x33333333);
  uVar1 = uVar1 + (uVar1 >> 4) & 0xf0f0f0f;
  uVar1 = uVar1 + (uVar1 >> 8);
  uVar1 = uVar1 + (uVar1 >> 0x10) & 0x3f;
  if ((int)uVar1 < param_2) {
    uVar3 = param_1[1];
    uVar2 = uVar3 - (uVar3 >> 1 & 0x55555555);
    uVar2 = (uVar2 >> 2 & 0x33333333) + (uVar2 & 0x33333333);
    uVar2 = uVar2 + (uVar2 >> 4) & 0xf0f0f0f;
    uVar2 = uVar2 + (uVar2 >> 8);
    uVar2 = (uVar2 + (uVar2 >> 0x10) & 0x3f) + uVar1;
    if ((int)uVar2 < param_2) {
      uVar3 = param_1[2];
      uVar1 = uVar3 - (uVar3 >> 1 & 0x55555555);
      uVar1 = (uVar1 >> 2 & 0x33333333) + (uVar1 & 0x33333333);
      uVar1 = uVar1 + (uVar1 >> 4) & 0xf0f0f0f;
      uVar1 = uVar1 + (uVar1 >> 8);
      uVar1 = (uVar1 + (uVar1 >> 0x10) & 0x3f) + uVar2;
      if ((int)uVar1 < param_2) {
        uVar3 = param_1[3];
        uVar2 = uVar3 - (uVar3 >> 1 & 0x55555555);
        uVar2 = (uVar2 >> 2 & 0x33333333) + (uVar2 & 0x33333333);
        uVar2 = uVar2 + (uVar2 >> 4) & 0xf0f0f0f;
        uVar2 = uVar2 + (uVar2 >> 8);
        uVar2 = (uVar2 + (uVar2 >> 0x10) & 0x3f) + uVar1;
        if ((int)uVar2 < param_2) {
          uVar3 = param_1[4];
          uVar1 = uVar3 - (uVar3 >> 1 & 0x55555555);
          uVar1 = (uVar1 >> 2 & 0x33333333) + (uVar1 & 0x33333333);
          uVar1 = uVar1 + (uVar1 >> 4) & 0xf0f0f0f;
          uVar1 = uVar1 + (uVar1 >> 8);
          if ((int)((uVar1 + (uVar1 >> 0x10) & 0x3f) + uVar2) < param_2) {
            return -1;
          }
          iVar4 = 0x80;
        }
        else {
          iVar4 = 0x60;
          uVar2 = uVar1;
        }
      }
      else {
        iVar4 = 0x40;
      }
    }
    else {
      iVar4 = 0x20;
      uVar2 = uVar1;
    }
  }
  else {
    iVar4 = 0;
    uVar2 = 0;
  }
  if (uVar3 == 0) {
    return iVar4 + -1;
  }
  iVar5 = (param_2 - uVar2) + 1;
  do {
    iVar5 = iVar5 + -1;
    if (iVar5 < 2) {
      uVar1 = uVar3 - 1 & (uVar3 ^ 0xffffffff);
      uVar1 = uVar1 - (uVar1 >> 1 & 0x55555555);
      uVar1 = (uVar1 >> 2 & 0x33333333) + (uVar1 & 0x33333333);
      uVar1 = uVar1 + (uVar1 >> 4) & 0xf0f0f0f;
      uVar1 = uVar1 + (uVar1 >> 8);
      return (uVar1 + (uVar1 >> 0x10) & 0x3f) + iVar4;
    }
    uVar3 = uVar3 - 1 & uVar3;
  } while (uVar3 != 0);
  return iVar4 + -1;
}

