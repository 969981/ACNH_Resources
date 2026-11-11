
void FUN_003cb704(long param_1,long param_2)

{
  long *plVar1;
  long *plVar2;
  long lVar3;
  
  plVar1 = (long *)(param_2 + 0x288);
  lVar3 = *(long *)(param_2 + 0x288);
  if (plVar1 != (long *)(param_1 + 8)) {
    plVar2 = *(long **)(param_2 + 0x290);
    lVar3 = *plVar2;
    *(long **)(*(long *)(param_2 + 0x288) + 8) = plVar2;
    *plVar2 = *(long *)(param_2 + 0x288);
    *(long **)(lVar3 + 8) = plVar1;
    *(long *)(param_2 + 0x288) = lVar3;
  }
  plVar2 = (long *)(param_1 + 0x18);
  *plVar1 = *plVar2;
  *(long **)(lVar3 + 8) = plVar2;
  *(long **)(*plVar2 + 8) = plVar1;
  *plVar2 = lVar3;
  return;
}

