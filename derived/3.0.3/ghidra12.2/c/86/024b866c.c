
/* WARNING: Removing unreachable block (ram,0x024b9370) */

void FUN_024b866c(long param_1)

{
  byte *pbVar1;
  undefined *puVar2;
  ulong *puVar3;
  int *piVar4;
  undefined *puVar5;
  uint uVar6;
  char cVar7;
  byte bVar8;
  short sVar9;
  undefined *puVar10;
  bool bVar11;
  byte bVar12;
  uint uVar13;
  undefined4 uVar14;
  int iVar15;
  int iVar16;
  ulong uVar17;
  byte *pbVar18;
  ushort uVar19;
  uint *puVar20;
  uint *puVar21;
  undefined8 uVar22;
  undefined8 *puVar23;
  long lVar24;
  long lVar25;
  float fVar26;
  float fVar27;
  undefined8 local_b8;
  char *local_b0;
  undefined8 local_a8;
  undefined8 local_a0;
  float local_98;
  float local_94;
  float fStack_90;
  float local_8c;
  undefined4 local_88;
  undefined2 local_84;
  undefined4 local_82;
  undefined1 local_7c [4];
  undefined8 local_78;
  char *pcStack_70;
  char *local_68;
  uint local_44;
  
  puVar3 = (ulong *)(param_1 + 0x1902);
  if (*(int *)(param_1 + 0x178) == 0) {
    bVar12 = FUN_02744114((byte *)(param_1 + 0x1ee8),&DAT_0548fe70);
    uVar13 = 0x8000000;
    if ((bVar12 & 1) == 0) {
      uVar13 = 0;
    }
    *(uint *)(param_1 + 0x17d0) = *(uint *)(param_1 + 0x17d0) & 0xf7ffffff | uVar13;
    if (*(int *)(param_1 + 0x178) == 0) {
      local_78 = (char *)0xfffe;
      FUN_0277d4ac(&local_78);
      puVar5 = PTR_DAT_04bb43c0;
      local_78 = (char *)*puVar3;
      lVar25 = *(long *)PTR_DAT_04bb43c0;
      uVar13 = FUN_0277d6c4(&local_78);
      lVar24 = *(long *)puVar5;
      if (lVar24 != 0) {
        lVar25 = *(long *)(lVar25 + 0x57e58);
        uVar13 = (uVar13 & 0xffff) - (uint)*(ushort *)(lVar25 + 0x1f8);
        if ((uVar13 < *(uint *)(lVar25 + 0x1d8)) &&
           (*(long *)(*(long *)(lVar25 + 0x1e0) + (long)(int)uVar13 * 8) != 0)) {
          local_a8 = (uint *)0x0;
          local_b8 = PTR_DAT_04bc0510 + 0x10;
          local_b0 = local_78;
          uVar13 = FUN_0277d6c4(&local_b0);
          if (*(long *)puVar5 == 0) {
LAB_024b8870:
            local_68 = (char *)CONCAT44(local_68._4_4_,0x96);
            local_44 = 0xbc;
          }
          else {
            lVar24 = *(long *)(lVar24 + 0x57e58);
            uVar13 = (uVar13 & 0xffff) - (uint)*(ushort *)(lVar24 + 0x1f8);
            if ((*(uint *)(lVar24 + 0x1d8) <= uVar13) ||
               (*(long *)(*(long *)(lVar24 + 0x1e0) + (long)(int)uVar13 * 8) == 0))
            goto LAB_024b8870;
            lVar24 = *(long *)PTR_DAT_04bc0428;
            uVar13 = FUN_0277d6c4(&local_78);
            uVar13 = (uVar13 & 0xffff) - (uint)*(ushort *)(lVar24 + 0x1f8);
            if ((*(uint *)(lVar24 + 0x1d8) <= uVar13) ||
               (puVar20 = *(uint **)(*(long *)(lVar24 + 0x1e0) + (long)(int)uVar13 * 8),
               puVar20 == (uint *)0x0)) goto LAB_024b8870;
            local_44 = 0;
            local_68 = (char *)CONCAT44(local_68._4_4_,0x96);
            uVar13 = *puVar20;
            if ((uVar13 != 0) && (puVar20 != (uint *)(ulong)uVar13)) {
              puVar21 = (uint *)((long)puVar20 - (long)(ulong)uVar13);
              local_44 = 0;
              if (*puVar21 != 0) {
                uVar13 = puVar21[1];
                if ((uVar13 != 0) && ((ulong)(ushort)puVar21[2] != 0)) {
                  lVar24 = 0xc;
                  if (*(char *)((long)puVar21 + 10) != '\0') {
                    lVar24 = 0x1c;
                  }
                  lVar24 = (long)puVar21 + lVar24 + (ulong)(ushort)puVar21[2] * 8;
                  if (lVar24 != 0) {
                    uVar6 = 0;
                    if ((ulong)uVar13 != 0) {
                      uVar6 = (uint)((ulong)((long)puVar20 - lVar24) / (ulong)uVar13);
                    }
                    if (*puVar21 <= uVar6) {
                      uVar6 = 0xffffffff;
                    }
                    if ((uVar6 < *(uint *)PTR_DAT_04bc00c8) &&
                       (local_44 = (uint)*(ushort *)
                                          (*(long *)(PTR_DAT_04bc00c8 + 8) + (long)(int)uVar6 * 2),
                       local_44 < 0xbd)) goto LAB_024b887c;
                  }
                }
                local_44 = 0;
              }
            }
          }
LAB_024b887c:
          bVar12 = local_44 != (uint)local_68 & bVar12;
        }
      }
      if (*(long *)PTR_DAT_04bb4718 == 0) {
        if ((DAT_054f0960 & 1) == 0) {
          iVar15 = __cxa_guard_acquire(&DAT_054f0960);
          puVar20 = (uint *)&DAT_054f0958;
          if (iVar15 != 0) {
            DAT_054f0958 = 0;
            __cxa_guard_release(&DAT_054f0960);
          }
        }
        else {
          puVar20 = (uint *)&DAT_054f0958;
        }
      }
      else {
        uVar17 = (ulong)*(byte *)(param_1 + 0x1ee8);
        puVar20 = (uint *)(*(long *)PTR_DAT_04bb4718 + 0x204);
        if (uVar17 < 8) {
          puVar20 = puVar20 + uVar17 * 2;
        }
      }
      local_b8 = (undefined *)CONCAT44(local_b8._4_4_,2);
      *puVar20 = *puVar20 | 4;
      local_78 = (char *)CONCAT44(local_78._4_4_,*(undefined4 *)(param_1 + 0x230));
      sVar9 = *(short *)PTR_DAT_04bb6298;
      if (sVar9 == -1) {
LAB_024b8970:
        FUN_016f742c(&local_b8,&local_78,0);
      }
      else {
        local_b8 = (undefined *)CONCAT44(local_b8._4_4_,1);
        puVar20 = (uint *)(PTR_DAT_04bc39f8 + (ulong)(uint)(int)sVar9 * 8);
        if (0xff < (uint)(int)sVar9) {
          puVar20 = (uint *)PTR_DAT_04bc39f8;
        }
        if ((*puVar20 >> 1 & 1) == 0) goto LAB_024b8970;
        local_b8._2_2_ = 0;
      }
      *(undefined1 *)(param_1 + 0x1913) = 0;
      *(undefined2 *)(param_1 + 0x1900) = local_b8._2_2_;
      *(byte *)(param_1 + 0x1924) = bVar12 & 1;
    }
  }
  uVar22 = *(undefined8 *)PTR_DAT_04bb3d80;
  local_b8 = (undefined *)0xfffe;
  FUN_0277d4ac(&local_b8);
  local_b8 = (undefined *)*puVar3;
  uVar14 = FUN_0277d6c4(&local_b8);
  uVar17 = FUN_013eec20(uVar22,uVar14);
  puVar5 = PTR_DAT_04bb2020;
  if (*(char *)(param_1 + 0x1913) == '\0') {
    puVar23 = *(undefined8 **)(param_1 + 0x60);
    if (puVar23 == (undefined8 *)0x0) {
      if ((DAT_052461c0 & 1) == 0) {
        iVar15 = __cxa_guard_acquire(&DAT_052461c0);
        puVar23 = &DAT_05240280;
        if (iVar15 != 0) {
          FUN_016fcf10(&DAT_05240280);
          FUN_001001d0(PTR_FUN_04bbdea8,&DAT_05240280,&__DT_FINI_ARRAY);
          __cxa_guard_release(&DAT_052461c0);
        }
      }
      else {
        puVar23 = &DAT_05240280;
      }
    }
    if ((uVar17 & 1) == 0) {
      local_b0 = "CommonRodGetDemo";
    }
    else {
      local_b0 = "CommonRodGetDemoSideways";
    }
  }
  else {
    if (((*(int *)(param_1 + 0x178) == 1) && (*(long *)(param_1 + 0x70) != 0)) &&
       (*(int *)(*(long *)(param_1 + 0x70) + 0x288) == 0x9c)) {
      FUN_0232bc30(param_1);
    }
    puVar23 = *(undefined8 **)(param_1 + 0x60);
    if (puVar23 == (undefined8 *)0x0) {
      if ((DAT_052461c0 & 1) == 0) {
        iVar15 = __cxa_guard_acquire(&DAT_052461c0);
        puVar23 = &DAT_05240280;
        if (iVar15 != 0) {
          FUN_016fcf10(&DAT_05240280);
          FUN_001001d0(PTR_FUN_04bbdea8,&DAT_05240280,&__DT_FINI_ARRAY);
          __cxa_guard_release(&DAT_052461c0);
        }
      }
      else {
        puVar23 = &DAT_05240280;
      }
    }
    if ((uVar17 & 1) == 0) {
      local_b0 = "CommonRodGetDemoKeep";
    }
    else {
      local_b0 = "CommonRodGetDemoSidewaysKeep";
    }
  }
  local_b8 = puVar5 + 0x10;
  FUN_017081d0(puVar23,&local_b8,6,1,0);
  uVar14 = *(undefined4 *)(param_1 + 0x230);
  puVar23 = *(undefined8 **)(param_1 + 0x60);
  if (puVar23 == (undefined8 *)0x0) {
    if ((DAT_052461c0 & 1) == 0) {
      iVar15 = __cxa_guard_acquire(&DAT_052461c0);
      puVar23 = &DAT_05240280;
      if (iVar15 != 0) {
        FUN_016fcf10(&DAT_05240280);
        FUN_001001d0(PTR_FUN_04bbdea8,&DAT_05240280,&__DT_FINI_ARRAY);
        __cxa_guard_release(&DAT_052461c0);
      }
    }
    else {
      puVar23 = &DAT_05240280;
    }
  }
  lVar24 = FUN_017067d4(puVar23,uVar14,0);
  if (lVar24 != 0) {
    local_b8 = puVar5 + 0x10;
    local_b0 = "ToolRodGetDemo";
    FUN_01751d60(lVar24,&local_b8,6,0,0);
  }
  uVar14 = FUN_024b1b70(param_1);
  FUN_024b19e0(uVar14,0);
  *(undefined1 *)(param_1 + 0xadc) = 0;
  *(undefined4 *)(param_1 + 0xad8) = 0x3f800000;
  if (*(int *)(param_1 + 0x178) != 0) goto LAB_024b9434;
  cVar7 = *(char *)(param_1 + 0x1924);
  *(uint *)(param_1 + 0x17d0) = *(uint *)(param_1 + 0x17d0) | 0x400000;
  puVar10 = PTR_DAT_04bb6298;
  if (cVar7 == '\0') {
    local_b8 = (undefined *)0xfffe;
    FUN_0277d4ac(&local_b8);
    local_b8 = (undefined *)*puVar3;
    local_68 = (char *)((ulong)local_68 & 0xffffffff00000000);
    sVar9 = *(short *)puVar10;
    if (sVar9 == -1) {
LAB_024b8bac:
      bVar12 = *(byte *)(param_1 + 0x1ee8);
      if (7 < bVar12) {
        bVar12 = 0xff;
      }
      local_78 = (char *)CONCAT71(local_78._1_7_,bVar12);
      FUN_02669430(&local_78);
      uVar17 = FUN_025579bc(param_1 + 0x1ee8,&local_b8,&local_68);
      uVar13 = *(uint *)(param_1 + 0x17cc);
      if ((uVar17 & 1) == 0) goto LAB_024b8bec;
      uVar13 = uVar13 | 0x40;
    }
    else {
      local_78 = (char *)CONCAT44(local_78._4_4_,0x15);
      puVar20 = (uint *)(PTR_DAT_04bc39f8 + (ulong)(uint)(int)sVar9 * 8);
      if (0xff < (uint)(int)sVar9) {
        puVar20 = (uint *)PTR_DAT_04bc39f8;
      }
      if ((*puVar20 >> 0x15 & 1) == 0) goto LAB_024b8bac;
      uVar13 = *(uint *)(param_1 + 0x17cc);
LAB_024b8bec:
      uVar13 = uVar13 & 0xffffffbf;
    }
    *(uint *)(param_1 + 0x17cc) = uVar13;
    *(uint *)(param_1 + 0x17d0) =
         *(uint *)(param_1 + 0x17d0) & 0xff800000 |
         *(uint *)(param_1 + 0x17d0) & 0x3fffff | (uVar13 >> 6 & 1) << 0x16;
  }
  pbVar1 = (byte *)(param_1 + 0x1ee8);
  *(undefined1 *)(param_1 + 0x190a) = 0;
  FUN_0252d8f0(&local_78,pbVar1);
  uVar13 = *(uint *)(param_1 + 0x1920);
  local_b8 = (undefined *)CONCAT44(local_b8._4_4_,uVar13);
  if ((uVar13 < 8) && ((1 << (ulong)(uVar13 & 0x1f) & 0xb0U) != 0)) {
    FUN_0252d8f0(&local_b8,pbVar1);
    iVar15 = FUN_0277d6c4(&local_b8);
    uVar14 = 1;
    if (iVar15 == 0xc0c) {
      uVar14 = 2;
    }
  }
  else {
    uVar14 = 1;
  }
  uVar17 = FUN_02556d7c(&local_78,pbVar1,uVar14);
  if ((uVar17 & 1) != 0) {
    FUN_02326130(pbVar1,&local_78,1);
  }
  FUN_02326130(pbVar1,&local_78,1);
  *(char **)(param_1 + 0x190b) = local_78;
  uVar17 = FUN_023266fc(param_1,0);
  if ((uVar17 & 1) != 0) {
    uVar13 = *(uint *)(param_1 + 0x1920);
    local_b8 = (undefined *)CONCAT44(local_b8._4_4_,uVar13);
    if ((uVar13 < 8) && ((1 << (ulong)(uVar13 & 0x1f) & 0xb0U) != 0)) {
      FUN_0252d8f0(&local_b8,pbVar1);
      iVar15 = FUN_0277d6c4(&local_b8);
      if (iVar15 == 0xc0c) {
        local_b8 = puVar5 + 0x10;
        local_b0 = "ForceToolBreakDemo";
        FUN_027533a8(pbVar1,&local_b8,1);
      }
    }
    bVar8 = *pbVar1;
    local_b8 = (undefined *)CONCAT71(local_b8._1_7_,1);
    local_b8 = (undefined *)CONCAT44(*(undefined4 *)PTR_DAT_04bb37e0,(undefined4)local_b8);
    local_b0 = (char *)CONCAT44(local_b0._4_4_,*(undefined4 *)(PTR_DAT_04bb37e0 + 4));
    bVar12 = bVar8;
    if (7 < bVar8) {
      bVar12 = 0xff;
    }
    local_b8._0_2_ = CONCAT11(bVar12,1);
    if (((bVar8 < 8) && (uVar13 = FUN_02582d8c(pbVar1,1), uVar13 < 8)) &&
       (*(char *)(*(long *)PTR_DAT_04bb4fb8 + (ulong)uVar13 * 0x13f0 + 0x13d4) != '\0')) {
      bVar11 = *(char *)(*(long *)PTR_DAT_04bb4fb8 + (ulong)uVar13 * 0x13f0 + 0x13d6) != '\0';
    }
    else {
      bVar11 = false;
    }
    local_b8 = (undefined *)CONCAT71(local_b8._1_7_,bVar11);
    local_b8 = (undefined *)CONCAT44((uint)local_78,(undefined4)local_b8);
    local_b0 = (char *)CONCAT44(local_b0._4_4_,local_78._4_4_);
    FUN_02308eb4(&local_b8);
  }
  bVar12 = *pbVar1;
  if (7 < bVar12) {
    bVar12 = 0xff;
  }
  local_78 = (char *)CONCAT71(local_78._1_7_,bVar12);
  if (cVar7 != '\0') {
    lVar24 = *(long *)PTR_DAT_04bb39b0;
    if ((lVar24 != 0) && (*(int *)(lVar24 + 0x15c) != 0)) {
      pbVar18 = PTR_DAT_04bb32e0;
      if (*(int *)(lVar24 + 0x15c) != 0) {
        pbVar18 = (byte *)(lVar24 + 0x158);
      }
      if ((*pbVar18 < 8) ||
         (((*(int *)(lVar24 + 0x15c) != 0 && (*(long *)PTR_DAT_04bb4718 != 0)) &&
          (pbVar18 = (byte *)(*(long *)PTR_DAT_04bb4718 + 0x11a5), *pbVar18 < 8)))) {
LAB_024b8e8c:
        bVar12 = *pbVar18;
        if (7 < bVar12) {
          bVar12 = 0xff;
        }
      }
      else {
        if (*(long **)PTR_DAT_04bb27d0 == (long *)0x0) {
LAB_024b8e84:
          pbVar18 = PTR_DAT_04bb5038;
          goto LAB_024b8e8c;
        }
        lVar24 = **(long **)PTR_DAT_04bb27d0;
        bVar12 = *(byte *)(lVar24 + 0x473);
        pbVar18 = PTR_DAT_04bb5038;
        if ((long)(char)bVar12 != 0xffffffffffffffff) {
          puVar20 = (uint *)(lVar24 + 0x48) + ((long)(char)bVar12 & 0xffffffffU) * 0x20;
          if (7 < bVar12) {
            puVar20 = (uint *)(lVar24 + 0x48);
          }
          if ((*puVar20 & 8) != 0) {
            pbVar18 = (byte *)(lVar24 + 0x471);
          }
        }
        bVar12 = *pbVar18;
        if (7 < bVar12) goto LAB_024b8e84;
      }
      if (7 < bVar12) {
        bVar12 = 0xff;
      }
      local_78 = (char *)CONCAT71(local_78._1_7_,bVar12);
    }
    local_b8 = (undefined *)0xfffe;
    FUN_0277d4ac(&local_b8);
    local_b8 = (undefined *)*puVar3;
    FUN_0267ec30(&local_78,&local_b8,0);
  }
  local_b8 = (undefined *)0xfffe;
  lVar24 = *(long *)PTR_DAT_04bb3968;
  FUN_0277d4ac(&local_b8);
  local_b8 = (undefined *)*puVar3;
  FUN_0086a920(lVar24 + 0x3878,&local_78,&local_b8);
  local_68 = (char *)0xfffe;
  FUN_0277d4ac(&local_68);
  puVar2 = PTR_DAT_04bb43c0;
  local_b0 = (char *)*puVar3;
  local_68 = local_b0;
  if (((uint)local_b0 & 0xffff) != 0xfffe) {
    local_b8 = PTR_DAT_04bc0510 + 0x10;
    local_a8 = (uint *)0x0;
    lVar24 = *(long *)PTR_DAT_04bb43c0;
    uVar13 = FUN_0277d6c4(&local_b0);
    if (*(long *)puVar2 == 0) {
LAB_024b918c:
      local_44 = 0xbc;
      local_78 = (char *)CONCAT44(local_78._4_4_,0x96);
    }
    else {
      lVar24 = *(long *)(lVar24 + 0x57e58);
      uVar13 = (uVar13 & 0xffff) - (uint)*(ushort *)(lVar24 + 0x1f8);
      if ((*(uint *)(lVar24 + 0x1d8) <= uVar13) ||
         (*(long *)(*(long *)(lVar24 + 0x1e0) + (long)(int)uVar13 * 8) == 0)) goto LAB_024b918c;
      lVar24 = *(long *)PTR_DAT_04bc0428;
      uVar13 = FUN_0277d6c4(&local_68);
      uVar13 = (uVar13 & 0xffff) - (uint)*(ushort *)(lVar24 + 0x1f8);
      if ((*(uint *)(lVar24 + 0x1d8) <= uVar13) ||
         (puVar20 = *(uint **)(*(long *)(lVar24 + 0x1e0) + (long)(int)uVar13 * 8),
         puVar20 == (uint *)0x0)) goto LAB_024b918c;
      uVar13 = *puVar20;
      local_a8 = puVar20;
      if ((uVar13 == 0) || (puVar20 == (uint *)(ulong)uVar13)) {
LAB_024b90e0:
        uVar19 = 0;
      }
      else {
        puVar21 = (uint *)((long)puVar20 - (long)(ulong)uVar13);
        if ((*puVar21 != 0) &&
           ((uVar13 = puVar21[1], uVar13 != 0 && ((ulong)(ushort)puVar21[2] != 0)))) {
          lVar24 = 0xc;
          if (*(char *)((long)puVar21 + 10) != '\0') {
            lVar24 = 0x1c;
          }
          lVar24 = (long)puVar21 + lVar24 + (ulong)(ushort)puVar21[2] * 8;
          if (lVar24 != 0) {
            uVar6 = 0;
            if ((ulong)uVar13 != 0) {
              uVar6 = (uint)((ulong)((long)puVar20 - lVar24) / (ulong)uVar13);
            }
            if (*puVar21 <= uVar6) {
              uVar6 = 0xffffffff;
            }
            if (((uVar6 < *(uint *)PTR_DAT_04bc00c8) &&
                (uVar19 = *(ushort *)(*(long *)(PTR_DAT_04bc00c8 + 8) + (long)(int)uVar6 * 2),
                uVar19 < 0xbd)) && (uVar19 == 99)) goto LAB_024b91e0;
          }
        }
        if (((*puVar21 == 0) || (uVar13 = puVar21[1], uVar13 == 0)) ||
           ((ulong)(ushort)puVar21[2] == 0)) goto LAB_024b90e0;
        lVar24 = 0xc;
        if (*(char *)((long)puVar21 + 10) != '\0') {
          lVar24 = 0x1c;
        }
        lVar24 = (long)puVar21 + lVar24 + (ulong)(ushort)puVar21[2] * 8;
        uVar19 = 0;
        if (lVar24 != 0) {
          uVar6 = 0;
          if ((ulong)uVar13 != 0) {
            uVar6 = (uint)((ulong)((long)puVar20 - lVar24) / (ulong)uVar13);
          }
          if (*puVar21 <= uVar6) {
            uVar6 = 0xffffffff;
          }
          if ((*(uint *)PTR_DAT_04bc00c8 <= uVar6) ||
             (uVar19 = *(ushort *)(*(long *)(PTR_DAT_04bc00c8 + 8) + (long)(int)uVar6 * 2),
             0xbc < uVar19)) goto LAB_024b90e0;
        }
      }
      if (uVar19 == 0x60) goto LAB_024b91e0;
      local_44 = 0;
      local_78 = (char *)CONCAT44(local_78._4_4_,0x96);
      uVar13 = *puVar20;
      if ((uVar13 != 0) && (puVar20 != (uint *)(ulong)uVar13)) {
        puVar21 = (uint *)((long)puVar20 - (long)(ulong)uVar13);
        local_44 = 0;
        if (*puVar21 != 0) {
          uVar13 = puVar21[1];
          if ((uVar13 != 0) && ((ulong)(ushort)puVar21[2] != 0)) {
            lVar24 = 0xc;
            if (*(char *)((long)puVar21 + 10) != '\0') {
              lVar24 = 0x1c;
            }
            lVar24 = (long)puVar21 + lVar24 + (ulong)(ushort)puVar21[2] * 8;
            if (lVar24 != 0) {
              uVar6 = 0;
              if ((ulong)uVar13 != 0) {
                uVar6 = (uint)((ulong)((long)puVar20 - lVar24) / (ulong)uVar13);
              }
              if (*puVar21 <= uVar6) {
                uVar6 = 0xffffffff;
              }
              if ((uVar6 < *(uint *)PTR_DAT_04bc00c8) &&
                 (local_44 = (uint)*(ushort *)
                                    (*(long *)(PTR_DAT_04bc00c8 + 8) + (long)(int)uVar6 * 2),
                 local_44 < 0xbd)) goto LAB_024b91ac;
            }
          }
          local_44 = 0;
        }
      }
    }
LAB_024b91ac:
    if (local_44 != (uint)local_78) {
      local_78 = puVar5 + 0x10;
      pcStack_70 = "CatchFishContinueCount";
      FUN_0274ca70(pbVar1,&local_78,1);
    }
  }
LAB_024b91e0:
  puVar2 = puVar5 + 0x10;
  local_b0 = "CatchFishContinuously";
  local_b8 = puVar2;
  iVar15 = FUN_02798760(pbVar1,&local_b8);
  if (iVar15 < 100) {
    local_b0 = "CatchFishContinueCount";
    local_b8 = puVar2;
    iVar16 = FUN_0274bce0(pbVar1,&local_b8);
    if (iVar15 < iVar16) {
      local_b8 = puVar5 + 0x10;
      local_b0 = "CatchFishContinuously";
      FUN_02799370(pbVar1,&local_b8,iVar16);
    }
  }
  bVar12 = *(byte *)(param_1 + 0x1ee8);
  if (7 < bVar12) {
    bVar12 = 0xff;
  }
  local_44 = CONCAT31(local_44._1_3_,bVar12);
  local_78 = (char *)0xfffe;
  FUN_0277d4ac(&local_78);
  local_78 = (char *)*puVar3;
  local_b0 = "BeyDaily_QuestStart";
  local_b8 = puVar2;
  iVar15 = FUN_0274bce0(&local_44,&local_b8);
  if (iVar15 == 1) {
    local_7c[0] = (undefined1)local_44;
    if (7 < (local_44 & 0xff)) {
      local_7c[0] = 0xff;
    }
    uVar17 = FUN_02669430(local_7c);
    if ((uVar17 & 1) == 0) goto LAB_024b92fc;
    sVar9 = *(short *)puVar10;
    if (sVar9 != -1) {
      local_68 = (char *)CONCAT44(local_68._4_4_,3);
      puVar20 = (uint *)(PTR_DAT_04bc39f8 + (ulong)(uint)(int)sVar9 * 8);
      if (0xff < (uint)(int)sVar9) {
        puVar20 = (uint *)PTR_DAT_04bc39f8;
      }
      if ((*puVar20 >> 3 & 1) != 0) {
        FUN_0218918c(&local_44,&local_78);
      }
      goto LAB_024b92fc;
    }
  }
  else {
LAB_024b92fc:
    sVar9 = *(short *)puVar10;
    if (sVar9 != -1) {
      local_b8 = (undefined *)CONCAT44(local_b8._4_4_,0x20);
      puVar5 = PTR_DAT_04bc39f8 + (ulong)(uint)(int)sVar9 * 8;
      if (0xff < (uint)(int)sVar9) {
        puVar5 = PTR_DAT_04bc39f8;
      }
      if (((*(uint *)(puVar5 + 4) & 1) != 0) &&
         (*(char *)(*(long *)PTR_DAT_04bb3728 + 0x198) != '\0')) {
        local_b8 = (undefined *)CONCAT44(local_b8._4_4_,6);
        piVar4 = (int *)(*(long *)PTR_DAT_04bb3728 + 0x164);
        *piVar4 = *piVar4 + 1;
      }
    }
  }
  if (*(int *)(param_1 + 0x178) == 0) {
    uVar13 = *(uint *)(param_1 + 0x17d0);
    if ((*(uint *)(param_1 + 0x1da8) & 0xfffffffd) == 4) {
      puVar23 = *(undefined8 **)(param_1 + 0x1dc0);
      *(uint *)(param_1 + 0x17d0) = uVar13 & 0xfffffffd;
      *(undefined4 *)(param_1 + 0x1da8) = 0;
      if (puVar23 != &DAT_0407ebb1) {
        iVar15 = 0;
        if (*(int *)(param_1 + 0x1dc8) < 1) {
          iVar15 = *(int *)(param_1 + 0x1dc8) + -1;
        }
        memset(puVar23,0,(long)iVar15);
        *(undefined1 *)((long)puVar23 + (long)iVar15) = 0;
      }
      puVar23 = *(undefined8 **)(param_1 + 0x1e18);
      if (puVar23 != &DAT_0407ebb1) {
        iVar15 = 0;
        if (*(int *)(param_1 + 0x1e20) < 1) {
          iVar15 = *(int *)(param_1 + 0x1e20) + -1;
        }
        memset(puVar23,0,(long)iVar15);
        *(undefined1 *)((long)puVar23 + (long)iVar15) = 0;
      }
      *(undefined8 *)(param_1 + 0x1e68) = 0;
      *(undefined8 *)(param_1 + 0x1e78) = 0;
      *(undefined2 *)(param_1 + 0x1e70) = 0xff;
      uVar13 = *(uint *)(param_1 + 0x17d0);
    }
    *(uint *)(param_1 + 0x17d0) = uVar13 & 0xfffffffb;
  }
LAB_024b9434:
  local_a8 = (uint *)((ulong)local_a8 & 0xffffffffffffff00);
  local_84 = 0x100;
  cVar7 = *(char *)(param_1 + 0x1924);
  local_a0 = 0;
  local_98 = 0.0;
  local_88 = 0x3f800000;
  local_82 = 0;
  local_78 = (char *)0xfffe;
  FUN_0277d4ac(&local_78);
  local_b8 = (undefined *)*puVar3;
  local_b0 = (char *)0x2;
  local_a8 = (uint *)CONCAT44(3,(undefined4)local_a8);
  fVar27 = (float)*(int *)(param_1 + 0x191a);
  fStack_90 = (float)(int)*(short *)(param_1 + 0x1918) * 0.25;
  fVar26 = (float)*(int *)(param_1 + 0x1914) * 0.001;
  local_8c = fVar27 * 0.001;
  local_94 = fVar26;
  uVar22 = FUN_0251e98c(1);
  uVar14 = FUN_02366a5c(uVar22,&local_b8);
  local_a0 = CONCAT44(fVar26,uVar14);
  local_a8 = (uint *)((ulong)local_a8 & 0xffffffffffffff00);
  local_82 = CONCAT31(local_82._1_3_,cVar7 != '\0');
  local_84 = CONCAT11(*(char *)(param_1 + 0x1925) != '\0',1);
  local_98 = fVar27;
  FUN_0236b830(param_1,&local_b8);
  *(undefined1 *)(param_1 + 0xadd) = 0;
  return;
}

