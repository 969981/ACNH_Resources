
void FUN_002788f0(long *param_1)

{
  undefined *puVar1;
  
  FUN_00227770();
  puVar1 = PTR_DAT_04bcdb78;
  param_1[0xb] = 0;
  param_1[0xf] = 0;
  param_1[0xd] = 0;
  param_1[0xe] = 0;
  *(undefined4 *)(param_1 + 0x10) = 0;
  *(undefined4 *)(param_1 + 0xc) = 10000;
  *(undefined2 *)((long)param_1 + 0x84) = 0;
  *(undefined1 *)((long)param_1 + 0x86) = 0xfd;
  param_1[0x11] = 0;
  *(undefined1 *)(param_1 + 0x12) = 0xfd;
  *param_1 = (long)(puVar1 + 0x10);
  *(undefined2 *)((long)param_1 + 0xb1) = 0;
  *(undefined1 *)((long)param_1 + 0xb3) = 0xfd;
  param_1[0x17] = 0;
  *(undefined4 *)(param_1 + 0x18) = 0;
  param_1[0x1d] = 0;
  *(undefined4 *)(param_1 + 0x22) = 0;
  memset((void *)((long)param_1 + 0x91),0,0x20);
  *(bool *)((long)param_1 + 0xc4) = *(int *)(*(long *)PTR_DAT_04bcd350 + 0xa8) == 2;
  memset(param_1 + 0x1e,0,0x20);
  memset((void *)((long)param_1 + 0xc5),0xfd,0x20);
  return;
}

