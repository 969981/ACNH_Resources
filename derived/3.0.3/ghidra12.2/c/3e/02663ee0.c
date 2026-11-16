
long FUN_02663ee0(undefined4 *param_1)

{
  long lVar1;
  ulong uVar2;
  long lVar3;
  undefined8 *puVar4;
  uint local_18;
  uint local_14;
  
  local_18 = 0;
  uVar2 = FUN_02b67a30(&local_18,*param_1);
  if (((uVar2 & 1) != 0) && (local_14 = local_18, DAT_05574040 != 0)) {
    puVar4 = *(undefined8 **)(DAT_05574040 + 0x10);
    if ((*(byte *)(DAT_05574040 + 0x453) & 1) == 0) {
      lVar3 = (**(code **)(*(long *)*puVar4 + 0x38))();
      if (lVar3 == 0) {
        return 0;
      }
      lVar3 = lVar3 + 0x70;
    }
    else {
      if (puVar4 == (undefined8 *)0x0) {
        return 0;
      }
      if ((long *)puVar4[0x26] == (long *)0x0) {
        return 0;
      }
      lVar3 = (**(code **)(*(long *)puVar4[0x26] + 0x38))();
      if (lVar3 == 0) {
        return 0;
      }
    }
    if (local_14 < 10) {
      lVar1 = lVar3 + 0x1962d8 + (ulong)local_14 * 0x10d8;
      if (9 < local_14) {
        lVar1 = lVar3 + 0x1962d8;
      }
      return lVar1 + 0x850;
    }
  }
  return 0;
}

