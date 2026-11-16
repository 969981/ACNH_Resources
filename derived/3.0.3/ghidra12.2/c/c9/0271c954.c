
void FUN_0271c954(long *param_1,long param_2,long param_3)

{
  long *__s;
  long *plVar1;
  long *plVar2;
  long *plVar3;
  long lVar4;
  
  param_1[2] = param_3;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  *(undefined1 *)(param_1 + 6) = 0;
  *param_1 = (long)&DAT_04a882a8;
  param_1[1] = 0;
  if (param_2 != 0) {
    lVar4 = *(long *)(param_2 + 0x18);
    *(long **)(param_2 + 0x18) = param_1;
    if (lVar4 != 0) {
      param_1[4] = lVar4;
    }
  }
  __s = param_1 + 7;
  *param_1 = (long)(PTR_DAT_04bc35d8 + 0x10);
  memset(__s,0,0x2680);
  FUN_0271cbc0(__s,0,0);
  plVar1 = param_1 + 0x13b;
  param_1[7] = (long)&PTR_LAB_04a8e1b0;
  FUN_0271cbc0(plVar1,0,0);
  param_1[0x13b] = (long)&PTR_LAB_04a8e1b0;
  plVar2 = param_1 + 0x26f;
  FUN_0271cbc0(plVar2,0,0);
  param_1[0x26f] = (long)&PTR_LAB_04a8e1b0;
  plVar3 = param_1 + 0x3a3;
  FUN_0271cbc0(plVar3,0,0);
  param_1[0x3a3] = (long)&PTR_LAB_04a8e1b0;
  *param_1 = (long)&PTR_LAB_04a8e180;
  lVar4 = param_1[3];
  param_1[3] = (long)__s;
  if (lVar4 != 0) {
    param_1[0xb] = lVar4;
  }
  param_1[9] = param_1[9] + param_3;
  FUN_026400e0(__s,param_3);
  lVar4 = param_1[3];
  param_1[3] = (long)plVar1;
  if (lVar4 != 0) {
    param_1[0x13f] = lVar4;
  }
  param_1[0x13d] = param_1[0x13d] + param_3 + 0x6c;
  FUN_026400e0(plVar1);
  lVar4 = param_1[3];
  param_1[3] = (long)plVar2;
  if (lVar4 != 0) {
    param_1[0x273] = lVar4;
  }
  param_1[0x271] = param_1[0x271] + param_3 + 0xd8;
  FUN_026400e0(plVar2);
  lVar4 = param_1[3];
  param_1[3] = (long)plVar3;
  if (lVar4 != 0) {
    param_1[0x3a7] = lVar4;
  }
  param_1[0x3a5] = param_1[0x3a5] + param_3 + 0x144;
  FUN_026400e0(plVar3);
  return;
}

