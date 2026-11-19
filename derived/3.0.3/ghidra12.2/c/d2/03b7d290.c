
void FUN_03b7d290(long param_1)

{
  long lVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  float fVar6;
  bool bVar7;
  short *psVar8;
  undefined *puVar9;
  short *psVar10;
  ulong uVar11;
  uint uVar12;
  float *pfVar13;
  int iVar14;
  long lVar15;
  uint uVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  float fVar27;
  float fVar28;
  float fVar29;
  float fVar30;
  float fVar31;
  float fVar32;
  float fVar33;
  float fVar34;
  float fVar35;
  float fVar36;
  float fVar37;
  float fVar38;
  float fVar39;
  float fVar40;
  float fVar41;
  float fVar42;
  float fVar43;
  float fVar44;
  float fVar45;
  float fVar46;
  float fVar47;
  float fVar48;
  float fVar49;
  float fVar50;
  float fVar51;
  float fVar52;
  float fVar53;
  float fVar54;
  float fVar55;
  float fVar56;
  float fVar57;
  float fVar58;
  float fVar59;
  float local_114;
  float fStack_110;
  float local_10c;
  float local_108;
  float local_104;
  float local_100;
  float local_fc;
  float local_f8;
  float local_f4;
  float local_f0;
  float local_ec;
  float local_e8;
  float local_90 [7];
  float fStack_74;
  undefined8 local_70;
  float local_68;
  undefined4 uStack_64;
  
  *(undefined8 *)(param_1 + 0xfc) = 0;
  iVar5 = *(int *)(param_1 + 100);
  *(undefined8 *)(param_1 + 0xd0) = 0;
  *(undefined8 *)(param_1 + 200) = 0;
  *(undefined8 *)(param_1 + 0xc0) = 0;
  *(undefined8 *)(param_1 + 0xb8) = 0;
  *(undefined8 *)(param_1 + 0xb0) = 0;
  *(undefined8 *)(param_1 + 0xa8) = 0;
  *(undefined8 *)(param_1 + 0xa0) = 0;
  *(undefined8 *)(param_1 + 0x98) = 0;
  *(undefined8 *)(param_1 + 0x90) = 0;
  *(undefined8 *)(param_1 + 0x88) = 0;
  *(undefined8 *)(param_1 + 0x80) = 0;
  *(undefined8 *)(param_1 + 0x78) = 0;
  *(undefined8 *)(param_1 + 0x104) = 0;
  *(undefined8 *)(param_1 + 0x10c) = 0;
  if (iVar5 == 0) {
    return;
  }
  local_68 = 0.0;
  uStack_64 = 0;
  psVar8 = *(short **)(param_1 + 0x30);
  local_70 = 0;
  local_90[0] = 0.0;
  local_90[1] = 0.0;
  local_90[2] = 0.0;
  local_90[3] = 0.0;
  psVar10 = psVar8 + *(int *)(param_1 + 0x5c) * iVar5;
  local_90[4] = 0.0;
  local_90[5] = 0.0;
  if (iVar5 == 6) {
    fVar46 = *(float *)(param_1 + 0x114);
    fVar23 = 0.0;
    uVar12 = 0;
    bVar7 = *(int *)(param_1 + 0x1c) != 32000;
    fVar43 = 0.0;
    fVar38 = -1.538836;
    if (bVar7) {
      fVar38 = -1.6906593;
    }
    fVar50 = 0.0;
    fVar48 = 0.6267986;
    if (bVar7) {
      fVar48 = 0.73248076;
    }
    local_68 = 0.0;
    fVar24 = 1.5112052;
    if (bVar7) {
      fVar24 = 1.5351249;
    }
    fVar25 = -2.464615;
    if (bVar7) {
      fVar25 = -2.6916962;
    }
    fVar30 = 1.0413725;
    if (bVar7) {
      fVar30 = 1.1983929;
    }
    fVar33 = -1.9850897;
    if (bVar7) {
      fVar33 = -1.9900475;
    }
    fVar6 = 0.98514533;
    if (bVar7) {
      fVar6 = 0.99007225;
    }
    local_e8 = 0.0;
    fVar29 = 0.0;
    local_104 = 0.0;
    local_100 = 0.0;
    local_10c = 0.0;
    local_108 = 0.0;
    local_114 = 0.0;
    fStack_110 = 0.0;
    local_f0 = 0.0;
    local_ec = 0.0;
    local_f8 = 0.0;
    local_f4 = 0.0;
    local_fc = 0.0;
    fVar31 = 0.0;
    fVar53 = 0.0;
    fVar57 = 0.0;
    fVar56 = 0.0;
    fVar47 = 0.0;
    fVar52 = 0.0;
    fVar55 = 0.0;
    fVar54 = 0.0;
    fVar34 = 0.0;
    fVar39 = 0.0;
    fVar35 = 0.0;
    fVar59 = 0.0;
    fVar58 = 0.0;
    fVar26 = 0.0;
    fVar45 = 0.0;
    fVar37 = 0.0;
    fVar41 = 0.0;
    fVar28 = 0.0;
    fVar36 = 0.0;
    fVar49 = 0.0;
    do {
      fVar27 = fVar26;
      fVar51 = fVar53;
      fVar32 = fVar31;
      bVar7 = fVar46 != 1.0;
      fVar53 = (float)(int)psVar10[4] * 3.0517578e-05;
      if (bVar7) {
        fVar53 = fVar46 * (float)(int)psVar10[4] * 3.0517578e-05;
      }
      fVar26 = (float)(int)psVar10[3] * 3.0517578e-05;
      if (bVar7) {
        fVar26 = fVar46 * (float)(int)psVar10[3] * 3.0517578e-05;
      }
      fVar31 = (float)(int)*psVar10 * 3.0517578e-05;
      if (bVar7) {
        fVar31 = fVar46 * (float)(int)*psVar10 * 3.0517578e-05;
      }
      fVar40 = (float)(int)psVar10[2] * 3.0517578e-05;
      if (bVar7) {
        fVar40 = fVar46 * (float)(int)psVar10[2] * 3.0517578e-05;
      }
      fVar42 = (float)(int)psVar10[1] * 3.0517578e-05;
      fVar17 = (float)(int)psVar10[5] * 3.0517578e-05;
      if (bVar7) {
        fVar42 = fVar46 * (float)(int)psVar10[1] * 3.0517578e-05;
        fVar17 = fVar46 * (float)(int)psVar10[5] * 3.0517578e-05;
      }
      if (uVar12 >> 6 < 0xe1) {
        local_f8 = local_f8 + fVar42 * fVar42;
        local_f0 = local_f0 + fVar26 * fVar26;
        local_fc = local_fc + fVar31 * fVar31;
        local_f4 = local_f4 + fVar40 * fVar40;
        local_ec = local_ec + fVar53 * fVar53;
        local_90[1] = local_f8;
        local_90[0] = local_fc;
        local_90[3] = local_f0;
        local_90[2] = local_f4;
        local_e8 = local_e8 + fVar17 * fVar17;
        local_90[5] = local_e8;
        local_90[4] = local_ec;
        if (uVar12 >> 6 < 0x4b) {
          fVar44 = -fVar31;
          if (0.0 <= fVar31) {
            fVar44 = fVar31;
          }
          if (fVar44 <= local_114) {
            fVar44 = local_114;
          }
          fVar18 = -fVar42;
          if (0.0 <= fVar42) {
            fVar18 = fVar42;
          }
          if (fVar18 <= fStack_110) {
            fVar18 = fStack_110;
          }
          *(float *)(param_1 + 0xfc) = fVar44;
          *(float *)(param_1 + 0x100) = fVar18;
          fVar19 = -fVar40;
          if (0.0 <= fVar40) {
            fVar19 = fVar40;
          }
          if (fVar19 <= local_10c) {
            fVar19 = local_10c;
          }
          *(float *)(param_1 + 0x104) = fVar19;
          fVar20 = -fVar26;
          if (0.0 <= fVar26) {
            fVar20 = fVar26;
          }
          if (fVar20 <= local_108) {
            fVar20 = local_108;
          }
          *(float *)(param_1 + 0x108) = fVar20;
          fVar21 = -fVar53;
          if (0.0 <= fVar53) {
            fVar21 = fVar53;
          }
          if (fVar21 <= local_104) {
            fVar21 = local_104;
          }
          *(float *)(param_1 + 0x10c) = fVar21;
          fVar22 = -fVar17;
          if (0.0 <= fVar17) {
            fVar22 = fVar17;
          }
          if (fVar22 <= local_100) {
            fVar22 = local_100;
          }
          *(float *)(param_1 + 0x110) = fVar22;
          local_114 = fVar44;
          fStack_110 = fVar18;
          local_10c = fVar19;
          local_108 = fVar20;
          local_104 = fVar21;
          local_100 = fVar22;
        }
      }
      psVar10 = psVar10 + 6;
      uVar12 = uVar12 + 1;
      if (psVar8 + iVar5 * 0x9600 <= psVar10) {
        psVar10 = psVar8;
      }
      fVar31 = (fVar31 - fVar38 * fVar32) - fVar48 * fVar36;
      fVar17 = (fVar42 - fVar38 * fVar58) - fVar48 * fVar57;
      fVar42 = (fVar40 - fVar38 * fVar35) - fVar48 * fVar39;
      fVar40 = (fVar26 - fVar38 * fVar41) - fVar48 * fVar56;
      fVar44 = (fVar53 - fVar38 * fVar45) - fVar48 * fVar54;
      *(float *)(param_1 + 0x78) = fVar31;
      *(float *)(param_1 + 0x7c) = fVar32;
      *(float *)(param_1 + 0x98) = fVar42;
      *(float *)(param_1 + 0x9c) = fVar35;
      *(float *)(param_1 + 0xa8) = fVar40;
      *(float *)(param_1 + 0xac) = fVar41;
      *(float *)(param_1 + 0xb8) = fVar44;
      *(float *)(param_1 + 0xbc) = fVar45;
      *(float *)(param_1 + 0x88) = fVar17;
      *(float *)(param_1 + 0x8c) = fVar58;
      fVar26 = ((fVar25 * fVar32 + fVar24 * fVar31 + fVar30 * fVar36) - fVar33 * fVar27) -
               fVar6 * fVar28;
      fVar53 = ((fVar25 * fVar41 + fVar24 * fVar40 + fVar30 * fVar56) - fVar33 * fVar51) -
               fVar6 * fVar49;
      fVar39 = ((fVar25 * fVar35 + fVar24 * fVar42 + fVar30 * fVar39) - fVar33 * fVar34) -
               fVar6 * fVar47;
      fVar36 = ((fVar25 * fVar58 + fVar24 * fVar17 + fVar30 * fVar57) - fVar33 * fVar37) -
               fVar6 * fVar59;
      fVar54 = ((fVar25 * fVar45 + fVar24 * fVar44 + fVar30 * fVar54) - fVar33 * fVar55) -
               fVar6 * fVar52;
      *(float *)(param_1 + 0x80) = fVar26;
      *(float *)(param_1 + 0x84) = fVar27;
      *(float *)(param_1 + 0xb0) = fVar53;
      *(float *)(param_1 + 0xb4) = fVar51;
      *(float *)(param_1 + 0xa0) = fVar39;
      *(float *)(param_1 + 0xa4) = fVar34;
      *(float *)(param_1 + 0x90) = fVar36;
      *(float *)(param_1 + 0x94) = fVar37;
      *(float *)(param_1 + 0xc0) = fVar54;
      *(float *)(param_1 + 0xc4) = fVar55;
      fVar28 = fVar28 + (fVar26 - (fVar27 + fVar27));
      fVar47 = fVar47 + (fVar39 - (fVar34 + fVar34));
      fVar59 = fVar59 + (fVar36 - (fVar37 + fVar37));
      fVar43 = fVar43 + fVar47 * fVar47;
      fVar23 = fVar23 + fVar59 * fVar59;
      fVar49 = fVar49 + (fVar53 - (fVar51 + fVar51));
      fVar50 = fVar50 + fVar49 * fVar49;
      fVar52 = fVar52 + (fVar54 - (fVar55 + fVar55));
      local_70 = CONCAT44(fVar50,fVar43);
      fVar29 = fVar29 + fVar28 * fVar28;
      local_68 = local_68 + fVar52 * fVar52;
      stack0xffffffffffffff88 = CONCAT44(fVar23,fVar29);
      uStack_64 = 0;
      fVar57 = fVar58;
      fVar56 = fVar41;
      fVar47 = fVar34;
      fVar52 = fVar55;
      fVar55 = fVar54;
      fVar54 = fVar45;
      fVar34 = fVar39;
      fVar39 = fVar35;
      fVar35 = fVar42;
      fVar59 = fVar37;
      fVar58 = fVar17;
      fVar45 = fVar44;
      fVar37 = fVar36;
      fVar41 = fVar40;
      fVar28 = fVar27;
      fVar36 = fVar32;
      fVar49 = fVar51;
    } while (uVar12 != 0x4b00);
  }
  else {
    if (iVar5 != 2) {
      return;
    }
    fVar23 = 0.0;
    fVar43 = 0.0;
    fVar46 = 0.0;
    uVar12 = 0;
    bVar7 = *(int *)(param_1 + 0x1c) != 32000;
    fVar38 = -1.538836;
    fVar48 = 0.0;
    fVar50 = 0.0;
    if (bVar7) {
      fVar38 = -1.6906593;
    }
    fVar24 = 0.6267986;
    if (bVar7) {
      fVar24 = 0.73248076;
    }
    fVar25 = 1.5112052;
    if (bVar7) {
      fVar25 = 1.5351249;
    }
    fVar30 = -2.464615;
    if (bVar7) {
      fVar30 = -2.6916962;
    }
    fVar33 = 1.0413725;
    if (bVar7) {
      fVar33 = 1.1983929;
    }
    fVar6 = -1.9850897;
    if (bVar7) {
      fVar6 = -1.9900475;
    }
    fVar31 = 0.98514533;
    if (bVar7) {
      fVar31 = 0.99007225;
    }
    fVar39 = 0.0;
    fVar53 = 0.0;
    fVar57 = 0.0;
    fVar56 = 0.0;
    fVar47 = 0.0;
    fVar52 = 0.0;
    fVar55 = 0.0;
    fVar54 = 0.0;
    fVar34 = 0.0;
    do {
      fVar35 = *(float *)(param_1 + 0x114) * (float)(int)*psVar10 * 3.0517578e-05;
      fVar59 = *(float *)(param_1 + 0x114) * (float)(int)psVar10[1] * 3.0517578e-05;
      if (uVar12 >> 6 < 0xe1) {
        fVar46 = fVar46 + fVar35 * fVar35;
        fVar43 = fVar43 + fVar59 * fVar59;
        local_90[1] = fVar43;
        local_90[0] = fVar46;
        if (uVar12 >> 6 < 0x4b) {
          fVar58 = -fVar35;
          if (0.0 <= fVar35) {
            fVar58 = fVar35;
          }
          if (fVar58 <= fVar23) {
            fVar58 = fVar23;
          }
          fVar23 = fVar58;
          fVar58 = -fVar59;
          if (0.0 <= fVar59) {
            fVar58 = fVar59;
          }
          *(float *)(param_1 + 0xfc) = fVar23;
          if (fVar58 <= fVar39) {
            fVar58 = fVar39;
          }
          fVar39 = fVar58;
          *(float *)(param_1 + 0x100) = fVar39;
        }
      }
      psVar10 = psVar10 + 2;
      uVar12 = uVar12 + 1;
      if (psVar8 + iVar5 * 0x9600 <= psVar10) {
        psVar10 = psVar8;
      }
      fVar58 = (fVar35 - fVar38 * fVar47) - fVar24 * fVar56;
      fVar35 = (fVar59 - fVar38 * fVar34) - fVar24 * fVar54;
      *(float *)(param_1 + 0x78) = fVar58;
      *(float *)(param_1 + 0x7c) = fVar47;
      *(float *)(param_1 + 0x88) = fVar35;
      *(float *)(param_1 + 0x8c) = fVar34;
      fVar56 = ((fVar30 * fVar47 + fVar25 * fVar58 + fVar33 * fVar56) - fVar6 * fVar57) -
               fVar31 * fVar53;
      fVar54 = ((fVar30 * fVar34 + fVar25 * fVar35 + fVar33 * fVar54) - fVar6 * fVar55) -
               fVar31 * fVar52;
      *(float *)(param_1 + 0x80) = fVar56;
      *(float *)(param_1 + 0x84) = fVar57;
      *(float *)(param_1 + 0x90) = fVar54;
      *(float *)(param_1 + 0x94) = fVar55;
      fVar53 = fVar53 + (fVar56 - (fVar57 + fVar57));
      fVar48 = fVar48 + fVar53 * fVar53;
      fVar52 = fVar52 + (fVar54 - (fVar55 + fVar55));
      fVar50 = fVar50 + fVar52 * fVar52;
      stack0xffffffffffffff88 = CONCAT44(fVar50,fVar48);
      fVar53 = fVar57;
      fVar57 = fVar56;
      fVar56 = fVar47;
      fVar47 = fVar58;
      fVar52 = fVar55;
      fVar55 = fVar54;
      fVar54 = fVar34;
      fVar34 = fVar35;
    } while (uVar12 != 0x4b00);
  }
  uStack_64 = 0;
  fVar38 = 0.0;
  puVar9 = PTR_DAT_04bd0d98;
  lVar15 = 0;
  do {
    fVar43 = local_90[lVar15] / 14400.0;
    fVar46 = local_90[lVar15 + 6];
    fVar23 = SQRT(fVar43);
    local_90[lVar15] = fVar43;
    if (NAN(fVar23)) {
      fVar23 = sqrtf(fVar43);
      puVar9 = PTR_DAT_04bd0d98;
      if (fVar23 != 0.0) goto LAB_03b7da84;
LAB_03b7db34:
      fVar23 = -100.0;
    }
    else {
      if (fVar23 == 0.0) goto LAB_03b7db34;
LAB_03b7da84:
      fVar43 = (float)((uint)fVar23 & 0x7fffff | 0x3f800000) + -1.0;
      uVar11 = (ulong)(uint)(int)(fVar43 * 256.0);
      fVar23 = (*(float *)(puVar9 + uVar11 * 8) +
                *(float *)((long)(puVar9 + uVar11 * 8) + 4) * (fVar43 * 256.0 - (float)uVar11) +
               (float)(int)(((uint)fVar23 >> 0x17 & 0xff) - 0x7f) * 0.6931472) * 8.685889 -
               *(float *)(&DAT_041e811c + (long)*(int *)(param_1 + 0x18) * 4);
    }
    *(float *)(param_1 + 0xe4 + lVar15 * 4) = fVar23;
    lVar1 = lVar15 + 1;
    fVar23 = (fVar46 / 19200.0) * (float)(&DAT_041e8130)[lVar15];
    local_90[lVar15 + 6] = fVar23;
    fVar38 = fVar38 + fVar23;
    lVar15 = lVar1;
  } while (lVar1 < *(int *)(param_1 + 100));
  if (fVar38 == 0.0) {
    fVar23 = -100.0;
  }
  else {
    fVar23 = (float)((uint)fVar38 & 0x7fffff | 0x3f800000) + -1.0;
    uVar11 = (ulong)(uint)(int)(fVar23 * 256.0);
    fVar23 = (*(float *)(puVar9 + uVar11 * 8) +
              *(float *)((long)(puVar9 + uVar11 * 8) + 4) * (fVar23 * 256.0 - (float)uVar11) +
             (float)(int)(((uint)fVar38 >> 0x17 & 0xff) - 0x7f) * 0.6931472) * 4.3429446 + -0.691;
  }
  uVar12 = *(uint *)(param_1 + 0x68);
  *(float *)(param_1 + 0xd8) = fVar23;
  if (*(uint *)(param_1 + 0x38) <= uVar12) {
    uVar12 = 0;
  }
  *(float *)(*(long *)(param_1 + 0x40) + (long)(int)uVar12 * 4) = fVar38;
  iVar5 = *(int *)(param_1 + 0x68) + 1;
  uVar12 = *(uint *)(param_1 + 0x38);
  *(int *)(param_1 + 0x68) = iVar5;
  if (iVar5 < (int)uVar12) {
    if (*(char *)(param_1 + 0x6c) != '\0') {
      if ((int)uVar12 < 1) goto LAB_03b7dcac;
LAB_03b7dc78:
      uVar11 = (ulong)uVar12 & 3;
      if (uVar12 < 4) {
        lVar15 = 0;
        fVar23 = 0.0;
      }
      else {
        fVar23 = 0.0;
        lVar15 = 0;
        pfVar13 = (float *)(*(long *)(param_1 + 0x40) + 8);
        do {
          lVar15 = lVar15 + -4;
          fVar23 = fVar23 + pfVar13[-2] + pfVar13[-1] + *pfVar13 + pfVar13[1];
          pfVar13 = pfVar13 + 4;
        } while (-lVar15 != ((ulong)uVar12 & 0xfffffffc));
        lVar15 = -lVar15;
      }
      if ((uVar12 & 3) != 0) {
        pfVar13 = (float *)(*(long *)(param_1 + 0x40) + lVar15 * 4);
        do {
          uVar11 = uVar11 - 1;
          fVar23 = fVar23 + *pfVar13;
          pfVar13 = pfVar13 + 1;
        } while (uVar11 != 0);
      }
      goto LAB_03b7dd10;
    }
  }
  else {
    *(undefined4 *)(param_1 + 0x68) = 0;
    *(undefined1 *)(param_1 + 0x6c) = 1;
    if (0 < (int)uVar12) goto LAB_03b7dc78;
LAB_03b7dcac:
    fVar23 = 0.0;
LAB_03b7dd10:
    fVar23 = fVar23 / (float)(int)uVar12;
    if (fVar23 == 0.0) {
      fVar23 = -100.0;
    }
    else {
      fVar43 = (float)((uint)fVar23 & 0x7fffff | 0x3f800000) + -1.0;
      uVar11 = (ulong)(uint)(int)(fVar43 * 256.0);
      fVar23 = (*(float *)(puVar9 + uVar11 * 8) +
                *(float *)((long)(puVar9 + uVar11 * 8) + 4) * (fVar43 * 256.0 - (float)uVar11) +
               (float)(int)(((uint)fVar23 >> 0x17 & 0xff) - 0x7f) * 0.6931472) * 4.3429446 + -0.691;
    }
    *(float *)(param_1 + 0xdc) = fVar23;
  }
  if (*(char *)(param_1 + 0x74) == '\0') goto LAB_03b7e004;
  uVar12 = *(uint *)(param_1 + 0x70);
  if (((int)*(uint *)(param_1 + 0x48) <= (int)uVar12) || (*(float *)(param_1 + 0xd8) <= -70.0))
  goto LAB_03b7e004;
  if (*(uint *)(param_1 + 0x48) <= uVar12) {
    uVar12 = 0;
  }
  *(float *)(*(long *)(param_1 + 0x50) +
            (-(ulong)(uVar12 >> 0x1f) & 0xfffffff800000000 | (ulong)uVar12 << 3)) = fVar38;
  uVar12 = *(uint *)(param_1 + 0x70);
  if (*(uint *)(param_1 + 0x48) <= uVar12) {
    uVar12 = 0;
  }
  *(undefined4 *)(*(long *)(param_1 + 0x50) + (long)(int)uVar12 * 8 + 4) =
       *(undefined4 *)(param_1 + 0xd8);
  iVar5 = *(int *)(param_1 + 0x70);
  uVar4 = *(uint *)(param_1 + 0x48);
  uVar12 = iVar5 + 1;
  *(uint *)(param_1 + 0x70) = uVar12;
  if ((int)uVar12 < (int)uVar4) goto LAB_03b7e004;
  *(undefined2 *)(param_1 + 0x74) = 0x100;
  if (uVar12 == 0) {
LAB_03b7dff8:
    fVar38 = -100.0;
  }
  else {
    if (iVar5 < 0) {
      fVar38 = 0.0;
    }
    else {
      lVar15 = *(long *)(param_1 + 0x50);
      uVar16 = 0;
      if (iVar5 == 0) {
        fVar38 = 0.0;
      }
      else {
        fVar38 = 0.0;
        do {
          uVar2 = uVar16;
          if (uVar4 <= uVar16) {
            uVar2 = 0;
          }
          uVar3 = 0;
          if (uVar16 + 1 < uVar4) {
            uVar3 = uVar16 + 1;
          }
          uVar16 = uVar16 + 2;
          fVar38 = fVar38 + *(float *)(lVar15 + (ulong)uVar2 * 8) +
                   *(float *)(lVar15 + (ulong)uVar3 * 8);
        } while (uVar16 != (uVar12 & 0xfffffffe));
      }
      if ((uVar12 & 1) != 0) {
        if (uVar4 <= uVar16) {
          uVar16 = 0;
        }
        fVar38 = fVar38 + *(float *)(lVar15 + (ulong)uVar16 * 8);
      }
    }
    if (iVar5 < 0) goto LAB_03b7dff8;
    uVar16 = 0;
    iVar14 = 0;
    fVar43 = (float)((uint)(fVar38 / (float)(int)uVar12) & 0x7fffff | 0x3f800000) + -1.0;
    uVar11 = (ulong)(uint)(int)(fVar43 * 256.0);
    fVar23 = 0.0;
    do {
      uVar2 = uVar16;
      if (uVar4 <= uVar16) {
        uVar2 = 0;
      }
      if ((*(float *)(puVar9 + uVar11 * 8) +
           *(float *)((long)(puVar9 + uVar11 * 8) + 4) * (fVar43 * 256.0 - (float)uVar11) +
          (float)(int)(((uint)(fVar38 / (float)(int)uVar12) >> 0x17 & 0xff) - 0x7f) * 0.6931472) *
          4.3429446 + -0.691 + -10.0 < *(float *)(*(long *)(param_1 + 0x50) + (ulong)uVar2 * 8 + 4))
      {
        iVar14 = iVar14 + 1;
        fVar23 = fVar23 + *(float *)(*(long *)(param_1 + 0x50) + (ulong)uVar2 * 8);
      }
      uVar16 = uVar16 + 1;
    } while (iVar5 + 1U != uVar16);
    if (iVar14 == 0) goto LAB_03b7dff8;
    fVar38 = (float)((uint)(fVar23 / (float)iVar14) & 0x7fffff | 0x3f800000) + -1.0;
    uVar11 = (ulong)(uint)(int)(fVar38 * 256.0);
    fVar38 = (*(float *)(puVar9 + uVar11 * 8) +
              *(float *)((long)(puVar9 + uVar11 * 8) + 4) * (fVar38 * 256.0 - (float)uVar11) +
             (float)(int)(((uint)(fVar23 / (float)iVar14) >> 0x17 & 0xff) - 0x7f) * 0.6931472) *
             4.3429446 + -0.691;
  }
  *(float *)(param_1 + 0xe0) = fVar38;
LAB_03b7e004:
  iVar5 = 0;
  if (*(int *)(param_1 + 0x5c) < 0x8340) {
    iVar5 = *(int *)(param_1 + 0x5c) + 0x12c0;
  }
  *(int *)(param_1 + 0x5c) = iVar5;
  return;
}

