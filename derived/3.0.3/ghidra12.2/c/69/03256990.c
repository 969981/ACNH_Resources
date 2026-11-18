
int FUN_03256990(undefined8 param_1,undefined8 param_2)

{
  int iVar1;
  uint uVar2;
  undefined4 uVar3;
  ulong uVar4;
  int iVar5;
  int iVar6;
  
  uVar4 = FUN_03256ab0(param_2);
  if ((uVar4 & 1) == 0) {
    uVar4 = FUN_032566f0(param_1,param_2);
    if ((uVar4 & 1) != 0) {
      uVar3 = FUN_02798760(param_1,param_2);
      iVar1 = FUN_02798b88(param_1,param_2,uVar3);
      if (0 < iVar1) {
        iVar6 = 0;
        iVar5 = 0;
        do {
          iVar6 = iVar6 + 1;
          uVar2 = FUN_0279bb10(param_1,param_2,iVar6);
          iVar5 = iVar5 + ((uVar2 ^ 0xffffffff) & 1);
        } while (iVar1 != iVar6);
        return iVar5;
      }
    }
  }
  else {
    iVar1 = FUN_027a51c0(param_2);
    if (0 < iVar1) {
      iVar6 = 0;
      iVar5 = 0;
      do {
        iVar6 = iVar6 + 1;
        uVar4 = FUN_0279d6d0(param_1,param_2);
        if ((uVar4 & 1) != 0) {
          uVar2 = FUN_0279bb10(param_1,param_2,iVar6);
          iVar5 = iVar5 + ((uVar2 ^ 0xffffffff) & 1);
        }
      } while (iVar1 != iVar6);
      return iVar5;
    }
  }
  return 0;
}

