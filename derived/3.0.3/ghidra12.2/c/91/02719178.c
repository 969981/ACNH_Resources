
void FUN_02719178(long *param_1,long param_2,long param_3)

{
  long *__s;
  long *plVar1;
  long *plVar2;
  long *plVar3;
  long *plVar4;
  long *plVar5;
  long lVar6;
  
  param_1[2] = param_3;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  *(undefined1 *)(param_1 + 6) = 0;
  *param_1 = (long)&DAT_04a882a8;
  param_1[1] = 0;
  if (param_2 != 0) {
    lVar6 = *(long *)(param_2 + 0x18);
    *(long **)(param_2 + 0x18) = param_1;
    if (lVar6 != 0) {
      param_1[4] = lVar6;
    }
  }
  __s = param_1 + 7;
  *param_1 = (long)(PTR_DAT_04bc35d8 + 0x10);
  memset(__s,0,0x2ca0);
  FUN_02719548(__s,0,0);
  plVar1 = param_1 + 0xf5;
  param_1[7] = (long)&PTR_LAB_04a8ee50;
  FUN_02719548(plVar1,0,0);
  plVar2 = param_1 + 0x1e3;
  param_1[0xf5] = (long)&PTR_LAB_04a8ee50;
  FUN_02719548(plVar2,0,0);
  param_1[0x1e3] = (long)&PTR_LAB_04a8ee50;
  plVar3 = param_1 + 0x2d1;
  FUN_02719548(plVar3,0,0);
  param_1[0x2d1] = (long)&PTR_LAB_04a8ee50;
  plVar4 = param_1 + 0x3bf;
  FUN_02719548(plVar4,0,0);
  param_1[0x3bf] = (long)&PTR_LAB_04a8ee50;
  plVar5 = param_1 + 0x4ad;
  FUN_02719548(plVar5,0,0);
  param_1[0x4ad] = (long)&PTR_LAB_04a8ee50;
  *param_1 = (long)&PTR_LAB_04a8dc40;
  lVar6 = param_1[3];
  param_1[3] = (long)__s;
  if (lVar6 != 0) {
    param_1[0xb] = lVar6;
  }
  param_1[9] = param_1[9] + param_3;
  FUN_026400e0(__s,param_3);
  lVar6 = param_1[3];
  param_1[3] = (long)plVar1;
  if (lVar6 != 0) {
    param_1[0xf9] = lVar6;
  }
  param_1[0xf7] = param_1[0xf7] + param_3 + 0x38;
  FUN_026400e0(plVar1);
  lVar6 = param_1[3];
  param_1[3] = (long)plVar2;
  if (lVar6 != 0) {
    param_1[0x1e7] = lVar6;
  }
  param_1[0x1e5] = param_1[0x1e5] + param_3 + 0x70;
  FUN_026400e0(plVar2);
  lVar6 = param_1[3];
  param_1[3] = (long)plVar3;
  if (lVar6 != 0) {
    param_1[0x2d5] = lVar6;
  }
  param_1[0x2d3] = param_1[0x2d3] + param_3 + 0xa8;
  FUN_026400e0(plVar3);
  lVar6 = param_1[3];
  param_1[3] = (long)plVar4;
  if (lVar6 != 0) {
    param_1[0x3c3] = lVar6;
  }
  param_1[0x3c1] = param_1[0x3c1] + param_3 + 0xe0;
  FUN_026400e0(plVar4);
  lVar6 = param_1[3];
  param_1[3] = (long)plVar5;
  if (lVar6 != 0) {
    param_1[0x4b1] = lVar6;
  }
  param_1[0x4af] = param_1[0x4af] + param_3 + 0x118;
  FUN_026400e0(plVar5);
  return;
}

