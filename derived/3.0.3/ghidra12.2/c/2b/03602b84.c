
void FUN_03602b84(undefined8 *param_1)

{
  undefined *puVar1;
  
  *(undefined1 *)(param_1 + 1) = 0;
  puVar1 = PTR_DAT_04bdf328;
  param_1[2] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[7] = 0x1e;
  param_1[8] = *(undefined8 *)puVar1;
  param_1[9] = 0;
  *(undefined4 *)(param_1 + 3) = 4;
  *param_1 = &PTR_caseD_26_04b3f1e0;
  *(undefined2 *)(param_1 + 0xd) = 0;
  *(undefined2 *)(param_1 + 0xe) = 1;
  *(undefined8 *)((long)param_1 + 0x84) = 0;
  *(undefined2 *)((long)param_1 + 0x92) = 0;
  *(undefined4 *)((long)param_1 + 0x6c) = 3;
  *(undefined4 *)(param_1 + 0x14) = 3;
  *(undefined4 *)(param_1 + 0x16) = 3;
  *(undefined4 *)(param_1 + 0x18) = 3;
  *(undefined4 *)((long)param_1 + 0xdc) = 3;
  *(undefined4 *)(param_1 + 0x22) = 3;
  *(undefined4 *)(param_1 + 0x24) = 3;
  *(undefined4 *)(param_1 + 0x26) = 3;
  *(undefined2 *)(param_1 + 0x27) = 0x101;
  *(undefined2 *)((long)param_1 + 0x8c) = 0x1964;
  *(undefined4 *)((long)param_1 + 0x8e) = 0x10001;
  *(undefined1 *)((long)param_1 + 0x95) = 0;
  param_1[0x13] = 0;
  param_1[0x15] = 0;
  param_1[0x17] = 0;
  *(undefined2 *)(param_1 + 0x1b) = 0;
  *(undefined2 *)(param_1 + 0x1c) = 1;
  *(undefined8 *)((long)param_1 + 0xf4) = 0;
  *(undefined2 *)((long)param_1 + 0xfc) = 0x1964;
  *(undefined4 *)((long)param_1 + 0xfe) = 0x10001;
  *(undefined2 *)((long)param_1 + 0x102) = 0;
  *(undefined1 *)((long)param_1 + 0x105) = 0;
  param_1[0x21] = 0;
  param_1[0x23] = 0;
  param_1[0x25] = 0;
  *(undefined1 *)(param_1 + 0x2f) = 0;
  param_1[0xb] = 0;
  param_1[0xc] = 0x600000003;
  param_1[0x19] = 0;
  param_1[0x1a] = 0x600000003;
  param_1[0x2a] = &PTR_LAB_04b3f298;
  param_1[0x2b] = 0;
  param_1[0x13a] = &PTR_LAB_04bb1ba0;
  param_1[0x180] = 0;
  *(undefined4 *)(param_1 + 0x181) = 0;
  *(undefined4 *)(param_1 + 0x186) = 0;
  param_1[0x185] = 0;
  param_1[0x184] = 0;
  param_1[0x183] = 0;
  param_1[0x182] = 0;
  nn::os::InitializeLightEvent(param_1 + 0x187,0,1);
  nn::os::InitializeMutex((MutexType *)(param_1 + 0x18b),true,0);
  param_1[0x28] = 0;
  param_1[0x29] = 0;
  param_1[0x2c] = 0;
  param_1[0x2d] = 0;
  return;
}

