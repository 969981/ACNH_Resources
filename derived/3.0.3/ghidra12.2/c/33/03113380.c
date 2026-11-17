
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_03113380(long param_1,undefined8 param_2,undefined8 param_3)

{
  uint uVar1;
  int iVar2;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  uint uVar6;
  
  if (((DAT_056f31f8 & 1) == 0) && (iVar2 = __cxa_guard_acquire(&DAT_056f31f8), iVar2 != 0)) {
    DAT_056f31d8 = PTR_DAT_04bb2020 + 0x10;
    DAT_056f31e0 = &DAT_040fe5ab;
    DAT_056f31f0 = &DAT_0407ebb1;
    DAT_056f31e8 = DAT_056f31d8;
    __cxa_guard_release(&DAT_056f31f8);
  }
  if (((DAT_056f3210 & 1) == 0) && (iVar2 = __cxa_guard_acquire(&DAT_056f3210), iVar2 != 0)) {
    _DAT_056f3200 = 0x100000002;
    DAT_056f3208 = &DAT_056f31d8;
    __cxa_guard_release(&DAT_056f3210);
  }
  uVar1 = DAT_056f3204;
  if (0 < (int)DAT_056f3204) {
    uVar6 = 0;
    do {
      lVar5 = (long)(int)(DAT_056f3200 * uVar6);
      if (DAT_056f3200 == 0 || DAT_056f3204 <= uVar6) {
        lVar5 = 0;
      }
      lVar4 = (long)(int)(DAT_056f3200 * uVar6 + 1);
      if (DAT_056f3200 < 2 || DAT_056f3204 <= uVar6) {
        lVar4 = 0;
      }
      uVar3 = FUN_03c68d44(param_2,DAT_056f3208 + lVar5 * 2,DAT_056f3208 + lVar4 * 2);
      uVar6 = uVar6 + 1;
      *(undefined8 *)(param_1 + 0x208) = uVar3;
    } while (uVar1 != uVar6);
  }
  FUN_030bc030(param_1,param_2,param_3);
  return;
}

