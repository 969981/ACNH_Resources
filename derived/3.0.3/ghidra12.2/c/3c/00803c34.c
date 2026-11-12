
undefined8 FUN_00803c34(short *param_1)

{
  undefined4 uVar1;
  long lVar2;
  undefined1 auStack_16d0 [5792];
  short local_18 [2];
  short local_14;
  undefined1 auStack_12 [2];
  
  if (DAT_053e0208 == 0) {
    return 0;
  }
  lVar2 = *(long *)(DAT_053e0208 + 0x175a0);
  if (lVar2 != 0) {
    uVar1 = FUN_0211b8d0(lVar2);
    FUN_0211ac18(&local_14,lVar2,uVar1);
    if (local_14 != DAT_04cb6038) {
      FUN_007ef010(auStack_12,&local_14);
      FUN_007e4920(auStack_16d0,auStack_12);
      FUN_007e8e30(local_18,auStack_16d0);
      if (local_18[0] == *param_1) {
        return 1;
      }
    }
  }
  return 0;
}

