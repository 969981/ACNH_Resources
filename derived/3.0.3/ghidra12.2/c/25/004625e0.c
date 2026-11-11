
void FUN_004625e0(long *param_1,undefined2 param_2,undefined2 param_3,undefined4 param_4)

{
  *(undefined1 *)(param_1 + 1) = 0xd;
  *(undefined2 *)((long)param_1 + 10) = param_3;
  *(undefined2 *)((long)param_1 + 0xc) = param_2;
  param_1[2] = 0;
  *param_1 = (long)(PTR_DAT_04bd5620 + 0x10);
  *(undefined4 *)(param_1 + 3) = param_4;
  return;
}

