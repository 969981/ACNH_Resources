
uint FUN_0306df80(long param_1,uint param_2)

{
  long lVar1;
  uint uVar2;
  int iVar3;
  ulong uVar4;
  undefined1 auStack_16d0 [5792];
  undefined1 local_18 [6];
  undefined1 auStack_12 [2];
  
  lVar1 = param_1 + 0x98;
  if (*(int *)(param_1 + 0xa0) != -1) {
    if ((param_2 < 0x15) && ((0x18004fU >> (ulong)(param_2 & 0x1f) & 1) != 0)) {
      uVar2 = 0x1fffb3U >> (ulong)(param_2 & 0x1f) & 1;
      goto LAB_0306e0fc;
    }
LAB_0306e034:
    if (param_2 < 0x15) {
      uVar2 = 1;
      if ((1 << (ulong)(param_2 & 0x1f) & 0x180007U) != 0) goto LAB_0306e0fc;
      if (param_2 == 3) {
        uVar2 = FUN_0308c170(param_1 + 0x9a,lVar1);
        goto LAB_0306e0fc;
      }
      if (param_2 == 6) goto switchD_0306e024_caseD_6;
    }
    goto switchD_0306e024_caseD_2;
  }
  FUN_007ef010(local_18,lVar1);
  FUN_007e4920(auStack_16d0,local_18);
  uVar4 = FUN_007e4bb0(auStack_16d0);
  if ((uVar4 & 1) == 0) goto LAB_0306e034;
  switch(param_2) {
  case 0:
    uVar2 = FUN_0308bb70(lVar1);
    goto LAB_0306e0fc;
  case 1:
    FUN_007ef010(auStack_12,lVar1);
    FUN_007e4920(auStack_16d0,auStack_12);
    uVar4 = FUN_007e4bb0(auStack_16d0);
    if (((uVar4 & 1) != 0) && (iVar3 = FUN_007e68d0(auStack_16d0), iVar3 != 0)) {
      uVar2 = (uint)(iVar3 != 1);
      goto LAB_0306e0fc;
    }
    break;
  case 3:
    uVar4 = FUN_0308c170(param_1 + 0x9a,lVar1);
    if ((uVar4 & 1) != 0) {
      uVar2 = FUN_0308c2c0(param_1 + 0x9a,lVar1);
      goto LAB_0306e0fc;
    }
    break;
  case 6:
switchD_0306e024_caseD_6:
    uVar2 = FUN_0308c170(param_1 + 0x9a,lVar1);
    uVar2 = uVar2 ^ 1;
    goto LAB_0306e0fc;
  case 7:
    uVar2 = FUN_0308bca0(lVar1);
    goto LAB_0306e0fc;
  }
switchD_0306e024_caseD_2:
  uVar2 = 0;
LAB_0306e0fc:
  return uVar2 & 1;
}

