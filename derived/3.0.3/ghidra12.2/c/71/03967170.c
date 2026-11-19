
long FUN_03967170(long param_1,undefined8 param_2,undefined8 param_3,ulong param_4)

{
  ulong uVar1;
  long lVar2;
  long lVar3;
  
  if (*(long *)(param_1 + 0x10) == 0) {
    return 0;
  }
  if ((param_4 & 1) == 0) {
    lVar2 = *(long *)(param_1 + 0x58);
    if (*(int *)(param_1 + 0x68) < 1) {
      lVar2 = 0;
    }
    if (lVar2 == 0) {
      return 0;
    }
    lVar2 = lVar2 - *(int *)(param_1 + 0x6c);
    if (lVar2 == 0) {
      return 0;
    }
    do {
      uVar1 = FUN_03967280(param_1,lVar2,param_2,param_3,0);
      if ((uVar1 & 1) != 0) {
        return lVar2;
      }
      lVar3 = *(long *)(lVar2 + *(int *)(param_1 + 0x6c));
      lVar2 = lVar3 - *(int *)(param_1 + 0x6c);
    } while (lVar3 != param_1 + 0x58 && lVar2 != 0);
  }
  else {
    lVar2 = *(long *)(param_1 + 0x60);
    if (*(int *)(param_1 + 0x68) < 1) {
      lVar2 = 0;
    }
    if (lVar2 == 0) {
      return 0;
    }
    lVar2 = lVar2 - *(int *)(param_1 + 0x6c);
    if (lVar2 == 0) {
      return 0;
    }
    do {
      uVar1 = FUN_03967280(param_1,lVar2,param_2,param_3,1);
      if ((uVar1 & 1) != 0) {
        return lVar2;
      }
      lVar3 = *(long *)(lVar2 + *(int *)(param_1 + 0x6c) + 8);
      lVar2 = lVar3 - *(int *)(param_1 + 0x6c);
    } while (lVar3 != param_1 + 0x58 && lVar2 != 0);
  }
  return 0;
}

