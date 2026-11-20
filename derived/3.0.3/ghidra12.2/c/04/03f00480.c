
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_03f00480(long param_1,ulong param_2,long param_3)

{
  undefined1 (*pauVar1) [16];
  undefined1 (*pauVar2) [12];
  undefined8 *puVar3;
  undefined8 uVar4;
  uint uVar5;
  undefined4 uVar6;
  uint uVar7;
  short sVar8;
  int iVar9;
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  undefined1 auVar18 [12];
  undefined1 auVar19 [12];
  undefined1 auVar20 [16];
  undefined *puVar21;
  int *piVar22;
  long *plVar23;
  ulong uVar24;
  uint uVar25;
  uint uVar26;
  long lVar27;
  long lVar28;
  uint uVar29;
  uint *puVar30;
  long lVar31;
  long *plVar32;
  long lVar33;
  long lVar34;
  ulong uVar35;
  long lVar36;
  long lVar37;
  long lVar38;
  ulong uVar39;
  ulong uVar40;
  float fVar41;
  float fVar42;
  float fVar43;
  float fVar44;
  float fVar45;
  ulong uVar48;
  undefined1 auVar49 [16];
  undefined1 auVar50 [16];
  float fVar46;
  float fVar47;
  undefined1 auVar51 [16];
  undefined8 uVar57;
  undefined1 auVar52 [16];
  undefined1 auVar53 [16];
  undefined1 auVar54 [16];
  undefined1 auVar55 [16];
  undefined1 auVar56 [16];
  float fVar58;
  float fVar59;
  float fVar63;
  float fVar64;
  undefined1 auVar60 [16];
  undefined1 auVar61 [16];
  undefined1 auVar62 [16];
  float fVar65;
  float fVar66;
  float fVar67;
  float fVar68;
  undefined8 uVar69;
  uint uVar70;
  float fVar71;
  float fVar72;
  float fVar73;
  float fVar74;
  float fVar75;
  float fVar76;
  float fVar77;
  float fVar78;
  float local_1d0;
  float local_1cc;
  float local_1c8;
  float local_1c4;
  float local_1c0;
  float local_1bc;
  float local_1b8;
  float local_1b4;
  float local_1b0;
  float local_1ac;
  ulong local_1a0;
  undefined8 uStack_198;
  float local_190;
  float fStack_18c;
  float fStack_188;
  float fStack_184;
  undefined8 local_180;
  long lStack_178;
  undefined8 local_140;
  undefined8 uStack_138;
  undefined8 local_130;
  undefined8 uStack_128;
  ulong local_120;
  undefined8 uStack_118;
  undefined8 local_110;
  undefined8 uStack_108;
  undefined8 local_100;
  undefined8 *local_f8;
  float local_f0;
  float fStack_ec;
  undefined8 uStack_e8;
  undefined8 local_e0;
  undefined8 uStack_d8;
  undefined8 local_d0;
  undefined8 local_c8;
  undefined8 local_c0;
  undefined8 uStack_b8;
  
  puVar21 = PTR_DAT_04bb2f80;
  uVar25 = *(uint *)(param_1 + 0x48);
  if (((param_2 & 1) != 0) && ((uVar25 >> 0xe & 1) == 0)) {
    return;
  }
  uVar5 = *(uint *)(param_1 + 0x10);
  *(undefined8 *)(param_1 + 0x40) = 0x3f80000000000000;
  uVar57 = *(undefined8 *)(puVar21 + 0x10);
  puVar3 = *(undefined8 **)(puVar21 + 0x18);
  uVar39 = *(ulong *)(puVar21 + 0x20);
  uVar4 = *(undefined8 *)(puVar21 + 0x28);
  uVar69 = *(undefined8 *)puVar21;
  lVar38 = *(long *)(puVar21 + 8);
  local_140 = uVar69;
  uStack_138 = lVar38;
  local_130 = uVar57;
  uStack_128 = puVar3;
  local_120 = uVar39;
  uStack_118 = uVar4;
  if ((uVar25 >> 0x11 & 1) == 0) {
    fVar41 = 1.0;
    fVar42 = 0.0;
    uVar25 = uVar25 & 0xfffbffff;
    local_1d0 = 1.0;
    lStack_178 = _UNK_04102208;
    local_180 = _DAT_04102200;
    fStack_188 = _UNK_04102888;
    fStack_184 = _UNK_0410288c;
    local_190 = _DAT_04102880;
    fStack_18c = _UNK_04102884;
    uStack_198 = _UNK_041023d8;
    local_1a0 = _DAT_041023d0;
    local_1b0 = 0.0;
    local_1ac = 0.0;
    local_1b8 = 0.0;
    local_1b4 = 0.0;
    local_1c0 = 0.0;
    local_1bc = 1.0;
    local_1cc = 0.0;
    local_1c8 = 0.0;
    local_1c4 = 0.0;
    goto LAB_03f0078c;
  }
  local_e0 = uVar69;
  uStack_d8 = lVar38;
  local_d0 = uVar57;
  local_c8 = puVar3;
  local_c0 = uVar39;
  uStack_b8 = uVar4;
  if (param_3 == 0) {
LAB_03f005a0:
    local_f0 = (float)uVar39;
    fStack_ec = (float)(uVar39 >> 0x20);
    local_110 = uVar69;
    uStack_108 = lVar38;
    local_100 = uVar57;
    local_f8 = puVar3;
    uStack_e8 = uVar4;
    if ((*(long *)(param_1 + 0x50) == 0) ||
       (lVar38 = *(long *)(*(long *)(param_1 + 0x50) + 0x28), lVar38 == 0)) goto LAB_03f006d0;
    plVar32 = *(long **)**(undefined8 **)(lVar38 + 0x38);
    (**(code **)(*plVar32 + 0x70))(plVar32,&local_110,0);
    lVar38 = uStack_d8;
    uVar57 = local_e0;
    fVar72 = (float)local_e0;
    local_1cc = (float)local_d0;
    fVar46 = (float)((ulong)local_e0 >> 0x20);
    fVar41 = (float)local_100;
    fVar42 = (float)((ulong)local_100 >> 0x20);
    fVar43 = SUB84(local_f8,0);
    fVar63 = (float)((ulong)local_f8 >> 0x20);
    fVar65 = (float)local_c0;
    local_1bc = (float)((ulong)local_d0 >> 0x20);
    fVar67 = (float)(local_c0 >> 0x20);
    fVar73 = (float)((ulong)uStack_d8 >> 0x20);
    local_1b0 = (float)((ulong)local_c8 >> 0x20);
    fVar45 = (float)((ulong)uStack_b8 >> 0x20);
    fVar66 = (float)uStack_d8;
    fVar44 = (float)uStack_e8;
    fVar64 = (float)((ulong)uStack_e8 >> 0x20);
    local_1b4 = SUB84(local_c8,0);
    fVar58 = (float)uStack_b8;
    local_100 = CONCAT44(local_110._4_4_ * local_1cc + fVar42 * local_1bc + fStack_ec * local_1b4 +
                         0.0,(float)local_110 * local_1cc + fVar41 * local_1bc +
                             local_f0 * local_1b4 + 0.0);
    local_f8 = (undefined8 *)
               CONCAT44(local_1b0 +
                        uStack_108._4_4_ * local_1cc + fVar63 * local_1bc + fVar64 * local_1b4,
                        (float)uStack_108 * local_1cc + fVar43 * local_1bc + fVar44 * local_1b4 +
                        0.0);
    auVar49._0_4_ = (float)local_110 * fVar65 + fVar41 * fVar67 + local_f0 * fVar58 + 0.0;
    auVar49._4_4_ = local_110._4_4_ * fVar65 + fVar42 * fVar67 + fStack_ec * fVar58 + 0.0;
    auVar49._8_4_ = (float)uStack_108 * fVar65 + fVar43 * fVar67 + fVar44 * fVar58 + 0.0;
    auVar49._12_4_ = fVar45 + uStack_108._4_4_ * fVar65 + fVar63 * fVar67 + fVar64 * fVar58;
    uStack_108 = CONCAT44(fVar73 + uStack_108._4_4_ * fVar72 + fVar63 * fVar46 + fVar64 * fVar66,
                          (float)uStack_108 * fVar72 + fVar43 * fVar46 + fVar44 * fVar66 + 0.0);
    local_110 = CONCAT44(local_110._4_4_ * fVar72 + fVar42 * fVar46 + fStack_ec * fVar66 + 0.0,
                         (float)local_110 * fVar72 + fVar41 * fVar46 + local_f0 * fVar66 + 0.0);
    uStack_e8 = auVar49._8_8_;
    local_f0 = auVar49._0_4_;
    fStack_ec = auVar49._4_4_;
    uVar39 = FUN_03f04168(&local_140,&local_110,1);
    if ((uVar39 & 1) == 0) {
      auVar50._8_8_ = lVar38;
      auVar50._0_8_ = uVar57;
    }
    else {
      fVar63 = (float)local_120;
      fVar44 = (float)(local_120 >> 0x20);
      fVar41 = local_1cc * fVar44;
      fVar42 = local_1bc * fVar44;
      fVar43 = local_1b4 * fVar44;
      fVar44 = local_1b0 * fVar44;
      fVar64 = (float)uStack_118;
      auVar50._0_4_ =
           fVar72 * (float)local_140 + local_1cc * local_140._4_4_ + fVar65 * (float)uStack_138 +
           0.0;
      auVar50._4_4_ =
           fVar46 * (float)local_140 + local_1bc * local_140._4_4_ + fVar67 * (float)uStack_138 +
           0.0;
      auVar50._8_4_ =
           fVar66 * (float)local_140 + local_1b4 * local_140._4_4_ + fVar58 * (float)uStack_138 +
           0.0;
      auVar50._12_4_ =
           uStack_138._4_4_ +
           fVar73 * (float)local_140 + local_1b0 * local_140._4_4_ + fVar45 * (float)uStack_138;
      local_1cc = fVar72 * (float)local_130 + local_1cc * local_130._4_4_ +
                  fVar65 * (float)uStack_128 + 0.0;
      local_1bc = fVar46 * (float)local_130 + local_1bc * local_130._4_4_ +
                  fVar67 * (float)uStack_128 + 0.0;
      local_1b4 = fVar66 * (float)local_130 + local_1b4 * local_130._4_4_ +
                  fVar58 * (float)uStack_128 + 0.0;
      local_1b0 = uStack_128._4_4_ +
                  fVar73 * (float)local_130 + local_1b0 * local_130._4_4_ +
                  fVar45 * (float)uStack_128;
      fVar65 = fVar72 * fVar63 + fVar41 + fVar65 * fVar64 + 0.0;
      fVar67 = fVar46 * fVar63 + fVar42 + fVar67 * fVar64 + 0.0;
      fVar58 = fVar66 * fVar63 + fVar43 + fVar58 * fVar64 + 0.0;
      fVar45 = (float)((ulong)uStack_118 >> 0x20) + fVar73 * fVar63 + fVar44 + fVar45 * fVar64;
    }
    local_1c8 = auVar50._4_4_;
    uVar25 = 0x40000;
    local_1c4 = auVar50._8_4_;
    local_1d0 = auVar50._0_4_;
    local_1c0 = auVar50._12_4_;
    uStack_138 = auVar50._8_8_;
    local_140 = auVar50._0_8_;
    uStack_128 = (undefined8 *)CONCAT44(local_1b0,local_1b4);
    local_130 = CONCAT44(local_1bc,local_1cc);
    uStack_118 = CONCAT44(fVar45,fVar58);
    local_120 = CONCAT44(fVar67,fVar65);
    fVar41 = fVar58;
    fVar42 = fVar45;
    local_190 = local_1cc;
    fStack_18c = local_1bc;
    fStack_188 = local_1b4;
    fStack_184 = local_1b0;
    local_1b8 = fVar65;
    local_1ac = fVar67;
  }
  else {
    if (*(long *)(param_3 + 0x50) != 0) {
      lVar27 = *(long *)(*(long *)(param_3 + 0x50) + 0x28);
      if (lVar27 != 0) {
        plVar32 = *(long **)**(undefined8 **)(lVar27 + 0x38);
        (**(code **)(*plVar32 + 0x70))(plVar32,&local_110,0);
        FUN_03f04168(&local_e0,&local_110,1);
        goto LAB_03f005a0;
      }
    }
LAB_03f006d0:
    fVar41 = 1.0;
    auVar50._8_8_ = _UNK_04102208;
    auVar50._0_8_ = _DAT_04102200;
    uVar25 = 0;
    fVar58 = (float)_UNK_041023d8;
    fVar45 = (float)((ulong)_UNK_041023d8 >> 0x20);
    fVar65 = (float)_DAT_041023d0;
    fVar67 = (float)(_DAT_041023d0 >> 0x20);
    fVar42 = 0.0;
    local_1b0 = 0.0;
    local_1ac = 0.0;
    local_1b8 = 0.0;
    local_1b4 = 0.0;
    local_1c0 = 0.0;
    local_1bc = 1.0;
    local_1cc = 0.0;
    local_1c8 = 0.0;
    local_1c4 = 0.0;
    local_1d0 = 1.0;
    local_190 = _DAT_04102880;
    fStack_18c = _UNK_04102884;
    fStack_188 = _UNK_04102888;
    fStack_184 = _UNK_0410288c;
  }
  uVar25 = *(uint *)(param_1 + 0x48) & 0xfffbffff | uVar25;
  uStack_198 = CONCAT44(fVar45,fVar58);
  local_1a0 = CONCAT44(fVar67,fVar65);
  lStack_178 = auVar50._8_8_;
  local_180 = auVar50._0_8_;
LAB_03f0078c:
  *(uint *)(param_1 + 0x48) = uVar25;
  if (0 < (int)uVar5) {
    uVar25 = 0;
    fVar63 = (float)((ulong)lStack_178 >> 0x20);
    fVar67 = (float)((ulong)uStack_198 >> 0x20);
    fVar43 = (float)((ulong)local_180 >> 0x20);
    fVar44 = (float)lStack_178;
    fVar64 = (float)(local_1a0 >> 0x20);
    fVar65 = (float)uStack_198;
    pauVar1 = (undefined1 (*) [16])(PTR_DAT_04bd4c80 + 0x240);
    auVar19 = *(undefined1 (*) [12])*pauVar1;
    auVar20 = *pauVar1;
    auVar50 = *pauVar1;
    auVar49 = *pauVar1;
    auVar51._0_8_ = CONCAT44(-*(float *)(PTR_DAT_04bd4c80 + 0x244),-*(float *)*pauVar1);
    auVar51._8_4_ = -*(float *)(PTR_DAT_04bd4c80 + 0x248);
    auVar51._12_4_ = -*(float *)(PTR_DAT_04bd4c80 + 0x24c);
    uVar57 = auVar51._8_8_;
    do {
      uVar26 = *(uint *)(param_1 + 0x10);
      lVar38 = *(long *)(param_1 + 0x18);
      uVar70 = uVar25;
      if (uVar26 <= uVar25) {
        uVar70 = 0;
      }
      uVar39 = (ulong)uVar70;
      plVar32 = (long *)(lVar38 + uVar39 * 0x48);
      if ((*(byte *)(plVar32 + 3) & 3) != 0) {
        uVar70 = *(uint *)(lVar38 + uVar39 * 0x48 + 8);
        if ((int)uVar70 < 1) {
          lVar27 = lVar38;
        }
        else {
          uVar26 = 0;
          do {
            uVar29 = uVar25;
            if (*(uint *)(param_1 + 0x10) <= uVar25) {
              uVar29 = 0;
            }
            lVar27 = *(long *)(param_1 + 0x18) + (ulong)uVar29 * 0x48;
            uVar29 = uVar26;
            if (*(uint *)(lVar27 + 8) <= uVar26) {
              uVar29 = 0;
            }
            if (*(long *)(*(long *)(lVar27 + 0x10) + (ulong)uVar29 * 0x20 + 8) != 0) {
              piVar22 = (int *)FUN_0054e5d0();
              if (((param_2 & 1) == 0) || ((*(byte *)(param_1 + 0x49) >> 6 & 1) == 0)) {
code_r0x03f00a48:
                switch(*piVar22) {
                case 0:
                  uVar29 = uVar25;
                  if (*(uint *)(param_1 + 0x10) <= uVar25) {
                    uVar29 = 0;
                  }
                  *(undefined4 *)(*(long *)(param_1 + 0x18) + (ulong)uVar29 * 0x48 + 0x1c) =
                       0x3f800000;
                  uVar29 = uVar25;
                  if (*(uint *)(param_1 + 0x10) <= uVar25) {
                    uVar29 = 0;
                  }
                  puVar30 = (uint *)(*(long *)(param_1 + 0x18) + (ulong)uVar29 * 0x48 + 0x18);
                  uVar7 = *puVar30;
                  if ((uVar7 & 1) == 0) {
                    lVar27 = *(long *)(param_1 + 0x18) + (ulong)uVar29 * 0x48;
                    uVar29 = uVar26;
                    if (*(uint *)(lVar27 + 8) <= uVar26) {
                      uVar29 = 0;
                    }
                    FUN_0054e630(*(undefined8 *)
                                  (*(long *)(lVar27 + 0x10) + (ulong)uVar29 * 0x20 + 8));
                    goto LAB_03f008fc;
                  }
                  *puVar30 = uVar7 | 2;
                  uVar29 = uVar25;
                  if (*(uint *)(param_1 + 0x10) <= uVar25) {
                    uVar29 = 0;
                  }
                  lVar27 = *(long *)(param_1 + 0x18) + (ulong)uVar29 * 0x48;
                  uVar29 = *(uint *)(lVar27 + 0x18) & 0xfffffffb;
                  goto LAB_03f00938;
                case 1:
                  goto switchD_03f00a54_caseD_1;
                case 2:
                  uVar29 = uVar25;
                  if (*(uint *)(param_1 + 0x10) <= uVar25) {
                    uVar29 = 0;
                  }
                  lVar27 = *(long *)(param_1 + 0x18) + (ulong)uVar29 * 0x48;
                  uVar29 = uVar26;
                  if (*(uint *)(lVar27 + 8) <= uVar26) {
                    uVar29 = 0;
                  }
                  fVar58 = 1.0 - *(float *)(*(long *)(*(long *)(lVar27 + 0x10) +
                                                      (ulong)uVar29 * 0x20 + 8) + 0x28);
                  break;
                case 3:
                  uVar29 = uVar25;
                  if (*(uint *)(param_1 + 0x10) <= uVar25) {
                    uVar29 = 0;
                  }
                  lVar27 = *(long *)(param_1 + 0x18) + (ulong)uVar29 * 0x48;
                  uVar29 = uVar26;
                  if (*(uint *)(lVar27 + 8) <= uVar26) {
                    uVar29 = 0;
                  }
                  fVar58 = *(float *)(*(long *)(*(long *)(lVar27 + 0x10) + (ulong)uVar29 * 0x20 + 8)
                                     + 0x28);
                  break;
                default:
                  goto switchD_03f00a54_default;
                }
                fVar45 = 1.0;
                if (fVar58 <= 1.0) {
                  fVar45 = fVar58;
                }
                fVar72 = 0.0;
                if (0.0 <= fVar58) {
                  fVar72 = fVar45;
                }
                *(float *)(lVar27 + 0x1c) = fVar72;
LAB_03f008fc:
                uVar29 = uVar25;
                if (*(uint *)(param_1 + 0x10) <= uVar25) {
                  uVar29 = 0;
                }
                lVar27 = *(long *)(param_1 + 0x18) + (ulong)uVar29 * 0x48;
                *(uint *)(lVar27 + 0x18) = *(uint *)(lVar27 + 0x18) | 2;
              }
              else {
                uVar29 = uVar25;
                if (*(uint *)(param_1 + 0x10) <= uVar25) {
                  uVar29 = 0;
                }
                puVar30 = (uint *)(*(long *)(param_1 + 0x18) + (ulong)uVar29 * 0x48 + 0x18);
                uVar29 = *puVar30;
                if (((uVar29 >> 3 & 1) == 0) || (*piVar22 == 1)) goto code_r0x03f00a48;
                *puVar30 = uVar29 & 0xfffffffe;
                uVar29 = uVar25;
                if (*(uint *)(param_1 + 0x10) <= uVar25) {
                  uVar29 = 0;
                }
                lVar27 = *(long *)(param_1 + 0x18) + (ulong)uVar29 * 0x48;
                uVar29 = uVar26;
                if (*(uint *)(lVar27 + 8) <= uVar26) {
                  uVar29 = 0;
                }
                FUN_0054e750(*(undefined8 *)(*(long *)(lVar27 + 0x10) + (ulong)uVar29 * 0x20 + 8));
                uVar29 = uVar25;
                if (*(uint *)(param_1 + 0x10) <= uVar25) {
                  uVar29 = 0;
                }
                *(undefined4 *)(*(long *)(param_1 + 0x18) + (ulong)uVar29 * 0x48 + 0x1c) = 0;
switchD_03f00a54_caseD_1:
                uVar29 = uVar25;
                if (*(uint *)(param_1 + 0x10) <= uVar25) {
                  uVar29 = 0;
                }
                *(undefined4 *)(*(long *)(param_1 + 0x18) + (ulong)uVar29 * 0x48 + 0x1c) = 0;
                uVar29 = uVar25;
                if (*(uint *)(param_1 + 0x10) <= uVar25) {
                  uVar29 = 0;
                }
                puVar30 = (uint *)(*(long *)(param_1 + 0x18) + (ulong)uVar29 * 0x48 + 0x18);
                uVar7 = *puVar30;
                if ((uVar7 & 1) != 0) {
                  lVar27 = *(long *)(param_1 + 0x18) + (ulong)uVar29 * 0x48;
                  uVar29 = uVar26;
                  if (*(uint *)(lVar27 + 8) <= uVar26) {
                    uVar29 = 0;
                  }
                  FUN_0054e5e0(*(undefined8 *)(*(long *)(lVar27 + 0x10) + (ulong)uVar29 * 0x20 + 8))
                  ;
                  goto LAB_03f008fc;
                }
                *puVar30 = uVar7 & 0xfffffffd;
              }
              uVar29 = uVar25;
              if (*(uint *)(param_1 + 0x10) <= uVar25) {
                uVar29 = 0;
              }
              lVar27 = *(long *)(param_1 + 0x18) + (ulong)uVar29 * 0x48;
              uVar29 = *(uint *)(lVar27 + 0x18) | 4;
LAB_03f00938:
              *(uint *)(lVar27 + 0x18) = uVar29;
switchD_03f00a54_default:
              uVar29 = uVar25;
              if (*(uint *)(param_1 + 0x10) <= uVar25) {
                uVar29 = 0;
              }
              lVar27 = *(long *)(param_1 + 0x18) + (ulong)uVar29 * 0x48;
              uVar29 = uVar26;
              if (*(uint *)(lVar27 + 8) <= uVar26) {
                uVar29 = 0;
              }
              FUN_0054e870(*(undefined8 *)(*(long *)(lVar27 + 0x10) + (ulong)uVar29 * 0x20 + 8));
            }
            uVar26 = uVar26 + 1;
          } while (uVar70 != uVar26);
          uVar26 = *(uint *)(param_1 + 0x10);
          lVar27 = *(long *)(param_1 + 0x18);
        }
        uVar70 = uVar25;
        if (uVar26 <= uVar25) {
          uVar70 = 0;
        }
        lVar37 = *(long *)(param_1 + 0x50);
        lVar33 = lVar27 + (ulong)uVar70 * 0x48;
        fVar45 = *(float *)(lVar33 + 0x1c);
        fVar58 = *(float *)(param_1 + 0x40);
        if (*(float *)(param_1 + 0x40) <= fVar45) {
          fVar58 = fVar45;
        }
        *(float *)(param_1 + 0x40) = fVar58;
        fVar45 = *(float *)(lVar33 + 0x1c);
        fVar58 = *(float *)(param_1 + 0x44);
        if (fVar45 <= *(float *)(param_1 + 0x44)) {
          fVar58 = fVar45;
        }
        *(float *)(param_1 + 0x44) = fVar58;
        if (lVar37 != 0) {
          if (*(long *)(lVar37 + 0x28) != 0) {
            uVar70 = uVar25;
            if (*(uint *)(lVar37 + 0x18) <= uVar25) {
              uVar70 = 0;
            }
            lVar33 = *(long *)(lVar37 + 0x20) + (ulong)uVar70 * 0x38;
            uVar29 = uVar25;
            if (*(uint *)(lVar37 + 8) <= uVar25) {
              uVar29 = 0;
            }
            puVar30 = (uint *)(*(long *)(lVar37 + 0x10) + (ulong)uVar29 * 0x10);
            uVar29 = *(uint *)(lVar33 + 0x30);
            uVar7 = *(uint *)(lVar33 + 0x34);
            if (*puVar30 <= uVar29) {
              uVar29 = 0;
            }
            puVar30 = (uint *)(*(long *)(puVar30 + 2) + (long)(int)uVar29 * 0x10);
            if (*puVar30 <= uVar7) {
              uVar7 = 0;
            }
            lVar36 = *(long *)(puVar30 + 2) + (long)(int)uVar7 * 0xa8;
            lVar33 = (long)*(short *)(lVar36 + 0x70);
            sVar8 = *(short *)(lVar36 + 0x72);
            if (lVar33 != -1 && sVar8 != -1) {
              plVar23 = (long *)**(undefined8 **)
                                  (*(long *)(*(long *)(lVar37 + 0x28) + 0x38) + lVar33 * 8);
              (**(code **)(*plVar23 + 0x70))
                        (plVar23,*(long *)(lVar37 + 0x20) + (ulong)uVar70 * 0x38,(int)sVar8);
              uVar26 = *(uint *)(param_1 + 0x10);
              lVar27 = *(long *)(param_1 + 0x18);
            }
            uVar70 = uVar25;
            if (uVar26 <= uVar25) {
              uVar70 = 0;
            }
            lVar27 = *(long *)(lVar27 + (ulong)uVar70 * 0x48);
            if (lVar27 != 0) {
              if (param_3 == 0) {
                if ((*(byte *)(param_1 + 0x4a) & 1) == 0) goto LAB_03f00cfc;
                fVar45 = *(float *)(param_1 + 0xcc);
                fVar58 = *(float *)(param_1 + 0xd0);
                fVar72 = *(float *)(param_1 + 0xd4);
LAB_03f00d48:
                fVar46 = SQRT(fVar58 * fVar58 + fVar45 * fVar45 + fVar72 * fVar72);
                if (0.0 < fVar46) {
                  fVar66 = 1.0 / fVar46;
                  fVar45 = fVar45 * fVar66;
                  fVar58 = fVar58 * fVar66;
                  fVar72 = fVar72 * fVar66;
                  *(float *)(param_1 + 0xcc) = fVar45;
                  *(float *)(param_1 + 0xd0) = fVar58;
                  *(float *)(param_1 + 0xd4) = fVar72;
                }
                if (fVar46 == 0.0) {
                  fVar45 = 0.0;
                  fVar72 = 0.0;
                  fVar58 = 1.0;
                  uVar6 = *(undefined4 *)(PTR_DAT_04bb3ea0 + 8);
                  *(undefined8 *)(param_1 + 0xcc) = *(undefined8 *)PTR_DAT_04bb3ea0;
                  *(undefined4 *)(param_1 + 0xd4) = uVar6;
                }
                fVar74 = -(fVar45 * fVar58) + fVar72 * fVar72;
                fVar66 = -(fVar72 * fVar45) + fVar58 * fVar58;
                uVar69 = *(undefined8 *)(param_1 + 0xd8);
                fVar73 = -(fVar58 * fVar72) + fVar45 * fVar45;
                uVar70 = *(uint *)(param_1 + 0xe0);
                lVar33 = *(long *)(*(long *)(param_1 + 0xe8) + 0x18);
                fVar46 = (fVar58 + fVar58 + fVar66 + 1.0) * 0.25;
                fVar66 = fVar46 + (fVar58 + fVar66) * -0.5;
                fVar58 = fVar46 + (fVar58 + fVar58) * -0.5;
                if (fVar46 <= fVar66) {
                  if (fVar66 <= fVar58) goto LAB_03f00e80;
                  fVar58 = SQRT(fVar66);
                  if (NAN(fVar58)) {
                    fVar58 = sqrtf(fVar66);
                  }
                  fVar46 = 0.25 / fVar58;
                  uStack_d8 = CONCAT44((fVar74 - fVar45) * fVar46,(fVar72 + fVar73) * fVar46);
                  fVar46 = (fVar45 + fVar72) * fVar46;
                }
                else if (fVar46 <= fVar58) {
LAB_03f00e80:
                  fVar46 = SQRT(fVar58);
                  if (NAN(fVar46)) {
                    fVar46 = sqrtf(fVar58);
                  }
                  fVar58 = 0.25 / fVar46;
                  uStack_d8 = CONCAT44((fVar72 - fVar45) * fVar58,fVar46);
                  fVar46 = (fVar45 + fVar74) * fVar58;
                  fVar58 = (fVar72 + fVar73) * fVar58;
                }
                else {
                  fVar66 = SQRT(fVar46);
                  if (NAN(fVar66)) {
                    fVar66 = sqrtf(fVar46);
                  }
                  fVar47 = 0.25 / fVar66;
                  fVar46 = (fVar72 - fVar73) * fVar47;
                  fVar58 = (fVar74 - fVar45) * fVar47;
                  uStack_d8 = CONCAT44(fVar66,(fVar72 - fVar45) * fVar47);
                }
                fVar72 = (float)((ulong)uStack_d8 >> 0x20);
                fVar45 = (float)uStack_d8;
                fVar66 = SQRT(fVar46 * fVar46 + fVar72 * fVar72 + fVar58 * fVar58 + fVar45 * fVar45)
                ;
                if (0.0 < fVar66) {
                  fVar66 = 1.0 / fVar66;
                  fVar46 = fVar66 * fVar46;
                  fVar58 = fVar58 * fVar66;
                  uStack_d8 = CONCAT44(fVar72 * fVar66,fVar45 * fVar66);
                }
                local_e0 = CONCAT44(fVar58,fVar46);
                FUN_00438690(lVar33 + 0x10,&local_e0);
                *(ulong *)(lVar33 + 0x48) = (ulong)uVar70;
                *(undefined8 *)(lVar33 + 0x40) = uVar69;
                uVar69 = *(undefined8 *)*(undefined1 (*) [12])(param_1 + 0xd8);
                auVar18 = *(undefined1 (*) [12])(param_1 + 0xd8);
                lVar33 = *(long *)(*(long *)(param_1 + 0xe8) + 0x18);
                fVar45 = DAT_04c4bac0 * 1000.0;
                fVar58 = (float)uVar69;
                *(ulong *)(lVar33 + 0x58) =
                     CONCAT44(0.0 - fVar45,*(float *)(param_1 + 0xe0) - fVar45);
                *(ulong *)(lVar33 + 0x50) =
                     CONCAT44((float)((ulong)uVar69 >> 0x20) - fVar45,fVar58 - fVar45);
                *(float *)(lVar33 + 0x68) = auVar18._8_4_ + fVar45;
                *(float *)(lVar33 + 0x6c) = fVar45 + 0.0;
                *(float *)(lVar33 + 0x60) = fVar58 + fVar45;
                *(float *)(lVar33 + 100) = auVar18._4_4_ + fVar45;
                lVar33 = *(long *)(param_1 + 0xe8);
                auVar60._8_8_ = uVar57;
                auVar60._0_8_ = auVar51._0_8_;
                iVar9 = *(int *)(lVar33 + 0x20);
                *(long *)(lVar33 + 0x38) = auVar49._8_8_;
                *(long *)(lVar33 + 0x30) = auVar19._0_8_;
                *(undefined8 *)(lVar33 + 0x48) = uVar57;
                *(undefined8 *)(lVar33 + 0x40) = auVar51._0_8_;
                auVar52 = auVar49;
                if (iVar9 != 0) {
                  lVar34 = *(long *)(lVar33 + 0x18);
                  uVar35 = (long)iVar9 * 0x70 - 0x70;
                  uVar70 = (int)(uVar35 / 0x70) + 1;
                  uVar40 = (ulong)uVar70 & 3;
                  lVar36 = lVar34;
                  if ((uVar70 & 3) == 0) {
                    auVar52 = auVar20;
                  }
                  else {
                    auVar52 = auVar50;
                    do {
                      uVar40 = uVar40 - 1;
                      auVar53._12_4_ = (int)((ulong)*(undefined8 *)(lVar36 + 0x58) >> 0x20);
                      auVar53._0_12_ = *(undefined1 (*) [12])(lVar36 + 0x50);
                      auVar52 = NEON_fmin(auVar52,auVar53,4);
                      *(long *)(lVar33 + 0x38) = auVar52._8_8_;
                      *(long *)(lVar33 + 0x30) = auVar52._0_8_;
                      pauVar2 = (undefined1 (*) [12])(lVar36 + 0x60);
                      puVar3 = (undefined8 *)(lVar36 + 0x68);
                      lVar36 = lVar36 + 0x70;
                      auVar10._12_4_ = (int)((ulong)*puVar3 >> 0x20);
                      auVar10._0_12_ = *pauVar2;
                      auVar60 = NEON_fmax(auVar60,auVar10,4);
                      *(long *)(lVar33 + 0x48) = auVar60._8_8_;
                      *(long *)(lVar33 + 0x40) = auVar60._0_8_;
                    } while (uVar40 != 0);
                  }
                  if (0x14f < uVar35) {
                    do {
                      auVar11._12_4_ = (int)((ulong)*(undefined8 *)(lVar36 + 0x58) >> 0x20);
                      auVar11._0_12_ = *(undefined1 (*) [12])(lVar36 + 0x50);
                      auVar53 = NEON_fmin(auVar52,auVar11,4);
                      *(long *)(lVar33 + 0x38) = auVar53._8_8_;
                      *(long *)(lVar33 + 0x30) = auVar53._0_8_;
                      auVar52._12_4_ = (int)((ulong)*(undefined8 *)(lVar36 + 0x68) >> 0x20);
                      auVar52._0_12_ = *(undefined1 (*) [12])(lVar36 + 0x60);
                      auVar52 = NEON_fmax(auVar60,auVar52,4);
                      *(long *)(lVar33 + 0x48) = auVar52._8_8_;
                      *(long *)(lVar33 + 0x40) = auVar52._0_8_;
                      auVar12._12_4_ = (int)((ulong)*(undefined8 *)(lVar36 + 200) >> 0x20);
                      auVar12._0_12_ = *(undefined1 (*) [12])(lVar36 + 0xc0);
                      auVar60 = NEON_fmin(auVar53,auVar12,4);
                      *(long *)(lVar33 + 0x38) = auVar60._8_8_;
                      *(long *)(lVar33 + 0x30) = auVar60._0_8_;
                      auVar13._12_4_ = (int)((ulong)*(undefined8 *)(lVar36 + 0xd8) >> 0x20);
                      auVar13._0_12_ = *(undefined1 (*) [12])(lVar36 + 0xd0);
                      auVar52 = NEON_fmax(auVar52,auVar13,4);
                      *(long *)(lVar33 + 0x48) = auVar52._8_8_;
                      *(long *)(lVar33 + 0x40) = auVar52._0_8_;
                      auVar14._12_4_ = (int)((ulong)*(undefined8 *)(lVar36 + 0x138) >> 0x20);
                      auVar14._0_12_ = *(undefined1 (*) [12])(lVar36 + 0x130);
                      auVar60 = NEON_fmin(auVar60,auVar14,4);
                      *(long *)(lVar33 + 0x38) = auVar60._8_8_;
                      *(long *)(lVar33 + 0x30) = auVar60._0_8_;
                      auVar15._12_4_ = (int)((ulong)*(undefined8 *)(lVar36 + 0x148) >> 0x20);
                      auVar15._0_12_ = *(undefined1 (*) [12])(lVar36 + 0x140);
                      auVar53 = NEON_fmax(auVar52,auVar15,4);
                      *(long *)(lVar33 + 0x48) = auVar53._8_8_;
                      *(long *)(lVar33 + 0x40) = auVar53._0_8_;
                      auVar16._12_4_ = (int)((ulong)*(undefined8 *)(lVar36 + 0x1a8) >> 0x20);
                      auVar16._0_12_ = *(undefined1 (*) [12])(lVar36 + 0x1a0);
                      auVar52 = NEON_fmin(auVar60,auVar16,4);
                      *(long *)(lVar33 + 0x38) = auVar52._8_8_;
                      *(long *)(lVar33 + 0x30) = auVar52._0_8_;
                      pauVar2 = (undefined1 (*) [12])(lVar36 + 0x1b0);
                      puVar3 = (undefined8 *)(lVar36 + 0x1b8);
                      lVar36 = lVar36 + 0x1c0;
                      auVar17._12_4_ = (int)((ulong)*puVar3 >> 0x20);
                      auVar17._0_12_ = *pauVar2;
                      auVar60 = NEON_fmax(auVar53,auVar17,4);
                      *(long *)(lVar33 + 0x48) = auVar60._8_8_;
                      *(long *)(lVar33 + 0x40) = auVar60._0_8_;
                    } while (lVar36 != lVar34 + (long)iVar9 * 0x70);
                  }
                }
                auVar61._0_8_ = CONCAT44(auVar60._4_4_ + 0.001,auVar60._0_4_ + 0.001);
                auVar61._8_4_ = auVar60._8_4_ + 0.001;
                auVar61._12_4_ = auVar60._12_4_ + 0.001;
                auVar54._0_8_ = CONCAT44(auVar52._4_4_ + -0.001,auVar52._0_4_ + -0.001);
                auVar54._8_4_ = auVar52._8_4_ + -0.001;
                auVar54._12_4_ = auVar52._12_4_ + -0.001;
                *(long *)(lVar33 + 0x38) = auVar54._8_8_;
                *(undefined8 *)(lVar33 + 0x30) = auVar54._0_8_;
                *(long *)(lVar33 + 0x48) = auVar61._8_8_;
                *(undefined8 *)(lVar33 + 0x40) = auVar61._0_8_;
                uVar70 = *(uint *)(lVar27 + 0x48);
                if (0 < (int)uVar70) {
                  lVar33 = 0;
                  do {
                    lVar36 = *(long *)(*(long *)(lVar27 + 0x40) + lVar33);
                    if (*(char *)(*(long *)(lVar36 + 0x18) + 0x13d) != '\0') {
                      FUN_0053c640(lVar36,1);
                    }
                    lVar33 = lVar33 + 8;
                  } while ((ulong)uVar70 * 8 != lVar33);
                }
                if ((param_3 != 0) && ((*(byte *)(param_3 + 0x4b) >> 2 & 1) != 0)) {
                  FUN_0053c920(&local_e0);
                  local_e0 = CONCAT44(local_e0._4_4_,DAT_04c4bac0 * 0.05);
                  local_d0 = CONCAT44(DAT_04c4bac0 * 0.1,(float)local_d0);
                  if (0 < (int)uVar70) {
                    lVar33 = 0;
                    do {
                      FUN_0053b740(*(undefined8 *)(*(long *)(lVar27 + 0x40) + lVar33),&local_e0);
                      lVar33 = lVar33 + 8;
                    } while ((ulong)uVar70 * 8 != lVar33);
                  }
                }
              }
              else {
                uVar70 = *(uint *)(param_3 + 0x48);
                *(uint *)(param_1 + 0x48) =
                     *(uint *)(param_1 + 0x48) & 0xfffe0000 |
                     *(uint *)(param_1 + 0x48) & 0xffff | (uVar70 >> 0x10 & 1) << 0x10;
                if ((uVar70 >> 0x10 & 1) != 0) {
                  fVar45 = *(float *)(param_3 + 0xcc);
                  *(float *)(param_1 + 0xcc) = fVar45;
                  fVar58 = *(float *)(param_3 + 0xd0);
                  *(float *)(param_1 + 0xd0) = fVar58;
                  fVar72 = *(float *)(param_3 + 0xd4);
                  *(float *)(param_1 + 0xd4) = fVar72;
                  *(undefined4 *)(param_1 + 0xd8) = *(undefined4 *)(param_3 + 0xd8);
                  *(undefined4 *)(param_1 + 0xdc) = *(undefined4 *)(param_3 + 0xdc);
                  *(undefined4 *)(param_1 + 0xe0) = *(undefined4 *)(param_3 + 0xe0);
                  goto LAB_03f00d48;
                }
LAB_03f00cfc:
                uVar70 = *(uint *)(lVar27 + 0x48);
                if (0 < (int)uVar70) {
                  lVar33 = 0;
                  do {
                    lVar36 = *(long *)(*(long *)(lVar27 + 0x40) + lVar33);
                    if (*(char *)(*(long *)(lVar36 + 0x18) + 0x13d) != '\0') {
                      FUN_0053c640(lVar36,0);
                    }
                    lVar33 = lVar33 + 8;
                  } while ((ulong)uVar70 * 8 != lVar33);
                }
              }
              fVar58 = 0.0;
              fVar45 = 0.0;
              fVar72 = 0.0;
              uVar70 = uVar25;
              if (*(uint *)(param_1 + 0x10) <= uVar25) {
                uVar70 = 0;
              }
              if ((*(byte *)(*(long *)(param_1 + 0x18) + (ulong)uVar70 * 0x48 + 0x1b) >> 4 & 1) != 0
                 ) {
                if (param_3 == 0) {
                  lVar33 = *(long *)(param_1 + 0x50);
                }
                else {
                  lVar33 = *(long *)(param_3 + 0x50);
                }
                if (lVar33 != 0) {
                  if (*(long *)(lVar33 + 0x28) != 0) {
                    plVar23 = *(long **)**(undefined8 **)(*(long *)(lVar33 + 0x28) + 0x38);
                    (**(code **)(*plVar23 + 0x70))(plVar23,&local_e0,0);
                    fVar58 = uStack_d8._4_4_;
                    fVar45 = local_c8._4_4_;
                    fVar72 = uStack_b8._4_4_;
                  }
                }
              }
              uVar70 = *(uint *)(lVar27 + 0x38);
              if (0 < (int)uVar70) {
                uVar40 = 0;
                while( true ) {
                  lVar33 = *(long *)(*(long *)(lVar27 + 0x30) + uVar40 * 8);
                  fVar46 = (float)local_180;
                  if (lVar33 == 0) break;
                  uVar26 = *(uint *)(lVar33 + 0x20);
                  if (0 < (int)uVar26) {
                    lVar36 = 0;
                    uVar35 = 0;
                    do {
                      uVar29 = uVar25;
                      if (*(uint *)(lVar37 + 8) <= uVar25) {
                        uVar29 = 0;
                      }
                      puVar30 = (uint *)(*(long *)(lVar37 + 0x10) + (ulong)uVar29 * 0x10);
                      uVar24 = uVar40;
                      if (*puVar30 <= uVar40) {
                        uVar24 = 0;
                      }
                      puVar30 = (uint *)(*(long *)(puVar30 + 2) + uVar24 * 0x10);
                      lVar34 = *(long *)(puVar30 + 2);
                      uVar24 = uVar35;
                      if (*puVar30 <= uVar35) {
                        uVar24 = 0;
                      }
                      lVar31 = lVar34 + uVar24 * 0xa8;
                      lVar28 = (long)*(short *)(lVar31 + 0x70);
                      sVar8 = *(short *)(lVar31 + 0x72);
                      if (lVar28 == -1 || sVar8 == -1) {
                        local_c8 = (undefined8 *)CONCAT44(_UNK_0410288c,_UNK_04102888);
                        local_d0 = CONCAT44(_UNK_04102884,_DAT_04102880);
                        uVar48 = 0;
                        uStack_d8 = _UNK_04102208;
                        local_e0 = _DAT_04102200;
                        fVar59 = 0.0;
                        uStack_b8 = _UNK_041023d8;
                        local_c0 = _DAT_041023d0;
                        fVar66 = 1.0;
                        fVar73 = 0.0;
                        fVar74 = 0.0;
                        fVar47 = 0.0;
                        fVar71 = 1.0;
                        fVar68 = 0.0;
                        fVar76 = 0.0;
                        fVar75 = 0.0;
                        fVar78 = 1.0;
                        fVar77 = 0.0;
                      }
                      else {
                        plVar23 = (long *)**(undefined8 **)
                                            (*(long *)(*(long *)(lVar37 + 0x28) + 0x38) + lVar28 * 8
                                            );
                        (**(code **)(*plVar23 + 0x70))(plVar23,&local_e0,(int)sVar8);
                        fVar59 = (float)local_d0;
                        uVar48 = local_c0 & 0xffffffff;
                        fVar66 = (float)local_e0;
                        fVar73 = local_e0._4_4_;
                        fVar74 = (float)uStack_d8;
                        fVar47 = uStack_d8._4_4_;
                        fVar71 = local_d0._4_4_;
                        fVar68 = (float)local_c8;
                        fVar76 = local_c8._4_4_;
                        fVar75 = local_c0._4_4_;
                        fVar78 = (float)uStack_b8;
                        fVar77 = uStack_b8._4_4_;
                      }
                      if ((((((NAN(fVar66)) || (NAN(fVar73))) || (NAN(fVar74))) ||
                           ((NAN(fVar47) || (NAN(fVar59))))) || (NAN(fVar71))) ||
                         (((NAN(fVar68) || (NAN(fVar76))) ||
                          ((fVar47 = (float)uVar48, NAN(fVar47) ||
                           (((NAN(fVar75) || (NAN(fVar78))) || (NAN(fVar77)))))))))
                      goto LAB_03f01718;
                      fVar76 = SQRT(fVar59 * fVar59 + fVar66 * fVar66 + fVar47 * fVar47);
                      if (0.0 < fVar76) {
                        fVar77 = 1.0 / fVar76;
                        fVar66 = fVar66 * fVar77;
                        fVar59 = fVar59 * fVar77;
                        uVar48 = (ulong)(uint)(fVar47 * fVar77);
                      }
                      lVar34 = lVar34 + uVar24 * 0xa8;
                      *(float *)(lVar34 + 0x30) = fVar76;
                      *(float *)(lVar34 + 0x34) =
                           SQRT(fVar71 * fVar71 + fVar73 * fVar73 + fVar75 * fVar75);
                      *(float *)(lVar34 + 0x38) =
                           SQRT(fVar68 * fVar68 + fVar74 * fVar74 + fVar78 * fVar78);
                      fVar74 = (float)uVar48;
                      fVar68 = -(fVar74 * fVar71) + fVar75 * fVar59;
                      fVar47 = -(fVar66 * fVar75) + fVar73 * fVar74;
                      fVar73 = -(fVar59 * fVar73) + fVar71 * fVar66;
                      fVar71 = SQRT(fVar47 * fVar47 + fVar68 * fVar68 + fVar73 * fVar73);
                      if (0.0 < fVar71) {
                        fVar71 = 1.0 / fVar71;
                        fVar68 = fVar68 * fVar71;
                        fVar47 = fVar47 * fVar71;
                        fVar73 = fVar73 * fVar71;
                      }
                      fVar75 = -(fVar73 * fVar59) + fVar74 * fVar47;
                      fVar76 = -(fVar68 * fVar74) + fVar66 * fVar73;
                      fVar71 = -(fVar47 * fVar66) + fVar59 * fVar68;
                      fVar78 = SQRT(fVar76 * fVar76 + fVar75 * fVar75 + fVar71 * fVar71);
                      if (0.0 < fVar78) {
                        fVar78 = 1.0 / fVar78;
                        fVar75 = fVar75 * fVar78;
                        fVar76 = fVar76 * fVar78;
                        fVar71 = fVar71 * fVar78;
                      }
                      if ((((NAN(fVar66)) || (NAN(fVar59))) ||
                          ((NAN(fVar74) || ((NAN(fVar75) || (NAN(fVar76))))))) ||
                         ((NAN(fVar71) || (((NAN(fVar68) || (NAN(fVar47))) || (NAN(fVar73)))))))
                      goto LAB_03f01718;
                      fVar74 = uStack_b8._4_4_;
                      fVar78 = local_c8._4_4_;
                      fVar77 = uStack_d8._4_4_;
                      if ((*(byte *)(param_1 + 0x4a) >> 1 & 1) != 0) {
                        fVar77 = local_1c0 +
                                 local_c8._4_4_ * local_1c8 + uStack_d8._4_4_ * local_1d0 +
                                 uStack_b8._4_4_ * local_1c4;
                        fVar78 = local_1b0 +
                                 local_c8._4_4_ * local_1bc + uStack_d8._4_4_ * local_1cc +
                                 uStack_b8._4_4_ * local_1b4;
                        fVar74 = fVar42 + local_c8._4_4_ * local_1ac + uStack_d8._4_4_ * local_1b8 +
                                          uStack_b8._4_4_ * fVar41;
                      }
                      puVar3 = (undefined8 *)(*(long *)(lVar33 + 0x18) + lVar36);
                      puVar3[1] = uVar48;
                      *puVar3 = CONCAT44(fVar59,fVar66);
                      lVar34 = *(long *)(lVar33 + 0x18) + lVar36;
                      *(ulong *)(lVar34 + 0x18) = (ulong)(uint)fVar71;
                      *(ulong *)(lVar34 + 0x10) = CONCAT44(fVar76,fVar75);
                      lVar34 = *(long *)(lVar33 + 0x18) + lVar36;
                      *(ulong *)(lVar34 + 0x28) = (ulong)(uint)fVar73;
                      *(ulong *)(lVar34 + 0x20) = CONCAT44(fVar47,fVar68);
                      auVar60 = NEON_fmov(0x3f800000,4);
                      lVar34 = *(long *)(lVar33 + 0x18) + lVar36;
                      auVar55._0_8_ = CONCAT44(fVar78 - fVar45,fVar77 - fVar58);
                      auVar55._12_4_ = auVar60._12_4_;
                      auVar55._8_4_ = fVar74 - fVar72;
                      *(long *)(lVar34 + 0x38) = auVar55._8_8_;
                      *(undefined8 *)(lVar34 + 0x30) = auVar55._0_8_;
                      uVar29 = uVar25;
                      if (*(uint *)(param_1 + 0x10) <= uVar25) {
                        uVar29 = 0;
                      }
                      if ((*(byte *)(*(long *)(param_1 + 0x18) + (ulong)uVar29 * 0x48 + 0x18) >> 4 &
                          1) != 0) {
                        fVar74 = (float)uStack_b8;
                        fVar66 = (float)local_c0;
                        fVar73 = (float)(local_c0 >> 0x20);
                        auVar62._0_8_ =
                             CONCAT44(local_e0._4_4_ * fVar46 + local_d0._4_4_ * fVar43 +
                                      fVar73 * fVar44 + 0.0,
                                      (float)local_e0 * fVar46 + (float)local_d0 * fVar43 +
                                      fVar66 * fVar44 + 0.0);
                        auVar62._8_4_ =
                             (float)uStack_d8 * fVar46 + (float)local_c8 * fVar43 + fVar74 * fVar44
                             + 0.0;
                        auVar62._12_4_ =
                             fVar63 + uStack_d8._4_4_ * fVar46 + local_c8._4_4_ * fVar43 +
                                      uStack_b8._4_4_ * fVar44;
                        auVar56._0_8_ =
                             CONCAT44(local_e0._4_4_ * (float)local_1a0 + local_d0._4_4_ * fVar64 +
                                      fVar73 * fVar65 + 0.0,
                                      (float)local_e0 * (float)local_1a0 + (float)local_d0 * fVar64
                                      + fVar66 * fVar65 + 0.0);
                        auVar56._8_4_ =
                             (float)uStack_d8 * (float)local_1a0 + (float)local_c8 * fVar64 +
                             fVar74 * fVar65 + 0.0;
                        auVar56._12_4_ =
                             fVar67 + uStack_d8._4_4_ * (float)local_1a0 + local_c8._4_4_ * fVar64 +
                                      uStack_b8._4_4_ * fVar65;
                        local_d0 = CONCAT44(local_e0._4_4_ * local_190 + local_d0._4_4_ * fStack_18c
                                            + fVar73 * fStack_188 + 0.0,
                                            (float)local_e0 * local_190 +
                                            (float)local_d0 * fStack_18c + fVar66 * fStack_188 + 0.0
                                           );
                        local_c8 = (undefined8 *)
                                   CONCAT44(fStack_184 +
                                            uStack_d8._4_4_ * local_190 +
                                            local_c8._4_4_ * fStack_18c +
                                            uStack_b8._4_4_ * fStack_188,
                                            (float)uStack_d8 * local_190 +
                                            (float)local_c8 * fStack_18c + fVar74 * fStack_188 + 0.0
                                           );
                        uStack_b8 = auVar56._8_8_;
                        uStack_d8 = auVar62._8_8_;
                        local_e0 = auVar62._0_8_;
                        local_c0 = auVar56._0_8_;
                        if (((*(long *)(param_1 + 0x50) != 0) &&
                            (lVar34 = *(long *)(*(long *)(param_1 + 0x50) + 0x28), lVar34 != 0)) &&
                           (lVar34 = *(long *)**(undefined8 **)(lVar34 + 0x38),
                           (*(byte *)(lVar34 + 0xae) >> 3 & 1) != 0)) {
                          plVar23 = (long *)(lVar34 + 0x80);
                          uVar24 = (**(code **)(*plVar23 + 0x10))(plVar23);
                          if ((uVar24 & 1) != 0) {
                            local_100 = 0;
                            local_110 = CONCAT44(local_110._4_4_,2);
                            local_f8 = &local_e0;
                            local_f0 = 0.0;
                            uStack_108 = lVar34;
                            (*(code *)**(undefined8 **)(lVar34 + 0x80))(plVar23,&local_110);
                          }
                        }
                      }
                      uVar35 = uVar35 + 1;
                      lVar36 = lVar36 + 0x40;
                    } while (uVar26 != uVar35);
                  }
                  FUN_005d3d40(lVar33);
                  uVar40 = uVar40 + 1;
                  if (uVar40 == uVar70) break;
                }
LAB_03f01718:
                local_1b0 = fStack_184;
                local_1b4 = fStack_188;
                local_1b8 = (float)local_1a0;
                local_1bc = fStack_18c;
                local_1cc = local_190;
                fVar41 = fVar65;
                fVar42 = fVar67;
                local_1d0 = fVar46;
                local_1c8 = fVar43;
                local_1c4 = fVar44;
                local_1c0 = fVar63;
                local_1ac = fVar64;
              }
            }
          }
        }
        piVar22 = (int *)(lVar38 + uVar39 * 0x48 + 0x20);
        iVar9 = *piVar22;
        if (iVar9 == 0) {
          FUN_0054a900(*plVar32);
          uVar69 = _DAT_04102200;
          if ((*(long *)(param_1 + 0x50) == 0) ||
             (lVar38 = *(long *)(*(long *)(param_1 + 0x50) + 0x28), lVar38 == 0)) {
            *(long *)(param_1 + 0x70) = _UNK_04102208;
            *(undefined8 *)(param_1 + 0x68) = uVar69;
            uVar69 = CONCAT44(_UNK_04102884,_DAT_04102880);
            *(ulong *)(param_1 + 0x80) = CONCAT44(_UNK_0410288c,_UNK_04102888);
            *(undefined8 *)(param_1 + 0x78) = uVar69;
            uVar39 = _DAT_041023d0;
            *(undefined8 *)(param_1 + 0x90) = _UNK_041023d8;
            *(ulong *)(param_1 + 0x88) = uVar39;
          }
          else {
            plVar23 = *(long **)**(undefined8 **)(lVar38 + 0x38);
            (**(code **)(*plVar23 + 0x70))(plVar23,param_1 + 0x68,0);
          }
          *(undefined8 *)(param_1 + 0x98) = 0;
          *(undefined4 *)(param_1 + 0xa0) = 0;
          lVar38 = *plVar32;
          if (*(int *)(*(long *)(lVar38 + 0x18) + 0x68) == 3) {
            uVar69 = 2;
            goto LAB_03f00850;
          }
        }
        else if (iVar9 == 1) {
          lVar38 = *plVar32;
          if (*(int *)(*(long *)(lVar38 + 0x18) + 0x68) == 3) {
            uVar69 = 1;
            goto LAB_03f00850;
          }
        }
        else if ((iVar9 == 2) && (lVar38 = *plVar32, *(int *)(*(long *)(lVar38 + 0x18) + 0x68) == 3)
                ) {
          uVar69 = 0;
LAB_03f00850:
          FUN_00514260(lVar38,uVar69);
        }
        *piVar22 = *piVar22 + 1;
      }
      uVar25 = uVar25 + 1;
    } while (uVar25 != uVar5);
  }
  return;
}

