
void FUN_003b6850(long param_1,long param_2)

{
  long lVar1;
  long *plVar2;
  undefined1 uStack_21;
  
  FUN_003b4ea8(&uStack_21);
  plVar2 = (long *)(param_2 + 0x40);
  lVar1 = *plVar2;
  *plVar2 = *(long *)(param_1 + 0x890);
  *(long *)(lVar1 + 8) = param_1 + 0x890;
  *(long **)(*(long *)(param_1 + 0x890) + 8) = plVar2;
  *(long *)(param_1 + 0x890) = lVar1;
  FUN_003b4ec0(&uStack_21);
  return;
}

