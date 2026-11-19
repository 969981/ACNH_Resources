
void FUN_03b581a4(undefined8 *param_1,undefined8 param_2)

{
  *(undefined8 *)((long)param_1 + 0x14) = 0;
  param_1[4] = 0;
  *(undefined4 *)(param_1 + 5) = 0;
  *param_1 = 0;
  param_1[1] = 0;
  *(undefined2 *)(param_1 + 2) = 0;
  nn::os::InitializeMutex((MutexType *)(param_1 + 2),true,0);
  *(undefined2 *)(param_1 + 6) = 0;
  *(undefined8 *)((long)param_1 + 0x34) = 0;
  param_1[8] = 0;
  *(undefined4 *)(param_1 + 9) = 0;
  nn::os::InitializeMutex((MutexType *)(param_1 + 6),true,0);
  *(undefined1 *)(param_1 + 0x22) = 0;
  param_1[10] = 0xa00000000;
  param_1[0xb] = param_1 + 0xc;
  param_1[0x16] = 0xa00000000;
  param_1[0x17] = param_1 + 0x18;
  param_1[0x23] = param_2;
  *(undefined2 *)(param_1 + 0x24) = 0;
  param_1[0x29] = &PTR_LAB_04b76c70;
  *(undefined4 *)(param_1 + 0x2a) = 0;
  param_1[0x2b] = 0;
  param_1[0x25] = 0;
  param_1[0x26] = 0;
  param_1[0x27] = 0;
  param_1[0x28] = 0;
  *(undefined4 *)(param_1 + 0x2c) = 0;
  *(undefined4 *)((long)param_1 + 0x164) = 0;
  *(undefined4 *)(param_1 + 0x2d) = 0;
  param_1[0x2e] = &PTR_LAB_04b76c70;
  *(undefined4 *)(param_1 + 0x2f) = 0;
  param_1[0x30] = 0;
  *(undefined4 *)(param_1 + 0x31) = 0;
  *(undefined4 *)((long)param_1 + 0x18c) = 0;
  param_1[0x3b] = param_1 + 0x51;
  param_1[0x51] = param_1 + 0x67;
  param_1[0x67] = param_1 + 0x7d;
  param_1[0x7d] = param_1 + 0x93;
  param_1[0x93] = param_1 + 0xa9;
  param_1[0xa9] = param_1 + 0xbf;
  param_1[0xbf] = param_1 + 0xd5;
  param_1[0xd5] = param_1 + 0xeb;
  *(undefined4 *)(param_1 + 0x32) = 0;
  *(undefined4 *)(param_1 + 0x37) = 0;
  param_1[0xeb] = param_1 + 0x101;
  param_1[0x101] = 0;
  *(undefined2 *)(param_1 + 0x117) = 0;
  param_1[0x119] = 0;
  *(undefined4 *)(param_1 + 0x11a) = 0;
  *(undefined8 *)((long)param_1 + 0x8bc) = 0;
  param_1[0x35] = param_1 + 0x35;
  param_1[0x36] = param_1 + 0x35;
  param_1[0x38] = param_1 + 0x3b;
  param_1[0x39] = param_1 + 0x3b;
  *(undefined4 *)(param_1 + 0x3a) = 10;
  param_1[0x33] = 0;
  param_1[0x34] = 0;
  nn::os::InitializeMutex((MutexType *)(param_1 + 0x117),false,0);
  return;
}

