
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0312fd30(long param_1,undefined8 param_2,undefined8 param_3)

{
  uint uVar1;
  bool bVar2;
  int iVar3;
  undefined8 uVar4;
  ulong uVar5;
  long lVar6;
  long lVar7;
  ulong uVar8;
  ulong uVar9;
  
  if (((DAT_056f60d0 & 1) == 0) && (iVar3 = __cxa_guard_acquire(&DAT_056f60d0), iVar3 != 0)) {
    DAT_056f6090 = PTR_DAT_04bb2020 + 0x10;
    DAT_056f6098 = "*StampIn";
    DAT_056f60a8 = &DAT_0407ebb1;
    DAT_056f60c8 = &DAT_0407ebb1;
    DAT_056f60b8 = "*Type";
    DAT_056f60a0 = DAT_056f6090;
    DAT_056f60b0 = DAT_056f6090;
    DAT_056f60c0 = DAT_056f6090;
    __cxa_guard_release(&DAT_056f60d0);
  }
  if (((DAT_056f60e8 & 1) == 0) && (iVar3 = __cxa_guard_acquire(&DAT_056f60e8), iVar3 != 0)) {
    _DAT_056f60d8 = 0x200000002;
    DAT_056f60e0 = &DAT_056f6090;
    __cxa_guard_release(&DAT_056f60e8);
  }
  uVar1 = DAT_056f60dc;
  uVar8 = (ulong)DAT_056f60dc;
  if (0 < (int)DAT_056f60dc) {
    uVar4 = FUN_03c68d44(param_2,DAT_056f60e0,DAT_056f60e0 + (ulong)(1 < DAT_056f60d8) * 2);
    *(undefined8 *)(param_1 + 0x250) = uVar4;
    if (uVar1 != 1) {
      uVar5 = (ulong)(int)DAT_056f60d8;
      uVar9 = uVar5;
      if (uVar5 == 0 || DAT_056f60dc < 2) {
        uVar9 = 0;
      }
      lVar7 = 0;
      if (1 < uVar5 && DAT_056f60dc >= 2) {
        lVar7 = uVar5 + 1;
      }
      uVar4 = FUN_03c68d44(param_2,DAT_056f60e0 + uVar9 * 2,DAT_056f60e0 + lVar7 * 2);
      *(undefined8 *)(param_1 + 600) = uVar4;
      if (uVar1 != 2) {
        uVar9 = 2;
        do {
          iVar3 = DAT_056f60d8 * (int)uVar9;
          bVar2 = _DAT_056f60d8 >> 0x20 <= uVar9;
          lVar7 = (long)iVar3;
          if (DAT_056f60d8 == 0 || bVar2) {
            lVar7 = 0;
          }
          lVar6 = (long)(iVar3 + 1);
          if (DAT_056f60d8 < 2 || bVar2) {
            lVar6 = 0;
          }
          uVar4 = FUN_03c68d44(param_2,DAT_056f60e0 + lVar7 * 2,DAT_056f60e0 + lVar6 * 2);
          uVar9 = uVar9 + 1;
          *(undefined8 *)(param_1 + 0x250) = uVar4;
        } while (uVar8 != uVar9);
      }
    }
  }
  FUN_030bc030(param_1,param_2,param_3);
  return;
}

