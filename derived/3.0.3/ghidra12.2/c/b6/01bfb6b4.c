
void FUN_01bfb6b4(long param_1)

{
  int iVar1;
  int iVar2;
  undefined8 uVar3;
  
  if (*(int *)(param_1 + 0x2548) == 1 && *(int *)(param_1 + 0x254c) - 1U < 0xfffffffe) {
    *(undefined1 *)(*(long *)(param_1 + 0x28) + 0x21b4) = 0;
    *(undefined1 *)(param_1 + 0x2476) = 0;
    iVar1 = *(int *)(param_1 + 0x246c);
    iVar2 = iVar1 >> 0x1f;
    if (iVar1 < 0) {
      iVar1 = -1;
    }
    *(int *)(param_1 + 0x2464) = iVar1;
    *(byte *)(param_1 + 0x2462) = *(byte *)(param_1 + 0x2468) & ((byte)iVar2 ^ 0xff);
    FUN_01bfd8a4(*(undefined8 *)(param_1 + 0x28));
    *(undefined1 *)(param_1 + 0x247c) = 0;
    *(undefined2 *)(param_1 + 0x247e) = 0xffff;
    uVar3 = 1;
    *(undefined8 *)(param_1 + 0x2408) = 0xffffffffffffd8f0;
    *(undefined1 *)(param_1 + 0xac) = 0;
    *(undefined8 *)(param_1 + 0x2410) = 0;
    *(undefined4 *)(param_1 + 0x2418) = 0xffffffff;
    *(undefined4 *)(param_1 + 0x242c) = 0;
    *(undefined2 *)(param_1 + 0x2430) = 0;
    *(undefined8 *)(param_1 + 0x2420) = 0;
    *(undefined4 *)(param_1 + 0x2427) = 0;
    *(undefined8 *)(param_1 + 0x2438) = 0;
    *(undefined8 *)(param_1 + 0x2440) = 0;
    *(undefined8 *)(param_1 + 0x2446) = 0;
  }
  else {
    **(undefined1 **)(param_1 + 0x2488) = 0;
    *(undefined1 *)(param_1 + 0x2468) = 0;
    *(undefined4 *)(param_1 + 0x246c) = 0xffffffff;
    *(undefined1 *)(*(long *)(param_1 + 0x28) + 0x21b4) = 0;
    *(undefined2 *)(param_1 + 0x247e) = 0xffff;
    *(undefined4 *)(param_1 + 0x2418) = 0xffffffff;
    *(undefined1 *)(param_1 + 0x2476) = 0;
    *(undefined1 *)(param_1 + 0x247c) = 0;
    *(undefined1 *)(param_1 + 0xac) = 0;
    *(undefined8 *)(param_1 + 0x2410) = 0;
    *(undefined8 *)(param_1 + 0x2408) = 0xffffffffffffd8f0;
    iVar1 = *(int *)(param_1 + 0x246c);
    iVar2 = iVar1 >> 0x1f;
    *(undefined4 *)(param_1 + 0x242c) = 0;
    *(undefined2 *)(param_1 + 0x2430) = 0;
    *(undefined8 *)(param_1 + 0x2420) = 0;
    *(undefined4 *)(param_1 + 0x2427) = 0;
    if (iVar1 < 0) {
      iVar1 = -1;
    }
    *(undefined8 *)(param_1 + 0x2438) = 0;
    *(undefined8 *)(param_1 + 0x2440) = 0;
    *(undefined8 *)(param_1 + 0x2446) = 0;
    *(byte *)(param_1 + 0x2462) = *(byte *)(param_1 + 0x2468) & ((byte)iVar2 ^ 0xff);
    *(int *)(param_1 + 0x2464) = iVar1;
    if ((*(char *)(param_1 + 0x2474) == '\0') || (*(char *)(param_1 + 0x2477) != '\0')) {
      uVar3 = 7;
    }
    else {
      uVar3 = 6;
    }
  }
  FUN_03ebb160(param_1 + 0x40,uVar3);
  return;
}

