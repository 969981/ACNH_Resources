
void FUN_00444760(long *param_1,ulong *param_2)

{
  ulong uVar1;
  
  uVar1 = (long)*param_2 + 0x10;
  if (param_2[1] < uVar1) {
    FUN_004462a0(param_2,"Stack trace is:\n",0x10);
  }
  else {
    memcpy((void *)*param_2,"Stack trace is:\n",0x10);
    *param_2 = uVar1;
  }
  FUN_00439e50(param_1[2],*param_1,(ulong)(param_1[1] - *param_1) >> 3,&LAB_00445900,param_2);
  uVar1 = (long)*param_2 + 0x10;
  if (param_2[1] < uVar1) {
    FUN_004462a0(param_2,"Stack trace end\n",0x10);
    return;
  }
  memcpy((void *)*param_2,"Stack trace end\n",0x10);
  *param_2 = uVar1;
  return;
}

