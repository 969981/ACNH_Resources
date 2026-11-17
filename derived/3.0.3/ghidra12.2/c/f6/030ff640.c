
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_030ff640(long param_1,undefined8 param_2,undefined8 param_3)

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
  
  if (((DAT_056f1548 & 1) == 0) && (iVar3 = __cxa_guard_acquire(&DAT_056f1548), iVar3 != 0)) {
    DAT_056f1508 = PTR_DAT_04bb2020 + 0x10;
    DAT_056f1510 = "Scale";
    DAT_056f1520 = &DAT_0407ebb1;
    DAT_056f1540 = &DAT_0407ebb1;
    DAT_056f1530 = &DAT_040c447a;
    DAT_056f1518 = DAT_056f1508;
    DAT_056f1528 = DAT_056f1508;
    DAT_056f1538 = DAT_056f1508;
    __cxa_guard_release(&DAT_056f1548);
  }
  if (((DAT_056f1560 & 1) == 0) && (iVar3 = __cxa_guard_acquire(&DAT_056f1560), iVar3 != 0)) {
    _DAT_056f1550 = 0x200000002;
    DAT_056f1558 = &DAT_056f1508;
    __cxa_guard_release(&DAT_056f1560);
  }
  uVar1 = DAT_056f1554;
  uVar8 = (ulong)DAT_056f1554;
  if (0 < (int)DAT_056f1554) {
    uVar4 = FUN_03c68d44(param_2,DAT_056f1558,DAT_056f1558 + (ulong)(1 < DAT_056f1550) * 2);
    *(undefined8 *)(param_1 + 0x408) = uVar4;
    if (uVar1 != 1) {
      uVar5 = (ulong)(int)DAT_056f1550;
      uVar9 = uVar5;
      if (uVar5 == 0 || DAT_056f1554 < 2) {
        uVar9 = 0;
      }
      lVar7 = 0;
      if (1 < uVar5 && DAT_056f1554 >= 2) {
        lVar7 = uVar5 + 1;
      }
      uVar4 = FUN_03c68d44(param_2,DAT_056f1558 + uVar9 * 2,DAT_056f1558 + lVar7 * 2);
      *(undefined8 *)(param_1 + 0x410) = uVar4;
      if (uVar1 != 2) {
        uVar9 = 2;
        do {
          iVar3 = DAT_056f1550 * (int)uVar9;
          bVar2 = _DAT_056f1550 >> 0x20 <= uVar9;
          lVar7 = (long)iVar3;
          if (DAT_056f1550 == 0 || bVar2) {
            lVar7 = 0;
          }
          lVar6 = (long)(iVar3 + 1);
          if (DAT_056f1550 < 2 || bVar2) {
            lVar6 = 0;
          }
          uVar4 = FUN_03c68d44(param_2,DAT_056f1558 + lVar7 * 2,DAT_056f1558 + lVar6 * 2);
          uVar9 = uVar9 + 1;
          *(undefined8 *)(param_1 + 0x408) = uVar4;
        } while (uVar8 != uVar9);
      }
    }
  }
  if (((DAT_056f15e8 & 1) == 0) && (iVar3 = __cxa_guard_acquire(&DAT_056f15e8), iVar3 != 0)) {
    DAT_056f1568 = PTR_DAT_04bb2020 + 0x10;
    DAT_056f1570 = "@T_Do_00";
    DAT_056f1580 = "@T_Re_00";
    DAT_056f1590 = "@T_Mi_00";
    DAT_056f15b0 = "@T_Sol_00";
    DAT_056f15c0 = "@T_La_00";
    DAT_056f15a0 = "@T_Fa_00";
    DAT_056f15d0 = "@T_Si_00";
    DAT_056f15e0 = "@T_Random_00";
    DAT_056f1578 = DAT_056f1568;
    DAT_056f1588 = DAT_056f1568;
    DAT_056f1598 = DAT_056f1568;
    DAT_056f15a8 = DAT_056f1568;
    DAT_056f15b8 = DAT_056f1568;
    DAT_056f15c8 = DAT_056f1568;
    DAT_056f15d8 = DAT_056f1568;
    __cxa_guard_release(&DAT_056f15e8);
  }
  uVar4 = FUN_03462740(param_1,param_2,&DAT_056f1568);
  *(undefined8 *)(param_1 + 0x418) = uVar4;
  uVar4 = FUN_03462740(param_1,param_2,&DAT_056f1578);
  *(undefined8 *)(param_1 + 0x420) = uVar4;
  uVar4 = FUN_03462740(param_1,param_2,&DAT_056f1588);
  *(undefined8 *)(param_1 + 0x428) = uVar4;
  uVar4 = FUN_03462740(param_1,param_2,&DAT_056f1598);
  *(undefined8 *)(param_1 + 0x430) = uVar4;
  uVar4 = FUN_03462740(param_1,param_2,&DAT_056f15a8);
  *(undefined8 *)(param_1 + 0x438) = uVar4;
  uVar4 = FUN_03462740(param_1,param_2,&DAT_056f15b8);
  *(undefined8 *)(param_1 + 0x440) = uVar4;
  uVar4 = FUN_03462740(param_1,param_2,&DAT_056f15c8);
  *(undefined8 *)(param_1 + 0x448) = uVar4;
  uVar4 = FUN_03462740(param_1,param_2,&DAT_056f15d8);
  *(undefined8 *)(param_1 + 0x450) = uVar4;
  FUN_030bf100(param_1,param_2,param_3);
  return;
}

