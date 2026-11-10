
void FUN_002403bc(long *param_1,undefined4 param_2,undefined2 param_3,undefined1 param_4,
                 undefined1 param_5,void *param_6,uint param_7)

{
  undefined *puVar1;
  
  puVar1 = PTR_DAT_04bcd2f0;
  *(undefined4 *)(param_1 + 1) = 0;
  *param_1 = (long)(puVar1 + 0x10);
  memset((void *)((long)param_1 + 0xc),0,0xb);
  *(undefined4 *)(param_1 + 3) = param_2;
  puVar1 = PTR_DAT_04bcd310;
  if (799 < param_7) {
    param_7 = 800;
  }
  *(undefined2 *)((long)param_1 + 0x1c) = param_3;
  *(undefined1 *)((long)param_1 + 0x1e) = param_4;
  *(undefined1 *)((long)param_1 + 0x1f) = param_5;
  *(undefined4 *)(param_1 + 1) = 6;
  *(uint *)(param_1 + 0x68) = param_7;
  *param_1 = (long)(puVar1 + 0x10);
  memcpy(param_1 + 4,param_6,(ulong)param_7);
  return;
}

