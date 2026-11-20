
void FUN_03ff9ac8(undefined8 *param_1)

{
  void *__s;
  
  __s = (void *)((long)param_1 + 0x1cd7U & 0xffffffffffffffc0);
  param_1[0xf] = __s;
  param_1[0x10] = (long)__s + 0x10000;
  param_1[0x11] = (long)__s + 0x20000;
  param_1[0x12] = (long)__s + 0x30000;
  memset(__s,0,0x10000);
  *param_1 = 0x200000000;
  memset((void *)param_1[0x10],0,0x10000);
  memset((void *)param_1[0x11],0,0x10000);
  memset((void *)param_1[0x12],0,0x10000);
  *(undefined4 *)((long)param_1 + 0xc) = 0;
  memset(param_1 + 0x13,0,0x1c00);
  *(undefined2 *)(param_1 + 8) = 0;
  param_1[2] = 0xffffffffffffffff;
  param_1[3] = 0xffffffffffffffff;
  *(undefined4 *)(param_1 + 10) = 0xffffffff;
  *(undefined8 *)((long)param_1 + 0x42) = 0;
  *(undefined8 *)((long)param_1 + 0x54) = 0xffffffffffffffff;
  *(undefined4 *)((long)param_1 + 0x4a) = 0;
  *(undefined4 *)((long)param_1 + 0x5c) = 0xffffffff;
  *(undefined2 *)((long)param_1 + 0x4e) = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[6] = 0xffffffffffffffff;
  param_1[7] = 0xffffffffffffffff;
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  return;
}

