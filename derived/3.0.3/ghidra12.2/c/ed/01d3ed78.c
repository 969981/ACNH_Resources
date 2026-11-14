
void FUN_01d3ed78(long param_1)

{
  uint uVar1;
  uint uVar2;
  undefined4 uVar3;
  long lVar4;
  
  uVar2 = DAT_0536c720;
  if ((*(int *)(param_1 + 0x508) != 2) || (*(char *)(param_1 + 0x55e) != '\0')) {
    return;
  }
  lVar4 = *(long *)PTR_DAT_04bb36f0;
  uVar1 = DAT_0536c720;
  if (*(uint *)(lVar4 + 0x20) <= DAT_0536c720) {
    uVar1 = 0;
  }
  if (*(char *)(*(long *)(lVar4 + 0x28) + (long)(int)uVar1 * 0x38 + 0x2c) != '\0') {
    if (*(char *)(*(long *)PTR_DAT_04bb21d0 + 0xf78) == '\0') {
      uVar3 = *(undefined4 *)(*(long *)PTR_DAT_04bb21d0 + 0xfbc);
      *(undefined4 *)(param_1 + 0x554) = 0xb;
      *(undefined4 *)(param_1 + 0x558) = uVar3;
      return;
    }
    *(undefined8 *)(param_1 + 0x554) = 0;
    uVar1 = uVar2;
    if (*(uint *)(lVar4 + 0x20) <= uVar2) {
      uVar1 = 0;
    }
    *(undefined1 *)(*(long *)(lVar4 + 0x28) + (long)(int)uVar1 * 0x38 + 0x2c) = 0;
    uVar1 = uVar2;
    if (*(uint *)(lVar4 + 0x20) <= uVar2) {
      uVar1 = 0;
    }
    *(undefined1 *)(*(long *)(lVar4 + 0x28) + (long)(int)uVar1 * 0x38 + 0x2d) = 0;
    uVar1 = uVar2;
    if (*(uint *)(lVar4 + 0x20) <= uVar2) {
      uVar1 = 0;
    }
    *(undefined4 *)(*(long *)(lVar4 + 0x28) + (long)(int)uVar1 * 0x38) = 3;
    if (*(uint *)(lVar4 + 0x20) <= uVar2) {
      uVar2 = 0;
    }
    *(undefined1 *)(*(long *)(lVar4 + 0x28) + (long)(int)uVar2 * 0x38 + 0x2f) = 0;
    *(undefined1 *)(param_1 + 0x55e) = 1;
  }
  return;
}

