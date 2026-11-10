
void FUN_00309f4c(long *param_1)

{
  undefined *puVar1;
  
  *(undefined4 *)(param_1 + 2) = 0;
  puVar1 = PTR_DAT_04bceae8;
  *(undefined2 *)((long)param_1 + 0x14) = 0;
  *(undefined1 *)((long)param_1 + 0x16) = 0;
  *(undefined2 *)((long)param_1 + 0x234) = 0;
  *(undefined4 *)(param_1 + 0x47) = 0;
  *(undefined1 *)((long)param_1 + 0x23c) = 0;
  param_1[0x48] = 0;
  param_1[0x49] = 0;
  *(undefined1 *)(param_1 + 0x4a) = 0;
  *param_1 = (long)(puVar1 + 0x10);
  param_1[1] = 0;
  *(undefined2 *)(param_1 + 0x4c) = 0;
  *(undefined2 *)((long)param_1 + 0x266) = 0;
  *(undefined4 *)((long)param_1 + 0x262) = 0;
  *(undefined4 *)(param_1 + 0x4d) = 0;
  param_1[0x4b] = (long)&PTR_LAB_048497a0;
  memset(param_1 + 6,0,0x200);
  *(undefined4 *)(param_1 + 0x46) = 0;
  *(undefined2 *)(param_1 + 0x4c) = 0;
  *(undefined4 *)((long)param_1 + 0x262) = 0;
  *(undefined2 *)((long)param_1 + 0x266) = 0;
  memset(param_1 + 3,0,0x18);
  return;
}

