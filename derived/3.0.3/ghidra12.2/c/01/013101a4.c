
void FUN_013101a4(long param_1)

{
  uint uVar1;
  undefined4 uVar2;
  uint uVar3;
  long lVar4;
  uint uVar5;
  undefined8 *puVar6;
  undefined1 *puVar7;
  
  if (-1 < *(int *)(param_1 + 0x50)) {
    if (*(int *)(param_1 + 0x10) != *(int *)(param_1 + 0x50)) {
      FUN_03ebb160(param_1 + 8);
    }
    *(undefined4 *)(param_1 + 0x50) = 0xffffffff;
  }
  uVar3 = *(uint *)(param_1 + 0x10);
  if ((uVar3 == 0xffffffff) && (*(char *)(param_1 + 0x28) != '\0')) {
    puVar7 = (undefined1 *)(param_1 + 0x29);
    *puVar7 = 1;
    uVar2 = *(undefined4 *)(param_1 + 0x14);
    *(undefined8 *)(param_1 + 0x14) = 0xffffffff00000000;
    *(undefined4 *)(param_1 + 0x1c) = uVar2;
    uVar3 = *(uint *)(param_1 + 0x20);
    *(uint *)(param_1 + 0x10) = uVar3;
    if (uVar3 == 0xffffffff) {
      *puVar7 = 0;
      goto LAB_013102a0;
    }
    uVar5 = *(uint *)(param_1 + 0x30);
    lVar4 = *(long *)(param_1 + 0x38);
    uVar1 = uVar3;
    if (uVar5 <= uVar3) {
      uVar1 = 0;
    }
    puVar6 = *(undefined8 **)(lVar4 + (long)(int)uVar1 * 0x40);
    if (puVar6 != (undefined8 *)0x0) {
      (*(code *)*puVar6)();
      uVar3 = *(uint *)(param_1 + 0x10);
      goto LAB_01310250;
    }
    *puVar7 = 0;
  }
  else {
LAB_01310250:
    *(undefined1 *)(param_1 + 0x29) = 0;
    if (uVar3 == 0xffffffff) goto LAB_013102a0;
    uVar5 = *(uint *)(param_1 + 0x30);
    lVar4 = *(long *)(param_1 + 0x38);
  }
  if (uVar5 <= uVar3) {
    uVar3 = 0;
  }
  lVar4 = *(long *)(lVar4 + (long)(int)uVar3 * 0x40);
  if ((lVar4 != 0) && ((**(code **)(lVar4 + 8))(), *(char *)(param_1 + 0x29) != '\0')) {
    return;
  }
LAB_013102a0:
  *(int *)(param_1 + 0x14) = *(int *)(param_1 + 0x14) + 1;
  return;
}

