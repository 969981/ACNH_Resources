
void FUN_0026c8cc(long *param_1)

{
  undefined *puVar1;
  
  FUN_00227770();
  puVar1 = PTR_DAT_04bcd9b0;
  *(undefined4 *)(param_1 + 0xd) = 5000;
  param_1[0xb] = 0;
  param_1[0xc] = 0;
  *(undefined4 *)(param_1 + 0x12) = 0;
  *param_1 = (long)(puVar1 + 0x10);
  memset((void *)((long)param_1 + 0x6c),0,0x20);
  *(undefined2 *)((long)param_1 + 0x8c) = 0;
  *(undefined1 *)((long)param_1 + 0x8e) = 0;
  return;
}

