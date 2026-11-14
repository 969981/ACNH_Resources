
undefined8 FUN_01d79890(long param_1,long param_2,undefined8 param_3)

{
  undefined *puVar1;
  byte bVar2;
  ulong uVar3;
  undefined8 uVar4;
  long lVar5;
  
  **(undefined1 **)(param_2 + 8) = 0;
  uVar3 = FUN_01d77c78();
  if ((uVar3 & 1) == 0) {
LAB_01d79944:
    uVar4 = 4;
  }
  else {
    uVar3 = FUN_01d77c78(param_1);
    puVar1 = PTR_DAT_04bb7bc0;
    if (((uVar3 & 1) != 0) && (*(char *)(param_1 + 0xc) == '\0')) {
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
          if (*(long *)(lVar5 + 0xfa8) == 0) {
            return 1;
          }
          lVar5 = FUN_01dff648(*(undefined8 *)puVar1,param_1);
          lVar5 = *(long *)(lVar5 + 0xfa8);
          if (*(char *)(lVar5 + 0x2c) == '\0') {
            if (1 < *(int *)(lVar5 + 0x28)) {
              *(bool *)param_3 = *(int *)(lVar5 + 0x1c) == 2;
              uVar3 = FUN_01d79190(param_2,*(undefined4 *)(lVar5 + 0x20));
              if ((uVar3 & 1) == 0) {
                return 2;
              }
            }
            return 0;
          }
        }
        goto LAB_01d79944;
      }
    }
    uVar4 = 3;
  }
  return uVar4;
}

