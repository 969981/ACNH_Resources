
void FUN_00416548(long *param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined1 uStack_25;
  undefined4 local_24;
  
  FUN_0019a2a8(param_1,2,&uStack_25);
  puVar1 = PTR_DAT_04bd2bb0;
  param_1[0x16] = 0;
  param_1[0x17] = 0;
  *param_1 = (long)(puVar1 + 0x10);
  param_1[0x14] = 0x1000000000;
  param_1[0x15] = 0;
  param_1[0x18] = (long)&PTR_LAB_04838fe8;
  *(undefined4 *)(param_1 + 0x19) = 1;
  *(undefined1 *)((long)param_1 + 0xcc) = 0;
  param_1[0x1a] = 0;
  *(undefined4 *)(param_1 + 0x1b) = 0;
  param_1[0x22] = 0;
  param_1[0x1e] = 0;
  param_1[0x1f] = 0;
  param_1[0x20] = 0;
  param_1[0x21] = 0;
  param_1[0x18] = (long)&PTR_FUN_04839418;
  param_1[0x1c] = (long)(param_1 + 0x1c);
  param_1[0x1d] = (long)(param_1 + 0x1c);
  local_24 = 0x80010001;
  FUN_0018aa70(param_1 + 0x23,&local_24);
  param_1[0x26] = 0;
  puVar1 = PTR_DAT_04bc0ec8;
  *(undefined4 *)(param_1 + 0x27) = 0;
  param_1[0x28] = 0;
  param_1[0x29] = 0;
  *(undefined4 *)(param_1 + 0x2a) = 0;
  *(undefined1 *)(param_1 + 0x2c) = 0;
  param_1[0x2b] = (long)(puVar1 + 0x10);
  param_1[0x2e] = (long)(param_1 + 0x2c);
  param_1[0x2f] = 0x10;
  FUN_001efe2c(param_1 + 0x30);
  puVar2 = PTR_DAT_04bd2a50;
  *(undefined1 *)(param_1 + 0x33) = 0;
  param_1[0x31] = (long)(puVar2 + 0x10);
  param_1[0x32] = (long)(puVar1 + 0x10);
  param_1[0x35] = (long)(param_1 + 0x33);
  param_1[0x36] = 0x10;
  FUN_0018a58c(param_1 + 0x32,&DAT_0407ebb1);
  param_1[0x37] = 0;
  return;
}

