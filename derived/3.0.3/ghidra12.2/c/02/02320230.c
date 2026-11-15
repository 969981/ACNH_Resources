
bool FUN_02320230(long param_1)

{
  int *piVar1;
  int iVar2;
  long lVar3;
  ulong uVar4;
  int *piVar5;
  
  param_1 = param_1 + 0x1ee8;
  iVar2 = FUN_00a74b78(param_1);
  if ((iVar2 != 0x13) && (iVar2 = FUN_00a74b78(param_1), iVar2 != 9)) {
    lVar3 = FUN_00a77090(param_1);
    if ((lVar3 != 0) || (lVar3 = FUN_00a76ee4(param_1), lVar3 != 0)) {
      if (-1 < (int)DAT_04c47dc0) {
        uVar4 = 0;
        piVar5 = (int *)PTR_DAT_04bb6258;
        do {
          piVar1 = piVar5;
          if (999 < uVar4) {
            piVar1 = (int *)PTR_DAT_04bb6258;
          }
          if ((*piVar1 != 0) && (*(long *)(piVar1 + 2) == *(long *)(lVar3 + 8))) {
            if ((uint)uVar4 != 0xffffffff) {
              if (999 < (uint)uVar4) {
                piVar5 = (int *)PTR_DAT_04bb6258;
              }
              if (*piVar5 != 0) {
                return true;
              }
            }
            break;
          }
          uVar4 = uVar4 + 1;
          piVar5 = piVar5 + 4;
        } while ((ulong)DAT_04c47dc0 + 1 != uVar4);
      }
    }
    lVar3 = FUN_00a77090(param_1);
    if (lVar3 == 0) {
      return false;
    }
    if (-1 < (int)DAT_04c47dc0) {
      uVar4 = 0;
      piVar5 = (int *)PTR_DAT_04bb6258;
      do {
        piVar1 = piVar5;
        if (999 < uVar4) {
          piVar1 = (int *)PTR_DAT_04bb6258;
        }
        if ((*piVar1 != 0) && (*(long *)(piVar1 + 2) == *(long *)(lVar3 + 0x10))) {
          if ((uint)uVar4 == 0xffffffff) {
            return false;
          }
          if (999 < (uint)uVar4) {
            piVar5 = (int *)PTR_DAT_04bb6258;
          }
          return *piVar5 != 0;
        }
        uVar4 = uVar4 + 1;
        piVar5 = piVar5 + 4;
      } while ((ulong)DAT_04c47dc0 + 1 != uVar4);
    }
  }
  return false;
}

