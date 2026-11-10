
void FUN_001fab5c(long *param_1)

{
  long *plVar1;
  
  plVar1 = param_1 + 0x12;
  *param_1 = (long)(PTR_DAT_04bcc9d0 + 0x10);
  FUN_002021dc(param_1 + 0x11,*plVar1);
  param_1[0x13] = 0;
  param_1[0x11] = (long)plVar1;
  *plVar1 = 0;
  FUN_002021dc(param_1 + 0x11,0);
  thunk_FUN_00199388(param_1);
  return;
}

