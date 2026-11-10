
void FUN_0037d044(long param_1,long param_2)

{
  long *plVar1;
  long lVar2;
  
  if (param_2 + 8 != param_1 + 0x20) {
    plVar1 = *(long **)(param_2 + 0x10);
    lVar2 = *plVar1;
    *(long **)(*(long *)(param_2 + 8) + 8) = plVar1;
    *plVar1 = *(long *)(param_2 + 8);
    *(long *)(lVar2 + 8) = param_2 + 8;
    *(long *)(param_2 + 8) = lVar2;
  }
  *(undefined8 *)(param_2 + 0x18) = 0;
  return;
}

