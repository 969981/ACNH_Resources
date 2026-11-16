
long FUN_0265cf70(uint param_1,byte *param_2)

{
  int iVar1;
  uint uVar2;
  ulong uVar3;
  long lVar4;
  undefined8 *puVar5;
  byte local_28 [4];
  byte local_24 [4];
  
  if (7 < *param_2) {
    return 0;
  }
  if (*(byte *)(**(long **)PTR_DAT_04bb27d0 + 0x476) < 2) {
    iVar1 = FUN_02582d8c(param_2,2);
    if (iVar1 < 0) {
      return 0;
    }
  }
  else {
    local_24[0] = *param_2;
    uVar3 = FUN_01d3e2d0(**(long **)PTR_DAT_04bb27d0 + 8,local_24);
    if ((uVar3 & 1) == 0) {
      return 0;
    }
  }
  local_28[0] = *param_2;
  if (7 < local_28[0]) {
    local_28[0] = 0xff;
  }
  uVar3 = FUN_02669430(local_28);
  if ((uVar3 & 1) == 0) {
    uVar2 = FUN_021d74d0(param_1,param_2);
    if (9 < param_1) {
      return 0;
    }
    if (0x9f < uVar2) {
      return 0;
    }
    if (DAT_05574040 != 0) {
      puVar5 = *(undefined8 **)(DAT_05574040 + 0x10);
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
      return lVar4 + (ulong)param_1 * 0x10798 + (ulong)uVar2 * 0xa8 + 0x39f8;
    }
  }
  else {
    uVar2 = FUN_021d7030(param_1,param_2);
    if (9 < param_1) {
      return 0;
    }
    if (7 < uVar2) {
      return 0;
    }
    if (DAT_05574040 != 0) {
      puVar5 = *(undefined8 **)(DAT_05574040 + 0x10);
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
      return lVar4 + (ulong)param_1 * 0x10798 + (ulong)uVar2 * 0x700 + 0x1c0;
    }
  }
  return 0;
}

