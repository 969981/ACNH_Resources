
undefined8 FUN_024bd7a0(long param_1,float *param_2,float *param_3,ulong param_4)

{
  ulong uVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  long lVar5;
  float *pfVar6;
  undefined8 uVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  undefined1 local_b8 [4];
  undefined8 local_b4;
  undefined1 local_ac;
  short local_aa;
  undefined2 local_a8;
  undefined1 local_a6;
  float local_a4;
  float local_a0;
  float local_9c;
  float local_98;
  float fStack_94;
  float local_90;
  undefined8 local_8c;
  float local_84;
  float fStack_80;
  undefined8 local_7c;
  undefined4 local_74;
  
  if ((param_4 & 1) == 0) {
    lVar5 = *(long *)(param_1 + 0x68);
  }
  else {
    uVar2 = FUN_006f0400(*param_2 - *param_3,param_2[2] - param_3[2]);
    lVar5 = FUN_0251e98c(1);
    pfVar6 = (float *)(**(code **)(*(long *)(lVar5 + 0x2a0) + 0xf0))(lVar5 + 0x2a0);
    uVar1 = (ulong)(uVar2 >> 0x18);
    fVar15 = *pfVar6 * 0.5;
    fVar10 = (float)(uVar2 & 0xffffff) * 5.9604645e-08;
    fVar12 = (float)(&DAT_04199798)[uVar1 * 4] + fVar10 * (float)(&DAT_0419979c)[uVar1 * 4];
    local_7c = 0x83f800000;
    local_74 = 0x10000;
    fVar10 = (float)(&DAT_041997a0)[uVar1 * 4] + fVar10 * (float)(&DAT_041997a4)[uVar1 * 4];
    fVar14 = fVar12 * 0.0;
    local_9c = param_3[2] + ((fVar10 * 0.0 * 0.0 - fVar12 * 0.0) - fVar15 * fVar10);
    local_a4 = *param_3 + ((fVar14 * 0.0 + fVar10 * 0.0) - fVar15 * (fVar12 + 0.0));
    local_a0 = param_3[1] + (((fVar14 * 0.0 + 1.0) * 0.0 + fVar10 * 0.0 * 0.0) - fVar15 * fVar14);
    fVar15 = fVar15 * 0.99;
    local_8c = CONCAT44(local_a0,local_a4);
    local_84 = local_9c;
    fStack_80 = fVar15;
    iVar3 = FUN_016ed290(&local_8c,0,0,0);
    if (iVar3 != 0) {
      return 1;
    }
    local_7c = CONCAT44(4,(undefined4)local_7c);
    iVar3 = FUN_016ed290(&local_8c,0,0,0);
    if (iVar3 != 0) {
      return 1;
    }
    local_b8[0] = 0;
    local_ac = 0;
    local_b4 = 0xc2c80000;
    if (DAT_05aed670 == 0) {
      puVar9 = &DAT_055c04a0;
    }
    else {
      puVar9 = &DAT_055c04a0;
      if (*(long *)(DAT_05aed670 + 0x330) != 0) {
        puVar9 = (undefined8 *)
                 (**(code **)(*DAT_05aed668 + 0x18))
                           (DAT_05aed668,*(undefined4 *)(DAT_05aed670 + 0x338));
        iVar3 = FUN_006bd550(*puVar9,0);
        puVar9 = (undefined8 *)PTR_DAT_04bc3a80;
        if (iVar3 != 0x758f7eaf) {
          puVar9 = &DAT_055c04a0;
        }
      }
    }
    if (DAT_055c1b60 != &DAT_055c1b58) {
      local_aa = 0;
      puVar8 = DAT_055c1b60;
      do {
        if (*(int *)(puVar8 + -1) == *(int *)(puVar9 + 7)) {
          if (local_aa != -1) goto LAB_024bdd08;
          break;
        }
        puVar8 = (undefined8 *)puVar8[1];
        local_aa = local_aa + 1;
      } while (puVar8 != &DAT_055c1b58);
    }
    local_aa = 0;
LAB_024bdd08:
    local_a8 = 0;
    local_a6 = 1;
    fVar12 = (float)FUN_016e8440(&local_a4,local_b8);
    fVar10 = -fVar15;
    if (0.0 <= fVar15) {
      fVar10 = fVar15;
    }
    if (1.1920929e-07 <= fVar10) {
      lVar5 = 0;
      do {
        fVar14 = *(float *)((long)&DAT_04176bac + lVar5);
        fVar10 = *(float *)((long)&DAT_04176bb4 + lVar5);
        fVar11 = SQRT(fVar14 * fVar14 + 0.0 + fVar10 * fVar10);
        if (0.0 < fVar11) {
          fVar11 = 1.0 / fVar11;
          fVar14 = fVar14 * fVar11;
          fVar13 = fVar11 * 0.0;
          fVar10 = fVar10 * fVar11;
        }
        else {
          fVar13 = 0.0;
        }
        local_98 = fVar15 * fVar14 + local_a4;
        fStack_94 = fVar15 * fVar13 + local_a0;
        local_90 = fVar15 * fVar10 + local_9c;
        fVar10 = (float)FUN_016e8440(&local_98,local_b8);
        lVar5 = lVar5 + 0xc;
        if (fVar10 <= fVar12) {
          fVar10 = fVar12;
        }
        fVar12 = fVar10;
      } while (lVar5 != 0x6c);
    }
    lVar5 = *(long *)(param_1 + 0x68);
    if (5.0 <= fVar12 - *(float *)(lVar5 + 0x27c)) {
      return 1;
    }
  }
  fVar10 = *(float *)(lVar5 + 0x278) - *param_2;
  fVar12 = *(float *)(lVar5 + 0x280) - param_2[2];
  if (9.5 <= SQRT(fVar12 * fVar12 + fVar10 * fVar10)) {
    return 0;
  }
  iVar3 = FUN_016f5c40(param_1);
  lVar5 = FUN_0251e98c(1);
  pfVar6 = (float *)(**(code **)(*(long *)(lVar5 + 0x2a0) + 0xf0))(lVar5 + 0x2a0);
  fVar12 = *param_3 - *param_2;
  fVar15 = *pfVar6;
  fVar14 = param_3[2] - param_2[2];
  fVar10 = SQRT(fVar12 * fVar12 + 0.0 + fVar14 * fVar14);
  if (0.0 < fVar10) {
    fVar10 = 1.0 / fVar10;
    fVar12 = fVar12 * fVar10;
    fVar14 = fVar14 * fVar10;
  }
  uVar2 = FUN_006f0400(fVar12,fVar14);
  local_74 = 0;
  uVar1 = (ulong)(uVar2 >> 0x18);
  fVar10 = (float)(uVar2 & 0xffffff) * 5.9604645e-08;
  local_7c = 0x773f800000;
  fVar13 = (float)(&DAT_04199798)[uVar1 * 4] + fVar10 * (float)(&DAT_0419979c)[uVar1 * 4];
  fVar11 = (float)(&DAT_041997a0)[uVar1 * 4] + fVar10 * (float)(&DAT_041997a4)[uVar1 * 4];
  fVar16 = fVar15 * 0.5;
  fVar10 = fVar15 * 0.75;
  if (iVar3 != 0x19) {
    fVar10 = fVar16;
  }
  fVar15 = fVar13 * 0.0;
  local_84 = param_2[2] + (fVar11 * 0.0 * 0.0 - fVar13 * 0.0) + fVar10 * fVar11;
  local_8c = CONCAT44(param_2[1] + (fVar15 * 0.0 + 1.0) * 0.0 + fVar11 * 0.0 * 0.0 + fVar10 * fVar15
                      ,*param_2 + fVar15 * 0.0 + fVar11 * 0.0 + fVar10 * (fVar13 + 0.0));
  fStack_80 = fVar16;
  iVar3 = FUN_016ed290(&local_8c,0,0,0);
  if (iVar3 == 0) {
    uVar2 = FUN_006f0400(fVar12,fVar14);
    uVar1 = (ulong)(uVar2 + 0x40000000 >> 0x18);
    fVar10 = (float)(uVar2 & 0xffffff) * 5.9604645e-08;
    fVar15 = (float)(&DAT_04199798)[uVar1 * 4] + fVar10 * (float)(&DAT_0419979c)[uVar1 * 4];
    fVar10 = (float)(&DAT_041997a0)[uVar1 * 4] + fVar10 * (float)(&DAT_041997a4)[uVar1 * 4];
    fVar11 = fVar15 * 0.0;
    local_8c = CONCAT44(param_3[1] +
                        (fVar11 * 0.0 + 1.0) * 0.0 + fVar10 * 0.0 * 0.0 + fVar16 * fVar11,
                        *param_3 + fVar11 * 0.0 + fVar10 * 0.0 + fVar16 * (fVar15 + 0.0));
    local_84 = param_3[2] + (fVar10 * 0.0 * 0.0 - fVar15 * 0.0) + fVar16 * fVar10;
    iVar3 = FUN_016ed290(&local_8c,0,0,0);
    uVar2 = FUN_006f0400(fVar12,fVar14);
    uVar1 = (ulong)(uVar2 + 0xc0000000 >> 0x18);
    fVar10 = (float)(uVar2 & 0xffffff) * 5.9604645e-08;
    fVar12 = (float)(&DAT_04199798)[uVar1 * 4] + fVar10 * (float)(&DAT_0419979c)[uVar1 * 4];
    fVar10 = (float)(&DAT_041997a0)[uVar1 * 4] + fVar10 * (float)(&DAT_041997a4)[uVar1 * 4];
    fVar14 = fVar12 * 0.0;
    local_8c = CONCAT44(param_3[1] +
                        (fVar14 * 0.0 + 1.0) * 0.0 + fVar10 * 0.0 * 0.0 + fVar16 * fVar14,
                        *param_3 + fVar14 * 0.0 + fVar10 * 0.0 + fVar16 * (fVar12 + 0.0));
    local_84 = param_3[2] + (fVar10 * 0.0 * 0.0 - fVar12 * 0.0) + fVar16 * fVar10;
    iVar4 = FUN_016ed290(&local_8c,0,0,0);
    if ((iVar3 == 0) || (iVar4 == 0)) {
      lVar5 = FUN_0251e98c(1);
      pfVar6 = (float *)(**(code **)(*(long *)(lVar5 + 0x2a0) + 0xf0))(lVar5 + 0x2a0);
      local_84 = param_3[2];
      local_7c = 0x20c3f800000;
      local_8c = *(undefined8 *)param_3;
      local_74 = 0;
      fStack_80 = *pfVar6 * 0.25;
      uVar7 = FUN_016ed290(&local_8c,0,0,0);
      if ((int)uVar7 == 0) {
        return uVar7;
      }
    }
  }
  return 1;
}

