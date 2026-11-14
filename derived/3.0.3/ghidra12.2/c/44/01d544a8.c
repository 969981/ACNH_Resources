
void FUN_01d544a8(void)

{
  uint uVar1;
  undefined4 uVar2;
  long lVar3;
  
  lVar3 = **(long **)PTR_DAT_04bb27d0;
  if (*(int *)(lVar3 + 0x508) == 2 && *(char *)(lVar3 + 0x55e) == '\0') {
    uVar1 = DAT_0536c720;
    if (*(uint *)(*(long *)PTR_DAT_04bb36f0 + 0x20) <= DAT_0536c720) {
      uVar1 = 0;
    }
    if (*(char *)(*(long *)(*(long *)PTR_DAT_04bb36f0 + 0x28) + (long)(int)uVar1 * 0x38 + 0x2c) !=
        '\0') {
      if (*(char *)(*(long *)PTR_DAT_04bb21d0 + 0xf78) == '\0') {
        uVar2 = *(undefined4 *)(*(long *)PTR_DAT_04bb21d0 + 0xfbc);
        *(undefined4 *)(lVar3 + 0x554) = 0xb;
        *(undefined4 *)(lVar3 + 0x558) = uVar2;
      }
      else {
        *(undefined4 *)(lVar3 + 0x558) = 0;
        *(undefined8 *)(lVar3 + 0x550) = 1;
        FUN_03ebb160(lVar3 + 0x500,3);
        *(undefined2 *)(lVar3 + 0x54c) = 0;
      }
    }
  }
  return;
}

