
void FUN_0270dabc(long *param_1,long param_2,long param_3)

{
  long *__s;
  long *plVar1;
  long *plVar2;
  long *plVar3;
  long *plVar4;
  long *plVar5;
  long *plVar6;
  long lVar7;
  
  param_1[2] = param_3;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  *(undefined1 *)(param_1 + 6) = 0;
  *param_1 = (long)&DAT_04a882a8;
  param_1[1] = 0;
  if (param_2 != 0) {
    lVar7 = *(long *)(param_2 + 0x18);
    *(long **)(param_2 + 0x18) = param_1;
    if (lVar7 != 0) {
      param_1[4] = lVar7;
    }
  }
  __s = param_1 + 7;
  *param_1 = (long)(PTR_DAT_04bc35d8 + 0x10);
  memset(__s,0,0x3800);
  FUN_0270e2bc(__s,0,0);
  plVar1 = param_1 + 0xe7;
  param_1[7] = (long)&PTR_LAB_04a8c410;
  FUN_0270e2bc(plVar1,0,0);
  plVar2 = param_1 + 0x1c7;
  param_1[0xe7] = (long)&PTR_LAB_04a8c410;
  FUN_0270e2bc(plVar2,0,0);
  param_1[0x1c7] = (long)&PTR_LAB_04a8c410;
  plVar3 = param_1 + 0x2a7;
  FUN_0270e2bc(plVar3,0,0);
  param_1[0x2a7] = (long)&PTR_LAB_04a8c410;
  plVar4 = param_1 + 0x387;
  FUN_0270e2bc(plVar4,0,0);
  param_1[0x387] = (long)&PTR_LAB_04a8c410;
  plVar5 = param_1 + 0x467;
  FUN_0270e2bc(plVar5,0,0);
  param_1[0x467] = (long)&PTR_LAB_04a8c410;
  plVar6 = param_1 + 0x547;
  FUN_0270e2bc(plVar6,0,0);
  param_1[0x547] = (long)&PTR_LAB_04a8c410;
  FUN_0270e2bc(param_1 + 0x627,0,0);
  param_1[0x627] = (long)&PTR_LAB_04a8c410;
  *param_1 = (long)&PTR_LAB_04a8c3e0;
  lVar7 = param_1[3];
  param_1[3] = (long)__s;
  if (lVar7 != 0) {
    param_1[0xb] = lVar7;
  }
  param_1[9] = param_1[9] + param_3;
  FUN_026400e0(__s,param_3);
  lVar7 = param_1[3];
  param_1[3] = (long)plVar1;
  if (lVar7 != 0) {
    param_1[0xeb] = lVar7;
  }
  param_1[0xe9] = param_1[0xe9] + param_3 + 0x5f0;
  FUN_026400e0(plVar1);
  lVar7 = param_1[3];
  param_1[3] = (long)plVar2;
  if (lVar7 != 0) {
    param_1[0x1cb] = lVar7;
  }
  param_1[0x1c9] = param_1[0x1c9] + param_3 + 0xbe0;
  FUN_026400e0(plVar2);
  lVar7 = param_1[3];
  param_1[3] = (long)plVar3;
  if (lVar7 != 0) {
    param_1[0x2ab] = lVar7;
  }
  param_1[0x2a9] = param_1[0x2a9] + param_3 + 0x11d0;
  FUN_026400e0(plVar3);
  lVar7 = param_1[3];
  param_1[3] = (long)plVar4;
  if (lVar7 != 0) {
    param_1[0x38b] = lVar7;
  }
  param_1[0x389] = param_1[0x389] + param_3 + 0x17c0;
  FUN_026400e0(plVar4);
  lVar7 = param_1[3];
  param_1[3] = (long)plVar5;
  if (lVar7 != 0) {
    param_1[0x46b] = lVar7;
  }
  param_1[0x469] = param_1[0x469] + param_3 + 0x1db0;
  FUN_026400e0(plVar5);
  lVar7 = param_1[3];
  param_1[3] = (long)plVar6;
  if (lVar7 != 0) {
    param_1[0x54b] = lVar7;
  }
  param_1[0x549] = param_1[0x549] + param_3 + 0x23a0;
  FUN_026400e0(plVar6);
  lVar7 = param_1[3];
  param_1[3] = (long)(param_1 + 0x627);
  if (lVar7 != 0) {
    param_1[0x62b] = lVar7;
  }
  param_1[0x629] = param_1[0x629] + param_3 + 0x2990;
  FUN_026400e0();
  return;
}

