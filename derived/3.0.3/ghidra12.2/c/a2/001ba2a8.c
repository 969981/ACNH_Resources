
void FUN_001ba2a8(long *param_1)

{
  undefined *puVar1;
  
  puVar1 = PTR_DAT_04bcc588;
  param_1[3] = 0;
  *param_1 = (long)(puVar1 + 0x10);
  FUN_001ba150(param_1 + 7);
  puVar1 = PTR_DAT_04bcc328;
  param_1[0x15] = 0x14;
  *(undefined4 *)(param_1 + 0x17) = 10000;
  *(undefined1 *)((long)param_1 + 0x24) = 0;
  *(undefined4 *)(param_1 + 5) = 0;
  *(undefined8 *)((long)param_1 + 0xdc) = 0xfa000002ee;
  *(undefined4 *)((long)param_1 + 0xf5) = 0x10001;
  param_1[6] = 0;
  *(undefined4 *)(param_1 + 4) = 0xffffffff;
  *(undefined1 *)((long)param_1 + 0xb4) = 1;
  param_1[0x20] = 0;
  param_1[0x1d] = 2;
  *(undefined4 *)((long)param_1 + 0xfc) = 2;
  *(undefined1 *)(param_1 + 0x21) = 0;
  *(undefined4 *)(param_1 + 0x28) = 0xffffffff;
  param_1[0x22] = (long)(puVar1 + 0x10);
  param_1[0x23] = 0;
  *(undefined4 *)(param_1 + 0x16) = 1000;
  param_1[0x1a] = 0x3f8000003fa00000;
  *(undefined4 *)(param_1 + 0x1b) = 0x32;
  *(undefined4 *)(param_1 + 0x1e) = 2000;
  param_1[0x18] = 0x20;
  param_1[0x19] = 0x80;
  return;
}

