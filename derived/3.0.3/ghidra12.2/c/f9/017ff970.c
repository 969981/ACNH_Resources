
byte FUN_017ff970(undefined4 param_1,uint param_2)

{
  byte bVar1;
  long lVar2;
  ulong uVar3;
  long lVar4;
  undefined8 *puVar5;
  uint local_2c;
  uint local_28;
  uint local_24;
  
  local_2c = 0;
  uVar3 = FUN_02b5e950(&local_2c,param_1);
  if ((uVar3 & 1) == 0) {
    return 0;
  }
  local_24 = local_2c;
  if (DAT_05574040 != 0) {
    puVar5 = *(undefined8 **)(DAT_05574040 + 0x10);
    local_28 = param_2;
    if ((*(byte *)(DAT_05574040 + 0x453) & 1) == 0) {
      lVar4 = (**(code **)(*(long *)*puVar5 + 0x38))();
      if (lVar4 == 0) {
        return 0;
      }
      lVar4 = lVar4 + 0x70;
    }
    else {
      if (puVar5 == (undefined8 *)0x0) {
        return 0;
      }
      if ((long *)puVar5[0x26] == (long *)0x0) {
        return 0;
      }
      lVar4 = (**(code **)(*(long *)puVar5[0x26] + 0x38))();
      if (lVar4 == 0) {
        return 0;
      }
    }
    if (local_24 < 8) {
      lVar2 = lVar4 + 0x119228 + (ulong)local_24 * 0xfa08;
      if (7 < local_24) {
        lVar2 = lVar4 + 0x119228;
      }
      lVar4 = lVar2 + 0x1df8 + (ulong)local_28 * 0x2488;
      if (5 < local_28) {
        lVar4 = lVar2 + 0x1df8;
      }
      if ((*(long **)(lVar4 + 0x1ec8) == (long *)0x0) ||
         (puVar5 = (undefined8 *)**(long **)(lVar4 + 0x1ec8), puVar5 == (undefined8 *)0x0)) {
        return *(byte *)(*(long *)(lVar4 + 0x1eb0) + *(long *)(lVar4 + 0x1ea8) + 0x20) & 1;
      }
      uVar3 = (**(code **)*puVar5)();
      bVar1 = *(byte *)(*(long *)(lVar4 + 0x1eb0) + *(long *)(lVar4 + 0x1ea8) + 0x20) & 1;
      if ((uVar3 & 1) == 0) {
        return bVar1;
      }
      if (*(long *)(lVar4 + 0x1ec8) == 0) {
        return bVar1;
      }
      puVar5 = *(undefined8 **)(*(long *)(lVar4 + 0x1ec8) + 8);
      if (puVar5 == (undefined8 *)0x0) {
        return bVar1;
      }
      (**(code **)*puVar5)();
      return bVar1;
    }
  }
  return 0;
}

