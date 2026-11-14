
undefined8 FUN_01d7a5c4(long param_1)

{
  undefined *puVar1;
  byte bVar2;
  ulong uVar3;
  long lVar4;
  
  uVar3 = FUN_01d77c78();
  if ((((uVar3 & 1) != 0) &&
      (uVar3 = FUN_01d77c78(param_1), puVar1 = PTR_DAT_04bb7bc0, (uVar3 & 1) != 0)) &&
     (*(char *)(param_1 + 0xc) == '\0')) {
    bVar2 = FUN_01e06398(*(undefined8 *)PTR_DAT_04bb7bc0,param_1 + 0xd,param_1);
    *(byte *)(param_1 + 0xc) = bVar2 & 1;
    if ((bVar2 & 1) == 0) {
      lVar4 = FUN_01dff648(*(undefined8 *)puVar1,param_1);
      if (lVar4 == 0) {
        return 0;
      }
      if (*(char *)(lVar4 + 0xfb0) == '\0') {
        return 0;
      }
      if (*(char *)(lVar4 + 0xfb1) == '\0') {
        return 0;
      }
      if (*(long *)(lVar4 + 0xfa8) != 0) {
        lVar4 = FUN_01dff648(*(undefined8 *)puVar1,param_1);
        return *(undefined8 *)(lVar4 + 0xfa8);
      }
    }
  }
  return 0;
}

