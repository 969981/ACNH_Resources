
undefined8 FUN_016ebe64(float *param_1,uint param_2)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  undefined *puVar5;
  ulong uVar6;
  long lVar7;
  float fVar8;
  float fVar9;
  undefined *local_60;
  undefined *puStack_58;
  int local_50;
  int iStack_4c;
  undefined *local_48;
  int local_40;
  int iStack_3c;
  int local_34;
  
  puVar5 = PTR_DAT_04bb27c8;
  if (param_2 == 0) {
    return 0;
  }
  if ((((*(long *)PTR_DAT_04bb27c8 != 0) &&
       (lVar7 = *(long *)(*(long *)PTR_DAT_04bb27c8 + 0xa8), lVar7 != 0)) &&
      (uVar1 = (int)((float)(int)*param_1 / 5.0) - (uint)(*param_1 < 0.0), -1 < (int)uVar1)) &&
     ((uVar2 = (int)((float)(int)param_1[2] / 5.0) - (uint)(param_1[2] < 0.0), -1 < (int)uVar2 &&
      (uVar1 < *(uint *)(lVar7 + 0x38) && uVar2 < *(uint *)(lVar7 + 0x3c))))) {
    uVar1 = uVar1 + *(uint *)(lVar7 + 0x38) * uVar2;
    if (uVar1 < *(uint *)(lVar7 + 0x68) && *(long *)(lVar7 + 0x70) != 0) {
      local_60 = (undefined *)CONCAT44(local_60._4_4_,0x13);
      if ((*(uint *)(*(long *)(lVar7 + 0x70) + (long)(int)uVar1 * 4) >> 0x13 & 1) != 0) {
        return 0;
      }
    }
  }
  local_34 = 0;
  FUN_016e026c(0,param_1,&local_34,0);
  if (((param_2 >> 2 & 1) != 0) && (local_34 == 0xc)) {
    return 1;
  }
  if (local_34 == 5) {
    fVar8 = *param_1;
    fVar9 = param_1[2];
    local_40 = (int)((float)(int)fVar8 / 5.0) - (uint)(fVar8 < 0.0);
    iStack_3c = (int)((float)(int)fVar9 / 5.0) - (uint)(fVar9 < 0.0);
    iVar3 = (int)((float)(int)(fVar8 + 0.0) / 5.0) - (uint)(fVar8 + 0.0 < 0.0);
    iVar4 = (int)((float)(int)(fVar9 + 0.0) / 5.0) - (uint)(fVar9 + 0.0 < 0.0);
    local_60 = PTR_DAT_04bbc1a0 + 0x10;
    puStack_58 = PTR_DAT_04bb2010 + 0x10;
    local_50 = local_40;
    if (iVar3 <= local_40) {
      local_50 = iVar3;
    }
    if (local_40 <= iVar3) {
      local_40 = iVar3;
    }
    iStack_4c = iStack_3c;
    if (iVar4 <= iStack_3c) {
      iStack_4c = iVar4;
    }
    if (iStack_3c <= iVar4) {
      iStack_3c = iVar4;
    }
    if (((*(long *)puVar5 == 0) || (lVar7 = *(long *)(*(long *)puVar5 + 0xa8), lVar7 == 0)) ||
       (local_48 = puStack_58, uVar6 = FUN_00971f80(lVar7,&local_60,0), (uVar6 & 1) == 0)) {
      param_2 = param_2 >> 1;
    }
    if ((param_2 & 1) != 0) {
      return 1;
    }
  }
  return 0;
}

