
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_030da434(long param_1,undefined8 param_2)

{
  long lVar1;
  uint uVar2;
  undefined8 *puVar3;
  int iVar4;
  undefined8 uVar5;
  ulong uVar6;
  ulong uVar7;
  long lVar8;
  
  FUN_03d6627c();
  if (((DAT_056ec740 & 1) == 0) && (iVar4 = __cxa_guard_acquire(&DAT_056ec740), iVar4 != 0)) {
    DAT_056ec6e0 = PTR_DAT_04bb2020 + 0x10;
    DAT_056ec6e8 = "Catch";
    DAT_056ec6f8 = &DAT_0407ebb1;
    DAT_056ec718 = &DAT_0407ebb1;
    DAT_056ec708 = &DAT_04100633;
    DAT_056ec728 = "SubScale";
    DAT_056ec738 = &DAT_0407ebb1;
    DAT_056ec6f0 = DAT_056ec6e0;
    DAT_056ec700 = DAT_056ec6e0;
    DAT_056ec710 = DAT_056ec6e0;
    DAT_056ec720 = DAT_056ec6e0;
    DAT_056ec730 = DAT_056ec6e0;
    __cxa_guard_release(&DAT_056ec740);
  }
  if (((DAT_056ec758 & 1) == 0) && (iVar4 = __cxa_guard_acquire(&DAT_056ec758), iVar4 != 0)) {
    _DAT_056ec748 = 0x300000002;
    DAT_056ec750 = &DAT_056ec6e0;
    __cxa_guard_release(&DAT_056ec758);
  }
  uVar5 = FUN_03c68d44(param_2,DAT_056ec750,
                       DAT_056ec750 + (ulong)(1 < DAT_056ec748 && DAT_056ec74c != 0) * 2);
  puVar3 = DAT_056ec750;
  uVar2 = DAT_056ec74c;
  uVar6 = (ulong)(int)DAT_056ec748;
  *(undefined8 *)(param_1 + 0x2c8) = uVar5;
  uVar7 = uVar6;
  if (uVar6 == 0 || uVar2 < 2) {
    uVar7 = 0;
  }
  lVar1 = 0;
  if (1 < uVar6 && uVar2 >= 2) {
    lVar1 = uVar6 + 1;
  }
  uVar5 = FUN_03c68d44(param_2,puVar3 + uVar7 * 2,puVar3 + lVar1 * 2);
  puVar3 = DAT_056ec750;
  uVar2 = DAT_056ec74c;
  uVar7 = (ulong)(int)DAT_056ec748;
  *(undefined8 *)(param_1 + 0x2d0) = uVar5;
  lVar1 = uVar7 << 1;
  if (uVar7 == 0 || uVar2 < 3) {
    lVar1 = 0;
  }
  lVar8 = (long)(int)((uint)(uVar7 << 1) | 1);
  if (uVar7 < 2 || uVar2 < 3) {
    lVar8 = 0;
  }
  uVar5 = FUN_03c68d44(param_2,puVar3 + lVar1 * 2,puVar3 + lVar8 * 2);
  *(undefined8 *)(param_1 + 0x2d8) = uVar5;
  return;
}

