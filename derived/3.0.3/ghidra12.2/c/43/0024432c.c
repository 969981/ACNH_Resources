
void FUN_0024432c(long *param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  
  FUN_0024f400();
  puVar2 = PTR_DAT_04bcd508;
  *(undefined4 *)(param_1 + 0xc) = 0;
  puVar1 = PTR_DAT_04bcd4c8;
  *(undefined1 *)((long)param_1 + 0xa4) = 0;
  *(undefined4 *)(param_1 + 0x45) = 0;
  *(undefined2 *)((long)param_1 + 0x22c) = 0;
  *param_1 = (long)(puVar2 + 0x10);
  param_1[10] = (long)(puVar1 + 0x10);
  param_1[0xb] = 0;
  memset((void *)((long)param_1 + 100),0,0x40);
  memset((void *)((long)param_1 + 0xa5),0,0x180);
  *(undefined2 *)(param_1 + 0x46) = 0;
  *(undefined1 *)((long)param_1 + 0x232) = 0;
  return;
}

