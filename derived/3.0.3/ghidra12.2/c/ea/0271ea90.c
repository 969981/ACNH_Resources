
void FUN_0271ea90(long *param_1,long param_2,long param_3)

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
  memset(__s,0,0x6200);
  FUN_0271f378(__s,0,0);
  plVar1 = param_1 + 399;
  param_1[7] = (long)&PTR_LAB_04a8e870;
  FUN_0271f378(plVar1,0,0);
  param_1[399] = (long)&PTR_LAB_04a8e870;
  plVar2 = param_1 + 0x317;
  FUN_0271f378(plVar2,0,0);
  param_1[0x317] = (long)&PTR_LAB_04a8e870;
  plVar3 = param_1 + 0x49f;
  FUN_0271f378(plVar3,0,0);
  param_1[0x49f] = (long)&PTR_LAB_04a8e870;
  plVar4 = param_1 + 0x627;
  FUN_0271f378(plVar4,0,0);
  param_1[0x627] = (long)&PTR_LAB_04a8e870;
  plVar5 = param_1 + 0x7af;
  FUN_0271f378(plVar5,0,0);
  param_1[0x7af] = (long)&PTR_LAB_04a8e870;
  plVar6 = param_1 + 0x937;
  FUN_0271f378(plVar6,0,0);
  param_1[0x937] = (long)&PTR_LAB_04a8e870;
  FUN_0271f378(param_1 + 0xabf,0,0);
  param_1[0xabf] = (long)&PTR_LAB_04a8e870;
  *param_1 = (long)&PTR_LAB_04a8e840;
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
    param_1[0x193] = lVar7;
  }
  param_1[0x191] = param_1[0x191] + param_3 + 0x158c;
  FUN_026400e0(plVar1);
  lVar7 = param_1[3];
  param_1[3] = (long)plVar2;
  if (lVar7 != 0) {
    param_1[0x31b] = lVar7;
  }
  param_1[0x319] = param_1[0x319] + param_3 + 0x2b18;
  FUN_026400e0(plVar2);
  lVar7 = param_1[3];
  param_1[3] = (long)plVar3;
  if (lVar7 != 0) {
    param_1[0x4a3] = lVar7;
  }
  param_1[0x4a1] = param_1[0x4a1] + param_3 + 0x40a4;
  FUN_026400e0(plVar3);
  lVar7 = param_1[3];
  param_1[3] = (long)plVar4;
  if (lVar7 != 0) {
    param_1[0x62b] = lVar7;
  }
  param_1[0x629] = param_1[0x629] + param_3 + 0x5630;
  FUN_026400e0(plVar4);
  lVar7 = param_1[3];
  param_1[3] = (long)plVar5;
  if (lVar7 != 0) {
    param_1[0x7b3] = lVar7;
  }
  param_1[0x7b1] = param_1[0x7b1] + param_3 + 0x6bbc;
  FUN_026400e0(plVar5);
  lVar7 = param_1[3];
  param_1[3] = (long)plVar6;
  if (lVar7 != 0) {
    param_1[0x93b] = lVar7;
  }
  param_1[0x939] = param_1[0x939] + param_3 + 0x8148;
  FUN_026400e0(plVar6);
  lVar7 = param_1[3];
  param_1[3] = (long)(param_1 + 0xabf);
  if (lVar7 != 0) {
    param_1[0xac3] = lVar7;
  }
  param_1[0xac1] = param_1[0xac1] + param_3 + 0x96d4;
  FUN_026400e0();
  return;
}

