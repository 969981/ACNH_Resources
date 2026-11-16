
void FUN_0270f02c(long *param_1,long param_2,long param_3)

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
  memset(__s,0,0x39c0);
  FUN_0270f2ec(__s);
  *param_1 = (long)&PTR_LAB_04a8c650;
  lVar1 = param_1[3];
  param_1[3] = (long)__s;
  if (lVar1 != 0) {
    param_1[0xb] = lVar1;
  }
  param_1[9] = param_1[9] + param_3;
  FUN_026400e0(__s,param_3);
  lVar1 = param_1[3];
  param_1[3] = (long)(param_1 + 0xaf);
  if (lVar1 != 0) {
    param_1[0xb3] = lVar1;
  }
  param_1[0xb1] = param_1[0xb1] + param_3 + 0x2c;
  FUN_026400e0();
  lVar1 = param_1[3];
  param_1[3] = (long)(param_1 + 0x157);
  if (lVar1 != 0) {
    param_1[0x15b] = lVar1;
  }
  param_1[0x159] = param_1[0x159] + param_3 + 0x58;
  FUN_026400e0();
  lVar1 = param_1[3];
  param_1[3] = (long)(param_1 + 0x1ff);
  if (lVar1 != 0) {
    param_1[0x203] = lVar1;
  }
  param_1[0x201] = param_1[0x201] + param_3 + 0x84;
  FUN_026400e0();
  lVar1 = param_1[3];
  param_1[3] = (long)(param_1 + 0x2a7);
  if (lVar1 != 0) {
    param_1[0x2ab] = lVar1;
  }
  param_1[0x2a9] = param_1[0x2a9] + param_3 + 0xb0;
  FUN_026400e0();
  lVar1 = param_1[3];
  param_1[3] = (long)(param_1 + 0x34f);
  if (lVar1 != 0) {
    param_1[0x353] = lVar1;
  }
  param_1[0x351] = param_1[0x351] + param_3 + 0xdc;
  FUN_026400e0();
  lVar1 = param_1[3];
  param_1[3] = (long)(param_1 + 0x3f7);
  if (lVar1 != 0) {
    param_1[0x3fb] = lVar1;
  }
  param_1[0x3f9] = param_1[0x3f9] + param_3 + 0x108;
  FUN_026400e0();
  lVar1 = param_1[3];
  param_1[3] = (long)(param_1 + 0x49f);
  if (lVar1 != 0) {
    param_1[0x4a3] = lVar1;
  }
  param_1[0x4a1] = param_1[0x4a1] + param_3 + 0x134;
  FUN_026400e0();
  lVar1 = param_1[3];
  param_1[3] = (long)(param_1 + 0x547);
  if (lVar1 != 0) {
    param_1[0x54b] = lVar1;
  }
  param_1[0x549] = param_1[0x549] + param_3 + 0x160;
  FUN_026400e0();
  lVar1 = param_1[3];
  param_1[3] = (long)(param_1 + 0x5ef);
  if (lVar1 != 0) {
    param_1[0x5f3] = lVar1;
  }
  param_1[0x5f1] = param_1[0x5f1] + param_3 + 0x18c;
  FUN_026400e0();
  lVar1 = param_1[3];
  param_1[3] = (long)(param_1 + 0x697);
  if (lVar1 != 0) {
    param_1[0x69b] = lVar1;
  }
  param_1[0x699] = param_1[0x699] + param_3 + 0x1b8;
  FUN_026400e0();
  return;
}

