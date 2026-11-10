
void FUN_0015b68c(long param_1)

{
  long lVar1;
  
  if (param_1 != 0) {
    FUN_0015e0d0(param_1 + 0x220);
    FUN_0015e0d0(param_1 + 0x230);
    lVar1 = *(long *)(param_1 + 0x290);
    while (lVar1 != 0) {
      FUN_00143300(*(undefined8 *)(*(long *)(param_1 + 0x288) + lVar1 * 8 + -8));
      lVar1 = *(long *)(param_1 + 0x290) + -1;
      *(long *)(param_1 + 0x290) = lVar1;
    }
    FUN_00143300(*(undefined8 *)(param_1 + 0x288));
    *(undefined8 *)(param_1 + 0x288) = 0;
  }
  return;
}

