
/* WARNING: Removing unreachable block (ram,0x01fa69d0) */
/* WARNING: Removing unreachable block (ram,0x01fa69c0) */
/* WARNING: Removing unreachable block (ram,0x01fa6b20) */

void FUN_01fa67e4(long *param_1,long param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  long *plVar3;
  long lVar4;
  ushort uVar5;
  int iVar6;
  int iVar7;
  undefined *puVar8;
  undefined *puVar9;
  int iVar10;
  uint uVar11;
  undefined8 *puVar12;
  ulong uVar13;
  short *psVar14;
  long lVar15;
  long lVar16;
  int *piVar17;
  long *plVar18;
  int iVar19;
  undefined4 uVar20;
  undefined4 local_104;
  undefined *local_100;
  undefined *puStack_f8;
  undefined8 local_f0;
  undefined *local_e8;
  undefined8 local_e0;
  undefined *local_d8;
  short local_d0;
  undefined1 local_ce;
  undefined1 local_cd;
  undefined4 local_cc;
  long local_c8;
  undefined *local_c0;
  undefined8 local_b8;
  undefined *puStack_b0;
  int local_a8;
  int iStack_a4;
  undefined8 local_a0;
  float local_98;
  undefined *local_90;
  undefined *puStack_88;
  undefined8 local_80;
  undefined *local_78;
  undefined8 uStack_70;
  
  puVar8 = PTR_DAT_04bb2720;
  if (*(long *)PTR_DAT_04bb5ce0 == 0) {
    return;
  }
  lVar15 = *(long *)PTR_DAT_04bb2720;
  if (lVar15 == 0) {
    return;
  }
  if (*(long *)(lVar15 + 0x330) == 0) {
    return;
  }
  puVar12 = (undefined8 *)
            (**(code **)(**(long **)PTR_DAT_04bb2640 + 0x18))
                      (*(long **)PTR_DAT_04bb2640,*(undefined4 *)(lVar15 + 0x338));
  iVar10 = FUN_006bd550(*puVar12,0);
  if (iVar10 != 0x758f7eaf) {
    return;
  }
  if (*(long *)puVar8 == 0) {
    return;
  }
  lVar15 = *(long *)(*(long *)puVar8 + 0x330);
  if (lVar15 == 0) {
    return;
  }
  if (*(int *)(lVar15 + 0x244) == 0) {
    return;
  }
  plVar3 = param_1 + 0xef6;
  if ((*(int *)((long)param_1 + 0x77f4) == 0x10) || ((int)*plVar3 == 0x10)) {
LAB_01fa69d8:
    uVar11 = *(uint *)(param_1 + 0x15f6);
    if ((uVar11 >> 0x14 & 1) != 0) {
      return;
    }
    if ((int)*plVar3 == 0x3c) goto LAB_01fa6a0c;
LAB_01fa69ec:
    (**(code **)(*param_1 + 0x38))(param_1,0x3c,0,0);
  }
  else {
    local_90 = (undefined *)CONCAT44(local_90._4_4_,0x13);
    if ((*(int *)(param_1[2] + 0x360) == 0x13) ||
       (local_90 = (undefined *)CONCAT44(local_90._4_4_,0x13), *(int *)(param_1[2] + 0x378) == 0x13)
       ) goto LAB_01fa69d8;
    plVar18 = *(long **)(param_1[1] + 0x60);
    if (plVar18 == (long *)0x0) {
      if ((DAT_052461c0 & 1) == 0) {
        iVar10 = __cxa_guard_acquire(&DAT_052461c0);
        plVar18 = &DAT_05240280;
        if (iVar10 != 0) {
          FUN_016fcf10(&DAT_05240280);
          FUN_001001d0(PTR_FUN_04bbdea8,&DAT_05240280,&__DT_FINI_ARRAY);
          __cxa_guard_release(&DAT_052461c0);
        }
      }
      else {
        plVar18 = &DAT_05240280;
      }
    }
    uVar13 = (**(code **)(*plVar18 + 0x100))(plVar18);
    puVar8 = PTR_DAT_04bbc1a0;
    if ((uVar13 & 1) == 0) goto LAB_01fa69d8;
    if (*(int *)(param_2 + 4) != 0) {
      local_90 = PTR_DAT_04bbc1a0 + 0x10;
      puStack_88 = PTR_DAT_04bb2010 + 0x10;
      uStack_70 = 0;
      local_80 = 0;
      local_78 = puStack_88;
      FUN_01811430(&local_90);
      iVar10 = *(int *)(param_2 + 4);
      if (iVar10 < 0) {
        iVar10 = iVar10 + 1;
      }
      iVar10 = iVar10 >> 1;
      uStack_70 = CONCAT44(uStack_70._4_4_ - iVar10,(undefined4)uStack_70);
      local_80 = CONCAT44(local_80._4_4_ - iVar10,(undefined4)local_80);
      local_a0 = *(undefined8 *)(*(long *)(param_1[1] + 0x68) + 0x278);
      local_98 = *(float *)(*(long *)(param_1[1] + 0x68) + 0x280);
      uVar13 = FUN_012e2100(&local_90,&local_a0);
      puVar9 = PTR_DAT_04bb43c0;
      if ((uVar13 & 1) != 0) {
        local_98 = local_98 + (float)iVar10 * 5.0;
        lVar15 = *(long *)(*(long *)PTR_DAT_04bb27a8 + 0x1f8);
        local_100 = (undefined *)((ulong)local_100 & 0xffffffff00000000);
        puVar1 = PTR_DAT_04bc0510 + 0x10;
        puVar2 = PTR_DAT_04bb2010 + 0x10;
        iVar6 = (int)((float)(int)(local_98 + -2.5) / 5.0) - (uint)(local_98 + -2.5 < 0.0);
        iVar7 = (int)((float)(int)((float)local_a0 + -2.5) / 5.0) -
                (uint)((float)local_a0 + -2.5 < 0.0);
        iVar10 = iVar6;
        iVar19 = iVar7;
        do {
          local_b8 = 0;
          lVar16 = *(long *)(lVar15 + 0xd0);
          local_c0 = puVar2;
          puStack_b0 = puVar2;
          local_a8 = iVar19;
          iStack_a4 = iVar10;
          if (lVar16 == 0) {
            psVar14 = (short *)PTR_DAT_04bb37e0;
          }
          else {
            lVar4 = lVar16 + 0x130 + (ulong)*(uint *)(lVar16 + 0x198) * 0x30;
            if (1 < *(uint *)(lVar16 + 0x198)) {
              lVar4 = lVar16 + 0x130;
            }
            psVar14 = (short *)FUN_012eb21c(lVar4,&puStack_b0,&local_c0);
          }
          if (*psVar14 != -2) {
            lVar16 = *(long *)puVar9;
            local_d0 = *psVar14;
            local_ce = (undefined1)psVar14[1];
            local_cd = *(undefined1 *)((long)psVar14 + 3);
            local_cc = *(undefined4 *)(psVar14 + 2);
            local_c8 = 0;
            local_d8 = puVar1;
            uVar11 = FUN_0277d6c4(&local_d0);
            if (*(long *)puVar9 != 0) {
              lVar16 = *(long *)(lVar16 + 0x57e58);
              uVar11 = (uVar11 & 0xffff) - (uint)*(ushort *)(lVar16 + 0x1f8);
              if ((uVar11 < *(uint *)(lVar16 + 0x1d8)) &&
                 (*(long *)(*(long *)(lVar16 + 0x1e0) + (long)(int)uVar11 * 8) != 0)) {
                lVar16 = *(long *)PTR_DAT_04bc0428;
                uVar11 = FUN_0277d6c4(psVar14);
                uVar11 = (uVar11 & 0xffff) - (uint)*(ushort *)(lVar16 + 0x1f8);
                if ((uVar11 < *(uint *)(lVar16 + 0x1d8)) &&
                   (lVar16 = *(long *)(*(long *)(lVar16 + 0x1e0) + (long)(int)uVar11 * 8),
                   lVar16 != 0)) {
                  local_c8 = lVar16;
                }
              }
            }
            uVar13 = FUN_01ae6020(&local_d8);
            if ((uVar13 & 1) != 0) {
              local_f0 = 0;
              puStack_f8 = PTR_DAT_04bb2010 + 0x10;
              local_e0 = 0;
              local_100 = puVar8 + 0x10;
              local_e8 = puStack_f8;
              FUN_0277f02c(psVar14,&local_100);
              local_f0._0_4_ = (int)local_f0 + (int)local_b8;
              local_f0._4_4_ = local_f0._4_4_ + local_b8._4_4_;
              local_e0._0_4_ = (int)local_e0 + (int)local_b8;
              local_e0._4_4_ = local_e0._4_4_ + local_b8._4_4_;
              if ((((iVar7 <= (int)local_e0) && ((int)local_f0 <= iVar7 + 1)) &&
                  (iVar6 <= local_e0._4_4_)) && (local_f0._4_4_ <= iVar6 + 1)) goto LAB_01fa6d80;
            }
          }
          if (iVar19 < iVar7 + 1) {
            iVar19 = iVar19 + 1;
          }
          else {
            iVar10 = iVar10 + 1;
            iVar19 = iVar7;
          }
          if ((iVar7 == iVar19) && (iVar6 + 2 == iVar10)) {
            uVar20 = FUN_0097a900(&local_a0,0);
            local_a0 = CONCAT44(uVar20,(float)local_a0);
            local_104 = *(undefined4 *)(*(long *)(param_1[1] + 0x68) + 0x2b4);
            FUN_01e39778(param_1[1],&local_a0,&local_104,0);
            return;
          }
        } while( true );
      }
    }
    lVar15 = *(long *)PTR_DAT_04bb4e28;
    uVar11 = *(uint *)(lVar15 + 0x123c8);
    if (uVar11 == 0xffffffff) {
      piVar17 = (int *)PTR_DAT_04bb3238;
    }
    else {
      if (uVar11 < *(uint *)(lVar15 + 0xe0)) {
        lVar15 = *(long *)(*(long *)(lVar15 + 0xe8) + (long)(int)uVar11 * 8);
      }
      else {
        lVar15 = 0;
      }
      piVar17 = (int *)(lVar15 + 8);
    }
    if (*(int *)(param_1[1] + 0x230) == *piVar17) {
      if ((*(ushort **)PTR_DAT_04bc3a48 == (ushort *)0x0) ||
         (uVar5 = **(ushort **)PTR_DAT_04bc3a48, (uVar5 & 1) == 0)) {
        if (*(int *)(*(long *)PTR_DAT_04bb27f8 + 0x10) == 1) {
          return;
        }
      }
      else if (((uVar5 ^ 0xffff) & 3) == 0) {
        return;
      }
    }
    uVar13 = FUN_01fa6ed8(param_1);
    if ((uVar13 & 1) != 0) {
      return;
    }
LAB_01fa6d80:
    if ((int)*plVar3 != 0x3c) goto LAB_01fa69ec;
  }
  uVar11 = *(uint *)(param_1 + 0x15f6);
LAB_01fa6a0c:
  *(uint *)(param_1 + 0x15f6) = uVar11 | 0x100000;
  return;
}

