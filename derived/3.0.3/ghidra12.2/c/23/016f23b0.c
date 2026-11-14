
bool FUN_016f23b0(float *param_1,undefined8 *param_2,ulong param_3)

{
  float *pfVar1;
  uint uVar2;
  undefined **ppuVar3;
  uint uVar4;
  int iVar5;
  short *psVar6;
  long lVar7;
  bool bVar8;
  undefined8 *puVar9;
  undefined4 uVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  undefined *local_118;
  undefined4 local_110;
  undefined4 uStack_10c;
  undefined8 local_108;
  undefined8 local_100;
  undefined8 local_f8;
  undefined4 local_f0;
  undefined8 local_e8;
  undefined8 local_e0;
  undefined8 local_d8;
  undefined8 uStack_d0;
  undefined *local_c8;
  undefined8 local_c0;
  undefined *local_b8;
  int local_b0;
  int iStack_ac;
  undefined *local_a8;
  undefined4 local_a0;
  undefined4 local_9c;
  byte local_98;
  
  local_e8 = *(undefined8 *)param_1;
  local_e0 = *(undefined8 *)(param_1 + 2);
  local_d8 = *(undefined8 *)(param_1 + 4);
  uStack_d0 = *(undefined8 *)(param_1 + 6);
  if ((param_3 & 1) != 0) {
    fVar15 = *param_1;
    fVar14 = param_1[2];
    fVar11 = (float)(int)((int)((float)(int)fVar15 / 5.0) - (uint)(fVar15 < 0.0));
    fVar13 = fVar11 * 5.0;
    fVar16 = (float)(int)((int)((float)(int)fVar14 / 5.0) - (uint)(fVar14 < 0.0));
    fVar12 = fVar16 * 5.0;
    if (fVar11 * 5.0 + 2.5 < fVar15) {
      fVar13 = fVar13 + 5.0;
    }
    if (fVar16 * 5.0 + 2.5 < fVar14) {
      fVar12 = fVar12 + 5.0;
    }
    local_e8 = CONCAT44(param_1[1],fVar13);
    local_e0._4_4_ = (float)((ulong)local_e0 >> 0x20);
    local_e0 = CONCAT44(local_e0._4_4_,fVar12);
    uVar10 = FUN_016e026c(0,&local_e8,0,0);
    local_e8 = CONCAT44(uVar10,(float)local_e8);
    fVar14 = param_1[3];
    local_d8._0_4_ = param_1[4];
    fVar13 = param_1[5];
    fVar11 = (float)(int)((int)((float)(int)fVar14 / 5.0) - (uint)(fVar14 < 0.0));
    fVar12 = fVar11 * 5.0;
    fVar15 = (float)(int)((int)((float)(int)fVar13 / 5.0) - (uint)(fVar13 < 0.0));
    local_d8._4_4_ = fVar15 * 5.0;
    if (fVar11 * 5.0 + 2.5 < fVar14) {
      fVar12 = fVar12 + 5.0;
    }
    if (fVar15 * 5.0 + 2.5 < fVar13) {
      local_d8._4_4_ = local_d8._4_4_ + 5.0;
    }
    local_e0 = CONCAT44(fVar12,(float)local_e0);
    uVar10 = FUN_016e026c(0,(long)&local_e0 + 4,0,0);
    local_d8 = CONCAT44(local_d8._4_4_,uVar10);
  }
  fVar11 = (float)local_e8 - local_e0._4_4_;
  fVar12 = (float)local_e0 - local_d8._4_4_;
  uVar4 = FUN_006f0400(local_e0._4_4_ - (float)local_e8,local_d8._4_4_ - (float)local_e0);
  local_f0 = 0x10001;
  local_f8 = 0x43f800000;
  local_108 = 0;
  local_100 = 0x4098000000000000;
  local_a0 = 0;
  local_118 = PTR_DAT_04bb2010 + 0x10;
  local_a8 = PTR_DAT_04bbfe68 + 0x10;
  local_c0 = 0;
  local_b0 = (int)((float)(int)local_e0._4_4_ / 5.0) - (uint)(local_e0._4_4_ < 0.0);
  iStack_ac = (int)((float)(int)local_d8._4_4_ / 5.0) - (uint)(local_d8._4_4_ < 0.0);
  lVar7 = *(long *)PTR_DAT_04bb2720;
  local_c8 = local_118;
  local_b8 = local_118;
  if (lVar7 == 0) {
    puVar9 = &DAT_055c04a0;
  }
  else {
    puVar9 = &DAT_055c04a0;
    if (*(long *)(lVar7 + 0x330) != 0) {
      puVar9 = (undefined8 *)
               (**(code **)(**(long **)PTR_DAT_04bb2640 + 0x18))
                         (*(long **)PTR_DAT_04bb2640,*(undefined4 *)(lVar7 + 0x338));
      iVar5 = FUN_006bd550(*puVar9,0);
      puVar9 = (undefined8 *)PTR_DAT_04bc3a80;
      if (iVar5 != 0x758f7eaf) {
        puVar9 = &DAT_055c04a0;
      }
    }
  }
  local_9c = *(undefined4 *)(puVar9 + 7);
  fVar11 = SQRT(fVar12 * fVar12 + fVar11 * fVar11);
  local_98 = FUN_017baf44();
  local_98 = local_98 & 1;
  psVar6 = (short *)FUN_01a5190c(&local_a8,0,&local_b8,&local_c8);
  bVar8 = false;
  local_110 = (undefined4)local_c0;
  uStack_10c = local_c0._4_4_;
  pfVar1 = (float *)(PTR_DAT_04bb2d00 + (ulong)(uVar4 >> 0x18) * 0x10);
  ppuVar3 = (undefined **)0x0;
  if (*psVar6 != -2) {
    ppuVar3 = &local_118;
  }
  fVar12 = (float)(uVar4 & 0xffffff) * 5.9604645e-08;
  fVar13 = *pfVar1 + fVar12 * pfVar1[1];
  fVar12 = pfVar1[2] + fVar12 * pfVar1[3];
  fVar14 = fVar13 * 0.0;
  uVar4 = 1;
  while( true ) {
    local_b8 = (undefined *)CONCAT71(local_b8._1_7_,1);
    local_a0 = 0;
    local_a8 = (undefined *)0x0;
    fVar16 = (float)uVar4 * 5.0 * 0.1;
    fVar15 = fVar11;
    if (fVar16 <= fVar11) {
      fVar15 = fVar16;
    }
    local_108 = CONCAT44(local_e8._4_4_ +
                         (fVar14 * 0.0 + 1.0) * 0.0 + fVar12 * 0.0 * 0.0 + fVar15 * fVar14,
                         (float)local_e8 + fVar14 * 0.0 + fVar12 * 0.0 + fVar15 * (fVar13 + 0.0));
    local_100 = CONCAT44(local_100._4_4_,
                         (float)local_e0 + (fVar12 * 0.0 * 0.0 - fVar13 * 0.0) + fVar15 * fVar12);
    iVar5 = FUN_016ed290(&local_108,&local_a8,&local_b8,ppuVar3);
    if ((iVar5 != 0) && ((char)local_b8 == '\0')) break;
    uVar2 = uVar4 + 1;
    bVar8 = 0x12 < uVar4;
    uVar4 = uVar2;
    if (uVar2 == 0x14) {
      return bVar8;
    }
  }
  if (param_2 == (undefined8 *)0x0) {
    return bVar8;
  }
  *(undefined4 *)(param_2 + 1) = local_a0;
  *param_2 = local_a8;
  return bVar8;
}

