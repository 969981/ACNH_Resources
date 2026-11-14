
void FUN_01ddc16c(void)

{
  int iVar1;
  
  iVar1 = 7;
  if (*(uint *)(*(long *)PTR_DAT_04bb36f0 + 0x20) < 8) {
    iVar1 = 0;
  }
  *(undefined1 *)(*(long *)(*(long *)PTR_DAT_04bb36f0 + 0x28) + (long)iVar1 * 0x38 + 0x30) = 0;
  return;
}

