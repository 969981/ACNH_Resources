
undefined8 FUN_0044b1f0(long *param_1,undefined8 param_2,int param_3)

{
  int iVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  if (param_3 < (int)param_2) {
    return 0;
  }
  iVar1 = param_3 + (int)param_2;
  if (iVar1 < 0) {
    iVar1 = iVar1 + 1;
  }
  iVar1 = iVar1 >> 1;
  uVar2 = FUN_0044b1f0(param_1,param_2,iVar1 + -1);
  uVar3 = FUN_0044b1f0(param_1,iVar1 + 1,param_3);
  uVar4 = *(undefined8 *)(*param_1 + (long)iVar1 * 8);
  FUN_00446cd0(uVar4,uVar2,uVar3);
  return uVar4;
}

