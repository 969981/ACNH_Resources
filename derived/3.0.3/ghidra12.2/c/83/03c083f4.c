
void FUN_03c083f4(long param_1)

{
  uint uVar1;
  undefined4 uVar2;
  uint uVar3;
  long lVar4;
  long lVar5;
  uint uVar6;
  undefined8 *puVar7;
  undefined1 *puVar8;
  
  uVar3 = *(uint *)(param_1 + 0x20);
  if (uVar3 == 0xffffffff && *(char *)(param_1 + 0x38) != '\0') {
    puVar8 = (undefined1 *)(param_1 + 0x39);
    *puVar8 = 1;
    uVar2 = *(undefined4 *)(param_1 + 0x24);
    *(undefined8 *)(param_1 + 0x24) = 0xffffffff00000000;
    *(undefined4 *)(param_1 + 0x2c) = uVar2;
    uVar3 = *(uint *)(param_1 + 0x30);
    *(uint *)(param_1 + 0x20) = uVar3;
    if (uVar3 != 0xffffffff) {
      uVar6 = *(uint *)(param_1 + 0x40);
      lVar4 = *(long *)(param_1 + 0x48);
      uVar1 = uVar3;
      if (uVar6 <= uVar3) {
        uVar1 = 0;
      }
      puVar7 = *(undefined8 **)(lVar4 + (long)(int)uVar1 * 0x40);
      if (puVar7 != (undefined8 *)0x0) {
        (*(code *)*puVar7)();
        uVar3 = *(uint *)(param_1 + 0x20);
        goto LAB_03c08470;
      }
      *puVar8 = 0;
      goto LAB_03c08498;
    }
    *puVar8 = 0;
LAB_03c084c0:
    *(int *)(param_1 + 0x24) = *(int *)(param_1 + 0x24) + 1;
  }
  else {
LAB_03c08470:
    *(undefined1 *)(param_1 + 0x39) = 0;
    if (uVar3 == 0xffffffff) goto LAB_03c084c0;
    uVar6 = *(uint *)(param_1 + 0x40);
    lVar4 = *(long *)(param_1 + 0x48);
LAB_03c08498:
    if (uVar6 <= uVar3) {
      uVar3 = 0;
    }
    lVar4 = *(long *)(lVar4 + (long)(int)uVar3 * 0x40);
    if ((lVar4 == 0) || ((**(code **)(lVar4 + 8))(), *(char *)(param_1 + 0x39) == '\0'))
    goto LAB_03c084c0;
  }
  lVar4 = *(long *)(param_1 + 0x60);
  if (lVar4 == 0) {
    return;
  }
  uVar3 = *(uint *)(lVar4 + 0x10);
  if ((uVar3 == 0xffffffff) && (*(char *)(lVar4 + 0x28) != '\0')) {
    puVar8 = (undefined1 *)(lVar4 + 0x29);
    *puVar8 = 1;
    uVar2 = *(undefined4 *)(lVar4 + 0x14);
    *(undefined8 *)(lVar4 + 0x14) = 0xffffffff00000000;
    *(undefined4 *)(lVar4 + 0x1c) = uVar2;
    uVar3 = *(uint *)(lVar4 + 0x20);
    *(uint *)(lVar4 + 0x10) = uVar3;
    if (uVar3 == 0xffffffff) {
      *puVar8 = 0;
      goto LAB_03c08590;
    }
    uVar6 = *(uint *)(lVar4 + 0x30);
    lVar5 = *(long *)(lVar4 + 0x38);
    uVar1 = uVar3;
    if (uVar6 <= uVar3) {
      uVar1 = 0;
    }
    puVar7 = *(undefined8 **)(lVar5 + (long)(int)uVar1 * 0x40);
    if (puVar7 != (undefined8 *)0x0) {
      (*(code *)*puVar7)();
      uVar3 = *(uint *)(lVar4 + 0x10);
      goto LAB_03c08540;
    }
    *puVar8 = 0;
  }
  else {
LAB_03c08540:
    *(undefined1 *)(lVar4 + 0x29) = 0;
    if (uVar3 == 0xffffffff) goto LAB_03c08590;
    uVar6 = *(uint *)(lVar4 + 0x30);
    lVar5 = *(long *)(lVar4 + 0x38);
  }
  if (uVar6 <= uVar3) {
    uVar3 = 0;
  }
  lVar5 = *(long *)(lVar5 + (long)(int)uVar3 * 0x40);
  if ((lVar5 != 0) && ((**(code **)(lVar5 + 8))(), *(char *)(lVar4 + 0x29) != '\0')) {
    return;
  }
LAB_03c08590:
  *(int *)(lVar4 + 0x14) = *(int *)(lVar4 + 0x14) + 1;
  return;
}

