
void FUN_00167fd0(long param_1,long param_2,long param_3,long param_4)

{
  long *plVar1;
  
  plVar1 = *(long **)(param_1 + 0x10);
  *plVar1 = param_3;
  plVar1[1] = param_2;
  plVar1[2] = param_3 + param_2;
  plVar1[3] = (param_3 + param_4) - (param_3 + param_2);
  return;
}

