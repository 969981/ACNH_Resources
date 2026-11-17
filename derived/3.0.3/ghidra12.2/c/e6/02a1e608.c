
void FUN_02a1e608(long param_1,undefined8 *param_2,undefined8 *param_3)

{
  undefined1 (*pauVar1) [16];
  undefined8 uVar2;
  float *pfVar3;
  long lVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar9;
  undefined1 auVar8 [16];
  float fVar10;
  undefined1 auVar11 [16];
  float fVar12;
  float fVar13;
  float fVar14;
  undefined8 uVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  undefined **local_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined8 local_40;
  float local_38;
  
  lVar4 = *(long *)(param_1 + 0x50);
  if (lVar4 != 0) {
    pfVar3 = *(float **)(param_1 + 0x70);
    fVar20 = (float)*(undefined8 *)(param_1 + 0x120);
    fVar21 = (float)((ulong)*(undefined8 *)(param_1 + 0x120) >> 0x20);
    fVar22 = (float)*(undefined8 *)(param_1 + 0x128);
    fVar9 = (float)((ulong)*(undefined8 *)(param_1 + 0x128) >> 0x20);
    if (pfVar3 == (float *)0x0) {
      fVar7 = (float)*(undefined8 *)(param_1 + 0x138);
      fVar5 = (float)*(undefined8 *)(param_1 + 0x130);
      fVar6 = (float)((ulong)*(undefined8 *)(param_1 + 0x130) >> 0x20);
      fVar9 = (float)((ulong)*(undefined8 *)(param_1 + 0x138) >> 0x20) - fVar9;
    }
    else {
      fVar5 = *pfVar3;
      fVar6 = pfVar3[1];
      fVar7 = pfVar3[2];
      fVar9 = 0.0 - fVar9;
    }
    fVar7 = fVar7 - fVar22;
    fVar6 = fVar6 - fVar21;
    fVar5 = fVar5 - fVar20;
    if (param_3 != (undefined8 *)0x0) {
      fVar10 = (float)*(undefined8 *)(param_1 + 0x84);
      local_78 = *(undefined8 *)(PTR_DAT_04bb2f80 + 0x10);
      uStack_70 = *(undefined8 *)(PTR_DAT_04bb2f80 + 0x18);
      local_68 = *(undefined8 *)(PTR_DAT_04bb2f80 + 0x20);
      uStack_60 = *(undefined8 *)(PTR_DAT_04bb2f80 + 0x28);
      local_88 = *(undefined8 *)PTR_DAT_04bb2f80;
      uStack_80 = *(undefined8 *)(PTR_DAT_04bb2f80 + 8);
      local_58 = CONCAT44(fVar21 + fVar6 * fVar10,fVar20 + fVar5 * fVar10);
      pauVar1 = (undefined1 (*) [16])(param_1 + 0x130);
      auVar8 = *(undefined1 (*) [16])(param_1 + 0x140);
      local_38 = auVar8._8_4_;
      local_90 = &PTR_FUN_04b65548;
      uStack_50 = CONCAT44((int)*(undefined8 *)*pauVar1,fVar22 + fVar7 * fVar10);
      auVar11 = NEON_ext(*pauVar1,*pauVar1,8,1);
      local_48 = NEON_ext(*(undefined8 *)*pauVar1,auVar11._0_8_,4,1);
      local_40 = auVar8._0_8_;
      fVar12 = auVar8._4_4_;
      fVar10 = auVar8._0_4_;
      fVar13 = SQRT(fVar12 * fVar12 + fVar10 * fVar10 + local_38 * local_38);
      if (0.0 < fVar13) {
        fVar13 = 1.0 / fVar13;
        local_38 = local_38 * fVar13;
        local_40 = CONCAT44(fVar12 * fVar13,fVar10 * fVar13);
      }
      FUN_038e4634(&local_90,&local_88);
      param_3[1] = uStack_80;
      *param_3 = local_88;
      param_3[3] = uStack_70;
      param_3[2] = local_78;
      param_3[5] = uStack_60;
      param_3[4] = local_68;
    }
    if (param_2 != (undefined8 *)0x0) {
      fVar5 = fVar5 * fVar5;
      fVar6 = fVar6 * fVar6;
      fVar13 = *(float *)(lVar4 + 0x10);
      fVar10 = *(float *)(lVar4 + 8);
      fVar12 = *(float *)(lVar4 + 0xc);
      fVar14 = *(float *)(lVar4 + 0x18);
      fVar16 = *(float *)(lVar4 + 0x1c);
      fVar17 = *(float *)(lVar4 + 0x20);
      fVar18 = *(float *)(lVar4 + 0x28);
      fVar19 = *(float *)(lVar4 + 0x2c);
      auVar8._4_4_ = fVar6;
      auVar8._0_4_ = fVar5;
      auVar8._8_4_ = fVar7 * fVar7;
      auVar8._12_4_ = fVar9 * fVar9;
      auVar11._4_4_ = fVar6;
      auVar11._0_4_ = fVar5;
      auVar11._8_4_ = fVar7 * fVar7;
      auVar11._12_4_ = fVar9 * fVar9;
      auVar8 = NEON_ext(auVar8,auVar11,8,1);
      fVar7 = *(float *)(lVar4 + 0x30);
      fVar9 = *(float *)(param_1 + 0x68);
      uVar15 = *(undefined8 *)(lVar4 + 8);
      param_2[1] = *(undefined8 *)(lVar4 + 0x10);
      *param_2 = uVar15;
      uVar15 = *(undefined8 *)(lVar4 + 0x18);
      param_2[3] = *(undefined8 *)(lVar4 + 0x20);
      param_2[2] = uVar15;
      uVar15 = *(undefined8 *)(lVar4 + 0x28);
      uVar2 = *(undefined8 *)(lVar4 + 0x30);
      *(float *)((long)param_2 + 0x1c) =
           -(fVar16 * fVar21 + fVar14 * fVar20 + fVar17 * fVar22 + 0.0);
      param_2[5] = uVar2;
      param_2[4] = uVar15;
      *(float *)((long)param_2 + 0xc) = -(fVar12 * fVar21 + fVar10 * fVar20 + fVar13 * fVar22 + 0.0)
      ;
      *(float *)((long)param_2 + 0x2c) =
           -((fVar19 * fVar21 + fVar18 * fVar20 + fVar7 * fVar22) -
            fVar9 * SQRT(auVar8._0_4_ + fVar5 + auVar8._4_4_ + fVar6));
    }
  }
  return;
}

