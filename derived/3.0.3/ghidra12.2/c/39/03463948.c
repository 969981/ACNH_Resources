
void FUN_03463948(long param_1)

{
  uint uVar1;
  undefined4 uVar2;
  uint uVar3;
  long lVar4;
  uint uVar5;
  undefined8 *puVar6;
  
  uVar3 = *(uint *)(param_1 + 0x100);
  if (uVar3 == 0xffffffff && *(char *)(param_1 + 0x118) != '\0') {
    uVar2 = *(undefined4 *)(param_1 + 0x104);
    *(undefined8 *)(param_1 + 0x104) = 0xffffffff00000000;
    *(undefined1 *)(param_1 + 0x119) = 1;
    *(undefined4 *)(param_1 + 0x10c) = uVar2;
    uVar3 = *(uint *)(param_1 + 0x110);
    *(uint *)(param_1 + 0x100) = uVar3;
    if (uVar3 != 0xffffffff) {
      uVar5 = *(uint *)(param_1 + 0x120);
      lVar4 = *(long *)(param_1 + 0x128);
      uVar1 = uVar3;
      if (uVar5 <= uVar3) {
        uVar1 = 0;
      }
      puVar6 = *(undefined8 **)(lVar4 + (long)(int)uVar1 * 0x40);
      if (puVar6 != (undefined8 *)0x0) {
        (*(code *)*puVar6)();
        uVar3 = *(uint *)(param_1 + 0x100);
        goto LAB_034639c8;
      }
      *(undefined1 *)(param_1 + 0x119) = 0;
      goto LAB_034639f0;
    }
    *(undefined1 *)(param_1 + 0x119) = 0;
  }
  else {
LAB_034639c8:
    *(undefined1 *)(param_1 + 0x119) = 0;
    if (uVar3 != 0xffffffff) {
      uVar5 = *(uint *)(param_1 + 0x120);
      lVar4 = *(long *)(param_1 + 0x128);
LAB_034639f0:
      if (uVar5 <= uVar3) {
        uVar3 = 0;
      }
      lVar4 = *(long *)(lVar4 + (long)(int)uVar3 * 0x40);
      if ((lVar4 != 0) && ((**(code **)(lVar4 + 8))(), *(char *)(param_1 + 0x119) != '\0'))
      goto LAB_03463a24;
    }
  }
  *(int *)(param_1 + 0x104) = *(int *)(param_1 + 0x104) + 1;
LAB_03463a24:
  if (*(int *)(param_1 + 0x140) != -1) {
    FUN_03ebb160(param_1 + 0xf8);
    *(undefined4 *)(param_1 + 0x140) = 0xffffffff;
  }
  return;
}

