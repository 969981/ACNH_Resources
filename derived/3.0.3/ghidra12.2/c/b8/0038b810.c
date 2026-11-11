
void FUN_0038b810(long *param_1,long param_2)

{
  long *plVar1;
  long lVar2;
  long *plVar3;
  
  plVar3 = param_1;
  do {
    plVar3 = (long *)plVar3[1];
    if (plVar3 == param_1) {
      return;
    }
  } while (plVar3[0x12] != param_2);
  plVar1 = (long *)plVar3[1];
  lVar2 = *plVar1;
  *(long **)(*plVar3 + 8) = plVar1;
  *plVar1 = *plVar3;
  *(long **)(lVar2 + 8) = plVar3;
  *plVar3 = lVar2;
  FUN_0038b4f8(plVar3);
  FUN_00367b50(plVar3);
  return;
}

