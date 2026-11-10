
long FUN_0019d994(long param_1,long param_2)

{
  long lVar1;
  long lVar2;
  
  if (param_2 != param_1) {
    lVar2 = *(long *)(param_1 + 0x10) + *(long *)(param_1 + 0x30);
    *(long *)(param_1 + 0x18) = lVar2;
    *(long *)(param_1 + 0x20) = lVar2;
    lVar2 = *(long *)(param_2 + 0x18);
    if (lVar2 != 0) {
      lVar1 = 0;
      if (*(long *)(param_2 + 0x20) != lVar2) {
        lVar1 = (long)((int)*(long *)(param_2 + 0x20) - (int)lVar2);
      }
      FUN_0019da50(param_1,lVar2,lVar1);
    }
  }
  return param_1;
}

