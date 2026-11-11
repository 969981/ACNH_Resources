
void FUN_005131d0(long param_1,long param_2)

{
  int iVar1;
  long lVar2;
  int iVar3;
  
  if (*(int *)(param_1 + 0x20) < 1) {
    iVar3 = -1;
  }
  else {
    lVar2 = 0;
    iVar3 = -1;
    do {
      if (*(long *)(*(long *)(param_1 + 0x18) + lVar2 * 8) == param_2) {
        iVar3 = (int)lVar2;
        break;
      }
      lVar2 = lVar2 + 1;
    } while (lVar2 < *(int *)(param_1 + 0x20));
  }
  FUN_004468f0(param_2 + 0x98,param_1);
  FUN_004468f0(param_2 + 0xa0,param_1);
  FUN_004468f0(param_2 + 0x100,param_1);
  FUN_004468f0(param_2 + 0xd0,param_1);
  FUN_004468f0(param_2 + 0x110,param_1);
  FUN_004468f0(param_2 + 200,param_1);
  FUN_004468f0(param_2 + 0x120,param_1);
  FUN_00512d50(param_1 + 0xa8,param_1,param_2);
  lVar2 = (long)*(int *)(param_1 + 0x20) + -1;
  iVar1 = (int)lVar2;
  *(int *)(param_1 + 0x20) = iVar1;
  if (iVar1 != iVar3) {
    *(undefined8 *)(*(long *)(param_1 + 0x18) + (long)iVar3 * 8) =
         *(undefined8 *)(*(long *)(param_1 + 0x18) + lVar2 * 8);
  }
  if (0 < *(int *)(param_2 + 0x48)) {
    lVar2 = 0;
    do {
      FUN_0053c880(*(undefined8 *)(*(long *)(param_2 + 0x40) + lVar2 * 8),0);
      lVar2 = lVar2 + 1;
    } while (lVar2 < *(int *)(param_2 + 0x48));
  }
  FUN_004435c0(param_2);
  return;
}

