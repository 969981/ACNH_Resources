
void FUN_006d9260(long param_1)

{
  uint uVar1;
  undefined4 uVar2;
  uint uVar3;
  long lVar4;
  uint uVar5;
  undefined8 *puVar6;
  undefined1 *puVar7;
  
  if (*(char *)(param_1 + 8) == '\0') {
    return;
  }
  uVar3 = *(uint *)(param_1 + 0x20);
  if ((uVar3 == 0xffffffff) && (*(char *)(param_1 + 0x38) != '\0')) {
    puVar7 = (undefined1 *)(param_1 + 0x39);
    *puVar7 = 1;
    uVar2 = *(undefined4 *)(param_1 + 0x24);
    *(undefined8 *)(param_1 + 0x24) = 0xffffffff00000000;
    *(undefined4 *)(param_1 + 0x2c) = uVar2;
    uVar3 = *(uint *)(param_1 + 0x30);
    *(uint *)(param_1 + 0x20) = uVar3;
    if (uVar3 == 0xffffffff) {
      *puVar7 = 0;
      goto LAB_006d9334;
    }
    uVar5 = *(uint *)(param_1 + 0x40);
    lVar4 = *(long *)(param_1 + 0x48);
    uVar1 = uVar3;
    if (uVar5 <= uVar3) {
      uVar1 = 0;
    }
    puVar6 = *(undefined8 **)(lVar4 + (long)(int)uVar1 * 0x40);
    if (puVar6 != (undefined8 *)0x0) {
      (*(code *)*puVar6)();
      uVar3 = *(uint *)(param_1 + 0x20);
      goto LAB_006d92e4;
    }
    *puVar7 = 0;
  }
  else {
LAB_006d92e4:
    *(undefined1 *)(param_1 + 0x39) = 0;
    if (uVar3 == 0xffffffff) goto LAB_006d9334;
    uVar5 = *(uint *)(param_1 + 0x40);
    lVar4 = *(long *)(param_1 + 0x48);
  }
  if (uVar5 <= uVar3) {
    uVar3 = 0;
  }
  lVar4 = *(long *)(lVar4 + (long)(int)uVar3 * 0x40);
  if ((lVar4 != 0) && ((**(code **)(lVar4 + 8))(), *(char *)(param_1 + 0x39) != '\0')) {
    return;
  }
LAB_006d9334:
  *(int *)(param_1 + 0x24) = *(int *)(param_1 + 0x24) + 1;
  return;
}

