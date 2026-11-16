
void FUN_02712f60(long *param_1,long param_2,long param_3)

{
  long *plVar1;
  long *plVar2;
  long *plVar3;
  long *plVar4;
  long *plVar5;
  long lVar6;
  long *plVar7;
  
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
  *param_1 = (long)(PTR_DAT_04bc35d8 + 0x10);
  memset(param_1 + 8,0,0x1a38);
  plVar7 = param_1 + 7;
  *plVar7 = (long)&PTR_LAB_04a8d1b0;
  FUN_012caa00(param_1 + 0xe,plVar7,0);
  plVar1 = param_1 + 0x70;
  param_1[0x71] = 0;
  param_1[0x72] = 0;
  *plVar7 = (long)&PTR_LAB_04a8d180;
  param_1[0x73] = 0;
  param_1[0x74] = 0;
  param_1[0x75] = 0;
  *(undefined1 *)(param_1 + 0x76) = 0;
  param_1[0x70] = (long)&PTR_LAB_04a8d1b0;
  FUN_012caa00(param_1 + 0x77,plVar1,0);
  plVar2 = param_1 + 0xd9;
  param_1[0x70] = (long)&PTR_LAB_04a8d180;
  param_1[0xda] = 0;
  param_1[0xdb] = 0;
  param_1[0xdc] = 0;
  param_1[0xdd] = 0;
  param_1[0xde] = 0;
  *(undefined1 *)(param_1 + 0xdf) = 0;
  param_1[0xd9] = (long)&PTR_LAB_04a8d1b0;
  FUN_012caa00(param_1 + 0xe0,plVar2,0);
  param_1[0xd9] = (long)&PTR_LAB_04a8d180;
  param_1[0x143] = 0;
  param_1[0x144] = 0;
  param_1[0x145] = 0;
  param_1[0x146] = 0;
  param_1[0x147] = 0;
  *(undefined1 *)(param_1 + 0x148) = 0;
  param_1[0x142] = (long)&PTR_LAB_04a8d1b0;
  FUN_012caa00(param_1 + 0x149,param_1 + 0x142,0);
  param_1[0x142] = (long)&PTR_LAB_04a8d180;
  param_1[0x1ac] = 0;
  param_1[0x1ad] = 0;
  param_1[0x1ae] = 0;
  param_1[0x1af] = 0;
  param_1[0x1b0] = 0;
  *(undefined1 *)(param_1 + 0x1b1) = 0;
  param_1[0x1ab] = (long)&PTR_LAB_04a8d1b0;
  FUN_012caa00(param_1 + 0x1b2,param_1 + 0x1ab,0);
  param_1[0x1ab] = (long)&PTR_LAB_04a8d180;
  plVar3 = param_1 + 0x214;
  param_1[0x215] = 0;
  *(undefined1 *)(param_1 + 0x21a) = 0;
  param_1[0x216] = 0;
  param_1[0x217] = 0;
  param_1[0x218] = 0;
  param_1[0x219] = 0;
  param_1[0x214] = (long)&PTR_LAB_04a8d1b0;
  FUN_012caa00(param_1 + 0x21b,plVar3,0);
  param_1[0x214] = (long)&PTR_LAB_04a8d180;
  plVar4 = param_1 + 0x27d;
  param_1[0x27e] = 0;
  *(undefined1 *)(param_1 + 0x283) = 0;
  param_1[0x27f] = 0;
  param_1[0x280] = 0;
  param_1[0x281] = 0;
  param_1[0x282] = 0;
  param_1[0x27d] = (long)&PTR_LAB_04a8d1b0;
  FUN_012caa00(param_1 + 0x284,plVar4,0);
  param_1[0x27d] = (long)&PTR_LAB_04a8d180;
  plVar5 = param_1 + 0x2e6;
  param_1[0x2e7] = 0;
  *(undefined1 *)(param_1 + 0x2ec) = 0;
  param_1[0x2e8] = 0;
  param_1[0x2e9] = 0;
  param_1[0x2ea] = 0;
  param_1[0x2eb] = 0;
  param_1[0x2e6] = (long)&PTR_LAB_04a8d1b0;
  FUN_012caa00(param_1 + 0x2ed,plVar5,0);
  param_1[0x2e6] = (long)&PTR_LAB_04a8d180;
  *param_1 = (long)&PTR_LAB_04a8d150;
  lVar6 = param_1[3];
  param_1[3] = (long)plVar7;
  if (lVar6 != 0) {
    param_1[0xb] = lVar6;
  }
  param_1[9] = param_1[9] + param_3;
  FUN_026400e0(plVar7,param_3);
  lVar6 = param_1[3];
  param_1[3] = (long)plVar1;
  if (lVar6 != 0) {
    param_1[0x74] = lVar6;
  }
  param_1[0x72] = param_1[0x72] + param_3 + 0x34;
  FUN_026400e0(plVar1);
  lVar6 = param_1[3];
  param_1[3] = (long)plVar2;
  if (lVar6 != 0) {
    param_1[0xdd] = lVar6;
  }
  param_1[0xdb] = param_1[0xdb] + param_3 + 0x68;
  FUN_026400e0(plVar2);
  lVar6 = param_1[3];
  param_1[3] = (long)(param_1 + 0x142);
  if (lVar6 != 0) {
    param_1[0x146] = lVar6;
  }
  param_1[0x144] = param_1[0x144] + param_3 + 0x9c;
  FUN_026400e0();
  lVar6 = param_1[3];
  param_1[3] = (long)(param_1 + 0x1ab);
  if (lVar6 != 0) {
    param_1[0x1af] = lVar6;
  }
  param_1[0x1ad] = param_1[0x1ad] + param_3 + 0xd0;
  FUN_026400e0();
  lVar6 = param_1[3];
  param_1[3] = (long)plVar3;
  if (lVar6 != 0) {
    param_1[0x218] = lVar6;
  }
  param_1[0x216] = param_1[0x216] + param_3 + 0x104;
  FUN_026400e0(plVar3);
  lVar6 = param_1[3];
  param_1[3] = (long)plVar4;
  if (lVar6 != 0) {
    param_1[0x281] = lVar6;
  }
  param_1[0x27f] = param_1[0x27f] + param_3 + 0x138;
  FUN_026400e0(plVar4);
  lVar6 = param_1[3];
  param_1[3] = (long)plVar5;
  if (lVar6 != 0) {
    param_1[0x2ea] = lVar6;
  }
  param_1[0x2e8] = param_1[0x2e8] + param_3 + 0x16c;
  FUN_026400e0(plVar5);
  return;
}

