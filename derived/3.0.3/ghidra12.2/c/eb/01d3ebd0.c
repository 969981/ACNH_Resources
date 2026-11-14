
void FUN_01d3ebd0(long param_1)

{
  uint uVar1;
  undefined4 uVar2;
  uint uVar3;
  long lVar4;
  uint uVar5;
  undefined8 *puVar6;
  
  if (*(char *)(param_1 + 0x55e) != '\0') {
    uVar1 = *(uint *)(*(long *)PTR_DAT_04bb36f0 + 0x20);
    lVar4 = *(long *)(*(long *)PTR_DAT_04bb36f0 + 0x28);
    uVar3 = DAT_0536c720;
    if (uVar1 <= DAT_0536c720) {
      uVar3 = 0;
    }
    if (*(char *)(lVar4 + (long)(int)uVar3 * 0x38 + 0x2c) != '\0') {
      uVar3 = DAT_0536c720;
      if (uVar1 <= DAT_0536c720) {
        uVar3 = 0;
      }
      if (*(char *)(lVar4 + (long)(int)uVar3 * 0x38 + 0x2d) == '\0') {
        uVar2 = *(undefined4 *)(*(long *)PTR_DAT_04bb21d0 + 0xfbc);
        *(undefined4 *)(param_1 + 0x554) = 2;
        *(undefined4 *)(param_1 + 0x558) = uVar2;
      }
      *(undefined1 *)(param_1 + 0x55e) = 0;
    }
  }
  uVar3 = *(uint *)(param_1 + 0x508);
  if ((uVar3 == 0xffffffff) && (*(char *)(param_1 + 0x520) != '\0')) {
    uVar2 = *(undefined4 *)(param_1 + 0x50c);
    *(undefined8 *)(param_1 + 0x50c) = 0xffffffff00000000;
    *(undefined1 *)(param_1 + 0x521) = 1;
    *(undefined4 *)(param_1 + 0x514) = uVar2;
    uVar3 = *(uint *)(param_1 + 0x518);
    *(uint *)(param_1 + 0x508) = uVar3;
    if (uVar3 != 0xffffffff) {
      uVar5 = *(uint *)(param_1 + 0x528);
      lVar4 = *(long *)(param_1 + 0x530);
      uVar1 = uVar3;
      if (uVar5 <= uVar3) {
        uVar1 = 0;
      }
      puVar6 = *(undefined8 **)(lVar4 + (long)(int)uVar1 * 0x40);
      if (puVar6 != (undefined8 *)0x0) {
        (*(code *)*puVar6)();
        uVar3 = *(uint *)(param_1 + 0x508);
        goto LAB_01d3ecdc;
      }
      *(undefined1 *)(param_1 + 0x521) = 0;
      goto LAB_01d3ed04;
    }
    *(undefined1 *)(param_1 + 0x521) = 0;
  }
  else {
LAB_01d3ecdc:
    *(undefined1 *)(param_1 + 0x521) = 0;
    if (uVar3 != 0xffffffff) {
      uVar5 = *(uint *)(param_1 + 0x528);
      lVar4 = *(long *)(param_1 + 0x530);
LAB_01d3ed04:
      if (uVar5 <= uVar3) {
        uVar3 = 0;
      }
      lVar4 = *(long *)(lVar4 + (long)(int)uVar3 * 0x40);
      if ((lVar4 != 0) && ((**(code **)(lVar4 + 8))(), *(char *)(param_1 + 0x521) != '\0'))
      goto LAB_01d3ed38;
    }
  }
  *(int *)(param_1 + 0x50c) = *(int *)(param_1 + 0x50c) + 1;
LAB_01d3ed38:
  if ((*(int *)(param_1 + 0x508) == 4) ||
     ((*(int *)(param_1 + 0x508) == 3 && (*(char *)(param_1 + 0x54c) != '\0')))) {
    FUN_01dafcb0(param_1 + 0x480);
    return;
  }
  return;
}

