
void FUN_030c17b8(long param_1,int *param_2)

{
  long lVar1;
  
  if (*param_2 == 5) {
    lVar1 = *(long *)(param_2 + 6);
    if (lVar1 == *(long *)(param_1 + 0x218)) {
      FUN_030c2108(param_1,0);
      lVar1 = *(long *)(param_2 + 6);
    }
    if (lVar1 == *(long *)(param_1 + 0x220)) {
      FUN_030c2108(param_1,1);
      lVar1 = *(long *)(param_2 + 6);
    }
    if (lVar1 == *(long *)(param_1 + 0x228)) {
      FUN_030c2108(param_1,2);
      lVar1 = *(long *)(param_2 + 6);
    }
    if (lVar1 == *(long *)(param_1 + 0x230)) {
      FUN_030c2108(param_1,3);
      lVar1 = *(long *)(param_2 + 6);
    }
    if (lVar1 == *(long *)(param_1 + 0x238)) {
      FUN_030c2108(param_1,4);
      lVar1 = *(long *)(param_2 + 6);
    }
    if (lVar1 == *(long *)(param_1 + 0x240)) {
      FUN_030c2108(param_1,5);
      return;
    }
  }
  return;
}

