
void FUN_011b5090(long param_1)

{
  uint uVar1;
  undefined4 uVar2;
  uint uVar3;
  long lVar4;
  uint uVar5;
  undefined8 *puVar6;
  
  if (-1 < *(int *)(param_1 + 0x300)) {
    if (*(int *)(param_1 + 0x2c0) != *(int *)(param_1 + 0x300)) {
      FUN_03ebb160(param_1 + 0x2b8);
    }
    *(undefined4 *)(param_1 + 0x300) = 0xffffffff;
  }
  uVar3 = *(uint *)(param_1 + 0x2c0);
  if ((uVar3 == 0xffffffff) && (*(char *)(param_1 + 0x2d8) != '\0')) {
    uVar2 = *(undefined4 *)(param_1 + 0x2c4);
    *(undefined8 *)(param_1 + 0x2c4) = 0xffffffff00000000;
    *(undefined1 *)(param_1 + 0x2d9) = 1;
    *(undefined4 *)(param_1 + 0x2cc) = uVar2;
    uVar3 = *(uint *)(param_1 + 0x2d0);
    *(uint *)(param_1 + 0x2c0) = uVar3;
    if (uVar3 == 0xffffffff) {
      *(undefined1 *)(param_1 + 0x2d9) = 0;
      goto LAB_011b5190;
    }
    uVar5 = *(uint *)(param_1 + 0x2e0);
    lVar4 = *(long *)(param_1 + 0x2e8);
    uVar1 = uVar3;
    if (uVar5 <= uVar3) {
      uVar1 = 0;
    }
    puVar6 = *(undefined8 **)(lVar4 + (long)(int)uVar1 * 0x40);
    if (puVar6 != (undefined8 *)0x0) {
      (*(code *)*puVar6)();
      uVar3 = *(uint *)(param_1 + 0x2c0);
      goto LAB_011b5140;
    }
    *(undefined1 *)(param_1 + 0x2d9) = 0;
  }
  else {
LAB_011b5140:
    *(undefined1 *)(param_1 + 0x2d9) = 0;
    if (uVar3 == 0xffffffff) goto LAB_011b5190;
    uVar5 = *(uint *)(param_1 + 0x2e0);
    lVar4 = *(long *)(param_1 + 0x2e8);
  }
  if (uVar5 <= uVar3) {
    uVar3 = 0;
  }
  lVar4 = *(long *)(lVar4 + (long)(int)uVar3 * 0x40);
  if ((lVar4 != 0) && ((**(code **)(lVar4 + 8))(), *(char *)(param_1 + 0x2d9) != '\0')) {
    return;
  }
LAB_011b5190:
  *(int *)(param_1 + 0x2c4) = *(int *)(param_1 + 0x2c4) + 1;
  return;
}

