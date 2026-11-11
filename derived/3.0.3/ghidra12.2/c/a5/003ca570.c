
void FUN_003ca570(long param_1,long param_2)

{
  long *plVar1;
  long lVar2;
  
  plVar1 = (long *)(param_2 + 8);
  lVar2 = *plVar1;
  *plVar1 = *(long *)(param_1 + 0x398);
  *(long *)(lVar2 + 8) = param_1 + 0x398;
  *(long **)(*(long *)(param_1 + 0x398) + 8) = plVar1;
  *(long *)(param_1 + 0x398) = lVar2;
  return;
}

