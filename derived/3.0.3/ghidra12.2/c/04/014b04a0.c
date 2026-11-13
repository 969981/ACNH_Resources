
/* WARNING: Removing unreachable block (ram,0x014b0874) */

void FUN_014b04a0(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  long *plVar5;
  undefined2 *puVar6;
  byte bVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined *puVar10;
  int iVar11;
  int iVar12;
  uint uVar13;
  long *plVar14;
  uint *puVar15;
  ulong uVar16;
  ulong uVar17;
  uint uVar18;
  byte *pbVar19;
  long lVar20;
  undefined1 auStack_17c8 [8];
  undefined *local_17c0;
  undefined8 uStack_17b8;
  undefined **local_17b0;
  undefined **local_17a8;
  undefined *local_17a0;
  int local_1798;
  int local_1794;
  undefined *local_1790;
  undefined *puStack_1788;
  undefined8 local_1780;
  undefined *local_1778;
  undefined8 uStack_1770;
  undefined8 local_1768;
  undefined *puStack_1760;
  undefined8 local_1758;
  undefined *local_1750;
  undefined8 local_1748;
  undefined *local_1740;
  uint local_1738;
  undefined4 uStack_1734;
  byte local_1730;
  undefined1 auStack_1722 [2];
  byte local_1720 [4];
  undefined4 local_171c;
  undefined2 local_1718;
  ushort local_80 [2];
  byte local_7c [4];
  undefined4 local_78;
  undefined2 local_74;
  uint local_70;
  undefined4 local_6c;
  
  FUN_02507c6c(local_7c,7,1,0,0);
  puVar1 = PTR_DAT_04bb5038;
  uVar13 = (uint)local_7c[0];
  uVar18 = 0;
  local_171c = local_78;
  local_1720[0] = 0xff;
  if (local_7c[0] < 8) {
    local_1720[0] = local_7c[0];
  }
  local_1718 = local_74;
  if (local_7c[0] < 8) {
    uVar18 = 0;
    while( true ) {
      uVar16 = (ulong)uVar13;
      uVar18 = uVar18 | 1 << (ulong)(uVar13 & 0x1f) & 0xffffU;
      do {
        if (uVar16 == 7) goto LAB_014b0510;
        uVar16 = uVar16 + 1;
        uVar17 = FUN_02507924(local_1720,puVar1 + uVar16);
      } while ((uVar17 & 1) == 0);
      bVar7 = puVar1[uVar16];
      uVar13 = (uint)bVar7;
      if (7 < uVar13) break;
      local_1720[0] = bVar7;
    }
  }
LAB_014b0510:
  puVar10 = PTR_DAT_04bb43c0;
  puVar8 = PTR_DAT_04bb2010;
  uVar16 = 0;
  puVar1 = PTR_DAT_04bbfe68 + 0x10;
  puVar2 = PTR_DAT_04bb5438 + 0x10;
  puVar3 = PTR_DAT_04bbc1a0 + 0x10;
  puVar4 = PTR_DAT_04bb2010 + 0x10;
  puVar15 = (uint *)PTR_DAT_04bb3120;
  pbVar19 = PTR_DAT_04bb3128;
  do {
    puVar9 = PTR_DAT_04bb37e0;
    if ((1 << (ulong)((uint)uVar16 & 0x1f) & uVar18) == 0) {
      puVar6 = (undefined2 *)(param_1 + uVar16 * 8);
      *puVar6 = *(undefined2 *)PTR_DAT_04bb37e0;
      *(undefined *)(puVar6 + 1) = puVar9[2];
      *(undefined *)((long)puVar6 + 3) = puVar9[3];
      *(undefined4 *)(puVar6 + 2) = *(undefined4 *)(puVar9 + 4);
      if ((*pbVar19 & 1) == 0) {
        iVar12 = __cxa_guard_acquire(pbVar19);
        puVar15 = (uint *)PTR_DAT_04bb3120;
        if (iVar12 != 0) {
          FUN_00706e58(PTR_DAT_04bb3120);
          __cxa_guard_release(pbVar19);
          puVar15 = (uint *)PTR_DAT_04bb3120;
        }
      }
      if (0 < (int)*puVar15) {
        uVar17 = 0;
        do {
          if (*(int *)(*(long *)(puVar15 + 2) + uVar17 * 4) == 0x1a) goto LAB_014b063c;
          uVar17 = uVar17 + 1;
        } while (*puVar15 != uVar17);
      }
      uVar17 = 0;
LAB_014b063c:
      local_80[0] = 0;
      if ((*pbVar19 & 1) == 0) {
        iVar12 = __cxa_guard_acquire(pbVar19);
        puVar15 = (uint *)PTR_DAT_04bb3120;
        if (iVar12 != 0) {
          FUN_00706e58(PTR_DAT_04bb3120);
          __cxa_guard_release(pbVar19);
          puVar15 = (uint *)PTR_DAT_04bb3120;
        }
      }
      uVar13 = (uint)uVar17;
      if (*puVar15 <= uVar13) {
        uVar13 = 0;
      }
      local_80[0] = (ushort)uVar16 & 0x7f |
                    (ushort)(*(int *)(*(long *)(puVar15 + 2) + (long)(int)uVar13 * 4) << 0xb) |
                    0x100;
      FUN_007ef010(auStack_1722,local_80);
      FUN_007e4920(local_1720,auStack_1722);
      FUN_007e80d0(local_1720);
      uStack_1734 = *(undefined4 *)(PTR_DAT_04bbbf90 + 0xd0);
      local_1738 = 0x32;
      local_1740 = puVar1;
      local_1730 = FUN_017baf44();
      local_1730 = local_1730 & 1;
      puVar15 = (uint *)PTR_DAT_04bb3120;
      local_1740 = puVar2;
      if (local_1738 == 0) {
        local_1768 = (undefined *)((ulong)local_1768._4_4_ << 0x20);
LAB_014b070c:
        plVar14 = (long *)(*(long *)PTR_DAT_04bb27a8 + 0x1f8);
      }
      else {
        local_1790 = (undefined *)CONCAT44(local_1790._4_4_,local_1738);
        if (local_1738 == 0) goto LAB_014b05b8;
        local_1768 = (undefined *)CONCAT44(local_1768._4_4_,local_1738);
        if (local_1738 == 0) goto LAB_014b070c;
        plVar5 = (long *)(*(long *)PTR_DAT_04bb27a8 + 0x30);
        plVar14 = plVar5 + local_1738;
        if (0x38 < local_1738) {
          plVar14 = plVar5;
        }
      }
      if (*plVar14 != 0) {
        local_1748 = 0;
        local_1758 = 0;
        local_1780 = 0;
        uStack_1770 = 0;
        local_1790 = puVar3;
        puStack_1788 = puVar4;
        local_1778 = puVar4;
        local_1768 = puVar3;
        puStack_1760 = puVar4;
        local_1750 = puVar4;
        FUN_00924fe8(&local_1768,&local_1790,uVar16 & 0xffffffff);
        iVar11 = (int)local_1758;
        iVar12 = local_1748._4_4_ + 1;
        local_17b0 = &puStack_1760;
        local_17a8 = &local_1750;
        local_17a0 = puVar4;
        local_1798 = (int)local_1758;
        local_1794 = local_1758._4_4_;
        while (iVar12 != local_1794) {
          do {
            local_17c0 = puVar8 + 0x10;
            uStack_17b8 = 0;
            FUN_01a5033c(auStack_17c8,&local_1740,0,&local_17a0,&local_17c0);
            lVar20 = *(long *)puVar10;
            uVar13 = FUN_0277d6c4(auStack_17c8);
            if (*(long *)puVar10 != 0) {
              lVar20 = *(long *)(lVar20 + 0x57e58);
              uVar13 = (uVar13 & 0xffff) - (uint)*(ushort *)(lVar20 + 0x1f8);
              if ((uVar13 < *(uint *)(lVar20 + 0x1d8)) &&
                 (*(long *)(*(long *)(lVar20 + 0x1e0) + (long)(int)uVar13 * 8) != 0)) {
                uVar17 = FUN_01a4f798(&local_1740,0,&local_17c0);
                if ((uVar17 & 1) != 0) {
                  if (local_1738 == 0) {
LAB_014b0850:
                    plVar14 = (long *)(*(long *)PTR_DAT_04bb27a8 + 0x1f8);
LAB_014b0854:
                    lVar20 = *plVar14;
                  }
                  else {
                    local_70 = local_1738;
                    if (local_1738 != 0) {
                      if (local_1738 == 0) goto LAB_014b0850;
                      plVar5 = (long *)(*(long *)PTR_DAT_04bb27a8 + 0x30);
                      plVar14 = plVar5 + local_1738;
                      if (0x38 < local_1738) {
                        plVar14 = plVar5;
                      }
                      goto LAB_014b0854;
                    }
                    lVar20 = 0;
                  }
                  local_6c = 0;
                  if (*(long *)(lVar20 + 0xd0) != 0) {
                    FUN_012e5af4(*(long *)(lVar20 + 0xd0),&local_17c0);
                  }
                }
                FUN_014fd424(&local_1740,0,&local_17c0,0);
              }
            }
            if (local_1798 < *(int *)(local_17a8 + 1)) {
              local_1798 = local_1798 + 1;
            }
            else {
              local_1794 = local_1794 + 1;
              local_1798 = *(int *)(local_17b0 + 1);
            }
          } while (iVar11 != local_1798);
        }
        FUN_0253aa40(*(undefined8 *)PTR_DAT_04bb4718,&local_1768);
        puVar15 = (uint *)PTR_DAT_04bb3120;
        pbVar19 = PTR_DAT_04bb3128;
      }
    }
LAB_014b05b8:
    uVar16 = uVar16 + 1;
    if (uVar16 == 8) {
      return;
    }
  } while( true );
}

