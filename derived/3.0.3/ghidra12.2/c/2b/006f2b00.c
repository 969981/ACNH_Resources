
void FUN_006f2b00(undefined8 *param_1,uint param_2,undefined1 param_3)

{
  memset(param_1 + 1,0,0x1e0);
  *(undefined4 *)(param_1 + 0x40) = 0;
  param_1[3] = &PTR_FUN_048fc6e0;
  param_1[9] = &PTR_FUN_048fc6e0;
  param_1[0xf] = &PTR_FUN_048fc6e0;
  param_1[0x15] = &PTR_FUN_048fc6e0;
  param_1[0x1b] = &PTR_FUN_048fc6e0;
  param_1[0x21] = &PTR_FUN_048fc6e0;
  param_1[0x27] = &PTR_FUN_048fc6e0;
  param_1[0x2d] = &PTR_FUN_048fc6e0;
  param_1[0x33] = &PTR_FUN_048fc6e0;
  param_1[0x39] = &PTR_FUN_048fc6e0;
  *(undefined4 *)(param_1 + 0x3d) = 0xffffffff;
  *param_1 = &PTR_LAB_048fc680;
  *(bool *)((long)param_1 + 0x204) = param_2 == 0;
  *(bool *)((long)param_1 + 0x205) = (param_2 & 0xfffffffb) == 2;
  *(bool *)((long)param_1 + 0x206) = param_2 == 8;
  *(bool *)((long)param_1 + 0x207) = param_2 == 9;
  *(bool *)(param_1 + 0x41) = param_2 == 0xb;
  *(bool *)((long)param_1 + 0x209) = param_2 == 0xc;
  *(undefined1 *)((long)param_1 + 0x20a) = param_3;
  *(undefined2 *)((long)param_1 + 0x20c) = 0;
  param_1[0x42] = 0;
  param_1[7] = 0;
  param_1[8] = 0;
  param_1[0xd] = 0;
  param_1[0xe] = 0;
  param_1[0x13] = 0;
  param_1[0x14] = 0;
  param_1[0x19] = 0;
  param_1[0x1a] = 0;
  param_1[0x1f] = 0;
  param_1[0x20] = 0;
  param_1[0x25] = 0;
  param_1[0x26] = 0;
  param_1[0x2b] = 0;
  param_1[0x2c] = 0;
  param_1[0x31] = 0;
  param_1[0x32] = 0;
  param_1[0x37] = 0;
  param_1[0x38] = 0;
  param_1[0x3e] = 0;
  param_1[0x3f] = 0;
  return;
}

