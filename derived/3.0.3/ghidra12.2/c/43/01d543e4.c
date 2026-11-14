
undefined8 FUN_01d543e4(long param_1)

{
  uint uVar1;
  long lVar2;
  
  lVar2 = **(long **)PTR_DAT_04bb27d0;
  if (*(char *)(lVar2 + 0x55e) == '\0') {
    uVar1 = DAT_0536c720;
    if (*(uint *)(*(long *)PTR_DAT_04bb36f0 + 0x20) <= DAT_0536c720) {
      uVar1 = 0;
    }
    if ((*(char *)(*(long *)(*(long *)PTR_DAT_04bb36f0 + 0x28) + (long)(int)uVar1 * 0x38 + 0x2c) !=
         '\0') &&
       (*(uint *)(lVar2 + 0x508) < 5 && (1 << (ulong)(*(uint *)(lVar2 + 0x508) & 0x1f) & 0x15U) != 0
       )) {
      if (*(int *)(lVar2 + 0x554) == 0) {
        *(undefined8 *)(*(long *)(*(long *)PTR_DAT_04bb21d0 + 0x28) + 0x10) = 0;
        return 1;
      }
      *(undefined8 *)(param_1 + 1000) = *(undefined8 *)(lVar2 + 0x554);
      return 2;
    }
  }
  return 0;
}

