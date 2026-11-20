
void FUN_03d6e058(long param_1)

{
  uint uVar1;
  undefined4 uVar2;
  uint uVar3;
  long lVar4;
  uint uVar5;
  undefined8 *puVar6;
  
  uVar3 = *(uint *)(param_1 + 0x208);
  if (uVar3 == 0xffffffff && *(char *)(param_1 + 0x220) != '\0') {
    uVar2 = *(undefined4 *)(param_1 + 0x20c);
    *(undefined8 *)(param_1 + 0x20c) = 0xffffffff00000000;
    *(undefined1 *)(param_1 + 0x221) = 1;
    *(undefined4 *)(param_1 + 0x214) = uVar2;
    uVar3 = *(uint *)(param_1 + 0x218);
    *(uint *)(param_1 + 0x208) = uVar3;
    if (uVar3 == 0xffffffff) {
      *(undefined1 *)(param_1 + 0x221) = 0;
      goto LAB_03d6e128;
    }
    uVar5 = *(uint *)(param_1 + 0x228);
    lVar4 = *(long *)(param_1 + 0x230);
    uVar1 = uVar3;
    if (uVar5 <= uVar3) {
      uVar1 = 0;
    }
    puVar6 = *(undefined8 **)(lVar4 + (long)(int)uVar1 * 0x40);
    if (puVar6 != (undefined8 *)0x0) {
      (*(code *)*puVar6)();
      uVar3 = *(uint *)(param_1 + 0x208);
      goto LAB_03d6e0d8;
    }
    *(undefined1 *)(param_1 + 0x221) = 0;
  }
  else {
LAB_03d6e0d8:
    *(undefined1 *)(param_1 + 0x221) = 0;
    if (uVar3 == 0xffffffff) goto LAB_03d6e128;
    uVar5 = *(uint *)(param_1 + 0x228);
    lVar4 = *(long *)(param_1 + 0x230);
  }
  if (uVar5 <= uVar3) {
    uVar3 = 0;
  }
  lVar4 = *(long *)(lVar4 + (long)(int)uVar3 * 0x40);
  if ((lVar4 != 0) && ((**(code **)(lVar4 + 8))(), *(char *)(param_1 + 0x221) != '\0')) {
    return;
  }
LAB_03d6e128:
  *(int *)(param_1 + 0x20c) = *(int *)(param_1 + 0x20c) + 1;
  return;
}

