
long FUN_016c91a4(uint param_1)

{
  uint uVar1;
  ulong uVar2;
  long lVar3;
  long lVar4;
  undefined8 *puVar5;
  undefined *local_40;
  char *local_38;
  undefined4 local_30;
  char local_2c [7];
  undefined1 local_25;
  
  if (param_1 == 0xffffffff) {
    return 0;
  }
  if (7 < (int)param_1) {
    local_25 = 0;
    local_30 = 8;
    local_38 = local_2c;
    local_2c[0] = '\0';
    local_40 = PTR_DAT_04bb3768 + 0x10;
    uVar2 = FUN_021d62e0(&local_40,param_1);
    if (((((uVar2 & 1) != 0) && (*local_38 != '\0')) &&
        (uVar1 = FUN_021d7e50(&local_40), uVar1 != 0xffffffff)) && (uVar1 != param_1)) {
      lVar3 = FUN_016c91a4();
      return lVar3;
    }
  }
  if (DAT_05574040 == 0) {
LAB_016c92b8:
    lVar3 = 0;
  }
  else {
    puVar5 = *(undefined8 **)(DAT_05574040 + 0x10);
    if ((*(byte *)(DAT_05574040 + 0x453) & 1) == 0) {
      lVar3 = (**(code **)(*(long *)*puVar5 + 0x38))();
      lVar4 = 0;
      if (lVar3 != 0) {
        lVar4 = lVar3 + 0x70;
      }
    }
    else {
      if (puVar5 == (undefined8 *)0x0) goto LAB_016c92b8;
      if ((long *)puVar5[0x26] == (long *)0x0) {
        return 0;
      }
      lVar4 = (**(code **)(*(long *)puVar5[0x26] + 0x38))();
    }
    lVar3 = 0;
    if (((int)param_1 < 0x11) && (lVar4 != 0)) {
      lVar3 = lVar4 + 0x218408 + (ulong)param_1 * 0x5438;
      if (0x10 < param_1) {
        lVar3 = lVar4 + 0x218408;
      }
    }
  }
  return lVar3;
}

