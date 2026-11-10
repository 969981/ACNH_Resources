
undefined8 FUN_00143c88(long *param_1,long *param_2)

{
  int iVar1;
  undefined8 uVar2;
  
  if ((((((*param_1 == *param_2) && (param_1[1] == param_2[1])) &&
        (((*(byte *)(param_2 + 0x11) ^ *(byte *)(param_1 + 0x11)) & 7) == 0)) &&
       ((iVar1 = FUN_00144b18(param_1[2],param_2[2]), iVar1 != 0 &&
        (iVar1 = FUN_00144b18(param_1[3],param_2[3]), iVar1 != 0)))) &&
      ((iVar1 = FUN_00144b18(param_1[4],param_2[4]), iVar1 != 0 &&
       ((iVar1 = FUN_00144b18(param_1[5],param_2[5]), iVar1 != 0 &&
        (iVar1 = FUN_00144b18(param_1[6],param_2[6]), iVar1 != 0)))))) &&
     ((iVar1 = FUN_00144b18(param_1[7],param_2[7]), iVar1 != 0 &&
      (iVar1 = FUN_00144b18(param_1[8],param_2[8]), iVar1 != 0)))) {
    uVar2 = 1;
  }
  else {
    uVar2 = 0;
  }
  return uVar2;
}

