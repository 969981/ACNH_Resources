
void FUN_02191da8(undefined8 *param_1,undefined8 param_2)

{
  long *plVar1;
  
  param_1[0x321] = 0;
  *param_1 = &PTR_LAB_04a76598;
  param_1[1] = param_2;
  param_1[2] = 0;
  param_1[3] = 0;
  plVar1 = param_1 + 6;
  *plVar1 = (long)(param_1 + 0x3b);
  param_1[0x3b] = param_1 + 0x70;
  param_1[0x70] = param_1 + 0xa5;
  param_1[0xa5] = param_1 + 0xda;
  param_1[0xda] = param_1 + 0x10f;
  param_1[0x10f] = param_1 + 0x144;
  param_1[0x144] = param_1 + 0x179;
  param_1[0x179] = param_1 + 0x1ae;
  param_1[0x1ae] = param_1 + 0x1e3;
  param_1[0x1e3] = param_1 + 0x218;
  param_1[0x218] = param_1 + 0x24d;
  param_1[0x24d] = param_1 + 0x282;
  param_1[4] = plVar1;
  param_1[5] = plVar1;
  param_1[0x282] = param_1 + 0x2b7;
  param_1[0x2b7] = param_1 + 0x2ec;
  param_1[0x2ec] = param_1 + 0x321;
  if (param_1 + 0x356 != (undefined8 *)0x0) {
    param_1[2] = 0x1000000000;
    param_1[3] = param_1 + 0x356;
  }
  param_1[0x367] = 0;
  param_1[0x366] = 0;
  param_1[0x36a] = param_1 + 0x39f;
  param_1[0x368] = param_1 + 0x36a;
  param_1[0x685] = 0;
  param_1[0x369] = param_1 + 0x36a;
  param_1[0x39f] = param_1 + 0x3d4;
  param_1[0x3d4] = param_1 + 0x409;
  param_1[0x409] = param_1 + 0x43e;
  param_1[0x43e] = param_1 + 0x473;
  param_1[0x473] = param_1 + 0x4a8;
  param_1[0x4a8] = param_1 + 0x4dd;
  param_1[0x4dd] = param_1 + 0x512;
  param_1[0x512] = param_1 + 0x547;
  param_1[0x547] = param_1 + 0x57c;
  param_1[0x57c] = param_1 + 0x5b1;
  param_1[0x5b1] = param_1 + 0x5e6;
  param_1[0x5e6] = param_1 + 0x61b;
  param_1[0x61b] = param_1 + 0x650;
  param_1[0x650] = param_1 + 0x685;
  if (param_1 + 0x6ba != (undefined8 *)0x0) {
    param_1[0x367] = param_1 + 0x6ba;
    param_1[0x366] = 0x1000000000;
  }
  param_1[0x6cc] = 0;
  param_1[0x6cb] = 0;
  param_1[0x6ca] = 0;
  *(undefined8 *)((long)param_1 + 0x3665) = 0;
  return;
}

