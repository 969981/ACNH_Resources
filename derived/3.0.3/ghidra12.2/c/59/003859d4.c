
void FUN_003859d4(long param_1,long param_2)

{
  long *plVar1;
  long *plVar2;
  long lVar3;
  
  plVar2 = (long *)(param_2 + 0x48);
  lVar3 = *plVar2;
  plVar1 = (long *)(param_1 + 0x30);
  *plVar2 = *plVar1;
  *(long **)(lVar3 + 8) = plVar1;
  *(long **)(*plVar1 + 8) = plVar2;
  *plVar1 = lVar3;
  return;
}

