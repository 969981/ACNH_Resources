
uint FUN_016eaebc(float param_1,float *param_2,long param_3)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  undefined *local_38;
  undefined8 *puStack_30;
  int local_28;
  int iStack_24;
  undefined8 *local_20;
  int local_18;
  int iStack_14;
  
  param_1 = param_1 * 0.97;
  local_38 = PTR_DAT_04bbc1a0 + 0x10;
  fVar5 = *param_2 - param_1;
  fVar4 = param_1 + *param_2;
  fVar6 = param_2[2] - param_1;
  param_1 = param_1 + param_2[2];
  local_18 = (int)((float)(int)fVar5 / 5.0) - (uint)(fVar5 < 0.0);
  iStack_14 = (int)((float)(int)fVar6 / 5.0) - (uint)(fVar6 < 0.0);
  iVar1 = (int)((float)(int)fVar4 / 5.0) - (uint)(fVar4 < 0.0);
  puStack_30 = &DAT_048f9750;
  local_20 = &DAT_048f9750;
  iVar2 = (int)((float)(int)param_1 / 5.0) - (uint)(param_1 < 0.0);
  local_28 = local_18;
  if (iVar1 <= local_18) {
    local_28 = iVar1;
  }
  if (local_18 <= iVar1) {
    local_18 = iVar1;
  }
  iStack_24 = iStack_14;
  if (iVar2 <= iStack_14) {
    iStack_24 = iVar2;
  }
  if (iStack_14 <= iVar2) {
    iStack_14 = iVar2;
  }
  if (param_3 != 0) {
    *(int *)(param_3 + 0x10) = local_28;
    *(int *)(param_3 + 0x14) = iStack_24;
    *(int *)(param_3 + 0x20) = local_18;
    *(int *)(param_3 + 0x24) = iStack_14;
  }
  if (DAT_04cfae30 == 0) {
    uVar3 = 0;
  }
  else {
    uVar3 = 0;
    if (*(long *)(DAT_04cfae30 + 0xa8) != 0) {
      uVar3 = FUN_00971f80(*(long *)(DAT_04cfae30 + 0xa8),&local_38,0);
    }
  }
  return uVar3 & 1;
}

