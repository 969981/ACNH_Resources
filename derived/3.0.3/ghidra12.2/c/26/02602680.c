
long FUN_02602680(long param_1)

{
  long lVar1;
  long lVar2;
  ulong uVar3;
  undefined8 *puVar4;
  uint local_1c;
  byte local_18 [4];
  uint local_14;
  
  local_18[0] = *(byte *)(param_1 + 0x18);
  if (local_18[0] < 8) {
    lVar2 = FUN_0266c700(local_18);
    return lVar2;
  }
  local_18[0] = 0xff;
  if (*(int *)(param_1 + 0x1c) != -1) {
    local_1c = 0;
    uVar3 = FUN_02b5e950(&local_1c);
    if (((uVar3 & 1) != 0) && (local_14 = local_1c, DAT_05574040 != 0)) {
      puVar4 = *(undefined8 **)(DAT_05574040 + 0x10);
      if ((*(byte *)(DAT_05574040 + 0x453) & 1) == 0) {
        lVar2 = (**(code **)(*(long *)*puVar4 + 0x38))();
        if (lVar2 == 0) {
          return 0;
        }
        lVar2 = lVar2 + 0x70;
      }
      else {
        if (puVar4 == (undefined8 *)0x0) {
          return 0;
        }
        if ((long *)puVar4[0x26] == (long *)0x0) {
          return 0;
        }
        lVar2 = (**(code **)(*(long *)puVar4[0x26] + 0x38))();
        if (lVar2 == 0) {
          return 0;
        }
      }
      if (local_14 < 8) {
        lVar1 = lVar2 + 0x119228 + (ulong)local_14 * 0xfa08;
        if (7 < local_14) {
          lVar1 = lVar2 + 0x119228;
        }
        return lVar1;
      }
    }
  }
  return 0;
}

