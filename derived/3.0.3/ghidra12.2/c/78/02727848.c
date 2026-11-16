
void FUN_02727848(undefined8 *param_1,long param_2,undefined8 param_3)

{
  undefined8 *__s;
  undefined8 *puVar1;
  undefined8 *puVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  
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
  lVar3 = param_1[2];
  lVar5 = param_1[3];
  *param_1 = &PTR_LAB_04a8aeb8;
  param_1[10] = 0;
  param_1[0xb] = 0;
  lVar4 = lVar3 + 4;
  param_1[0xc] = 0;
  *(undefined1 *)(param_1 + 0xd) = 0;
  param_1[3] = param_1 + 7;
  param_1[8] = 0;
  param_1[9] = lVar4;
  if (lVar5 != 0) {
    param_1[0xb] = lVar5;
  }
  __s = param_1 + 0xe;
  param_1[7] = PTR_DAT_04bc35d8 + 0x10;
  memset(__s,0,0x1308);
  FUN_0271f6d8(__s,0,0);
  puVar1 = param_1 + 0xd9;
  param_1[0xe] = &PTR_LAB_04a8e8d0;
  FUN_0271f6d8(puVar1,0,0);
  puVar2 = param_1 + 0x1a4;
  param_1[0xd9] = &PTR_LAB_04a8e8d0;
  FUN_0271f6d8(puVar2,0,0);
  param_1[0x1a4] = &PTR_LAB_04a8e8d0;
  param_1[7] = &PTR_LAB_04a8aee8;
  lVar5 = param_1[10];
  param_1[10] = __s;
  if (lVar5 != 0) {
    param_1[0x12] = lVar5;
  }
  param_1[0x10] = param_1[0x10] + lVar4;
  FUN_026400e0(__s,lVar4);
  lVar4 = param_1[10];
  param_1[10] = puVar1;
  if (lVar4 != 0) {
    param_1[0xdd] = lVar4;
  }
  param_1[0xdb] = param_1[0xdb] + lVar3 + 0x1560;
  FUN_026400e0(puVar1);
  lVar4 = param_1[10];
  param_1[10] = puVar2;
  if (lVar4 != 0) {
    param_1[0x1a8] = lVar4;
  }
  param_1[0x1a6] = param_1[0x1a6] + lVar3 + 0x2abc;
  FUN_026400e0(puVar2);
  lVar4 = param_1[3];
  param_1[0x270] = 0;
  param_1[0x272] = 0;
  param_1[0x273] = 0;
  param_1[0x274] = 0;
  *(undefined1 *)(param_1 + 0x275) = 0;
  param_1[3] = param_1 + 0x26f;
  param_1[0x271] = param_1[2] + 0x4020;
  if (lVar4 != 0) {
    param_1[0x273] = lVar4;
  }
  param_1[0x26f] = &DAT_04a8af18;
  return;
}

