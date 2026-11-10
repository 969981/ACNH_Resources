
void FUN_001dfe34(long *param_1)

{
  undefined *puVar1;
  
  FUN_0019d6cc();
  *param_1 = (long)(PTR_DAT_04bcbeb0 + 0x10);
  FUN_00186460(param_1 + 4,0x20000000,1);
  *(undefined4 *)(param_1 + 0xd) = 0;
  puVar1 = PTR_DAT_04bcbce8;
  *(undefined4 *)((long)param_1 + 0x15c) = 0;
  param_1[4] = (long)(puVar1 + 0x10);
  memset((void *)((long)param_1 + 0x6c),0,0xf0);
  FUN_00186460(param_1 + 0x2d,0x20000000,1);
  param_1[0x2d] = (long)(puVar1 + 0x10);
  *(undefined4 *)(param_1 + 0x36) = 0;
  *(undefined4 *)((long)param_1 + 0x2a4) = 0;
  memset((void *)((long)param_1 + 0x1b4),0,0xf0);
  FUN_001864f4(param_1 + 4,param_1 + 0x2d);
  memcpy(param_1 + 0xd,param_1 + 0x36,0xf8);
  param_1[2] = 0;
  FUN_0019d550(PTR_DAT_04bcc280,param_1);
  if (DAT_04be2208 < 2) {
    return;
  }
  (**(code **)(*param_1 + 0x10))(param_1);
  return;
}

