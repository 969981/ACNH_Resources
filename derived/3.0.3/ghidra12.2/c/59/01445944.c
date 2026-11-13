
void FUN_01445944(long param_1)

{
  uint uVar1;
  undefined4 uVar2;
  uint uVar3;
  long lVar4;
  uint uVar5;
  undefined8 *puVar6;
  
  uVar3 = *(uint *)(param_1 + 0x368);
  if (uVar3 == 0xffffffff && *(char *)(param_1 + 0x380) != '\0') {
    uVar2 = *(undefined4 *)(param_1 + 0x36c);
    *(undefined8 *)(param_1 + 0x36c) = 0xffffffff00000000;
    *(undefined1 *)(param_1 + 0x381) = 1;
    *(undefined4 *)(param_1 + 0x374) = uVar2;
    uVar3 = *(uint *)(param_1 + 0x378);
    *(uint *)(param_1 + 0x368) = uVar3;
    if (uVar3 != 0xffffffff) {
      uVar5 = *(uint *)(param_1 + 0x388);
      lVar4 = *(long *)(param_1 + 0x390);
      uVar1 = uVar3;
      if (uVar5 <= uVar3) {
        uVar1 = 0;
      }
      puVar6 = *(undefined8 **)(lVar4 + (long)(int)uVar1 * 0x40);
      if (puVar6 != (undefined8 *)0x0) {
        (*(code *)*puVar6)();
        uVar3 = *(uint *)(param_1 + 0x368);
        goto LAB_014459c4;
      }
      *(undefined1 *)(param_1 + 0x381) = 0;
      goto LAB_014459ec;
    }
    *(undefined1 *)(param_1 + 0x381) = 0;
  }
  else {
LAB_014459c4:
    *(undefined1 *)(param_1 + 0x381) = 0;
    if (uVar3 != 0xffffffff) {
      uVar5 = *(uint *)(param_1 + 0x388);
      lVar4 = *(long *)(param_1 + 0x390);
LAB_014459ec:
      if (uVar5 <= uVar3) {
        uVar3 = 0;
      }
      lVar4 = *(long *)(lVar4 + (long)(int)uVar3 * 0x40);
      if ((lVar4 != 0) && ((**(code **)(lVar4 + 8))(), *(char *)(param_1 + 0x381) != '\0'))
      goto LAB_01445a20;
    }
  }
  *(int *)(param_1 + 0x36c) = *(int *)(param_1 + 0x36c) + 1;
LAB_01445a20:
  if ((*(int *)(param_1 + 0x368) != 0) && (DAT_0556aa70 != 0)) {
    *(uint *)(DAT_0556aa70 + 0x43c) = *(uint *)(DAT_0556aa70 + 0x43c) | 0x10;
  }
  return;
}

