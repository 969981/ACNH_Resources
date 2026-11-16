
void FUN_0271abb8(undefined8 *param_1,long param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined8 *__s;
  undefined8 *puVar2;
  long *plVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long *plVar7;
  
  param_1[2] = param_3;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  *(undefined1 *)(param_1 + 6) = 0;
  *param_1 = &DAT_04a882a8;
  param_1[1] = 0;
  if (param_2 != 0) {
    lVar4 = *(long *)(param_2 + 0x18);
    *(undefined8 **)(param_2 + 0x18) = param_1;
    if (lVar4 != 0) {
      param_1[4] = lVar4;
    }
  }
  *(undefined1 *)(param_1 + 0xd) = 0;
  *param_1 = &PTR_LAB_04a8de20;
  lVar4 = param_1[2];
  lVar5 = param_1[3];
  param_1[0xb] = 0;
  param_1[0xc] = 0;
  param_1[3] = param_1 + 7;
  param_1[8] = 0;
  param_1[9] = lVar4;
  if (lVar5 != 0) {
    param_1[0xb] = lVar5;
  }
  puVar1 = PTR_DAT_04bc30e8 + 0x10;
  plVar7 = param_1 + 0x15;
  *plVar7 = (long)puVar1;
  param_1[0x11] = 0;
  param_1[0x12] = 0;
  param_1[0x13] = 0;
  param_1[0x14] = 0;
  *(undefined1 *)(param_1 + 0x14) = 0;
  param_1[0x16] = 0;
  param_1[0x17] = 0;
  plVar3 = param_1 + 0xe;
  *plVar3 = (long)puVar1;
  param_1[7] = &PTR_LAB_04a8ca40;
  param_1[10] = plVar3;
  param_1[0x18] = 0;
  param_1[0x19] = 0;
  param_1[0x1a] = 0;
  param_1[0x1b] = 0;
  *(undefined1 *)(param_1 + 0x1b) = 0;
  param_1[0xf] = 0;
  param_1[0x10] = lVar4;
  FUN_026400e0(plVar3,lVar4);
  lVar5 = param_1[10];
  param_1[10] = plVar7;
  if (lVar5 != 0) {
    param_1[0x19] = lVar5;
  }
  param_1[0x17] = param_1[0x17] + lVar4 + 8;
  FUN_026400e0(plVar7);
  lVar5 = param_1[2];
  lVar6 = param_1[3];
  param_1[0x20] = 0;
  param_1[0x21] = 0;
  lVar4 = lVar5 + 0x10;
  *(undefined1 *)(param_1 + 0x22) = 0;
  param_1[3] = param_1 + 0x1c;
  param_1[0x1d] = 0;
  param_1[0x1e] = lVar4;
  if (lVar6 != 0) {
    param_1[0x20] = lVar6;
  }
  param_1[0x25] = lVar4;
  param_1[0x23] = &DAT_04a8ee20;
  param_1[0x24] = 0;
  param_1[0x2a] = &DAT_04a8ee20;
  param_1[0x1c] = &PTR_LAB_04a8de50;
  param_1[0x1f] = param_1 + 0x23;
  param_1[0x28] = 0;
  param_1[0x29] = 0;
  *(undefined1 *)(param_1 + 0x29) = 0;
  param_1[0x26] = 0;
  param_1[0x27] = 0;
  param_1[0x2b] = 0;
  param_1[0x2c] = 0;
  param_1[0x2d] = 0;
  param_1[0x2e] = 0;
  param_1[0x2f] = 0;
  param_1[0x30] = 0;
  *(undefined1 *)(param_1 + 0x30) = 0;
  FUN_026400e0();
  lVar4 = param_1[0x1f];
  param_1[0x1f] = param_1 + 0x2a;
  if (lVar4 != 0) {
    param_1[0x2e] = lVar4;
  }
  param_1[0x2c] = param_1[0x2c] + lVar5 + 0x11;
  FUN_026400e0(param_1 + 0x2a);
  lVar5 = param_1[2];
  lVar6 = param_1[3];
  param_1[0x34] = 0;
  param_1[0x35] = 0;
  lVar4 = lVar5 + 0x14;
  param_1[0x36] = 0;
  *(undefined1 *)(param_1 + 0x37) = 0;
  param_1[3] = param_1 + 0x31;
  param_1[0x32] = 0;
  param_1[0x33] = lVar4;
  if (lVar6 != 0) {
    param_1[0x35] = lVar6;
  }
  __s = param_1 + 0x38;
  param_1[0x31] = PTR_DAT_04bc35d8 + 0x10;
  memset(__s,0,0xee0);
  FUN_02719548(__s,0,0);
  puVar2 = param_1 + 0x126;
  param_1[0x38] = &PTR_LAB_04a8ee50;
  FUN_02719548(puVar2,0,0);
  param_1[0x126] = &PTR_LAB_04a8ee50;
  param_1[0x31] = &PTR_LAB_04a8de80;
  lVar6 = param_1[0x34];
  param_1[0x34] = __s;
  if (lVar6 != 0) {
    param_1[0x3c] = lVar6;
  }
  param_1[0x3a] = param_1[0x3a] + lVar4;
  FUN_026400e0(__s,lVar4);
  lVar4 = param_1[0x34];
  param_1[0x34] = puVar2;
  if (lVar4 != 0) {
    param_1[0x12a] = lVar4;
  }
  param_1[0x128] = param_1[0x128] + lVar5 + 0x4c;
  FUN_026400e0(puVar2);
  return;
}

