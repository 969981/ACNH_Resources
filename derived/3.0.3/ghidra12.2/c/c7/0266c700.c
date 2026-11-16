
long FUN_0266c700(byte *param_1)

{
  long lVar1;
  uint uVar2;
  int iVar3;
  ulong uVar4;
  long lVar5;
  undefined8 *puVar6;
  uint local_18;
  byte local_14 [4];
  
  local_14[0] = *param_1;
  if (7 < local_14[0]) {
    return 0;
  }
  iVar3 = FUN_02582fe0(local_14);
  if (iVar3 != -1) {
    local_18 = 0;
    uVar4 = FUN_02b5e950(&local_18,iVar3);
    uVar2 = local_18;
    if (((uVar4 & 1) != 0) && (DAT_05574040 != 0)) {
      puVar6 = *(undefined8 **)(DAT_05574040 + 0x10);
      if ((*(byte *)(DAT_05574040 + 0x453) & 1) == 0) {
        lVar5 = (**(code **)(*(long *)*puVar6 + 0x38))();
        if (lVar5 == 0) {
          return 0;
        }
        lVar5 = lVar5 + 0x70;
      }
      else {
        if (puVar6 == (undefined8 *)0x0) {
          return 0;
        }
        if ((long *)puVar6[0x26] == (long *)0x0) {
          return 0;
        }
        lVar5 = (**(code **)(*(long *)puVar6[0x26] + 0x38))();
        if (lVar5 == 0) {
          return 0;
        }
      }
      if (uVar2 < 8) {
        lVar1 = lVar5 + 0x119228 + (ulong)uVar2 * 0xfa08;
        if (7 < uVar2) {
          lVar1 = lVar5 + 0x119228;
        }
        return lVar1;
      }
    }
  }
  return 0;
}

