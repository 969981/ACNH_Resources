
void FUN_0283e670(long param_1)

{
  uint uVar1;
  undefined4 uVar2;
  ulong uVar3;
  uint uVar4;
  long lVar5;
  uint uVar6;
  undefined8 *puVar7;
  undefined *local_30;
  undefined *puStack_28;
  
  if (((((*(char *)(param_1 + 0x3c) != '\0' && *(char *)(param_1 + 0x3d) != '\0') &&
        (*(char *)(param_1 + 0x3e) == '\0')) && (*(long *)PTR_DAT_04bb2118 != 0)) &&
      ((*(long *)PTR_DAT_04bb2720 != 0 &&
       (lVar5 = *(long *)(*(long *)PTR_DAT_04bb2720 + 0x330), lVar5 != 0)))) &&
     (*(int *)(lVar5 + 8) == 4)) {
    if (*(long *)PTR_DAT_04bb27d0 != 0) {
      FUN_01dbdad0();
    }
    local_30 = PTR_DAT_04bb2020 + 0x10;
    puStack_28 = &DAT_0405b40b;
    uVar3 = FUN_030ac500(&local_30,2);
    if ((uVar3 & 1) != 0) {
      lVar5 = *(long *)PTR_DAT_04bb26e0;
      if (lVar5 != 0) {
        *(uint *)(lVar5 + 0x330) = *(uint *)(lVar5 + 0x330) | 0x20;
      }
      *(undefined1 *)(param_1 + 0x3e) = 1;
    }
  }
  if ((*(char *)(param_1 + 0x3c) != '\0') && (*(char *)(param_1 + 0x3d) != '\0')) {
    return;
  }
  uVar4 = *(uint *)(param_1 + 0x228);
  if ((uVar4 == 0xffffffff) && (*(char *)(param_1 + 0x240) != '\0')) {
    uVar2 = *(undefined4 *)(param_1 + 0x22c);
    *(undefined8 *)(param_1 + 0x22c) = 0xffffffff00000000;
    *(undefined1 *)(param_1 + 0x241) = 1;
    *(undefined4 *)(param_1 + 0x234) = uVar2;
    uVar4 = *(uint *)(param_1 + 0x238);
    *(uint *)(param_1 + 0x228) = uVar4;
    if (uVar4 == 0xffffffff) {
      *(undefined1 *)(param_1 + 0x241) = 0;
      goto LAB_0283e808;
    }
    uVar6 = *(uint *)(param_1 + 0x248);
    lVar5 = *(long *)(param_1 + 0x250);
    uVar1 = uVar4;
    if (uVar6 <= uVar4) {
      uVar1 = 0;
    }
    puVar7 = *(undefined8 **)(lVar5 + (long)(int)uVar1 * 0x40);
    if (puVar7 != (undefined8 *)0x0) {
      (*(code *)*puVar7)();
      uVar4 = *(uint *)(param_1 + 0x228);
      goto LAB_0283e718;
    }
    *(undefined1 *)(param_1 + 0x241) = 0;
  }
  else {
LAB_0283e718:
    *(undefined1 *)(param_1 + 0x241) = 0;
    if (uVar4 == 0xffffffff) goto LAB_0283e808;
    uVar6 = *(uint *)(param_1 + 0x248);
    lVar5 = *(long *)(param_1 + 0x250);
  }
  if (uVar6 <= uVar4) {
    uVar4 = 0;
  }
  lVar5 = *(long *)(lVar5 + (long)(int)uVar4 * 0x40);
  if ((lVar5 != 0) && ((**(code **)(lVar5 + 8))(), *(char *)(param_1 + 0x241) != '\0')) {
    return;
  }
LAB_0283e808:
  *(int *)(param_1 + 0x22c) = *(int *)(param_1 + 0x22c) + 1;
  return;
}

