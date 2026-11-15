
undefined8 FUN_0216af38(float *param_1,long param_2)

{
  float *pfVar1;
  uint *puVar2;
  uint uVar3;
  bool bVar4;
  bool bVar5;
  bool bVar6;
  bool bVar7;
  undefined4 uVar8;
  ulong uVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float local_670 [2];
  float local_668;
  float local_70 [2];
  float local_68;
  undefined1 auStack_14 [4];
  
  uVar3 = *(uint *)(param_2 + 4);
  fVar11 = *param_1;
  pfVar1 = (float *)(PTR_DAT_04bb2d00 + ((ulong)(uVar3 >> 0x14) & 0xff0));
  fVar13 = *pfVar1;
  fVar14 = pfVar1[1];
  fVar15 = pfVar1[2];
  fVar16 = pfVar1[3];
  fVar12 = param_1[2];
  if (DAT_04c487d4 != -1) {
    local_670[0] = 3.22299e-44;
    puVar2 = (uint *)(PTR_DAT_04bc39f8 + (ulong)(uint)(int)DAT_04c487d4 * 8);
    if (0xff < (uint)(int)DAT_04c487d4) {
      puVar2 = (uint *)PTR_DAT_04bc39f8;
    }
    if ((*puVar2 >> 0x17 & 1) != 0) {
      uVar9 = FUN_0291e130(local_670,auStack_14,2);
      if ((uVar9 & 1) == 0) {
        return 0;
      }
      local_70[0] = local_670[0];
      local_68 = local_668;
      goto LAB_0216b038;
    }
  }
  uVar8 = FUN_006bd550("E_Fireworks_EventObj_0",0);
  uVar9 = FUN_0118b0a0(local_70,uVar8);
  if ((uVar9 & 1) == 0) {
    uVar8 = FUN_006bd550("E_Fireworks_EventObj_1",0);
    FUN_0118b0a0(local_70,uVar8);
  }
LAB_0216b038:
  fVar10 = (float)(uVar3 & 0xffffff) * 5.9604645e-08;
  fVar13 = fVar13 + fVar10 * fVar14;
  fVar15 = fVar15 + fVar10 * fVar16;
  fVar14 = local_70[0] + -6.25;
  local_70[0] = local_70[0] + 6.25;
  fVar12 = fVar12 + (fVar15 * 0.0 * 0.0 - fVar13 * 0.0) + fVar15 * 10.0;
  fVar11 = fVar11 + fVar13 * 0.0 * 0.0 + fVar15 * 0.0 + (fVar13 + 0.0) * 10.0;
  fVar15 = local_70[0];
  if (local_70[0] <= fVar14) {
    fVar15 = fVar14;
    fVar14 = local_70[0];
  }
  fVar13 = local_68 + -10.0;
  fVar10 = local_68 + 10.0;
  fVar16 = fVar10;
  if (fVar10 <= fVar13) {
    fVar16 = fVar13;
    fVar13 = fVar10;
  }
  bVar4 = false;
  bVar6 = true;
  if (fVar14 <= fVar11) {
    bVar4 = false;
    bVar6 = true;
    if (!NAN(fVar11) && !NAN(fVar15)) {
      bVar4 = fVar11 == fVar15;
      bVar6 = fVar15 <= fVar11;
    }
  }
  bVar5 = false;
  bVar7 = true;
  if (!bVar6 || bVar4) {
    bVar5 = false;
    bVar7 = true;
    if (!NAN(fVar13) && !NAN(fVar12)) {
      bVar5 = fVar13 == fVar12;
      bVar7 = fVar12 <= fVar13;
    }
  }
  bVar4 = false;
  bVar6 = true;
  if (!bVar7 || bVar5) {
    bVar4 = false;
    bVar6 = true;
    if (!NAN(fVar12) && !NAN(fVar16)) {
      bVar4 = fVar12 == fVar16;
      bVar6 = fVar16 <= fVar12;
    }
  }
  if (!bVar6 || bVar4) {
    fVar11 = local_68 + 5.0;
    local_68 = local_68 + 20.0;
    fVar13 = fVar11;
    if (local_68 <= fVar11) {
      fVar13 = local_68;
      local_68 = fVar11;
    }
    if ((((fVar14 <= *param_1) && (*param_1 <= fVar15)) && (fVar13 <= param_1[2])) &&
       (param_1[2] <= local_68)) {
      return 1;
    }
  }
  return 0;
}

