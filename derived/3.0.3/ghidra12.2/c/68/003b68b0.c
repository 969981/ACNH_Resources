
void FUN_003b68b0(long param_1,long *param_2)

{
  long *plVar1;
  long lVar2;
  long *plVar3;
  undefined1 uStack_21;
  
  FUN_003b4ea8(&uStack_21);
  plVar3 = *(long **)(param_1 + 0x898);
  do {
    plVar1 = plVar3;
    if (plVar1 == (long *)(param_1 + 0x890)) {
      FUN_003b4ec0(&uStack_21);
      return;
    }
    plVar3 = (long *)plVar1[1];
  } while (plVar1 + -8 != param_2);
  lVar2 = *plVar3;
  *(long **)(*plVar1 + 8) = plVar3;
  *plVar3 = *plVar1;
  *(long **)(lVar2 + 8) = plVar1;
  *plVar1 = lVar2;
  FUN_003b4ec0(&uStack_21);
  return;
}

