
undefined4 FUN_01d79ec0(long param_1,long param_2,long param_3)

{
  undefined *puVar1;
  byte bVar2;
  ulong uVar3;
  long lVar4;
  undefined4 uVar5;
  
  **(undefined1 **)(param_2 + 8) = 0;
  **(undefined1 **)(param_3 + 8) = 0;
  uVar3 = FUN_01d77c78();
  if ((uVar3 & 1) == 0) {
LAB_01d79f98:
    uVar5 = 4;
  }
  else {
    uVar3 = FUN_01d77c78(param_1);
    puVar1 = PTR_DAT_04bb7bc0;
    if (((uVar3 & 1) != 0) && (*(char *)(param_1 + 0xc) == '\0')) {
      bVar2 = FUN_01e06398(*(undefined8 *)PTR_DAT_04bb7bc0,param_1 + 0xd,param_1);
      *(byte *)(param_1 + 0xc) = bVar2 & 1;
      if ((bVar2 & 1) == 0) {
        lVar4 = FUN_01dff648(*(undefined8 *)puVar1,param_1);
        if (lVar4 != 0) {
          if (*(char *)(lVar4 + 0xfb0) == '\0') {
            return 2;
          }
          if (*(char *)(lVar4 + 0xfb1) == '\0') {
            return 2;
          }
          if (*(long *)(lVar4 + 0xfa8) == 0) {
            return 1;
          }
          lVar4 = FUN_01dff648(*(undefined8 *)puVar1,param_1);
          if (*(char *)(*(long *)(lVar4 + 0xfa8) + 0x2c) != '\0') {
            uVar3 = FUN_01d77650(param_2,param_3);
            uVar5 = 0;
            if ((uVar3 & 1) == 0) {
              uVar5 = 2;
            }
            return uVar5;
          }
        }
        goto LAB_01d79f98;
      }
    }
    uVar5 = 3;
  }
  return uVar5;
}

