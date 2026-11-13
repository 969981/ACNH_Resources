
uint FUN_0137d304(long param_1,long param_2)

{
  short *psVar1;
  uint uVar2;
  uint uVar3;
  ulong uVar4;
  
  uVar3 = *(int *)(param_2 + 8) - *(int *)(param_1 + 0x160);
  uVar2 = *(int *)(param_2 + 0xc) - *(int *)(param_1 + 0x164);
  psVar1 = (short *)(param_1 + 0x30);
  if (uVar2 < 3 && uVar3 < 3) {
    psVar1 = (short *)(param_1 + 0x30) + (ulong)(uVar2 * 3 + uVar3) * 0x10;
  }
  if ((((*psVar1 == -2) && (psVar1[4] == -2)) && (psVar1[8] == -2)) && (psVar1[0xc] == -2)) {
    uVar3 = 2;
  }
  else {
    uVar4 = FUN_0137d05c(psVar1);
    if ((((uVar4 & 1) == 0) && (uVar4 = FUN_0137d05c(psVar1 + 4), (uVar4 & 1) == 0)) &&
       (uVar4 = FUN_0137d05c(psVar1 + 8), (uVar4 & 1) == 0)) {
      uVar3 = FUN_0137d05c(psVar1 + 0xc);
      uVar3 = (uVar3 ^ 0xffffffff) & 1;
    }
    else {
      uVar3 = 0;
    }
  }
  return uVar3;
}

