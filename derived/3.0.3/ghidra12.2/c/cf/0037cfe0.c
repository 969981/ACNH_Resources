
void FUN_0037cfe0(long param_1,long param_2)

{
  long *plVar1;
  long *plVar2;
  long lVar3;
  
  plVar1 = (long *)(param_2 + 8);
  lVar3 = *plVar1;
  plVar2 = (long *)(param_1 + 0x20);
  *plVar1 = *plVar2;
  *(long **)(lVar3 + 8) = plVar2;
  *(long **)(*plVar2 + 8) = plVar1;
  *plVar2 = lVar3;
  *(long *)(param_2 + 0x18) = param_1;
  *(byte *)(param_2 + 0x58) = *(byte *)(param_2 + 0x58) | 0x10;
  return;
}

