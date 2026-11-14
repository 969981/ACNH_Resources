
undefined8 FUN_01d79d88(long param_1,long param_2,undefined8 param_3,uint param_4)

{
  int *piVar1;
  int iVar2;
  undefined *puVar3;
  byte bVar4;
  ulong uVar5;
  undefined8 uVar6;
  long lVar7;
  
  **(undefined1 **)(param_2 + 8) = 0;
  uVar5 = FUN_01d77c78();
  if ((uVar5 & 1) == 0) {
LAB_01d79e98:
    uVar6 = 4;
  }
  else {
    uVar5 = FUN_01d77c78(param_1);
    puVar3 = PTR_DAT_04bb7bc0;
    if (((uVar5 & 1) != 0) && (*(char *)(param_1 + 0xc) == '\0')) {
      bVar4 = FUN_01e06398(*(undefined8 *)PTR_DAT_04bb7bc0,param_1 + 0xd,param_1);
      *(byte *)(param_1 + 0xc) = bVar4 & 1;
      if ((bVar4 & 1) == 0) {
        lVar7 = FUN_01dff648(*(undefined8 *)puVar3,param_1);
        if (lVar7 != 0) {
          if (*(char *)(lVar7 + 0xfb0) == '\0') {
            return 2;
          }
          if (*(char *)(lVar7 + 0xfb1) == '\0') {
            return 2;
          }
          if (*(long *)(lVar7 + 0xfa8) == 0) {
            return 1;
          }
          lVar7 = FUN_01dff648(*(undefined8 *)puVar3,param_1);
          lVar7 = *(long *)(lVar7 + 0xfa8);
          if (*(char *)(lVar7 + 0x2c) != '\0') {
            piVar1 = (int *)(lVar7 + 0xc0) + (ulong)param_4 * 3;
            if (9 < param_4) {
              piVar1 = (int *)(lVar7 + 0xc0);
            }
            iVar2 = *piVar1;
            *(bool *)param_3 = iVar2 == 2;
            if ((((int)param_4 < 0) || (*(int *)(lVar7 + 0x138) <= (int)param_4)) ||
               (uVar5 = FUN_01d79190(param_2,piVar1[1],iVar2 == 2), (uVar5 & 1) != 0)) {
              return 0;
            }
            return 2;
          }
        }
        goto LAB_01d79e98;
      }
    }
    uVar6 = 3;
  }
  return uVar6;
}

