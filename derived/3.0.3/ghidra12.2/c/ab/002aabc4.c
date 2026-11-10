
void FUN_002aabc4(long *param_1)

{
  undefined *puVar1;
  
  param_1[2] = 0;
  puVar1 = PTR_DAT_04bce0c8;
  param_1[3] = 0;
  *param_1 = (long)(puVar1 + 0x10);
  param_1[1] = 0;
  FUN_002236b0();
  *(undefined1 *)(param_1 + 5) = 0;
  *(undefined4 *)((long)param_1 + 0x24) = 0x18;
  return;
}

