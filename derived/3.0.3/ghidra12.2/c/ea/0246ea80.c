
/* WARNING: Removing unreachable block (ram,0x0246ecb8) */
/* WARNING: Removing unreachable block (ram,0x0246eb80) */
/* WARNING: Removing unreachable block (ram,0x0246ee6c) */
/* WARNING: Removing unreachable block (ram,0x0246f1d8) */
/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0246ea80(undefined1 param_1 [16],float param_2,float param_3,long param_4)

{
  byte *pbVar1;
  int *piVar2;
  byte *pbVar3;
  long lVar4;
  undefined6 uVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined1 uVar8;
  undefined1 uVar9;
  undefined2 uVar10;
  undefined2 uVar11;
  undefined2 uVar12;
  undefined2 uVar13;
  undefined2 uVar14;
  undefined2 uVar15;
  bool bVar16;
  byte bVar17;
  undefined4 uVar18;
  uint uVar19;
  float *pfVar20;
  undefined4 *puVar21;
  ulong uVar22;
  uint *puVar23;
  undefined8 uVar24;
  uint uVar25;
  int iVar26;
  ushort *puVar27;
  long lVar28;
  ulong uVar29;
  byte bVar30;
  byte bVar31;
  undefined8 *puVar32;
  ushort uVar33;
  long *plVar34;
  char *pcVar35;
  char *pcVar36;
  float fVar37;
  float fVar38;
  float fVar39;
  float fVar40;
  undefined8 local_208;
  undefined8 local_200;
  char *local_1f8;
  undefined *local_1f0;
  char *local_1e8;
  long local_1e0;
  long *local_1d8;
  undefined8 local_1d0;
  undefined2 local_1c4;
  undefined8 local_1c0;
  undefined8 local_1b8;
  float local_1b0;
  float local_1ac;
  undefined1 uStack_1a8;
  byte bStack_1a7;
  undefined2 uStack_1a6;
  float local_1a4;
  undefined2 uStack_1a0;
  undefined2 uStack_19e;
  undefined6 local_19c;
  undefined2 uStack_196;
  undefined8 local_194;
  undefined8 local_18c;
  undefined8 local_184;
  undefined8 uStack_17c;
  undefined8 local_174;
  undefined8 uStack_16c;
  undefined4 local_164;
  undefined4 uStack_160;
  undefined4 uStack_15c;
  int iStack_158;
  undefined1 local_154;
  undefined5 local_150;
  undefined3 uStack_14b;
  undefined5 uStack_148;
  undefined2 local_110;
  undefined1 local_10e;
  undefined1 local_10d;
  undefined4 local_10c;
  undefined4 local_108;
  undefined2 local_104;
  undefined1 local_102;
  undefined1 local_101;
  undefined4 local_100;
  undefined1 local_f8;
  undefined2 local_f0;
  undefined1 local_ee;
  undefined1 local_ed;
  undefined4 local_ec;
  undefined4 local_e8;
  undefined1 local_ad;
  undefined8 local_a8;
  undefined4 local_9c;
  
  pcVar35 = (char *)(param_4 + 0x1909);
  if ((ulong)*(byte *)(param_4 + 0x1ee8) < 8) {
    puVar27 = (ushort *)(PTR_DAT_04bc30f8 + (ulong)*(byte *)(param_4 + 0x1ee8) * 0x18 + 8);
  }
  else {
    puVar27 = &DAT_054967ac;
    DAT_054967ac = 0;
  }
  uVar33 = *puVar27;
  local_1d0 = (undefined *)0xfffe;
  local_1c4 = uVar33;
  FUN_0277d4ac(&local_1d0);
  puVar7 = PTR_DAT_04bb2200;
  local_1d0 = *(undefined **)(param_4 + 0x1900);
  local_1c0._0_4_ = 3.5593e-43;
  uVar19 = 0;
  if (*(long *)(param_4 + 0x70) != 0) {
    uVar25 = *(uint *)(*(long *)(param_4 + 0x70) + 0x280);
    uVar19 = 0;
    if (uVar25 < 0x149) {
      uVar19 = uVar25;
    }
  }
  local_1f0 = (undefined *)CONCAT44(local_1f0._4_4_,uVar19);
  if (*(int *)(param_4 + 0x178) == 0) {
    fVar40 = -20.0;
    puVar32 = &DAT_054e9a58;
    if (*(undefined8 **)(param_4 + 0x4c8) != (undefined8 *)0x0) {
      puVar32 = *(undefined8 **)(param_4 + 0x4c8);
    }
    if ((*(long *)PTR_DAT_04bb2200 != 0) &&
       (lVar28 = *(long *)(*(long *)PTR_DAT_04bb2200 + 0x50), lVar28 != 0)) {
      local_1c0._0_4_ = 0.0;
      lVar28 = *(long *)(lVar28 + 0x118);
      if (lVar28 != 0) {
        lVar28 = *(long *)(lVar28 + 0x280);
        fVar40 = 0.0;
        if ((lVar28 != 0) && (lVar28 = *(long *)(lVar28 + 8), lVar28 != 0)) {
          pfVar20 = (float *)(**(code **)(*(long *)(lVar28 + 0x488) + 0xf0))(lVar28 + 0x488);
          fVar40 = *pfVar20;
        }
        lVar28 = FUN_0251e98c(1);
        pfVar20 = (float *)(**(code **)(*(long *)(lVar28 + 0x1560) + 0xf0))(lVar28 + 0x1560);
        fVar40 = fVar40 + *pfVar20;
      }
    }
    *(float *)((long)puVar32 + 0x2ec) = fVar40;
    *(undefined1 *)((long)puVar32 + 0x2e5) = 1;
  }
  lVar28 = FUN_0251e98c(1);
  puVar21 = (undefined4 *)(**(code **)(*(long *)(lVar28 + 0x1bf0) + 0xf0))(lVar28 + 0x1bf0);
  local_1c0 = (undefined *)CONCAT44(local_1c0._4_4_,*puVar21);
  lVar28 = FUN_0251e98c(1);
  puVar21 = (undefined4 *)(**(code **)(*(long *)(lVar28 + 0x1c20) + 0xf0))(lVar28 + 0x1c20);
  local_1c0._4_4_ = (float)*puVar21;
  lVar28 = FUN_0251e98c(1);
  puVar21 = (undefined4 *)(**(code **)(*(long *)(lVar28 + 0x1bc0) + 0xf0))(lVar28 + 0x1bc0);
  local_1b8 = (char *)CONCAT44(CONCAT31(local_1b8._5_3_,uVar19 == 0xfe),*puVar21);
  FUN_02465c70(param_4,&local_1c0);
  if (*pcVar35 != '\0') {
    fVar40 = -20.0;
    puVar32 = &DAT_054e9a58;
    if (*(undefined8 **)(param_4 + 0x4c8) != (undefined8 *)0x0) {
      puVar32 = *(undefined8 **)(param_4 + 0x4c8);
    }
    lVar28 = *(long *)puVar7;
    if ((lVar28 != 0) && (lVar28 = *(long *)(lVar28 + 0x50), lVar28 != 0)) {
      local_1c0._0_4_ = 0.0;
      lVar28 = *(long *)(lVar28 + 0x118);
      if (lVar28 != 0) {
        lVar28 = *(long *)(lVar28 + 0x280);
        fVar40 = 0.0;
        if ((lVar28 != 0) && (lVar28 = *(long *)(lVar28 + 8), lVar28 != 0)) {
          pfVar20 = (float *)(**(code **)(*(long *)(lVar28 + 0x488) + 0xf0))(lVar28 + 0x488);
          fVar40 = *pfVar20;
        }
        lVar28 = FUN_0251e98c(1);
        pfVar20 = (float *)(**(code **)(*(long *)(lVar28 + 0x1560) + 0xf0))(lVar28 + 0x1560);
        fVar40 = fVar40 + *pfVar20;
      }
    }
    *(float *)((long)puVar32 + 0x27c) = fVar40;
    *(undefined4 *)(param_4 + 0x1810) = 5;
  }
  puVar32 = *(undefined8 **)(param_4 + 0x60);
  if (puVar32 == (undefined8 *)0x0) {
    if ((DAT_052461c0 & 1) == 0) {
      iVar26 = __cxa_guard_acquire(&DAT_052461c0);
      puVar32 = &DAT_05240280;
      if (iVar26 != 0) {
        FUN_016fcf10(&DAT_05240280);
        FUN_001001d0(PTR_FUN_04bbdea8,&DAT_05240280,&__DT_FINI_ARRAY);
        __cxa_guard_release(&DAT_052461c0);
      }
    }
    else {
      puVar32 = &DAT_05240280;
    }
  }
  local_1f0 = (undefined *)((ulong)local_1f0 & 0xffffffff00000000);
  local_1c0 = (undefined *)CONCAT44(local_1c0._4_4_,0xd);
  if ((puVar32[0x227] == 0) || (uVar22 = FUN_03850a90(puVar32[0x227],0xd,0,0), (uVar22 & 1) == 0)) {
    lVar28 = FUN_0251e98c(1);
    puVar23 = (uint *)(**(code **)(*(long *)(lVar28 + 0x1500) + 0xf0))(lVar28 + 0x1500);
    uVar25 = *(uint *)(param_4 + 0x5bc);
    if (*puVar23 <= uVar25) {
      FUN_02333760(param_4);
      uVar25 = *(uint *)(param_4 + 0x5bc);
    }
    *(uint *)(param_4 + 0x5bc) = uVar25 + 1;
  }
  uVar33 = uVar33 >> 8;
  if (*(char *)(param_4 + 0x5ad) == '\0') {
    puVar32 = *(undefined8 **)(param_4 + 0x60);
    local_1e0 = 0;
    local_1d8 = (long *)0x0;
    local_1f0 = (undefined *)0x0;
    local_1e8 = (char *)0x0;
    if (puVar32 == (undefined8 *)0x0) {
      if ((DAT_052461c0 & 1) == 0) {
        iVar26 = __cxa_guard_acquire(&DAT_052461c0);
        puVar32 = &DAT_05240280;
        if (iVar26 != 0) {
          FUN_016fcf10(&DAT_05240280);
          FUN_001001d0(PTR_FUN_04bbdea8,&DAT_05240280,&__DT_FINI_ARRAY);
          __cxa_guard_release(&DAT_052461c0);
        }
      }
      else {
        puVar32 = &DAT_05240280;
      }
    }
    if (puVar32[0x227] == 0) {
      local_200 = (undefined *)((ulong)local_200._4_4_ << 0x20);
    }
    else {
      local_200 = (undefined *)
                  (CONCAT44(local_200._4_4_,*(uint *)(puVar32 + 0x2d3) >> 1) & 0xffffffff00000001);
      local_1c0 = (undefined *)CONCAT44(local_1c0._4_4_,0x23);
      uVar22 = FUN_03850a90(puVar32[0x227],0x23,&local_1f0,*(uint *)(puVar32 + 0x2d3) >> 1 & 1);
      if ((uVar22 & 1) != 0) {
        if (local_1d8 == (long *)0x0) {
          uVar18 = 0x3f800000;
LAB_0246efd0:
          uVar25 = 1;
        }
        else {
          if (*local_1d8 == 0) {
            local_ad = 0;
            local_1b0 = 3.58732e-43;
            local_1b8 = (char *)&local_1ac;
            local_1ac = (float)((uint)local_1ac & 0xffffff00);
            local_1c0 = PTR_DAT_04bb21f8 + 0x10;
            lVar28 = *(long *)(local_1d8[2] + 8);
            FUN_038d1270(&local_1c0,"%s.as",
                         lVar28 + *(int *)(lVar28 + 0x24) + (long)*(int *)(lVar28 + 8));
            uVar18 = 0;
            if (local_1d8 == (long *)0x0) goto LAB_0246efd0;
LAB_0246ef90:
            lVar28 = *local_1d8;
          }
          else {
            iVar26 = *(int *)(*local_1d8 + 8);
            if (0x5fffffff < iVar26) {
              uVar25 = iVar26 + 0xa0000000;
              if (*(uint *)(local_1e0 + 0x80) <= uVar25) {
                uVar25 = 0;
              }
              lVar28 = *(long *)(local_1e0 + 0x88) + (ulong)uVar25 * 0x32;
              puVar21 = (undefined4 *)(lVar28 + (ulong)*(byte *)(lVar28 + 0x20));
LAB_0246ef8c:
              uVar18 = *puVar21;
              goto LAB_0246ef90;
            }
            piVar2 = (int *)(*(long *)(local_1d8[2] + 8) + (long)iVar26);
            if (0 < *piVar2) {
              puVar21 = (undefined4 *)
                        (((ulong)(uint)piVar2[1] & 0xfffffff) + *(long *)(local_1d8[2] + 8) + 4);
              goto LAB_0246ef8c;
            }
            uVar18 = 0;
            lVar28 = *local_1d8;
          }
          if (lVar28 == 0) goto LAB_0246efd0;
          param_2 = *(float *)(lVar28 + 0x18);
          if (param_2 < 0.0) {
            param_2 = *(float *)(local_1d8[1] + 0xc);
          }
          param_3 = *(float *)(lVar28 + 0x14);
          param_2 = param_2 - param_3;
          uVar25 = (uint)param_2;
          if (uVar25 < 2) {
            uVar25 = 1;
          }
        }
        *(undefined4 *)(param_4 + 0x5b8) = uVar18;
        *(byte *)(param_4 + 0x5ac) = (byte)(uVar25 >> 0x1f);
        *(uint *)(param_4 + 0x5a8) = uVar25 & ((int)uVar25 >> 0x1f ^ 0xffffffffU);
        fVar40 = 0.0;
        *(uint *)(param_4 + 0x5a4) = uVar25 & (int)uVar25 >> 0x1f;
        *(undefined4 *)(param_4 + 0x5a0) = 0;
        *(undefined1 *)(param_4 + 0x5ad) = 1;
        goto LAB_0246f000;
      }
    }
    fVar40 = 0.0;
    if (*(char *)(param_4 + 0x5ad) != '\0') goto LAB_0246f000;
  }
  else {
    iVar26 = *(int *)(param_4 + 0x5a8);
    param_2 = 1.0;
    if ((*(int *)(param_4 + 0x5a0) < iVar26) && (param_2 = 1.0, iVar26 != 0)) {
      fVar39 = (float)*(int *)(param_4 + 0x5a0) / (float)iVar26;
      fVar40 = 1.0;
      if (fVar39 <= 1.0) {
        fVar40 = fVar39;
      }
      param_2 = 0.0;
      if (0.0 <= fVar39) {
        param_2 = fVar40;
      }
    }
    param_3 = *(float *)(param_4 + 0x5b8);
    fVar40 = param_3 + param_2 * (1.0 - param_3);
LAB_0246f000:
    uVar18 = (**(code **)(*(long *)(param_4 + 0x598) + (ulong)*(byte *)(param_4 + 0x5ac) * 8))
                       (param_4 + 0x598);
    *(undefined4 *)(param_4 + 0x5a0) = uVar18;
  }
  if ((uVar19 == 0xfe) && (*(int *)(param_4 + 0x178) == 0)) {
    FUN_02332b04(param_4,1,0);
    uVar22 = FUN_024bc518(param_4);
    if ((uVar22 & 1) != 0) {
      FUN_0230e2b0(&local_1c0);
      pfVar20 = (float *)local_1b8;
      uVar25 = *(uint *)(param_4 + 0x17cc);
      if (local_1b8 != "Player_GetDemo_30_Diving") {
        iVar26 = 0x18;
        if ((int)local_1b0 < 0x19) {
          iVar26 = (int)local_1b0 + -1;
        }
        memcpy(local_1b8,"Player_GetDemo_30_Diving",(long)iVar26);
        *(char *)((long)pfVar20 + (long)iVar26) = '\0';
      }
      pcVar36 = (char *)CONCAT44(uStack_15c,uStack_160);
      if (pcVar36 != "Get_DiveFish") {
        iVar26 = 0xc;
        if (iStack_158 < 0xd) {
          iVar26 = iStack_158 + -1;
        }
        memcpy(pcVar36,"Get_DiveFish",(long)iVar26);
        pcVar36[iVar26] = '\0';
      }
      if ((uVar25 >> 6 & 1) == 0) {
        local_108 = 0xc;
      }
      else {
        iVar26 = FUN_0277d6c4(&local_1d0);
        if (iVar26 == 0x32a8) {
          local_108 = 6;
        }
        else if ((*(long *)PTR_DAT_04bb4208 == 0) ||
                (iVar26 = FUN_029538b8(*(long *)PTR_DAT_04bb4208,&local_1d0), iVar26 == 0)) {
          local_108 = 4;
        }
        else {
          local_108 = 5;
        }
      }
      local_f8 = 0;
      local_e8 = 0x3c;
      local_110 = (undefined2)local_1d0;
      local_10e = local_1d0._2_1_;
      local_10d = local_1d0._3_1_;
      local_10c = local_1d0._4_4_;
      local_104 = (undefined2)local_1d0;
      local_102 = local_1d0._2_1_;
      local_101 = local_1d0._3_1_;
      local_100 = local_1d0._4_4_;
      local_f0 = (undefined2)local_1d0;
      local_ee = local_1d0._2_1_;
      local_ed = local_1d0._3_1_;
      local_ec = local_1d0._4_4_;
      FUN_02328d9c(param_4,&local_1c0);
      uVar33 = local_1c4 >> 8;
    }
  }
  puVar6 = PTR_DAT_04bb2020;
  fVar39 = -20.0;
  local_200 = PTR_DAT_04bb2020 + 0x10;
  local_1e8 = "PlayerDiveOut";
  lVar28 = *(long *)puVar7;
  local_1f8 = "PlayerDiveOutAndGet";
  local_1f0 = local_200;
  if ((lVar28 != 0) && (lVar28 = *(long *)(lVar28 + 0x50), lVar28 != 0)) {
    local_1c0 = (undefined *)((ulong)local_1c0 & 0xffffffff00000000);
    lVar28 = *(long *)(lVar28 + 0x118);
    if (lVar28 != 0) {
      lVar28 = *(long *)(lVar28 + 0x280);
      fVar39 = 0.0;
      if ((lVar28 != 0) && (lVar28 = *(long *)(lVar28 + 8), lVar28 != 0)) {
        pfVar20 = (float *)(**(code **)(*(long *)(lVar28 + 0x488) + 0xf0))(lVar28 + 0x488);
        fVar39 = *pfVar20;
      }
      lVar28 = FUN_0251e98c(1);
      pfVar20 = (float *)(**(code **)(*(long *)(lVar28 + 0x1560) + 0xf0))(lVar28 + 0x1560);
      fVar39 = fVar39 + *pfVar20;
    }
  }
  pbVar1 = (byte *)(param_4 + 0x1ee8);
  uVar24 = FUN_0251e98c(1);
  fVar37 = (float)FUN_02366dec(uVar24,&local_1d0);
  uVar14 = uStack_19e;
  uVar12 = uStack_1a0;
  uVar10 = uStack_1a6;
  bVar17 = bStack_1a7;
  uVar8 = uStack_1a8;
  uStack_1a8 = SUB41(fVar37,0);
  uVar9 = uStack_1a8;
  bStack_1a7 = (byte)((uint)fVar37 >> 8);
  bVar30 = bStack_1a7;
  uStack_1a6 = (undefined2)((uint)fVar37 >> 0x10);
  uVar11 = uStack_1a6;
  uStack_1a0 = SUB42(param_3,0);
  uVar13 = uStack_1a0;
  uStack_19e = (undefined2)((uint)param_3 >> 0x10);
  uVar15 = uStack_19e;
  uStack_1a8 = uVar8;
  bStack_1a7 = bVar17;
  uStack_1a6 = uVar10;
  uStack_1a0 = uVar12;
  uStack_19e = uVar14;
  if (uVar33 == 0) {
    puVar32 = *(undefined8 **)(param_4 + 0x60);
    if (puVar32 == (undefined8 *)0x0) {
      if ((DAT_052461c0 & 1) == 0) {
        iVar26 = __cxa_guard_acquire(&DAT_052461c0);
        puVar32 = &DAT_05240280;
        if (iVar26 != 0) {
          FUN_016fcf10(&DAT_05240280);
          FUN_001001d0(PTR_FUN_04bbdea8,&DAT_05240280,&__DT_FINI_ARRAY);
          __cxa_guard_release(&DAT_052461c0);
        }
      }
      else {
        puVar32 = &DAT_05240280;
      }
    }
    local_1c0 = (undefined *)((ulong)local_1c0 & 0xffffffff00000000);
    if (puVar32[0x227] == 0) {
LAB_0246f39c:
      puVar32 = *(undefined8 **)(param_4 + 0x60);
      if (puVar32 == (undefined8 *)0x0) {
        if ((DAT_052461c0 & 1) == 0) {
          iVar26 = __cxa_guard_acquire(&DAT_052461c0);
          puVar32 = &DAT_05240280;
          if (iVar26 != 0) {
            FUN_016fcf10(&DAT_05240280);
            FUN_001001d0(PTR_FUN_04bbdea8,&DAT_05240280,&__DT_FINI_ARRAY);
            __cxa_guard_release(&DAT_052461c0);
          }
        }
        else {
          puVar32 = &DAT_05240280;
        }
      }
      local_a8 = (ulong)local_a8._4_4_ << 0x20;
      local_1c0 = puVar6 + 0x10;
      local_1b8 = "PlayerCatchDiveFish";
      if (puVar32[0x227] != 0) {
        lVar28 = *(long *)(puVar32[0x227] + 0x88);
        plVar34 = (long *)(lVar28 + 0x60);
        (**(code **)(*plVar34 + 0x18))(plVar34);
        (**(code **)(*plVar34 + 0x18))(plVar34);
        pfVar20 = *(float **)(lVar28 + 0x68);
        (**(code **)(local_1c0 + 0x18))(&local_1c0);
        if (pfVar20 != (float *)local_1b8) {
          pcVar36 = *(char **)(lVar28 + 0x68);
          if (*pcVar36 != *local_1b8) goto LAB_0246f4b8;
          if (*pcVar36 != '\0') {
            uVar22 = 0;
            do {
              uVar29 = uVar22;
              if ((uVar29 == 0x80000) ||
                 (pcVar36[uVar29 + 1] != *(char *)((long)local_1b8 + uVar29 + 1)))
              goto LAB_0246f4b8;
              if (pcVar36[uVar29 + 1] == '\0') goto LAB_0246f4b0;
              if (pcVar36[uVar29 + 2] != *(char *)((long)local_1b8 + uVar29 + 2)) goto LAB_0246f4b8;
              uVar22 = uVar29 + 2;
            } while (pcVar36[uVar29 + 2] != '\0');
            uVar29 = uVar29 + 1;
LAB_0246f4b0:
            if (uVar29 >> 0x13 != 0) goto LAB_0246f4b8;
          }
        }
        goto LAB_0246f4c0;
      }
LAB_0246f4b8:
      if (*pcVar35 != '\0') goto LAB_0246f4c0;
      puVar32 = *(undefined8 **)(param_4 + 0x60);
      if (puVar32 == (undefined8 *)0x0) {
        if ((DAT_052461c0 & 1) == 0) {
          iVar26 = __cxa_guard_acquire(&DAT_052461c0);
          puVar32 = &DAT_05240280;
          if (iVar26 != 0) {
            FUN_016fcf10(&DAT_05240280);
            FUN_001001d0(PTR_FUN_04bbdea8,&DAT_05240280,&__DT_FINI_ARRAY);
            __cxa_guard_release(&DAT_052461c0);
          }
        }
        else {
          puVar32 = &DAT_05240280;
        }
      }
      local_1c0 = (undefined *)((ulong)local_1c0 & 0xffffffff00000000);
      if (puVar32[0x227] != 0) {
        lVar28 = *(long *)(puVar32[0x227] + 0x88);
        plVar34 = (long *)(lVar28 + 0x60);
        (**(code **)(*plVar34 + 0x18))(plVar34);
        (**(code **)(*plVar34 + 0x18))(plVar34);
        pcVar35 = *(char **)(lVar28 + 0x68);
        (**(code **)(local_1f0 + 0x18))(&local_1f0);
        if (pcVar35 != local_1e8) {
          pcVar35 = *(char **)(lVar28 + 0x68);
          if (*pcVar35 != *local_1e8) goto LAB_0246f958;
          if (*pcVar35 != '\0') {
            uVar22 = 0;
            do {
              uVar29 = uVar22;
              if ((uVar29 == 0x80000) || (pcVar35[uVar29 + 1] != local_1e8[uVar29 + 1]))
              goto LAB_0246f958;
              if (pcVar35[uVar29 + 1] == '\0') goto LAB_0246f86c;
              if (pcVar35[uVar29 + 2] != local_1e8[uVar29 + 2]) goto LAB_0246f958;
              uVar22 = uVar29 + 2;
            } while (pcVar35[uVar29 + 2] != '\0');
            uVar29 = uVar29 + 1;
LAB_0246f86c:
            if (uVar29 >> 0x13 != 0) goto LAB_0246f958;
          }
        }
        uVar24 = FUN_016debb0(param_4);
        uVar22 = FUN_0170a6d0(uVar24,0);
        if ((uVar22 & 1) != 0) {
          puVar32 = &DAT_054e9a58;
          if (*(undefined8 **)(param_4 + 0x4c8) != (undefined8 *)0x0) {
            puVar32 = *(undefined8 **)(param_4 + 0x4c8);
          }
          *(float *)((long)puVar32 + 0x27c) = fVar39;
          if (*(int *)(param_4 + 0x178) == 0) {
            if (*(int *)(param_4 + 0x1810) == 1) {
              plVar34 = *(long **)(param_4 + 0x68);
              (**(code **)(*plVar34 + 0x140))(plVar34,plVar34 + 0x4f,1);
              *(undefined8 *)(param_4 + 0x1820) = 0;
              *(uint *)(param_4 + 0x17cc) = *(uint *)(param_4 + 0x17cc) & 0xfff7ffff;
              *(undefined8 *)(param_4 + 0x1844) = 0;
            }
            *(undefined8 *)(param_4 + 0x1980) = 0;
            *(undefined8 *)(param_4 + 0x1988) = 0;
            *(undefined8 *)(param_4 + 0x1990) = 0;
            *(undefined8 *)(param_4 + 0x1998) = 0;
            *(undefined8 *)(param_4 + 0x19a0) = 0;
            *(undefined8 *)(param_4 + 0x19a8) = 0;
            *(undefined8 *)(param_4 + 0x19b0) = 0;
            *(undefined8 *)(param_4 + 0x19b8) = 0;
            *(undefined8 *)(param_4 + 0x19c0) = 0;
            *(undefined8 *)(param_4 + 0x19c8) = 0;
            *(undefined8 *)(param_4 + 0x19d0) = 0;
            *(undefined8 *)(param_4 + 0x1960) = *(undefined8 *)(param_4 + 0x18e0);
            *(undefined2 *)(param_4 + 0x19d8) = 0;
            *(undefined8 *)(param_4 + 0x1968) = *(undefined8 *)(param_4 + 0x18e8);
            *(undefined8 *)(param_4 + 0x1970) = *(undefined8 *)(param_4 + 0x18f0);
            *(undefined8 *)(param_4 + 0x1978) = *(undefined8 *)(param_4 + 0x18f8);
            *(undefined2 *)(param_4 + 0x1980) = 0xa01;
            local_1c0 = (undefined *)CONCAT44(local_1c0._4_4_,0xf6);
            *(undefined8 *)(param_4 + 0x18c0) = *(undefined8 *)(param_4 + 0x19c0);
            *(undefined8 *)(param_4 + 0x18c8) = *(undefined8 *)(param_4 + 0x19c8);
            *(undefined8 *)(param_4 + 0x18d0) = *(undefined8 *)(param_4 + 0x19d0);
            *(undefined2 *)(param_4 + 0x18d8) = *(undefined2 *)(param_4 + 0x19d8);
            *(undefined8 *)(param_4 + 0x18a0) = *(undefined8 *)(param_4 + 0x19a0);
            *(undefined8 *)(param_4 + 0x18a8) = *(undefined8 *)(param_4 + 0x19a8);
            *(undefined8 *)(param_4 + 0x18b0) = *(undefined8 *)(param_4 + 0x19b0);
            *(undefined8 *)(param_4 + 0x18b8) = *(undefined8 *)(param_4 + 0x19b8);
            *(undefined8 *)(param_4 + 0x1880) = *(undefined8 *)(param_4 + 0x1980);
            *(undefined8 *)(param_4 + 0x1888) = *(undefined8 *)(param_4 + 0x1988);
            *(undefined8 *)(param_4 + 0x1890) = *(undefined8 *)(param_4 + 0x1990);
            *(undefined8 *)(param_4 + 0x1898) = *(undefined8 *)(param_4 + 0x1998);
            *(undefined8 *)(param_4 + 0x1860) = *(undefined8 *)(param_4 + 0x1960);
            *(undefined8 *)(param_4 + 0x1868) = *(undefined8 *)(param_4 + 0x1968);
            *(undefined8 *)(param_4 + 0x1878) = *(undefined8 *)(param_4 + 0x1978);
            lVar28 = *(long *)(param_4 + 0x70);
            *(undefined8 *)(param_4 + 0x1870) = *(undefined8 *)(param_4 + 0x1970);
            uVar19 = 0xf6;
            goto LAB_0246fcc0;
          }
          *(uint *)(param_4 + 0x17cc) = *(uint *)(param_4 + 0x17cc) | 8;
          FUN_023164ec(param_4,10);
        }
      }
    }
    else {
      lVar28 = *(long *)(puVar32[0x227] + 0x88);
      plVar34 = (long *)(lVar28 + 0x60);
      (**(code **)(*plVar34 + 0x18))(plVar34);
      (**(code **)(*plVar34 + 0x18))(plVar34);
      pcVar36 = *(char **)(lVar28 + 0x68);
      (**(code **)(local_200 + 0x18))(&local_200);
      if (pcVar36 != local_1f8) {
        pcVar36 = *(char **)(lVar28 + 0x68);
        if (*pcVar36 != *local_1f8) goto LAB_0246f39c;
        if (*pcVar36 != '\0') {
          uVar22 = 0;
          do {
            uVar29 = uVar22;
            if ((uVar29 == 0x80000) || (pcVar36[uVar29 + 1] != local_1f8[uVar29 + 1]))
            goto LAB_0246f39c;
            if (pcVar36[uVar29 + 1] == '\0') goto LAB_0246f394;
            if (pcVar36[uVar29 + 2] != local_1f8[uVar29 + 2]) goto LAB_0246f39c;
            uVar22 = uVar29 + 2;
          } while (pcVar36[uVar29 + 2] != '\0');
          uVar29 = uVar29 + 1;
LAB_0246f394:
          if (0x7ffff < uVar29) goto LAB_0246f39c;
        }
      }
LAB_0246f4c0:
      if (0.0 < fVar40) {
        local_1a4 = 0.0;
        uStack_1a0 = 0;
        uStack_1a8 = 0;
        bStack_1a7 = 0xff;
        local_1b8 = (char *)0x0;
        local_1b0 = 0.0;
        local_1ac = 1.0;
        local_18c = 0x3f80000000000000;
        local_1c0 = *(undefined **)PTR_DAT_04bb37e0;
        uStack_19e = 0;
        local_19c = 0;
        local_194 = CONCAT35(local_194._5_3_,0x3f800000);
        local_154 = 0;
        local_150 = 0;
        uStack_14b = 0;
        uStack_148 = 0;
        uStack_17c = _UNK_04102208;
        local_184 = _DAT_04102200;
        uStack_16c = _UNK_04102888;
        local_174 = _DAT_04102880;
        uStack_15c = (undefined4)_UNK_041023d8;
        iStack_158 = (int)((ulong)_UNK_041023d8 >> 0x20);
        local_164 = (undefined4)_DAT_041023d0;
        uStack_160 = (undefined4)((ulong)_DAT_041023d0 >> 0x20);
        fVar38 = (float)FUN_0251dd30(pbVar1);
        puVar32 = *(undefined8 **)(param_4 + 0x60);
        local_1c0 = local_1d0;
        uStack_1a8 = 1;
        bStack_1a7 = *pbVar1;
        local_1b8 = (char *)CONCAT44(fVar40 * param_2,fVar40 * fVar37);
        if (7 < bStack_1a7) {
          bStack_1a7 = 0xff;
        }
        local_1b0 = fVar40 * param_3 * fVar40 * (1.0 - fVar38);
        local_1ac = fVar40;
        if (puVar32 == (undefined8 *)0x0) {
          if (((DAT_052461c0 & 1) == 0) &&
             (iVar26 = __cxa_guard_acquire(&DAT_052461c0), iVar26 != 0)) {
            FUN_016fcf10(&DAT_05240280);
            FUN_001001d0(PTR_FUN_04bbdea8,&DAT_05240280,&__DT_FINI_ARRAY);
            __cxa_guard_release(&DAT_052461c0);
            puVar32 = &DAT_05240280;
          }
          else {
            puVar32 = &DAT_05240280;
          }
        }
        FUN_0170d420(puVar32,&local_1c0);
      }
      puVar32 = *(undefined8 **)(param_4 + 0x60);
      if (puVar32 == (undefined8 *)0x0) {
        if (((DAT_052461c0 & 1) == 0) && (iVar26 = __cxa_guard_acquire(&DAT_052461c0), iVar26 != 0))
        {
          FUN_016fcf10(&DAT_05240280);
          FUN_001001d0(PTR_FUN_04bbdea8,&DAT_05240280,&__DT_FINI_ARRAY);
          __cxa_guard_release(&DAT_052461c0);
          puVar32 = &DAT_05240280;
        }
        else {
          puVar32 = &DAT_05240280;
        }
      }
      uVar22 = FUN_0170a6d0(puVar32,0);
      if (((uVar22 & 1) != 0) || (*pcVar35 != '\0')) {
        if (*(int *)(param_4 + 0x178) == 0) {
          *pcVar35 = '\x01';
        }
        if (uVar19 == 0xfe) {
          local_1b8 = (char *)0x5;
          local_194 = 0x3f80000000000000;
          local_1b0 = (float)((uint)local_1b0 & 0xffffff00);
          local_1c0 = *(undefined **)PTR_DAT_04bb37e0;
          local_1ac = 0.0;
          uStack_1a8 = 0;
          bStack_1a7 = 0;
          uStack_1a6 = 0;
          local_1a4 = 0.0;
          uStack_1a0 = 0;
          uStack_19e = 0;
          local_19c = 0;
          uStack_196 = 0;
          local_18c = CONCAT26(local_18c._6_2_,0x100);
          local_a8 = 0xfffe;
          FUN_0277d4ac(&local_a8);
          local_1ac = 0.0;
          local_1b8 = (char *)0x3;
          local_1c0 = *(undefined **)(param_4 + 0x1900);
          local_1b0 = (float)((uint)local_1b0 & 0xffffff00);
          uVar24 = *(undefined8 *)(*(long *)(param_4 + 0x68) + 0x278);
          local_18c = CONCAT71(local_18c._1_7_,1);
          local_19c = (undefined6)uVar24;
          uStack_196 = (undefined2)((ulong)uVar24 >> 0x30);
          local_194 = CONCAT44(local_194._4_4_,*(undefined4 *)(*(long *)(param_4 + 0x68) + 0x280));
          uStack_1a8 = uVar9;
          bStack_1a7 = bVar30;
          uStack_1a6 = uVar11;
          local_1a4 = param_2;
          uStack_1a0 = uVar13;
          uStack_19e = uVar15;
          FUN_0236b830(param_4,&local_1c0);
        }
        puVar32 = &DAT_054e9a58;
        if (*(undefined8 **)(param_4 + 0x4c8) != (undefined8 *)0x0) {
          puVar32 = *(undefined8 **)(param_4 + 0x4c8);
        }
        *(float *)((long)puVar32 + 0x27c) = fVar39;
        uVar25 = *(uint *)(param_4 + 0x17cc);
        *(uint *)(param_4 + 0x17cc) = uVar25 & 0xfffffffe;
        if ((uVar25 & 1) != 0) {
          bVar17 = *pbVar1;
          bVar16 = *(int *)(param_4 + 0x178) == 0;
          if (7 < bVar17) {
            bVar17 = 0xff;
          }
          uVar5 = (undefined6)
                  (((ulong)CONCAT41(CONCAT31(local_1b8._5_3_,(char)(uVar25 >> 6)),bVar17) << 0x18)
                  >> 0x10);
          local_1c0 = local_1d0;
          lVar28 = *(long *)PTR_DAT_04bb39b0;
          if (lVar28 == 0) {
            local_1b8._0_2_ = (ushort)bVar16;
            local_1b8 = (char *)(CONCAT62(uVar5,(ushort)local_1b8) & 0xffffff01ffffffff);
LAB_0246f8c0:
            bVar16 = true;
          }
          else {
            local_1b8._0_2_ = CONCAT11(*(int *)(lVar28 + 0x15c) != 0,bVar16);
            local_1b8 = (char *)(CONCAT62(uVar5,(ushort)local_1b8) & 0xffffff01ffffffff);
            if (*(int *)(lVar28 + 0x15c) == 0) goto LAB_0246f8c0;
            pbVar3 = PTR_DAT_04bb32e0;
            if (*(int *)(lVar28 + 0x15c) != 0) {
              pbVar3 = (byte *)(lVar28 + 0x158);
            }
            bVar31 = *pbVar3;
            if (7 < bVar31) {
              bVar31 = 0xff;
            }
            bVar16 = bVar31 == bVar17;
          }
          local_1b8._0_3_ = CONCAT12(bVar16,(ushort)local_1b8);
          FUN_02307568(&local_1c0);
        }
      }
      if ((*(int *)(param_4 + 0x178) == 0) && (uVar22 = FUN_0231eddc(param_4,0), (uVar22 & 1) != 0))
      goto LAB_0246f8e8;
    }
LAB_0246f958:
    if (uVar19 != 0xfe) {
      return;
    }
    if (*(int *)(param_4 + 0x178) != 0) {
      return;
    }
LAB_0246f968:
    puVar7 = PTR_DAT_04bc30f8;
    if ((*(byte *)(param_4 + 0x17cd) >> 5 & 1) == 0) {
      return;
    }
    local_1c4 = CONCAT11(1,(undefined1)local_1c4);
    uVar22 = (ulong)*pbVar1;
    if (7 < uVar22) {
      return;
    }
    if (*(short *)(PTR_DAT_04bc30f8 + uVar22 * 0x18 + 8) == local_1c4) {
      return;
    }
    *(ushort *)(PTR_DAT_04bc30f8 + uVar22 * 0x18 + 8) = local_1c4;
    puVar7[uVar22 * 0x18 + 10] = 1;
    return;
  }
  if (uVar19 != 0xfe) {
    return;
  }
  FUN_0236c210(param_4,0);
  if (*(int *)(param_4 + 0x178) != 0) {
LAB_0246f274:
    if ((*(byte *)(param_4 + 0x17cd) >> 4 & 1) == 0) {
      return;
    }
    FUN_0236b9d0(param_4,param_4 + 0x1ee9);
    return;
  }
  uVar22 = FUN_0231eddc(param_4,0);
  if ((uVar22 & 1) == 0) {
    if (*(int *)(param_4 + 0x178) != 0) goto LAB_0246f274;
    goto LAB_0246f968;
  }
LAB_0246f8e8:
  if ((*(byte *)(param_4 + 0x17cc) >> 6 & 1) == 0) {
    local_18c = CONCAT26(local_18c._6_2_,0x100);
    local_1ac = 5.60519e-45;
    local_1b8 = (char *)0x0;
    puVar32 = &DAT_054e9a58;
    if (*(undefined8 **)(param_4 + 0x4c8) != (undefined8 *)0x0) {
      puVar32 = *(undefined8 **)(param_4 + 0x4c8);
    }
    local_1c0 = local_1d0;
    local_19c = (undefined6)puVar32[0x4f];
    uStack_196 = (undefined2)((ulong)puVar32[0x4f] >> 0x30);
    local_194 = CONCAT44(0x3f800000,*(undefined4 *)(puVar32 + 0x50));
    local_1b0 = (float)CONCAT31(local_1b0._1_3_,1);
    uStack_1a8 = uVar9;
    bStack_1a7 = bVar30;
    uStack_1a6 = uVar11;
    local_1a4 = param_2;
    uStack_1a0 = uVar13;
    uStack_19e = uVar15;
    FUN_0236cba0(param_4,&local_1c0);
    return;
  }
  lVar28 = *(long *)PTR_DAT_04bb39b0;
  if ((lVar28 == 0) || (*(int *)(lVar28 + 0x15c) == 0)) {
LAB_0246fa10:
    if (*(long *)PTR_DAT_04bb2230 == 0) {
      lVar28 = 0;
      if (DAT_00000028 != '\0') goto LAB_0246fa2c;
LAB_0246fa54:
      bVar17 = 1;
    }
    else {
      lVar28 = *(long *)(*(long *)PTR_DAT_04bb2230 + 0x28);
      if (*(char *)(lVar28 + 0x28) == '\0') goto LAB_0246fa54;
LAB_0246fa2c:
      bVar17 = (**(code **)(*(long *)(lVar28 + 0x20) + 0x18))((long *)(lVar28 + 0x20));
      *(undefined1 *)(lVar28 + 0x28) = 0;
    }
    *(byte *)(lVar28 + 0x29) = bVar17 & 1;
    puVar21 = (undefined4 *)(lVar28 + 0x2c);
  }
  else {
    pbVar3 = PTR_DAT_04bb32e0;
    if (*(int *)(lVar28 + 0x15c) != 0) {
      pbVar3 = (byte *)(lVar28 + 0x158);
    }
    bVar30 = *pbVar1;
    bVar17 = *pbVar3;
    if (7 < bVar17) {
      bVar17 = 0xff;
    }
    if (7 < bVar30) {
      bVar30 = 0xff;
    }
    if (bVar17 == bVar30) goto LAB_0246fa10;
    puVar21 = (undefined4 *)PTR_DAT_04bb37e0;
  }
  local_208._0_4_ = *puVar21;
  local_208._4_4_ = puVar21[1];
  local_1b8 = (char *)((ulong)local_1b8 & 0xffffffff00000000);
  local_1c0 = (undefined *)0x0;
  uVar22 = FUN_02520240(&local_1c0,*(long *)(param_4 + 0x68) + 0x278,
                        *(long *)(param_4 + 0x68) + 0x2b4);
  if ((uVar22 & 1) == 0) {
    local_1c0 = *(undefined **)(*(long *)(param_4 + 0x68) + 0x278);
    local_1b8 = (char *)CONCAT44(local_1b8._4_4_,*(undefined4 *)(*(long *)(param_4 + 0x68) + 0x280))
    ;
  }
  *(uint *)(param_4 + 0x17d0) = *(uint *)(param_4 + 0x17d0) & 0xffbfffff;
  puVar7 = PTR_DAT_04bb43c0;
  lVar28 = *(long *)PTR_DAT_04bb43c0;
  uVar19 = FUN_0277d6c4(&local_208);
  if (*(long *)puVar7 == 0) {
LAB_0246fb78:
    puVar32 = &local_1d0;
  }
  else {
    lVar28 = *(long *)(lVar28 + 0x57e58);
    uVar19 = (uVar19 & 0xffff) - (uint)*(ushort *)(lVar28 + 0x1f8);
    if ((*(uint *)(lVar28 + 0x1d8) <= uVar19) ||
       (*(long *)(*(long *)(lVar28 + 0x1e0) + (long)(int)uVar19 * 8) == 0)) goto LAB_0246fb78;
    local_a8 = 0xfffe;
    FUN_0277d4ac(&local_a8);
    FUN_016e49e4(&local_a8,&local_1d0,0);
    lVar28 = *(long *)puVar7;
    uVar19 = FUN_0277d6c4(&local_a8);
    if (*(long *)puVar7 != 0) {
      lVar28 = *(long *)(lVar28 + 0x57e58);
      uVar19 = (uVar19 & 0xffff) - (uint)*(ushort *)(lVar28 + 0x1f8);
      if ((uVar19 < *(uint *)(lVar28 + 0x1d8)) &&
         (*(long *)(*(long *)(lVar28 + 0x1e0) + (long)(int)uVar19 * 8) != 0)) {
        FUN_026738b0(pbVar1,&local_a8,1,0);
      }
    }
    puVar32 = &local_208;
  }
  local_9c = 1;
  uVar24 = *puVar32;
  *(undefined8 *)(param_4 + 0x1990) = 0;
  *(undefined8 *)(param_4 + 0x1998) = 0;
  *(undefined8 *)(param_4 + 0x19a0) = 0;
  *(undefined8 *)(param_4 + 0x19a8) = 0;
  *(undefined8 *)(param_4 + 0x1980) = uVar24;
  *(undefined8 *)(param_4 + 0x1960) = *(undefined8 *)(param_4 + 0x18e0);
  iVar26 = (int)(local_1c0._4_4_ * 4.0);
  *(undefined8 *)(param_4 + 0x1968) = *(undefined8 *)(param_4 + 0x18e8);
  *(undefined8 *)(param_4 + 0x19b0) = 0;
  *(undefined8 *)(param_4 + 0x19b8) = 0;
  *(undefined8 *)(param_4 + 0x19c0) = 0;
  *(undefined8 *)(param_4 + 0x19c8) = 0;
  *(undefined8 *)(param_4 + 0x1970) = *(undefined8 *)(param_4 + 0x18f0);
  *(undefined8 *)(param_4 + 0x19d0) = 0;
  *(undefined2 *)(param_4 + 0x19d8) = 0;
  *(undefined8 *)(param_4 + 0x1978) = *(undefined8 *)(param_4 + 0x18f8);
  *(int *)(param_4 + 0x1988) = (int)((float)local_1c0 * 999.99994);
  if (0x7ffe < iVar26) {
    iVar26 = 0x7fff;
  }
  if (iVar26 < -0x7fff) {
    iVar26 = -0x8000;
  }
  *(short *)(param_4 + 0x198c) = (short)iVar26;
  *(int *)(param_4 + 0x198e) = (int)((float)local_1b8 * 999.99994);
  *(undefined2 *)(param_4 + 0x1992) = 1;
  uVar19 = 0xf8;
  if (1 < *(int *)(param_4 + 0x1810) - 5U) {
    uVar19 = 0x9e;
  }
  local_a8 = CONCAT44(local_a8._4_4_,uVar19);
  if (0x148 < uVar19) {
    return;
  }
  *(undefined8 *)(param_4 + 0x18c0) = *(undefined8 *)(param_4 + 0x19c0);
  *(undefined8 *)(param_4 + 0x18c8) = *(undefined8 *)(param_4 + 0x19c8);
  *(undefined8 *)(param_4 + 0x18d0) = *(undefined8 *)(param_4 + 0x19d0);
  *(undefined2 *)(param_4 + 0x18d8) = *(undefined2 *)(param_4 + 0x19d8);
  *(undefined8 *)(param_4 + 0x18a0) = *(undefined8 *)(param_4 + 0x19a0);
  *(undefined8 *)(param_4 + 0x18a8) = *(undefined8 *)(param_4 + 0x19a8);
  *(undefined8 *)(param_4 + 0x18b0) = *(undefined8 *)(param_4 + 0x19b0);
  *(undefined8 *)(param_4 + 0x18b8) = *(undefined8 *)(param_4 + 0x19b8);
  *(undefined8 *)(param_4 + 0x1880) = *(undefined8 *)(param_4 + 0x1980);
  *(undefined8 *)(param_4 + 0x1888) = *(undefined8 *)(param_4 + 0x1988);
  *(undefined8 *)(param_4 + 0x1890) = *(undefined8 *)(param_4 + 0x1990);
  *(undefined8 *)(param_4 + 0x1898) = *(undefined8 *)(param_4 + 0x1998);
  *(undefined8 *)(param_4 + 0x1860) = *(undefined8 *)(param_4 + 0x1960);
  *(undefined8 *)(param_4 + 0x1868) = *(undefined8 *)(param_4 + 0x1968);
  *(undefined8 *)(param_4 + 0x1878) = *(undefined8 *)(param_4 + 0x1978);
  lVar28 = *(long *)(param_4 + 0x70);
  *(undefined8 *)(param_4 + 0x1870) = *(undefined8 *)(param_4 + 0x1970);
LAB_0246fcc0:
  lVar4 = 0;
  if (lVar28 != 0) {
    lVar4 = lVar28 + 0x278;
  }
  FUN_03ebb160(lVar4,uVar19);
  return;
}

