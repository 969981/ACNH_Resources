
ulong FUN_00439fd0(undefined8 param_1,void *param_2,int param_3,int param_4)

{
  uint uVar1;
  ulong auStack_440 [128];
  
  if (0x7f < param_3) {
    param_3 = 0x80;
  }
  uVar1 = nn::diag::GetBacktrace(auStack_440,param_3);
  if (0 < (int)uVar1) {
    memcpy(param_2,auStack_440 + param_4,(ulong)uVar1 << 3);
  }
  return (ulong)uVar1;
}

