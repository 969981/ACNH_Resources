
void FUN_002a5690(long *param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  
  FUN_002ad9a0();
  puVar1 = PTR_DAT_04bcd020;
  *(undefined2 *)((long)param_1 + 0x6ae) = 0;
  puVar2 = PTR_DAT_04bce078;
  param_1[0xd7] = 0;
  param_1[0xd8] = 0;
  lVar3 = *(long *)puVar1;
  param_1[0xd9] = 0;
  param_1[0xda] = 0;
  param_1[0xdb] = 0;
  param_1[0xdc] = 0;
  param_1[0xdd] = 0;
  param_1[0xde] = 0;
  *param_1 = (long)(puVar2 + 0x10);
  param_1[0xd6] = lVar3;
  return;
}

