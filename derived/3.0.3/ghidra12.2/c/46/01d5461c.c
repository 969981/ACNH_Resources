
void FUN_01d5461c(void)

{
  uint uVar1;
  long lVar2;
  
  if (((*(long *)(*(long *)PTR_DAT_04bb21d8 + 0x3d8) != 0) &&
      (lVar2 = *(long *)(*(long *)(*(long *)PTR_DAT_04bb21d8 + 0x3d8) + 0x80), lVar2 != 0)) &&
     (*(char *)(lVar2 + 0x13c) != '\0')) {
    if (*(int *)(lVar2 + 0x20) == 1) {
      *(undefined1 *)(lVar2 + 0x13d) = 1;
    }
    *(undefined1 *)(lVar2 + 0x13c) = 0;
  }
  lVar2 = **(long **)PTR_DAT_04bb27d0;
  if (2 < *(int *)(lVar2 + 0x508) && *(char *)(lVar2 + 0x55e) == '\0') {
    uVar1 = DAT_0536c720;
    if (*(uint *)(*(long *)PTR_DAT_04bb36f0 + 0x20) <= DAT_0536c720) {
      uVar1 = 0;
    }
    if (*(int *)(lVar2 + 0x508) == 4 &&
        *(char *)(*(long *)(*(long *)PTR_DAT_04bb36f0 + 0x28) + (long)(int)uVar1 * 0x38 + 0x2c) !=
        '\0') {
      *(undefined8 *)(lVar2 + 0x554) = 0;
      FUN_03ebb160(lVar2 + 0x500,5);
      *(undefined2 *)(lVar2 + 0x54c) = 0;
    }
  }
  return;
}

