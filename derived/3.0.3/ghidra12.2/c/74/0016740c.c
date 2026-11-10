
undefined8 FUN_0016740c(undefined8 param_1,ulong param_2,undefined8 param_3,long param_4)

{
  int iVar1;
  undefined8 uVar2;
  
  iVar1 = FUN_0016838c(param_3,param_4);
  if (iVar1 == 0) {
    uVar2 = 0xfffffffffffffe0b;
  }
  else {
    if ((ulong)(param_4 * 6) <= param_2) {
      uVar2 = FUN_00167b94(param_1,param_3,param_4);
      return uVar2;
    }
    uVar2 = 0xfffffffffffffdf3;
  }
  return uVar2;
}

