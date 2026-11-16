
void FUN_0270d47c(long *param_1,long param_2,long param_3)

{
  long *plVar1;
  long *plVar2;
  long *plVar3;
  long *__s;
  long lVar4;
  
  param_1[2] = param_3;
  param_1[3] = 0;
  plVar1 = param_1 + 0x62e0;
  plVar2 = param_1 + 0x20fa;
  param_1[4] = 0;
  param_1[5] = 0;
  *(undefined1 *)(param_1 + 6) = 0;
  *param_1 = (long)&DAT_04a882a8;
  param_1[1] = 0;
  plVar3 = param_1 + 0x41ed;
  if (param_2 != 0) {
    lVar4 = *(long *)(param_2 + 0x18);
    *(long **)(param_2 + 0x18) = param_1;
    if (lVar4 != 0) {
      param_1[4] = lVar4;
    }
  }
  __s = param_1 + 7;
  *param_1 = (long)(PTR_DAT_04bc35d8 + 0x10);
  memset(__s,0,0x41e60);
  FUN_0270d700(__s,0,0);
  param_1[7] = (long)&PTR_LAB_04a8c380;
  FUN_0270d700(plVar2,0,0);
  *plVar2 = (long)&PTR_LAB_04a8c380;
  FUN_0270d700(plVar3,0,0);
  *plVar3 = (long)&PTR_LAB_04a8c380;
  FUN_0270d700(plVar1,0,0);
  *plVar1 = (long)&PTR_LAB_04a8c380;
  *param_1 = (long)&PTR_LAB_04a8c800;
  lVar4 = param_1[3];
  param_1[3] = (long)__s;
  if (lVar4 != 0) {
    param_1[0xb] = lVar4;
  }
  param_1[9] = param_1[9] + param_3;
  FUN_026400e0(__s,param_3);
  lVar4 = param_1[3];
  param_1[3] = (long)plVar2;
  if (lVar4 != 0) {
    param_1[0x20fe] = lVar4;
  }
  param_1[0x20fc] = param_1[0x20fc] + param_3 + 0x13230;
  FUN_026400e0(plVar2);
  lVar4 = param_1[3];
  param_1[3] = (long)plVar3;
  if (lVar4 != 0) {
    param_1[0x41f1] = lVar4;
  }
  param_1[0x41ef] = param_1[0x41ef] + param_3 + 0x26460;
  FUN_026400e0(plVar3);
  lVar4 = param_1[3];
  param_1[3] = (long)plVar1;
  if (lVar4 != 0) {
    param_1[0x62e4] = lVar4;
  }
  param_1[0x62e2] = param_1[0x62e2] + param_3 + 0x39690;
  FUN_026400e0(plVar1);
  return;
}

