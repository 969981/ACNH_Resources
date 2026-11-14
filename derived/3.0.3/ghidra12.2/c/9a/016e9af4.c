
uint FUN_016e9af4(float param_1,float *param_2,ulong param_3,long param_4)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  undefined *local_58;
  undefined8 *puStack_50;
  int local_48;
  int iStack_44;
  undefined8 *local_40;
  int local_38;
  int iStack_34;
  undefined8 local_2c;
  float local_24;
  float fStack_20;
  undefined8 local_1c;
  undefined4 local_14;
  
  fVar4 = param_1 * 0.97;
  local_58 = PTR_DAT_04bbc1a0 + 0x10;
  fVar6 = *param_2 - fVar4;
  fVar5 = fVar4 + *param_2;
  fVar7 = param_2[2] - fVar4;
  fVar4 = fVar4 + param_2[2];
  local_38 = (int)((float)(int)fVar6 / 5.0) - (uint)(fVar6 < 0.0);
  iStack_34 = (int)((float)(int)fVar7 / 5.0) - (uint)(fVar7 < 0.0);
  iVar2 = (int)((float)(int)fVar5 / 5.0) - (uint)(fVar5 < 0.0);
  puStack_50 = &DAT_048f9750;
  local_40 = &DAT_048f9750;
  iVar1 = (int)((float)(int)fVar4 / 5.0) - (uint)(fVar4 < 0.0);
  local_48 = local_38;
  if (iVar2 <= local_38) {
    local_48 = iVar2;
  }
  if (local_38 <= iVar2) {
    local_38 = iVar2;
  }
  iStack_44 = iStack_34;
  if (iVar1 <= iStack_34) {
    iStack_44 = iVar1;
  }
  if (iStack_34 <= iVar1) {
    iStack_34 = iVar1;
  }
  if (param_4 != 0) {
    *(int *)(param_4 + 0x10) = local_48;
    *(int *)(param_4 + 0x14) = iStack_44;
    *(int *)(param_4 + 0x20) = local_38;
    *(int *)(param_4 + 0x24) = iStack_34;
  }
  if ((param_3 & 1) == 0) {
    local_24 = param_2[2];
    local_14 = 0;
    local_1c = 0x103f800000;
    local_2c = *(undefined8 *)param_2;
    fStack_20 = param_1;
    iVar2 = FUN_016ed290(&local_2c,0,0,0);
    uVar3 = 0;
    if (iVar2 != 0) goto LAB_016e9c58;
  }
  if ((DAT_04cfae30 == 0) || (*(long *)(DAT_04cfae30 + 0xa8) == 0)) {
    uVar3 = 1;
  }
  else {
    uVar3 = FUN_009721a0(*(long *)(DAT_04cfae30 + 0xa8),&local_58,0);
    uVar3 = uVar3 ^ 1;
  }
LAB_016e9c58:
  return uVar3 & 1;
}

