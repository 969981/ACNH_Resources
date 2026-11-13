
/* WARNING: Removing unreachable block (ram,0x014b0d14) */

void FUN_014b09c0(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  long *plVar5;
  undefined2 *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined *puVar10;
  int iVar11;
  uint uVar12;
  int iVar13;
  long *plVar14;
  ulong uVar15;
  long lVar16;
  uint *puVar17;
  ulong uVar18;
  undefined1 auStack_17c0 [8];
  undefined *local_17b8;
  undefined8 uStack_17b0;
  undefined **local_17a8;
  undefined **local_17a0;
  undefined *local_1798;
  int local_1790;
  int local_178c;
  undefined *local_1788;
  undefined *puStack_1780;
  undefined8 local_1778;
  undefined *local_1770;
  undefined8 uStack_1768;
  undefined8 local_1760;
  undefined *puStack_1758;
  undefined8 local_1750;
  undefined *local_1748;
  undefined8 local_1740;
  undefined *local_1738;
  uint local_1730;
  undefined4 uStack_172c;
  byte local_1728;
  undefined1 auStack_171a [2];
  undefined1 auStack_1718 [5796];
  ushort local_74 [2];
  uint local_70;
  undefined4 local_6c;
  
  puVar10 = PTR_DAT_04bb43c0;
  puVar8 = PTR_DAT_04bb3128;
  puVar7 = PTR_DAT_04bb2010;
  uVar15 = 0;
  puVar1 = PTR_DAT_04bbfe68 + 0x10;
  puVar2 = PTR_DAT_04bb5438 + 0x10;
  puVar3 = PTR_DAT_04bbc1a0 + 0x10;
  puVar4 = PTR_DAT_04bb2010 + 0x10;
  puVar17 = (uint *)PTR_DAT_04bb3120;
  do {
    puVar9 = PTR_DAT_04bb37e0;
    puVar6 = (undefined2 *)(param_1 + uVar15 * 8);
    *puVar6 = *(undefined2 *)PTR_DAT_04bb37e0;
    *(undefined *)(puVar6 + 1) = puVar9[2];
    *(undefined *)((long)puVar6 + 3) = puVar9[3];
    *(undefined4 *)(puVar6 + 2) = *(undefined4 *)(puVar9 + 4);
    if (((*puVar8 & 1) == 0) && (iVar13 = __cxa_guard_acquire(puVar8), iVar13 != 0)) {
      FUN_00706e58(puVar17);
      __cxa_guard_release(puVar8);
    }
    if (0 < (int)*puVar17) {
      uVar18 = 0;
      do {
        if (*(int *)(*(long *)(puVar17 + 2) + uVar18 * 4) == 0x1a) goto LAB_014b0af0;
        uVar18 = uVar18 + 1;
      } while (*puVar17 != uVar18);
    }
    uVar18 = 0;
LAB_014b0af0:
    local_74[0] = 0;
    if (((*puVar8 & 1) == 0) && (iVar13 = __cxa_guard_acquire(puVar8), iVar13 != 0)) {
      FUN_00706e58(puVar17);
      __cxa_guard_release(puVar8);
    }
    uVar12 = (uint)uVar18;
    if (*puVar17 <= uVar12) {
      uVar12 = 0;
    }
    local_74[0] = (ushort)uVar15 & 0x7f |
                  (ushort)(*(int *)(*(long *)(puVar17 + 2) + (long)(int)uVar12 * 4) << 0xb) | 0x100;
    FUN_007ef010(auStack_171a,local_74);
    FUN_007e4920(auStack_1718,auStack_171a);
    FUN_007e80d0(auStack_1718);
    uStack_172c = *(undefined4 *)(PTR_DAT_04bbbf90 + 0xd0);
    local_1730 = 0x32;
    local_1738 = puVar1;
    local_1728 = FUN_017baf44();
    local_1728 = local_1728 & 1;
    local_1738 = puVar2;
    if (local_1730 == 0) {
      local_1760 = (undefined *)((ulong)local_1760._4_4_ << 0x20);
LAB_014b0bc0:
      plVar14 = (long *)(*(long *)PTR_DAT_04bb27a8 + 0x1f8);
LAB_014b0bc4:
      if (*plVar14 != 0) {
        local_1750 = 0;
        local_1740 = 0;
        local_1778 = 0;
        uStack_1768 = 0;
        local_1788 = puVar3;
        puStack_1780 = puVar4;
        local_1770 = puVar4;
        local_1760 = puVar3;
        puStack_1758 = puVar4;
        local_1748 = puVar4;
        FUN_00924fe8(&local_1760,&local_1788,uVar15 & 0xffffffff);
        iVar11 = (int)local_1750;
        iVar13 = local_1740._4_4_ + 1;
        local_17a8 = &puStack_1758;
        local_17a0 = &local_1748;
        local_1798 = puVar4;
        local_1790 = (int)local_1750;
        local_178c = local_1750._4_4_;
        puVar17 = (uint *)PTR_DAT_04bb3120;
        while (PTR_DAT_04bb3120 = (undefined *)puVar17, iVar13 != local_178c) {
          do {
            local_17b8 = puVar7 + 0x10;
            uStack_17b0 = 0;
            FUN_01a5033c(auStack_17c0,&local_1738,0,&local_1798,&local_17b8);
            lVar16 = *(long *)puVar10;
            uVar12 = FUN_0277d6c4(auStack_17c0);
            if (*(long *)puVar10 != 0) {
              lVar16 = *(long *)(lVar16 + 0x57e58);
              uVar12 = (uVar12 & 0xffff) - (uint)*(ushort *)(lVar16 + 0x1f8);
              if ((uVar12 < *(uint *)(lVar16 + 0x1d8)) &&
                 (*(long *)(*(long *)(lVar16 + 0x1e0) + (long)(int)uVar12 * 8) != 0)) {
                uVar18 = FUN_01a4f798(&local_1738,0,&local_17b8);
                if ((uVar18 & 1) != 0) {
                  if (local_1730 == 0) {
LAB_014b0cf0:
                    plVar14 = (long *)(*(long *)PTR_DAT_04bb27a8 + 0x1f8);
LAB_014b0cf4:
                    lVar16 = *plVar14;
                  }
                  else {
                    local_70 = local_1730;
                    if (local_1730 != 0) {
                      if (local_1730 == 0) goto LAB_014b0cf0;
                      plVar5 = (long *)(*(long *)PTR_DAT_04bb27a8 + 0x30);
                      plVar14 = plVar5 + local_1730;
                      if (0x38 < local_1730) {
                        plVar14 = plVar5;
                      }
                      goto LAB_014b0cf4;
                    }
                    lVar16 = 0;
                  }
                  local_6c = 0;
                  if (*(long *)(lVar16 + 0xd0) != 0) {
                    FUN_012e5af4(*(long *)(lVar16 + 0xd0),&local_17b8);
                  }
                }
                FUN_014fd424(&local_1738,0,&local_17b8,0);
              }
            }
            if (local_1790 < *(int *)(local_17a0 + 1)) {
              local_1790 = local_1790 + 1;
            }
            else {
              local_178c = local_178c + 1;
              local_1790 = *(int *)(local_17a8 + 1);
            }
            puVar17 = (uint *)PTR_DAT_04bb3120;
          } while (iVar11 != local_1790);
        }
      }
    }
    else {
      local_1788 = (undefined *)CONCAT44(local_1788._4_4_,local_1730);
      if (local_1730 != 0) {
        local_1760 = (undefined *)CONCAT44(local_1760._4_4_,local_1730);
        if (local_1730 == 0) goto LAB_014b0bc0;
        plVar5 = (long *)(*(long *)PTR_DAT_04bb27a8 + 0x30);
        plVar14 = plVar5 + local_1730;
        if (0x38 < local_1730) {
          plVar14 = plVar5;
        }
        goto LAB_014b0bc4;
      }
    }
    uVar15 = uVar15 + 1;
    if (uVar15 == 8) {
      return;
    }
  } while( true );
}

