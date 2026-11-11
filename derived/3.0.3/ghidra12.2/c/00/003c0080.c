
void FUN_003c0080(long *param_1,long param_2)

{
  long *plVar1;
  long lVar2;
  
  plVar1 = (long *)(param_2 + 8);
  lVar2 = *plVar1;
  *plVar1 = *param_1;
  *(long **)(lVar2 + 8) = param_1;
  *(long **)(*param_1 + 8) = plVar1;
  *param_1 = lVar2;
  return;
}

