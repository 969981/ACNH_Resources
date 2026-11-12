
uint FUN_008036b0(undefined8 param_1,undefined8 param_2,undefined4 param_3)

{
  uint uVar1;
  ulong uVar2;
  undefined1 auStack_18 [2];
  undefined1 auStack_16 [2];
  undefined1 auStack_14 [2];
  undefined1 auStack_12 [2];
  
  FUN_007ef010(auStack_12,param_1);
  uVar2 = FUN_00803770(auStack_12,param_2,param_3);
  if ((uVar2 & 1) == 0) {
    FUN_007ef010(auStack_14,param_1);
    uVar2 = FUN_008039d0(auStack_14,param_2,param_3);
    if ((uVar2 & 1) == 0) {
      FUN_007ef010(auStack_16,param_1);
      uVar2 = FUN_00803c34(auStack_16,param_2,param_3);
      if ((uVar2 & 1) == 0) {
        FUN_007ef010(auStack_18,param_1);
        uVar1 = FUN_00803d00(auStack_18,param_2,param_3);
        goto LAB_00803730;
      }
    }
  }
  uVar1 = 1;
LAB_00803730:
  return uVar1 & 1;
}

