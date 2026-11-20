
bool FUN_03f02c00(float param_1,long param_2,long param_3,uint param_4,long param_5)

{
  uint *puVar1;
  uint *puVar2;
  float *pfVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  ulong uVar7;
  undefined8 uVar8;
  undefined *puVar9;
  undefined8 *puVar10;
  undefined8 uVar11;
  uint uVar12;
  uint uVar13;
  uint uVar14;
  short sVar15;
  ulong uVar16;
  bool bVar17;
  bool bVar18;
  bool bVar19;
  bool bVar20;
  long *plVar21;
  ulong uVar22;
  long lVar23;
  long lVar24;
  long lVar25;
  uint uVar26;
  uint uVar27;
  long lVar28;
  long lVar29;
  long lVar30;
  long lVar31;
  long lVar32;
  bool bVar33;
  ulong uVar34;
  uint uVar35;
  long lVar36;
  uint uVar37;
  ulong uVar38;
  long lVar39;
  long lVar40;
  short *psVar41;
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
  float fVar60;
  float fVar61;
  float fVar62;
  float fVar63;
  float fVar64;
  float fVar65;
  float fVar66;
  float fVar67;
  float fVar68;
  float fVar69;
  float fVar70;
  float fVar71;
  float fVar72;
  float fVar73;
  ulong uVar74;
  float fVar75;
  ulong uVar76;
  float fVar77;
  float fVar78;
  float fVar79;
  float fVar80;
  float local_348;
  float local_344;
  float local_340;
  float local_33c;
  float local_338;
  float local_334;
  float local_330;
  float local_32c;
  float local_328;
  ulong local_1a0;
  undefined *local_170;
  long lStack_168;
  undefined8 local_160;
  undefined8 *puStack_158;
  ulong local_150;
  undefined8 uStack_148;
  undefined *local_140;
  long lStack_138;
  undefined8 local_130;
  undefined8 *puStack_128;
  ulong local_120;
  undefined8 uStack_118;
  undefined8 local_110;
  undefined8 uStack_108;
  undefined8 local_100;
  undefined8 uStack_f8;
  undefined8 local_f0;
  undefined8 uStack_e8;
  undefined8 local_e0;
  undefined8 uStack_d8;
  undefined8 local_d0;
  undefined8 local_c8;
  undefined8 local_c0;
  undefined8 uStack_b8;
  
  lVar39 = *(long *)(param_2 + 0x50);
  if ((lVar39 == 0) || (*(long *)(lVar39 + 0x28) == 0)) {
    return false;
  }
  uVar8 = *(undefined8 *)(PTR_DAT_04bb2f80 + 0x10);
  puVar10 = *(undefined8 **)(PTR_DAT_04bb2f80 + 0x18);
  uVar34 = *(ulong *)(PTR_DAT_04bb2f80 + 0x20);
  uVar11 = *(undefined8 *)(PTR_DAT_04bb2f80 + 0x28);
  puVar9 = *(undefined **)PTR_DAT_04bb2f80;
  lVar24 = *(long *)(PTR_DAT_04bb2f80 + 8);
  local_170 = puVar9;
  lStack_168 = lVar24;
  local_160 = uVar8;
  puStack_158 = puVar10;
  local_150 = uVar34;
  uStack_148 = uVar11;
  if ((*(byte *)(param_2 + 0x4a) >> 1 & 1) == 0) goto LAB_03f02e74;
  local_110 = puVar9;
  uStack_108 = lVar24;
  local_100 = uVar8;
  uStack_f8 = puVar10;
  local_f0 = uVar34;
  uStack_e8 = uVar11;
  local_e0 = puVar9;
  uStack_d8 = lVar24;
  local_d0 = uVar8;
  local_c8 = puVar10;
  local_c0 = uVar34;
  uStack_b8 = uVar11;
  if (param_5 == 0) {
    lVar23 = lVar39;
  }
  else {
    if (*(long *)(param_5 + 0x50) == 0) goto LAB_03f02e74;
    lVar23 = *(long *)(*(long *)(param_5 + 0x50) + 0x28);
    if (lVar23 == 0) goto LAB_03f02e74;
    plVar21 = *(long **)**(undefined8 **)(lVar23 + 0x38);
    (**(code **)(*plVar21 + 0x70))(plVar21,&local_140,0);
    FUN_03f04168(&local_e0,&local_140,1);
    FUN_03f04168(&local_110,&local_140,0);
    lVar23 = *(long *)(param_2 + 0x50);
    local_140 = puVar9;
    lStack_138 = lVar24;
    local_130 = uVar8;
    puStack_128 = puVar10;
    local_120 = uVar34;
    uStack_118 = uVar11;
    if (*(long *)(param_2 + 0x50) == 0) goto LAB_03f02e74;
  }
  local_140 = puVar9;
  lStack_138 = lVar24;
  local_130 = uVar8;
  puStack_128 = puVar10;
  local_120 = uVar34;
  uStack_118 = uVar11;
  if (*(long *)(lVar23 + 0x28) != 0) {
    plVar21 = *(long **)**(undefined8 **)(*(long *)(lVar23 + 0x28) + 0x38);
    (**(code **)(*plVar21 + 0x70))(plVar21,&local_140,0);
    fVar71 = SUB84(local_e0,0);
    fVar79 = SUB84(local_140,0);
    fVar56 = (float)((ulong)local_140 >> 0x20);
    fVar78 = (float)lStack_138;
    fVar80 = (float)((ulong)lStack_138 >> 0x20);
    fVar44 = (float)local_d0;
    fVar42 = (float)((ulong)local_e0 >> 0x20);
    fVar69 = (float)local_130;
    fVar49 = (float)((ulong)local_130 >> 0x20);
    fVar60 = SUB84(puStack_128,0);
    fVar68 = (float)((ulong)puStack_128 >> 0x20);
    fVar54 = (float)local_c0;
    fVar72 = (float)((ulong)local_d0 >> 0x20);
    fVar75 = (float)(local_c0 >> 0x20);
    fVar43 = (float)uStack_d8;
    fVar70 = (float)local_120;
    fVar59 = (float)(local_120 >> 0x20);
    fVar63 = (float)uStack_118;
    fVar45 = (float)((ulong)uStack_118 >> 0x20);
    fVar73 = SUB84(local_c8,0);
    fVar77 = (float)uStack_b8;
    local_140 = (undefined *)
                CONCAT44(fVar56 * fVar71 + fVar49 * fVar42 + fVar59 * fVar43 + 0.0,
                         fVar79 * fVar71 + fVar69 * fVar42 + fVar70 * fVar43 + 0.0);
    lStack_138 = CONCAT44((float)((ulong)uStack_d8 >> 0x20) +
                          fVar80 * fVar71 + fVar68 * fVar42 + fVar45 * fVar43,
                          fVar78 * fVar71 + fVar60 * fVar42 + fVar63 * fVar43 + 0.0);
    local_130 = CONCAT44(fVar56 * fVar44 + fVar49 * fVar72 + fVar59 * fVar73 + 0.0,
                         fVar79 * fVar44 + fVar69 * fVar72 + fVar70 * fVar73 + 0.0);
    puStack_128 = (undefined8 *)
                  CONCAT44((float)((ulong)local_c8 >> 0x20) +
                           fVar80 * fVar44 + fVar68 * fVar72 + fVar45 * fVar73,
                           fVar78 * fVar44 + fVar60 * fVar72 + fVar63 * fVar73 + 0.0);
    local_120 = CONCAT44(fVar56 * fVar54 + fVar49 * fVar75 + fVar59 * fVar77 + 0.0,
                         fVar79 * fVar54 + fVar69 * fVar75 + fVar70 * fVar77 + 0.0);
    uStack_118 = CONCAT44((float)((ulong)uStack_b8 >> 0x20) +
                          fVar80 * fVar54 + fVar68 * fVar75 + fVar45 * fVar77,
                          fVar78 * fVar54 + fVar60 * fVar75 + fVar63 * fVar77 + 0.0);
    uVar34 = FUN_03f04168(&local_170,&local_140,0);
    if ((uVar34 & 1) == 0) {
      lStack_168 = uStack_108;
      local_170 = local_110;
      puStack_158 = uStack_f8;
      local_160 = local_100;
      local_150 = local_f0;
      uStack_148 = uStack_e8;
    }
    else {
      fVar71 = SUB84(local_110,0);
      fVar44 = SUB84(local_170,0);
      fVar72 = (float)((ulong)local_170 >> 0x20);
      fVar73 = (float)lStack_168;
      fVar54 = (float)((ulong)lStack_168 >> 0x20);
      fVar42 = (float)((ulong)local_110 >> 0x20);
      fVar75 = (float)local_160;
      fVar79 = (float)((ulong)local_160 >> 0x20);
      fVar78 = SUB84(puStack_158,0);
      fVar69 = (float)((ulong)puStack_158 >> 0x20);
      fVar49 = (float)local_100;
      fVar59 = (float)((ulong)local_100 >> 0x20);
      fVar63 = (float)local_f0;
      fVar68 = (float)(local_f0 >> 0x20);
      fVar43 = (float)uStack_108;
      fVar77 = (float)local_150;
      fVar56 = (float)(local_150 >> 0x20);
      fVar80 = (float)uStack_148;
      fVar70 = (float)((ulong)uStack_148 >> 0x20);
      fVar60 = SUB84(uStack_f8,0);
      fVar45 = (float)uStack_e8;
      local_170 = (undefined *)
                  CONCAT44(fVar72 * fVar71 + fVar79 * fVar42 + fVar56 * fVar43 + 0.0,
                           fVar44 * fVar71 + fVar75 * fVar42 + fVar77 * fVar43 + 0.0);
      lStack_168 = CONCAT44((float)((ulong)uStack_108 >> 0x20) +
                            fVar54 * fVar71 + fVar69 * fVar42 + fVar70 * fVar43,
                            fVar73 * fVar71 + fVar78 * fVar42 + fVar80 * fVar43 + 0.0);
      local_160 = CONCAT44(fVar72 * fVar49 + fVar79 * fVar59 + fVar56 * fVar60 + 0.0,
                           fVar44 * fVar49 + fVar75 * fVar59 + fVar77 * fVar60 + 0.0);
      puStack_158 = (undefined8 *)
                    CONCAT44((float)((ulong)uStack_f8 >> 0x20) +
                             fVar54 * fVar49 + fVar69 * fVar59 + fVar70 * fVar60,
                             fVar73 * fVar49 + fVar78 * fVar59 + fVar80 * fVar60 + 0.0);
      local_150 = CONCAT44(fVar72 * fVar63 + fVar79 * fVar68 + fVar56 * fVar45 + 0.0,
                           fVar44 * fVar63 + fVar75 * fVar68 + fVar77 * fVar45 + 0.0);
      uStack_148 = CONCAT44((float)((ulong)uStack_e8 >> 0x20) +
                            fVar54 * fVar63 + fVar69 * fVar68 + fVar70 * fVar45,
                            fVar73 * fVar63 + fVar78 * fVar68 + fVar80 * fVar45 + 0.0);
    }
  }
LAB_03f02e74:
  uVar12 = *(uint *)(param_2 + 0x10);
  if ((int)uVar12 < 1) {
    bVar33 = true;
  }
  else {
    bVar33 = false;
    uVar26 = 0;
    do {
      uVar27 = *(uint *)(param_2 + 0x10);
      lVar24 = *(long *)(param_2 + 0x18);
      uVar5 = uVar26;
      if (uVar27 <= uVar26) {
        uVar5 = 0;
      }
      uVar37 = *(uint *)(lVar24 + (ulong)uVar5 * 0x48 + 0x18);
      if ((uVar37 >> 3 & 1) == 0) {
        if ((uVar37 & 3) == 0) {
          if ((uVar37 >> 0xc & 1) == 0) {
            lVar24 = *(long *)(lVar39 + 0x10);
            uVar5 = uVar26;
            if (*(uint *)(lVar39 + 8) <= uVar26) {
              uVar5 = 0;
            }
            puVar2 = (uint *)(lVar24 + (ulong)uVar5 * 0x10);
            uVar27 = *puVar2;
            if (0 < (int)uVar27) {
              uVar37 = 0;
              do {
                lVar23 = *(long *)(lVar24 + (ulong)uVar5 * 0x10 + 8);
                uVar13 = uVar37;
                if (*puVar2 <= uVar37) {
                  uVar13 = 0;
                }
                puVar1 = (uint *)(lVar23 + (ulong)uVar13 * 0x10);
                uVar6 = *puVar1;
                if (0 < (int)uVar6) {
                  uVar35 = 0;
                  do {
                    lVar29 = *(long *)(lVar23 + (ulong)uVar13 * 0x10 + 8);
                    uVar14 = uVar35;
                    if (*puVar1 <= uVar35) {
                      uVar14 = 0;
                    }
                    lVar30 = lVar29 + (ulong)uVar14 * 0xa8;
                    if (((long)*(short *)(lVar30 + 0x70) != -1 && *(short *)(lVar30 + 0x72) != -1)
                       && ((*(byte *)(lVar29 + (ulong)uVar14 * 0xa8 + 0x84) & 1) != 0)) {
                      plVar21 = (long *)**(undefined8 **)
                                          (*(long *)(*(long *)(lVar39 + 0x28) + 0x38) +
                                          (long)*(short *)(lVar30 + 0x70) * 8);
                      (**(code **)(*plVar21 + 0x50))(plVar21,lVar30,(int)*(short *)(lVar30 + 0x72));
                    }
                    uVar35 = uVar35 + 1;
                  } while (uVar6 != uVar35);
                }
                uVar37 = uVar37 + 1;
              } while (uVar37 != uVar27);
            }
          }
        }
        else if (*(int *)(lVar24 + (ulong)uVar5 * 0x48 + 0x20) != 0) {
          if ((uVar37 >> 10 & 1) == 0) {
            lVar23 = *(long *)(param_2 + 0x50);
            if (lVar23 == 0) {
              return bVar33;
            }
            if (*(long *)(lVar23 + 0x28) == 0) {
              return bVar33;
            }
            lVar29 = *(long *)(lVar24 + (ulong)uVar5 * 0x48);
            if (lVar29 == 0) {
              return bVar33;
            }
            fVar71 = 1.0;
            if (((param_4 & 1) != 0) ||
               (fVar71 = *(float *)(lVar24 + (ulong)uVar5 * 0x48 + 0x1c), fVar71 != 0.0)) {
              fVar44 = 0.0;
              fVar42 = 0.0;
              fVar43 = 0.0;
              if ((uVar37 >> 0x1c & 1) != 0) {
                if (param_5 == 0) {
                  plVar21 = *(long **)**(undefined8 **)(*(long *)(lVar23 + 0x28) + 0x38);
                  (**(code **)(*plVar21 + 0x70))(plVar21,&local_e0,0);
                  fVar42 = local_c8._4_4_;
                  fVar43 = uStack_d8._4_4_;
                  fVar44 = uStack_b8._4_4_;
                }
                else if (*(long *)(param_5 + 0x50) != 0) {
                  lVar24 = *(long *)(*(long *)(param_5 + 0x50) + 0x28);
                  if (lVar24 != 0) {
                    plVar21 = *(long **)**(undefined8 **)(lVar24 + 0x38);
                    (**(code **)(*plVar21 + 0x70))(plVar21,&local_e0,0);
                    fVar42 = local_c8._4_4_;
                    fVar43 = uStack_d8._4_4_;
                    fVar44 = uStack_b8._4_4_;
                  }
                }
              }
              uVar11 = uStack_148;
              uVar34 = local_150;
              puVar10 = puStack_158;
              uVar8 = local_160;
              lVar24 = lStack_168;
              puVar9 = local_170;
              uVar5 = *(uint *)(lVar29 + 0x38);
              if (0 < (int)uVar5) {
                bVar20 = false;
                local_1a0 = 0;
                uVar7 = (ulong)lStack_168 >> 0x20;
                uVar16 = (ulong)puStack_158 >> 0x20;
                do {
                  lVar30 = *(long *)(*(long *)(lVar29 + 0x30) + local_1a0 * 8);
                  if ((lVar30 != 0) && (uVar27 = *(uint *)(lVar30 + 0x20), 0 < (int)uVar27)) {
                    lVar32 = 0;
                    uVar38 = 0;
                    do {
                      uVar37 = uVar26;
                      if (*(uint *)(lVar23 + 8) <= uVar26) {
                        uVar37 = 0;
                      }
                      puVar2 = (uint *)(*(long *)(lVar23 + 0x10) + (ulong)uVar37 * 0x10);
                      uVar37 = *puVar2;
                      lVar25 = *(long *)(puVar2 + 2);
                      uVar22 = local_1a0;
                      if (uVar37 <= local_1a0) {
                        uVar22 = 0;
                      }
                      puVar2 = (uint *)(lVar25 + uVar22 * 0x10);
                      lVar36 = *(long *)(puVar2 + 2);
                      uVar22 = uVar38;
                      if (*puVar2 <= uVar38) {
                        uVar22 = 0;
                      }
                      lVar40 = lVar36 + uVar22 * 0xa8;
                      psVar41 = (short *)(lVar40 + 0x70);
                      uVar13 = *(uint *)(lVar40 + 0x84);
                      if (((uVar13 & 1) != 0) && (*psVar41 != -1 && *(short *)(lVar40 + 0x72) != -1)
                         ) {
                        uVar35 = *(uint *)(param_2 + 0x10);
                        lVar28 = *(long *)(param_2 + 0x18);
                        uVar6 = uVar26;
                        if (uVar35 <= uVar26) {
                          uVar6 = 0;
                        }
                        uVar14 = *(uint *)(lVar28 + (ulong)uVar6 * 0x48 + 0x18);
                        if ((uVar14 >> 0xd & 1) == 0) {
                          pfVar3 = (float *)(*(long *)(lVar30 + 0x18) + lVar32);
                          fVar72 = *pfVar3;
                          if (((!NAN(fVar72)) && (fVar73 = pfVar3[1], !NAN(fVar73))) &&
                             (fVar54 = pfVar3[2], !NAN(fVar54))) {
                            uVar76 = *(ulong *)(pfVar3 + 4);
                            fVar75 = (float)uVar76;
                            if (((!NAN(fVar75)) && (fVar77 = (float)(uVar76 >> 0x20), !NAN(fVar77)))
                               && (fVar79 = (float)*(undefined8 *)(pfVar3 + 6), !NAN(fVar79))) {
                              uVar74 = *(ulong *)(pfVar3 + 8);
                              fVar56 = (float)uVar74;
                              if (((!NAN(fVar56)) &&
                                  (fVar78 = (float)(uVar74 >> 0x20), !NAN(fVar78))) &&
                                 (fVar80 = (float)*(undefined8 *)(pfVar3 + 10), !NAN(fVar80))) {
                                fVar69 = (float)*(undefined8 *)(pfVar3 + 0xc);
                                if (((!NAN(fVar69)) &&
                                    (fVar70 = (float)((ulong)*(undefined8 *)(pfVar3 + 0xc) >> 0x20),
                                    !NAN(fVar70))) &&
                                   (fVar49 = (float)*(undefined8 *)(pfVar3 + 0xe), !NAN(fVar49))) {
                                  fVar59 = SQRT(fVar73 * fVar73 + fVar72 * fVar72 + fVar54 * fVar54)
                                  ;
                                  if (0.0 < fVar59) {
                                    fVar59 = 1.0 / fVar59;
                                    fVar72 = fVar72 * fVar59;
                                    fVar73 = fVar73 * fVar59;
                                    fVar54 = fVar54 * fVar59;
                                  }
                                  fVar59 = SQRT(fVar77 * fVar77 + fVar75 * fVar75 + fVar79 * fVar79)
                                  ;
                                  if (0.0 < fVar59) {
                                    fVar59 = 1.0 / fVar59;
                                    uVar76 = (ulong)(uint)(fVar75 * fVar59);
                                    fVar77 = fVar77 * fVar59;
                                    fVar79 = fVar79 * fVar59;
                                  }
                                  fVar75 = (float)uVar76;
                                  fVar59 = SQRT(fVar78 * fVar78 + fVar56 * fVar56 + fVar80 * fVar80)
                                  ;
                                  if (0.0 < fVar59) {
                                    fVar59 = 1.0 / fVar59;
                                    uVar74 = (ulong)(uint)(fVar56 * fVar59);
                                    fVar78 = fVar78 * fVar59;
                                    fVar80 = fVar80 * fVar59;
                                  }
                                  fVar56 = (float)uVar74;
                                  if (((uVar14 >> 0xb & 1) != 0) &&
                                     (uVar35 = *(uint *)(lVar36 + uVar22 * 0xa8 + 0x78),
                                     -1 < (int)uVar35)) {
                                    lVar31 = *(long *)(lVar30 + 0x18) + (ulong)uVar35 * 0x40;
                                    fVar59 = *(float *)(lVar31 + 0x38) - fVar49;
                                    fVar60 = *(float *)(lVar31 + 0x30) - fVar69;
                                    fVar63 = *(float *)(lVar31 + 0x34) - fVar70;
                                    fVar68 = SQRT(fVar63 * fVar63 + fVar60 * fVar60 +
                                                  fVar59 * fVar59);
                                    if (fVar68 <= 0.0) {
                                      if ((uVar13 >> 1 & 1) != 0) goto LAB_03f03388;
LAB_03f03ba8:
                                      fVar45 = -(fVar79 * fVar78) + fVar80 * fVar77;
                                      fVar68 = -(fVar54 * fVar77) + fVar79 * fVar73;
                                      fVar46 = fVar75 * (-(fVar73 * fVar80) + fVar54 * fVar78) +
                                               fVar45 * fVar72 + fVar68 * fVar56;
                                      if (fVar46 != 0.0) {
                                        fVar46 = 1.0 / fVar46;
                                        fVar47 = -fVar54;
                                        local_338 = fVar45 * fVar46;
                                        local_33c = fVar68 * fVar46;
                                        local_330 = -((fVar56 * -fVar79 + fVar80 * fVar75) * fVar46)
                                        ;
                                        local_32c = (-(fVar77 * fVar56) + fVar78 * fVar75) * fVar46;
                                        local_328 = -((fVar78 * fVar47 + fVar80 * fVar73) * fVar46);
                                        local_334 = (fVar56 * fVar47 + fVar80 * fVar72) * fVar46;
                                        local_340 = -((fVar56 * -fVar73 + fVar78 * fVar72) * fVar46)
                                        ;
                                        local_344 = -((fVar75 * fVar47 + fVar79 * fVar72) * fVar46);
                                        local_348 = (fVar75 * -fVar73 + fVar77 * fVar72) * fVar46;
                                      }
                                      lVar31 = lVar36 + uVar22 * 0xa8;
                                      fVar68 = local_330 * fVar63 + local_338 * fVar60 +
                                               fVar59 * local_32c;
                                      fVar45 = local_334 * fVar63 + local_328 * fVar60 +
                                               fVar59 * local_340;
                                      fVar59 = local_344 * fVar63 + local_33c * fVar60 +
                                               fVar59 * local_348;
                                      if ((uVar13 >> 2 & 1) == 0) {
                                        fVar60 = *(float *)(lVar31 + 0x90);
                                        fVar63 = *(float *)(lVar31 + 0x94);
                                        fVar48 = *(float *)(lVar31 + 0x88);
                                        fVar47 = *(float *)(lVar31 + 0x8c);
                                        fVar50 = (fVar68 * fVar60 - fVar59 * fVar48) +
                                                 fVar45 * fVar63;
                                        fVar46 = -(fVar60 * fVar45) + fVar59 * fVar47 +
                                                 fVar68 * fVar63;
                                        fVar51 = -(fVar47 * fVar68) + fVar45 * fVar48 +
                                                 fVar59 * fVar63;
                                        fVar59 = (-(fVar47 * fVar45) - fVar68 * fVar48) -
                                                 fVar59 * fVar60;
                                      }
                                      else {
                                        fVar60 = *(float *)(lVar31 + 0x90);
                                        fVar63 = *(float *)(lVar31 + 0x94);
                                        fVar48 = *(float *)(lVar31 + 0x88);
                                        fVar47 = *(float *)(lVar31 + 0x8c);
                                        fVar50 = (-(fVar68 * fVar60) + fVar59 * fVar48) -
                                                 fVar45 * fVar63;
                                        fVar46 = (fVar45 * fVar60 - fVar59 * fVar47) -
                                                 fVar68 * fVar63;
                                        fVar51 = (fVar68 * fVar47 - fVar45 * fVar48) -
                                                 fVar59 * fVar63;
                                        fVar59 = fVar45 * fVar47 + fVar68 * fVar48 + fVar59 * fVar60
                                        ;
                                      }
                                      iVar4 = *(int *)(lVar28 + (ulong)uVar6 * 0x48 + 0x34);
                                      fVar68 = (-(fVar60 * fVar50) + fVar63 * fVar46 +
                                               fVar47 * fVar51) - fVar48 * fVar59;
                                      fVar45 = ((fVar63 * fVar50 + fVar60 * fVar46) -
                                               fVar48 * fVar51) - fVar47 * fVar59;
                                      fVar59 = ((fVar48 * fVar50 - fVar47 * fVar46) +
                                               fVar63 * fVar51) - fVar60 * fVar59;
                                      if (iVar4 < 0) {
                                        iVar4 = iVar4 + 1;
                                      }
                                      iVar4 = iVar4 >> 1;
                                      if (iVar4 == 2) {
                                        fVar78 = fVar77 * fVar45 + fVar68 * fVar73 + fVar59 * fVar78
                                        ;
                                        fVar56 = fVar75 * fVar45 + fVar68 * fVar72 + fVar59 * fVar56
                                        ;
                                        fVar80 = fVar79 * fVar45 + fVar68 * fVar54 + fVar59 * fVar80
                                        ;
                                      }
                                      else if (iVar4 == 1) {
                                        fVar77 = fVar77 * fVar45 + fVar68 * fVar73 + fVar59 * fVar78
                                        ;
                                        fVar75 = fVar75 * fVar45 + fVar68 * fVar72 + fVar59 * fVar56
                                        ;
                                        fVar79 = fVar79 * fVar45 + fVar68 * fVar54 + fVar59 * fVar80
                                        ;
                                      }
                                      else if (iVar4 == 0) {
                                        fVar72 = fVar75 * fVar45 + fVar68 * fVar72 + fVar59 * fVar56
                                        ;
                                        fVar73 = fVar77 * fVar45 + fVar68 * fVar73 + fVar59 * fVar78
                                        ;
                                        fVar54 = fVar79 * fVar45 + fVar68 * fVar54 + fVar59 * fVar80
                                        ;
                                      }
                                    }
                                    else {
                                      fVar68 = 1.0 / fVar68;
                                      fVar60 = fVar60 * fVar68;
                                      fVar63 = fVar63 * fVar68;
                                      fVar59 = fVar59 * fVar68;
                                      if ((uVar13 >> 1 & 1) == 0) goto LAB_03f03ba8;
LAB_03f03388:
                                      fVar73 = fVar63;
                                      fVar72 = fVar60;
                                      fVar54 = fVar59;
                                      if ((uVar13 >> 2 & 1) != 0) {
                                        fVar72 = -fVar72;
                                        fVar54 = -fVar54;
                                        fVar73 = -fVar73;
                                      }
                                    }
                                    uVar6 = *(uint *)(lVar28 + (ulong)uVar6 * 0x48 + 0x34);
                                    uVar13 = uVar6;
                                    if ((int)uVar6 < 0) {
                                      uVar13 = uVar6 + 1;
                                    }
                                    iVar4 = (int)uVar13 >> 1;
                                    if (iVar4 == 2) {
                                      if ((uVar6 & 1) == 0) {
                                        fVar72 = -(fVar79 * fVar78) + fVar80 * fVar77;
                                        fVar73 = -(fVar75 * fVar80) + fVar56 * fVar79;
                                        fVar54 = -(fVar77 * fVar56) + fVar78 * fVar75;
                                        fVar75 = SQRT(fVar73 * fVar73 + fVar72 * fVar72 +
                                                      fVar54 * fVar54);
                                        if (0.0 < fVar75) {
                                          fVar75 = 1.0 / fVar75;
                                          fVar72 = fVar72 * fVar75;
                                          fVar73 = fVar73 * fVar75;
                                          fVar54 = fVar54 * fVar75;
                                        }
LAB_03f04000:
                                        fVar75 = -(fVar80 * fVar73) + fVar54 * fVar78;
                                        fVar77 = -(fVar56 * fVar54) + fVar72 * fVar80;
                                        fVar79 = -(fVar78 * fVar72) + fVar73 * fVar56;
                                      }
                                      else {
                                        fVar75 = -(fVar80 * fVar73) + fVar54 * fVar78;
                                        fVar77 = -(fVar56 * fVar54) + fVar72 * fVar80;
                                        fVar79 = -(fVar78 * fVar72) + fVar73 * fVar56;
                                        fVar72 = SQRT(fVar77 * fVar77 + fVar75 * fVar75 +
                                                      fVar79 * fVar79);
                                        if (0.0 < fVar72) {
                                          fVar72 = 1.0 / fVar72;
                                          fVar75 = fVar75 * fVar72;
                                          fVar77 = fVar77 * fVar72;
                                          fVar79 = fVar79 * fVar72;
                                        }
LAB_03f03fa4:
                                        fVar72 = -(fVar79 * fVar78) + fVar80 * fVar77;
                                        fVar73 = -(fVar75 * fVar80) + fVar56 * fVar79;
                                        fVar54 = -(fVar77 * fVar56) + fVar78 * fVar75;
                                      }
                                    }
                                    else {
                                      if (iVar4 == 1) {
                                        if ((uVar6 & 1) != 0) {
                                          fVar56 = -(fVar54 * fVar77) + fVar79 * fVar73;
                                          fVar78 = -(fVar72 * fVar79) + fVar75 * fVar54;
                                          fVar80 = -(fVar73 * fVar75) + fVar77 * fVar72;
                                          fVar72 = SQRT(fVar78 * fVar78 + fVar56 * fVar56 +
                                                        fVar80 * fVar80);
                                          if (0.0 < fVar72) {
                                            fVar72 = 1.0 / fVar72;
                                            fVar56 = fVar56 * fVar72;
                                            fVar78 = fVar78 * fVar72;
                                            fVar80 = fVar80 * fVar72;
                                          }
                                          goto LAB_03f03fa4;
                                        }
                                        fVar72 = -(fVar79 * fVar78) + fVar80 * fVar77;
                                        fVar73 = -(fVar75 * fVar80) + fVar56 * fVar79;
                                        fVar54 = -(fVar77 * fVar56) + fVar78 * fVar75;
                                        fVar56 = SQRT(fVar73 * fVar73 + fVar72 * fVar72 +
                                                      fVar54 * fVar54);
                                        if (0.0 < fVar56) {
                                          fVar56 = 1.0 / fVar56;
                                          fVar72 = fVar72 * fVar56;
                                          fVar73 = fVar73 * fVar56;
                                          fVar54 = fVar54 * fVar56;
                                        }
                                      }
                                      else {
                                        if (iVar4 != 0) goto LAB_03f033a4;
                                        if ((uVar6 & 1) != 0) {
                                          fVar56 = -(fVar54 * fVar77) + fVar79 * fVar73;
                                          fVar78 = -(fVar72 * fVar79) + fVar75 * fVar54;
                                          fVar80 = -(fVar73 * fVar75) + fVar77 * fVar72;
                                          fVar75 = SQRT(fVar78 * fVar78 + fVar56 * fVar56 +
                                                        fVar80 * fVar80);
                                          if (0.0 < fVar75) {
                                            fVar75 = 1.0 / fVar75;
                                            fVar56 = fVar56 * fVar75;
                                            fVar78 = fVar78 * fVar75;
                                            fVar80 = fVar80 * fVar75;
                                          }
                                          goto LAB_03f04000;
                                        }
                                        fVar75 = -(fVar80 * fVar73) + fVar54 * fVar78;
                                        fVar77 = -(fVar56 * fVar54) + fVar72 * fVar80;
                                        fVar79 = -(fVar78 * fVar72) + fVar73 * fVar56;
                                        fVar56 = SQRT(fVar77 * fVar77 + fVar75 * fVar75 +
                                                      fVar79 * fVar79);
                                        if (0.0 < fVar56) {
                                          fVar56 = 1.0 / fVar56;
                                          fVar75 = fVar75 * fVar56;
                                          fVar77 = fVar77 * fVar56;
                                          fVar79 = fVar79 * fVar56;
                                        }
                                      }
                                      fVar56 = -(fVar54 * fVar77) + fVar79 * fVar73;
                                      fVar78 = -(fVar72 * fVar79) + fVar75 * fVar54;
                                      fVar80 = -(fVar73 * fVar75) + fVar77 * fVar72;
                                    }
                                  }
LAB_03f033a4:
                                  fVar69 = fVar43 + fVar69;
                                  fVar70 = fVar42 + fVar70;
                                  fVar49 = fVar44 + fVar49;
                                  if (((*(byte *)(param_2 + 0x4a) >> 1 & 1) != 0) &&
                                     ((param_4 & 1) == 0)) {
                                    fVar55 = SUB84(puVar9,0);
                                    fVar57 = (float)((ulong)puVar9 >> 0x20);
                                    fVar48 = (float)uVar8;
                                    fVar45 = fVar72 * fVar48;
                                    fVar46 = fVar75 * fVar48;
                                    fVar47 = fVar56 * fVar48;
                                    fVar48 = fVar69 * fVar48;
                                    fVar61 = (float)((ulong)uVar8 >> 0x20);
                                    fVar53 = (float)uVar34;
                                    fVar50 = fVar72 * fVar53;
                                    fVar51 = fVar75 * fVar53;
                                    fVar52 = fVar56 * fVar53;
                                    fVar53 = fVar69 * fVar53;
                                    fVar68 = (float)(uVar34 >> 0x20);
                                    fVar59 = fVar73 * fVar68;
                                    fVar60 = fVar77 * fVar68;
                                    fVar63 = fVar78 * fVar68;
                                    fVar68 = fVar70 * fVar68;
                                    fVar58 = (float)lVar24;
                                    fVar62 = SUB84(puVar10,0);
                                    fVar64 = (float)uVar11;
                                    fVar72 = fVar72 * fVar55 + fVar73 * fVar57 + fVar54 * fVar58 +
                                             0.0;
                                    fVar75 = fVar75 * fVar55 + fVar77 * fVar57 + fVar79 * fVar58 +
                                             0.0;
                                    fVar56 = fVar56 * fVar55 + fVar78 * fVar57 + fVar80 * fVar58 +
                                             0.0;
                                    fVar69 = (float)uVar7 +
                                             fVar69 * fVar55 + fVar70 * fVar57 + fVar49 * fVar58;
                                    fVar73 = fVar45 + fVar73 * fVar61 + fVar54 * fVar62 + 0.0;
                                    fVar77 = fVar46 + fVar77 * fVar61 + fVar79 * fVar62 + 0.0;
                                    fVar78 = fVar47 + fVar78 * fVar61 + fVar80 * fVar62 + 0.0;
                                    fVar70 = (float)uVar16 +
                                             fVar48 + fVar70 * fVar61 + fVar49 * fVar62;
                                    fVar54 = fVar50 + fVar59 + fVar54 * fVar64 + 0.0;
                                    fVar79 = fVar51 + fVar60 + fVar79 * fVar64 + 0.0;
                                    fVar80 = fVar52 + fVar63 + fVar80 * fVar64 + 0.0;
                                    fVar49 = (float)((ulong)uVar11 >> 0x20) +
                                             fVar53 + fVar68 + fVar49 * fVar64;
                                  }
                                  if ((uVar14 >> 0x1b & 1) != 0) {
                                    uVar13 = uVar26;
                                    if (*(uint *)(lVar23 + 0x18) <= uVar26) {
                                      uVar13 = 0;
                                    }
                                    lVar28 = *(long *)(lVar23 + 0x20) + (ulong)uVar13 * 0x38;
                                    uVar13 = *(uint *)(lVar28 + 0x30);
                                    uVar6 = *(uint *)(lVar28 + 0x34);
                                    if (uVar37 <= uVar13) {
                                      uVar13 = 0;
                                    }
                                    puVar2 = (uint *)(lVar25 + (long)(int)uVar13 * 0x10);
                                    if (*puVar2 <= uVar6) {
                                      uVar6 = 0;
                                    }
                                    lVar25 = *(long *)(puVar2 + 2) + (long)(int)uVar6 * 0xa8;
                                    plVar21 = (long *)**(undefined8 **)
                                                        (*(long *)(*(long *)(lVar23 + 0x28) + 0x38)
                                                        + (long)*(short *)(lVar25 + 0x70) * 8);
                                    (**(code **)(*plVar21 + 0x70))
                                              (plVar21,&local_e0,(long)*(short *)(lVar25 + 0x72));
                                    FUN_007535b4(&local_110,&local_e0);
                                    lVar25 = lVar36 + uVar22 * 0xa8;
                                    fVar60 = uStack_108._4_4_ +
                                             fVar70 * local_110._4_4_ + fVar69 * (float)local_110 +
                                             fVar49 * (float)uStack_108;
                                    fVar63 = uStack_f8._4_4_ +
                                             fVar70 * local_100._4_4_ + fVar69 * (float)local_100 +
                                             fVar49 * (float)uStack_f8;
                                    fVar47 = *(float *)(lVar25 + 0xa0);
                                    fVar68 = uStack_e8._4_4_ +
                                             fVar70 * local_f0._4_4_ + fVar69 * (float)local_f0 +
                                             fVar49 * (float)uStack_e8;
                                    fVar45 = *(float *)(lVar25 + 0x98);
                                    fVar46 = *(float *)(lVar25 + 0x9c);
                                    *(float *)(lVar25 + 0x98) = fVar60;
                                    *(float *)(lVar25 + 0x9c) = fVar63;
                                    bVar17 = fVar45 != 0.0;
                                    *(float *)(lVar25 + 0xa0) = fVar68;
                                    bVar18 = fVar46 != 0.0;
                                    bVar19 = fVar47 != 0.0;
                                    fVar59 = 0.0;
                                    if ((bVar18 || bVar17) || bVar19) {
                                      fVar59 = fVar60 - fVar45;
                                    }
                                    fVar60 = 0.0;
                                    if ((bVar18 || bVar17) || bVar19) {
                                      fVar60 = fVar63 - fVar46;
                                    }
                                    fVar63 = 0.0;
                                    if ((bVar18 || bVar17) || bVar19) {
                                      fVar63 = fVar68 - fVar47;
                                    }
                                    uVar37 = uVar26;
                                    if (*(uint *)(param_2 + 0x10) <= uVar26) {
                                      uVar37 = 0;
                                    }
                                    lVar28 = *(long *)(param_2 + 0x18) + (ulong)uVar37 * 0x48;
                                    fVar68 = fVar80;
                                    fVar45 = fVar78;
                                    fVar46 = fVar56;
                                    if (*(int *)(lVar28 + 0x40) != 1) {
                                      fVar68 = fVar79;
                                      fVar45 = fVar77;
                                      fVar46 = fVar75;
                                    }
                                    fVar47 = *(float *)(lVar28 + 0x3c);
                                    fVar60 = (((*(float *)(lVar28 + 0x38) *
                                                (fVar60 * (fVar45 * local_100._4_4_ +
                                                           fVar46 * (float)local_100 +
                                                          fVar68 * (float)uStack_f8) +
                                                 (fVar45 * local_110._4_4_ +
                                                  fVar46 * (float)local_110 +
                                                 fVar68 * (float)uStack_108) * fVar59 +
                                                (fVar45 * local_f0._4_4_ + fVar46 * (float)local_f0
                                                + fVar68 * (float)uStack_e8) * fVar63) * -100.0) /
                                              DAT_04c4bac0) / param_1) / 60.0;
                                    fVar59 = fVar47;
                                    if (fVar60 <= fVar47) {
                                      fVar59 = fVar60;
                                    }
                                    fVar63 = -fVar47;
                                    if (-fVar47 <= fVar60) {
                                      fVar63 = fVar59;
                                    }
                                    fVar59 = *(float *)(lVar25 + 0xa4) +
                                             (fVar63 - *(float *)(lVar25 + 0xa4)) * 0.5;
                                    *(float *)(lVar25 + 0xa4) = fVar59;
                                    fVar59 = fVar59 * 0.017453292;
                                    fVar45 = sinf(fVar59);
                                    fVar48 = cosf(fVar59);
                                    fVar46 = fVar45 * 0.0;
                                    fVar47 = fVar46 + fVar48 * 0.0;
                                    fVar50 = fVar48 + fVar46 * 0.0;
                                    fVar46 = fVar46 - fVar48 * 0.0;
                                    fVar52 = fVar48 * 0.0 * 0.0 - fVar45;
                                    fVar59 = fVar46 * fVar73;
                                    fVar60 = fVar46 * fVar54;
                                    fVar51 = fVar75 * 0.0;
                                    fVar53 = fVar75 * fVar52;
                                    fVar63 = fVar47 * fVar72;
                                    fVar68 = fVar45 * fVar78;
                                    fVar75 = fVar75 * fVar50 + fVar46 * fVar72 + fVar45 * fVar56;
                                    fVar45 = fVar45 * fVar80;
                                    fVar46 = fVar47 * fVar73;
                                    fVar47 = fVar47 * fVar54;
                                    fVar72 = fVar51 + fVar72 + fVar56 * -0.0;
                                    fVar56 = fVar53 + fVar63 + fVar48 * fVar56;
                                    fVar73 = fVar77 * 0.0 + fVar73 + fVar78 * -0.0;
                                    fVar78 = fVar77 * fVar52 + fVar46 + fVar48 * fVar78;
                                    fVar54 = fVar79 * 0.0 + fVar54 + fVar80 * -0.0;
                                    fVar80 = fVar79 * fVar52 + fVar47 + fVar48 * fVar80;
                                    fVar77 = fVar77 * fVar50 + fVar59 + fVar68;
                                    fVar79 = fVar79 * fVar50 + fVar60 + fVar45;
                                  }
                                  if (fVar71 != 1.0) {
                                    plVar21 = (long *)**(undefined8 **)
                                                        (*(long *)(*(long *)(lVar23 + 0x28) + 0x38)
                                                        + (long)*psVar41 * 8);
                                    (**(code **)(*plVar21 + 0x70))
                                              (plVar21,&local_e0,(long)*(short *)(lVar40 + 0x72));
                                    fVar72 = (float)local_e0 + fVar71 * (fVar72 - (float)local_e0);
                                    fVar73 = (float)local_d0 + fVar71 * (fVar73 - (float)local_d0);
                                    fVar54 = (float)local_c0 + fVar71 * (fVar54 - (float)local_c0);
                                    fVar56 = SQRT(fVar73 * fVar73 + fVar72 * fVar72 +
                                                  fVar54 * fVar54);
                                    if (0.0 < fVar56) {
                                      fVar56 = 1.0 / fVar56;
                                      fVar72 = fVar72 * fVar56;
                                      fVar73 = fVar73 * fVar56;
                                      fVar54 = fVar54 * fVar56;
                                    }
                                    local_e0._4_4_ =
                                         local_e0._4_4_ + fVar71 * (fVar75 - local_e0._4_4_);
                                    local_d0._4_4_ =
                                         local_d0._4_4_ + fVar71 * (fVar77 - local_d0._4_4_);
                                    local_c0._4_4_ =
                                         local_c0._4_4_ + fVar71 * (fVar79 - local_c0._4_4_);
                                    fVar75 = *(float *)(lVar36 + uVar22 * 0xa8 + 0x30);
                                    fVar72 = fVar72 * fVar75;
                                    fVar73 = fVar73 * fVar75;
                                    fVar54 = fVar54 * fVar75;
                                    fVar56 = -(fVar54 * local_d0._4_4_) + local_c0._4_4_ * fVar73;
                                    fVar78 = -(fVar72 * local_c0._4_4_) + local_e0._4_4_ * fVar54;
                                    fVar80 = -(fVar73 * local_e0._4_4_) + local_d0._4_4_ * fVar72;
                                    fVar75 = SQRT(fVar78 * fVar78 + fVar56 * fVar56 +
                                                  fVar80 * fVar80);
                                    if (0.0 < fVar75) {
                                      fVar75 = 1.0 / fVar75;
                                      fVar56 = fVar56 * fVar75;
                                      fVar78 = fVar78 * fVar75;
                                      fVar80 = fVar80 * fVar75;
                                    }
                                    fVar75 = *(float *)(lVar36 + uVar22 * 0xa8 + 0x38);
                                    fVar56 = fVar56 * fVar75;
                                    fVar78 = fVar78 * fVar75;
                                    fVar80 = fVar80 * fVar75;
                                    fVar75 = -(fVar80 * fVar73) + fVar54 * fVar78;
                                    fVar77 = -(fVar56 * fVar54) + fVar72 * fVar80;
                                    fVar79 = -(fVar78 * fVar72) + fVar73 * fVar56;
                                    fVar59 = SQRT(fVar77 * fVar77 + fVar75 * fVar75 +
                                                  fVar79 * fVar79);
                                    if (0.0 < fVar59) {
                                      fVar59 = 1.0 / fVar59;
                                      fVar75 = fVar75 * fVar59;
                                      fVar77 = fVar77 * fVar59;
                                      fVar79 = fVar79 * fVar59;
                                    }
                                    fVar69 = uStack_d8._4_4_ + fVar71 * (fVar69 - uStack_d8._4_4_);
                                    fVar70 = local_c8._4_4_ + fVar71 * (fVar70 - local_c8._4_4_);
                                    fVar49 = uStack_b8._4_4_ + fVar71 * (fVar49 - uStack_b8._4_4_);
                                    fVar59 = *(float *)(lVar36 + uVar22 * 0xa8 + 0x34);
                                    fVar75 = fVar75 * fVar59;
                                    fVar77 = fVar77 * fVar59;
                                    fVar79 = fVar79 * fVar59;
                                  }
                                  local_e0 = (undefined *)CONCAT44(fVar75,fVar72);
                                  local_d0 = CONCAT44(fVar77,fVar73);
                                  local_c0 = CONCAT44(fVar79,fVar54);
                                  uStack_d8 = CONCAT44(fVar69,fVar56);
                                  local_c8 = (undefined8 *)CONCAT44(fVar70,fVar78);
                                  uStack_b8 = CONCAT44(fVar49,fVar80);
                                  if ((param_4 & 1) != 0) {
                                    uVar37 = uVar26;
                                    if (*(uint *)(lVar23 + 0x18) <= uVar26) {
                                      uVar37 = 0;
                                    }
                                    lVar25 = *(long *)(lVar23 + 0x20) + (ulong)uVar37 * 0x38;
                                    uVar37 = uVar26;
                                    if (*(uint *)(lVar23 + 8) <= uVar26) {
                                      uVar37 = 0;
                                    }
                                    puVar2 = (uint *)(*(long *)(lVar23 + 0x10) +
                                                     (ulong)uVar37 * 0x10);
                                    uVar37 = *(uint *)(lVar25 + 0x30);
                                    uVar13 = *(uint *)(lVar25 + 0x34);
                                    if (*puVar2 <= uVar37) {
                                      uVar37 = 0;
                                    }
                                    puVar2 = (uint *)(*(long *)(puVar2 + 2) +
                                                     (long)(int)uVar37 * 0x10);
                                    if (*puVar2 <= uVar13) {
                                      uVar13 = 0;
                                    }
                                    lVar25 = *(long *)(puVar2 + 2) + (long)(int)uVar13 * 0xa8;
                                    plVar21 = (long *)**(undefined8 **)
                                                        (*(long *)(*(long *)(lVar23 + 0x28) + 0x38)
                                                        + (long)*(short *)(lVar25 + 0x70) * 8);
                                    (**(code **)(*plVar21 + 0x70))
                                              (plVar21,&local_110,(long)*(short *)(lVar25 + 0x72));
                                    uVar37 = uVar26;
                                    if (*(uint *)(lVar23 + 0x18) <= uVar26) {
                                      uVar37 = 0;
                                    }
                                    FUN_007535b4(&local_140,
                                                 *(long *)(lVar23 + 0x20) + (ulong)uVar37 * 0x38);
                                    fVar72 = SUB84(local_110,0);
                                    fVar60 = SUB84(local_140,0);
                                    fVar68 = (float)((ulong)local_140 >> 0x20);
                                    fVar46 = (float)lStack_138;
                                    fVar47 = (float)((ulong)lStack_138 >> 0x20);
                                    fVar54 = (float)((ulong)local_110 >> 0x20);
                                    fVar48 = (float)local_130;
                                    fVar50 = (float)((ulong)local_130 >> 0x20);
                                    fVar51 = SUB84(puStack_128,0);
                                    fVar52 = (float)((ulong)puStack_128 >> 0x20);
                                    fVar56 = (float)local_100;
                                    fVar80 = (float)((ulong)local_100 >> 0x20);
                                    fVar59 = (float)local_f0;
                                    fVar63 = (float)(local_f0 >> 0x20);
                                    fVar77 = (float)uStack_108;
                                    fVar53 = (float)local_120;
                                    fVar55 = (float)(local_120 >> 0x20);
                                    fVar57 = (float)uStack_118;
                                    fVar65 = (float)((ulong)uStack_118 >> 0x20);
                                    fVar70 = SUB84(uStack_f8,0);
                                    fVar45 = (float)uStack_e8;
                                    fVar73 = fVar60 * fVar72 + fVar48 * fVar54 + fVar53 * fVar77 +
                                             0.0;
                                    fVar75 = fVar68 * fVar72 + fVar50 * fVar54 + fVar55 * fVar77 +
                                             0.0;
                                    fVar79 = fVar46 * fVar72 + fVar51 * fVar54 + fVar57 * fVar77 +
                                             0.0;
                                    fVar78 = fVar60 * fVar56 + fVar48 * fVar80 + fVar53 * fVar70 +
                                             0.0;
                                    fVar69 = fVar68 * fVar56 + fVar50 * fVar80 + fVar55 * fVar70 +
                                             0.0;
                                    fVar49 = fVar46 * fVar56 + fVar51 * fVar80 + fVar57 * fVar70 +
                                             0.0;
                                    fVar60 = fVar60 * fVar59 + fVar48 * fVar63 + fVar53 * fVar45 +
                                             0.0;
                                    fVar68 = fVar68 * fVar59 + fVar50 * fVar63 + fVar55 * fVar45 +
                                             0.0;
                                    fVar46 = fVar46 * fVar59 + fVar51 * fVar63 + fVar57 * fVar45 +
                                             0.0;
                                    fVar48 = SUB84(local_e0,0);
                                    fVar50 = (float)((ulong)local_e0 >> 0x20);
                                    fVar51 = (float)uStack_d8;
                                    fVar53 = (float)((ulong)uStack_d8 >> 0x20);
                                    fVar55 = (float)local_d0;
                                    fVar58 = (float)((ulong)local_d0 >> 0x20);
                                    fVar62 = SUB84(local_c8,0);
                                    fVar66 = (float)((ulong)local_c8 >> 0x20);
                                    fVar57 = (float)local_c0;
                                    fVar61 = (float)(local_c0 >> 0x20);
                                    fVar64 = (float)uStack_b8;
                                    fVar67 = (float)((ulong)uStack_b8 >> 0x20);
                                    local_e0 = (undefined *)
                                               CONCAT44(fVar50 * fVar73 + fVar58 * fVar75 +
                                                        fVar61 * fVar79 + 0.0,
                                                        fVar48 * fVar73 + fVar55 * fVar75 +
                                                        fVar57 * fVar79 + 0.0);
                                    uStack_d8 = CONCAT44((float)((ulong)uStack_108 >> 0x20) +
                                                         fVar47 * fVar72 + fVar52 * fVar54 +
                                                         fVar65 * fVar77 +
                                                         fVar53 * fVar73 + fVar66 * fVar75 +
                                                         fVar67 * fVar79,
                                                         fVar51 * fVar73 + fVar62 * fVar75 +
                                                         fVar64 * fVar79 + 0.0);
                                    local_d0 = CONCAT44(fVar50 * fVar78 + fVar58 * fVar69 +
                                                        fVar61 * fVar49 + 0.0,
                                                        fVar48 * fVar78 + fVar55 * fVar69 +
                                                        fVar57 * fVar49 + 0.0);
                                    local_c8 = (undefined8 *)
                                               CONCAT44((float)((ulong)uStack_f8 >> 0x20) +
                                                        fVar47 * fVar56 + fVar52 * fVar80 +
                                                        fVar65 * fVar70 +
                                                        fVar53 * fVar78 + fVar66 * fVar69 +
                                                        fVar67 * fVar49,
                                                        fVar51 * fVar78 + fVar62 * fVar69 +
                                                        fVar64 * fVar49 + 0.0);
                                    local_c0 = CONCAT44(fVar50 * fVar60 + fVar58 * fVar68 +
                                                        fVar61 * fVar46 + 0.0,
                                                        fVar48 * fVar60 + fVar55 * fVar68 +
                                                        fVar57 * fVar46 + 0.0);
                                    uStack_b8 = CONCAT44((float)((ulong)uStack_e8 >> 0x20) +
                                                         fVar47 * fVar59 + fVar52 * fVar63 +
                                                         fVar65 * fVar45 +
                                                         fVar53 * fVar60 + fVar66 * fVar68 +
                                                         fVar67 * fVar46,
                                                         fVar51 * fVar60 + fVar62 * fVar68 +
                                                         fVar64 * fVar46 + 0.0);
                                  }
                                  plVar21 = (long *)**(undefined8 **)
                                                      (*(long *)(*(long *)(lVar23 + 0x28) + 0x38) +
                                                      (long)*psVar41 * 8);
                                  (**(code **)(*plVar21 + 0x68))
                                            (plVar21,&local_e0,(long)*(short *)(lVar40 + 0x72));
                                  uVar37 = uVar26;
                                  if (*(uint *)(param_2 + 0x10) <= uVar26) {
                                    uVar37 = 0;
                                  }
                                  if (((((*(byte *)(*(long *)(param_2 + 0x18) + (ulong)uVar37 * 0x48
                                                   + 0x18) >> 5 & 1) != 0) &&
                                       (*(long *)(param_2 + 0x50) != 0)) &&
                                      (lVar25 = *(long *)(*(long *)(param_2 + 0x50) + 0x28),
                                      lVar25 != 0)) &&
                                     (lVar25 = *(long *)**(undefined8 **)(lVar25 + 0x38),
                                     (*(byte *)(lVar25 + 0xae) >> 3 & 1) != 0)) {
                                    plVar21 = (long *)(lVar25 + 0x80);
                                    uVar22 = (**(code **)(*plVar21 + 0x10))(plVar21);
                                    if ((uVar22 & 1) != 0) {
                                      local_100 = 0;
                                      local_110 = (undefined *)CONCAT44(local_110._4_4_,2);
                                      uStack_f8 = &local_e0;
                                      local_f0 = local_f0 & 0xffffffff00000000;
                                      uStack_108 = lVar25;
                                      (*(code *)**(undefined8 **)(lVar25 + 0x80))
                                                (plVar21,&local_110);
                                    }
                                  }
                                  goto LAB_03f0318c;
                                }
                              }
                            }
                          }
                          if (param_3 != 0) {
                            uVar34 = *(ulong *)(*(long *)(lVar29 + 0x18) + 0x18);
                            if (*(long *)(lVar23 + 0x28) == 0) {
LAB_03f04078:
                              local_e0 = PTR_DAT_04bb2020 + 0x10;
                              uStack_d8 = *(long *)(PTR_PTR_04bb2238 + 8);
                            }
                            else {
                              lVar24 = (long)(int)(uint)local_1a0;
                              if (uVar37 <= (uint)local_1a0) {
                                lVar24 = 0;
                              }
                              puVar2 = (uint *)(lVar25 + lVar24 * 0x10);
                              uVar7 = uVar38;
                              if (*puVar2 <= (uint)uVar38) {
                                uVar7 = 0;
                              }
                              lVar29 = *(long *)(puVar2 + 2) + uVar7 * 0xa8;
                              lVar24 = (long)*(short *)(lVar29 + 0x70);
                              sVar15 = *(short *)(lVar29 + 0x72);
                              if (lVar24 == -1 || sVar15 == -1) goto LAB_03f04078;
                              plVar21 = (long *)**(undefined8 **)
                                                  (*(long *)(*(long *)(lVar23 + 0x28) + 0x38) +
                                                  lVar24 * 8);
                              (**(code **)(*plVar21 + 0x40))(&local_e0,plVar21,(int)sVar15);
                            }
                            (**(code **)(local_e0 + 0x18))(&local_e0);
                            FUN_038d1270(param_3,&DAT_04079de0,uVar34 & 0xfffffffffffffffe,
                                         uVar38 & 0xffffffff,uStack_d8);
                            uVar35 = *(uint *)(param_2 + 0x10);
                            lVar28 = *(long *)(param_2 + 0x18);
                          }
                          uVar5 = uVar26;
                          if (uVar35 <= uVar26) {
                            uVar5 = 0;
                          }
                          lVar28 = lVar28 + (ulong)uVar5 * 0x48;
                          *(uint *)(lVar28 + 0x18) = *(uint *)(lVar28 + 0x18) | 0x2000;
                        }
                        goto joined_r0x03f04128;
                      }
LAB_03f0318c:
                      uVar38 = uVar38 + 1;
                      lVar32 = lVar32 + 0x40;
                    } while (uVar27 != uVar38);
                  }
                  local_1a0 = local_1a0 + 1;
                  bVar20 = uVar5 <= local_1a0;
                } while (local_1a0 != uVar5);
joined_r0x03f04128:
                if (!bVar20) {
                  return bVar33;
                }
              }
            }
            uVar27 = *(uint *)(param_2 + 0x10);
            lVar24 = *(long *)(param_2 + 0x18);
          }
          uVar5 = uVar26;
          if (uVar27 <= uVar26) {
            uVar5 = 0;
          }
          if ((*(byte *)(lVar24 + (ulong)uVar5 * 0x48 + 0x19) >> 4 & 1) != 0) {
            FUN_03f05120(lVar39,uVar26);
          }
        }
      }
      uVar26 = uVar26 + 1;
      bVar33 = (int)uVar12 <= (int)uVar26;
    } while (uVar26 != uVar12);
  }
  return bVar33;
}

