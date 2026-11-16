
void FUN_027372b4(long *param_1,long param_2,long param_3)

{
  long *__s;
  long lVar1;
  
  param_1[2] = param_3;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  *(undefined1 *)(param_1 + 6) = 0;
  *param_1 = (long)&DAT_04a882a8;
  param_1[1] = 0;
  if (param_2 != 0) {
    lVar1 = *(long *)(param_2 + 0x18);
    *(long **)(param_2 + 0x18) = param_1;
    if (lVar1 != 0) {
      param_1[4] = lVar1;
    }
  }
  __s = param_1 + 7;
  *param_1 = (long)(PTR_DAT_04bc35d8 + 0x10);
  memset(__s,0,0x12280);
  FUN_02737544(__s);
  *param_1 = (long)&PTR_LAB_04a908e8;
  lVar1 = param_1[3];
  param_1[3] = (long)__s;
  if (lVar1 != 0) {
    param_1[0xb] = lVar1;
  }
  param_1[9] = param_1[9] + param_3;
  FUN_026400e0(__s,param_3);
  lVar1 = param_1[3];
  param_1[3] = (long)(param_1 + 0x491);
  if (lVar1 != 0) {
    param_1[0x495] = lVar1;
  }
  param_1[0x493] = param_1[0x493] + param_3 + 0x11f8;
  FUN_026400e0();
  lVar1 = param_1[3];
  param_1[3] = (long)(param_1 + 0x91b);
  if (lVar1 != 0) {
    param_1[0x91f] = lVar1;
  }
  param_1[0x91d] = param_1[0x91d] + param_3 + 0x23f0;
  FUN_026400e0();
  lVar1 = param_1[3];
  param_1[3] = (long)(param_1 + 0xda5);
  if (lVar1 != 0) {
    param_1[0xda9] = lVar1;
  }
  param_1[0xda7] = param_1[0xda7] + param_3 + 0x35e8;
  FUN_026400e0();
  lVar1 = param_1[3];
  param_1[3] = (long)(param_1 + 0x122f);
  if (lVar1 != 0) {
    param_1[0x1233] = lVar1;
  }
  param_1[0x1231] = param_1[0x1231] + param_3 + 0x47e0;
  FUN_026400e0();
  lVar1 = param_1[3];
  param_1[3] = (long)(param_1 + 0x16b9);
  if (lVar1 != 0) {
    param_1[0x16bd] = lVar1;
  }
  param_1[0x16bb] = param_1[0x16bb] + param_3 + 23000;
  FUN_026400e0();
  lVar1 = param_1[3];
  param_1[3] = (long)(param_1 + 0x1b43);
  if (lVar1 != 0) {
    param_1[0x1b47] = lVar1;
  }
  param_1[0x1b45] = param_1[0x1b45] + param_3 + 0x6bd0;
  FUN_026400e0();
  lVar1 = param_1[3];
  param_1[3] = (long)(param_1 + 0x1fcd);
  if (lVar1 != 0) {
    param_1[0x1fd1] = lVar1;
  }
  param_1[0x1fcf] = param_1[0x1fcf] + param_3 + 0x7dc8;
  FUN_026400e0();
  return;
}

