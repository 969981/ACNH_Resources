
undefined4 FUN_02ce2a5c(long param_1,uint param_2)

{
  int iVar1;
  int *piVar2;
  undefined4 uVar3;
  
  iVar1 = *(int *)(param_1 + 0x68a54);
  if (((iVar1 < 0) || ((int)param_2 < iVar1)) || (*(int *)(param_1 + 0x148) + iVar1 <= (int)param_2)
     ) {
    iVar1 = *(int *)(param_1 + 0x68a5c);
    if (((iVar1 < 0) || ((int)param_2 < iVar1)) ||
       (piVar2 = (int *)(**(code **)(*(long *)(param_1 + 0xf008) + 0x18))(),
       *piVar2 + iVar1 <= (int)param_2)) {
      iVar1 = *(int *)(param_1 + 0x68a58);
      if (((iVar1 < 0) || ((int)param_2 < iVar1)) ||
         (piVar2 = (int *)(**(code **)(*(long *)(param_1 + 0x158) + 0x18))(param_1 + 0x158),
         *piVar2 + iVar1 <= (int)param_2)) {
        uVar3 = 3;
        if (*(uint *)(param_1 + 0x68a50) != param_2 || 0x7fffffff < *(uint *)(param_1 + 0x68a50)) {
          uVar3 = 6;
        }
      }
      else {
        uVar3 = 1;
      }
    }
    else {
      uVar3 = 0;
    }
  }
  else {
    uVar3 = 2;
  }
  return uVar3;
}

