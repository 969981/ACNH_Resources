
void FUN_0024e3d8(long *param_1,long param_2)

{
  undefined *puVar1;
  
  FUN_00227770();
  param_1[0xb] = 0;
  puVar1 = PTR_DAT_04bcd620;
  *(undefined2 *)((long)param_1 + 100) = 0;
  param_1[0xd] = 0;
  param_1[0xe] = param_2;
  *(undefined4 *)(param_1 + 0xc) = 10;
  *(undefined1 *)(param_1 + 0xf) = 0;
  *param_1 = (long)(puVar1 + 0x10);
  FUN_0022be80(param_1 + 0x10);
  return;
}

