
void FUN_02713aa0(long *param_1,long param_2,long param_3)

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
  plVar1 = param_1 + 0x12fa;
  *(undefined1 *)(param_1 + 6) = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  *param_1 = (long)&DAT_04a882a8;
  param_1[1] = 0;
  plVar2 = param_1 + 0x10df;
  if (param_2 != 0) {
    lVar7 = *(long *)(param_2 + 0x18);
    *(long **)(param_2 + 0x18) = param_1;
    if (lVar7 != 0) {
      param_1[4] = lVar7;
    }
  }
  __s = param_1 + 7;
  *param_1 = (long)(PTR_DAT_04bc35d8 + 0x10);
  memset(__s,0,0xa870);
  FUN_02713ee0(__s,0,0);
  plVar3 = param_1 + 0x222;
  param_1[7] = (long)&PTR_LAB_04a8d3f0;
  FUN_02713ee0(plVar3,0,0);
  param_1[0x222] = (long)&PTR_LAB_04a8d3f0;
  plVar4 = param_1 + 0x43d;
  FUN_02713ee0(plVar4,0,0);
  param_1[0x43d] = (long)&PTR_LAB_04a8d3f0;
  plVar5 = param_1 + 0x658;
  FUN_02713ee0(plVar5,0,0);
  param_1[0x658] = (long)&PTR_LAB_04a8d3f0;
  plVar6 = param_1 + 0x873;
  FUN_02713ee0(plVar6,0,0);
  param_1[0x873] = (long)&PTR_LAB_04a8d3f0;
  FUN_02713ee0(param_1 + 0xa8e,0,0);
  param_1[0xa8e] = (long)&PTR_LAB_04a8d3f0;
  FUN_02713ee0(param_1 + 0xca9,0,0);
  param_1[0xca9] = (long)&PTR_LAB_04a8d3f0;
  FUN_02713ee0(param_1 + 0xec4,0,0);
  param_1[0xec4] = (long)&PTR_LAB_04a8d3f0;
  FUN_02713ee0(plVar2,0,0);
  *plVar2 = (long)&PTR_LAB_04a8d3f0;
  FUN_02713ee0(plVar1,0,0);
  *plVar1 = (long)&PTR_LAB_04a8d3f0;
  *param_1 = (long)&PTR_LAB_04a8d3c0;
  lVar7 = param_1[3];
  param_1[3] = (long)__s;
  if (lVar7 != 0) {
    param_1[0xb] = lVar7;
  }
  param_1[9] = param_1[9] + param_3;
  FUN_026400e0(__s,param_3);
  lVar7 = param_1[3];
  param_1[3] = (long)plVar3;
  if (lVar7 != 0) {
    param_1[0x226] = lVar7;
  }
  param_1[0x224] = param_1[0x224] + param_3 + 0x12e8;
  FUN_026400e0(plVar3);
  lVar7 = param_1[3];
  param_1[3] = (long)plVar4;
  if (lVar7 != 0) {
    param_1[0x441] = lVar7;
  }
  param_1[0x43f] = param_1[0x43f] + param_3 + 0x25d0;
  FUN_026400e0(plVar4);
  lVar7 = param_1[3];
  param_1[3] = (long)plVar5;
  if (lVar7 != 0) {
    param_1[0x65c] = lVar7;
  }
  param_1[0x65a] = param_1[0x65a] + param_3 + 0x38b8;
  FUN_026400e0(plVar5);
  lVar7 = param_1[3];
  param_1[3] = (long)plVar6;
  if (lVar7 != 0) {
    param_1[0x877] = lVar7;
  }
  param_1[0x875] = param_1[0x875] + param_3 + 0x4ba0;
  FUN_026400e0(plVar6);
  lVar7 = param_1[3];
  param_1[3] = (long)(param_1 + 0xa8e);
  if (lVar7 != 0) {
    param_1[0xa92] = lVar7;
  }
  param_1[0xa90] = param_1[0xa90] + param_3 + 0x5e88;
  FUN_026400e0();
  lVar7 = param_1[3];
  param_1[3] = (long)(param_1 + 0xca9);
  if (lVar7 != 0) {
    param_1[0xcad] = lVar7;
  }
  param_1[0xcab] = param_1[0xcab] + param_3 + 0x7170;
  FUN_026400e0();
  lVar7 = param_1[3];
  param_1[3] = (long)(param_1 + 0xec4);
  if (lVar7 != 0) {
    param_1[0xec8] = lVar7;
  }
  param_1[0xec6] = param_1[0xec6] + param_3 + 0x8458;
  FUN_026400e0();
  lVar7 = param_1[3];
  param_1[3] = (long)plVar2;
  if (lVar7 != 0) {
    param_1[0x10e3] = lVar7;
  }
  param_1[0x10e1] = param_1[0x10e1] + param_3 + 0x9740;
  FUN_026400e0(plVar2);
  lVar7 = param_1[3];
  param_1[3] = (long)plVar1;
  if (lVar7 != 0) {
    param_1[0x12fe] = lVar7;
  }
  param_1[0x12fc] = param_1[0x12fc] + param_3 + 0xaa28;
  FUN_026400e0(plVar1);
  return;
}

