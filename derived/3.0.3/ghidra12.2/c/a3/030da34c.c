
void FUN_030da34c(long param_1)

{
  uint uVar1;
  undefined4 uVar2;
  uint uVar3;
  long lVar4;
  uint uVar5;
  undefined8 *puVar6;
  
  uVar3 = *(uint *)(param_1 + 0x310);
  if (uVar3 == 0xffffffff && *(char *)(param_1 + 0x328) != '\0') {
    uVar2 = *(undefined4 *)(param_1 + 0x314);
    *(undefined8 *)(param_1 + 0x314) = 0xffffffff00000000;
    *(undefined1 *)(param_1 + 0x329) = 1;
    *(undefined4 *)(param_1 + 0x31c) = uVar2;
    uVar3 = *(uint *)(param_1 + 800);
    *(uint *)(param_1 + 0x310) = uVar3;
    if (uVar3 == 0xffffffff) {
      *(undefined1 *)(param_1 + 0x329) = 0;
      goto LAB_030da41c;
    }
    uVar5 = *(uint *)(param_1 + 0x330);
    lVar4 = *(long *)(param_1 + 0x338);
    uVar1 = uVar3;
    if (uVar5 <= uVar3) {
      uVar1 = 0;
    }
    puVar6 = *(undefined8 **)(lVar4 + (long)(int)uVar1 * 0x40);
    if (puVar6 != (undefined8 *)0x0) {
      (*(code *)*puVar6)();
      uVar3 = *(uint *)(param_1 + 0x310);
      goto LAB_030da3cc;
    }
    *(undefined1 *)(param_1 + 0x329) = 0;
  }
  else {
LAB_030da3cc:
    *(undefined1 *)(param_1 + 0x329) = 0;
    if (uVar3 == 0xffffffff) goto LAB_030da41c;
    uVar5 = *(uint *)(param_1 + 0x330);
    lVar4 = *(long *)(param_1 + 0x338);
  }
  if (uVar5 <= uVar3) {
    uVar3 = 0;
  }
  lVar4 = *(long *)(lVar4 + (long)(int)uVar3 * 0x40);
  if ((lVar4 != 0) && ((**(code **)(lVar4 + 8))(), *(char *)(param_1 + 0x329) != '\0')) {
    return;
  }
LAB_030da41c:
  *(int *)(param_1 + 0x314) = *(int *)(param_1 + 0x314) + 1;
  return;
}

