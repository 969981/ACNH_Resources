
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0310ce30(long param_1,undefined8 param_2,undefined8 param_3)

{
  uint uVar1;
  int iVar2;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  uint uVar6;
  
  if (((DAT_056f2ba8 & 1) == 0) && (iVar2 = __cxa_guard_acquire(&DAT_056f2ba8), iVar2 != 0)) {
    DAT_056f2b88 = PTR_DAT_04bb2020 + 0x10;
    DAT_056f2b90 = &DAT_0407c03e;
    DAT_056f2ba0 = &DAT_0407ebb1;
    DAT_056f2b98 = DAT_056f2b88;
    __cxa_guard_release(&DAT_056f2ba8);
  }
  if (((DAT_056f2bc0 & 1) == 0) && (iVar2 = __cxa_guard_acquire(&DAT_056f2bc0), iVar2 != 0)) {
    _DAT_056f2bb0 = 0x100000002;
    DAT_056f2bb8 = &DAT_056f2b88;
    __cxa_guard_release(&DAT_056f2bc0);
  }
  uVar1 = DAT_056f2bb4;
  if (0 < (int)DAT_056f2bb4) {
    uVar6 = 0;
    do {
      lVar5 = (long)(int)(DAT_056f2bb0 * uVar6);
      if (DAT_056f2bb0 == 0 || DAT_056f2bb4 <= uVar6) {
        lVar5 = 0;
      }
      lVar4 = (long)(int)(DAT_056f2bb0 * uVar6 + 1);
      if (DAT_056f2bb0 < 2 || DAT_056f2bb4 <= uVar6) {
        lVar4 = 0;
      }
      uVar3 = FUN_03c68d44(param_2,DAT_056f2bb8 + lVar5 * 2,DAT_056f2bb8 + lVar4 * 2);
      uVar6 = uVar6 + 1;
      *(undefined8 *)(param_1 + 0x208) = uVar3;
    } while (uVar1 != uVar6);
  }
  FUN_030bc030(param_1,param_2,param_3);
  return;
}

