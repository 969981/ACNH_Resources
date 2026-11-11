
void FUN_003ce660(long param_1,long param_2)

{
  long *plVar1;
  long *plVar2;
  long lVar3;
  
  plVar2 = (long *)(param_2 + 0x30);
  lVar3 = *plVar2;
  *(long *)(param_2 + 8) = param_1;
  plVar1 = (long *)(param_1 + 0x20);
  *plVar2 = *plVar1;
  *(long **)(lVar3 + 8) = plVar1;
  *(long **)(*plVar1 + 8) = plVar2;
  *plVar1 = lVar3;
  *(int *)(param_1 + 0x48) = *(int *)(param_1 + 0x48) + 1;
  return;
}

