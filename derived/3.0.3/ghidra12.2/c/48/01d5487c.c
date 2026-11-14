
void FUN_01d5487c(void)

{
  uint uVar1;
  uint uVar2;
  long lVar3;
  long lVar4;
  
  uVar2 = DAT_0536c720;
  lVar3 = **(long **)PTR_DAT_04bb27d0;
  if (2 < *(int *)(lVar3 + 0x508) && *(char *)(lVar3 + 0x55e) == '\0') {
    lVar4 = *(long *)PTR_DAT_04bb36f0;
    uVar1 = DAT_0536c720;
    if (*(uint *)(lVar4 + 0x20) <= DAT_0536c720) {
      uVar1 = 0;
    }
    if (*(int *)(lVar3 + 0x508) == 4 &&
        *(char *)(*(long *)(lVar4 + 0x28) + (long)(int)uVar1 * 0x38 + 0x2c) != '\0') {
      uVar1 = DAT_0536c720;
      if (*(uint *)(lVar4 + 0x20) <= DAT_0536c720) {
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
      *(undefined4 *)(*(long *)(lVar4 + 0x28) + (long)(int)uVar1 * 0x38) = 0x1a;
      if (*(uint *)(lVar4 + 0x20) <= uVar2) {
        uVar2 = 0;
      }
      *(undefined1 *)(*(long *)(lVar4 + 0x28) + (long)(int)uVar2 * 0x38 + 0x2f) = 0;
      *(undefined1 *)(lVar3 + 0x55f) = 0;
    }
  }
  return;
}

