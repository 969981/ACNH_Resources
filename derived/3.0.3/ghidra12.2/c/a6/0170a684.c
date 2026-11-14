
undefined8 FUN_0170a684(long param_1,undefined4 param_2)

{
  ulong uVar1;
  undefined8 uVar2;
  
  if ((*(long *)(param_1 + 0x1138) == 0) ||
     (uVar1 = FUN_03850368(*(long *)(param_1 + 0x1138),param_2), (uVar1 & 1) == 0)) {
    uVar2 = FUN_0073d768(param_1,param_2);
    return uVar2;
  }
  return 1;
}

