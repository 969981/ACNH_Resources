
void FUN_00362d10(long param_1,long param_2)

{
  long *plVar1;
  long *plVar2;
  
  plVar1 = (long *)FUN_00367b30(0x18);
  if (plVar1 != (long *)0x0) {
    *plVar1 = (long)plVar1;
    plVar1[1] = (long)plVar1;
  }
  plVar1[2] = param_2;
  plVar2 = (long *)(param_1 + 8);
  *plVar1 = *plVar2;
  plVar1[1] = (long)plVar2;
  *(long **)(*plVar2 + 8) = plVar1;
  *plVar2 = (long)plVar1;
  return;
}

