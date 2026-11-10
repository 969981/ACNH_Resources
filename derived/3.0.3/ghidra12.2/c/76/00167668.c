
void FUN_00167668(long *param_1,undefined1 param_2,long param_3,long param_4)

{
  *(undefined1 *)((long)param_1 + 0xd) = param_2;
  *(undefined4 *)(param_1 + 1) = 0;
  *(undefined1 *)((long)param_1 + 0xc) = 4;
  *(undefined1 *)((long)param_1 + 0xe) = 0;
  *param_1 = param_4 * 6;
  param_1[2] = param_4;
  param_1[3] = param_3;
  return;
}

