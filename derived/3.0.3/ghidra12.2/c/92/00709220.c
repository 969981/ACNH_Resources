
void FUN_00709220(undefined4 param_1,undefined4 *param_2,undefined4 param_3,undefined8 *param_4,
                 undefined4 param_5,undefined4 param_6,undefined4 param_7,undefined4 param_8,
                 undefined4 param_9,long *param_10)

{
  undefined4 *__dest;
  long lVar1;
  int iVar2;
  undefined4 uVar3;
  undefined *puVar4;
  undefined8 uVar5;
  long lVar6;
  undefined4 *__src;
  
  *param_2 = 0;
  param_2[1] = param_3;
  __dest = param_2 + 0x11;
  uVar5 = *param_4;
  uVar3 = *(undefined4 *)(param_4 + 1);
  param_2[5] = param_1;
  param_2[6] = param_5;
  *(undefined8 *)(param_2 + 2) = uVar5;
  param_2[4] = uVar3;
  param_2[0x10] = 0x80;
  *(undefined1 *)((long)param_2 + 0xc3) = 0;
  *(undefined ***)(param_2 + 0xc) = &PTR_LAB_048fcff0;
  *(undefined4 **)(param_2 + 0xe) = __dest;
  (**(code **)(*param_10 + 0x18))(param_10);
  __src = (undefined4 *)param_10[1];
  if (__dest != __src) {
    (**(code **)(*param_10 + 0x18))(param_10);
    lVar6 = 0;
    do {
      if (*(char *)(param_10[1] + lVar6) == '\0') goto LAB_0070930c;
      lVar1 = param_10[1] + lVar6;
      if (*(char *)(lVar1 + 1) == '\0') {
        lVar6 = lVar6 + 1;
        goto LAB_0070930c;
      }
      if (*(char *)(lVar1 + 2) == '\0') {
        lVar6 = lVar6 + 2;
        goto LAB_0070930c;
      }
      lVar6 = lVar6 + 3;
    } while (lVar6 != 0x80001);
    lVar6 = 0;
LAB_0070930c:
    iVar2 = (int)lVar6;
    if ((int)param_2[0x10] <= (int)lVar6) {
      iVar2 = param_2[0x10] + -1;
    }
    memcpy(__dest,__src,(long)iVar2);
    *(undefined1 *)((long)__dest + (long)iVar2) = 0;
  }
  *(undefined8 *)(param_2 + 0x34) = 0;
  puVar4 = PTR_DAT_04bb2d88;
  param_2[7] = param_6;
  param_2[8] = param_7;
  param_2[0x32] = 7;
  param_2[9] = param_8;
  param_2[10] = param_9;
  *(undefined2 *)(param_2 + 0x33) = 0;
  *(undefined **)(param_2 + 0xc) = puVar4 + 0x10;
  return;
}

