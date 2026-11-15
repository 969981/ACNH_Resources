
void FUN_01e26938(long *param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  
  puVar3 = PTR_DAT_04bc1558;
  puVar2 = PTR_DAT_04bbc1a0;
  puVar1 = PTR_DAT_04bb2010;
  param_1[2] = 0;
  param_1[3] = 0;
  *(undefined1 *)((long)param_1 + 0x54) = 0;
  *param_1 = (long)(puVar3 + 0x10);
  param_1[1] = 0;
  param_1[4] = (long)(puVar2 + 0x10);
  param_1[5] = (long)(puVar1 + 0x10);
  param_1[6] = 0;
  param_1[7] = (long)(puVar1 + 0x10);
  param_1[8] = 0;
  param_1[9] = -0x100000000;
  *(undefined4 *)(param_1 + 10) = 0xffffffff;
  param_1[0xb] = 0xfffe;
  FUN_0277d4ac();
  *(undefined1 *)(param_1 + 0xd) = 0;
  *(undefined4 *)((long)param_1 + 0x6c) = 0;
  param_1[0xc] = 0x3bf800000;
  return;
}

