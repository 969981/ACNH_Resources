
void FUN_0018c3a4(long *param_1)

{
  undefined *puVar1;
  long *plVar2;
  
  plVar2 = param_1 + 4;
  *(undefined1 *)plVar2 = 0;
  param_1[2] = 0x100;
  param_1[3] = (long)plVar2;
  puVar1 = PTR_DAT_04bcbdf0;
  *(undefined2 *)(param_1 + 0x24) = 0x100;
  *param_1 = (long)(puVar1 + 0x10);
  param_1[1] = (long)plVar2;
  *(undefined1 *)((long)param_1 + 0x122) = 1;
  return;
}

