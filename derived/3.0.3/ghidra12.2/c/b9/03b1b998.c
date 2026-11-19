
void FUN_03b1b998(long param_1,uint param_2)

{
  long *plVar1;
  long lVar2;
  
  FUN_0035d98c();
  if ((param_2 & 1) == 0) {
    *(undefined4 *)(param_1 + 0x50) = 0;
  }
  else if (*(long *)(param_1 + 0x48) == param_1 + 0x40) {
    lVar2 = *(long *)(param_1 + 0x40);
    plVar1 = (long *)(*(long *)(*(long *)(param_1 + 0x58) + 0x88) + 0x70);
    *(long *)(param_1 + 0x40) = *plVar1;
    *(long **)(lVar2 + 8) = plVar1;
    *(long *)(*plVar1 + 8) = param_1 + 0x40;
    *plVar1 = lVar2;
  }
  return;
}

