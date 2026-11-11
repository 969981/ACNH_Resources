
void FUN_003cfee8(long param_1,long param_2)

{
  long *plVar1;
  long lVar2;
  
  if (param_2 + 0x200 != param_1 + 8) {
    plVar1 = *(long **)(param_2 + 0x208);
    lVar2 = *plVar1;
    *(long **)(*(long *)(param_2 + 0x200) + 8) = plVar1;
    *plVar1 = *(long *)(param_2 + 0x200);
    *(long *)(lVar2 + 8) = param_2 + 0x200;
    *(long *)(param_2 + 0x200) = lVar2;
  }
  FUN_003cfaec(param_2,param_1);
  return;
}

