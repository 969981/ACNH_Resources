
undefined8 FUN_01d5457c(long param_1)

{
  uint uVar1;
  int iVar2;
  long lVar3;
  
  lVar3 = **(long **)PTR_DAT_04bb27d0;
  if (*(char *)(lVar3 + 0x55e) == '\0') {
    uVar1 = DAT_0536c720;
    if (*(uint *)(*(long *)PTR_DAT_04bb36f0 + 0x20) <= DAT_0536c720) {
      uVar1 = 0;
    }
    if (*(char *)(*(long *)(*(long *)PTR_DAT_04bb36f0 + 0x28) + (long)(int)uVar1 * 0x38 + 0x2c) !=
        '\0') {
      iVar2 = *(int *)(lVar3 + 0x508);
      if (iVar2 != 0) {
        if (iVar2 == 4) {
          return 1;
        }
        if (iVar2 != 2) {
          return 0;
        }
      }
      *(undefined8 *)(param_1 + 1000) = *(undefined8 *)(lVar3 + 0x554);
      return 2;
    }
  }
  return 0;
}

