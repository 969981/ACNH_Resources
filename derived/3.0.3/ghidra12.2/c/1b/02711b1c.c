
void FUN_02711b1c(long *param_1,long param_2,long param_3)

{
  long *plVar1;
  long *plVar2;
  long *plVar3;
  long *plVar4;
  long *plVar5;
  long *plVar6;
  long *__s;
  long *plVar7;
  undefined *puVar8;
  long lVar9;
  
  puVar8 = PTR_DAT_04bc35c8;
  *(undefined1 *)(param_1 + 6) = 0;
  param_1[2] = param_3;
  param_1[3] = 0;
  plVar1 = param_1 + 0xdace;
  plVar2 = param_1 + 0xbb8d;
  plVar3 = param_1 + 0x9c4c;
  plVar4 = param_1 + 0x7d0b;
  *param_1 = (long)(puVar8 + 0x10);
  param_1[1] = 0;
  plVar5 = param_1 + 0x3e89;
  plVar6 = param_1 + 0x5dca;
  plVar7 = param_1 + 0x1f48;
  param_1[4] = 0;
  param_1[5] = 0;
  if (param_2 != 0) {
    lVar9 = *(long *)(param_2 + 0x18);
    *(long **)(param_2 + 0x18) = param_1;
    if (lVar9 != 0) {
      param_1[4] = lVar9;
    }
  }
  __s = param_1 + 7;
  *param_1 = (long)(PTR_DAT_04bc35d8 + 0x10);
  memset(__s,0,0x7d040);
  FUN_02711ee0(__s,0,0);
  param_1[7] = (long)&PTR_LAB_04a8cee0;
  FUN_02711ee0(plVar7,0,0);
  *plVar7 = (long)&PTR_LAB_04a8cee0;
  FUN_02711ee0(plVar5,0,0);
  *plVar5 = (long)&PTR_LAB_04a8cee0;
  FUN_02711ee0(plVar6,0,0);
  *plVar6 = (long)&PTR_LAB_04a8cee0;
  FUN_02711ee0(plVar4,0,0);
  *plVar4 = (long)&PTR_LAB_04a8cee0;
  FUN_02711ee0(plVar3,0,0);
  *plVar3 = (long)&PTR_LAB_04a8cee0;
  FUN_02711ee0(plVar2,0,0);
  *plVar2 = (long)&PTR_LAB_04a8cee0;
  FUN_02711ee0(plVar1,0,0);
  *plVar1 = (long)&PTR_LAB_04a8cee0;
  *param_1 = (long)&PTR_LAB_04a8ceb0;
  lVar9 = param_1[3];
  param_1[3] = (long)__s;
  if (lVar9 != 0) {
    param_1[0xb] = lVar9;
  }
  param_1[9] = param_1[9] + param_3;
  FUN_026400e0(__s,param_3);
  lVar9 = param_1[3];
  param_1[3] = (long)plVar7;
  if (lVar9 != 0) {
    param_1[0x1f4c] = lVar9;
  }
  param_1[0x1f4a] = param_1[0x1f4a] + param_3 + 0x28a28;
  FUN_026400e0(plVar7);
  lVar9 = param_1[3];
  param_1[3] = (long)plVar5;
  if (lVar9 != 0) {
    param_1[0x3e8d] = lVar9;
  }
  param_1[0x3e8b] = param_1[0x3e8b] + param_3 + 0x51450;
  FUN_026400e0(plVar5);
  lVar9 = param_1[3];
  param_1[3] = (long)plVar6;
  if (lVar9 != 0) {
    param_1[0x5dce] = lVar9;
  }
  param_1[0x5dcc] = param_1[0x5dcc] + param_3 + 0x79e78;
  FUN_026400e0(plVar6);
  lVar9 = param_1[3];
  param_1[3] = (long)plVar4;
  if (lVar9 != 0) {
    param_1[0x7d0f] = lVar9;
  }
  param_1[0x7d0d] = param_1[0x7d0d] + param_3 + 0xa28a0;
  FUN_026400e0(plVar4);
  lVar9 = param_1[3];
  param_1[3] = (long)plVar3;
  if (lVar9 != 0) {
    param_1[0x9c50] = lVar9;
  }
  param_1[0x9c4e] = param_1[0x9c4e] + param_3 + 0xcb2c8;
  FUN_026400e0(plVar3);
  lVar9 = param_1[3];
  param_1[3] = (long)plVar2;
  if (lVar9 != 0) {
    param_1[0xbb91] = lVar9;
  }
  param_1[0xbb8f] = param_1[0xbb8f] + param_3 + 0xf3cf0;
  FUN_026400e0();
  lVar9 = param_1[3];
  param_1[3] = (long)plVar1;
  if (lVar9 != 0) {
    param_1[0xdad2] = lVar9;
  }
  param_1[0xdad0] = param_1[0xdad0] + param_3 + 0x11c718;
  FUN_026400e0(plVar1);
  return;
}

