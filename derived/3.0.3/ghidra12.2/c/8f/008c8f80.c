
undefined8
FUN_008c8f80(long param_1,int param_2,ulong param_3,int param_4,ulong param_5,long param_6)

{
  long lVar1;
  undefined *puVar2;
  undefined8 *puVar3;
  uint *puVar4;
  uint uVar5;
  short sVar6;
  short sVar7;
  ushort uVar8;
  bool bVar9;
  bool bVar10;
  bool bVar11;
  int iVar12;
  uint uVar13;
  undefined4 uVar14;
  uint uVar15;
  long *plVar16;
  long *plVar17;
  ulong uVar18;
  undefined8 uVar19;
  byte bVar20;
  short sVar21;
  short sVar22;
  byte *pbVar23;
  int *piVar24;
  char *pcVar25;
  uint uVar26;
  long lVar27;
  long lVar28;
  int iVar29;
  long *plVar30;
  long *plVar31;
  long *plVar32;
  char *__dest;
  long lVar33;
  short *psVar34;
  uint uVar35;
  undefined1 *puVar36;
  float fVar37;
  undefined **local_190;
  int local_188;
  long local_180;
  undefined *local_170;
  char *local_168;
  undefined *local_160;
  char *local_158;
  undefined8 local_150;
  undefined1 local_148;
  byte local_147;
  ushort local_146;
  undefined1 auStack_110 [56];
  undefined1 local_d8;
  undefined4 local_cc;
  undefined *local_c8;
  char *local_c0;
  undefined4 local_b8;
  char local_b4 [63];
  undefined1 local_75;
  undefined4 local_70;
  int local_6c [3];
  
  puVar2 = PTR_DAT_04bb39b0;
  iVar12 = (int)param_3;
  local_6c[0] = iVar12;
  if (((param_5 & 1) == 0) && (*(int *)(*(long *)PTR_DAT_04bb39b0 + 0x15c) != 0)) {
    if (*(int *)(param_1 + 0x410) == 8) {
      return 1;
    }
    iVar29 = *(int *)(param_1 + 0x31080);
    if ((iVar29 != 0) &&
       (*(char *)(*(long *)(*(long *)(param_1 + 0x31088) + (long)(iVar29 + -1) * 8) + 4) != '\0' &&
        0xfffffffb < *(int *)(param_1 + 0x30800) - 0x13U)) {
      *(undefined8 *)(param_1 + 0x37f58) = &PTR_LAB_04925ae0;
    }
    FUN_008c3440(param_1);
    lVar27 = *(long *)puVar2;
    pbVar23 = PTR_DAT_04bb32e0;
    if (lVar27 == 0) {
LAB_008c9084:
      if (*pbVar23 < 8) goto LAB_008c90f0;
LAB_008c9090:
      if (*(long **)PTR_DAT_04bb27d0 == (long *)0x0) {
LAB_008c90e8:
        pbVar23 = PTR_DAT_04bb5038;
        goto LAB_008c90f0;
      }
      lVar27 = **(long **)PTR_DAT_04bb27d0;
      bVar20 = *(byte *)(lVar27 + 0x473);
      pbVar23 = PTR_DAT_04bb5038;
      if ((long)(char)bVar20 != 0xffffffffffffffff) {
        puVar4 = (uint *)(lVar27 + 0x48) + ((long)(char)bVar20 & 0xffffffffU) * 0x20;
        if (7 < bVar20) {
          puVar4 = (uint *)(lVar27 + 0x48);
        }
        if ((*puVar4 & 8) != 0) {
          pbVar23 = (byte *)(lVar27 + 0x471);
        }
      }
      bVar20 = *pbVar23;
      if (7 < bVar20) goto LAB_008c90e8;
    }
    else {
      if (*(int *)(lVar27 + 0x15c) != 0) {
        pbVar23 = (byte *)(lVar27 + 0x158);
      }
      if (7 < *pbVar23) {
        if ((*(int *)(lVar27 + 0x15c) != 0) && (*(long *)PTR_DAT_04bb4718 != 0)) {
          pbVar23 = (byte *)(*(long *)PTR_DAT_04bb4718 + 0x11a5);
          goto LAB_008c9084;
        }
        goto LAB_008c9090;
      }
LAB_008c90f0:
      bVar20 = *pbVar23;
      if (7 < bVar20) {
        bVar20 = 0xff;
      }
    }
    if (7 < bVar20) {
      bVar20 = 0xff;
    }
    *(byte *)(param_1 + 0x309b8) = bVar20;
    *(undefined4 *)(param_1 + 0x307e4) = *(undefined4 *)(param_1 + 0x307e8);
    *(undefined4 *)(param_1 + 0x307ec) = 2;
    puVar2 = PTR_DAT_04bb27c0;
    lVar27 = *(long *)PTR_DAT_04bb27c0;
    if (lVar27 == 0) goto LAB_008c97e4;
    if ((((iVar12 == 0) ||
         (plVar32 = *(long **)(*(long *)(*(long *)(lVar27 + 0x1c0) + 8) +
                              (param_3 >> 0x14 & 0xfff) * 8), plVar32 == (long *)0x0)) ||
        ((*(uint *)(plVar32 + 0x49) >> 1 & 1) != 0)) || ((int)plVar32[0x46] != iVar12)) {
      plVar32 = (long *)0x0;
    }
    if ((*(int *)(lVar27 + 0x288) == 1) || (*(int *)(lVar27 + 0x288) == -1)) {
      plVar16 = (long *)nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
      lVar27 = *(long *)puVar2;
      iVar12 = (**(code **)(*plVar16 + 0x60))();
      if (iVar12 < 0x11) {
        uVar13 = 1;
      }
      else {
        if (4 < *(uint *)(lVar27 + 0x5e8)) goto LAB_008c94b8;
        uVar13 = 0x1aU >> (ulong)(*(uint *)(lVar27 + 0x5e8) & 0x1f) & 1;
      }
    }
    else {
LAB_008c94b8:
      uVar13 = 0;
    }
    if (plVar32 != (long *)0x0) {
      uVar13 = uVar13 ^ 1;
      if ((int)plVar32[0x2a] != 1) {
        uVar13 = 1;
      }
      if ((uVar13 == 0) && (*(int *)((long)plVar32 + 0x15c) == 10)) {
        if (((*PTR_DAT_04bb37d8 & 1) == 0) &&
           (iVar12 = __cxa_guard_acquire(PTR_DAT_04bb37d8), iVar12 != 0)) {
          *(undefined **)PTR_DAT_04bb37d0 = PTR_DAT_04bb3750 + 0x10;
          __cxa_guard_release(PTR_DAT_04bb37d8);
        }
        uVar18 = (**(code **)(*plVar32 + 0x20))(plVar32,PTR_DAT_04bb37d0);
        if (((uVar18 & 1) != 0) && (lVar27 = plVar32[0x77], *(char *)(lVar27 + 0x7750) != '\0')) {
          local_150 = *(long *)(lVar27 + 0x77a0);
          uVar18 = FUN_0277d9a8(&local_150);
          if (((uVar18 & 1) != 0) &&
             (uVar18 = FUN_008d7290(lVar27,param_1 + 0x315ec,param_1 + 0x315f4,param_1 + 0x315f8),
             (uVar18 & 1) != 0)) {
            *(undefined1 *)(param_1 + 0x37fbb) = 1;
          }
        }
      }
    }
LAB_008c97e4:
    FUN_03ebb160(param_1 + 0x408,8);
    return 1;
  }
  fVar37 = (float)FUN_008d6f70(param_1,param_2,param_3 & 0xffffffff);
  if (140.0 < fVar37) {
    FUN_008c3440(param_1,*(undefined4 *)(param_1 + 0x410));
    return 1;
  }
  plVar32 = (long *)(param_1 + 0x309c0);
  iVar29 = *(int *)(param_1 + 0x31080);
  if ((iVar29 != 0) &&
     (*(char *)(*(long *)(*(long *)(param_1 + 0x31088) + (long)(iVar29 + -1) * 8) + 4) != '\0' &&
      0xfffffffb < *(int *)(param_1 + 0x30800) - 0x13U)) {
    *(undefined8 *)(param_1 + 0x37f58) = &PTR_LAB_04925ae0;
  }
  *(undefined8 *)(param_1 + 0x31644) = 0x7fc00000;
  puVar2 = PTR_DAT_04bb6298;
  *(float *)(param_1 + 0x30af4) = fVar37;
  uVar8 = *(ushort *)puVar2;
  uVar18 = (ulong)(short)uVar8;
  if (uVar18 == 0xffffffffffffffff) {
    uVar13 = 0;
    uVar15 = 0;
LAB_008c92dc:
    if (uVar15 == 0) {
      return 0;
    }
  }
  else {
    puVar4 = (uint *)(PTR_DAT_04bc39f8 + (uVar18 & 0xffffffff) * 8);
    if (0xff < uVar8) {
      puVar4 = (uint *)PTR_DAT_04bc39f8;
    }
    uVar13 = *puVar4 & 1;
    local_150 = CONCAT44((int)((ulong)local_150 >> 0x20),1);
    puVar4 = (uint *)(PTR_DAT_04bc39f8 + (uVar18 & 0xffffffff) * 8);
    if (0xff < uVar8) {
      puVar4 = (uint *)PTR_DAT_04bc39f8;
    }
    uVar15 = *puVar4 >> 1 & 1;
    if (uVar13 == 0) goto LAB_008c92dc;
  }
  lVar27 = *(long *)PTR_DAT_04bb27c0;
  uVar15 = 0;
  if (lVar27 == 0) {
LAB_008c94d0:
    plVar16 = (long *)0x0;
    uVar35 = (uint)(uVar15 != 0);
LAB_008c94dc:
    bVar11 = false;
    local_70 = 0xf;
    if (uVar13 == 0) {
      local_70 = 1;
    }
    bVar20 = 0;
  }
  else {
    if ((((iVar12 == 0) ||
         (plVar16 = *(long **)(*(long *)(*(long *)(lVar27 + 0x1c0) + 8) +
                              (param_3 >> 0x14 & 0xfff) * 8), plVar16 == (long *)0x0)) ||
        ((*(uint *)(plVar16 + 0x49) >> 1 & 1) != 0)) || ((int)plVar16[0x46] != iVar12)) {
      plVar16 = (long *)0x0;
    }
    if ((*(int *)(lVar27 + 0x288) == 1) || (*(int *)(lVar27 + 0x288) == -1)) {
      plVar17 = (long *)nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
      lVar27 = *(long *)PTR_DAT_04bb27c0;
      iVar12 = (**(code **)(*plVar17 + 0x60))();
      if (iVar12 < 0x11) {
        uVar35 = 1;
        uVar15 = 1;
      }
      else {
        uVar15 = *(uint *)(lVar27 + 0x5e8);
        if (4 < uVar15) goto LAB_008c93a8;
        uVar35 = 0x1aU >> (ulong)(uVar15 & 0x1f) & 1;
        uVar15 = (uint)(0x101000100 >> (((ulong)uVar15 & 7) << 3)) & 1;
      }
    }
    else {
LAB_008c93a8:
      uVar35 = 0;
      uVar15 = 0;
    }
    if (plVar16 == (long *)0x0) goto LAB_008c94d0;
    uVar15 = 0;
    if ((int)plVar16[0x2a] == 1) {
      uVar15 = uVar35;
    }
    if (uVar15 == 0) goto LAB_008c94dc;
    local_70 = 0xf;
    if (uVar13 == 0) {
      local_70 = 1;
    }
    if (*(int *)((long)plVar16 + 0x15c) == 10) {
      if (((*PTR_DAT_04bb37d8 & 1) == 0) &&
         (iVar12 = __cxa_guard_acquire(PTR_DAT_04bb37d8), iVar12 != 0)) {
        *(undefined **)PTR_DAT_04bb37d0 = PTR_DAT_04bb3750 + 0x10;
        __cxa_guard_release(PTR_DAT_04bb37d8);
      }
      uVar18 = (**(code **)(*plVar16 + 0x20))(plVar16,PTR_DAT_04bb37d0);
      if ((uVar18 & 1) == 0) {
        bVar20 = 0;
        uVar35 = 1;
        bVar11 = true;
      }
      else {
        local_75 = 0;
        local_b8 = 0x40;
        local_c0 = local_b4;
        local_b4[0] = '\0';
        local_c8 = PTR_DAT_04bb2bc0 + 0x10;
        local_cc = (undefined4)plVar16[0x46];
        FUN_008d7640(&local_150);
        puVar3 = (undefined8 *)(plVar16[0x77] + 0x7f38);
        uVar18 = (**(code **)(*(long *)(plVar16[0x77] + 0x7f38) + 0x10))(puVar3);
        if (((uVar18 & 1) == 0) ||
           (uVar18 = (**(code **)*puVar3)(puVar3,&local_150), (uVar18 & 1) == 0)) {
          plVar17 = plVar16 + 0x7c;
          local_160 = PTR_DAT_04bb2020 + 0x10;
          local_158 = "hgs";
          (**(code **)(plVar16[0x7c] + 0x18))(plVar17);
          (**(code **)(plVar16[0x7c] + 0x18))(plVar17);
          puVar36 = (undefined1 *)plVar16[0x7d];
          (**(code **)(local_160 + 0x18))(&local_160);
          puVar2 = PTR_DAT_04bb2020;
          if (puVar36 == local_158) {
LAB_008c9de4:
            if (*(int *)(PTR_DAT_04bc3a80 + 0x38) != -0x6e1ed560) goto LAB_008c9e18;
            local_158 = "Talk_hgs";
LAB_008c9f30:
            local_160 = puVar2 + 0x10;
            FUN_008aa0a0(&local_c8,&local_160,0xffffffff);
          }
          else {
            uVar18 = 0;
            bVar11 = true;
            do {
              if (*(char *)(plVar16[0x7d] + uVar18) != local_158[uVar18]) break;
              if (*(char *)(plVar16[0x7d] + uVar18) == '\0') {
                if (bVar11) goto LAB_008c9de4;
                break;
              }
              bVar11 = uVar18 < 0x80000;
              uVar18 = uVar18 + 1;
            } while (uVar18 != 0x80001);
LAB_008c9e18:
            local_160 = PTR_DAT_04bb2020 + 0x10;
            local_158 = "otg";
            uVar18 = FUN_00710cb0(plVar17,&local_160);
            if (((uVar18 & 1) == 0) || (*(int *)(PTR_DAT_04bc3a80 + 0x38) != -0x21ba1d3a)) {
              pcVar25 = (char *)plVar16[0x7d];
              if ((*pcVar25 != 'k') ||
                 (((pcVar25[1] != 'p' || (pcVar25[2] != 'p')) ||
                  (*(int *)(PTR_DAT_04bc3a80 + 0x38) != -0xbb9f562)))) {
                local_160 = puVar2 + 0x10;
                local_158 = "bpt";
                uVar18 = FUN_00710cb0(plVar17,&local_160);
                if (((uVar18 & 1) == 0) || (*(int *)(PTR_DAT_04bc3a80 + 0x38) != -0x10e0fba8)) {
                  pcVar25 = (char *)plVar16[0x7d];
                  if ((*pcVar25 == 'k') &&
                     (((pcVar25[1] == 'p' && (pcVar25[2] == 's')) &&
                      (*(int *)(PTR_DAT_04bc3a80 + 0x38) == 0x3ee08254)))) {
                    *(undefined4 *)(param_1 + 0x31648) = 0x41a00000;
                  }
                }
                else {
                  uVar18 = FUN_00f5799c(local_6c);
                  if ((uVar18 & 1) != 0) {
                    local_158 = "Talk_bpt";
                    goto LAB_008c9f30;
                  }
                }
                goto LAB_008c9fb4;
              }
              local_158 = "Talk_kpp";
            }
            else {
              local_158 = "Talk_otg";
            }
            local_160 = puVar2 + 0x10;
            FUN_006bd410(param_1 + 0x31608,&local_160);
            *(undefined1 *)(param_1 + 0x31640) = 1;
          }
        }
        else if ((int)local_150 == 1) {
          FUN_008aa0a0(&local_c8,&local_148,0xffffffff);
          local_cc = local_150._4_4_;
        }
        else if ((int)local_150 == 2) {
          FUN_008cf290(param_1 + 0x31608,auStack_110);
          *(undefined1 *)(param_1 + 0x31640) = local_d8;
        }
LAB_008c9fb4:
        if (*local_c0 != '\0') {
          if ((*(int *)(param_1 + 0x410) == 0x22) &&
             (uVar18 = FUN_00710cb0(param_1 + 0x30708,&local_c8), (uVar18 & 1) != 0)) {
            return 1;
          }
          FUN_008c3200(param_1,&local_c8,param_6,&local_cc,0,0,1);
          return 1;
        }
        lVar27 = plVar16[0x77];
        bVar20 = *(byte *)(lVar27 + 0xad5f);
        if (*(char *)(lVar27 + 0x7750) != '\0') {
          local_158 = *(char **)(lVar27 + 0x7770);
          local_160 = PTR_DAT_04bb2020 + 0x10;
          if (*local_158 != '\0') {
            local_168 = "shelf";
            local_170 = local_160;
            uVar18 = FUN_00710cb0(&local_160,&local_170);
            if (((uVar18 & 1) != 0) && (uVar18 = FUN_0180bb70(), (uVar18 & 1) != 0)) {
              puVar2 = PTR_DAT_04bb2020 + 0x10;
              local_168 = "cShelf";
              local_170 = puVar2;
              FUN_008aa0a0(&local_c8,&local_170,0xffffffff);
              uVar13 = FUN_017ba560();
              local_170 = (undefined *)CONCAT44(local_170._4_4_,uVar13);
              if (uVar13 < 3) {
                local_168 = "1";
                local_170 = puVar2;
              }
              else {
                if (uVar13 != 3) goto LAB_008ca160;
                local_168 = "2";
                local_170 = PTR_DAT_04bb2020 + 0x10;
              }
              FUN_008ca280(&local_c8,&local_170);
LAB_008ca160:
              if ((*(int *)(param_1 + 0x410) == 0x22) &&
                 (uVar18 = FUN_00710cb0(param_1 + 0x30708,&local_c8), (uVar18 & 1) != 0)) {
                return 1;
              }
              local_170 = PTR_DAT_04bb2020 + 0x10;
              local_168 = "cTalk";
              uVar19 = (**(code **)(*(long *)(lVar27 + 0x7728) + 0x20))(lVar27 + 0x7728);
              FUN_008c4100(param_1,&local_c8,&local_170,uVar19,0,0,1);
              return 1;
            }
            puVar2 = PTR_DAT_04bb2020 + 0x10;
            local_168 = "Choco0";
            local_170 = puVar2;
            uVar18 = FUN_00710cb0(&local_160,&local_170);
            if ((uVar18 & 1) != 0) {
              local_168 = "Choco0";
              local_170 = puVar2;
              FUN_008aa0a0(&local_c8,&local_170,0xffffffff);
              goto LAB_008ca160;
            }
          }
        }
        bVar20 = bVar20 & 1;
        uVar35 = 1;
        bVar11 = true;
      }
    }
    else {
      bVar11 = false;
      bVar20 = 0;
      uVar35 = 1;
    }
  }
  iVar12 = *(int *)(param_1 + 0x410);
  if ((iVar12 - 0xfU < 4) || (iVar12 == 1)) {
    sVar6 = *(short *)(param_1 + 0x30af0);
    sVar7 = *(short *)(param_1 + 0x30af2);
    if (param_2 == 0) {
      *(undefined4 *)(param_1 + 0x30af0) = 0xffffffff;
      sVar21 = -1;
      psVar34 = (short *)PTR_DAT_04bb6298;
      if (sVar7 == -1) goto LAB_008c983c;
LAB_008c984c:
      FUN_008c4aa0(param_1,*(undefined4 *)(param_1 + 0x307e8),*(undefined4 *)(param_1 + 0x307f0));
      goto LAB_008c9a74;
    }
    *(undefined2 *)(param_1 + 0x30af0) = 0;
    psVar34 = (short *)PTR_DAT_04bb6298;
    if (local_6c[0] == 0) {
      sVar22 = sVar7;
    }
    else {
      FUN_008d6be0(param_1,local_6c);
      lVar27 = *(long *)(param_1 + 0x309c8);
      if (lVar27 == param_1 + 0x309c0) {
        sVar21 = 0;
      }
      else {
        sVar21 = 0;
        do {
          if (*(int *)(lVar27 + -0x10) == local_6c[0]) break;
          lVar27 = *(long *)(lVar27 + 8);
          sVar21 = sVar21 + 1;
        } while (lVar27 + -0x10 != param_1 + 0x309b0);
      }
      *(short *)(param_1 + 0x30af2) = sVar21 + 1;
      sVar22 = sVar21 + 1;
    }
    if ((int)sVar22 <= *(int *)(param_1 + 0x309d0)) {
      sVar21 = *(short *)(param_1 + 0x30af0);
      if (sVar7 == sVar22) goto LAB_008c983c;
      goto LAB_008c984c;
    }
    sVar21 = -1;
    *(undefined4 *)(param_1 + 0x30af0) = 0xffffffff;
    if (sVar7 != -1) goto LAB_008c984c;
LAB_008c983c:
    if (sVar21 != sVar6) goto LAB_008c984c;
    bVar11 = false;
  }
  else {
    if ((param_4 != 1) || (iVar12 != 0x22)) {
      FUN_008c3440(param_1);
    }
    plVar17 = *(long **)(param_1 + 0x309c8);
    *(int *)(param_1 + 0x309bc) = param_2;
    if (bVar11) {
      while (plVar17 != plVar32) {
        plVar31 = (long *)plVar17[1];
        plVar30 = plVar31;
        if (*plVar17 != 0) {
          *(long **)(*plVar17 + 8) = plVar31;
          plVar30 = (long *)plVar17[1];
        }
        if (plVar30 != (long *)0x0) {
          *plVar30 = *plVar17;
        }
        *plVar17 = 0;
        plVar17[1] = 0;
        *(int *)(param_1 + 0x309d0) = *(int *)(param_1 + 0x309d0) + -1;
        plVar17[-2] = *(long *)(param_1 + 0x309d8);
        *(long **)(param_1 + 0x309d8) = plVar17 + -2;
        plVar17 = plVar31;
      }
      if (*(int *)(param_1 + 0x309d0) < *(int *)(param_1 + 0x309e8)) {
        piVar24 = *(int **)(param_1 + 0x309d8);
        if (piVar24 != (int *)0x0) {
          *(undefined8 *)(param_1 + 0x309d8) = *(undefined8 *)piVar24;
        }
        piVar24[2] = 0;
        piVar24[3] = 0;
        piVar24[6] = 0;
        piVar24[7] = 0;
        *piVar24 = local_6c[0];
        plVar17 = (long *)(piVar24 + 4);
        *plVar17 = 0;
        lVar27 = *plVar32;
        *plVar32 = (long)plVar17;
        *(long **)(piVar24 + 6) = plVar32;
        *plVar17 = lVar27;
        if (lVar27 != 0) {
          *(long **)(lVar27 + 8) = plVar17;
        }
        *(int *)(param_1 + 0x309d0) = *(int *)(param_1 + 0x309d0) + 1;
      }
      if (((*PTR_DAT_04bb37d8 & 1) == 0) &&
         (iVar12 = __cxa_guard_acquire(PTR_DAT_04bb37d8), iVar12 != 0)) {
        *(undefined **)PTR_DAT_04bb37d0 = PTR_DAT_04bb3750 + 0x10;
        __cxa_guard_release(PTR_DAT_04bb37d8);
      }
      if ((plVar16 != (long *)0x0) &&
         (uVar13 = (**(code **)(*plVar16 + 0x20))(plVar16,PTR_DAT_04bb37d0), (uVar35 & uVar13) == 1)
         ) {
        lVar27 = plVar16[0x77];
        if (*(char *)(lVar27 + 0x7750) == '\0') {
          if ((*(ulong *)(lVar27 + 0xad58) & 0x10000000000020) == 0) {
            if (bVar20 == 0) {
              local_190 = &PTR_LAB_04926058;
              local_188 = local_6c[0];
              local_180 = param_1;
              FUN_020b020c(*(undefined8 *)PTR_DAT_04bb3968,&local_190);
            }
          }
          else if (*(int *)(lVar27 + 0x7d6c) != 0) {
            FUN_008cf224(plVar32,lVar27 + 0x7d6c);
          }
        }
        else {
          local_70 = 0x11;
          local_150 = *(long *)(lVar27 + 0x77a0);
          uVar18 = FUN_0277d9a8(&local_150);
          if (((uVar18 & 1) != 0) &&
             (uVar18 = FUN_008d7290(lVar27,param_1 + 0x315ec,param_1 + 0x315f4,param_1 + 0x315f8),
             (uVar18 & 1) != 0)) {
            *(undefined1 *)(param_1 + 0x37fbb) = 1;
          }
        }
      }
    }
    else {
      while (plVar17 != plVar32) {
        plVar16 = (long *)plVar17[1];
        plVar31 = plVar16;
        if (*plVar17 != 0) {
          *(long **)(*plVar17 + 8) = plVar16;
          plVar31 = (long *)plVar17[1];
        }
        if (plVar31 != (long *)0x0) {
          *plVar31 = *plVar17;
        }
        *plVar17 = 0;
        plVar17[1] = 0;
        *(int *)(param_1 + 0x309d0) = *(int *)(param_1 + 0x309d0) + -1;
        plVar17[-2] = *(long *)(param_1 + 0x309d8);
        *(long **)(param_1 + 0x309d8) = plVar17 + -2;
        plVar17 = plVar16;
      }
      if (*(int *)(param_1 + 0x309d0) < *(int *)(param_1 + 0x309e8)) {
        piVar24 = *(int **)(param_1 + 0x309d8);
        if (piVar24 != (int *)0x0) {
          *(undefined8 *)(param_1 + 0x309d8) = *(undefined8 *)piVar24;
        }
        piVar24[2] = 0;
        piVar24[3] = 0;
        piVar24[6] = 0;
        piVar24[7] = 0;
        *piVar24 = local_6c[0];
        plVar16 = (long *)(piVar24 + 4);
        *plVar16 = 0;
        lVar27 = *plVar32;
        *plVar32 = (long)plVar16;
        *(long **)(piVar24 + 6) = plVar32;
        *plVar16 = lVar27;
        if (lVar27 != 0) {
          *(long **)(lVar27 + 8) = plVar16;
        }
        *(int *)(param_1 + 0x309d0) = *(int *)(param_1 + 0x309d0) + 1;
      }
    }
    psVar34 = (short *)PTR_DAT_04bb6298;
    __dest = *(char **)(param_1 + 0x30748);
    pcVar25 = "cTalk";
    if (**(char **)(param_6 + 8) != '\0') {
      pcVar25 = *(char **)(param_6 + 8);
    }
    if (__dest != pcVar25) {
      lVar27 = 0;
      do {
        if (pcVar25[lVar27] == '\0') goto LAB_008c9a44;
        if (pcVar25[lVar27 + 1] == '\0') {
          lVar27 = lVar27 + 1;
          goto LAB_008c9a44;
        }
        if (pcVar25[lVar27 + 2] == '\0') {
          lVar27 = lVar27 + 2;
          goto LAB_008c9a44;
        }
        lVar27 = lVar27 + 3;
      } while (lVar27 != 0x80001);
      lVar27 = 0;
LAB_008c9a44:
      iVar12 = (int)lVar27;
      if (*(int *)(param_1 + 0x30750) <= (int)lVar27) {
        iVar12 = *(int *)(param_1 + 0x30750) + -1;
      }
      memcpy(__dest,pcVar25,(long)iVar12);
      __dest[iVar12] = '\0';
    }
    FUN_03ebb160(param_1 + 0x408,local_70);
LAB_008c9a74:
    bVar11 = true;
  }
  uVar8 = *(ushort *)(param_1 + 0x30af2);
  if (0 < (short)uVar8) {
    uVar13 = (uint)uVar8;
    if ((int)uVar13 <= (int)*(uint *)(param_1 + 0x309d0)) {
      if (uVar13 - 1 < *(uint *)(param_1 + 0x309d0)) {
        uVar15 = uVar13 & 3;
        lVar27 = param_1 + 0x309c0;
        if (3 < uVar13) {
          uVar13 = uVar13 & 0xfffc;
          do {
            uVar13 = uVar13 - 4;
            lVar27 = *(long *)(*(long *)(*(long *)(*(long *)(lVar27 + 8) + 8) + 8) + 8);
          } while (uVar13 != 0);
        }
        if ((uVar8 & 3) != 0) {
          do {
            lVar27 = *(long *)(lVar27 + 8);
            uVar15 = uVar15 - 1;
          } while (uVar15 != 0);
        }
      }
      else {
        lVar27 = 0;
      }
      uVar13 = *(uint *)(lVar27 + -0x10);
      local_146 = 1;
      lVar27 = *(long *)PTR_DAT_04bb27c0;
      if (lVar27 != 0) {
        if ((((uVar13 == 0) ||
             (lVar33 = *(long *)(*(long *)(*(long *)(lVar27 + 0x1c0) + 8) +
                                ((ulong)(uVar13 >> 0x11) & 0x7ff8)), lVar33 == 0)) ||
            ((*(uint *)(lVar33 + 0x248) >> 1 & 1) != 0)) || (*(uint *)(lVar33 + 0x230) != uVar13)) {
          lVar33 = 0;
        }
        local_150 = lVar33;
        if (*(int *)(lVar27 + 0x288) == 1 || *(int *)(lVar27 + 0x288) == -1) {
          plVar32 = (long *)nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
          lVar27 = *(long *)PTR_DAT_04bb27c0;
          iVar12 = (**(code **)(*plVar32 + 0x60))();
          if (iVar12 < 0x11) {
            bVar10 = true;
          }
          else if ((4 < *(uint *)(lVar27 + 0x5e8)) ||
                  (bVar10 = true, (1 << (ulong)(*(uint *)(lVar27 + 0x5e8) & 0x1f) & 0x1aU) == 0))
          goto LAB_008c9bac;
        }
        else {
LAB_008c9bac:
          bVar10 = false;
          local_146 = local_146 & 0xff00;
        }
        if (lVar33 != 0) {
          local_148 = *(int *)(lVar33 + 0x150) == 1;
          bVar9 = false;
          if ((bool)local_148) {
            bVar9 = bVar10;
          }
          local_147 = (byte)(*(uint *)(lVar33 + 0x248) >> 4) & 1;
          if ((bVar9) && (*(int *)(lVar33 + 0x15c) == 10)) {
            FUN_008d71d0(&local_c8,&local_150);
            uVar14 = FUN_01e3dcdc(local_c8);
            *(undefined4 *)(param_1 + 0x30af8) = uVar14;
          }
        }
      }
      sVar6 = *psVar34;
      if (sVar6 != -1) {
        local_c8 = (undefined *)CONCAT44(local_c8._4_4_,1);
        puVar4 = (uint *)(PTR_DAT_04bc39f8 + (ulong)(uint)(int)sVar6 * 8);
        if (0xff < (uint)(int)sVar6) {
          puVar4 = (uint *)PTR_DAT_04bc39f8;
        }
        if ((*puVar4 >> 1 & 1) != 0) goto LAB_008c9c98;
      }
      if (*(int *)(param_1 + 0x358) != 0) {
        lVar28 = *(long *)(param_1 + 0x360);
        lVar27 = 0;
        lVar33 = (long)*(int *)(param_1 + 0x358) << 3;
        do {
          iVar12 = (int)lVar27;
          lVar1 = lVar27 * 8;
          lVar27 = lVar27 + 1;
          lVar33 = lVar33 + -8;
          *(bool *)(*(long *)(lVar28 + lVar1) + 0x28) =
               iVar12 == *(short *)(param_1 + 0x30af2) || iVar12 == *(short *)(param_1 + 0x30af0);
        } while (lVar33 != 0);
      }
    }
  }
LAB_008c9c98:
  if (!bVar11) {
    return 1;
  }
  uVar13 = *(uint *)(param_1 + 0x307e8);
  if (uVar13 == 0x62) {
    (**(code **)(*(long *)(param_1 + 0x30708) + 0x18))((long *)(param_1 + 0x30708));
    uVar15 = FUN_006bd550(*(undefined8 *)(param_1 + 0x30710),0);
    iVar12 = *(int *)(param_1 + 0x305b0);
    if (iVar12 != 0) {
      uVar35 = 0;
      iVar29 = iVar12 + -1;
      if (iVar29 == 0 || iVar12 < 1) {
        lVar27 = *(long *)(param_1 + 0x305b8);
      }
      else {
        lVar27 = *(long *)(param_1 + 0x305b8);
        do {
          iVar12 = iVar29 + uVar35;
          if (iVar12 < 0 != SCARRY4(iVar29,uVar35)) {
            iVar12 = iVar12 + 1;
          }
          uVar26 = iVar12 >> 1;
          uVar5 = *(uint *)(*(long *)(lVar27 + (long)(int)uVar26 * 8) + 0x18);
          if (uVar5 == uVar15) goto LAB_008c9d38;
          if (uVar5 < uVar15) {
            uVar35 = uVar26 + 1;
          }
          else {
            iVar29 = uVar26 - 1;
          }
        } while ((int)uVar35 < iVar29);
      }
      uVar26 = uVar35;
      if (*(uint *)(*(long *)(lVar27 + (long)(int)uVar35 * 8) + 0x18) == uVar15) {
LAB_008c9d38:
        if ((-1 < (int)uVar26) && (lVar27 = **(long **)(lVar27 + (ulong)uVar26 * 8), lVar27 != 0))
        goto LAB_008c9d6c;
      }
    }
  }
  local_150 = CONCAT44(local_150._4_4_,uVar13);
  if (uVar13 < *(uint *)(param_1 + 0x548)) {
    lVar27 = *(long *)(*(long *)(param_1 + 0x550) + (long)(int)uVar13 * 8);
  }
  else {
    lVar27 = 0;
  }
LAB_008c9d6c:
  FUN_008c0a74(&local_150,lVar27);
  FUN_008c6430(param_1,0);
  FUN_008cbf4c(param_1,param_1 + 0x30970);
  return 1;
}

