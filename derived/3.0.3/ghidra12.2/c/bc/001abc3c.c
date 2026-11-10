
void FUN_001abc3c(long *param_1)

{
  undefined1 auStack_38 [24];
  undefined4 local_14;
  
  FUN_00197218();
  *param_1 = (long)(PTR_DAT_04bcc438 + 0x10);
  FUN_0018aa4c(param_1 + 4);
  *(undefined4 *)(param_1 + 10) = 0;
  *(undefined2 *)(param_1 + 0xd) = 0;
  *(undefined4 *)((long)param_1 + 100) = 0;
  *(undefined4 *)(param_1 + 9) = 0;
  param_1[0xb] = 0;
  param_1[7] = 0;
  param_1[8] = 0;
  FUN_001abcd4(param_1);
  local_14 = 0x10001;
  FUN_0018aa70(auStack_38,&local_14);
  FUN_0018ab44(param_1 + 4,auStack_38);
  if (3 < *(ulong *)(param_1[2] + 0x18)) {
    param_1[3] = 4;
  }
  return;
}

