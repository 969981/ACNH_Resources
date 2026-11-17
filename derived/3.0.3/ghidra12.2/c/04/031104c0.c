
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_031104c0(long param_1,undefined8 param_2,undefined8 param_3)

{
  uint uVar1;
  int iVar2;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  uint uVar6;
  
  if (((DAT_056f30a0 & 1) == 0) && (iVar2 = __cxa_guard_acquire(&DAT_056f30a0), iVar2 != 0)) {
    DAT_056f3080 = PTR_DAT_04bb2020 + 0x10;
    DAT_056f3088 = &DAT_0407c03e;
    DAT_056f3098 = &DAT_0407ebb1;
    DAT_056f3090 = DAT_056f3080;
    __cxa_guard_release(&DAT_056f30a0);
  }
  if (((DAT_056f30b8 & 1) == 0) && (iVar2 = __cxa_guard_acquire(&DAT_056f30b8), iVar2 != 0)) {
    _DAT_056f30a8 = 0x100000002;
    DAT_056f30b0 = &DAT_056f3080;
    __cxa_guard_release(&DAT_056f30b8);
  }
  uVar1 = DAT_056f30ac;
  if (0 < (int)DAT_056f30ac) {
    uVar6 = 0;
    do {
      lVar5 = (long)(int)(DAT_056f30a8 * uVar6);
      if (DAT_056f30a8 == 0 || DAT_056f30ac <= uVar6) {
        lVar5 = 0;
      }
      lVar4 = (long)(int)(DAT_056f30a8 * uVar6 + 1);
      if (DAT_056f30a8 < 2 || DAT_056f30ac <= uVar6) {
        lVar4 = 0;
      }
      uVar3 = FUN_03c68d44(param_2,DAT_056f30b0 + lVar5 * 2,DAT_056f30b0 + lVar4 * 2);
      uVar6 = uVar6 + 1;
      *(undefined8 *)(param_1 + 0x208) = uVar3;
    } while (uVar1 != uVar6);
  }
  if (((DAT_056f30d0 & 1) == 0) && (iVar2 = __cxa_guard_acquire(&DAT_056f30d0), iVar2 != 0)) {
    DAT_056f30c0 = PTR_DAT_04bb2020 + 0x10;
    DAT_056f30c8 = "P_Stamp_00";
    __cxa_guard_release(&DAT_056f30d0);
  }
  (**(code **)(DAT_056f30c0 + 0x18))(&DAT_056f30c0);
  if (*DAT_056f30c8 == '\0') {
LAB_031105f4:
    FUN_0386fd70(&DAT_056f30c0);
    uVar3 = FUN_03c688b0(param_2,&DAT_056f30c0);
  }
  else {
    if (*DAT_056f30c8 != '@') {
      lVar5 = 0;
      do {
        if ((lVar5 == 0x80000) || (lVar4 = lVar5 + 1, DAT_056f30c8[lVar4] == '\0'))
        goto LAB_031105f4;
        lVar5 = lVar5 + 1;
      } while (DAT_056f30c8[lVar4] != '@');
    }
    uVar3 = FUN_03c68b00(param_2,&DAT_056f30c0);
  }
  *(undefined8 *)(param_1 + 0x210) = uVar3;
  FUN_030bc030(param_1,param_2,param_3);
  return;
}

