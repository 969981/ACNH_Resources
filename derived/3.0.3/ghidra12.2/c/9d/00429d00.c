
undefined8 FUN_00429d00(undefined8 *param_1,long param_2,undefined4 param_3,int param_4)

{
  int iVar1;
  undefined8 uVar2;
  int iVar3;
  
  iVar3 = *(int *)(param_1 + 1) - (int)*param_1;
  if (0 < param_4) {
    iVar1 = iVar3;
    if (param_4 <= iVar3) {
      iVar1 = param_4 + -1;
    }
    FUN_0043a2b0(param_2,param_3,*param_1,iVar1);
    *(undefined1 *)(param_2 + iVar1) = 0;
  }
  uVar2 = 0;
  if (param_4 <= iVar3) {
    uVar2 = 0x80040200;
  }
  return uVar2;
}

