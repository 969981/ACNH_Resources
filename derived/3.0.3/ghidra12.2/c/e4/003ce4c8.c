
void FUN_003ce4c8(long param_1,long param_2)

{
  long *plVar1;
  long lVar2;
  
  if (param_2 + 0x1f0 != param_1 + 0x10) {
    plVar1 = *(long **)(param_2 + 0x1f8);
    lVar2 = *plVar1;
    *(long **)(*(long *)(param_2 + 0x1f0) + 8) = plVar1;
    *plVar1 = *(long *)(param_2 + 0x1f0);
    *(long *)(lVar2 + 8) = param_2 + 0x1f0;
    *(long *)(param_2 + 0x1f0) = lVar2;
  }
  if (param_2 + 0x1e0 != param_1) {
    plVar1 = *(long **)(param_2 + 0x1e8);
    lVar2 = *plVar1;
    *(long **)(*(long *)(param_2 + 0x1e0) + 8) = plVar1;
    *plVar1 = *(long *)(param_2 + 0x1e0);
    *(long *)(lVar2 + 8) = param_2 + 0x1e0;
    *(long *)(param_2 + 0x1e0) = lVar2;
  }
  FUN_003cfad4(param_2);
  return;
}

