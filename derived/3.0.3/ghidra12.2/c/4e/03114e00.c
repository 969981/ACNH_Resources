
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_03114e00(long param_1,undefined8 param_2,undefined8 param_3)

{
  uint uVar1;
  int iVar2;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  uint uVar6;
  
  if (((DAT_056f3398 & 1) == 0) && (iVar2 = __cxa_guard_acquire(&DAT_056f3398), iVar2 != 0)) {
    DAT_056f3378 = PTR_DAT_04bb2020 + 0x10;
    DAT_056f3380 = &DAT_040a0741;
    DAT_056f3390 = &DAT_0407ebb1;
    DAT_056f3388 = DAT_056f3378;
    __cxa_guard_release(&DAT_056f3398);
  }
  if (((DAT_056f33b0 & 1) == 0) && (iVar2 = __cxa_guard_acquire(&DAT_056f33b0), iVar2 != 0)) {
    _DAT_056f33a0 = 0x100000002;
    DAT_056f33a8 = &DAT_056f3378;
    __cxa_guard_release(&DAT_056f33b0);
  }
  uVar1 = DAT_056f33a4;
  if (0 < (int)DAT_056f33a4) {
    uVar6 = 0;
    do {
      lVar5 = (long)(int)(DAT_056f33a0 * uVar6);
      if (DAT_056f33a0 == 0 || DAT_056f33a4 <= uVar6) {
        lVar5 = 0;
      }
      lVar4 = (long)(int)(DAT_056f33a0 * uVar6 + 1);
      if (DAT_056f33a0 < 2 || DAT_056f33a4 <= uVar6) {
        lVar4 = 0;
      }
      uVar3 = FUN_03c68d44(param_2,DAT_056f33a8 + lVar5 * 2,DAT_056f33a8 + lVar4 * 2);
      uVar6 = uVar6 + 1;
      *(undefined8 *)(param_1 + 0x208) = uVar3;
    } while (uVar1 != uVar6);
  }
  if (((DAT_056f33c8 & 1) == 0) && (iVar2 = __cxa_guard_acquire(&DAT_056f33c8), iVar2 != 0)) {
    DAT_056f33b8 = PTR_DAT_04bb2020 + 0x10;
    DAT_056f33c0 = "@T_SubText_00";
    __cxa_guard_release(&DAT_056f33c8);
  }
  uVar3 = FUN_03462740(param_1,param_2,&DAT_056f33b8);
  *(undefined8 *)(param_1 + 0x210) = uVar3;
  FUN_030bc030(param_1,param_2,param_3);
  return;
}

