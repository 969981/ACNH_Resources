
uint FUN_0184d984(undefined4 param_1,undefined8 param_2,undefined8 param_3,long param_4,
                 undefined8 param_5,uint param_6)

{
  uint uVar1;
  ulong uVar2;
  float fVar3;
  undefined **local_40;
  int local_38;
  int iStack_34;
  
  if (((param_6 & 1) == 0) || (uVar2 = FUN_01a1cde0(param_1,param_3,param_4), (uVar2 & 1) == 0)) {
    local_40 = &PTR_FUN_048f9730;
    fVar3 = (float)*(int *)(param_4 + 8) * 0.5;
    uVar1 = 0;
    if (fVar3 != (float)(int)fVar3) {
      uVar1 = (uint)(fVar3 < 0.0);
    }
    local_38 = (int)fVar3 - uVar1;
    fVar3 = (float)*(int *)(param_4 + 0xc) * 0.5;
    uVar1 = 0;
    if (fVar3 != (float)(int)fVar3) {
      uVar1 = (uint)(fVar3 < 0.0);
    }
    iStack_34 = (int)fVar3 - uVar1;
    uVar2 = FUN_02b672b0(&local_40);
    if (((uVar2 & 1) == 0) && (uVar2 = FUN_01a19b90(param_1,param_4), (uVar2 & 1) == 0)) {
      uVar1 = FUN_01a19d20(param_1,param_3,param_4,param_5);
    }
    else {
      uVar1 = 0;
    }
  }
  else {
    uVar1 = 1;
  }
  return uVar1 & 1;
}

