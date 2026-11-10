
undefined8 FUN_0029db78(long param_1)

{
  ulong uVar1;
  long lVar2;
  undefined8 uVar3;
  
  if (((*(long *)(param_1 + 0x268) != 0) && (uVar1 = FUN_002212e4(), (uVar1 & 1) != 0)) &&
     (uVar1 = FUN_0022131c(*(undefined8 *)(param_1 + 0x268)), (uVar1 & 1) != 0)) {
    return 0;
  }
  lVar2 = FUN_0022033c();
  if (lVar2 == 0) {
    return 1;
  }
  FUN_0022033c();
  uVar3 = FUN_002204b4();
  return uVar3;
}

