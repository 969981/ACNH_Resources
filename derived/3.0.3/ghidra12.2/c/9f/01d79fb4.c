
undefined8 FUN_01d79fb4(long param_1,long param_2,uint param_3)

{
  int *piVar1;
  undefined *puVar2;
  byte bVar3;
  ulong uVar4;
  undefined8 uVar5;
  long lVar6;
  
  uVar4 = FUN_01d77c78();
  if ((uVar4 & 1) == 0) {
LAB_01d7a0b0:
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
          uVar5 = 2;
          if ((*(char *)(lVar6 + 0xfb0) == '\0') || (*(char *)(lVar6 + 0xfb1) == '\0'))
          goto LAB_01d7a0b4;
          if (*(long *)(lVar6 + 0xfa8) == 0) {
            uVar5 = 1;
            goto LAB_01d7a0b4;
          }
          lVar6 = FUN_01dff648(*(undefined8 *)puVar2,param_1);
          lVar6 = *(long *)(lVar6 + 0xfa8);
          if ((*(char *)(lVar6 + 0x2c) != '\0') && ((int)param_3 < *(int *)(lVar6 + 0x138))) {
            piVar1 = (int *)(lVar6 + 0xc0) + (ulong)param_3 * 3;
            if (9 < param_3) {
              piVar1 = (int *)(lVar6 + 0xc0);
            }
            *(bool *)(param_2 + 0x38) = *piVar1 == 2;
            *(int *)(param_2 + 0x3c) = piVar1[2];
            uVar4 = FUN_01d79190(param_2,piVar1[1]);
            if ((uVar4 & 1) != 0) {
              return 0;
            }
            uVar5 = 2;
            goto LAB_01d7a0b4;
          }
        }
        goto LAB_01d7a0b0;
      }
    }
    uVar5 = 3;
  }
LAB_01d7a0b4:
  **(undefined1 **)(param_2 + 8) = 0;
  return uVar5;
}

