
void FUN_00572e50(long *param_1)

{
  undefined *puVar1;
  
  param_1[1] = 0xffffffff;
  param_1[2] = 1;
  param_1[3] = 0;
  puVar1 = PTR_DAT_04bdde28;
  param_1[4] = 0x27fffffff;
  param_1[5] = 0;
  param_1[6] = -0x8000000000000000;
  param_1[7] = 0;
  param_1[10] = -0x8000000000000000;
  *param_1 = (long)(puVar1 + 0x10);
  param_1[8] = -0x8000000000000000;
  param_1[9] = 0;
  FUN_0043be70(param_1 + 3,"Gather All Vertices");
  *(undefined1 *)(param_1 + 0xc) = 0;
  return;
}

