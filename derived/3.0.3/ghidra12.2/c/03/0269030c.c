
bool FUN_0269030c(undefined8 param_1,ulong param_2)

{
  bool bVar1;
  long lVar2;
  uint uVar3;
  uint uVar4;
  ulong uVar5;
  long lVar6;
  undefined8 *puVar7;
  uint local_28;
  uint local_24;
  
  if ((int)param_2 == -1) {
    param_2 = FUN_021d7d60();
    param_2 = param_2 & 0xffffffff;
  }
  local_28 = 0;
  uVar5 = FUN_02b67a30(&local_28,param_2);
  if ((uVar5 & 1) == 0) {
    return false;
  }
  local_24 = local_28;
  if (DAT_05574040 != 0) {
    puVar7 = *(undefined8 **)(DAT_05574040 + 0x10);
    if ((*(byte *)(DAT_05574040 + 0x453) & 1) == 0) {
      lVar6 = (**(code **)(*(long *)*puVar7 + 0x38))();
      if (lVar6 == 0) {
        return false;
      }
      lVar6 = lVar6 + 0x70;
    }
    else {
      if (puVar7 == (undefined8 *)0x0) {
        return false;
      }
      if ((long *)puVar7[0x26] == (long *)0x0) {
        return false;
      }
      lVar6 = (**(code **)(*(long *)puVar7[0x26] + 0x38))();
      if (lVar6 == 0) {
        return false;
      }
    }
    if (local_24 < 10) {
      lVar2 = lVar6 + 0x1962d8 + (ulong)local_24 * 0x10d8;
      if (9 < local_24) {
        lVar2 = lVar6 + 0x1962d8;
      }
      if ((*(long **)(lVar2 + 0x28) == (long *)0x0) ||
         (puVar7 = (undefined8 *)**(long **)(lVar2 + 0x28), puVar7 == (undefined8 *)0x0)) {
        uVar4 = 1;
      }
      else {
        uVar4 = (**(code **)*puVar7)();
        uVar4 = uVar4 ^ 1;
      }
      uVar3 = *(uint *)(*(long *)(lVar2 + 0x10) + *(long *)(lVar2 + 8));
      if (2 < uVar3) {
        uVar3 = 0;
      }
      bVar1 = 1 < (int)uVar3;
      if ((uVar4 & 1) != 0) {
        return bVar1;
      }
      if (*(long *)(lVar2 + 0x28) == 0) {
        return bVar1;
      }
      puVar7 = *(undefined8 **)(*(long *)(lVar2 + 0x28) + 8);
      if (puVar7 == (undefined8 *)0x0) {
        return bVar1;
      }
      (**(code **)*puVar7)();
      return bVar1;
    }
  }
  return false;
}

