
bool FUN_016eb1a0(float param_1,float *param_2,ulong param_3)

{
  float *pfVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  bool bVar6;
  long lVar7;
  byte bVar8;
  int iVar9;
  byte bVar10;
  uint uVar11;
  float fVar12;
  float fVar13;
  undefined *local_90;
  byte local_88;
  undefined *local_80;
  int local_78;
  int iStack_74;
  
  puVar5 = PTR_DAT_04bb5ba0;
  puVar3 = PTR_DAT_04bb27c8;
  puVar2 = PTR_DAT_04bb2010;
  local_88 = 0;
  local_80 = PTR_DAT_04bb2010 + 0x10;
  local_90 = PTR_DAT_04bb5ba0 + 0x10;
  local_78 = (int)((float)(int)*param_2 / 5.0) - (uint)(*param_2 < 0.0);
  iStack_74 = (int)((float)(int)param_2[2] / 5.0) - (uint)(param_2[2] < 0.0);
  bVar8 = 0;
  if (*(long *)PTR_DAT_04bb27c8 != 0) {
    lVar7 = *(long *)(*(long *)PTR_DAT_04bb27c8 + 0xa8);
    if (lVar7 == 0) {
      bVar8 = 0;
    }
    else {
      FUN_00974bc8(lVar7,&local_80,&local_90);
      bVar8 = local_88;
    }
  }
  puVar4 = PTR_DAT_04bb2d00;
  bVar10 = 0x20;
  if ((param_3 & 1) == 0) {
    bVar10 = 0x40;
  }
  if ((bVar8 & bVar10) != 0) {
    fVar12 = -param_1;
    if (0.0 <= param_1) {
      fVar12 = param_1;
    }
    if (fVar12 < 1.1920929e-07) {
      return true;
    }
  }
  uVar11 = 0;
  bVar6 = true;
  lVar7 = *(long *)puVar3;
  iVar9 = DAT_05240230;
  do {
    local_88 = 0;
    pfVar1 = (float *)(puVar4 + (ulong)(iVar9 * uVar11 >> 0x18) * 0x10);
    fVar12 = (float)(iVar9 * uVar11 & 0xffffff) * 5.9604645e-08;
    fVar13 = *param_2 + (*pfVar1 + fVar12 * pfVar1[1]) * param_1;
    fVar12 = (pfVar1[2] + fVar12 * pfVar1[3]) * param_1 + param_2[2];
    local_78 = (int)((float)(int)fVar13 / 5.0) - (uint)(fVar13 < 0.0);
    iStack_74 = (int)((float)(int)fVar12 / 5.0) - (uint)(fVar12 < 0.0);
    if ((lVar7 != 0) && (*(long *)(lVar7 + 0xa8) != 0)) {
      local_90 = puVar5 + 0x10;
      local_80 = puVar2 + 0x10;
      FUN_00974bc8(*(long *)(lVar7 + 0xa8),&local_80,&local_90);
      lVar7 = *(long *)puVar3;
      iVar9 = DAT_05240230;
      if ((local_88 & bVar10) != 0) {
        return bVar6;
      }
    }
    bVar6 = uVar11 < 7;
    uVar11 = uVar11 + 1;
  } while (uVar11 != 8);
  return bVar6;
}

