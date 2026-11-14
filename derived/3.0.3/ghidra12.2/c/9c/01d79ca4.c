
undefined8 FUN_01d79ca4(long param_1,uint *param_2)

{
  uint uVar1;
  undefined *puVar2;
  byte bVar3;
  ulong uVar4;
  undefined8 uVar5;
  long lVar6;
  
  uVar4 = FUN_01d77c78();
  if ((uVar4 & 1) == 0) {
LAB_01d79d64:
    uVar5 = 4;
  }
  else {
    uVar4 = FUN_01d77c78(param_1);
    puVar2 = PTR_DAT_04bb7bc0;
    if (((uVar4 & 1) != 0) && (*(char *)(param_1 + 0xc) == '\0')) {
      bVar3 = FUN_01e06398(*(undefined8 *)PTR_DAT_04bb7bc0,param_1 + 0xd,param_1);
      *(byte *)(param_1 + 0xc) = bVar3 & 1;
      if ((bVar3 & 1) == 0) {
        lVar6 = FUN_01dff648(*(undefined8 *)puVar2,param_1);
        if (lVar6 != 0) {
          if (*(char *)(lVar6 + 0xfb0) == '\0') {
            return 2;
          }
          if (*(char *)(lVar6 + 0xfb1) == '\0') {
            return 2;
          }
          if (*(long *)(lVar6 + 0xfa8) == 0) {
            return 1;
          }
          lVar6 = FUN_01dff648(*(undefined8 *)puVar2,param_1);
          if (*(char *)(*(long *)(lVar6 + 0xfa8) + 0x2c) != '\0') {
            uVar1 = *(uint *)(*(long *)(lVar6 + 0xfa8) + 0xbc);
            if (uVar1 < 7) {
              *param_2 = uVar1;
              return 0;
            }
            return 2;
          }
        }
        goto LAB_01d79d64;
      }
    }
    uVar5 = 3;
  }
  return uVar5;
}

