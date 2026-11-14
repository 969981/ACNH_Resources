
undefined1 FUN_01d77efc(long param_1)

{
  undefined *puVar1;
  byte bVar2;
  undefined1 uVar3;
  ulong uVar4;
  long lVar5;
  
  uVar4 = FUN_01d77c78();
  if ((uVar4 & 1) == 0) {
LAB_01d77f8c:
    uVar3 = 4;
  }
  else {
    uVar4 = FUN_01d77c78(param_1);
    puVar1 = PTR_DAT_04bb7bc0;
    if (((uVar4 & 1) != 0) && (*(char *)(param_1 + 0xc) == '\0')) {
      bVar2 = FUN_01e06398(*(undefined8 *)PTR_DAT_04bb7bc0,param_1 + 0xd,param_1);
      *(byte *)(param_1 + 0xc) = bVar2 & 1;
      if ((bVar2 & 1) == 0) {
        lVar5 = FUN_01dff648(*(undefined8 *)puVar1,param_1);
        if (lVar5 != 0) {
          if (*(char *)(lVar5 + 0xfb0) == '\0') {
            return 2;
          }
          if (*(char *)(lVar5 + 0xfb1) == '\0') {
            return 2;
          }
          return *(long *)(lVar5 + 0xfa8) == 0;
        }
        goto LAB_01d77f8c;
      }
    }
    uVar3 = 3;
  }
  return uVar3;
}

