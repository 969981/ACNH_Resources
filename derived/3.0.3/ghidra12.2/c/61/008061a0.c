
uint FUN_008061a0(undefined8 param_1,undefined8 param_2)

{
  uint uVar1;
  ulong uVar2;
  undefined1 auStack_26 [2];
  undefined1 auStack_24 [2];
  undefined1 auStack_22 [2];
  
  FUN_007ef010(auStack_22,param_1);
  uVar2 = FUN_00806224(auStack_22,param_2);
  if ((uVar2 & 1) == 0) {
    FUN_007ef010(auStack_24,param_1);
    uVar2 = FUN_00806340(auStack_24,param_2);
    if ((uVar2 & 1) == 0) {
      FUN_007ef010(auStack_26,param_1);
      uVar1 = FUN_00806470(auStack_26,param_2);
      goto LAB_00806210;
    }
  }
  uVar1 = 1;
LAB_00806210:
  return uVar1 & 1;
}

