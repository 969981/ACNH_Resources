
int FUN_00355230(undefined8 param_1,short *param_2,uint param_3,undefined4 param_4,
                undefined4 param_5,undefined4 param_6,uint param_7)

{
  uint uVar1;
  int iVar2;
  ulong uVar3;
  
  if (param_3 == 0) {
    iVar2 = 0;
  }
  else {
    iVar2 = 0;
    uVar3 = (ulong)param_3;
    do {
      if (*param_2 == 0) {
        return iVar2;
      }
      uVar1 = FUN_00354f90(param_1,*param_2,param_4,param_5,param_6,param_7 & 1);
      uVar3 = uVar3 - 1;
      iVar2 = iVar2 + (uVar1 & 1);
      param_2 = param_2 + 1;
    } while (uVar3 != 0);
  }
  return iVar2;
}

