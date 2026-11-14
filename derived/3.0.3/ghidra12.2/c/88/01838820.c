
void FUN_01838820(long param_1,long param_2)

{
  byte bVar1;
  undefined *local_30;
  int local_28;
  int iStack_24;
  
  FUN_01813f50();
  if (*(char *)(param_1 + 0x432) == '\0') {
    FUN_01813c40(param_1);
  }
  local_30 = PTR_DAT_04bb2010 + 0x10;
  local_28 = (int)((float)(int)*(float *)(param_2 + 8) / 5.0) -
             (uint)(*(float *)(param_2 + 8) < 0.0);
  iStack_24 = (int)((float)(int)*(float *)(param_2 + 0x10) / 5.0) -
              (uint)(*(float *)(param_2 + 0x10) < 0.0);
  bVar1 = FUN_01a1c950(&local_30,param_1 + 0x4c4);
  *(byte *)(param_1 + 0x4c0) = bVar1 & 1;
  return;
}

