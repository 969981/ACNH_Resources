
undefined8 FUN_0016215c(undefined8 param_1,undefined4 *param_2)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  undefined8 uVar4;
  
  uVar2 = param_2[4];
  uVar3 = param_2[1];
  uVar1 = uVar2;
  if (uVar3 <= uVar2) {
    uVar1 = uVar3;
  }
  param_2[1] = uVar3 - uVar1;
  *(ulong *)(param_2 + 2) = *(long *)(param_2 + 2) + (ulong)uVar1;
  param_2[4] = uVar2 - uVar1;
  if (uVar2 < uVar3) {
    *param_2 = 3;
    return 0;
  }
  uVar4 = FUN_001623cc();
  return uVar4;
}

