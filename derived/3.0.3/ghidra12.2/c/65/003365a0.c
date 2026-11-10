
void FUN_003365a0(undefined8 param_1,long param_2,float *param_3)

{
  undefined8 *puVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  float *pfVar4;
  float *pfVar5;
  float *pfVar6;
  char cVar7;
  undefined2 uVar8;
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  undefined2 uVar21;
  undefined8 uVar22;
  long lVar23;
  long lVar24;
  ulong uVar25;
  undefined4 *puVar26;
  undefined8 uVar27;
  int *piVar28;
  long lVar29;
  undefined8 *puVar30;
  undefined8 *puVar31;
  float fVar32;
  float fVar33;
  float fVar34;
  float extraout_s0;
  float extraout_s0_00;
  float extraout_s0_01;
  undefined8 uVar35;
  float fVar36;
  float fVar37;
  float fVar38;
  undefined1 uVar39;
  undefined1 uVar40;
  undefined1 uVar41;
  undefined1 uVar42;
  undefined1 uVar43;
  undefined1 uVar44;
  undefined1 uVar45;
  undefined1 uVar46;
  undefined1 uVar47;
  undefined1 uVar48;
  undefined1 uVar49;
  undefined1 uVar50;
  undefined1 uVar51;
  undefined1 uVar52;
  undefined1 uVar53;
  undefined1 uVar54;
  float fVar55;
  int iVar56;
  undefined4 uVar57;
  float fVar65;
  undefined1 auVar58 [12];
  undefined1 auVar59 [16];
  undefined1 auVar60 [16];
  undefined1 auVar61 [16];
  undefined1 auVar62 [16];
  undefined1 auVar63 [16];
  int iVar66;
  int iVar67;
  int iVar68;
  undefined1 auVar64 [16];
  undefined4 uVar69;
  float fVar79;
  undefined1 auVar70 [12];
  float fVar80;
  float fVar81;
  undefined1 auVar71 [16];
  undefined1 auVar72 [16];
  undefined1 auVar73 [16];
  undefined1 auVar74 [16];
  undefined1 auVar75 [16];
  undefined1 auVar76 [16];
  undefined1 auVar77 [16];
  undefined1 auVar78 [16];
  undefined8 uVar82;
  undefined1 auVar84 [12];
  undefined8 uVar83;
  undefined1 auVar85 [16];
  undefined1 auVar86 [16];
  float fVar87;
  float fVar88;
  float fVar89;
  float fVar90;
  undefined1 auStack_90 [8];
  undefined4 local_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined8 local_50;
  undefined8 uStack_48;
  
  lVar29 = *(long *)(*(long *)(param_2 + 0x10) + 0x4a8);
  piVar28 = *(int **)(*(long *)(*(long *)(param_2 + 0x10) + 0x240) + 0x348);
  param_3[0x1f] = *(float *)(param_2 + 0x18);
  fVar33 = *(float *)(param_2 + 0x1c);
  param_3[0x1e] = 0.0;
  param_3[0x20] = fVar33;
  lVar23 = *(long *)(param_2 + 0x10);
  puVar30 = (undefined8 *)(*(long *)(lVar23 + 0x1f0) + (long)*(int *)(param_2 + 0x20) * 0x10);
  uStack_48 = puVar30[1];
  local_50 = *puVar30;
  FUN_0032f094(*(undefined4 *)(param_2 + 0x1c),(char)*(undefined4 *)(param_2 + 0x18),
               *(undefined8 *)(lVar23 + 0x98),param_3,*(undefined8 *)(lVar23 + 0x240),&local_50);
  FUN_0032f8d8(*(undefined4 *)(param_2 + 0x1c),(char)*(undefined4 *)(param_2 + 0x18),
               *(undefined8 *)(*(long *)(param_2 + 0x10) + 0x98),param_3 + 4,
               *(undefined8 *)(*(long *)(param_2 + 0x10) + 0x240),&local_50);
  puVar30 = *(undefined8 **)(param_3 + 0x16);
  uVar35 = *(undefined8 *)param_3;
  fVar33 = *(float *)(*(long *)(*(long *)(*(long *)(param_2 + 0x10) + 0x240) + 0x18) + 0x360);
  *param_3 = fVar33 * (float)uVar35;
  param_3[1] = fVar33 * (float)((ulong)uVar35 >> 0x20);
  param_3[2] = fVar33 * (float)*(undefined8 *)(param_3 + 2);
  param_3[6] = fVar33 * param_3[6];
  fVar34 = param_3[0x22];
  param_3[4] = fVar33 * param_3[4];
  param_3[5] = fVar33 * param_3[5];
  param_3[0x22] = *(float *)(param_2 + 0x18);
  if ((0.0 < (float)(int)param_3[0x1f] - (float)(int)fVar34) || (param_3[0x1f] == 0.0)) {
    *(undefined8 *)(param_3 + 0x16) = puVar30[7];
    if (piVar28[1] == 0) {
      lVar23 = *(long *)(param_2 + 0x10);
      lVar24 = (long)*(int *)(param_2 + 0x20) * 0x10;
      puVar31 = (undefined8 *)(*(long *)(lVar23 + 0x1f0) + lVar24);
      uStack_48 = puVar31[1];
      local_50 = *puVar31;
      puVar31 = (undefined8 *)(*(long *)(lVar23 + 0x1e8) + lVar24);
      uStack_58 = puVar31[1];
      local_60 = *puVar31;
      FUN_0032e7f8(*(undefined4 *)(param_2 + 0x1c),(char)*(undefined4 *)(param_2 + 0x18),
                   *(undefined8 *)(lVar23 + 0x98),&local_70,*(undefined8 *)(lVar23 + 0x240),
                   &local_60,&local_50);
      uVar22 = FUN_0031e264(*(undefined8 *)(param_2 + 0x10));
      lVar23 = *(long *)(param_2 + 0x10);
      uVar83 = *(undefined8 *)(*(long *)(lVar23 + 0x78) + 0x158);
      uVar35 = *(undefined8 *)(*(long *)(lVar23 + 0x78) + 0x150);
      lVar24 = (long)*(int *)(param_2 + 0x20) * 0x10;
      local_70 = CONCAT44((float)((ulong)local_70 >> 0x20) * extraout_s0_01 *
                          (float)((ulong)uVar35 >> 0x20),
                          (float)local_70 * extraout_s0_01 * (float)uVar35);
      uStack_68 = CONCAT44((float)((ulong)uStack_68 >> 0x20) * extraout_s0_01 *
                           (float)((ulong)uVar83 >> 0x20),
                           (float)uStack_68 * extraout_s0_01 * (float)uVar83);
      puVar31 = (undefined8 *)(*(long *)(lVar23 + 0x1d0) + lVar24);
      pfVar4 = (float *)(*(long *)(lVar23 + 0x210) + lVar24);
      pfVar5 = (float *)(*(long *)(lVar23 + 0x218) + lVar24);
      pfVar6 = (float *)(*(long *)(lVar23 + 0x220) + lVar24);
      cVar7 = *(char *)(*(long *)(lVar23 + 0xa0) + 0x793);
      uVar35 = *puVar31;
      fVar33 = *(float *)(puVar31 + 1);
      fVar34 = (float)uVar35;
      fVar36 = (float)((ulong)uVar35 >> 0x20);
      if (cVar7 == '\x02') {
        auVar61 = *(undefined1 (*) [16])(lVar23 + 0x400);
        auVar77 = NEON_ext(auVar61,auVar61,8,1);
        uVar35 = CONCAT44(*pfVar5,*pfVar4);
        uVar25 = (ulong)(uint)*pfVar6;
        fVar38 = pfVar4[2];
        fVar79 = pfVar5[2];
        fVar37 = pfVar4[1];
        fVar32 = pfVar5[1];
        auVar61._8_4_ = (float)auVar77._0_4_;
        auVar61._12_4_ = 0.0;
        fVar80 = pfVar6[2];
        fVar81 = 0.0;
        fVar55 = pfVar6[1];
        fVar65 = 0.0;
LAB_003369cc:
        fVar87 = (float)uVar35 * fVar34 + fVar37 * fVar36 + fVar38 * fVar33;
        fVar88 = (float)((ulong)uVar35 >> 0x20) * fVar34 + fVar32 * fVar36 + fVar79 * fVar33;
        fVar89 = (float)uVar25 * fVar34 + fVar55 * fVar36 + fVar80 * fVar33;
        fVar90 = (float)(uVar25 >> 0x20) * fVar34 + fVar65 * fVar36 + fVar81 * fVar33;
      }
      else {
        if (cVar7 == '\0') {
          uVar25 = *(ulong *)(lVar23 + 0x3d8);
          uVar35 = *(undefined8 *)(lVar23 + 0x3d0);
          fVar37 = *(float *)(lVar23 + 0x3e0);
          fVar32 = *(float *)(lVar23 + 0x3e4);
          fVar55 = *(float *)(lVar23 + 1000);
          fVar65 = *(float *)(lVar23 + 0x3ec);
          fVar38 = *(float *)(lVar23 + 0x3f0);
          fVar79 = *(float *)(lVar23 + 0x3f4);
          fVar80 = *(float *)(lVar23 + 0x3f8);
          fVar81 = *(float *)(lVar23 + 0x3fc);
          auVar61 = *(undefined1 (*) [16])(lVar23 + 0x400);
          goto LAB_003369cc;
        }
        uVar35 = CONCAT44(*pfVar5,*pfVar4);
        uVar25 = (ulong)(uint)*pfVar6;
        fVar38 = pfVar4[2];
        fVar87 = pfVar4[3];
        fVar37 = pfVar4[1];
        fVar79 = pfVar5[2];
        fVar88 = pfVar5[3];
        fVar32 = pfVar5[1];
        fVar89 = pfVar6[3];
        fVar90 = 0.0;
        fVar80 = pfVar6[2];
        fVar81 = 0.0;
        fVar55 = pfVar6[1];
        fVar65 = 0.0;
        auVar61._0_4_ = *pfVar4 * fVar34 + fVar37 * fVar36 + fVar38 * fVar33;
        auVar61._4_4_ = *pfVar5 * fVar34 + fVar32 * fVar36 + fVar79 * fVar33;
        auVar61._8_4_ = *pfVar6 * fVar34 + fVar55 * fVar36 + fVar80 * fVar33;
        auVar61._12_4_ = fVar34 * 0.0 + fVar36 * 0.0 + fVar33 * 0.0;
      }
      fVar87 = auVar61._0_4_ + fVar87;
      uVar39 = SUB41(fVar87,0);
      uVar40 = (undefined1)((uint)fVar87 >> 8);
      uVar41 = (undefined1)((uint)fVar87 >> 0x10);
      uVar42 = (undefined1)((uint)fVar87 >> 0x18);
      fVar88 = auVar61._4_4_ + fVar88;
      uVar43 = SUB41(fVar88,0);
      uVar44 = (undefined1)((uint)fVar88 >> 8);
      uVar45 = (undefined1)((uint)fVar88 >> 0x10);
      uVar46 = (undefined1)((uint)fVar88 >> 0x18);
      fVar89 = auVar61._8_4_ + fVar89;
      uVar47 = SUB41(fVar89,0);
      uVar48 = (undefined1)((uint)fVar89 >> 8);
      uVar49 = (undefined1)((uint)fVar89 >> 0x10);
      uVar50 = (undefined1)((uint)fVar89 >> 0x18);
      fVar90 = auVar61._12_4_ + fVar90;
      uVar51 = SUB41(fVar90,0);
      uVar52 = (undefined1)((uint)fVar90 >> 8);
      uVar53 = (undefined1)((uint)fVar90 >> 0x10);
      uVar54 = (undefined1)((uint)fVar90 >> 0x18);
      puVar31 = (undefined8 *)(*(long *)(lVar23 + 0x1d8) + (long)*(int *)(param_2 + 0x20) * 0x10);
      uVar83 = *puVar31;
      fVar33 = *(float *)(puVar31 + 1);
      fVar34 = (float)uVar83;
      fVar36 = (float)((ulong)uVar83 >> 0x20);
      uVar35 = CONCAT44((float)((ulong)uVar35 >> 0x20) * fVar34 + fVar32 * fVar36 + fVar79 * fVar33
                        + 0.0,(float)uVar35 * fVar34 + fVar37 * fVar36 + fVar38 * fVar33 + 0.0);
      uVar25 = CONCAT44((float)(uVar25 >> 0x20) * fVar34 + fVar65 * fVar36 + fVar81 * fVar33 + 0.0,
                        (float)uVar25 * fVar34 + fVar55 * fVar36 + fVar80 * fVar33 + 0.0);
    }
    else {
      lVar23 = *(long *)(param_2 + 0x10);
      lVar24 = (long)*(int *)(param_2 + 0x20) * 0x10;
      puVar31 = (undefined8 *)(*(long *)(lVar23 + 0x1f0) + lVar24);
      uStack_48 = puVar31[1];
      local_50 = *puVar31;
      puVar31 = (undefined8 *)(*(long *)(lVar23 + 0x1e8) + lVar24);
      uStack_58 = puVar31[1];
      local_60 = *puVar31;
      FUN_0032e7f8(*(undefined4 *)(param_2 + 0x1c),(char)*(undefined4 *)(param_2 + 0x18),
                   *(undefined8 *)(lVar23 + 0x98),&local_70,*(undefined8 *)(lVar23 + 0x240),
                   &local_60,&local_50);
      uVar22 = FUN_0031e264(*(undefined8 *)(param_2 + 0x10));
      lVar23 = *(long *)(param_2 + 0x10);
      uVar83 = *(undefined8 *)(*(long *)(lVar23 + 0x78) + 0x158);
      uVar35 = *(undefined8 *)(*(long *)(lVar23 + 0x78) + 0x150);
      lVar24 = (long)*(int *)(param_2 + 0x20) * 0x10;
      puVar31 = (undefined8 *)(*(long *)(lVar23 + 0x1d0) + lVar24);
      local_70 = CONCAT44((float)((ulong)local_70 >> 0x20) * extraout_s0_00 *
                          (float)((ulong)uVar35 >> 0x20),
                          (float)local_70 * extraout_s0_00 * (float)uVar35);
      uStack_68 = CONCAT44((float)((ulong)uStack_68 >> 0x20) * extraout_s0_00 *
                           (float)((ulong)uVar83 >> 0x20),
                           (float)uStack_68 * extraout_s0_00 * (float)uVar83);
      puVar1 = (undefined8 *)(*(long *)(lVar23 + 0x1d8) + lVar24);
      uVar35 = *puVar31;
      uVar39 = (undefined1)uVar35;
      uVar40 = (undefined1)((ulong)uVar35 >> 8);
      uVar41 = (undefined1)((ulong)uVar35 >> 0x10);
      uVar42 = (undefined1)((ulong)uVar35 >> 0x18);
      uVar43 = (undefined1)((ulong)uVar35 >> 0x20);
      uVar44 = (undefined1)((ulong)uVar35 >> 0x28);
      uVar45 = (undefined1)((ulong)uVar35 >> 0x30);
      uVar46 = (undefined1)((ulong)uVar35 >> 0x38);
      uVar57 = *(undefined4 *)(puVar31 + 1);
      uVar47 = (undefined1)uVar57;
      uVar48 = (undefined1)((uint)uVar57 >> 8);
      uVar49 = (undefined1)((uint)uVar57 >> 0x10);
      uVar50 = (undefined1)((uint)uVar57 >> 0x18);
      uVar51 = 0;
      uVar52 = 0;
      uVar53 = 0;
      uVar54 = 0;
      uVar35 = *puVar1;
      uVar25 = (ulong)*(uint *)(puVar1 + 1);
    }
    *(ulong *)(param_3 + 0x12) =
         CONCAT17(uVar54,CONCAT16(uVar53,CONCAT15(uVar52,CONCAT14(uVar51,CONCAT13(uVar50,CONCAT12(
                                                  uVar49,CONCAT11(uVar48,uVar47)))))));
    *(ulong *)(param_3 + 0x10) =
         CONCAT17(uVar46,CONCAT16(uVar45,CONCAT15(uVar44,CONCAT14(uVar43,CONCAT13(uVar42,CONCAT12(
                                                  uVar41,CONCAT11(uVar40,uVar39)))))));
    *puVar30 = CONCAT17(uVar46,CONCAT16(uVar45,CONCAT15(uVar44,CONCAT14(uVar43,CONCAT13(uVar42,
                                                  CONCAT12(uVar41,CONCAT11(uVar40,uVar39)))))));
    *(uint *)(puVar30 + 1) = CONCAT13(uVar50,CONCAT12(uVar49,CONCAT11(uVar48,uVar47)));
    puVar30[3] = uVar25;
    puVar30[2] = uVar35;
    *(undefined4 *)((long)puVar30 + 0xc) = (undefined4)local_70;
    if (piVar28[1] == 0) {
      uVar25 = *(ulong *)(*(long *)(param_2 + 0x10) + 1000);
      puVar30[4] = *(undefined8 *)(*(long *)(param_2 + 0x10) + 0x3e0);
      puVar30[5] = uVar25 & 0xffffffff;
      puVar30[4] = puVar30[4];
      iVar56 = *piVar28;
    }
    else {
      puVar30[5] = *(undefined8 *)(lVar29 + 0x68);
      puVar30[4] = *(undefined8 *)(lVar29 + 0x60);
      iVar56 = *piVar28;
    }
    if ((iVar56 - 1U < 2) &&
       (lVar23 = *(long *)(param_2 + 0x10), *(char *)(*(long *)(lVar23 + 0xa0) + 0x8fa) != '\0')) {
      if ((int)param_3[0x1c] < 1) {
        uVar35 = puVar30[2];
        uVar83 = puVar30[3];
      }
      else {
        uVar35 = *(undefined8 *)puVar30[6];
        fVar33 = 1.0 / *(float *)(lVar23 + 0x48);
        uVar35 = CONCAT44(((float)((ulong)*puVar30 >> 0x20) - (float)((ulong)uVar35 >> 0x20)) *
                          fVar33 + 0.0,((float)*puVar30 - (float)uVar35) * fVar33 + 0.0);
        uVar83 = CONCAT44(fVar33 * 0.0 + 0.0,
                          ((float)puVar30[1] - (float)((undefined8 *)puVar30[6])[1]) * fVar33 + 0.0)
        ;
      }
      fVar33 = (float)uVar35 * (float)uVar35;
      fVar34 = (float)((ulong)uVar35 >> 0x20);
      fVar34 = fVar34 * fVar34;
      uVar39 = (undefined1)((uint)fVar34 >> 8);
      uVar40 = (undefined1)((uint)fVar34 >> 0x10);
      uVar41 = (undefined1)((uint)fVar34 >> 0x18);
      fVar36 = (float)uVar83 * (float)uVar83;
      uVar42 = (undefined1)((uint)fVar36 >> 8);
      uVar43 = (undefined1)((uint)fVar36 >> 0x10);
      uVar44 = (undefined1)((uint)fVar36 >> 0x18);
      fVar37 = (float)((ulong)uVar83 >> 0x20);
      fVar37 = fVar37 * fVar37;
      uVar45 = (undefined1)((uint)fVar37 >> 8);
      uVar46 = (undefined1)((uint)fVar37 >> 0x10);
      uVar47 = (undefined1)((uint)fVar37 >> 0x18);
      auVar77[4] = SUB41(fVar34,0);
      auVar77._0_4_ = fVar33;
      auVar77[5] = uVar39;
      auVar77[6] = uVar40;
      auVar77[7] = uVar41;
      auVar77[8] = SUB41(fVar36,0);
      auVar77[9] = uVar42;
      auVar77[10] = uVar43;
      auVar77[0xb] = uVar44;
      auVar77[0xc] = SUB41(fVar37,0);
      auVar77[0xd] = uVar45;
      auVar77[0xe] = uVar46;
      auVar77[0xf] = uVar47;
      auVar14[4] = SUB41(fVar34,0);
      auVar14._0_4_ = fVar33;
      auVar14[5] = uVar39;
      auVar14[6] = uVar40;
      auVar14[7] = uVar41;
      auVar14[8] = SUB41(fVar36,0);
      auVar14[9] = uVar42;
      auVar14[10] = uVar43;
      auVar14[0xb] = uVar44;
      auVar14[0xc] = SUB41(fVar37,0);
      auVar14[0xd] = uVar45;
      auVar14[0xe] = uVar46;
      auVar14[0xf] = uVar47;
      auVar61 = NEON_ext(auVar77,auVar14,8,1);
      fVar33 = auVar61._0_4_ + fVar33;
      fVar34 = auVar61._4_4_ + fVar34;
      fVar36 = fVar33 + fVar34;
      fVar33 = fVar33 + fVar34;
      uVar39 = SUB41(fVar36,0);
      uVar40 = (undefined1)((uint)fVar36 >> 8);
      uVar41 = (undefined1)((uint)fVar36 >> 0x10);
      uVar42 = (undefined1)((uint)fVar36 >> 0x18);
      uVar43 = SUB41(fVar33,0);
      uVar44 = (undefined1)((uint)fVar33 >> 8);
      uVar45 = (undefined1)((uint)fVar33 >> 0x10);
      uVar46 = (undefined1)((uint)fVar33 >> 0x18);
      if (fVar36 < 1e-05) {
        uVar83 = *(undefined8 *)(lVar23 + 0x3f8);
        uVar35 = *(undefined8 *)(lVar23 + 0x3f0);
        fVar33 = (float)uVar35 * (float)uVar35;
        fVar34 = (float)((ulong)uVar35 >> 0x20);
        fVar34 = fVar34 * fVar34;
        uVar39 = (undefined1)((uint)fVar34 >> 8);
        uVar40 = (undefined1)((uint)fVar34 >> 0x10);
        uVar41 = (undefined1)((uint)fVar34 >> 0x18);
        fVar36 = (float)uVar83 * (float)uVar83;
        uVar42 = (undefined1)((uint)fVar36 >> 8);
        uVar43 = (undefined1)((uint)fVar36 >> 0x10);
        uVar44 = (undefined1)((uint)fVar36 >> 0x18);
        fVar37 = (float)((ulong)uVar83 >> 0x20);
        fVar37 = fVar37 * fVar37;
        uVar45 = (undefined1)((uint)fVar37 >> 8);
        uVar46 = (undefined1)((uint)fVar37 >> 0x10);
        uVar47 = (undefined1)((uint)fVar37 >> 0x18);
        auVar15[4] = SUB41(fVar34,0);
        auVar15._0_4_ = fVar33;
        auVar15[5] = uVar39;
        auVar15[6] = uVar40;
        auVar15[7] = uVar41;
        auVar15[8] = SUB41(fVar36,0);
        auVar15[9] = uVar42;
        auVar15[10] = uVar43;
        auVar15[0xb] = uVar44;
        auVar15[0xc] = SUB41(fVar37,0);
        auVar15[0xd] = uVar45;
        auVar15[0xe] = uVar46;
        auVar15[0xf] = uVar47;
        auVar16[4] = SUB41(fVar34,0);
        auVar16._0_4_ = fVar33;
        auVar16[5] = uVar39;
        auVar16[6] = uVar40;
        auVar16[7] = uVar41;
        auVar16[8] = SUB41(fVar36,0);
        auVar16[9] = uVar42;
        auVar16[10] = uVar43;
        auVar16[0xb] = uVar44;
        auVar16[0xc] = SUB41(fVar37,0);
        auVar16[0xd] = uVar45;
        auVar16[0xe] = uVar46;
        auVar16[0xf] = uVar47;
        auVar61 = NEON_ext(auVar15,auVar16,8,1);
        fVar33 = auVar61._0_4_ + fVar33;
        fVar34 = auVar61._4_4_ + fVar34;
        fVar36 = fVar33 + fVar34;
        fVar33 = fVar33 + fVar34;
        uVar39 = SUB41(fVar36,0);
        uVar40 = (undefined1)((uint)fVar36 >> 8);
        uVar41 = (undefined1)((uint)fVar36 >> 0x10);
        uVar42 = (undefined1)((uint)fVar36 >> 0x18);
        uVar43 = SUB41(fVar33,0);
        uVar44 = (undefined1)((uint)fVar33 >> 8);
        uVar45 = (undefined1)((uint)fVar33 >> 0x10);
        uVar46 = (undefined1)((uint)fVar33 >> 0x18);
      }
      uVar8 = CONCAT11(uVar40,uVar39);
      uVar21 = CONCAT11(uVar44,uVar43);
      lVar24 = (long)*(int *)(param_2 + 0x20) * 0x10;
      auVar17[1] = uVar40;
      auVar17[0] = uVar39;
      auVar17[2] = uVar41;
      auVar17[3] = uVar42;
      auVar17[4] = uVar43;
      auVar17[5] = uVar44;
      auVar17[6] = uVar45;
      auVar17[7] = uVar46;
      auVar17[8] = uVar39;
      auVar17[9] = uVar40;
      auVar17[10] = uVar41;
      auVar17[0xb] = uVar42;
      auVar17[0xc] = uVar43;
      auVar17[0xd] = uVar44;
      auVar17[0xe] = uVar45;
      auVar17[0xf] = uVar46;
      auVar61 = NEON_frsqrte(auVar17,4);
      auVar71._0_4_ =
           auVar61._0_4_ * (float)CONCAT13(uVar42,CONCAT12(uVar41,CONCAT11(uVar40,uVar39)));
      auVar71._4_4_ =
           auVar61._4_4_ * (float)CONCAT13(uVar46,CONCAT12(uVar45,CONCAT11(uVar44,uVar43)));
      auVar71._8_4_ = auVar61._8_4_ * (float)CONCAT13(uVar42,CONCAT12(uVar41,uVar8));
      auVar71._12_4_ = auVar61._12_4_ * (float)CONCAT13(uVar46,CONCAT12(uVar45,uVar21));
      auVar77 = NEON_frsqrts(auVar61,auVar71,4);
      auVar59._0_4_ = auVar61._0_4_ * auVar77._0_4_;
      auVar59._4_4_ = auVar61._4_4_ * auVar77._4_4_;
      auVar59._8_4_ = auVar61._8_4_ * auVar77._8_4_;
      auVar59._12_4_ = auVar61._12_4_ * auVar77._12_4_;
      auVar72._0_4_ =
           (float)CONCAT13(uVar42,CONCAT12(uVar41,CONCAT11(uVar40,uVar39))) * auVar59._0_4_;
      auVar72._4_4_ =
           (float)CONCAT13(uVar46,CONCAT12(uVar45,CONCAT11(uVar44,uVar43))) * auVar59._4_4_;
      auVar72._8_4_ = (float)CONCAT13(uVar42,CONCAT12(uVar41,uVar8)) * auVar59._8_4_;
      auVar72._12_4_ = (float)CONCAT13(uVar46,CONCAT12(uVar45,uVar21)) * auVar59._12_4_;
      iVar56 = -(uint)((float)CONCAT13(uVar42,CONCAT12(uVar41,CONCAT11(uVar40,uVar39))) == 0.0);
      iVar66 = -(uint)((float)CONCAT13(uVar46,CONCAT12(uVar45,CONCAT11(uVar44,uVar43))) == 0.0);
      iVar67 = -(uint)((float)CONCAT13(uVar42,CONCAT12(uVar41,uVar8)) == 0.0);
      iVar68 = -(uint)((float)CONCAT13(uVar46,CONCAT12(uVar45,uVar21)) == 0.0);
      auVar61 = NEON_frsqrts(auVar59,auVar72,4);
      fVar33 = (float)uVar35 * auVar59._0_4_ * auVar61._0_4_;
      fVar34 = (float)((ulong)uVar35 >> 0x20) * auVar59._4_4_ * auVar61._4_4_;
      fVar36 = (float)uVar83 * auVar59._8_4_ * auVar61._8_4_;
      fVar37 = (float)((ulong)uVar83 >> 0x20) * auVar59._12_4_ * auVar61._12_4_;
      local_80 = CONCAT17((byte)((uint)fVar34 >> 0x18) & ~(byte)((uint)iVar66 >> 0x18),
                          CONCAT16((byte)((uint)fVar34 >> 0x10) & ~(byte)((uint)iVar66 >> 0x10),
                                   CONCAT15((byte)((uint)fVar34 >> 8) & ~(byte)((uint)iVar66 >> 8),
                                            CONCAT14(SUB41(fVar34,0) & ~(byte)iVar66,
                                                     CONCAT13((byte)((uint)fVar33 >> 0x18) &
                                                              ~(byte)((uint)iVar56 >> 0x18),
                                                              CONCAT12((byte)((uint)fVar33 >> 0x10)
                                                                       & ~(byte)((uint)iVar56 >>
                                                                                0x10),
                                                                       CONCAT11((byte)((uint)fVar33
                                                                                      >> 8) &
                                                                                ~(byte)((uint)iVar56
                                                                                       >> 8),
                                                                                SUB41(fVar33,0) &
                                                                                ~(byte)iVar56)))))))
      ;
      uStack_78 = CONCAT17((byte)((uint)fVar37 >> 0x18) & ~(byte)((uint)iVar68 >> 0x18),
                           CONCAT16((byte)((uint)fVar37 >> 0x10) & ~(byte)((uint)iVar68 >> 0x10),
                                    CONCAT15((byte)((uint)fVar37 >> 8) & ~(byte)((uint)iVar68 >> 8),
                                             CONCAT14(SUB41(fVar37,0) & ~(byte)iVar68,
                                                      CONCAT13((byte)((uint)fVar36 >> 0x18) &
                                                               ~(byte)((uint)iVar67 >> 0x18),
                                                               CONCAT12((byte)((uint)fVar36 >> 0x10)
                                                                        & ~(byte)((uint)iVar67 >>
                                                                                 0x10),
                                                                        CONCAT11((byte)((uint)fVar36
                                                                                       >> 8) &
                                                                                 ~(byte)((uint)
                                                  iVar67 >> 8),SUB41(fVar36,0) & ~(byte)iVar67))))))
                          );
      puVar31 = (undefined8 *)(*(long *)(lVar23 + 0x1f8) + lVar24);
      uStack_48 = puVar31[1];
      local_50 = *puVar31;
      puVar31 = (undefined8 *)(*(long *)(lVar23 + 0x1f0) + lVar24);
      uStack_58 = puVar31[1];
      local_60 = *puVar31;
      FUN_0032fcc8(*(undefined4 *)(param_2 + 0x18),*(undefined8 *)(lVar23 + 0x98),auStack_90,
                   *(undefined8 *)(lVar23 + 0x240),&local_50,&local_60);
      puVar31 = puVar30 + 4;
      uVar22 = FUN_0032c6e0(local_88,puVar31,puVar31,&local_80);
      fVar32 = (float)puVar30[4];
      fVar33 = fVar32 * fVar32;
      fVar55 = (float)((ulong)puVar30[4] >> 0x20);
      fVar34 = fVar55 * fVar55;
      uVar39 = (undefined1)((uint)fVar34 >> 8);
      uVar40 = (undefined1)((uint)fVar34 >> 0x10);
      uVar41 = (undefined1)((uint)fVar34 >> 0x18);
      fVar65 = (float)puVar30[5];
      fVar36 = fVar65 * fVar65;
      uVar42 = (undefined1)((uint)fVar36 >> 8);
      uVar43 = (undefined1)((uint)fVar36 >> 0x10);
      uVar44 = (undefined1)((uint)fVar36 >> 0x18);
      fVar38 = (float)((ulong)puVar30[5] >> 0x20);
      fVar37 = fVar38 * fVar38;
      uVar45 = (undefined1)((uint)fVar37 >> 8);
      uVar46 = (undefined1)((uint)fVar37 >> 0x10);
      uVar47 = (undefined1)((uint)fVar37 >> 0x18);
      auVar18[4] = SUB41(fVar34,0);
      auVar18._0_4_ = fVar33;
      auVar18[5] = uVar39;
      auVar18[6] = uVar40;
      auVar18[7] = uVar41;
      auVar18[8] = SUB41(fVar36,0);
      auVar18[9] = uVar42;
      auVar18[10] = uVar43;
      auVar18[0xb] = uVar44;
      auVar18[0xc] = SUB41(fVar37,0);
      auVar18[0xd] = uVar45;
      auVar18[0xe] = uVar46;
      auVar18[0xf] = uVar47;
      auVar19[4] = SUB41(fVar34,0);
      auVar19._0_4_ = fVar33;
      auVar19[5] = uVar39;
      auVar19[6] = uVar40;
      auVar19[7] = uVar41;
      auVar19[8] = SUB41(fVar36,0);
      auVar19[9] = uVar42;
      auVar19[10] = uVar43;
      auVar19[0xb] = uVar44;
      auVar19[0xc] = SUB41(fVar37,0);
      auVar19[0xd] = uVar45;
      auVar19[0xe] = uVar46;
      auVar19[0xf] = uVar47;
      auVar61 = NEON_ext(auVar18,auVar19,8,1);
      fVar33 = auVar61._0_4_ + fVar33;
      fVar34 = auVar61._4_4_ + fVar34;
      fVar36 = fVar33 + fVar34;
      fVar33 = fVar33 + fVar34;
      uVar39 = SUB41(fVar33,0);
      uVar40 = (undefined1)((uint)fVar33 >> 8);
      uVar41 = (undefined1)((uint)fVar33 >> 0x10);
      uVar42 = (undefined1)((uint)fVar33 >> 0x18);
      auVar20[4] = uVar39;
      auVar20._0_4_ = fVar36;
      auVar20[5] = uVar40;
      auVar20[6] = uVar41;
      auVar20[7] = uVar42;
      auVar20[8] = SUB41(fVar36,0);
      auVar20[9] = (char)((uint)fVar36 >> 8);
      auVar20[10] = (char)((uint)fVar36 >> 0x10);
      auVar20[0xb] = (char)((uint)fVar36 >> 0x18);
      auVar20[0xc] = uVar39;
      auVar20[0xd] = uVar40;
      auVar20[0xe] = uVar41;
      auVar20[0xf] = uVar42;
      auVar61 = NEON_frsqrte(auVar20,4);
      auVar73._0_4_ = auVar61._0_4_ * fVar36;
      auVar73._4_4_ = auVar61._4_4_ * fVar33;
      auVar73._8_4_ = auVar61._8_4_ * fVar36;
      uVar8 = (undefined2)(CONCAT15(uVar40,CONCAT14(uVar39,fVar36)) >> 0x20);
      auVar73._12_4_ = auVar61._12_4_ * (float)CONCAT13(uVar42,CONCAT12(uVar41,uVar8));
      auVar77 = NEON_frsqrts(auVar61,auVar73,4);
      auVar60._0_4_ = auVar61._0_4_ * auVar77._0_4_;
      auVar60._4_4_ = auVar61._4_4_ * auVar77._4_4_;
      auVar60._8_4_ = auVar61._8_4_ * auVar77._8_4_;
      auVar60._12_4_ = auVar61._12_4_ * auVar77._12_4_;
      auVar74._0_4_ = fVar36 * auVar60._0_4_;
      auVar74._4_4_ = fVar33 * auVar60._4_4_;
      auVar74._8_4_ = fVar36 * auVar60._8_4_;
      auVar74._12_4_ = (float)CONCAT13(uVar42,CONCAT12(uVar41,uVar8)) * auVar60._12_4_;
      iVar56 = -(uint)(fVar36 == 0.0);
      iVar66 = -(uint)(fVar33 == 0.0);
      iVar67 = -(uint)(fVar36 == 0.0);
      iVar68 = -(uint)((float)CONCAT13(uVar42,CONCAT12(uVar41,uVar8)) == 0.0);
      auVar61 = NEON_frsqrts(auVar60,auVar74,4);
      fVar32 = fVar32 * auVar60._0_4_ * auVar61._0_4_;
      fVar55 = fVar55 * auVar60._4_4_ * auVar61._4_4_;
      fVar65 = fVar65 * auVar60._8_4_ * auVar61._8_4_;
      fVar38 = fVar38 * auVar60._12_4_ * auVar61._12_4_;
      puVar30[5] = CONCAT17((byte)((uint)fVar38 >> 0x18) & ~(byte)((uint)iVar68 >> 0x18),
                            CONCAT16((byte)((uint)fVar38 >> 0x10) & ~(byte)((uint)iVar68 >> 0x10),
                                     CONCAT15((byte)((uint)fVar38 >> 8) & ~(byte)((uint)iVar68 >> 8)
                                              ,CONCAT14(SUB41(fVar38,0) & ~(byte)iVar68,
                                                        CONCAT13((byte)((uint)fVar65 >> 0x18) &
                                                                 ~(byte)((uint)iVar67 >> 0x18),
                                                                 CONCAT12((byte)((uint)fVar65 >>
                                                                                0x10) &
                                                                          ~(byte)((uint)iVar67 >>
                                                                                 0x10),
                                                                          CONCAT11((byte)((uint)
                                                  fVar65 >> 8) & ~(byte)((uint)iVar67 >> 8),
                                                  SUB41(fVar65,0) & ~(byte)iVar67)))))));
      puVar30[4] = CONCAT17((byte)((uint)fVar55 >> 0x18) & ~(byte)((uint)iVar66 >> 0x18),
                            CONCAT16((byte)((uint)fVar55 >> 0x10) & ~(byte)((uint)iVar66 >> 0x10),
                                     CONCAT15((byte)((uint)fVar55 >> 8) & ~(byte)((uint)iVar66 >> 8)
                                              ,CONCAT14(SUB41(fVar55,0) & ~(byte)iVar66,
                                                        CONCAT13((byte)((uint)fVar32 >> 0x18) &
                                                                 ~(byte)((uint)iVar56 >> 0x18),
                                                                 CONCAT12((byte)((uint)fVar32 >>
                                                                                0x10) &
                                                                          ~(byte)((uint)iVar56 >>
                                                                                 0x10),
                                                                          CONCAT11((byte)((uint)
                                                  fVar32 >> 8) & ~(byte)((uint)iVar56 >> 8),
                                                  SUB41(fVar32,0) & ~(byte)iVar56)))))));
      if (param_3[0x1c] == 1.4013e-45) {
        lVar23 = puVar30[6];
        *(undefined8 *)(lVar23 + 0x28) = puVar30[5];
        *(undefined8 *)(lVar23 + 0x20) = *puVar31;
      }
    }
    fVar33 = param_3[0x1c];
    if ((float)(int)fVar33 < (float)piVar28[5]) {
      fVar33 = (float)((int)fVar33 + 1);
      param_3[0x1c] = fVar33;
    }
    goto joined_r0x00336c6c;
  }
  lVar23 = *(long *)(param_2 + 0x10);
  lVar24 = (long)*(int *)(param_2 + 0x20) * 0x10;
  puVar31 = (undefined8 *)puVar30[6];
  puVar30 = (undefined8 *)(*(long *)(lVar23 + 0x1f0) + lVar24);
  uStack_48 = puVar30[1];
  local_50 = *puVar30;
  puVar30 = (undefined8 *)(*(long *)(lVar23 + 0x1e8) + lVar24);
  uStack_58 = puVar30[1];
  local_60 = *puVar30;
  FUN_0032e7f8(*(undefined4 *)(param_2 + 0x1c),(char)*(undefined4 *)(param_2 + 0x18),
               *(undefined8 *)(lVar23 + 0x98),&local_70,*(undefined8 *)(lVar23 + 0x240),&local_60,
               &local_50);
  uVar22 = FUN_0031e264(*(undefined8 *)(param_2 + 0x10));
  lVar23 = *(long *)(param_2 + 0x10);
  uVar83 = *(undefined8 *)(*(long *)(lVar23 + 0x78) + 0x158);
  uVar35 = *(undefined8 *)(*(long *)(lVar23 + 0x78) + 0x150);
  fVar33 = (float)local_70 * extraout_s0 * (float)uVar35;
  local_70 = CONCAT44((float)((ulong)local_70 >> 0x20) * extraout_s0 *
                      (float)((ulong)uVar35 >> 0x20),fVar33);
  uStack_68 = CONCAT44((float)((ulong)uStack_68 >> 0x20) * extraout_s0 *
                       (float)((ulong)uVar83 >> 0x20),(float)uStack_68 * extraout_s0 * (float)uVar83
                      );
  puVar30 = (undefined8 *)(*(long *)(lVar23 + 0x1d0) + (long)*(int *)(param_2 + 0x20) * 0x10);
  uVar83 = puVar30[1];
  uVar35 = *puVar30;
  if (piVar28[1] == 0) {
    lVar24 = (long)*(int *)(param_2 + 0x20) * 0x10;
    puVar26 = (undefined4 *)(*(long *)(lVar23 + 0x210) + lVar24);
    puVar2 = (undefined4 *)(*(long *)(lVar23 + 0x218) + lVar24);
    puVar3 = (undefined4 *)(*(long *)(lVar23 + 0x220) + lVar24);
    cVar7 = *(char *)(*(long *)(lVar23 + 0xa0) + 0x793);
    if (cVar7 == '\x02') {
      auVar61 = *(undefined1 (*) [16])(lVar23 + 0x400);
      auVar77 = NEON_ext(auVar61,auVar61,8,1);
      uVar57 = *puVar26;
      uVar39 = (undefined1)uVar57;
      uVar40 = (undefined1)((uint)uVar57 >> 8);
      uVar41 = (undefined1)((uint)uVar57 >> 0x10);
      uVar42 = (undefined1)((uint)uVar57 >> 0x18);
      uVar57 = *puVar2;
      uVar43 = (undefined1)uVar57;
      uVar44 = (undefined1)((uint)uVar57 >> 8);
      uVar45 = (undefined1)((uint)uVar57 >> 0x10);
      uVar46 = (undefined1)((uint)uVar57 >> 0x18);
      uVar57 = *puVar3;
      uVar47 = (undefined1)uVar57;
      uVar48 = (undefined1)((uint)uVar57 >> 8);
      uVar49 = (undefined1)((uint)uVar57 >> 0x10);
      uVar50 = (undefined1)((uint)uVar57 >> 0x18);
      uVar82 = CONCAT44(puVar2[2],puVar26[2]);
      uVar27 = CONCAT44(puVar2[1],puVar26[1]);
      auVar58._8_4_ = auVar77._0_4_;
      auVar58._0_8_ = auVar61._0_8_;
LAB_00336928:
      auVar84._8_4_ = puVar3[2];
      auVar84._0_8_ = uVar82;
      auVar70._8_4_ = puVar3[1];
      auVar70._0_8_ = uVar27;
    }
    else {
      if (cVar7 != '\0') {
        uVar57 = *puVar26;
        uVar39 = (undefined1)uVar57;
        uVar40 = (undefined1)((uint)uVar57 >> 8);
        uVar41 = (undefined1)((uint)uVar57 >> 0x10);
        uVar42 = (undefined1)((uint)uVar57 >> 0x18);
        uVar57 = *puVar2;
        uVar43 = (undefined1)uVar57;
        uVar44 = (undefined1)((uint)uVar57 >> 8);
        uVar45 = (undefined1)((uint)uVar57 >> 0x10);
        uVar46 = (undefined1)((uint)uVar57 >> 0x18);
        uVar57 = *puVar3;
        uVar47 = (undefined1)uVar57;
        uVar48 = (undefined1)((uint)uVar57 >> 8);
        uVar49 = (undefined1)((uint)uVar57 >> 0x10);
        uVar50 = (undefined1)((uint)uVar57 >> 0x18);
        auVar58._0_4_ = puVar26[3];
        uVar82 = CONCAT44(puVar2[2],puVar26[2]);
        auVar58._4_4_ = puVar2[3];
        uVar27 = CONCAT44(puVar2[1],puVar26[1]);
        auVar58._8_4_ = puVar3[3];
        goto LAB_00336928;
      }
      uVar27 = *(undefined8 *)(lVar23 + 0x3d8);
      uVar47 = (undefined1)uVar27;
      uVar48 = (undefined1)((ulong)uVar27 >> 8);
      uVar49 = (undefined1)((ulong)uVar27 >> 0x10);
      uVar50 = (undefined1)((ulong)uVar27 >> 0x18);
      uVar27 = *(undefined8 *)(lVar23 + 0x3d0);
      uVar39 = (undefined1)uVar27;
      uVar40 = (undefined1)((ulong)uVar27 >> 8);
      uVar41 = (undefined1)((ulong)uVar27 >> 0x10);
      uVar42 = (undefined1)((ulong)uVar27 >> 0x18);
      uVar43 = (undefined1)((ulong)uVar27 >> 0x20);
      uVar44 = (undefined1)((ulong)uVar27 >> 0x28);
      uVar45 = (undefined1)((ulong)uVar27 >> 0x30);
      uVar46 = (undefined1)((ulong)uVar27 >> 0x38);
      auVar70 = SUB1612(*(undefined1 (*) [16])(lVar23 + 0x3e0),0);
      auVar84 = SUB1612(*(undefined1 (*) [16])(lVar23 + 0x3f0),0);
      auVar58 = SUB1612(*(undefined1 (*) [16])(lVar23 + 0x400),0);
    }
    fVar34 = (float)uVar35;
    fVar37 = (float)((ulong)uVar35 >> 0x20);
    fVar36 = (float)uVar83;
    *puVar31 = CONCAT44(auVar58._4_4_ +
                        (float)CONCAT13(uVar46,CONCAT12(uVar45,CONCAT11(uVar44,uVar43))) * fVar34 +
                        auVar70._4_4_ * fVar37 + auVar84._4_4_ * fVar36,
                        auVar58._0_4_ +
                        (float)CONCAT13(uVar42,CONCAT12(uVar41,CONCAT11(uVar40,uVar39))) * fVar34 +
                        auVar70._0_4_ * fVar37 + auVar84._0_4_ * fVar36);
    *(float *)(puVar31 + 1) =
         auVar58._8_4_ +
         (float)CONCAT13(uVar50,CONCAT12(uVar49,CONCAT11(uVar48,uVar47))) * fVar34 +
         auVar70._8_4_ * fVar37 + auVar84._8_4_ * fVar36;
  }
  else {
    puVar31[1] = uVar83;
    *puVar31 = uVar35;
  }
  *(float *)((long)puVar31 + 0xc) = fVar33;
  uVar35 = *(undefined8 *)(*(long *)(param_2 + 0x10) + 0x3e0);
  puVar31[5] = *(undefined8 *)(*(long *)(param_2 + 0x10) + 1000);
  puVar31[4] = uVar35;
  fVar33 = param_3[0x1c];
joined_r0x00336c6c:
  if ((int)fVar33 < 2) {
    return;
  }
  puVar30 = *(undefined8 **)(*(long *)(param_3 + 0x16) + 0x30);
  puVar31 = (undefined8 *)puVar30[6];
  fVar34 = (float)*puVar30 - (float)*puVar31;
  fVar36 = (float)((ulong)*puVar30 >> 0x20) - (float)((ulong)*puVar31 >> 0x20);
  uVar35 = CONCAT44(fVar36,fVar34);
  fVar37 = (float)puVar30[1] - (float)puVar31[1];
  fVar33 = (float)piVar28[10];
  uVar25 = (ulong)(uint)fVar37;
  if (fVar33 <= 0.0) {
    puVar30[3] = uVar25;
    puVar30[2] = uVar35;
    fVar33 = param_3[0x1c];
  }
  else {
    if (2.0 <= param_3[0x1f]) {
      auVar62._0_4_ = fVar34 * fVar34;
      auVar62._4_4_ = fVar36 * fVar36;
      auVar62._8_4_ = fVar37 * fVar37;
      auVar62._12_4_ = 0;
      auVar61 = NEON_ext(auVar62,auVar62,8,1);
      fVar55 = auVar61._0_4_ + auVar62._0_4_;
      fVar65 = auVar61._4_4_ + auVar62._4_4_;
      fVar32 = fVar55 + fVar65;
      fVar55 = fVar55 + fVar65;
      if (0.0 < fVar32) {
        auVar63._8_8_ = CONCAT44(fVar55,fVar32);
        auVar63._0_8_ = CONCAT44(fVar55,fVar32);
        auVar61 = NEON_frsqrte(auVar63,4);
        auVar85._0_4_ = fVar32 * auVar61._0_4_;
        auVar85._4_4_ = fVar55 * auVar61._4_4_;
        auVar85._8_4_ = fVar32 * auVar61._8_4_;
        auVar85._12_4_ = fVar55 * auVar61._12_4_;
        auVar77 = NEON_frsqrts(auVar61,auVar85,4);
        auVar75._0_4_ = auVar61._0_4_ * auVar77._0_4_;
        auVar75._4_4_ = auVar61._4_4_ * auVar77._4_4_;
        auVar75._8_4_ = auVar61._8_4_ * auVar77._8_4_;
        auVar75._12_4_ = auVar61._12_4_ * auVar77._12_4_;
        auVar86._0_4_ = fVar32 * auVar75._0_4_;
        auVar86._4_4_ = fVar55 * auVar75._4_4_;
        auVar86._8_4_ = fVar32 * auVar75._8_4_;
        auVar86._12_4_ = fVar55 * auVar75._12_4_;
        iVar56 = -(uint)(fVar32 == 0.0);
        iVar66 = -(uint)(fVar55 == 0.0);
        iVar67 = -(uint)(fVar32 == 0.0);
        iVar68 = -(uint)(fVar55 == 0.0);
        auVar61 = NEON_frsqrts(auVar75,auVar86,4);
        fVar34 = fVar34 * auVar75._0_4_ * auVar61._0_4_;
        fVar36 = fVar36 * auVar75._4_4_ * auVar61._4_4_;
        fVar37 = fVar37 * auVar75._8_4_ * auVar61._8_4_;
        fVar32 = auVar75._12_4_ * auVar61._12_4_ * 0.0;
        uVar35 = CONCAT17((byte)((uint)fVar36 >> 0x18) & ~(byte)((uint)iVar66 >> 0x18),
                          CONCAT16((byte)((uint)fVar36 >> 0x10) & ~(byte)((uint)iVar66 >> 0x10),
                                   CONCAT15((byte)((uint)fVar36 >> 8) & ~(byte)((uint)iVar66 >> 8),
                                            CONCAT14(SUB41(fVar36,0) & ~(byte)iVar66,
                                                     CONCAT13((byte)((uint)fVar34 >> 0x18) &
                                                              ~(byte)((uint)iVar56 >> 0x18),
                                                              CONCAT12((byte)((uint)fVar34 >> 0x10)
                                                                       & ~(byte)((uint)iVar56 >>
                                                                                0x10),
                                                                       CONCAT11((byte)((uint)fVar34
                                                                                      >> 8) &
                                                                                ~(byte)((uint)iVar56
                                                                                       >> 8),
                                                                                SUB41(fVar34,0) &
                                                                                ~(byte)iVar56)))))))
        ;
        uVar25 = CONCAT17((byte)((uint)fVar32 >> 0x18) & ~(byte)((uint)iVar68 >> 0x18),
                          CONCAT16((byte)((uint)fVar32 >> 0x10) & ~(byte)((uint)iVar68 >> 0x10),
                                   CONCAT15((byte)((uint)fVar32 >> 8) & ~(byte)((uint)iVar68 >> 8),
                                            CONCAT14(SUB41(fVar32,0) & ~(byte)iVar68,
                                                     CONCAT13((byte)((uint)fVar37 >> 0x18) &
                                                              ~(byte)((uint)iVar67 >> 0x18),
                                                              CONCAT12((byte)((uint)fVar37 >> 0x10)
                                                                       & ~(byte)((uint)iVar67 >>
                                                                                0x10),
                                                                       CONCAT11((byte)((uint)fVar37
                                                                                      >> 8) &
                                                                                ~(byte)((uint)iVar67
                                                                                       >> 8),
                                                                                SUB41(fVar37,0) &
                                                                                ~(byte)iVar67)))))))
        ;
      }
      fVar34 = param_3[0xc] + ((float)uVar35 - param_3[0xc]) * fVar33;
      fVar36 = param_3[0xd] + ((float)((ulong)uVar35 >> 0x20) - param_3[0xd]) * fVar33;
      uVar35 = CONCAT44(fVar36,fVar34);
      fVar37 = param_3[0xe] + ((float)uVar25 - param_3[0xe]) * fVar33;
      fVar33 = param_3[0xf] + ((float)(uVar25 >> 0x20) - param_3[0xf]) * fVar33;
      uVar25 = CONCAT44(fVar33,fVar37);
      fVar34 = fVar34 * fVar34;
      fVar36 = fVar36 * fVar36;
      uVar39 = (undefined1)((uint)fVar36 >> 8);
      uVar40 = (undefined1)((uint)fVar36 >> 0x10);
      uVar41 = (undefined1)((uint)fVar36 >> 0x18);
      fVar37 = fVar37 * fVar37;
      uVar42 = (undefined1)((uint)fVar37 >> 8);
      uVar43 = (undefined1)((uint)fVar37 >> 0x10);
      uVar44 = (undefined1)((uint)fVar37 >> 0x18);
      fVar33 = fVar33 * fVar33;
      uVar45 = (undefined1)((uint)fVar33 >> 8);
      uVar46 = (undefined1)((uint)fVar33 >> 0x10);
      uVar47 = (undefined1)((uint)fVar33 >> 0x18);
      auVar12[4] = SUB41(fVar36,0);
      auVar12._0_4_ = fVar34;
      auVar12[5] = uVar39;
      auVar12[6] = uVar40;
      auVar12[7] = uVar41;
      auVar12[8] = SUB41(fVar37,0);
      auVar12[9] = uVar42;
      auVar12[10] = uVar43;
      auVar12[0xb] = uVar44;
      auVar12[0xc] = SUB41(fVar33,0);
      auVar12[0xd] = uVar45;
      auVar12[0xe] = uVar46;
      auVar12[0xf] = uVar47;
      auVar13[4] = SUB41(fVar36,0);
      auVar13._0_4_ = fVar34;
      auVar13[5] = uVar39;
      auVar13[6] = uVar40;
      auVar13[7] = uVar41;
      auVar13[8] = SUB41(fVar37,0);
      auVar13[9] = uVar42;
      auVar13[10] = uVar43;
      auVar13[0xb] = uVar44;
      auVar13[0xc] = SUB41(fVar33,0);
      auVar13[0xd] = uVar45;
      auVar13[0xe] = uVar46;
      auVar13[0xf] = uVar47;
      auVar61 = NEON_ext(auVar12,auVar13,8,1);
      fVar34 = auVar61._0_4_ + fVar34;
      fVar36 = auVar61._4_4_ + fVar36;
      fVar33 = fVar34 + fVar36;
      fVar34 = fVar34 + fVar36;
      uVar39 = SUB41(fVar33,0);
      uVar40 = (undefined1)((uint)fVar33 >> 8);
      uVar41 = (undefined1)((uint)fVar33 >> 0x10);
      uVar42 = (undefined1)((uint)fVar33 >> 0x18);
      uVar43 = SUB41(fVar34,0);
      uVar44 = (undefined1)((uint)fVar34 >> 8);
      uVar45 = (undefined1)((uint)fVar34 >> 0x10);
      uVar46 = (undefined1)((uint)fVar34 >> 0x18);
    }
    else {
      fVar34 = fVar34 * fVar34;
      fVar36 = fVar36 * fVar36;
      uVar39 = (undefined1)((uint)fVar36 >> 8);
      uVar40 = (undefined1)((uint)fVar36 >> 0x10);
      uVar41 = (undefined1)((uint)fVar36 >> 0x18);
      fVar37 = fVar37 * fVar37;
      uVar42 = (undefined1)((uint)fVar37 >> 8);
      uVar43 = (undefined1)((uint)fVar37 >> 0x10);
      uVar44 = (undefined1)((uint)fVar37 >> 0x18);
      auVar9[4] = SUB41(fVar36,0);
      auVar9._0_4_ = fVar34;
      auVar9[5] = uVar39;
      auVar9[6] = uVar40;
      auVar9[7] = uVar41;
      auVar9[8] = SUB41(fVar37,0);
      auVar9[9] = uVar42;
      auVar9[10] = uVar43;
      auVar9[0xb] = uVar44;
      auVar9._12_4_ = 0;
      auVar10[4] = SUB41(fVar36,0);
      auVar10._0_4_ = fVar34;
      auVar10[5] = uVar39;
      auVar10[6] = uVar40;
      auVar10[7] = uVar41;
      auVar10[8] = SUB41(fVar37,0);
      auVar10[9] = uVar42;
      auVar10[10] = uVar43;
      auVar10[0xb] = uVar44;
      auVar10._12_4_ = 0;
      auVar61 = NEON_ext(auVar9,auVar10,8,1);
      fVar34 = auVar61._0_4_ + fVar34;
      fVar36 = auVar61._4_4_ + fVar36;
      fVar33 = fVar34 + fVar36;
      fVar34 = fVar34 + fVar36;
      uVar39 = SUB41(fVar33,0);
      uVar40 = (undefined1)((uint)fVar33 >> 8);
      uVar41 = (undefined1)((uint)fVar33 >> 0x10);
      uVar42 = (undefined1)((uint)fVar33 >> 0x18);
      uVar43 = SUB41(fVar34,0);
      uVar44 = (undefined1)((uint)fVar34 >> 8);
      uVar45 = (undefined1)((uint)fVar34 >> 0x10);
      uVar46 = (undefined1)((uint)fVar34 >> 0x18);
    }
    if (0.0 < fVar33) {
      uVar8 = CONCAT11(uVar40,uVar39);
      uVar21 = CONCAT11(uVar44,uVar43);
      auVar11[1] = uVar40;
      auVar11[0] = uVar39;
      auVar11[2] = uVar41;
      auVar11[3] = uVar42;
      auVar11[4] = uVar43;
      auVar11[5] = uVar44;
      auVar11[6] = uVar45;
      auVar11[7] = uVar46;
      auVar11[8] = uVar39;
      auVar11[9] = uVar40;
      auVar11[10] = uVar41;
      auVar11[0xb] = uVar42;
      auVar11[0xc] = uVar43;
      auVar11[0xd] = uVar44;
      auVar11[0xe] = uVar45;
      auVar11[0xf] = uVar46;
      auVar61 = NEON_frsqrte(auVar11,4);
      auVar76._0_4_ =
           (float)CONCAT13(uVar42,CONCAT12(uVar41,CONCAT11(uVar40,uVar39))) * auVar61._0_4_;
      auVar76._4_4_ =
           (float)CONCAT13(uVar46,CONCAT12(uVar45,CONCAT11(uVar44,uVar43))) * auVar61._4_4_;
      auVar76._8_4_ = (float)CONCAT13(uVar42,CONCAT12(uVar41,uVar8)) * auVar61._8_4_;
      auVar76._12_4_ = (float)CONCAT13(uVar46,CONCAT12(uVar45,uVar21)) * auVar61._12_4_;
      auVar77 = NEON_frsqrts(auVar61,auVar76,4);
      auVar64._0_4_ = auVar61._0_4_ * auVar77._0_4_;
      auVar64._4_4_ = auVar61._4_4_ * auVar77._4_4_;
      auVar64._8_4_ = auVar61._8_4_ * auVar77._8_4_;
      auVar64._12_4_ = auVar61._12_4_ * auVar77._12_4_;
      auVar78._0_4_ =
           (float)CONCAT13(uVar42,CONCAT12(uVar41,CONCAT11(uVar40,uVar39))) * auVar64._0_4_;
      auVar78._4_4_ =
           (float)CONCAT13(uVar46,CONCAT12(uVar45,CONCAT11(uVar44,uVar43))) * auVar64._4_4_;
      auVar78._8_4_ = (float)CONCAT13(uVar42,CONCAT12(uVar41,uVar8)) * auVar64._8_4_;
      auVar78._12_4_ = (float)CONCAT13(uVar46,CONCAT12(uVar45,uVar21)) * auVar64._12_4_;
      iVar56 = -(uint)((float)CONCAT13(uVar42,CONCAT12(uVar41,CONCAT11(uVar40,uVar39))) == 0.0);
      iVar66 = -(uint)((float)CONCAT13(uVar46,CONCAT12(uVar45,CONCAT11(uVar44,uVar43))) == 0.0);
      iVar67 = -(uint)((float)CONCAT13(uVar42,CONCAT12(uVar41,uVar8)) == 0.0);
      iVar68 = -(uint)((float)CONCAT13(uVar46,CONCAT12(uVar45,uVar21)) == 0.0);
      auVar61 = NEON_frsqrts(auVar64,auVar78,4);
      fVar33 = (float)uVar35 * auVar64._0_4_ * auVar61._0_4_;
      fVar34 = (float)((ulong)uVar35 >> 0x20) * auVar64._4_4_ * auVar61._4_4_;
      fVar36 = (float)uVar25 * auVar64._8_4_ * auVar61._8_4_;
      fVar37 = (float)(uVar25 >> 0x20) * auVar64._12_4_ * auVar61._12_4_;
      uVar35 = CONCAT17((byte)((uint)fVar34 >> 0x18) & ~(byte)((uint)iVar66 >> 0x18),
                        CONCAT16((byte)((uint)fVar34 >> 0x10) & ~(byte)((uint)iVar66 >> 0x10),
                                 CONCAT15((byte)((uint)fVar34 >> 8) & ~(byte)((uint)iVar66 >> 8),
                                          CONCAT14(SUB41(fVar34,0) & ~(byte)iVar66,
                                                   CONCAT13((byte)((uint)fVar33 >> 0x18) &
                                                            ~(byte)((uint)iVar56 >> 0x18),
                                                            CONCAT12((byte)((uint)fVar33 >> 0x10) &
                                                                     ~(byte)((uint)iVar56 >> 0x10),
                                                                     CONCAT11((byte)((uint)fVar33 >>
                                                                                    8) &
                                                                              ~(byte)((uint)iVar56
                                                                                     >> 8),
                                                                              SUB41(fVar33,0) &
                                                                              ~(byte)iVar56)))))));
      uVar25 = CONCAT17((byte)((uint)fVar37 >> 0x18) & ~(byte)((uint)iVar68 >> 0x18),
                        CONCAT16((byte)((uint)fVar37 >> 0x10) & ~(byte)((uint)iVar68 >> 0x10),
                                 CONCAT15((byte)((uint)fVar37 >> 8) & ~(byte)((uint)iVar68 >> 8),
                                          CONCAT14(SUB41(fVar37,0) & ~(byte)iVar68,
                                                   CONCAT13((byte)((uint)fVar36 >> 0x18) &
                                                            ~(byte)((uint)iVar67 >> 0x18),
                                                            CONCAT12((byte)((uint)fVar36 >> 0x10) &
                                                                     ~(byte)((uint)iVar67 >> 0x10),
                                                                     CONCAT11((byte)((uint)fVar36 >>
                                                                                    8) &
                                                                              ~(byte)((uint)iVar67
                                                                                     >> 8),
                                                                              SUB41(fVar36,0) &
                                                                              ~(byte)iVar67)))))));
    }
    *(ulong *)(param_3 + 0xe) = uVar25;
    *(undefined8 *)(param_3 + 0xc) = uVar35;
    puVar30[3] = *(undefined8 *)(param_3 + 0xe);
    puVar30[2] = *(undefined8 *)(param_3 + 0xc);
    fVar33 = param_3[0x1c];
  }
  if (fVar33 == 2.8026e-45) {
    puVar31[3] = puVar30[3];
    puVar31[2] = puVar30[2];
  }
  if (piVar28[3] == 1) {
    fVar33 = (float)piVar28[4];
    fVar34 = (float)piVar28[5];
  }
  else if (piVar28[3] == 0) {
    fVar34 = (float)(int)param_3[0x1c];
    fVar33 = (float)piVar28[4];
  }
  else {
    fVar34 = 1.0;
    fVar33 = (float)piVar28[4];
  }
  if (fVar33 != 0.0) {
    FUN_00336f00(uVar22,param_3,piVar28);
    return;
  }
  fVar33 = param_3[0x1c];
  if ((int)fVar33 < 3) {
    param_3[0x1e] = 0.0;
    return;
  }
  puVar30 = *(undefined8 **)(param_3 + 0x16);
  uVar25 = 0;
  puVar26 = (undefined4 *)
            (*(long *)(lVar29 + 0x30) +
             (*(long *)(lVar29 + 0x38) * (ulong)*(uint *)(lVar29 + 0x5c) +
              (long)*(int *)(lVar29 + 0x48) * (long)(int)param_3[0x1d] * 0x30 & 0xfffffffffffffffc)
            + 0x18);
  do {
    iVar56 = (int)uVar25;
    uVar25 = uVar25 + 1;
    puVar30 = (undefined8 *)puVar30[6];
    uVar57 = *(undefined4 *)(puVar30 + 3);
    uVar69 = *(undefined4 *)(puVar30 + 5);
    uVar22 = puVar30[2];
    uVar35 = *puVar30;
    uVar83 = puVar30[1];
    uVar27 = puVar30[4];
    puVar26[5] = 0;
    *(undefined8 *)(puVar26 + -6) = uVar35;
    *(undefined8 *)(puVar26 + -4) = uVar83;
    *(undefined8 *)(puVar26 + -2) = uVar22;
    *(undefined8 *)(puVar26 + 2) = uVar27;
    puVar26[4] = uVar69;
    *puVar26 = uVar57;
    puVar26[1] = (1.0 / (fVar34 + -1.0)) * (float)iVar56;
    puVar26 = puVar26 + 0xc;
  } while ((uint)fVar33 != uVar25);
  param_3[0x1e] = (float)((int)fVar33 << 1);
  return;
}

