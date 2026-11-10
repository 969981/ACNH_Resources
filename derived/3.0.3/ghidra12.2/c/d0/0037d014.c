
void FUN_0037d014(undefined8 param_1,long param_2,long param_3)

{
  long *plVar1;
  long *plVar2;
  long lVar3;
  
  plVar2 = (long *)(param_3 + 8);
  lVar3 = *plVar2;
  plVar1 = (long *)(param_2 + 8);
  *plVar2 = *plVar1;
  *(long **)(lVar3 + 8) = plVar1;
  *(long **)(*plVar1 + 8) = plVar2;
  *plVar1 = lVar3;
  *(undefined8 *)(param_3 + 0x18) = param_1;
  *(byte *)(param_3 + 0x58) = *(byte *)(param_3 + 0x58) | 0x10;
  return;
}

