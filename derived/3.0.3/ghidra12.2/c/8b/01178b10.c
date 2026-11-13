
void FUN_01178b10(undefined8 *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 undefined1 *param_5,undefined8 param_6)

{
  undefined *puVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined *puVar5;
  long lVar6;
  undefined1 *__dest;
  
  puVar5 = &DAT_04983520;
  param_1[7] = &DAT_04983520;
  *(undefined4 *)(param_1 + 2) = 0;
  *(undefined4 *)((long)param_1 + 0x14) = param_4;
  *param_1 = &PTR_LAB_04983558;
  param_1[1] = param_1 + 7;
  *(undefined4 *)(param_1 + 5) = 8;
  *(undefined1 *)((long)param_1 + 0x33) = 0;
  __dest = (undefined1 *)((long)param_1 + 0x2c);
  *__dest = 0;
  puVar1 = PTR_DAT_04bb3768 + 0x10;
  *(undefined4 *)(param_1 + 8) = param_3;
  param_1[3] = puVar1;
  param_1[4] = __dest;
  *(undefined4 *)(param_1 + 0xb) = 0;
  param_1[0x11] = param_6;
  param_1[9] = (long)param_1 + 0x5c;
  param_1[10] = 10;
  if ((param_5 != (undefined1 *)0x0) && (__dest != param_5)) {
    lVar6 = 0;
    do {
      if (param_5[lVar6] == '\0') goto LAB_01178bdc;
      if (param_5[lVar6 + 1] == '\0') {
        lVar6 = lVar6 + 1;
        goto LAB_01178bdc;
      }
      if (param_5[lVar6 + 2] == '\0') {
        lVar6 = lVar6 + 2;
        goto LAB_01178bdc;
      }
      lVar6 = lVar6 + 3;
    } while (lVar6 != 0x80001);
    lVar6 = 0;
LAB_01178bdc:
    iVar4 = (int)lVar6;
    if (6 < iVar4) {
      iVar4 = 7;
    }
    memcpy(__dest,param_5,(long)iVar4);
    __dest[iVar4] = 0;
    puVar5 = *(undefined **)param_1[1];
  }
  (**(code **)(puVar5 + 0x18))();
  iVar4 = *(int *)(param_1 + 0xb);
  *(undefined4 *)(param_1 + 2) = 8;
  if ((0 < iVar4) && (iVar4 == *(int *)(param_1 + 8))) {
    *(int *)(param_1 + 0xb) = iVar4 + -1;
    iVar4 = iVar4 + -1;
  }
  iVar3 = *(int *)(param_1 + 10);
  if (iVar3 <= iVar4) {
    if (0 < iVar4) {
      *(int *)(param_1 + 0xb) = iVar4 + -1;
      iVar4 = iVar4 + -1;
    }
    if (iVar3 <= iVar4) {
      return;
    }
  }
  iVar2 = iVar3;
  if (0 < *(int *)((long)param_1 + 0x54)) {
    iVar2 = *(int *)((long)param_1 + 0x54);
  }
  *(int *)((long)param_1 + 0x54) = iVar2 + -1;
  *(int *)(param_1 + 0xb) = iVar4 + 1;
  if (iVar2 <= iVar3) {
    iVar3 = 0;
  }
  *(undefined4 *)(param_1[9] + (long)((iVar2 + -1) - iVar3) * 4) = param_2;
  return;
}

