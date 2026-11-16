
void FUN_0271ed6c(long *param_1,long param_2,long param_3)

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
  memset(__s,0,0x6580);
  FUN_0271fe60(__s);
  *param_1 = (long)&PTR_LAB_04a8ea90;
  lVar1 = param_1[3];
  param_1[3] = (long)__s;
  if (lVar1 != 0) {
    param_1[0xb] = lVar1;
  }
  param_1[9] = param_1[9] + param_3;
  FUN_026400e0(__s,param_3);
  lVar1 = param_1[3];
  param_1[3] = (long)(param_1 + 0x19d);
  if (lVar1 != 0) {
    param_1[0x1a1] = lVar1;
  }
  param_1[0x19f] = param_1[0x19f] + param_3 + 0x1594;
  FUN_026400e0();
  lVar1 = param_1[3];
  param_1[3] = (long)(param_1 + 0x333);
  if (lVar1 != 0) {
    param_1[0x337] = lVar1;
  }
  param_1[0x335] = param_1[0x335] + param_3 + 0x2b28;
  FUN_026400e0();
  lVar1 = param_1[3];
  param_1[3] = (long)(param_1 + 0x4c9);
  if (lVar1 != 0) {
    param_1[0x4cd] = lVar1;
  }
  param_1[0x4cb] = param_1[0x4cb] + param_3 + 0x40bc;
  FUN_026400e0();
  lVar1 = param_1[3];
  param_1[3] = (long)(param_1 + 0x65f);
  if (lVar1 != 0) {
    param_1[0x663] = lVar1;
  }
  param_1[0x661] = param_1[0x661] + param_3 + 0x5650;
  FUN_026400e0();
  lVar1 = param_1[3];
  param_1[3] = (long)(param_1 + 0x7f5);
  if (lVar1 != 0) {
    param_1[0x7f9] = lVar1;
  }
  param_1[0x7f7] = param_1[0x7f7] + param_3 + 0x6be4;
  FUN_026400e0();
  lVar1 = param_1[3];
  param_1[3] = (long)(param_1 + 0x98b);
  if (lVar1 != 0) {
    param_1[0x98f] = lVar1;
  }
  param_1[0x98d] = param_1[0x98d] + param_3 + 0x8178;
  FUN_026400e0();
  lVar1 = param_1[3];
  param_1[3] = (long)(param_1 + 0xb21);
  if (lVar1 != 0) {
    param_1[0xb25] = lVar1;
  }
  param_1[0xb23] = param_1[0xb23] + param_3 + 0x970c;
  FUN_026400e0();
  return;
}

