
undefined8 FUN_003e5f44(long *param_1,long *param_2,undefined8 param_3,undefined8 param_4)

{
  int iVar1;
  undefined8 uVar2;
  
  iVar1 = (**(code **)(*param_1 + 0x20))(param_1,param_3,0);
  if (iVar1 == -1) {
    return 2;
  }
  uVar2 = (**(code **)(*param_1 + 0x10))(param_1,param_2,iVar1,0,0,param_4);
  if (((int)uVar2 == 0) && (uVar2 = 0, *param_2 != 0)) {
    FUN_003ceb10();
    return 0;
  }
  return uVar2;
}

