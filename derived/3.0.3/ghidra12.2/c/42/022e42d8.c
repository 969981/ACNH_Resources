
/* WARNING: Removing unreachable block (ram,0x022e4fe0) */
/* WARNING: Removing unreachable block (ram,0x022e4c30) */
/* WARNING: Removing unreachable block (ram,0x022e4850) */
/* WARNING: Removing unreachable block (ram,0x022e4524) */
/* WARNING: Removing unreachable block (ram,0x022e4a40) */
/* WARNING: Removing unreachable block (ram,0x022e4e24) */
/* WARNING: Removing unreachable block (ram,0x022e4ff0) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_022e42d8(long param_1,int param_2)

{
  ushort *puVar1;
  ushort uVar2;
  short sVar3;
  short sVar4;
  int iVar5;
  uint uVar6;
  undefined *puVar7;
  uint uVar8;
  int iVar9;
  float *pfVar10;
  ulong uVar11;
  undefined8 uVar12;
  long lVar13;
  uint *puVar14;
  uint *puVar15;
  byte *pbVar16;
  long lVar17;
  short local_104;
  short local_102;
  short local_100;
  short local_fe;
  short local_fc;
  short local_fa;
  ushort auStack_f8 [64];
  uint local_78 [4];
  undefined8 local_68;
  undefined8 local_60;
  uint local_58;
  
  if ((*(uint *)(param_1 + 0x14) & 1) == 0) {
    *(uint *)(param_1 + 0x14) = *(uint *)(param_1 + 0x14) | 0x20;
    return param_2;
  }
  pbVar16 = (byte *)(param_1 + 0x10);
  if (7 < *pbVar16) {
    return param_2;
  }
  uVar8 = FUN_02582d8c(pbVar16,1);
  puVar7 = PTR_DAT_04bb4fb8;
  if (7 < uVar8) {
    return param_2;
  }
  if (*(char *)(*(long *)PTR_DAT_04bb4fb8 + (ulong)uVar8 * 0x13f0 + 0x13d4) == '\0') {
    return param_2;
  }
  if (*(char *)(*(long *)PTR_DAT_04bb4fb8 + (ulong)uVar8 * 0x13f0 + 0x13d6) == '\0') {
    return param_2;
  }
  uVar8 = FUN_02582d8c(pbVar16,1);
  if (7 < uVar8) {
    return param_2;
  }
  lVar17 = *(long *)puVar7;
  if (*(char *)(lVar17 + (ulong)uVar8 * 0x13f0 + 0x13d4) == '\0') {
    return param_2;
  }
  lVar13 = lVar17 + (ulong)uVar8 * 0x13f0;
  if ((*(long *)(lVar13 + 0x678) != 0) && (*(int *)(lVar13 + 0x670) == 1)) {
    return 3;
  }
  if (param_2 != 1) {
    return param_2;
  }
  FUN_0131a4e4(&local_104);
  FUN_0131aa38(&local_104,lVar17 + (ulong)uVar8 * 0x13f0 + 0x5b8);
  if ((*(int *)(PTR_DAT_04bc3a80 + 0x38) == -0x24a26848) ||
     (pfVar10 = (float *)FUN_0251b3b0(pbVar16,0), pfVar10 == (float *)0x0)) {
LAB_022e4fac:
    iVar9 = 0;
  }
  else if ((*(uint *)(param_1 + 0x14) >> 1 & 1) == 0) {
    if ((*(uint *)(param_1 + 0x14) >> 2 & 1) == 0) goto LAB_022e4fac;
LAB_022e4428:
    if (((DAT_05482070 & 1) == 0) && (iVar9 = __cxa_guard_acquire(&DAT_05482070), iVar9 != 0)) {
      DAT_05482038 = 0.0;
      _DAT_05482030 = 0;
      DAT_0548203c = 0x3f800000;
      DAT_05482044 = 0xbf80000000000000;
      DAT_0548204c = 0;
      DAT_05482054 = 0;
      DAT_0548205c = 0x3f800000;
      DAT_05482064 = 0xbf80000000000000;
      __cxa_guard_release(&DAT_05482070);
    }
    local_68 = &PTR_FUN_048f9730;
    iVar9 = (int)((float)(int)(*pfVar10 + DAT_05482030) / 10.0) -
            (uint)(*pfVar10 + DAT_05482030 < 0.0);
    iVar5 = (int)((float)(int)(pfVar10[2] + DAT_05482038) / 10.0) -
            (uint)(pfVar10[2] + DAT_05482038 < 0.0);
    local_60 = (uint *)CONCAT44(iVar5,iVar9);
    uVar11 = FUN_01318310(&local_68);
    if ((uVar11 & 1) == 0) {
LAB_022e4760:
      local_68 = &PTR_FUN_048f9730;
      iVar9 = (int)((float)(int)(*pfVar10 + (float)DAT_0548203c) / 10.0) -
              (uint)(*pfVar10 + (float)DAT_0548203c < 0.0);
      iVar5 = (int)((float)(int)(pfVar10[2] + (float)DAT_05482044) / 10.0) -
              (uint)(pfVar10[2] + (float)DAT_05482044 < 0.0);
      local_60 = (uint *)CONCAT44(iVar5,iVar9);
      uVar11 = FUN_01318310(&local_68);
      if ((uVar11 & 1) != 0) {
        sVar3 = local_100;
        if (local_fc <= local_100) {
          sVar3 = local_fc;
        }
        sVar4 = local_fe;
        if (local_fa <= local_fe) {
          sVar4 = local_fa;
        }
        uVar8 = iVar9 - sVar3;
        uVar6 = iVar5 - sVar4;
        local_68 = (undefined **)((ulong)local_68 & 0xffffffff00000000);
        puVar1 = auStack_f8 + (ulong)(uVar6 * 3 + uVar8) * 7;
        if (2 < uVar8 || 2 < uVar6) {
          puVar1 = &DAT_051868dc;
        }
        local_68 = (undefined **)(PTR_DAT_04bbc330 + 0x10);
        local_60 = (uint *)0x0;
        local_58 = (uint)(byte)puVar1[2];
        uVar8 = (uint)*puVar1 - (uint)*(ushort *)(DAT_0519d040 + 0x408);
        if (((uVar8 < *(uint *)(DAT_0519d040 + 1000)) &&
            (puVar14 = *(uint **)(*(long *)(DAT_0519d040 + 0x3f0) + (long)(int)uVar8 * 8),
            puVar14 != (uint *)0x0)) &&
           (uVar8 = *puVar14, local_60 = puVar14, uVar8 != 0 && puVar14 != (uint *)(ulong)uVar8)) {
          puVar15 = (uint *)((long)puVar14 - (long)(ulong)uVar8);
          if (((*puVar15 == 0) || (uVar8 = puVar15[1], uVar8 == 0)) ||
             ((ulong)(ushort)puVar15[2] == 0)) goto LAB_022e4928;
          lVar17 = 0xc;
          if (*(char *)((long)puVar15 + 10) != '\0') {
            lVar17 = 0x1c;
          }
          lVar17 = (long)puVar15 + lVar17 + (ulong)(ushort)puVar15[2] * 8;
          if (lVar17 == 0) goto LAB_022e4928;
          uVar6 = 0;
          if ((ulong)uVar8 != 0) {
            uVar6 = (uint)((ulong)((long)puVar14 - lVar17) / (ulong)uVar8);
          }
          if (*puVar15 <= uVar6) {
            uVar6 = 0xffffffff;
          }
          if ((DAT_05160328 <= uVar6) ||
             (uVar2 = *(ushort *)(DAT_05160330 + (long)(int)uVar6 * 2), local_78[0] = (uint)uVar2,
             4 < uVar2)) goto LAB_022e4928;
        }
        else {
LAB_022e4928:
          local_78[0] = 0;
        }
        if ((local_78[0] == 3) && (iVar9 = FUN_01313218(&local_68), iVar9 != 2)) goto LAB_022e4f24;
      }
      local_68 = &PTR_FUN_048f9730;
      iVar9 = (int)((float)(int)(*pfVar10 + DAT_05482044._4_4_) / 10.0) -
              (uint)(*pfVar10 + DAT_05482044._4_4_ < 0.0);
      iVar5 = (int)((float)(int)(pfVar10[2] + DAT_0548204c._4_4_) / 10.0) -
              (uint)(pfVar10[2] + DAT_0548204c._4_4_ < 0.0);
      local_60 = (uint *)CONCAT44(iVar5,iVar9);
      uVar11 = FUN_01318310(&local_68);
      if ((uVar11 & 1) != 0) {
        sVar3 = local_100;
        if (local_fc <= local_100) {
          sVar3 = local_fc;
        }
        sVar4 = local_fe;
        if (local_fa <= local_fe) {
          sVar4 = local_fa;
        }
        uVar8 = iVar9 - sVar3;
        uVar6 = iVar5 - sVar4;
        local_68 = (undefined **)((ulong)local_68 & 0xffffffff00000000);
        puVar1 = auStack_f8 + (ulong)(uVar6 * 3 + uVar8) * 7;
        if (2 < uVar8 || 2 < uVar6) {
          puVar1 = &DAT_051868dc;
        }
        local_68 = (undefined **)(PTR_DAT_04bbc330 + 0x10);
        local_60 = (uint *)0x0;
        local_58 = (uint)(byte)puVar1[2];
        uVar8 = (uint)*puVar1 - (uint)*(ushort *)(DAT_0519d040 + 0x408);
        if ((uVar8 < *(uint *)(DAT_0519d040 + 1000)) &&
           (puVar14 = *(uint **)(*(long *)(DAT_0519d040 + 0x3f0) + (long)(int)uVar8 * 8),
           puVar14 != (uint *)0x0)) {
          local_78[0] = 0;
          uVar8 = *puVar14;
          local_60 = puVar14;
          if ((uVar8 != 0) && (puVar14 != (uint *)(ulong)uVar8)) {
            puVar15 = (uint *)((long)puVar14 - (long)(ulong)uVar8);
            local_78[0] = 0;
            if (*puVar15 != 0) {
              uVar8 = puVar15[1];
              if ((uVar8 != 0) && ((ulong)(ushort)puVar15[2] != 0)) {
                lVar17 = 0xc;
                if (*(char *)((long)puVar15 + 10) != '\0') {
                  lVar17 = 0x1c;
                }
                lVar17 = (long)puVar15 + lVar17 + (ulong)(ushort)puVar15[2] * 8;
                if (lVar17 != 0) {
                  uVar6 = 0;
                  if ((ulong)uVar8 != 0) {
                    uVar6 = (uint)((ulong)((long)puVar14 - lVar17) / (ulong)uVar8);
                  }
                  if (*puVar15 <= uVar6) {
                    uVar6 = 0xffffffff;
                  }
                  if ((uVar6 < DAT_05160328) &&
                     (local_78[0] = (uint)*(ushort *)(DAT_05160330 + (long)(int)uVar6 * 2),
                     local_78[0] < 5)) goto LAB_022e4b20;
                }
              }
              goto LAB_022e4b1c;
            }
          }
        }
        else {
LAB_022e4b1c:
          local_78[0] = 0;
        }
LAB_022e4b20:
        if ((local_78[0] == 3) && (iVar9 = FUN_01313218(&local_68), iVar9 != 2)) goto LAB_022e4f24;
      }
      local_68 = &PTR_FUN_048f9730;
      iVar9 = (int)((float)(int)(*pfVar10 + (float)DAT_05482054) / 10.0) -
              (uint)(*pfVar10 + (float)DAT_05482054 < 0.0);
      iVar5 = (int)((float)(int)(pfVar10[2] + (float)DAT_0548205c) / 10.0) -
              (uint)(pfVar10[2] + (float)DAT_0548205c < 0.0);
      local_60 = (uint *)CONCAT44(iVar5,iVar9);
      uVar11 = FUN_01318310(&local_68);
      if ((uVar11 & 1) != 0) {
        sVar3 = local_100;
        if (local_fc <= local_100) {
          sVar3 = local_fc;
        }
        sVar4 = local_fe;
        if (local_fa <= local_fe) {
          sVar4 = local_fa;
        }
        uVar8 = iVar9 - sVar3;
        uVar6 = iVar5 - sVar4;
        local_68 = (undefined **)((ulong)local_68 & 0xffffffff00000000);
        puVar1 = auStack_f8 + (ulong)(uVar6 * 3 + uVar8) * 7;
        if (2 < uVar8 || 2 < uVar6) {
          puVar1 = &DAT_051868dc;
        }
        local_68 = (undefined **)(PTR_DAT_04bbc330 + 0x10);
        local_60 = (uint *)0x0;
        local_58 = (uint)(byte)puVar1[2];
        uVar8 = (uint)*puVar1 - (uint)*(ushort *)(DAT_0519d040 + 0x408);
        if ((uVar8 < *(uint *)(DAT_0519d040 + 1000)) &&
           (puVar14 = *(uint **)(*(long *)(DAT_0519d040 + 0x3f0) + (long)(int)uVar8 * 8),
           puVar14 != (uint *)0x0)) {
          local_78[0] = 0;
          uVar8 = *puVar14;
          local_60 = puVar14;
          if ((uVar8 != 0) && (puVar14 != (uint *)(ulong)uVar8)) {
            puVar15 = (uint *)((long)puVar14 - (long)(ulong)uVar8);
            local_78[0] = 0;
            if (*puVar15 != 0) {
              uVar8 = puVar15[1];
              if ((uVar8 != 0) && ((ulong)(ushort)puVar15[2] != 0)) {
                lVar17 = 0xc;
                if (*(char *)((long)puVar15 + 10) != '\0') {
                  lVar17 = 0x1c;
                }
                lVar17 = (long)puVar15 + lVar17 + (ulong)(ushort)puVar15[2] * 8;
                if (lVar17 != 0) {
                  uVar6 = 0;
                  if ((ulong)uVar8 != 0) {
                    uVar6 = (uint)((ulong)((long)puVar14 - lVar17) / (ulong)uVar8);
                  }
                  if (*puVar15 <= uVar6) {
                    uVar6 = 0xffffffff;
                  }
                  if ((uVar6 < DAT_05160328) &&
                     (local_78[0] = (uint)*(ushort *)(DAT_05160330 + (long)(int)uVar6 * 2),
                     local_78[0] < 5)) goto LAB_022e4d10;
                }
              }
              goto LAB_022e4d0c;
            }
          }
        }
        else {
LAB_022e4d0c:
          local_78[0] = 0;
        }
LAB_022e4d10:
        if ((local_78[0] == 3) && (iVar9 = FUN_01313218(&local_68), iVar9 != 2)) goto LAB_022e4f24;
      }
      iVar9 = (int)((float)(int)(*pfVar10 + DAT_0548205c._4_4_) / 10.0) -
              (uint)(*pfVar10 + DAT_0548205c._4_4_ < 0.0);
      local_68 = &PTR_FUN_048f9730;
      iVar5 = (int)((float)(int)(pfVar10[2] + DAT_05482064._4_4_) / 10.0) -
              (uint)(pfVar10[2] + DAT_05482064._4_4_ < 0.0);
      local_60 = (uint *)CONCAT44(iVar5,iVar9);
      uVar11 = FUN_01318310(&local_68);
      if ((uVar11 & 1) == 0) goto LAB_022e4fac;
      if (local_fc <= local_100) {
        local_100 = local_fc;
      }
      if (local_fa <= local_fe) {
        local_fe = local_fa;
      }
      uVar8 = iVar9 - local_100;
      uVar6 = iVar5 - local_fe;
      local_68 = (undefined **)((ulong)local_68 & 0xffffffff00000000);
      puVar1 = auStack_f8 + (ulong)(uVar6 * 3 + uVar8) * 7;
      if (2 < uVar8 || 2 < uVar6) {
        puVar1 = &DAT_051868dc;
      }
      local_68 = (undefined **)(PTR_DAT_04bbc330 + 0x10);
      local_60 = (uint *)0x0;
      local_58 = (uint)(byte)puVar1[2];
      uVar8 = (uint)*puVar1 - (uint)*(ushort *)(DAT_0519d040 + 0x408);
      if ((uVar8 < *(uint *)(DAT_0519d040 + 1000)) &&
         (puVar14 = *(uint **)(*(long *)(DAT_0519d040 + 0x3f0) + (long)(int)uVar8 * 8),
         puVar14 != (uint *)0x0)) {
        local_78[0] = 0;
        uVar8 = *puVar14;
        local_60 = puVar14;
        if ((uVar8 != 0) && (puVar14 != (uint *)(ulong)uVar8)) {
          puVar15 = (uint *)((long)puVar14 - (long)(ulong)uVar8);
          local_78[0] = 0;
          if (*puVar15 != 0) {
            uVar8 = puVar15[1];
            if ((uVar8 != 0) && ((ulong)(ushort)puVar15[2] != 0)) {
              lVar17 = 0xc;
              if (*(char *)((long)puVar15 + 10) != '\0') {
                lVar17 = 0x1c;
              }
              lVar17 = (long)puVar15 + lVar17 + (ulong)(ushort)puVar15[2] * 8;
              if (lVar17 != 0) {
                uVar6 = 0;
                if ((ulong)uVar8 != 0) {
                  uVar6 = (uint)((ulong)((long)puVar14 - lVar17) / (ulong)uVar8);
                }
                if (*puVar15 <= uVar6) {
                  uVar6 = 0xffffffff;
                }
                if ((uVar6 < DAT_05160328) &&
                   (local_78[0] = (uint)*(ushort *)(DAT_05160330 + (long)(int)uVar6 * 2),
                   local_78[0] < 5)) goto LAB_022e4f04;
              }
            }
            goto LAB_022e4f00;
          }
        }
      }
      else {
LAB_022e4f00:
        local_78[0] = 0;
      }
LAB_022e4f04:
      if ((local_78[0] != 3) || (iVar9 = FUN_01313218(&local_68), iVar9 == 2)) goto LAB_022e4fac;
    }
    else {
      sVar3 = local_100;
      if (local_fc <= local_100) {
        sVar3 = local_fc;
      }
      sVar4 = local_fe;
      if (local_fa <= local_fe) {
        sVar4 = local_fa;
      }
      uVar8 = iVar9 - sVar3;
      uVar6 = iVar5 - sVar4;
      local_68 = (undefined **)((ulong)local_68 & 0xffffffff00000000);
      puVar1 = auStack_f8 + (ulong)(uVar6 * 3 + uVar8) * 7;
      if (2 < uVar6 || 2 < uVar8) {
        puVar1 = (ushort *)PTR_DAT_04bbc2f8;
      }
      uVar8 = (uint)*puVar1 - (uint)*(ushort *)(DAT_0519d040 + 0x408);
      if ((*(uint *)(DAT_0519d040 + 1000) <= uVar8) ||
         (puVar14 = *(uint **)(*(long *)(DAT_0519d040 + 0x3f0) + (long)(int)uVar8 * 8),
         puVar14 == (uint *)0x0)) {
        local_78[0] = 0;
        goto LAB_022e4760;
      }
      uVar8 = *puVar14;
      if (uVar8 == 0 || puVar14 == (uint *)(ulong)uVar8) {
LAB_022e4560:
        local_78[0] = 0;
      }
      else {
        puVar15 = (uint *)((long)puVar14 - (long)(ulong)uVar8);
        local_78[0] = 0;
        if (*puVar15 != 0) {
          uVar8 = puVar15[1];
          if ((uVar8 != 0) && ((ulong)(ushort)puVar15[2] != 0)) {
            lVar17 = 0xc;
            if (*(char *)((long)puVar15 + 10) != '\0') {
              lVar17 = 0x1c;
            }
            lVar17 = (long)puVar15 + lVar17 + (ulong)(ushort)puVar15[2] * 8;
            if (lVar17 != 0) {
              uVar6 = 0;
              if ((ulong)uVar8 != 0) {
                uVar6 = (uint)((ulong)((long)puVar14 - lVar17) / (ulong)uVar8);
              }
              if (*puVar15 <= uVar6) {
                uVar6 = 0xffffffff;
              }
              if ((uVar6 < DAT_05160328) &&
                 (local_78[0] = (uint)*(ushort *)(DAT_05160330 + (long)(int)uVar6 * 2),
                 local_78[0] < 5)) goto LAB_022e4564;
            }
          }
          goto LAB_022e4560;
        }
      }
LAB_022e4564:
      if (local_78[0] != 3) goto LAB_022e4760;
      uVar8 = *puVar14;
      if (uVar8 != 0 && puVar14 != (uint *)(ulong)uVar8) {
        puVar15 = (uint *)((long)puVar14 - (long)(ulong)uVar8);
        if (((*puVar15 != 0) && (uVar8 = puVar15[1], uVar8 != 0)) &&
           ((ulong)(ushort)puVar15[2] != 0)) {
          lVar17 = 0xc;
          if (*(char *)((long)puVar15 + 10) != '\0') {
            lVar17 = 0x1c;
          }
          lVar17 = (long)puVar15 + lVar17 + (ulong)(ushort)puVar15[2] * 8;
          if (lVar17 != 0) {
            uVar6 = 0;
            if ((ulong)uVar8 != 0) {
              uVar6 = (uint)((ulong)((long)puVar14 - lVar17) / (ulong)uVar8);
            }
            if (*puVar15 <= uVar6) {
              uVar6 = 0xffffffff;
            }
            if ((uVar6 < DAT_051602f8) && (*(short *)(DAT_05160300 + (long)(int)uVar6 * 2) == 2))
            goto LAB_022e4760;
          }
        }
      }
    }
LAB_022e4f24:
    iVar9 = 2;
  }
  else {
    if (((DAT_05482028 & 1) == 0) && (iVar9 = __cxa_guard_acquire(&DAT_05482028), iVar9 != 0)) {
      DAT_05481ff4 = 0.0;
      _DAT_05481fec = 0;
      DAT_05481ff8 = 0x3f800000;
      DAT_05482000 = 0xbf80000000000000;
      DAT_05482008 = 0;
      DAT_05482010 = 0;
      DAT_05482018 = 0x3f800000;
      DAT_05482020 = 0xbf80000000000000;
      __cxa_guard_release(&DAT_05482028);
    }
    local_68 = (undefined **)CONCAT44(pfVar10[1] + DAT_05481ff0,*pfVar10 + DAT_05481fec);
    local_60._0_4_ = pfVar10[2] + DAT_05481ff4;
    iVar9 = FUN_0131bc6c(&local_104,&local_68);
    if (iVar9 != 1) {
      local_68 = (undefined **)
                 CONCAT44(pfVar10[1] + DAT_05481ff8._4_4_,*pfVar10 + (float)DAT_05481ff8);
      local_60._0_4_ = pfVar10[2] + (float)DAT_05482000;
      iVar9 = FUN_0131bc6c(&local_104,&local_68);
      if (iVar9 != 1) {
        local_68 = (undefined **)
                   CONCAT44(pfVar10[1] + (float)DAT_05482008,*pfVar10 + DAT_05482000._4_4_);
        local_60._0_4_ = pfVar10[2] + DAT_05482008._4_4_;
        iVar9 = FUN_0131bc6c(&local_104,&local_68);
        if (iVar9 != 1) {
          local_68 = (undefined **)
                     CONCAT44(pfVar10[1] + DAT_05482010._4_4_,*pfVar10 + (float)DAT_05482010);
          local_60._0_4_ = pfVar10[2] + (float)DAT_05482018;
          iVar9 = FUN_0131bc6c(&local_104,&local_68);
          if (iVar9 != 1) {
            local_68 = (undefined **)
                       CONCAT44(pfVar10[1] + (float)DAT_05482020,*pfVar10 + DAT_05482018._4_4_);
            local_60 = (uint *)CONCAT44(local_60._4_4_,pfVar10[2] + DAT_05482020._4_4_);
            iVar9 = FUN_0131bc6c(&local_104,&local_68);
            if (iVar9 != 1) {
              if ((*(uint *)(param_1 + 0x14) >> 2 & 1) != 0) goto LAB_022e4428;
              goto LAB_022e4fac;
            }
          }
        }
      }
    }
    iVar9 = 1;
  }
  if (iVar9 != 0) {
    *(int *)(param_1 + 0x7c) = iVar9;
    return 2;
  }
  if ((*(long *)(DAT_0519d040 + 0x1f8) != 0) &&
     (lVar17 = *(long *)(*(long *)(DAT_0519d040 + 0x1f8) + 0xa8), lVar17 != 0)) {
    local_60 = (uint *)CONCAT44((int)local_102,(int)local_104);
    local_68 = (undefined **)(PTR_DAT_04bb2018 + 0x10);
    FUN_01309ec4(local_78,lVar17,&local_68);
    uVar12 = FUN_0131ba70(&local_104,&local_68);
    uVar11 = FUN_0130d5d4(local_78,uVar12);
    if ((uVar11 & 1) != 0) {
      uVar8 = *(uint *)(param_1 + 0x14) | 0x10;
      goto LAB_022e5064;
    }
  }
  uVar8 = *(uint *)(param_1 + 0x14) & 0xffffffef;
LAB_022e5064:
  *(uint *)(param_1 + 0x14) = uVar8;
  return 1;
}

