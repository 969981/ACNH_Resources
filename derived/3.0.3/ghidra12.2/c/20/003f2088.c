
void FUN_003f2088(long *param_1)

{
  undefined *puVar1;
  undefined1 uStack_11;
  
  FUN_0019a2a8(param_1,2,&uStack_11);
  *(undefined4 *)(param_1 + 0x15) = 0;
  puVar1 = PTR_DAT_04bd2640;
  param_1[0x16] = 0;
  param_1[0x17] = 0;
  *(undefined1 *)(param_1 + 0x18) = 1;
  *(undefined4 *)(param_1 + 0x1d) = 0;
  param_1[0x19] = 0;
  param_1[0x1a] = 0;
  *param_1 = (long)(puVar1 + 0x10);
  param_1[0x14] = (long)(puVar1 + 0xa8);
  param_1[0x1b] = 0;
  param_1[0x1c] = 0;
  param_1[0x1e] = 0;
  param_1[0x1f] = 0;
  FUN_001fb850(param_1 + 0x20,0);
  *(undefined1 *)(param_1 + 0x39) = 0;
  param_1[0x40] = (long)(param_1 + 0x3e);
  puVar1 = PTR_DAT_04bd2648;
  *(undefined4 *)((long)param_1 + 0x1cc) = 0;
  *(undefined1 *)(param_1 + 0x3c) = 0;
  param_1[0x38] = (long)(puVar1 + 0x10);
  *(undefined1 *)(param_1 + 0x3e) = 0;
  param_1[0x42] = 0;
  param_1[0x43] = 0;
  param_1[0x44] = 0;
  param_1[0x46] = 0;
  param_1[0x47] = 0;
  param_1[0x3d] = (long)&PTR_LAB_04a426b8;
  param_1[0x41] = 0x10;
  param_1[0x48] = 0;
  param_1[0x3b] = (long)&PTR_LAB_04851340;
  *(undefined1 *)(param_1 + 0x4a) = 0;
  param_1[0x49] = (long)&PTR_LAB_04851400;
  FUN_0019d7fc(param_1 + 0x4d,0,0);
  param_1[0x54] = 0;
  param_1[0x55] = 0;
  *(undefined1 *)(param_1 + 0x56) = 0;
  param_1[0x57] = 0;
  param_1[0x58] = 0;
  *(undefined2 *)(param_1 + 0x59) = 0;
  *(undefined1 *)((long)param_1 + 0x2ca) = 1;
  param_1[0x49] = (long)&PTR_LAB_048513b0;
  return;
}

