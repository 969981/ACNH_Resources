
undefined4 FUN_02cedb48(long param_1,int param_2)

{
  int iVar1;
  int *piVar2;
  undefined4 uVar3;
  
  iVar1 = *(int *)(param_1 + 0x753c4);
  if ((((iVar1 < 0) || (param_2 < iVar1)) ||
      (piVar2 = (int *)(**(code **)(*(long *)(param_1 + 0x3a9b0) + 0x18))(), param_2 - iVar1 < 0))
     || (*piVar2 <= param_2 - iVar1)) {
    uVar3 = 3;
    if (*(int *)(param_1 + 0x753c0) != param_2) {
      uVar3 = 6;
    }
  }
  else {
    uVar3 = 4;
  }
  return uVar3;
}

