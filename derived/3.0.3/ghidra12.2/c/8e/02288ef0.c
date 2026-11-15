
/* WARNING: Removing unreachable block (ram,0x02289db0) */
/* WARNING: Removing unreachable block (ram,0x02289dc0) */
/* WARNING: Removing unreachable block (ram,0x02289de4) */

undefined4 FUN_02288ef0(long param_1,undefined8 param_2,undefined8 *param_3)

{
  bool bVar1;
  undefined *puVar2;
  long *plVar3;
  char *pcVar4;
  undefined *puVar5;
  uint *puVar6;
  undefined4 *puVar7;
  undefined4 *puVar8;
  undefined8 uVar9;
  long lVar10;
  int iVar11;
  uint uVar12;
  uint uVar13;
  ulong uVar14;
  undefined *puVar15;
  undefined *puVar16;
  bool bVar17;
  undefined4 uVar18;
  int iVar19;
  int iVar20;
  long lVar21;
  long *plVar22;
  ulong uVar23;
  long *plVar24;
  uint uVar25;
  long lVar26;
  undefined8 *puVar27;
  byte *pbVar28;
  int *piVar29;
  byte *pbVar30;
  long lVar31;
  long lVar32;
  byte bVar33;
  undefined8 uVar34;
  long lVar35;
  undefined8 uVar36;
  int iVar37;
  float *pfVar38;
  float *pfVar39;
  int iVar40;
  undefined4 uVar41;
  float fVar42;
  uint local_188;
  uint local_184;
  undefined *local_138;
  char *pcStack_130;
  int local_128;
  int iStack_124;
  char *local_120;
  int local_118;
  int iStack_114;
  undefined8 local_110;
  undefined8 local_108;
  undefined8 uStack_100;
  undefined8 local_f8;
  byte local_f0 [4];
  byte local_ec [4];
  undefined8 local_e8;
  undefined4 local_e0;
  char *local_d8;
  undefined8 local_d0;
  char *local_c8;
  int local_c0;
  int iStack_bc;
  undefined *local_b8;
  undefined4 local_b0;
  undefined4 local_ac;
  byte local_a8;
  undefined *local_a0;
  undefined *local_98;
  undefined8 local_90;
  undefined *local_88;
  int local_80;
  int local_7c;
  undefined *local_68;
  
  uVar25 = *(uint *)(param_1 + 0x288);
  uVar12 = *(int *)(param_1 + 0x27c) - 5;
  uVar13 = *(int *)(param_1 + 0x284) - 5;
  lVar26 = 0xffffffff;
  if (uVar13 < 4) {
    lVar26 = 1;
  }
  lVar32 = 0;
  if (3 < uVar12) {
    lVar32 = lVar26;
  }
  lVar26 = *(long *)PTR_DAT_04bb46b0;
  if (lVar26 == 0) {
LAB_02288f9c:
    lVar26 = 0;
  }
  else {
    puVar27 = *(undefined8 **)(lVar26 + 0x10);
    if ((*(byte *)(lVar26 + 0x453) & 1) == 0) {
      lVar21 = (**(code **)(*(long *)*puVar27 + 0x38))();
      lVar26 = 0;
      if (lVar21 != 0) {
        lVar26 = lVar21 + 0x70;
      }
    }
    else {
      if (puVar27 == (undefined8 *)0x0) goto LAB_02288f9c;
      lVar26 = 0;
      if ((long *)puVar27[0x26] != (long *)0x0) {
        lVar26 = (**(code **)(*(long *)puVar27[0x26] + 0x38))();
      }
    }
  }
  lVar21 = lVar26 + 0x1bfdd0 + (ulong)uVar25 * 0x9a0;
  if (3 < uVar25) {
    lVar21 = lVar26 + 0x1bfdd0;
  }
  lVar26 = *(long *)(lVar21 + 0x28);
  if (lVar26 == 0) {
    local_184 = 0;
    bVar1 = uVar12 < 4 || uVar13 < 4;
    lVar26 = param_1 + 0x2d4 + lVar32 * 0x38;
    if (uVar12 >= 4 && uVar13 >= 4) {
      lVar26 = param_1 + 0x2d4;
    }
    pfVar38 = (float *)(lVar26 + 0x2c);
  }
  else {
    if (*(undefined8 **)(lVar26 + 0x10) == (undefined8 *)0x0) {
      local_184 = 0;
      bVar1 = uVar12 < 4 || uVar13 < 4;
      lVar35 = param_1 + 0x2d4 + lVar32 * 0x38;
      if (uVar12 >= 4 && uVar13 >= 4) {
        lVar35 = param_1 + 0x2d4;
      }
      pfVar38 = (float *)(lVar35 + 0x2c);
      plVar22 = *(long **)(lVar26 + 0x20);
    }
    else {
      local_184 = (**(code **)**(undefined8 **)(lVar26 + 0x10))();
      bVar1 = uVar12 < 4 || uVar13 < 4;
      lVar26 = param_1 + 0x2d4 + lVar32 * 0x38;
      if (uVar12 >= 4 && uVar13 >= 4) {
        lVar26 = param_1 + 0x2d4;
      }
      pfVar38 = (float *)(lVar26 + 0x2c);
      if (*(long *)(lVar21 + 0x28) == 0) goto LAB_02289098;
      plVar22 = *(long **)(*(long *)(lVar21 + 0x28) + 0x20);
    }
    if (plVar22 != (long *)0x0) {
      local_a0 = *(undefined **)(lVar21 + 8);
      local_98 = *(undefined **)(lVar21 + 0x10);
      local_90 = 0x6c;
      (**(code **)(*plVar22 + 0x20))(plVar22,&local_a0);
    }
  }
LAB_02289098:
  *(undefined4 *)(*(long *)(lVar21 + 0x10) + *(long *)(lVar21 + 8) + 0xc) = 3;
  if ((*(long *)(lVar21 + 0x28) != 0) &&
     (plVar22 = *(long **)(*(long *)(lVar21 + 0x28) + 0x20), plVar22 != (long *)0x0)) {
    local_a0 = *(undefined **)(lVar21 + 8);
    local_98 = *(undefined **)(lVar21 + 0x10);
    local_90 = 0x6c;
    (**(code **)(*plVar22 + 0x20))(plVar22,&local_a0);
  }
  pfVar39 = (float *)(param_1 + (ulong)(uVar12 < 4) * 0x38 + 0x300);
  *(float *)(*(long *)(lVar21 + 0x10) + *(long *)(lVar21 + 8) + 0x10) = *pfVar39;
  if ((*(long *)(lVar21 + 0x28) != 0) &&
     (plVar22 = *(long **)(*(long *)(lVar21 + 0x28) + 0x20), plVar22 != (long *)0x0)) {
    local_a0 = *(undefined **)(lVar21 + 8);
    local_98 = *(undefined **)(lVar21 + 0x10);
    local_90 = 0x6c;
    (**(code **)(*plVar22 + 0x20))(plVar22,&local_a0);
  }
  puVar27 = (undefined8 *)(*(long *)(lVar21 + 0x10) + *(long *)(lVar21 + 8));
  uVar34 = *param_3;
  *(undefined4 *)(puVar27 + 1) = *(undefined4 *)(param_3 + 1);
  *puVar27 = uVar34;
  if ((*(long *)(lVar21 + 0x28) != 0) &&
     (plVar22 = *(long **)(*(long *)(lVar21 + 0x28) + 0x20), plVar22 != (long *)0x0)) {
    local_a0 = *(undefined **)(lVar21 + 8);
    local_98 = *(undefined **)(lVar21 + 0x10);
    local_90 = 0x6c;
    (**(code **)(*plVar22 + 0x20))(plVar22,&local_a0);
  }
  *(undefined4 *)(*(long *)(lVar21 + 0x10) + *(long *)(lVar21 + 8) + 0x20) = 5;
  if ((*(long *)(lVar21 + 0x28) != 0) &&
     (plVar22 = *(long **)(*(long *)(lVar21 + 0x28) + 0x20), plVar22 != (long *)0x0)) {
    local_a0 = *(undefined **)(lVar21 + 8);
    local_98 = *(undefined **)(lVar21 + 0x10);
    local_90 = 0x6c;
    (**(code **)(*plVar22 + 0x20))(plVar22,&local_a0);
  }
  puVar5 = PTR_DAT_04bb27c8;
  *(float *)(*(long *)(lVar21 + 0x10) + *(long *)(lVar21 + 8) + 0x24) = *pfVar38;
  local_e8 = *(undefined8 *)(param_1 + 0x290);
  local_e0 = *(undefined4 *)(param_1 + 0x298);
  uVar41 = FUN_0093a950(*(long *)puVar5 + 0x28,&local_e8,0);
  local_e8._4_4_ = uVar41;
  if ((*(long *)(lVar21 + 0x28) != 0) &&
     (plVar22 = *(long **)(*(long *)(lVar21 + 0x28) + 0x20), plVar22 != (long *)0x0)) {
    local_a0 = *(undefined **)(lVar21 + 8);
    local_98 = *(undefined **)(lVar21 + 0x10);
    local_90 = 0x6c;
    (**(code **)(*plVar22 + 0x20))(plVar22,&local_a0);
  }
  lVar26 = *(long *)(lVar21 + 0x10) + *(long *)(lVar21 + 8);
  *(undefined4 *)(lVar26 + 0x14) = (undefined4)local_e8;
  *(undefined4 *)(lVar26 + 0x18) = local_e8._4_4_;
  *(undefined4 *)(lVar26 + 0x1c) = local_e0;
  if ((*(long *)(lVar21 + 0x28) != 0) &&
     (plVar22 = *(long **)(*(long *)(lVar21 + 0x28) + 0x20), plVar22 != (long *)0x0)) {
    local_a0 = *(undefined **)(lVar21 + 8);
    local_98 = *(undefined **)(lVar21 + 0x10);
    local_90 = 0x6c;
    (**(code **)(*plVar22 + 0x20))(plVar22,&local_a0);
  }
  fVar42 = *pfVar39 / *pfVar38;
  if (0.6 <= fVar42) {
    if (0.7 <= fVar42) {
      if (0.8 <= fVar42) {
        if (fVar42 < 0.9) {
          uVar41 = 0;
          goto LAB_022892f4;
        }
        if (1.0 <= fVar42) {
          if (1.1 <= fVar42) goto LAB_0228929c;
          goto LAB_022892b8;
        }
      }
      uVar41 = 1;
    }
    else {
LAB_022892b8:
      uVar41 = 2;
    }
  }
  else {
LAB_0228929c:
    uVar41 = 3;
  }
LAB_022892f4:
  *(undefined4 *)(*(long *)(lVar21 + 0x10) + *(long *)(lVar21 + 8) + 0x68) = uVar41;
  if ((*(long *)(lVar21 + 0x28) != 0) &&
     (plVar22 = *(long **)(*(long *)(lVar21 + 0x28) + 0x20), plVar22 != (long *)0x0)) {
    local_a0 = *(undefined **)(lVar21 + 8);
    local_98 = *(undefined **)(lVar21 + 0x10);
    local_90 = 0x6c;
    (**(code **)(*plVar22 + 0x20))(plVar22,&local_a0);
  }
  *(undefined4 *)(*(long *)(lVar21 + 0x10) + *(long *)(lVar21 + 8) + 0x60) = 0;
  if ((*(long *)(lVar21 + 0x28) != 0) &&
     (plVar22 = *(long **)(*(long *)(lVar21 + 0x28) + 0x20), plVar22 != (long *)0x0)) {
    local_a0 = *(undefined **)(lVar21 + 8);
    local_98 = *(undefined **)(lVar21 + 0x10);
    local_90 = 0x6c;
    (**(code **)(*plVar22 + 0x20))(plVar22,&local_a0);
  }
  *(undefined4 *)(*(long *)(lVar21 + 0x10) + *(long *)(lVar21 + 8) + 100) = 2;
  puVar5 = PTR_DAT_04bb39b0;
  pbVar30 = PTR_DAT_04bb32e0;
  lVar26 = *(long *)PTR_DAT_04bb39b0;
  if (lVar26 == 0) {
    local_ec[0] = *PTR_DAT_04bb32e0;
    if (7 < local_ec[0]) goto LAB_022893d8;
joined_r0x02289460:
    pbVar28 = PTR_DAT_04bb32e0;
    if (lVar26 == 0) {
      if (7 < (byte)*PTR_DAT_04bb32e0) goto LAB_022894d4;
LAB_02289540:
      local_f0[0] = *pbVar28;
      if (7 < local_f0[0]) {
        local_f0[0] = 0xff;
      }
    }
    else {
      if (*(int *)(lVar26 + 0x15c) != 0) {
        pbVar28 = (byte *)(lVar26 + 0x158);
      }
      if ((*pbVar28 < 8) ||
         (((*(int *)(lVar26 + 0x15c) != 0 && (*(long *)PTR_DAT_04bb4718 != 0)) &&
          (pbVar28 = (byte *)(*(long *)PTR_DAT_04bb4718 + 0x11a5), *pbVar28 < 8))))
      goto LAB_02289540;
LAB_022894d4:
      if (*(long **)PTR_DAT_04bb27d0 == (long *)0x0) {
LAB_02289538:
        pbVar28 = PTR_DAT_04bb5038;
        goto LAB_02289540;
      }
      lVar26 = **(long **)PTR_DAT_04bb27d0;
      bVar33 = *(byte *)(lVar26 + 0x473);
      pbVar28 = PTR_DAT_04bb5038;
      if ((long)(char)bVar33 != 0xffffffffffffffff) {
        puVar6 = (uint *)(lVar26 + 0x48) + ((long)(char)bVar33 & 0xffffffffU) * 0x20;
        if (7 < bVar33) {
          puVar6 = (uint *)(lVar26 + 0x48);
        }
        if ((*puVar6 & 8) != 0) {
          pbVar28 = (byte *)(lVar26 + 0x471);
        }
      }
      local_f0[0] = *pbVar28;
      if (7 < local_f0[0]) goto LAB_02289538;
    }
    lVar26 = FUN_025830c0(*(undefined8 *)PTR_DAT_04bb4f78,local_f0,1);
    if ((*(long **)(lVar26 + 0x17bb0) == (long *)0x0) ||
       (puVar27 = (undefined8 *)**(long **)(lVar26 + 0x17bb0), puVar27 == (undefined8 *)0x0)) {
      uVar23 = 0;
    }
    else {
      uVar23 = (**(code **)*puVar27)();
      uVar23 = uVar23 & 0xffffffff;
    }
    piVar29 = (int *)(*(long *)(lVar26 + 0x17b98) + *(long *)(lVar26 + 0x17b90));
    if ((piVar29[7] != 0) && (*piVar29 != 0)) {
      if ((*(long *)(lVar21 + 0x28) != 0) &&
         (plVar22 = *(long **)(*(long *)(lVar21 + 0x28) + 0x20), plVar22 != (long *)0x0)) {
        local_a0 = *(undefined **)(lVar21 + 8);
        local_98 = *(undefined **)(lVar21 + 0x10);
        local_90 = 0x6c;
        (**(code **)(*plVar22 + 0x20))(plVar22,&local_a0);
        piVar29 = (int *)(*(long *)(lVar26 + 0x17b98) + *(long *)(lVar26 + 0x17b90));
      }
      local_108 = *(undefined8 *)(piVar29 + 7);
      uStack_100 = *(undefined8 *)(piVar29 + 9);
      uVar36 = *(undefined8 *)(piVar29 + 4);
      lVar35 = *(long *)(lVar21 + 0x10) + *(long *)(lVar21 + 8);
      local_f8 = *(undefined8 *)(piVar29 + 0xb);
      uVar25 = piVar29[0xd];
      uVar34 = *(undefined8 *)piVar29;
      uVar9 = *(undefined8 *)(piVar29 + 2);
      *(char *)(lVar35 + 0x40) = (char)piVar29[6];
      *(undefined8 *)(lVar35 + 0x54) = local_f8;
      *(undefined8 *)(lVar35 + 0x28) = uVar34;
      *(undefined8 *)(lVar35 + 0x44) = local_108;
      if (1 < uVar25) {
        uVar25 = 0;
      }
      *(undefined8 *)(lVar35 + 0x30) = uVar9;
      *(undefined8 *)(lVar35 + 0x38) = uVar36;
      *(undefined8 *)(lVar35 + 0x4c) = uStack_100;
      *(uint *)(lVar35 + 0x5c) = uVar25;
    }
    puVar15 = PTR_DAT_04bb2020;
    puVar2 = PTR_DAT_04bb2020 + 0x10;
    pcStack_130 = "visitor_make_snowman";
    local_138 = puVar2;
    FUN_025ffac8(&local_a0,&local_138,local_ec);
    puVar16 = PTR_DAT_04bc34d0;
    local_a0 = PTR_DAT_04bc34d0 + 0x10;
    fVar42 = *pfVar39 / *pfVar38;
    if (0.6 <= fVar42) {
      if (0.7 <= fVar42) {
        if (0.8 <= fVar42) {
          if (fVar42 < 0.9) {
            uVar41 = 0;
            goto LAB_02289720;
          }
          if (1.0 <= fVar42) {
            if (1.1 <= fVar42) goto LAB_02289698;
            goto LAB_022896b4;
          }
        }
        uVar41 = 1;
      }
      else {
LAB_022896b4:
        uVar41 = 2;
      }
    }
    else {
LAB_02289698:
      uVar41 = 3;
    }
LAB_02289720:
    local_c8 = (char *)CONCAT44(local_c8._4_4_,uVar41);
    FUN_02602950(&local_a0,0x3c);
    pcStack_130 = "SnowmanGrade";
    if (local_98 != (undefined *)0x0) {
      local_138 = puVar2;
      FUN_026054d0(local_98,&local_138,(long)(int)local_c8);
    }
    local_138 = puVar15 + 0x10;
    pcStack_130 = "PE_MakeSnowman";
    fVar42 = *pfVar39 / *pfVar38;
    if (0.6 <= fVar42) {
      if (0.7 <= fVar42) {
        if (0.8 <= fVar42) {
          if (fVar42 < 0.9) {
            uVar41 = 0;
            goto LAB_022897e4;
          }
          if (1.0 <= fVar42) {
            if (1.1 <= fVar42) goto LAB_02289780;
            goto LAB_0228979c;
          }
        }
        uVar41 = 1;
      }
      else {
LAB_0228979c:
        uVar41 = 2;
      }
    }
    else {
LAB_02289780:
      uVar41 = 3;
    }
LAB_022897e4:
    local_d8 = (char *)CONCAT44(local_d8._4_4_,uVar41);
    lVar35 = *(long *)puVar5;
    if (lVar35 == 0) {
LAB_02289830:
      if (*pbVar30 < 8) goto LAB_022898a8;
LAB_0228983c:
      if (*(long **)PTR_DAT_04bb27d0 == (long *)0x0) {
LAB_022898a0:
        pbVar30 = PTR_DAT_04bb5038;
        goto LAB_022898a8;
      }
      lVar35 = **(long **)PTR_DAT_04bb27d0;
      bVar33 = *(byte *)(lVar35 + 0x473);
      pbVar30 = PTR_DAT_04bb5038;
      if ((long)(char)bVar33 != 0xffffffffffffffff) {
        puVar6 = (uint *)(lVar35 + 0x48) + ((long)(char)bVar33 & 0xffffffffU) * 0x20;
        if (7 < bVar33) {
          puVar6 = (uint *)(lVar35 + 0x48);
        }
        if ((*puVar6 & 8) != 0) {
          pbVar30 = (byte *)(lVar35 + 0x471);
        }
      }
      bVar33 = *pbVar30;
      bVar17 = 7 < bVar33;
      if (bVar17) {
        bVar33 = 0xff;
      }
      local_68 = (undefined *)CONCAT71(local_68._1_7_,bVar33);
      if (bVar17) goto LAB_022898a0;
    }
    else {
      if (*(int *)(lVar35 + 0x15c) != 0) {
        pbVar30 = (byte *)(lVar35 + 0x158);
      }
      if (7 < *pbVar30) {
        if ((*(int *)(lVar35 + 0x15c) != 0) && (*(long *)PTR_DAT_04bb4718 != 0)) {
          pbVar30 = (byte *)(*(long *)PTR_DAT_04bb4718 + 0x11a5);
          goto LAB_02289830;
        }
        goto LAB_0228983c;
      }
LAB_022898a8:
      bVar33 = *pbVar30;
      if (7 < bVar33) {
        bVar33 = 0xff;
      }
      local_68 = (undefined *)CONCAT71(local_68._1_7_,bVar33);
    }
    uVar34 = *(undefined8 *)PTR_DAT_04bb49a0;
    uVar18 = FUN_006bd550("PE_MakeSnowman",0);
    local_b8 = (undefined *)CONCAT44(local_b8._4_4_,uVar18);
    uVar34 = FUN_01b5b4b0(uVar34,&local_b8);
    FUN_01b652e0(&local_138,uVar34,&local_68,0,uVar41);
    local_a0 = puVar16 + 0x10;
    iVar19 = FUN_025ef490(&local_a0);
    if (iVar19 == -1) {
LAB_02289938:
      if (local_7c == 0) {
        local_7c = 1;
      }
    }
    else {
      iVar19 = (**(code **)(local_a0 + 0x20))(&local_a0);
      local_138 = (undefined *)CONCAT44(local_138._4_4_,iVar19);
      if (0xc < iVar19) goto LAB_02289938;
    }
    FUN_02601530(&local_a0);
    if ((((uVar23 & 1) != 0) && (*(long *)(lVar26 + 0x17bb0) != 0)) &&
       (puVar27 = *(undefined8 **)(*(long *)(lVar26 + 0x17bb0) + 8), puVar27 != (undefined8 *)0x0))
    {
      (**(code **)*puVar27)();
    }
  }
  else {
    pbVar28 = PTR_DAT_04bb32e0;
    if (*(int *)(lVar26 + 0x15c) != 0) {
      pbVar28 = (byte *)(lVar26 + 0x158);
    }
    local_ec[0] = *pbVar28;
    if ((local_ec[0] < 8) ||
       (((*(int *)(lVar26 + 0x15c) != 0 && (*(long *)PTR_DAT_04bb4718 != 0)) &&
        (local_ec[0] = *(byte *)(*(long *)PTR_DAT_04bb4718 + 0x11a5), local_ec[0] < 8))))
    goto joined_r0x02289460;
LAB_022893d8:
    if (*(long **)PTR_DAT_04bb27d0 != (long *)0x0) {
      lVar35 = **(long **)PTR_DAT_04bb27d0;
      bVar33 = *(byte *)(lVar35 + 0x473);
      pbVar28 = PTR_DAT_04bb5038;
      if ((long)(char)bVar33 != 0xffffffffffffffff) {
        puVar6 = (uint *)(lVar35 + 0x48) + ((long)(char)bVar33 & 0xffffffffU) * 0x20;
        if (7 < bVar33) {
          puVar6 = (uint *)(lVar35 + 0x48);
        }
        if ((*puVar6 & 8) != 0) {
          pbVar28 = (byte *)(lVar35 + 0x471);
        }
      }
      local_ec[0] = *pbVar28;
      if (local_ec[0] < 8) goto joined_r0x02289460;
    }
    local_ec[0] = *PTR_DAT_04bb5038;
    if (local_ec[0] < 8) goto joined_r0x02289460;
    local_ec[0] = 0xff;
  }
  plVar22 = (long *)PTR_DAT_04bb46b0;
  lVar26 = *(long *)PTR_DAT_04bb46b0;
  if (lVar26 == 0) {
LAB_022899c8:
    lVar26 = 0;
  }
  else {
    puVar27 = *(undefined8 **)(lVar26 + 0x10);
    if ((*(byte *)(lVar26 + 0x453) & 1) == 0) {
      lVar35 = (**(code **)(*(long *)*puVar27 + 0x38))();
      lVar26 = 0;
      if (lVar35 != 0) {
        lVar26 = lVar35 + 0x70;
      }
    }
    else {
      if (puVar27 == (undefined8 *)0x0) goto LAB_022899c8;
      lVar26 = 0;
      if ((long *)puVar27[0x26] != (long *)0x0) {
        lVar26 = (**(code **)(*(long *)puVar27[0x26] + 0x38))();
      }
    }
  }
  plVar3 = (long *)(&LAB_001bfd68 + lVar26);
  lVar35 = *(long *)(&LAB_001bfd88 + lVar26);
  if (lVar35 == 0) {
    local_188 = 0;
  }
  else {
    if (*(undefined8 **)(lVar35 + 0x10) == (undefined8 *)0x0) {
      local_188 = 0;
      plVar24 = *(long **)(lVar35 + 0x20);
    }
    else {
      local_188 = (**(code **)**(undefined8 **)(lVar35 + 0x10))();
      if (*(long *)(&LAB_001bfd88 + lVar26) == 0) goto LAB_02289a40;
      plVar24 = *(long **)(*(long *)(&LAB_001bfd88 + lVar26) + 0x20);
    }
    if (plVar24 != (long *)0x0) {
      local_a0 = (undefined *)*plVar3;
      local_98 = *(undefined **)(&LAB_001bfd70 + lVar26);
      local_90 = 0x1b8;
      (**(code **)(*plVar24 + 0x20))(plVar24,&local_a0);
    }
  }
LAB_02289a40:
  *(undefined1 *)(*(long *)(&LAB_001bfd70 + lVar26) + *plVar3 + 0x1b0) = 1;
  if ((*(long *)(&LAB_001bfd88 + lVar26) != 0) &&
     (plVar24 = *(long **)(*(long *)(&LAB_001bfd88 + lVar26) + 0x20), plVar24 != (long *)0x0)) {
    local_a0 = (undefined *)*plVar3;
    local_98 = *(undefined **)(&LAB_001bfd70 + lVar26);
    local_90 = 0x1b8;
    (**(code **)(*plVar24 + 0x20))(plVar24,&local_a0);
  }
  *(int *)(*(long *)(&LAB_001bfd70 + lVar26) + *plVar3 + 0x1b4) = *(int *)(param_1 + 0x354) + 1;
  puVar5 = PTR_DAT_04bb2720;
  lVar35 = *(long *)PTR_DAT_04bb2720;
  if (lVar35 == 0) {
    puVar27 = &DAT_055c04a0;
  }
  else {
    puVar27 = &DAT_055c04a0;
    if (*(long *)(lVar35 + 0x330) != 0) {
      puVar27 = (undefined8 *)
                (**(code **)(**(long **)PTR_DAT_04bb2640 + 0x18))
                          (*(long **)PTR_DAT_04bb2640,*(undefined4 *)(lVar35 + 0x338));
      iVar19 = FUN_006bd550(*puVar27,0);
      puVar27 = (undefined8 *)PTR_DAT_04bc3a80;
      if (iVar19 != 0x758f7eaf) {
        puVar27 = &DAT_055c04a0;
      }
    }
  }
  FUN_017baf44(*(undefined4 *)(puVar27 + 7));
  local_110 = 0xf61b;
  FUN_0277d4ac(&local_110);
  iVar11 = *(int *)(param_1 + 0x2a8);
  local_138 = PTR_DAT_04bbc1a0 + 0x10;
  iVar40 = *(int *)(param_1 + 0x2ac);
  pcVar4 = PTR_DAT_04bb2010 + 0x10;
  iVar19 = iVar11 + 1;
  iStack_114 = iVar40 + 1;
  local_b0 = 0;
  local_b8 = PTR_DAT_04bbfe68 + 0x10;
  lVar35 = *(long *)puVar5;
  pcStack_130 = pcVar4;
  local_128 = iVar11;
  iStack_124 = iVar40;
  local_120 = pcVar4;
  local_118 = iVar19;
  if (lVar35 == 0) {
    puVar27 = &DAT_055c04a0;
  }
  else {
    puVar27 = &DAT_055c04a0;
    if (*(long *)(lVar35 + 0x330) != 0) {
      puVar27 = (undefined8 *)
                (**(code **)(**(long **)PTR_DAT_04bb2640 + 0x18))
                          (*(long **)PTR_DAT_04bb2640,*(undefined4 *)(lVar35 + 0x338));
      iVar20 = FUN_006bd550(*puVar27,0);
      puVar27 = (undefined8 *)PTR_DAT_04bc3a80;
      if (iVar20 != 0x758f7eaf) {
        puVar27 = &DAT_055c04a0;
      }
    }
  }
  local_ac = *(undefined4 *)(puVar27 + 7);
  local_a8 = FUN_017baf44();
  local_a8 = local_a8 & 1;
  local_68 = (undefined *)0xfffe;
  FUN_0277d4ac(&local_68);
  iVar20 = iVar40 + 2;
  puVar5 = PTR_DAT_04bbc5d8 + 0x10;
  puVar2 = PTR_DAT_04bb2018 + 0x10;
  iVar37 = iVar11;
  do {
    local_d0 = 0;
    local_d8 = pcVar4;
    local_c8 = pcVar4;
    local_c0 = iVar37;
    iStack_bc = iVar40;
    FUN_01a5033c(&local_a0,&local_b8,0,&local_c8,&local_d8);
    local_68 = local_a0;
    if ((short)local_a0 != -2) {
      uVar23 = FUN_027a991c(&local_68);
      if ((((uVar23 & 1) != 0) && (uVar23 = FUN_027a9de4(&local_68), (uVar23 & 1) != 0)) &&
         ((*plVar22 != 0 &&
          (lVar35 = (**(code **)(*(long *)**(undefined8 **)(*plVar22 + 0x10) + 0x30))(), lVar35 != 0
          )))) {
        lVar31 = *(long *)(lVar35 + 0x276fb0);
        if (lVar31 == 0) {
          uVar23 = 0;
        }
        else {
          if (*(undefined8 **)(lVar31 + 0x10) == (undefined8 *)0x0) {
            uVar23 = 0;
            plVar22 = *(long **)(lVar31 + 0x20);
          }
          else {
            uVar23 = (**(code **)**(undefined8 **)(lVar31 + 0x10))();
            uVar23 = uVar23 & 0xffffffff;
            if (*(long *)(lVar35 + 0x276fb0) == 0) goto LAB_02289d28;
            plVar22 = *(long **)(*(long *)(lVar35 + 0x276fb0) + 0x20);
          }
          if (plVar22 != (long *)0x0) {
            local_a0 = *(undefined **)(lVar35 + 0x276f90);
            local_98 = *(undefined **)(lVar35 + 0x276f98);
            local_90 = 0x280;
            (**(code **)(*plVar22 + 0x20))(plVar22,&local_a0);
          }
        }
LAB_02289d28:
        lVar31 = *(long *)(lVar35 + 0x276f90);
        lVar10 = *(long *)(lVar35 + 0x276f98);
        local_a0 = (undefined *)0xfffe;
        FUN_0277d4ac(&local_a0);
        uVar14 = (ulong)local_98 >> 0x10;
        local_a0 = local_68;
        local_98 = (undefined *)CONCAT62((uint6)uVar14 & 0xffffffffff00,1);
        FUN_027a9730(lVar10 + lVar31,&local_a0);
        plVar22 = (long *)PTR_DAT_04bb46b0;
        if ((((uVar23 & 1) != 0) && (*(long *)(lVar35 + 0x276fb0) != 0)) &&
           (puVar27 = *(undefined8 **)(*(long *)(lVar35 + 0x276fb0) + 0x18),
           puVar27 != (undefined8 *)0x0)) {
          (**(code **)*puVar27)();
        }
      }
      uVar23 = FUN_01a4f798(&local_b8,0,&local_c8);
      if ((uVar23 & 1) != 0) {
        local_a0 = (undefined *)((ulong)local_a0 & 0xffffffff00000000);
        lVar35 = *(long *)(*(long *)(*(long *)PTR_DAT_04bb27a8 + 0x1f8) + 0xd0);
        if (lVar35 != 0) {
          FUN_012e5af4(lVar35,&local_c8);
        }
      }
      if (*(char *)(*(long *)PTR_DAT_04bb4910 + 0x88) == '\0') {
        fVar42 = (float)(int)local_d0 * 0.5;
        uVar25 = 0;
        if (fVar42 != (float)(int)fVar42) {
          uVar25 = (uint)(fVar42 < 0.0);
        }
        local_80 = (int)fVar42 - uVar25;
        fVar42 = (float)local_d0._4_4_ * 0.5;
        uVar25 = 0;
        if (fVar42 != (float)(int)fVar42) {
          uVar25 = (uint)(fVar42 < 0.0);
        }
        local_7c = (int)fVar42 - uVar25;
        local_90 = CONCAT44(local_7c,local_80);
        local_a0 = puVar5;
        local_98 = puVar2;
        local_88 = puVar2;
        FUN_036833e0(*(long *)PTR_DAT_04bb4910,&local_a0);
      }
      FUN_011dbc54(&local_d8,0);
    }
    if (iVar37 < iVar19) {
      iVar37 = iVar37 + 1;
    }
    else {
      iVar40 = iVar40 + 1;
      iVar37 = iVar11;
    }
  } while ((iVar11 != iVar37) || (iVar20 != iVar40));
  FUN_01a50970(&local_b8,0,&local_110,&pcStack_130);
  puVar7 = (undefined4 *)(param_1 + 0x364) + (ulong)*(uint *)(param_1 + 0x288) * 6;
  if (3 < *(uint *)(param_1 + 0x288)) {
    puVar7 = (undefined4 *)(param_1 + 0x364);
  }
  *puVar7 = *(undefined4 *)(param_1 + 0x278 + (ulong)(uVar12 < 4) * 8);
  puVar8 = (undefined4 *)(param_1 + 0x278 + lVar32 * 8);
  if (!bVar1) {
    puVar8 = (undefined4 *)PTR_DAT_04bb3238;
  }
  puVar7[1] = *puVar8;
  uVar25 = *(uint *)(param_1 + 0x288);
  lVar32 = *plVar22;
  if (lVar32 != 0) {
    puVar27 = *(undefined8 **)(lVar32 + 0x10);
    if ((*(byte *)(lVar32 + 0x453) & 1) == 0) {
      lVar35 = (**(code **)(*(long *)*puVar27 + 0x38))();
      lVar32 = 0;
      if (lVar35 != 0) {
        lVar32 = lVar35 + 0x70;
      }
      goto LAB_02289f74;
    }
    if (puVar27 != (undefined8 *)0x0) {
      lVar32 = 0;
      if ((long *)puVar27[0x26] != (long *)0x0) {
        lVar32 = (**(code **)(*(long *)puVar27[0x26] + 0x38))();
      }
      goto LAB_02289f74;
    }
  }
  lVar32 = 0;
LAB_02289f74:
  lVar35 = lVar32 + 0x1bfdd0 + (ulong)uVar25 * 0x9a0;
  if (3 < uVar25) {
    lVar35 = lVar32 + 0x1bfdd0;
  }
  if ((*(long **)(lVar35 + 0x28) == (long *)0x0) ||
     (puVar27 = (undefined8 *)**(long **)(lVar35 + 0x28), puVar27 == (undefined8 *)0x0)) {
    uVar41 = *(undefined4 *)(param_1 + 0x288);
  }
  else {
    uVar23 = (**(code **)*puVar27)();
    uVar41 = *(undefined4 *)(param_1 + 0x288);
    if ((((uVar23 & 1) != 0) && (*(long *)(lVar35 + 0x28) != 0)) &&
       (puVar27 = *(undefined8 **)(*(long *)(lVar35 + 0x28) + 8), puVar27 != (undefined8 *)0x0)) {
      (**(code **)*puVar27)();
    }
  }
  if ((((local_188 & 1) != 0) && (*(long *)(&LAB_001bfd88 + lVar26) != 0)) &&
     (puVar27 = *(undefined8 **)(*(long *)(&LAB_001bfd88 + lVar26) + 0x18),
     puVar27 != (undefined8 *)0x0)) {
    (**(code **)*puVar27)();
  }
  if ((((local_184 & 1) != 0) && (*(long *)(lVar21 + 0x28) != 0)) &&
     (puVar27 = *(undefined8 **)(*(long *)(lVar21 + 0x28) + 0x18), puVar27 != (undefined8 *)0x0)) {
    (**(code **)*puVar27)();
  }
  return uVar41;
}

