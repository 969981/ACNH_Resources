
undefined8 FUN_03c3faa0(long param_1,undefined4 param_2,undefined *param_3,byte param_4)

{
  int iVar1;
  long lVar2;
  undefined *__dest;
  
  iVar1 = (**(code **)(**(long **)(param_1 + 0x6d8) + 0x10))();
  if ((iVar1 != 3) && (iVar1 = (**(code **)(**(long **)(param_1 + 0x6d8) + 0x10))(), iVar1 != 0)) {
    if ((param_4 & 1) == 0) {
      return 0;
    }
    if (*(char *)(param_1 + 0x345) != '\0') {
      return 0;
    }
  }
  *(undefined4 *)(param_1 + 0x33c) = param_2;
  __dest = *(undefined **)(param_1 + 0x350);
  if (param_3 == (undefined *)0x0) {
    (**(code **)(PTR_PTR_04c4b980 + 0x18))(&PTR_PTR_04c4b980);
    param_3 = PTR_DAT_04c4b988;
    if (__dest == PTR_DAT_04c4b988) goto LAB_03c3fbf4;
    (**(code **)(PTR_PTR_04c4b980 + 0x18))(&PTR_PTR_04c4b980);
    lVar2 = 0;
    do {
      if (PTR_DAT_04c4b988[lVar2] == '\0') goto LAB_03c3fbcc;
      if (PTR_DAT_04c4b988[lVar2 + 1] == '\0') goto LAB_03c3fbc0;
      if (PTR_DAT_04c4b988[lVar2 + 2] == '\0') goto LAB_03c3fbc8;
      lVar2 = lVar2 + 3;
    } while (lVar2 != 0x80001);
  }
  else {
    if (__dest == param_3) goto LAB_03c3fbf4;
    lVar2 = 0;
    do {
      if (param_3[lVar2] == '\0') goto LAB_03c3fbcc;
      if (param_3[lVar2 + 1] == '\0') goto LAB_03c3fbc0;
      if (param_3[lVar2 + 2] == '\0') goto LAB_03c3fbc8;
      lVar2 = lVar2 + 3;
    } while (lVar2 != 0x80001);
  }
  lVar2 = 0;
LAB_03c3fbcc:
  iVar1 = (int)lVar2;
  if (*(int *)(param_1 + 0x358) <= (int)lVar2) {
    iVar1 = *(int *)(param_1 + 0x358) + -1;
  }
  memcpy(__dest,param_3,(long)iVar1);
  __dest[iVar1] = 0;
LAB_03c3fbf4:
  *(undefined1 *)(param_1 + 0x344) = 1;
  if ((param_4 & 1) != 0) {
    *(byte *)(param_1 + 0x345) = param_4 & 1;
  }
  return 1;
LAB_03c3fbc0:
  lVar2 = lVar2 + 1;
  goto LAB_03c3fbcc;
LAB_03c3fbc8:
  lVar2 = lVar2 + 2;
  goto LAB_03c3fbcc;
}

