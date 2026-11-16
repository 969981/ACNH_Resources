
void FUN_02720e18(long *param_1,long param_2,long param_3)

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
  memset(__s,0,0x5320);
  FUN_02721278(__s);
  *param_1 = (long)&PTR_LAB_04a8ec40;
  lVar1 = param_1[3];
  param_1[3] = (long)__s;
  if (lVar1 != 0) {
    param_1[0xb] = lVar1;
  }
  param_1[9] = param_1[9] + param_3;
  FUN_026400e0(__s,param_3);
  lVar1 = param_1[3];
  param_1[3] = (long)(param_1 + 0x8c);
  if (lVar1 != 0) {
    param_1[0x90] = lVar1;
  }
  param_1[0x8e] = param_1[0x8e] + param_3 + 0x11c;
  FUN_026400e0();
  lVar1 = param_1[3];
  param_1[3] = (long)(param_1 + 0x111);
  if (lVar1 != 0) {
    param_1[0x115] = lVar1;
  }
  param_1[0x113] = param_1[0x113] + param_3 + 0x238;
  FUN_026400e0();
  lVar1 = param_1[3];
  param_1[3] = (long)(param_1 + 0x196);
  if (lVar1 != 0) {
    param_1[0x19a] = lVar1;
  }
  param_1[0x198] = param_1[0x198] + param_3 + 0x354;
  FUN_026400e0();
  lVar1 = param_1[3];
  param_1[3] = (long)(param_1 + 0x21b);
  if (lVar1 != 0) {
    param_1[0x21f] = lVar1;
  }
  param_1[0x21d] = param_1[0x21d] + param_3 + 0x470;
  FUN_026400e0();
  lVar1 = param_1[3];
  param_1[3] = (long)(param_1 + 0x2a0);
  if (lVar1 != 0) {
    param_1[0x2a4] = lVar1;
  }
  param_1[0x2a2] = param_1[0x2a2] + param_3 + 0x58c;
  FUN_026400e0();
  lVar1 = param_1[3];
  param_1[3] = (long)(param_1 + 0x325);
  if (lVar1 != 0) {
    param_1[0x329] = lVar1;
  }
  param_1[0x327] = param_1[0x327] + param_3 + 0x6a8;
  FUN_026400e0();
  lVar1 = param_1[3];
  param_1[3] = (long)(param_1 + 0x3aa);
  if (lVar1 != 0) {
    param_1[0x3ae] = lVar1;
  }
  param_1[0x3ac] = param_1[0x3ac] + param_3 + 0x7c4;
  FUN_026400e0();
  lVar1 = param_1[3];
  param_1[3] = (long)(param_1 + 0x42f);
  if (lVar1 != 0) {
    param_1[0x433] = lVar1;
  }
  param_1[0x431] = param_1[0x431] + param_3 + 0x8e0;
  FUN_026400e0();
  lVar1 = param_1[3];
  param_1[3] = (long)(param_1 + 0x4b4);
  if (lVar1 != 0) {
    param_1[0x4b8] = lVar1;
  }
  param_1[0x4b6] = param_1[0x4b6] + param_3 + 0x9fc;
  FUN_026400e0();
  lVar1 = param_1[3];
  param_1[3] = (long)(param_1 + 0x539);
  if (lVar1 != 0) {
    param_1[0x53d] = lVar1;
  }
  param_1[0x53b] = param_1[0x53b] + param_3 + 0xb18;
  FUN_026400e0();
  lVar1 = param_1[3];
  param_1[3] = (long)(param_1 + 0x5be);
  if (lVar1 != 0) {
    param_1[0x5c2] = lVar1;
  }
  param_1[0x5c0] = param_1[0x5c0] + param_3 + 0xc34;
  FUN_026400e0();
  lVar1 = param_1[3];
  param_1[3] = (long)(param_1 + 0x643);
  if (lVar1 != 0) {
    param_1[0x647] = lVar1;
  }
  param_1[0x645] = param_1[0x645] + param_3 + 0xd50;
  FUN_026400e0();
  lVar1 = param_1[3];
  param_1[3] = (long)(param_1 + 0x6c8);
  if (lVar1 != 0) {
    param_1[0x6cc] = lVar1;
  }
  param_1[0x6ca] = param_1[0x6ca] + param_3 + 0xe6c;
  FUN_026400e0();
  lVar1 = param_1[3];
  param_1[3] = (long)(param_1 + 0x74d);
  if (lVar1 != 0) {
    param_1[0x751] = lVar1;
  }
  param_1[0x74f] = param_1[0x74f] + param_3 + 0xf88;
  FUN_026400e0();
  lVar1 = param_1[3];
  param_1[3] = (long)(param_1 + 0x7d2);
  if (lVar1 != 0) {
    param_1[0x7d6] = lVar1;
  }
  param_1[0x7d4] = param_1[0x7d4] + param_3 + 0x10a4;
  FUN_026400e0();
  lVar1 = param_1[3];
  param_1[3] = (long)(param_1 + 0x857);
  if (lVar1 != 0) {
    param_1[0x85b] = lVar1;
  }
  param_1[0x859] = param_1[0x859] + param_3 + 0x11c0;
  FUN_026400e0();
  lVar1 = param_1[3];
  param_1[3] = (long)(param_1 + 0x8dc);
  if (lVar1 != 0) {
    param_1[0x8e0] = lVar1;
  }
  param_1[0x8de] = param_1[0x8de] + param_3 + 0x12dc;
  FUN_026400e0();
  lVar1 = param_1[3];
  param_1[3] = (long)(param_1 + 0x961);
  if (lVar1 != 0) {
    param_1[0x965] = lVar1;
  }
  param_1[0x963] = param_1[0x963] + param_3 + 0x13f8;
  FUN_026400e0();
  lVar1 = param_1[3];
  param_1[3] = (long)(param_1 + 0x9e6);
  if (lVar1 != 0) {
    param_1[0x9ea] = lVar1;
  }
  param_1[0x9e8] = param_1[0x9e8] + param_3 + 0x1514;
  FUN_026400e0();
  return;
}

