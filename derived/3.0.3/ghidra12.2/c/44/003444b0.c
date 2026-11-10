
void FUN_003444b0(undefined8 param_1,long param_2)

{
  bool bVar1;
  undefined1 (*pauVar2) [16];
  undefined1 (*pauVar3) [12];
  undefined4 *puVar4;
  undefined4 *puVar5;
  uint *puVar6;
  undefined4 *puVar7;
  undefined4 *puVar8;
  uint *puVar9;
  float *pfVar10;
  float *pfVar11;
  float *pfVar12;
  int iVar13;
  int iVar14;
  uint uVar15;
  char cVar16;
  int iVar17;
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  bool bVar21;
  ulong uVar22;
  undefined8 uVar23;
  undefined8 *puVar24;
  int *piVar25;
  long lVar26;
  undefined8 *puVar27;
  long lVar28;
  undefined8 *puVar29;
  long lVar30;
  long lVar31;
  long lVar32;
  int *piVar33;
  long lVar34;
  int iVar35;
  int iVar36;
  long lVar37;
  int iVar38;
  int iVar39;
  float fVar40;
  float fVar41;
  undefined4 uVar42;
  float fVar43;
  float fVar44;
  undefined4 uVar45;
  float fVar46;
  float fVar47;
  uint uVar48;
  float fVar49;
  undefined4 uVar50;
  float fVar51;
  float fVar52;
  uint uVar53;
  float fVar54;
  uint uVar55;
  ulong uVar56;
  undefined8 uVar57;
  undefined1 auVar58 [12];
  undefined1 auVar59 [12];
  undefined1 auVar60 [12];
  undefined1 auVar61 [12];
  undefined1 auVar62 [12];
  undefined1 auVar63 [12];
  undefined1 auVar64 [12];
  undefined1 auVar65 [12];
  undefined1 auVar66 [12];
  undefined1 auVar67 [16];
  undefined1 auVar68 [16];
  undefined1 auVar69 [16];
  undefined1 auVar70 [16];
  undefined1 auVar71 [16];
  undefined1 auVar72 [16];
  undefined1 auVar73 [16];
  undefined1 auVar74 [16];
  undefined1 auVar75 [16];
  undefined1 auVar76 [16];
  undefined1 auVar77 [16];
  undefined1 auVar78 [16];
  undefined1 auVar79 [12];
  undefined1 auVar80 [12];
  undefined1 auVar81 [16];
  undefined1 auVar82 [16];
  float fVar86;
  undefined1 auVar83 [16];
  undefined1 auVar84 [16];
  undefined1 auVar85 [16];
  undefined8 uVar87;
  undefined8 uVar88;
  ulong uVar89;
  ulong uVar90;
  undefined1 auVar92 [12];
  float fVar91;
  float fVar94;
  undefined1 in_q5 [16];
  float fVar95;
  undefined1 auVar93 [16];
  float fVar96;
  float fVar101;
  undefined1 auVar97 [12];
  undefined1 auVar98 [16];
  undefined1 auVar99 [16];
  float fVar102;
  float fVar103;
  undefined1 auVar100 [16];
  float fVar104;
  float fVar105;
  float fVar106;
  float fVar107;
  float fVar108;
  float fVar109;
  undefined8 uVar110;
  ulong uVar111;
  undefined1 auVar112 [16];
  undefined4 local_140;
  undefined4 uStack_13c;
  undefined4 uStack_138;
  undefined8 local_130;
  undefined8 uStack_128;
  undefined8 local_120;
  undefined8 uStack_118;
  undefined8 local_110;
  undefined8 uStack_108;
  undefined8 local_100;
  undefined8 uStack_f8;
  undefined8 local_f0;
  undefined8 uStack_e8;
  int local_d4;
  long local_d0;
  int local_c4;
  undefined8 local_c0;
  undefined8 uStack_b8;
  undefined8 local_b0;
  undefined8 uStack_a8;
  
  lVar34 = *(long *)(param_2 + 0x4a8);
  piVar25 = *(int **)(*(long *)(param_2 + 0x240) + 0x348);
  piVar33 = (int *)(lVar34 + 0x24);
  *piVar33 = 0;
  uVar22 = FUN_0031ed2c(param_2 + 0x838);
  if ((uVar22 & 1) == 0) {
    return;
  }
  local_c4 = 0;
  local_d0 = 0;
  uVar23 = FUN_0031e3e8(param_2);
  FUN_0033e7e0(*(undefined4 *)(param_2 + 0x44),uVar23,&local_d0,&local_c4,param_2,1);
  if (local_c4 == 0) {
    return;
  }
  puVar24 = (undefined8 *)FUN_0031ed64(param_2 + 0x838,*(undefined4 *)(lVar34 + 0x28));
  iVar39 = local_c4;
  local_d4 = 0;
  iVar14 = piVar25[4];
  uVar15 = piVar25[5];
  iVar13 = local_c4;
  if (uVar15 - 1 < 2) {
    iVar13 = local_c4 + 1;
  }
  bVar21 = iVar14 != 0;
  if ((((iVar14 != 0) || (iVar13 < 2)) || (uVar15 == 1 && local_c4 < 2)) &&
     ((iVar14 < 1 || (local_c4 < 3)))) goto LAB_00345fb0;
  uVar55 = local_c4 - 1;
  fVar40 = (float)(iVar14 + 1);
  fVar43 = 0.0;
  fVar49 = 0.0;
  iVar13 = iVar13 + (iVar13 + -1) * iVar14;
  local_100 = 0;
  uStack_f8 = 0;
  local_120 = 0;
  uStack_118 = 0;
  fVar109 = 1.0 / fVar40;
  local_130 = 0;
  uStack_128 = 0;
  if (uVar15 == 1) {
    iVar38 = *(int *)(param_2 + 0x28);
    iVar36 = *(int *)(local_d0 + 4);
    lVar34 = *(long *)(param_2 + 0x1d0);
    iVar35 = *(int *)(local_d0 + (long)(int)uVar55 * 8 + 4);
    lVar26 = (long)iVar35;
    if ((iVar35 <= iVar38) && (lVar34 != 0)) {
      puVar27 = (undefined8 *)(lVar34 + lVar26 * 0x10);
      uVar23 = *puVar27;
      fVar40 = (float)uVar23;
      fVar43 = (float)((ulong)uVar23 >> 0x20);
      fVar49 = *(float *)(puVar27 + 1);
    }
    lVar32 = *(long *)(param_2 + 0x210);
    lVar31 = *(long *)(param_2 + 0x218);
    lVar30 = *(long *)(param_2 + 0x220);
    iVar17 = *(int *)(local_d0 + 0xc);
    lVar37 = (long)iVar17;
    lVar28 = lVar26 * 0x10;
    puVar4 = (undefined4 *)(lVar32 + lVar28);
    puVar5 = (undefined4 *)(lVar31 + lVar28);
    puVar6 = (uint *)(lVar30 + lVar28);
    cVar16 = *(char *)(*(long *)(param_2 + 0xa0) + 0x793);
    if (cVar16 == '\x02') {
      auVar112 = *(undefined1 (*) [16])(param_2 + 0x400);
      auVar93 = NEON_ext(auVar112,auVar112,8,1);
      uVar23 = CONCAT44(*puVar5,*puVar4);
      uVar22 = (ulong)*puVar6;
      in_q5._8_8_ = auVar93._8_8_;
      in_q5._0_4_ = auVar93._0_4_;
      in_q5._4_4_ = 0;
      fVar47 = (float)puVar4[1];
      uVar57 = CONCAT44(puVar5[2],puVar4[2]);
      fVar44 = (float)puVar5[1];
      auVar67._0_8_ = auVar112._0_8_;
      auVar67._8_4_ = in_q5._0_4_;
      auVar67._12_4_ = 0;
      uVar89 = (ulong)puVar6[2];
      fVar46 = (float)puVar6[1];
      fVar108 = 0.0;
    }
    else if (cVar16 == '\0') {
      uVar22 = *(ulong *)(param_2 + 0x3d8);
      uVar23 = *(undefined8 *)(param_2 + 0x3d0);
      fVar47 = *(float *)(param_2 + 0x3e0);
      fVar44 = *(float *)(param_2 + 0x3e4);
      fVar46 = *(float *)(param_2 + 1000);
      fVar108 = *(float *)(param_2 + 0x3ec);
      uVar89 = *(ulong *)(param_2 + 0x3f8);
      uVar57 = *(undefined8 *)(param_2 + 0x3f0);
      auVar67 = *(undefined1 (*) [16])(param_2 + 0x400);
    }
    else {
      uVar23 = CONCAT44(*puVar5,*puVar4);
      uVar22 = (ulong)*puVar6;
      auVar67._0_4_ = puVar4[3];
      fVar47 = (float)puVar4[1];
      uVar57 = CONCAT44(puVar5[2],puVar4[2]);
      fVar44 = (float)puVar5[1];
      uVar89 = (ulong)puVar6[2];
      auVar67._4_4_ = puVar5[3];
      fVar46 = (float)puVar6[1];
      fVar108 = 0.0;
      auVar67._8_4_ = puVar6[3];
      auVar67._12_4_ = 0;
    }
    fVar41 = auVar67._0_4_ + (float)uVar23 * fVar40 + fVar47 * fVar43 + (float)uVar57 * fVar49;
    fVar44 = auVar67._4_4_ +
             (float)((ulong)uVar23 >> 0x20) * fVar40 + fVar44 * fVar43 +
             (float)((ulong)uVar57 >> 0x20) * fVar49;
    fVar47 = auVar67._8_4_ + (float)uVar22 * fVar40 + fVar46 * fVar43 + (float)uVar89 * fVar49;
    uStack_e8 = CONCAT44(auVar67._12_4_ +
                         (float)(uVar22 >> 0x20) * fVar40 + fVar108 * fVar43 +
                         (float)(uVar89 >> 0x20) * fVar49,fVar47);
    local_f0 = CONCAT44(fVar44,fVar41);
    if ((iVar36 <= iVar38) && (lVar34 != 0)) {
      puVar27 = (undefined8 *)(lVar34 + (long)iVar36 * 0x10);
      uVar23 = *puVar27;
      fVar41 = (float)uVar23;
      fVar44 = (float)((ulong)uVar23 >> 0x20);
      fVar47 = *(float *)(puVar27 + 1);
    }
    lVar34 = (long)iVar36 * 0x10;
    puVar7 = (undefined4 *)(lVar32 + lVar34);
    puVar8 = (undefined4 *)(lVar31 + lVar34);
    puVar9 = (uint *)(lVar30 + lVar34);
    if (cVar16 == '\x02') {
      auVar112 = *(undefined1 (*) [16])(param_2 + 0x400);
      auVar93 = NEON_ext(auVar112,auVar112,8,1);
      uVar23 = CONCAT44(*puVar8,*puVar7);
      uVar48 = *puVar9;
      in_q5._8_8_ = auVar93._8_8_;
      in_q5._0_4_ = auVar93._0_4_;
      in_q5._4_4_ = 0;
      uVar57 = CONCAT44(puVar8[2],puVar7[2]);
      fVar49 = (float)puVar7[1];
      fVar40 = (float)puVar8[1];
      auVar58._8_4_ = in_q5._0_4_;
      auVar58._0_8_ = auVar112._0_8_;
LAB_00344844:
      auVar68._12_4_ = 0;
      auVar68._0_12_ = auVar58;
      uVar22 = (ulong)uVar48;
      uVar89 = (ulong)puVar9[2];
      fVar43 = (float)puVar9[1];
      fVar46 = 0.0;
    }
    else {
      if (cVar16 != '\0') {
        uVar23 = CONCAT44(*puVar8,*puVar7);
        uVar48 = *puVar9;
        auVar58._0_4_ = puVar7[3];
        fVar49 = (float)puVar7[1];
        uVar57 = CONCAT44(puVar8[2],puVar7[2]);
        auVar58._4_4_ = puVar8[3];
        fVar40 = (float)puVar8[1];
        auVar58._8_4_ = puVar9[3];
        goto LAB_00344844;
      }
      uVar22 = *(ulong *)(param_2 + 0x3d8);
      uVar23 = *(undefined8 *)(param_2 + 0x3d0);
      fVar49 = *(float *)(param_2 + 0x3e0);
      fVar40 = *(float *)(param_2 + 0x3e4);
      fVar43 = *(float *)(param_2 + 1000);
      fVar46 = *(float *)(param_2 + 0x3ec);
      uVar89 = *(ulong *)(param_2 + 0x3f8);
      uVar57 = *(undefined8 *)(param_2 + 0x3f0);
      auVar68 = *(undefined1 (*) [16])(param_2 + 0x400);
    }
    local_110._0_4_ =
         auVar68._0_4_ + (float)uVar23 * fVar41 + fVar49 * fVar44 + (float)uVar57 * fVar47;
    local_110._4_4_ =
         auVar68._4_4_ +
         (float)((ulong)uVar23 >> 0x20) * fVar41 + fVar40 * fVar44 +
         (float)((ulong)uVar57 >> 0x20) * fVar47;
    uStack_108._0_4_ =
         auVar68._8_4_ + (float)uVar22 * fVar41 + fVar43 * fVar44 + (float)uVar89 * fVar47;
    uStack_108._4_4_ =
         auVar68._12_4_ +
         (float)(uVar22 >> 0x20) * fVar41 + fVar46 * fVar44 + (float)(uVar89 >> 0x20) * fVar47;
    if (*piVar25 - 1U < 2) {
      if (cVar16 == '\0') {
        uVar48 = (uint)*(undefined8 *)(param_2 + 1000);
        uVar50 = (undefined4)((ulong)*(undefined8 *)(param_2 + 1000) >> 0x20);
        uVar42 = (undefined4)*(undefined8 *)(param_2 + 0x3e0);
        uVar45 = (undefined4)((ulong)*(undefined8 *)(param_2 + 0x3e0) >> 0x20);
      }
      else {
        bVar1 = iVar35 <= iVar38;
        puVar7 = (undefined4 *)0x0;
        if (lVar32 != 0 && bVar1) {
          puVar7 = puVar4;
        }
        uVar42 = puVar7[1];
        uVar50 = 0;
        puVar4 = (undefined4 *)0x0;
        if (lVar31 != 0 && bVar1) {
          puVar4 = puVar5;
        }
        uVar45 = puVar4[1];
        puVar9 = (uint *)0x0;
        if (lVar30 != 0 && bVar1) {
          puVar9 = puVar6;
        }
        uVar48 = puVar9[1];
      }
    }
    else {
      uVar42 = 0;
      uVar45 = 0;
      uVar48 = 0;
      uVar50 = 0;
    }
    auVar98._12_4_ = uVar50;
    auVar98._8_4_ = uVar48;
    auVar98._4_4_ = uVar45;
    auVar98._0_4_ = uVar42;
    lVar34 = *(long *)(param_2 + 0xb0) + lVar26 * 0x20;
    puVar27 = (undefined8 *)(*(long *)(param_2 + 0x1f0) + lVar28);
    uStack_a8 = puVar27[1];
    local_b0 = *puVar27;
    auVar112 = *(undefined1 (*) [16])(*(long *)(param_2 + 0x1e8) + lVar28);
    uStack_b8 = auVar112._8_8_;
    local_c0 = auVar112._0_8_;
    FUN_0032e7f8(*(undefined4 *)(lVar34 + 0xc),*(float *)(param_2 + 0x44) - *(float *)(lVar34 + 8),
                 *(undefined8 *)(param_2 + 0x98),&local_130,*(undefined8 *)(param_2 + 0x240),
                 &local_c0,&local_b0);
    fVar40 = (float)FUN_0031e264(param_2);
    fVar47 = (float)local_130 * fVar40;
    fVar46 = (float)((ulong)local_130 >> 0x20) * fVar40;
    fVar49 = (float)uStack_128 * fVar40;
    lVar34 = *(long *)(param_2 + 0x78);
    lVar26 = *(long *)(param_2 + 0x1d0);
    bVar1 = iVar17 <= *(int *)(param_2 + 0x28);
    fVar43 = fVar47 * *(float *)(lVar34 + 0x150);
    uStack_128 = CONCAT44((float)((ulong)uStack_128 >> 0x20) * fVar40 * *(float *)(lVar34 + 0x15c),
                          fVar49 * *(float *)(lVar34 + 0x158));
    local_130 = CONCAT44(fVar46 * *(float *)(lVar34 + 0x154),fVar43);
    fVar40 = (float)local_f0;
    fVar44 = (float)((ulong)local_f0 >> 0x20);
    fVar108 = (float)uStack_e8;
    fVar41 = (float)((ulong)uStack_e8 >> 0x20);
    if (iVar14 == 0) {
      if (bVar1 && lVar26 != 0) {
        puVar27 = (undefined8 *)(lVar26 + lVar37 * 0x10);
        uVar23 = *puVar27;
        fVar47 = (float)uVar23;
        fVar46 = (float)((ulong)uVar23 >> 0x20);
        fVar49 = *(float *)(puVar27 + 1);
      }
      lVar37 = lVar37 * 0x10;
      puVar4 = (undefined4 *)(*(long *)(param_2 + 0x210) + lVar37);
      puVar5 = (undefined4 *)(*(long *)(param_2 + 0x218) + lVar37);
      puVar6 = (uint *)(*(long *)(param_2 + 0x220) + lVar37);
      cVar16 = *(char *)(*(long *)(param_2 + 0xa0) + 0x793);
      if (cVar16 == '\x02') {
        auVar112 = *(undefined1 (*) [16])(param_2 + 0x400);
        auVar93 = NEON_ext(auVar112,auVar112,8,1);
        uVar23 = CONCAT44(*puVar5,*puVar4);
        uVar48 = *puVar6;
        in_q5._8_8_ = auVar93._8_8_;
        in_q5._0_4_ = auVar93._0_4_;
        in_q5._4_4_ = 0;
        uVar57 = CONCAT44(puVar5[2],puVar4[2]);
        fVar51 = (float)puVar4[1];
        fVar52 = (float)puVar5[1];
        auVar60._8_4_ = in_q5._0_4_;
        auVar60._0_8_ = auVar112._0_8_;
LAB_00344c50:
        auVar70._12_4_ = 0;
        auVar70._0_12_ = auVar60;
        uVar22 = (ulong)uVar48;
        uVar89 = (ulong)puVar6[2];
        fVar54 = (float)puVar6[1];
        fVar86 = 0.0;
      }
      else {
        if (cVar16 != '\0') {
          uVar23 = CONCAT44(*puVar5,*puVar4);
          uVar48 = *puVar6;
          auVar60._0_4_ = puVar4[3];
          fVar51 = (float)puVar4[1];
          uVar57 = CONCAT44(puVar5[2],puVar4[2]);
          auVar60._4_4_ = puVar5[3];
          fVar52 = (float)puVar5[1];
          auVar60._8_4_ = puVar6[3];
          goto LAB_00344c50;
        }
        uVar22 = *(ulong *)(param_2 + 0x3d8);
        uVar23 = *(undefined8 *)(param_2 + 0x3d0);
        fVar51 = *(float *)(param_2 + 0x3e0);
        fVar52 = *(float *)(param_2 + 0x3e4);
        fVar54 = *(float *)(param_2 + 1000);
        fVar86 = *(float *)(param_2 + 0x3ec);
        uVar89 = *(ulong *)(param_2 + 0x3f8);
        uVar57 = *(undefined8 *)(param_2 + 0x3f0);
        auVar70 = *(undefined1 (*) [16])(param_2 + 0x400);
      }
      auVar82._0_8_ = CONCAT44(local_110._4_4_ - fVar44,(float)local_110 - fVar40);
      auVar82._8_4_ = (float)uStack_108 - fVar108;
      auVar82._12_4_ = uStack_108._4_4_ - fVar41;
      local_120 = CONCAT44((auVar70._4_4_ +
                           (float)((ulong)uVar23 >> 0x20) * fVar47 + fVar52 * fVar46 +
                           (float)((ulong)uVar57 >> 0x20) * fVar49) - local_110._4_4_,
                           (auVar70._0_4_ +
                           (float)uVar23 * fVar47 + fVar51 * fVar46 + (float)uVar57 * fVar49) -
                           (float)local_110);
      uStack_118 = CONCAT44((auVar70._12_4_ +
                            (float)(uVar22 >> 0x20) * fVar47 + fVar86 * fVar46 +
                            (float)(uVar89 >> 0x20) * fVar49) - uStack_108._4_4_,
                            (auVar70._8_4_ +
                            (float)uVar22 * fVar47 + fVar54 * fVar46 + (float)uVar89 * fVar49) -
                            (float)uStack_108);
      uStack_f8 = auVar82._8_8_;
      local_100 = auVar82._0_8_;
    }
    else {
      if (bVar1 && lVar26 != 0) {
        puVar27 = (undefined8 *)(lVar26 + lVar37 * 0x10);
        uVar23 = *puVar27;
        fVar47 = (float)uVar23;
        fVar46 = (float)((ulong)uVar23 >> 0x20);
        fVar49 = *(float *)(puVar27 + 1);
      }
      lVar37 = lVar37 * 0x10;
      puVar4 = (undefined4 *)(*(long *)(param_2 + 0x210) + lVar37);
      puVar5 = (undefined4 *)(*(long *)(param_2 + 0x218) + lVar37);
      puVar6 = (uint *)(*(long *)(param_2 + 0x220) + lVar37);
      cVar16 = *(char *)(*(long *)(param_2 + 0xa0) + 0x793);
      if (cVar16 == '\x02') {
        auVar112 = *(undefined1 (*) [16])(param_2 + 0x400);
        auVar93 = NEON_ext(auVar112,auVar112,8,1);
        uVar23 = CONCAT44(*puVar5,*puVar4);
        uVar48 = *puVar6;
        in_q5._8_8_ = auVar93._8_8_;
        in_q5._0_4_ = auVar93._0_4_;
        in_q5._4_4_ = 0;
        uVar87 = CONCAT44(puVar5[2],puVar4[2]);
        uVar57 = CONCAT44(puVar5[1],puVar4[1]);
        auVar59._8_4_ = in_q5._0_4_;
        auVar59._0_8_ = auVar112._0_8_;
LAB_00344a30:
        auVar69._12_4_ = 0;
        auVar69._0_12_ = auVar59;
        uVar22 = (ulong)uVar48;
        uVar89 = (ulong)puVar6[2];
        auVar81._8_4_ = puVar6[1];
        auVar81._0_8_ = uVar57;
        auVar81._12_4_ = 0;
      }
      else {
        if (cVar16 != '\0') {
          uVar23 = CONCAT44(*puVar5,*puVar4);
          uVar48 = *puVar6;
          auVar59._0_4_ = puVar4[3];
          uVar87 = CONCAT44(puVar5[2],puVar4[2]);
          auVar59._4_4_ = puVar5[3];
          uVar57 = CONCAT44(puVar5[1],puVar4[1]);
          auVar59._8_4_ = puVar6[3];
          goto LAB_00344a30;
        }
        uVar22 = *(ulong *)(param_2 + 0x3d8);
        uVar23 = *(undefined8 *)(param_2 + 0x3d0);
        auVar81 = *(undefined1 (*) [16])(param_2 + 0x3e0);
        uVar89 = *(ulong *)(param_2 + 0x3f8);
        uVar87 = *(undefined8 *)(param_2 + 0x3f0);
        auVar69 = *(undefined1 (*) [16])(param_2 + 0x400);
      }
      uStack_f8 = CONCAT44(uStack_108._4_4_ - fVar41,(float)uStack_108 - fVar108);
      local_100 = CONCAT44(local_110._4_4_ - fVar44,(float)local_110 - fVar40);
      local_120 = CONCAT44(((auVar69._4_4_ +
                            (float)((ulong)uVar23 >> 0x20) * fVar47 + auVar81._4_4_ * fVar46 +
                            (float)((ulong)uVar87 >> 0x20) * fVar49) - fVar44) * 0.5,
                           ((auVar69._0_4_ +
                            (float)uVar23 * fVar47 + auVar81._0_4_ * fVar46 + (float)uVar87 * fVar49
                            ) - fVar40) * 0.5);
      uStack_118 = CONCAT44(((auVar69._12_4_ +
                             (float)(uVar22 >> 0x20) * fVar47 + auVar81._12_4_ * fVar46 +
                             (float)(uVar89 >> 0x20) * fVar49) - fVar41) * 0.5,
                            ((auVar69._8_4_ +
                             (float)uVar22 * fVar47 + auVar81._8_4_ * fVar46 +
                             (float)uVar89 * fVar49) - fVar108) * 0.5);
    }
    auVar97 = auVar98._0_12_;
    *puVar24 = local_f0;
    *(float *)(puVar24 + 1) = fVar108;
    *(float *)(puVar24 + 0xb) = fVar108;
    puVar24[10] = local_f0;
    puVar24[2] = local_100;
    uVar42 = (undefined4)uStack_f8;
    *(undefined4 *)(puVar24 + 3) = uVar42;
LAB_00344e98:
    *(undefined4 *)(puVar24 + 0xd) = uVar42;
    puVar24[0xc] = local_100;
    uVar42 = auVar97._8_4_;
    *(undefined4 *)(puVar24 + 5) = uVar42;
    *(undefined4 *)(puVar24 + 0xf) = uVar42;
    uVar23 = auVar97._0_8_;
    puVar24[4] = uVar23;
    fVar40 = 0.0 / (float)(iVar13 + -1);
    puVar24[0xe] = uVar23;
    *(float *)((long)puVar24 + 0xc) = -fVar43;
    *(float *)((long)puVar24 + 0x5c) = fVar43;
    *(undefined4 *)((long)puVar24 + 0x2c) = 0;
    *(undefined4 *)((long)puVar24 + 0x7c) = 0;
    local_d4 = 1;
    *(float *)((long)puVar24 + 0x1c) = fVar40;
    *(float *)((long)puVar24 + 0x6c) = fVar40;
    *piVar33 = *piVar33 + 2;
    if ((iVar14 != 0) && (uVar15 - 1 < 2)) {
      iVar36 = 2;
      iVar38 = 0;
      do {
        iVar35 = iVar38;
        iVar38 = iVar35 + 1;
        fVar40 = (float)iVar38;
        fVar49 = fVar109 * fVar40;
        fVar47 = 1.0 - fVar49;
        uVar57 = CONCAT44(local_100._4_4_ * fVar47 + local_120._4_4_ * fVar49,
                          (float)local_100 * fVar47 + (float)local_120 * fVar49);
        fVar49 = (float)uStack_f8 * fVar47 + (float)uStack_118 * fVar49;
        FUN_0032c610(&local_b0,&local_f0,&local_100,&local_110,&local_120);
        puVar29 = puVar24 + (long)iVar36 * 10;
        puVar27 = puVar24 + (long)(iVar36 + 1) * 10;
        iVar36 = iVar36 + 2;
        *puVar29 = local_b0;
        *(int *)(puVar29 + 1) = (int)uStack_a8;
        puVar29[4] = uVar23;
        puVar27[4] = uVar23;
        *(float *)((long)puVar29 + 0xc) = -fVar43;
        *(float *)((long)puVar27 + 0xc) = fVar43;
        *(undefined4 *)(puVar29 + 5) = uVar42;
        *(float *)((long)puVar29 + 0x2c) = fVar40;
        *(undefined4 *)(puVar27 + 5) = uVar42;
        *(float *)((long)puVar27 + 0x2c) = fVar40;
        *puVar27 = local_b0;
        *(int *)(puVar27 + 1) = (int)uStack_a8;
        *(float *)(puVar29 + 3) = fVar49;
        puVar29[2] = uVar57;
        puVar27[2] = uVar57;
        *(float *)(puVar27 + 3) = fVar49;
        fVar40 = fVar40 / (float)(iVar13 + -1);
        *(float *)((long)puVar29 + 0x1c) = fVar40;
        *(float *)((long)puVar27 + 0x1c) = fVar40;
        *piVar33 = *piVar33 + 2;
      } while (iVar14 != iVar38);
      local_d4 = iVar35 + 2;
      bVar21 = true;
    }
  }
  else if (uVar15 == 2) {
    iVar38 = *(int *)(local_d0 + 4);
    lVar34 = (long)iVar38;
    if ((iVar38 <= *(int *)(param_2 + 0x28)) && (*(long *)(param_2 + 0x1d0) != 0)) {
      puVar27 = (undefined8 *)(*(long *)(param_2 + 0x1d0) + lVar34 * 0x10);
      uVar23 = *puVar27;
      fVar40 = (float)uVar23;
      fVar43 = (float)((ulong)uVar23 >> 0x20);
      fVar49 = *(float *)(puVar27 + 1);
    }
    auVar97 = SUB1612(ZEXT816(0),0);
    iVar36 = *(int *)(local_d0 + 0xc);
    lVar26 = lVar34 * 0x10;
    puVar4 = (undefined4 *)(*(long *)(param_2 + 0x210) + lVar26);
    puVar5 = (undefined4 *)(*(long *)(param_2 + 0x218) + lVar26);
    puVar6 = (uint *)(*(long *)(param_2 + 0x220) + lVar26);
    cVar16 = *(char *)(*(long *)(param_2 + 0xa0) + 0x793);
    if (cVar16 == '\x02') {
      auVar112 = *(undefined1 (*) [16])(param_2 + 0x400);
      auVar93 = NEON_ext(auVar112,auVar112,8,1);
      uVar23 = CONCAT44(*puVar5,*puVar4);
      uVar22 = (ulong)*puVar6;
      in_q5._8_8_ = auVar93._8_8_;
      in_q5._0_4_ = auVar93._0_4_;
      in_q5._4_4_ = 0;
      fVar47 = (float)puVar4[1];
      uVar57 = CONCAT44(puVar5[2],puVar4[2]);
      fVar44 = (float)puVar5[1];
      auVar112._8_4_ = in_q5._0_4_;
      auVar112._12_4_ = 0;
      uVar89 = (ulong)puVar6[2];
      fVar46 = (float)puVar6[1];
      fVar108 = 0.0;
    }
    else if (cVar16 == '\0') {
      uVar22 = *(ulong *)(param_2 + 0x3d8);
      uVar23 = *(undefined8 *)(param_2 + 0x3d0);
      fVar47 = *(float *)(param_2 + 0x3e0);
      fVar44 = *(float *)(param_2 + 0x3e4);
      fVar46 = *(float *)(param_2 + 1000);
      fVar108 = *(float *)(param_2 + 0x3ec);
      uVar89 = *(ulong *)(param_2 + 0x3f8);
      uVar57 = *(undefined8 *)(param_2 + 0x3f0);
      auVar112 = *(undefined1 (*) [16])(param_2 + 0x400);
    }
    else {
      uVar23 = CONCAT44(*puVar5,*puVar4);
      uVar22 = (ulong)*puVar6;
      auVar112._0_4_ = puVar4[3];
      fVar47 = (float)puVar4[1];
      uVar57 = CONCAT44(puVar5[2],puVar4[2]);
      fVar44 = (float)puVar5[1];
      uVar89 = (ulong)puVar6[2];
      auVar112._4_4_ = puVar5[3];
      fVar46 = (float)puVar6[1];
      fVar108 = 0.0;
      auVar112._8_4_ = puVar6[3];
      auVar112._12_4_ = 0;
    }
    local_110._0_4_ =
         auVar112._0_4_ + (float)uVar23 * fVar40 + fVar47 * fVar43 + (float)uVar57 * fVar49;
    local_110._4_4_ =
         auVar112._4_4_ +
         (float)((ulong)uVar23 >> 0x20) * fVar40 + fVar44 * fVar43 +
         (float)((ulong)uVar57 >> 0x20) * fVar49;
    uStack_108._0_4_ =
         auVar112._8_4_ + (float)uVar22 * fVar40 + fVar46 * fVar43 + (float)uVar89 * fVar49;
    uStack_108._4_4_ =
         auVar112._12_4_ +
         (float)(uVar22 >> 0x20) * fVar40 + fVar108 * fVar43 + (float)(uVar89 >> 0x20) * fVar49;
    if (*piVar25 - 1U < 2) {
      if (cVar16 == '\0') {
        auVar97 = SUB1612(*(undefined1 (*) [16])(param_2 + 0x3e0),0);
      }
      else {
        bVar1 = iVar38 <= *(int *)(param_2 + 0x28);
        puVar7 = (undefined4 *)0x0;
        if (*(long *)(param_2 + 0x210) != 0 && bVar1) {
          puVar7 = puVar4;
        }
        auVar97._0_4_ = puVar7[1];
        puVar4 = (undefined4 *)0x0;
        if (*(long *)(param_2 + 0x218) != 0 && bVar1) {
          puVar4 = puVar5;
        }
        auVar97._4_4_ = puVar4[1];
        puVar9 = (uint *)0x0;
        if (*(long *)(param_2 + 0x220) != 0 && bVar1) {
          puVar9 = puVar6;
        }
        auVar97._8_4_ = puVar9[1];
      }
    }
    lVar34 = *(long *)(param_2 + 0xb0) + lVar34 * 0x20;
    puVar27 = (undefined8 *)(*(long *)(param_2 + 0x1f0) + lVar26);
    uStack_a8 = puVar27[1];
    local_b0 = *puVar27;
    auVar112 = *(undefined1 (*) [16])(*(long *)(param_2 + 0x1e8) + lVar26);
    uStack_b8 = auVar112._8_8_;
    local_c0 = auVar112._0_8_;
    FUN_0032e7f8(*(undefined4 *)(lVar34 + 0xc),*(float *)(param_2 + 0x44) - *(float *)(lVar34 + 8),
                 *(undefined8 *)(param_2 + 0x98),&local_130,*(undefined8 *)(param_2 + 0x240),
                 &local_c0,&local_b0);
    fVar49 = (float)FUN_0031e264(param_2);
    uVar22 = *(ulong *)(*(long *)(param_2 + 0x78) + 0x158);
    uVar23 = *(undefined8 *)(*(long *)(param_2 + 0x78) + 0x150);
    fVar43 = (float)local_130 * fVar49 * (float)uVar23;
    uStack_128 = CONCAT44((float)((ulong)uStack_128 >> 0x20) * fVar49 * (float)(uVar22 >> 0x20),
                          (float)uStack_128 * fVar49 * (float)uVar22);
    local_130 = CONCAT44((float)((ulong)local_130 >> 0x20) * fVar49 * (float)((ulong)uVar23 >> 0x20)
                         ,fVar43);
    if (iVar14 == 0) {
      uStack_e8 = *(undefined8 *)(param_2 + 0x408);
      fVar47 = (float)uStack_e8;
      local_f0 = *(undefined8 *)(param_2 + 0x400);
      fVar49 = (float)local_f0;
      fVar40 = (float)((ulong)local_f0 >> 0x20);
      local_100 = CONCAT44(local_110._4_4_ - fVar40,(float)local_110 - fVar49);
      uStack_f8 = CONCAT44(uStack_108._4_4_ - (float)((ulong)uStack_e8 >> 0x20),
                           (float)uStack_108 - fVar47);
    }
    else {
      pauVar2 = (undefined1 (*) [16])(param_2 + 0x400);
      uStack_e8 = *(undefined8 *)(param_2 + 0x408);
      fVar47 = (float)uStack_e8;
      fVar44 = (float)((ulong)uStack_e8 >> 0x20);
      local_f0 = *(undefined8 *)*pauVar2;
      in_q5 = *pauVar2;
      fVar49 = (float)local_f0;
      fVar40 = (float)((ulong)local_f0 >> 0x20);
      if ((iVar36 <= *(int *)(param_2 + 0x28)) && (*(long *)(param_2 + 0x1d0) != 0)) {
        puVar27 = (undefined8 *)(*(long *)(param_2 + 0x1d0) + (long)iVar36 * 0x10);
        uVar23 = *puVar27;
        uVar22 = (ulong)*(uint *)(puVar27 + 1);
      }
      lVar34 = (long)iVar36 * 0x10;
      pfVar12 = (float *)(*(long *)(param_2 + 0x210) + lVar34);
      pfVar10 = (float *)(*(long *)(param_2 + 0x218) + lVar34);
      pfVar11 = (float *)(*(long *)(param_2 + 0x220) + lVar34);
      cVar16 = *(char *)(*(long *)(param_2 + 0xa0) + 0x793);
      if (cVar16 == '\x02') {
        auVar93._12_4_ = fVar44;
        auVar93._0_12_ = *(undefined1 (*) [12])*pauVar2;
        auVar18._12_4_ = fVar44;
        auVar18._0_12_ = *(undefined1 (*) [12])*pauVar2;
        auVar112 = NEON_ext(auVar93,auVar18,8,1);
        fVar46 = *pfVar12;
        fVar108 = *pfVar10;
        fVar41 = *pfVar11;
        uVar57 = CONCAT44(pfVar10[2],pfVar12[2]);
        fVar51 = pfVar12[1];
        auVar92._8_4_ = (float)auVar112._0_4_;
        auVar92._0_8_ = *(undefined8 *)*pauVar2;
        fVar52 = pfVar10[1];
LAB_00344e24:
        in_q5._12_4_ = 0;
        in_q5._0_12_ = auVar92;
        fVar54 = 0.0;
        uVar89 = (ulong)(uint)pfVar11[2];
        fVar86 = pfVar11[1];
        fVar96 = 0.0;
      }
      else {
        if (cVar16 != '\0') {
          fVar46 = *pfVar12;
          fVar108 = *pfVar10;
          fVar41 = *pfVar11;
          auVar92._0_4_ = pfVar12[3];
          fVar51 = pfVar12[1];
          uVar57 = CONCAT44(pfVar10[2],pfVar12[2]);
          auVar92._4_4_ = pfVar10[3];
          fVar52 = pfVar10[1];
          auVar92._8_4_ = pfVar11[3];
          goto LAB_00344e24;
        }
        fVar46 = *(float *)(param_2 + 0x3d0);
        fVar108 = *(float *)(param_2 + 0x3d4);
        fVar41 = *(float *)(param_2 + 0x3d8);
        fVar54 = *(float *)(param_2 + 0x3dc);
        fVar51 = *(float *)(param_2 + 0x3e0);
        fVar52 = *(float *)(param_2 + 0x3e4);
        fVar86 = *(float *)(param_2 + 1000);
        fVar96 = *(float *)(param_2 + 0x3ec);
        uVar89 = *(ulong *)(param_2 + 0x3f8);
        uVar57 = *(undefined8 *)(param_2 + 0x3f0);
      }
      fVar101 = (float)uVar23;
      fVar102 = (float)((ulong)uVar23 >> 0x20);
      fVar104 = (float)uVar22;
      fVar46 = in_q5._0_4_ + fVar46 * fVar101 + fVar51 * fVar102 + (float)uVar57 * fVar104;
      fVar108 = in_q5._4_4_ +
                fVar108 * fVar101 + fVar52 * fVar102 + (float)((ulong)uVar57 >> 0x20) * fVar104;
      fVar41 = in_q5._8_4_ + fVar41 * fVar101 + fVar86 * fVar102 + (float)uVar89 * fVar104;
      fVar51 = in_q5._12_4_ +
               fVar54 * fVar101 + fVar96 * fVar102 + (float)(uVar89 >> 0x20) * fVar104;
      auVar112 = NEON_fmov(0x3e800000,4);
      uStack_f8 = CONCAT44(((uStack_108._4_4_ - fVar44) + (uStack_108._4_4_ - fVar51)) *
                           auVar112._12_4_,
                           (((float)uStack_108 - fVar47) + ((float)uStack_108 - fVar41)) *
                           auVar112._8_4_);
      local_100 = CONCAT44(((local_110._4_4_ - fVar40) + (local_110._4_4_ - fVar108)) *
                           auVar112._4_4_,
                           (((float)local_110 - fVar49) + ((float)local_110 - fVar46)) *
                           auVar112._0_4_);
      local_120 = CONCAT44((fVar108 - fVar40) * 0.5,(fVar46 - fVar49) * 0.5);
      uStack_118 = CONCAT44((fVar51 - fVar44) * 0.5,(fVar41 - fVar47) * 0.5);
    }
    *puVar24 = CONCAT44(fVar40,fVar49);
    *(float *)(puVar24 + 1) = fVar47;
    puVar24[10] = local_f0;
    *(int *)(puVar24 + 0xb) = (int)uStack_e8;
    puVar24[2] = local_100;
    uVar42 = (undefined4)uStack_f8;
    *(undefined4 *)(puVar24 + 3) = uVar42;
    goto LAB_00344e98;
  }
  uVar48 = iVar39 - 2;
  local_f0 = 0;
  uStack_e8 = 0;
  local_100 = 0;
  uStack_f8 = 0;
  local_110 = 0;
  uStack_108 = 0;
  local_120 = 0;
  uStack_118 = 0;
  local_130 = 0;
  uStack_128 = 0;
  if (1 < iVar39) {
    auVar99 = ZEXT816(0);
    uVar22 = 0;
    do {
      iVar36 = local_d4;
      fVar49 = 0.0;
      fVar43 = 0.0;
      lVar34 = *(long *)(param_2 + 0x1d0);
      iVar38 = *(int *)(local_d0 + uVar22 * 8 + 4);
      lVar26 = (long)iVar38;
      iVar39 = *(int *)(param_2 + 0x28);
      if (iVar38 <= iVar39 && lVar34 != 0) {
        puVar27 = (undefined8 *)(lVar34 + lVar26 * 0x10);
        uVar23 = *puVar27;
        fVar40 = (float)uVar23;
        fVar43 = (float)((ulong)uVar23 >> 0x20);
        fVar49 = *(float *)(puVar27 + 1);
      }
      uVar89 = uVar22 + 1;
      lVar31 = lVar26 * 0x10;
      lVar30 = *(long *)(param_2 + 0x210);
      lVar37 = *(long *)(param_2 + 0x218);
      puVar4 = (undefined4 *)(lVar30 + lVar31);
      lVar28 = *(long *)(param_2 + 0x220);
      cVar16 = *(char *)(*(long *)(param_2 + 0xa0) + 0x793);
      puVar5 = (undefined4 *)(lVar37 + lVar31);
      iVar35 = *(int *)(local_d0 + uVar89 * 8 + 4);
      lVar32 = (long)iVar35;
      puVar6 = (uint *)(lVar28 + lVar31);
      if (cVar16 == '\x02') {
        auVar112 = *(undefined1 (*) [16])(param_2 + 0x400);
        auVar93 = NEON_ext(auVar112,auVar112,8,1);
        uVar23 = CONCAT44(*puVar5,*puVar4);
        uVar56 = (ulong)*puVar6;
        in_q5._8_8_ = auVar93._8_8_;
        in_q5._0_4_ = auVar93._0_4_;
        in_q5._4_4_ = 0;
        fVar47 = (float)puVar4[1];
        uVar57 = CONCAT44(puVar5[2],puVar4[2]);
        fVar44 = (float)puVar5[1];
        auVar71._0_8_ = auVar112._0_8_;
        auVar71._8_4_ = in_q5._0_4_;
        auVar71._12_4_ = 0;
        uVar90 = (ulong)puVar6[2];
        fVar46 = (float)puVar6[1];
        fVar108 = 0.0;
      }
      else if (cVar16 == '\0') {
        uVar56 = *(ulong *)(param_2 + 0x3d8);
        uVar23 = *(undefined8 *)(param_2 + 0x3d0);
        fVar47 = *(float *)(param_2 + 0x3e0);
        fVar44 = *(float *)(param_2 + 0x3e4);
        fVar46 = *(float *)(param_2 + 1000);
        fVar108 = *(float *)(param_2 + 0x3ec);
        uVar90 = *(ulong *)(param_2 + 0x3f8);
        uVar57 = *(undefined8 *)(param_2 + 0x3f0);
        auVar71 = *(undefined1 (*) [16])(param_2 + 0x400);
      }
      else {
        uVar23 = CONCAT44(*puVar5,*puVar4);
        uVar56 = (ulong)*puVar6;
        auVar71._0_4_ = puVar4[3];
        fVar47 = (float)puVar4[1];
        uVar57 = CONCAT44(puVar5[2],puVar4[2]);
        fVar44 = (float)puVar5[1];
        uVar90 = (ulong)puVar6[2];
        auVar71._4_4_ = puVar5[3];
        fVar46 = (float)puVar6[1];
        fVar108 = 0.0;
        auVar71._8_4_ = puVar6[3];
        auVar71._12_4_ = 0;
      }
      fVar41 = auVar71._0_4_ + (float)uVar23 * fVar40 + fVar47 * fVar43 + (float)uVar57 * fVar49;
      fVar44 = auVar71._4_4_ +
               (float)((ulong)uVar23 >> 0x20) * fVar40 + fVar44 * fVar43 +
               (float)((ulong)uVar57 >> 0x20) * fVar49;
      fVar47 = auVar71._8_4_ + (float)uVar56 * fVar40 + fVar46 * fVar43 + (float)uVar90 * fVar49;
      uStack_e8 = CONCAT44(auVar71._12_4_ +
                           (float)(uVar56 >> 0x20) * fVar40 + fVar108 * fVar43 +
                           (float)(uVar90 >> 0x20) * fVar49,fVar47);
      local_f0 = CONCAT44(fVar44,fVar41);
      if ((iVar35 <= iVar39) && (lVar34 != 0)) {
        puVar27 = (undefined8 *)(lVar34 + lVar32 * 0x10);
        uVar23 = *puVar27;
        fVar41 = (float)uVar23;
        fVar44 = (float)((ulong)uVar23 >> 0x20);
        fVar47 = *(float *)(puVar27 + 1);
      }
      lVar34 = lVar32 * 0x10;
      puVar7 = (undefined4 *)(lVar30 + lVar34);
      puVar8 = (undefined4 *)(lVar37 + lVar34);
      puVar9 = (uint *)(lVar28 + lVar34);
      if (cVar16 == '\x02') {
        auVar112 = *(undefined1 (*) [16])(param_2 + 0x400);
        auVar93 = NEON_ext(auVar112,auVar112,8,1);
        uVar23 = CONCAT44(*puVar8,*puVar7);
        uVar53 = *puVar9;
        in_q5._8_8_ = auVar93._8_8_;
        in_q5._0_4_ = auVar93._0_4_;
        in_q5._4_4_ = 0;
        uVar57 = CONCAT44(puVar8[2],puVar7[2]);
        fVar49 = (float)puVar7[1];
        fVar40 = (float)puVar8[1];
        auVar61._8_4_ = in_q5._0_4_;
        auVar61._0_8_ = auVar112._0_8_;
LAB_0034524c:
        auVar72._12_4_ = 0;
        auVar72._0_12_ = auVar61;
        uVar56 = (ulong)uVar53;
        uVar90 = (ulong)puVar9[2];
        fVar43 = (float)puVar9[1];
        fVar46 = 0.0;
      }
      else {
        if (cVar16 != '\0') {
          uVar23 = CONCAT44(*puVar8,*puVar7);
          uVar53 = *puVar9;
          auVar61._0_4_ = puVar7[3];
          fVar49 = (float)puVar7[1];
          uVar57 = CONCAT44(puVar8[2],puVar7[2]);
          auVar61._4_4_ = puVar8[3];
          fVar40 = (float)puVar8[1];
          auVar61._8_4_ = puVar9[3];
          goto LAB_0034524c;
        }
        uVar56 = *(ulong *)(param_2 + 0x3d8);
        uVar23 = *(undefined8 *)(param_2 + 0x3d0);
        fVar49 = *(float *)(param_2 + 0x3e0);
        fVar40 = *(float *)(param_2 + 0x3e4);
        fVar43 = *(float *)(param_2 + 1000);
        fVar46 = *(float *)(param_2 + 0x3ec);
        uVar90 = *(ulong *)(param_2 + 0x3f8);
        uVar57 = *(undefined8 *)(param_2 + 0x3f0);
        auVar72 = *(undefined1 (*) [16])(param_2 + 0x400);
      }
      uStack_108 = CONCAT44(auVar72._12_4_ +
                            (float)(uVar56 >> 0x20) * fVar41 + fVar46 * fVar44 +
                            (float)(uVar90 >> 0x20) * fVar47,
                            auVar72._8_4_ +
                            (float)uVar56 * fVar41 + fVar43 * fVar44 + (float)uVar90 * fVar47);
      local_110 = CONCAT44(auVar72._4_4_ +
                           (float)((ulong)uVar23 >> 0x20) * fVar41 + fVar40 * fVar44 +
                           (float)((ulong)uVar57 >> 0x20) * fVar47,
                           auVar72._0_4_ +
                           (float)uVar23 * fVar41 + fVar49 * fVar44 + (float)uVar57 * fVar47);
      if (*piVar25 - 1U < 2) {
        if (cVar16 == '\0') {
          auVar99 = *(undefined1 (*) [16])(param_2 + 0x3e0);
        }
        else {
          bVar1 = iVar38 <= iVar39;
          puVar7 = (undefined4 *)0x0;
          if (lVar30 != 0 && bVar1) {
            puVar7 = puVar4;
          }
          auVar99._0_4_ = puVar7[1];
          puVar4 = (undefined4 *)0x0;
          if (lVar37 != 0 && bVar1) {
            puVar4 = puVar5;
          }
          auVar99._4_4_ = puVar4[1];
          puVar9 = (uint *)0x0;
          if (lVar28 != 0 && bVar1) {
            puVar9 = puVar6;
          }
          auVar99._8_4_ = puVar9[1];
          auVar99._12_4_ = 0;
        }
      }
      lVar28 = *(long *)(param_2 + 0xb0) + lVar26 * 0x20;
      puVar27 = (undefined8 *)(*(long *)(param_2 + 0x1f0) + lVar31);
      uStack_a8 = puVar27[1];
      local_b0 = *puVar27;
      uVar87 = auVar99._0_8_;
      auVar112 = *(undefined1 (*) [16])(*(long *)(param_2 + 0x1e8) + lVar31);
      uStack_b8 = auVar112._8_8_;
      local_c0 = auVar112._0_8_;
      FUN_0032e7f8(*(undefined4 *)(lVar28 + 0xc),*(float *)(param_2 + 0x44) - *(float *)(lVar28 + 8)
                   ,*(undefined8 *)(param_2 + 0x98),&local_130,*(undefined8 *)(param_2 + 0x240),
                   &local_c0,&local_b0);
      fVar40 = (float)FUN_0031e264(param_2);
      fVar43 = (float)local_130 * fVar40;
      fVar47 = (float)((ulong)local_130 >> 0x20) * fVar40;
      fVar49 = (float)uStack_128 * fVar40;
      uVar57 = *(undefined8 *)(*(long *)(param_2 + 0x78) + 0x158);
      uVar23 = *(undefined8 *)(*(long *)(param_2 + 0x78) + 0x150);
      fVar44 = fVar43 * (float)uVar23;
      local_130 = CONCAT44(fVar47 * (float)((ulong)uVar23 >> 0x20),fVar44);
      uStack_128 = CONCAT44((float)((ulong)uStack_128 >> 0x20) * fVar40 *
                            (float)((ulong)uVar57 >> 0x20),fVar49 * (float)uVar57);
      if (bVar21) {
        fVar51 = (float)local_f0;
        fVar46 = (float)((ulong)local_f0 >> 0x20);
        fVar108 = (float)uStack_e8;
        fVar40 = (float)((ulong)uStack_e8 >> 0x20);
        if (uVar22 == 0) {
          iVar39 = *(int *)(local_d0 + 0x14);
          if ((iVar39 <= *(int *)(param_2 + 0x28)) && (*(long *)(param_2 + 0x1d0) != 0)) {
            puVar27 = (undefined8 *)(*(long *)(param_2 + 0x1d0) + (long)iVar39 * 0x10);
            uVar23 = *puVar27;
            fVar43 = (float)uVar23;
            fVar47 = (float)((ulong)uVar23 >> 0x20);
            fVar49 = *(float *)(puVar27 + 1);
          }
          lVar34 = (long)iVar39 * 0x10;
          puVar4 = (undefined4 *)(*(long *)(param_2 + 0x210) + lVar34);
          puVar5 = (undefined4 *)(*(long *)(param_2 + 0x218) + lVar34);
          puVar6 = (uint *)(*(long *)(param_2 + 0x220) + lVar34);
          cVar16 = *(char *)(*(long *)(param_2 + 0xa0) + 0x793);
          if (cVar16 == '\x02') {
            auVar112 = *(undefined1 (*) [16])(param_2 + 0x400);
            auVar93 = NEON_ext(auVar112,auVar112,8,1);
            uVar23 = CONCAT44(*puVar5,*puVar4);
            uVar53 = *puVar6;
            in_q5._8_8_ = auVar93._8_8_;
            in_q5._0_4_ = auVar93._0_4_;
            in_q5._4_4_ = 0;
            uVar88 = CONCAT44(puVar5[2],puVar4[2]);
            uVar57 = CONCAT44(puVar5[1],puVar4[1]);
            auVar63._8_4_ = in_q5._0_4_;
            auVar63._0_8_ = auVar112._0_8_;
LAB_0034573c:
            auVar74._12_4_ = 0;
            auVar74._0_12_ = auVar63;
            uVar22 = (ulong)uVar53;
            uVar56 = (ulong)puVar6[2];
            auVar84._8_4_ = puVar6[1];
            auVar84._0_8_ = uVar57;
            auVar84._12_4_ = 0;
          }
          else {
            if (cVar16 != '\0') {
              uVar23 = CONCAT44(*puVar5,*puVar4);
              uVar53 = *puVar6;
              auVar63._0_4_ = puVar4[3];
              uVar88 = CONCAT44(puVar5[2],puVar4[2]);
              auVar63._4_4_ = puVar5[3];
              uVar57 = CONCAT44(puVar5[1],puVar4[1]);
              auVar63._8_4_ = puVar6[3];
              goto LAB_0034573c;
            }
            uVar22 = *(ulong *)(param_2 + 0x3d8);
            uVar23 = *(undefined8 *)(param_2 + 0x3d0);
            auVar84 = *(undefined1 (*) [16])(param_2 + 0x3e0);
            uVar56 = *(ulong *)(param_2 + 0x3f8);
            uVar88 = *(undefined8 *)(param_2 + 0x3f0);
            auVar74 = *(undefined1 (*) [16])(param_2 + 0x400);
          }
          fVar41 = (auVar74._0_4_ +
                   (float)uVar23 * fVar43 + auVar84._0_4_ * fVar47 + (float)uVar88 * fVar49) -
                   fVar51;
          fVar52 = (auVar74._4_4_ +
                   (float)((ulong)uVar23 >> 0x20) * fVar43 + auVar84._4_4_ * fVar47 +
                   (float)((ulong)uVar88 >> 0x20) * fVar49) - fVar46;
          fVar54 = (auVar74._8_4_ +
                   (float)uVar22 * fVar43 + auVar84._8_4_ * fVar47 + (float)uVar56 * fVar49) -
                   fVar108;
          fVar49 = (auVar74._12_4_ +
                   (float)(uVar22 >> 0x20) * fVar43 + auVar84._12_4_ * fVar47 +
                   (float)(uVar56 >> 0x20) * fVar49) - fVar40;
          uStack_f8 = CONCAT44(uStack_108._4_4_ - fVar40,(float)uStack_108 - fVar108);
          local_100 = CONCAT44(local_110._4_4_ - fVar46,(float)local_110 - fVar51);
          auVar76._8_4_ = 0x3f000000;
          auVar76._0_8_ = 0x3f0000003f000000;
          auVar76._12_4_ = 0x3f000000;
LAB_0034582c:
          local_120 = CONCAT44(fVar52 * auVar76._4_4_,fVar41 * auVar76._0_4_);
          uStack_118 = CONCAT44(fVar49 * auVar76._12_4_,fVar54 * auVar76._8_4_);
        }
        else {
          if (uVar22 == uVar48) {
            iVar39 = *(int *)(local_d0 + ((ulong)uVar48 - 1) * 8 + 4);
            if ((iVar39 <= *(int *)(param_2 + 0x28)) && (*(long *)(param_2 + 0x1d0) != 0)) {
              puVar27 = (undefined8 *)(*(long *)(param_2 + 0x1d0) + (long)iVar39 * 0x10);
              uVar23 = *puVar27;
              fVar43 = (float)uVar23;
              fVar47 = (float)((ulong)uVar23 >> 0x20);
              fVar49 = *(float *)(puVar27 + 1);
            }
            lVar34 = (long)iVar39 * 0x10;
            puVar4 = (undefined4 *)(*(long *)(param_2 + 0x210) + lVar34);
            puVar5 = (undefined4 *)(*(long *)(param_2 + 0x218) + lVar34);
            puVar6 = (uint *)(*(long *)(param_2 + 0x220) + lVar34);
            cVar16 = *(char *)(*(long *)(param_2 + 0xa0) + 0x793);
            if (cVar16 == '\x02') {
              auVar112 = *(undefined1 (*) [16])(param_2 + 0x400);
              auVar93 = NEON_ext(auVar112,auVar112,8,1);
              uVar23 = CONCAT44(*puVar5,*puVar4);
              uVar53 = *puVar6;
              in_q5._8_8_ = auVar93._8_8_;
              in_q5._0_4_ = auVar93._0_4_;
              in_q5._4_4_ = 0;
              uVar57 = CONCAT44(puVar5[2],puVar4[2]);
              fVar41 = (float)puVar4[1];
              fVar52 = (float)puVar5[1];
              auVar64._8_4_ = in_q5._0_4_;
              auVar64._0_8_ = auVar112._0_8_;
LAB_003457ec:
              auVar75._12_4_ = 0;
              auVar75._0_12_ = auVar64;
              uVar22 = (ulong)uVar53;
              uVar56 = (ulong)puVar6[2];
              fVar54 = (float)puVar6[1];
              fVar86 = 0.0;
            }
            else {
              if (cVar16 != '\0') {
                uVar23 = CONCAT44(*puVar5,*puVar4);
                uVar53 = *puVar6;
                auVar64._0_4_ = puVar4[3];
                fVar41 = (float)puVar4[1];
                uVar57 = CONCAT44(puVar5[2],puVar4[2]);
                auVar64._4_4_ = puVar5[3];
                fVar52 = (float)puVar5[1];
                auVar64._8_4_ = puVar6[3];
                goto LAB_003457ec;
              }
              uVar22 = *(ulong *)(param_2 + 0x3d8);
              uVar23 = *(undefined8 *)(param_2 + 0x3d0);
              fVar41 = *(float *)(param_2 + 0x3e0);
              fVar52 = *(float *)(param_2 + 0x3e4);
              fVar54 = *(float *)(param_2 + 1000);
              fVar86 = *(float *)(param_2 + 0x3ec);
              uVar56 = *(ulong *)(param_2 + 0x3f8);
              uVar57 = *(undefined8 *)(param_2 + 0x3f0);
              auVar75 = *(undefined1 (*) [16])(param_2 + 0x400);
            }
            fVar41 = auVar75._0_4_ +
                     (float)uVar23 * fVar43 + fVar41 * fVar47 + (float)uVar57 * fVar49;
            fVar52 = auVar75._4_4_ +
                     (float)((ulong)uVar23 >> 0x20) * fVar43 + fVar52 * fVar47 +
                     (float)((ulong)uVar57 >> 0x20) * fVar49;
            fVar54 = auVar75._8_4_ +
                     (float)uVar22 * fVar43 + fVar54 * fVar47 + (float)uVar56 * fVar49;
            fVar49 = auVar75._12_4_ +
                     (float)(uVar22 >> 0x20) * fVar43 + fVar86 * fVar47 +
                     (float)(uVar56 >> 0x20) * fVar49;
            uStack_f8 = CONCAT44((uStack_108._4_4_ - fVar49) * 0.5,
                                 ((float)uStack_108 - fVar54) * 0.5);
            local_100 = CONCAT44((local_110._4_4_ - fVar52) * 0.5,((float)local_110 - fVar41) * 0.5)
            ;
            fVar41 = (fVar51 - (float)local_110) + (fVar51 - fVar41);
            fVar52 = (fVar46 - local_110._4_4_) + (fVar46 - fVar52);
            fVar54 = (fVar108 - (float)uStack_108) + (fVar108 - fVar54);
            fVar49 = (fVar40 - uStack_108._4_4_) + (fVar40 - fVar49);
            auVar76 = NEON_fmov(0xbe800000,4);
            goto LAB_0034582c;
          }
          iVar39 = *(int *)(local_d0 + uVar22 * 8 + -4);
          lVar34 = *(long *)(param_2 + 0x1d0);
          if ((iVar39 <= *(int *)(param_2 + 0x28)) && (lVar34 != 0)) {
            puVar27 = (undefined8 *)(lVar34 + (long)iVar39 * 0x10);
            uVar23 = *puVar27;
            fVar43 = (float)uVar23;
            fVar47 = (float)((ulong)uVar23 >> 0x20);
            fVar49 = *(float *)(puVar27 + 1);
          }
          lVar26 = (long)iVar39 * 0x10;
          puVar4 = (undefined4 *)(*(long *)(param_2 + 0x218) + lVar26);
          puVar6 = (uint *)(*(long *)(param_2 + 0x220) + lVar26);
          iVar39 = *(int *)(local_d0 + (ulong)((int)uVar22 + 2) * 8 + 4);
          puVar5 = (undefined4 *)(*(long *)(param_2 + 0x210) + lVar26);
          cVar16 = *(char *)(*(long *)(param_2 + 0xa0) + 0x793);
          if (cVar16 == '\x02') {
            auVar112 = *(undefined1 (*) [16])(param_2 + 0x400);
            auVar93 = NEON_ext(auVar112,auVar112,8,1);
            uVar23 = CONCAT44(*puVar4,*puVar5);
            uVar22 = (ulong)*puVar6;
            in_q5._8_8_ = auVar93._8_8_;
            in_q5._0_4_ = auVar93._0_4_;
            in_q5._4_4_ = 0;
            uVar57 = CONCAT44(puVar4[2],puVar5[2]);
            fVar41 = (float)puVar5[1];
            fVar52 = (float)puVar4[1];
            auVar77._0_8_ = auVar112._0_8_;
            auVar77._8_4_ = in_q5._0_4_;
            auVar77._12_4_ = 0;
            uVar56 = (ulong)puVar6[2];
            fVar54 = (float)puVar6[1];
            fVar86 = 0.0;
          }
          else if (cVar16 == '\0') {
            uVar22 = *(ulong *)(param_2 + 0x3d8);
            uVar23 = *(undefined8 *)(param_2 + 0x3d0);
            fVar41 = *(float *)(param_2 + 0x3e0);
            fVar52 = *(float *)(param_2 + 0x3e4);
            fVar54 = *(float *)(param_2 + 1000);
            fVar86 = *(float *)(param_2 + 0x3ec);
            uVar56 = *(ulong *)(param_2 + 0x3f8);
            uVar57 = *(undefined8 *)(param_2 + 0x3f0);
            auVar77 = *(undefined1 (*) [16])(param_2 + 0x400);
          }
          else {
            uVar23 = CONCAT44(*puVar4,*puVar5);
            uVar22 = (ulong)*puVar6;
            auVar77._0_4_ = puVar5[3];
            fVar41 = (float)puVar5[1];
            uVar57 = CONCAT44(puVar4[2],puVar5[2]);
            auVar77._4_4_ = puVar4[3];
            fVar52 = (float)puVar4[1];
            auVar77._8_4_ = puVar6[3];
            auVar77._12_4_ = 0;
            uVar56 = (ulong)puVar6[2];
            fVar54 = (float)puVar6[1];
            fVar86 = 0.0;
          }
          if ((iVar39 <= *(int *)(param_2 + 0x28)) && (lVar34 != 0)) {
            in_q5._12_4_ = 0;
            in_q5._0_12_ = *(undefined1 (*) [12])(lVar34 + (long)iVar39 * 0x10);
          }
          lVar34 = (long)iVar39 * 0x10;
          pfVar12 = (float *)(*(long *)(param_2 + 0x210) + lVar34);
          pfVar10 = (float *)(*(long *)(param_2 + 0x218) + lVar34);
          pfVar11 = (float *)(*(long *)(param_2 + 0x220) + lVar34);
          if (cVar16 == '\x02') {
            pauVar3 = (undefined1 (*) [12])(param_2 + 0x400);
            uVar42 = (undefined4)((ulong)*(undefined8 *)(param_2 + 0x408) >> 0x20);
            fVar104 = (float)*(undefined8 *)*pauVar3;
            fVar105 = (float)((ulong)*(undefined8 *)*pauVar3 >> 0x20);
            auVar19._12_4_ = uVar42;
            auVar19._0_12_ = *pauVar3;
            auVar20._12_4_ = uVar42;
            auVar20._0_12_ = *pauVar3;
            auVar112 = NEON_ext(auVar19,auVar20,8,1);
            fVar96 = *pfVar12;
            fVar101 = *pfVar10;
            fVar102 = *pfVar11;
            fVar106 = auVar112._0_4_;
            uVar110 = CONCAT44(pfVar10[2],pfVar12[2]);
            uVar88 = CONCAT44(pfVar10[1],pfVar12[1]);
LAB_0034598c:
            fVar107 = 0.0;
            fVar103 = 0.0;
            uVar111 = (ulong)(uint)pfVar11[2];
            uVar90 = (ulong)(uint)pfVar11[1];
          }
          else {
            if (cVar16 != '\0') {
              fVar96 = *pfVar12;
              fVar101 = *pfVar10;
              fVar102 = *pfVar11;
              fVar104 = pfVar12[3];
              uVar110 = CONCAT44(pfVar10[2],pfVar12[2]);
              fVar105 = pfVar10[3];
              uVar88 = CONCAT44(pfVar10[1],pfVar12[1]);
              fVar106 = pfVar11[3];
              goto LAB_0034598c;
            }
            fVar96 = *(float *)(param_2 + 0x3d0);
            fVar101 = *(float *)(param_2 + 0x3d4);
            fVar102 = *(float *)(param_2 + 0x3d8);
            fVar103 = *(float *)(param_2 + 0x3dc);
            uVar90 = *(ulong *)(param_2 + 1000);
            uVar88 = *(undefined8 *)(param_2 + 0x3e0);
            uVar111 = *(ulong *)(param_2 + 0x3f8);
            uVar110 = *(undefined8 *)(param_2 + 0x3f0);
            fVar106 = (float)*(undefined8 *)(param_2 + 0x408);
            fVar107 = (float)((ulong)*(undefined8 *)(param_2 + 0x408) >> 0x20);
            fVar104 = (float)*(undefined8 *)(param_2 + 0x400);
            fVar105 = (float)((ulong)*(undefined8 *)(param_2 + 0x400) >> 0x20);
          }
          fVar91 = in_q5._0_4_;
          fVar94 = in_q5._4_4_;
          fVar95 = in_q5._8_4_;
          local_120 = CONCAT44(((fVar105 +
                                fVar101 * fVar91 + (float)((ulong)uVar88 >> 0x20) * fVar94 +
                                (float)((ulong)uVar110 >> 0x20) * fVar95) - fVar46) * 0.5,
                               ((fVar104 +
                                fVar96 * fVar91 + (float)uVar88 * fVar94 + (float)uVar110 * fVar95)
                               - fVar51) * 0.5);
          uStack_118 = CONCAT44(((fVar107 +
                                 fVar103 * fVar91 + (float)(uVar90 >> 0x20) * fVar94 +
                                 (float)(uVar111 >> 0x20) * fVar95) - fVar40) * 0.5,
                                ((fVar106 +
                                 fVar102 * fVar91 + (float)uVar90 * fVar94 + (float)uVar111 * fVar95
                                 ) - fVar108) * 0.5);
          uStack_f8 = CONCAT44((uStack_108._4_4_ -
                               (auVar77._12_4_ +
                               (float)(uVar22 >> 0x20) * fVar43 + fVar86 * fVar47 +
                               (float)(uVar56 >> 0x20) * fVar49)) * 0.5,
                               ((float)uStack_108 -
                               (auVar77._8_4_ +
                               (float)uVar22 * fVar43 + fVar54 * fVar47 + (float)uVar56 * fVar49)) *
                               0.5);
          local_100 = CONCAT44((local_110._4_4_ -
                               (auVar77._4_4_ +
                               (float)((ulong)uVar23 >> 0x20) * fVar43 + fVar52 * fVar47 +
                               (float)((ulong)uVar57 >> 0x20) * fVar49)) * 0.5,
                               ((float)local_110 -
                               (auVar77._0_4_ +
                               (float)uVar23 * fVar43 + fVar41 * fVar47 + (float)uVar57 * fVar49)) *
                               0.5);
        }
      }
      else {
        lVar28 = *(long *)(param_2 + 0x1d0);
        if ((iVar38 <= *(int *)(param_2 + 0x28)) && (lVar28 != 0)) {
          puVar27 = (undefined8 *)(lVar28 + lVar26 * 0x10);
          uVar23 = *puVar27;
          fVar43 = (float)uVar23;
          fVar47 = (float)((ulong)uVar23 >> 0x20);
          fVar49 = *(float *)(puVar27 + 1);
        }
        puVar4 = (undefined4 *)(*(long *)(param_2 + 0x210) + lVar31);
        cVar16 = *(char *)(*(long *)(param_2 + 0xa0) + 0x793);
        puVar5 = (undefined4 *)(*(long *)(param_2 + 0x218) + lVar31);
        puVar6 = (uint *)(*(long *)(param_2 + 0x220) + lVar31);
        if (cVar16 == '\x02') {
          auVar112 = *(undefined1 (*) [16])(param_2 + 0x400);
          auVar93 = NEON_ext(auVar112,auVar112,8,1);
          uVar23 = CONCAT44(*puVar5,*puVar4);
          uVar53 = *puVar6;
          uVar57 = CONCAT44(puVar5[2],puVar4[2]);
          fVar40 = (float)puVar4[1];
          fVar46 = (float)puVar5[1];
          auVar62._8_4_ = auVar93._0_4_;
          auVar62._0_8_ = auVar112._0_8_;
LAB_00345528:
          auVar73._12_4_ = 0;
          auVar73._0_12_ = auVar62;
          uVar22 = (ulong)uVar53;
          uVar56 = (ulong)puVar6[2];
          fVar108 = (float)puVar6[1];
          fVar41 = 0.0;
        }
        else {
          if (cVar16 != '\0') {
            uVar23 = CONCAT44(*puVar5,*puVar4);
            uVar53 = *puVar6;
            auVar62._0_4_ = puVar4[3];
            fVar40 = (float)puVar4[1];
            uVar57 = CONCAT44(puVar5[2],puVar4[2]);
            auVar62._4_4_ = puVar5[3];
            fVar46 = (float)puVar5[1];
            auVar62._8_4_ = puVar6[3];
            goto LAB_00345528;
          }
          uVar22 = *(ulong *)(param_2 + 0x3d8);
          uVar23 = *(undefined8 *)(param_2 + 0x3d0);
          fVar40 = *(float *)(param_2 + 0x3e0);
          fVar46 = *(float *)(param_2 + 0x3e4);
          fVar108 = *(float *)(param_2 + 1000);
          fVar41 = *(float *)(param_2 + 0x3ec);
          uVar56 = *(ulong *)(param_2 + 0x3f8);
          uVar57 = *(undefined8 *)(param_2 + 0x3f0);
          auVar73 = *(undefined1 (*) [16])(param_2 + 0x400);
        }
        fVar51 = (float)uVar23 * fVar43 + fVar40 * fVar47 + (float)uVar57 * fVar49;
        fVar46 = (float)((ulong)uVar23 >> 0x20) * fVar43 + fVar46 * fVar47 +
                 (float)((ulong)uVar57 >> 0x20) * fVar49;
        uVar23 = CONCAT44(fVar46,fVar51);
        fVar40 = (float)uVar22 * fVar43 + fVar108 * fVar47 + (float)uVar56 * fVar49;
        fVar51 = auVar73._0_4_ + fVar51;
        fVar46 = auVar73._4_4_ + fVar46;
        fVar108 = auVar73._8_4_ + fVar40;
        fVar49 = auVar73._12_4_ +
                 (float)(uVar22 >> 0x20) * fVar43 + fVar41 * fVar47 +
                 (float)(uVar56 >> 0x20) * fVar49;
        uStack_e8 = CONCAT44(fVar49,fVar108);
        local_f0 = CONCAT44(fVar46,fVar51);
        if ((iVar35 <= *(int *)(param_2 + 0x28)) && (lVar28 != 0)) {
          puVar27 = (undefined8 *)(lVar28 + lVar32 * 0x10);
          uVar23 = *puVar27;
          fVar40 = *(float *)(puVar27 + 1);
        }
        pfVar12 = (float *)(*(long *)(param_2 + 0x210) + lVar34);
        pfVar10 = (float *)(*(long *)(param_2 + 0x218) + lVar34);
        pfVar11 = (float *)(*(long *)(param_2 + 0x220) + lVar34);
        if (cVar16 == '\x02') {
          auVar112 = *(undefined1 (*) [16])(param_2 + 0x400);
          auVar93 = NEON_ext(auVar112,auVar112,8,1);
          fVar43 = *pfVar12;
          fVar47 = *pfVar10;
          fVar41 = *pfVar11;
          uVar88 = CONCAT44(pfVar10[2],pfVar12[2]);
          uVar57 = CONCAT44(pfVar10[1],pfVar12[1]);
          auVar79._8_4_ = (float)auVar93._0_4_;
          auVar79._0_8_ = auVar112._0_8_;
LAB_0034560c:
          auVar83._12_4_ = 0;
          auVar83._0_12_ = auVar79;
          fVar52 = 0.0;
          in_q5._8_4_ = pfVar11[2];
          in_q5._0_8_ = uVar88;
          in_q5._12_4_ = 0;
          uVar22 = (ulong)(uint)pfVar11[1];
        }
        else {
          if (cVar16 != '\0') {
            fVar43 = *pfVar12;
            fVar47 = *pfVar10;
            fVar41 = *pfVar11;
            auVar79._0_4_ = pfVar12[3];
            uVar88 = CONCAT44(pfVar10[2],pfVar12[2]);
            auVar79._4_4_ = pfVar10[3];
            uVar57 = CONCAT44(pfVar10[1],pfVar12[1]);
            auVar79._8_4_ = pfVar11[3];
            goto LAB_0034560c;
          }
          fVar43 = *(float *)(param_2 + 0x3d0);
          fVar47 = *(float *)(param_2 + 0x3d4);
          fVar41 = *(float *)(param_2 + 0x3d8);
          fVar52 = *(float *)(param_2 + 0x3dc);
          uVar22 = *(ulong *)(param_2 + 1000);
          uVar57 = *(undefined8 *)(param_2 + 0x3e0);
          in_q5 = *(undefined1 (*) [16])(param_2 + 0x3f0);
          auVar83 = *(undefined1 (*) [16])(param_2 + 0x400);
        }
        fVar54 = (float)uVar23;
        fVar86 = (float)((ulong)uVar23 >> 0x20);
        fVar43 = auVar83._0_4_ + fVar43 * fVar54 + (float)uVar57 * fVar86 + in_q5._0_4_ * fVar40;
        fVar47 = auVar83._4_4_ +
                 fVar47 * fVar54 + (float)((ulong)uVar57 >> 0x20) * fVar86 + in_q5._4_4_ * fVar40;
        local_110 = CONCAT44(fVar47,fVar43);
        fVar41 = auVar83._8_4_ + fVar41 * fVar54 + (float)uVar22 * fVar86 + in_q5._8_4_ * fVar40;
        fVar40 = auVar83._12_4_ +
                 fVar52 * fVar54 + (float)(uVar22 >> 0x20) * fVar86 + in_q5._12_4_ * fVar40;
        uStack_108 = CONCAT44(fVar40,fVar41);
        local_100 = CONCAT44(fVar47 - fVar46,fVar43 - fVar51);
        uStack_f8 = CONCAT44(fVar40 - fVar49,fVar41 - fVar108);
      }
      puVar29 = puVar24 + (long)iVar36 * 0x14;
      puVar27 = puVar24 + (long)(int)(iVar36 * 2 | 1) * 10;
      *puVar29 = CONCAT44(fVar46,fVar51);
      *(float *)(puVar29 + 1) = fVar108;
      *puVar27 = local_f0;
      *(int *)(puVar27 + 1) = (int)uStack_e8;
      puVar29[2] = local_100;
      *(int *)(puVar29 + 3) = (int)uStack_f8;
      *(float *)((long)puVar29 + 0xc) = -fVar44;
      *(float *)((long)puVar27 + 0xc) = fVar44;
      puVar27[2] = local_100;
      *(int *)(puVar27 + 3) = (int)uStack_f8;
      fVar40 = (float)iVar36;
      puVar29[4] = uVar87;
      puVar27[4] = uVar87;
      iVar39 = iVar36 + 1;
      uVar42 = auVar99._8_4_;
      *(undefined4 *)(puVar29 + 5) = uVar42;
      *(undefined4 *)(puVar27 + 5) = uVar42;
      fVar49 = fVar40 / (float)(iVar13 + -1);
      *(float *)((long)puVar29 + 0x1c) = fVar49;
      *(float *)((long)puVar27 + 0x1c) = fVar49;
      *(float *)((long)puVar29 + 0x2c) = fVar40;
      *(float *)((long)puVar27 + 0x2c) = fVar40;
      *piVar33 = *piVar33 + 2;
      local_d4 = iVar39;
      if (bVar21) {
        if (0 < iVar14) {
          iVar38 = 0;
          uVar53 = iVar36 * 2;
          do {
            iVar36 = iVar38 + 1;
            fVar49 = fVar109 * (float)iVar36;
            fVar40 = 1.0 - fVar49;
            fVar43 = (float)local_100 * fVar40 + (float)local_120 * fVar49;
            fVar47 = local_100._4_4_ * fVar40 + local_120._4_4_ * fVar49;
            fVar49 = (float)uStack_f8 * fVar40 + (float)uStack_118 * fVar49;
            FUN_0032c610(&local_b0,&local_f0,&local_100,&local_110,&local_120);
            puVar29 = puVar24 + (long)(int)(uVar53 + 2) * 10;
            fVar40 = (float)(iVar39 + iVar38);
            puVar27 = puVar24 + (long)(int)(uVar53 + 3) * 10;
            *(int *)(puVar29 + 1) = (int)uStack_a8;
            *puVar29 = local_b0;
            *(float *)(puVar27 + 3) = fVar49;
            *(float *)(puVar29 + 2) = fVar43;
            *(float *)((long)puVar29 + 0x14) = fVar47;
            *(float *)(puVar29 + 3) = fVar49;
            *(float *)(puVar27 + 2) = fVar43;
            *(float *)((long)puVar27 + 0x14) = fVar47;
            puVar29[4] = uVar87;
            puVar27[4] = uVar87;
            *(float *)((long)puVar29 + 0xc) = -fVar44;
            *(float *)((long)puVar27 + 0xc) = fVar44;
            *puVar27 = local_b0;
            *(int *)(puVar27 + 1) = (int)uStack_a8;
            fVar49 = fVar40 / (float)(iVar13 + -1);
            *(undefined4 *)(puVar29 + 5) = uVar42;
            *(float *)((long)puVar29 + 0x2c) = fVar40;
            *(undefined4 *)(puVar27 + 5) = uVar42;
            *(float *)((long)puVar27 + 0x2c) = fVar40;
            *(float *)((long)puVar29 + 0x1c) = fVar49;
            *(float *)((long)puVar27 + 0x1c) = fVar49;
            *piVar33 = *piVar33 + 2;
            iVar38 = iVar36;
            uVar53 = uVar53 + 2;
          } while (iVar14 != iVar36);
          iVar39 = iVar39 + iVar36;
        }
        local_d4 = iVar39;
      }
      uVar22 = uVar89;
    } while (uVar89 != uVar55);
  }
  iVar14 = local_d4;
  if (local_c4 < 2) goto LAB_00345fb0;
  local_f0 = 0;
  uStack_e8 = 0;
  local_100 = 0;
  uStack_f8 = 0;
  iVar39 = *(int *)(local_d0 + (long)(int)uVar55 * 8 + 4);
  lVar26 = (long)iVar39;
  lVar34 = lVar26 * 0x10;
  if (*piVar25 - 1U < 2) {
    if (*(char *)(*(long *)(param_2 + 0xa0) + 0x793) == '\0') {
      uStack_138 = (undefined4)*(undefined8 *)(param_2 + 1000);
      uVar42 = (undefined4)((ulong)*(undefined8 *)(param_2 + 1000) >> 0x20);
      local_140 = (undefined4)*(undefined8 *)(param_2 + 0x3e0);
      uStack_13c = (undefined4)((ulong)*(undefined8 *)(param_2 + 0x3e0) >> 0x20);
    }
    else {
      iVar38 = *(int *)(param_2 + 0x28);
      lVar28 = 0;
      if (iVar39 <= iVar38 && *(long *)(param_2 + 0x210) != 0) {
        lVar28 = *(long *)(param_2 + 0x210) + lVar34;
      }
      local_140 = *(undefined4 *)(lVar28 + 4);
      lVar28 = 0;
      if (iVar39 <= iVar38 && *(long *)(param_2 + 0x218) != 0) {
        lVar28 = *(long *)(param_2 + 0x218) + lVar34;
      }
      uStack_13c = *(undefined4 *)(lVar28 + 4);
      lVar28 = 0;
      if (iVar39 <= iVar38 && *(long *)(param_2 + 0x220) != 0) {
        lVar28 = *(long *)(param_2 + 0x220) + lVar34;
      }
      uStack_138 = *(undefined4 *)(lVar28 + 4);
      uVar42 = 0;
    }
    uStack_e8 = CONCAT44(uVar42,uStack_138);
    local_f0 = CONCAT44(uStack_13c,local_140);
  }
  else {
    uStack_138 = 0;
    local_140 = 0;
    uStack_13c = 0;
  }
  lVar28 = *(long *)(param_2 + 0xb0) + lVar26 * 0x20;
  puVar27 = (undefined8 *)(*(long *)(param_2 + 0x1f0) + lVar34);
  uStack_a8 = puVar27[1];
  local_b0 = *puVar27;
  auVar112 = *(undefined1 (*) [16])(*(long *)(param_2 + 0x1e8) + lVar34);
  uStack_b8 = auVar112._8_8_;
  local_c0 = auVar112._0_8_;
  FUN_0032e7f8(*(undefined4 *)(lVar28 + 0xc),*(float *)(param_2 + 0x44) - *(float *)(lVar28 + 8),
               *(undefined8 *)(param_2 + 0x98),&local_100,*(undefined8 *)(param_2 + 0x240),&local_c0
               ,&local_b0);
  fVar40 = (float)FUN_0031e264(param_2);
  fVar43 = (float)local_100 * fVar40;
  fVar109 = (float)((ulong)local_100 >> 0x20) * fVar40;
  fVar49 = (float)uStack_f8 * fVar40;
  uVar57 = *(undefined8 *)(*(long *)(param_2 + 0x78) + 0x158);
  uVar23 = *(undefined8 *)(*(long *)(param_2 + 0x78) + 0x150);
  lVar28 = *(long *)(param_2 + 0x1d0);
  fVar47 = fVar43 * (float)uVar23;
  auVar100._0_8_ = CONCAT44(fVar109 * (float)((ulong)uVar23 >> 0x20),fVar47);
  auVar100._8_4_ = fVar49 * (float)uVar57;
  auVar100._12_4_ = (float)((ulong)uStack_f8 >> 0x20) * fVar40 * (float)((ulong)uVar57 >> 0x20);
  uStack_f8 = auVar100._8_8_;
  if ((iVar39 <= *(int *)(param_2 + 0x28)) && (lVar28 != 0)) {
    puVar27 = (undefined8 *)(lVar28 + lVar26 * 0x10);
    uVar23 = *puVar27;
    fVar43 = (float)uVar23;
    fVar109 = (float)((ulong)uVar23 >> 0x20);
    fVar49 = *(float *)(puVar27 + 1);
  }
  puVar4 = (undefined4 *)(*(long *)(param_2 + 0x210) + lVar34);
  cVar16 = *(char *)(*(long *)(param_2 + 0xa0) + 0x793);
  puVar5 = (undefined4 *)(*(long *)(param_2 + 0x218) + lVar34);
  puVar6 = (uint *)(*(long *)(param_2 + 0x220) + lVar34);
  if (cVar16 == '\x02') {
    auVar112 = *(undefined1 (*) [16])(param_2 + 0x400);
    auVar93 = NEON_ext(auVar112,auVar112,8,1);
    uVar23 = CONCAT44(*puVar5,*puVar4);
    uVar55 = *puVar6;
    uVar87 = CONCAT44(puVar5[2],puVar4[2]);
    uVar57 = CONCAT44(puVar5[1],puVar4[1]);
    auVar65._8_4_ = auVar93._0_4_;
    auVar65._0_8_ = auVar112._0_8_;
LAB_00345d98:
    auVar78._12_4_ = 0;
    auVar78._0_12_ = auVar65;
    uVar22 = (ulong)uVar55;
    uVar89 = (ulong)puVar6[2];
    auVar85._8_4_ = puVar6[1];
    auVar85._0_8_ = uVar57;
    auVar85._12_4_ = 0;
  }
  else {
    if (cVar16 != '\0') {
      uVar23 = CONCAT44(*puVar5,*puVar4);
      uVar55 = *puVar6;
      auVar65._0_4_ = puVar4[3];
      uVar87 = CONCAT44(puVar5[2],puVar4[2]);
      auVar65._4_4_ = puVar5[3];
      uVar57 = CONCAT44(puVar5[1],puVar4[1]);
      auVar65._8_4_ = puVar6[3];
      goto LAB_00345d98;
    }
    uVar22 = *(ulong *)(param_2 + 0x3d8);
    uVar23 = *(undefined8 *)(param_2 + 0x3d0);
    auVar85 = *(undefined1 (*) [16])(param_2 + 0x3e0);
    uVar89 = *(ulong *)(param_2 + 0x3f8);
    uVar87 = *(undefined8 *)(param_2 + 0x3f0);
    auVar78 = *(undefined1 (*) [16])(param_2 + 0x400);
  }
  fVar40 = auVar78._0_4_ + (float)uVar23 * fVar43 + auVar85._0_4_ * fVar109 + (float)uVar87 * fVar49
  ;
  fVar44 = auVar78._4_4_ +
           (float)((ulong)uVar23 >> 0x20) * fVar43 + auVar85._4_4_ * fVar109 +
           (float)((ulong)uVar87 >> 0x20) * fVar49;
  fVar46 = auVar78._8_4_ + (float)uVar22 * fVar43 + auVar85._8_4_ * fVar109 + (float)uVar89 * fVar49
  ;
  fVar108 = auVar78._12_4_ +
            (float)(uVar22 >> 0x20) * fVar43 + auVar85._12_4_ * fVar109 +
            (float)(uVar89 >> 0x20) * fVar49;
  uStack_a8 = CONCAT44(fVar108,fVar46);
  local_b0 = CONCAT44(fVar44,fVar40);
  local_100 = auVar100._0_8_;
  if ((uVar15 | 2) != 2) {
    if (uVar15 == 1) {
      uVar23 = FUN_00345ff0(&local_110,param_2,*(undefined4 *)(local_d0 + 4));
      uStack_b8 = CONCAT44((float)((ulong)uStack_108 >> 0x20) - fVar108,(float)uStack_108 - fVar46);
      local_c0 = CONCAT44((float)((ulong)local_110 >> 0x20) - fVar44,(float)local_110 - fVar40);
      FUN_003443e8(fVar47,uVar23,puVar24,&local_d4,piVar33,iVar13,&local_b0,&local_c0,&local_f0);
    }
    goto LAB_00345fb0;
  }
  iVar39 = *(int *)(local_d0 + (long)(int)uVar48 * 8 + 4);
  if ((iVar39 <= *(int *)(param_2 + 0x28)) && (lVar28 != 0)) {
    puVar27 = (undefined8 *)(lVar28 + (long)iVar39 * 0x10);
    uVar23 = *puVar27;
    fVar43 = (float)uVar23;
    fVar109 = (float)((ulong)uVar23 >> 0x20);
    fVar49 = *(float *)(puVar27 + 1);
  }
  lVar34 = (long)iVar39 * 0x10;
  puVar4 = (undefined4 *)(*(long *)(param_2 + 0x210) + lVar34);
  puVar5 = (undefined4 *)(*(long *)(param_2 + 0x218) + lVar34);
  pfVar12 = (float *)(*(long *)(param_2 + 0x220) + lVar34);
  if (cVar16 == '\x02') {
    auVar112 = *(undefined1 (*) [16])(param_2 + 0x400);
    auVar93 = NEON_ext(auVar112,auVar112,8,1);
    uVar23 = CONCAT44(*puVar5,*puVar4);
    fVar108 = *pfVar12;
    uVar87 = CONCAT44(puVar5[2],puVar4[2]);
    uVar57 = CONCAT44(puVar5[1],puVar4[1]);
    auVar66._8_4_ = (float)auVar93._0_4_;
    auVar66._0_8_ = auVar112._0_8_;
LAB_00345ef0:
    fVar41 = pfVar12[2];
    auVar80._8_4_ = pfVar12[1];
    auVar80._0_8_ = uVar57;
  }
  else {
    if (cVar16 != '\0') {
      uVar23 = CONCAT44(*puVar5,*puVar4);
      fVar108 = *pfVar12;
      auVar66._0_4_ = puVar4[3];
      uVar87 = CONCAT44(puVar5[2],puVar4[2]);
      auVar66._4_4_ = puVar5[3];
      uVar57 = CONCAT44(puVar5[1],puVar4[1]);
      auVar66._8_4_ = pfVar12[3];
      goto LAB_00345ef0;
    }
    fVar108 = (float)*(undefined8 *)(param_2 + 0x3d8);
    uVar23 = *(undefined8 *)(param_2 + 0x3d0);
    auVar80 = SUB1612(*(undefined1 (*) [16])(param_2 + 0x3e0),0);
    fVar41 = (float)*(undefined8 *)(param_2 + 0x3f8);
    uVar87 = *(undefined8 *)(param_2 + 0x3f0);
    auVar66 = SUB1612(*(undefined1 (*) [16])(param_2 + 0x400),0);
  }
  puVar27 = puVar24 + (long)iVar14 * 0x14;
  *puVar27 = CONCAT44(fVar44,fVar40);
  *(float *)(puVar27 + 1) = fVar46;
  puVar24 = puVar24 + (long)(int)(iVar14 << 1 | 1) * 10;
  *puVar24 = CONCAT44(fVar44,fVar40);
  *(float *)(puVar24 + 1) = fVar46;
  fVar40 = fVar40 - (auVar66._0_4_ +
                    (float)uVar23 * fVar43 + auVar80._0_4_ * fVar109 + (float)uVar87 * fVar49);
  fVar44 = fVar44 - (auVar66._4_4_ +
                    (float)((ulong)uVar23 >> 0x20) * fVar43 + auVar80._4_4_ * fVar109 +
                    (float)((ulong)uVar87 >> 0x20) * fVar49);
  fVar46 = fVar46 - (auVar66._8_4_ + fVar108 * fVar43 + auVar80._8_4_ * fVar109 + fVar41 * fVar49);
  *(float *)(puVar27 + 3) = fVar46;
  puVar27[2] = CONCAT44(fVar44,fVar40);
  puVar24[2] = CONCAT44(fVar44,fVar40);
  *(undefined4 *)(puVar27 + 4) = local_140;
  *(undefined4 *)((long)puVar27 + 0x24) = uStack_13c;
  *(undefined4 *)(puVar24 + 4) = local_140;
  *(undefined4 *)((long)puVar24 + 0x24) = uStack_13c;
  *(float *)(puVar24 + 3) = fVar46;
  *(undefined4 *)(puVar27 + 5) = uStack_138;
  *(undefined4 *)(puVar24 + 5) = uStack_138;
  *(float *)((long)puVar27 + 0xc) = -fVar47;
  fVar49 = (float)iVar14;
  *(float *)((long)puVar24 + 0xc) = fVar47;
  fVar40 = fVar49 / (float)(iVar13 + -1);
  *(float *)((long)puVar27 + 0x1c) = fVar40;
  *(float *)((long)puVar24 + 0x1c) = fVar40;
  *(float *)((long)puVar27 + 0x2c) = fVar49;
  *(float *)((long)puVar24 + 0x2c) = fVar49;
  *piVar33 = *piVar33 + 2;
LAB_00345fb0:
  uVar23 = FUN_0031e3e8(param_2);
  FUN_0033eda0(uVar23,local_d0);
  return;
}

