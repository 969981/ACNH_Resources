
uint FUN_016eafec(float param_1,float *param_2,long param_3,ulong param_4,ulong param_5)

{
  int iVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  ulong uVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  undefined *local_58;
  undefined8 local_50;
  undefined8 local_48;
  undefined8 *local_40;
  int local_38;
  int iStack_34;
  
  if ((param_4 & 1) != 0) {
    local_40 = (undefined8 *)((ulong)local_40 & 0xffffffff00000000);
    local_48 = 0x103f800000;
    local_58 = *(undefined **)param_2;
    local_50 = (undefined8 *)CONCAT44(param_1,param_2[2]);
    iVar3 = FUN_016ed290(&local_58,0,0,0);
    if (iVar3 != 0) {
      uVar4 = 1;
      goto LAB_016eb180;
    }
  }
  if (((param_5 & 1) == 0) || (uVar5 = FUN_016ea0c8(param_1,param_2), (uVar5 & 1) == 0)) {
    param_1 = param_1 * 0.97;
    local_58 = PTR_DAT_04bbc1a0 + 0x10;
    fVar7 = *param_2 - param_1;
    fVar6 = param_1 + *param_2;
    fVar8 = param_2[2] - param_1;
    param_1 = param_1 + param_2[2];
    local_38 = (int)((float)(int)fVar7 / 5.0) - (uint)(fVar7 < 0.0);
    iStack_34 = (int)((float)(int)fVar8 / 5.0) - (uint)(fVar8 < 0.0);
    iVar1 = (int)((float)(int)fVar6 / 5.0) - (uint)(fVar6 < 0.0);
    local_50 = &DAT_048f9750;
    local_40 = &DAT_048f9750;
    iVar2 = (int)((float)(int)param_1 / 5.0) - (uint)(param_1 < 0.0);
    iVar3 = local_38;
    if (iVar1 <= local_38) {
      iVar3 = iVar1;
    }
    if (local_38 <= iVar1) {
      local_38 = iVar1;
    }
    iVar1 = iStack_34;
    if (iVar2 <= iStack_34) {
      iVar1 = iVar2;
    }
    if (iStack_34 <= iVar2) {
      iStack_34 = iVar2;
    }
    local_48 = CONCAT44(iVar1,iVar3);
    if (param_3 != 0) {
      *(int *)(param_3 + 0x10) = iVar3;
      *(int *)(param_3 + 0x14) = iVar1;
      *(int *)(param_3 + 0x20) = local_38;
      *(int *)(param_3 + 0x24) = iStack_34;
    }
    if (DAT_04cfae30 != 0) {
      uVar4 = 0;
      if (*(long *)(DAT_04cfae30 + 0xa8) != 0) {
        uVar4 = FUN_009721a0(*(long *)(DAT_04cfae30 + 0xa8),&local_58,0);
      }
      goto LAB_016eb180;
    }
  }
  uVar4 = 0;
LAB_016eb180:
  return uVar4 & 1;
}

