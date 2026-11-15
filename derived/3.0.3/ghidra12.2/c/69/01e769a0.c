
/* WARNING: Removing unreachable block (ram,0x01e769ec) */
/* WARNING: Removing unreachable block (ram,0x01e769dc) */
/* WARNING: Removing unreachable block (ram,0x01e769f8) */
/* WARNING: Removing unreachable block (ram,0x01e76c60) */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

uint FUN_01e769a0(long param_1)

{
  int iVar1;
  int iVar2;
  undefined **ppuVar3;
  undefined **ppuVar4;
  long lVar5;
  int iVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined *puVar10;
  uint uVar11;
  ulong uVar12;
  short *psVar13;
  int iVar14;
  long lVar15;
  long lVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  undefined **local_e8;
  int local_e0;
  int local_dc;
  undefined **local_d8;
  undefined **ppuStack_d0;
  int local_c8;
  int iStack_c4;
  undefined **local_c0;
  int local_b8;
  int iStack_b4;
  undefined *local_b0;
  undefined *puStack_a8;
  int local_a0;
  int iStack_9c;
  undefined *local_98;
  int local_90;
  int iStack_8c;
  undefined **local_88;
  undefined **local_80;
  undefined8 local_78;
  undefined8 local_70;
  int local_68;
  int iStack_64;
  
  puVar10 = PTR_DAT_04bbc1a0;
  puVar7 = PTR_DAT_04bb2010;
  lVar15 = *(long *)(*(long *)PTR_DAT_04bb27a8 + 0x1f8);
  if (lVar15 != 0) {
    local_88 = &puStack_a8;
    local_80 = &local_98;
    lVar16 = *(long *)(*(long *)(param_1 + 8) + 0x68);
    local_b0 = PTR_DAT_04bbc1a0 + 0x10;
    puStack_a8 = PTR_DAT_04bb2010 + 0x10;
    fVar17 = *(float *)(lVar16 + 0x278) + -12.5;
    fVar18 = *(float *)(lVar16 + 0x280) + -12.5;
    iVar6 = (int)((float)(int)fVar17 / 5.0) - (uint)(fVar17 < 0.0);
    local_90 = iVar6 + 5;
    iStack_9c = (int)((float)(int)fVar18 / 5.0) - (uint)(fVar18 < 0.0);
    iStack_8c = iStack_9c + 5;
    iVar1 = iStack_9c + 6;
    local_70 = (undefined **)CONCAT44(iStack_9c,iVar6);
    local_a0 = iVar6;
    local_98 = puStack_a8;
    local_78 = puStack_a8;
    do {
      uVar12 = FUN_0097abd0(&local_78,1);
      puVar9 = PTR_DAT_04bb37e0;
      puVar8 = PTR_DAT_04bb27c8;
      if ((uVar12 & 1) != 0) goto LAB_01e76c00;
      if ((int)local_70 < *(int *)(local_80 + 1)) {
        iVar2 = (int)local_70 + 1;
        iVar14 = local_70._4_4_;
      }
      else {
        iVar14 = local_70._4_4_ + 1;
        iVar2 = *(int *)(local_88 + 1);
        local_70 = (undefined **)CONCAT44(iVar14,(int)local_70);
      }
      local_70 = (undefined **)CONCAT44(local_70._4_4_,iVar2);
    } while (iVar6 != iVar2 || iVar1 != iVar14);
    ppuVar3 = (undefined **)(puVar10 + 0x10);
    ppuVar4 = (undefined **)(puVar7 + 0x10);
    fVar20 = *(float *)(lVar16 + 0x278) + -5.0;
    fVar19 = *(float *)(lVar16 + 0x280) + -5.0;
    fVar17 = *(float *)(lVar16 + 0x278) + 5.0;
    fVar18 = *(float *)(lVar16 + 0x280) + 5.0;
    local_b8 = (int)((float)(int)fVar20 / 5.0) - (uint)(fVar20 < 0.0);
    iStack_b4 = (int)((float)(int)fVar19 / 5.0) - (uint)(fVar19 < 0.0);
    iVar6 = (int)((float)(int)fVar17 / 5.0) - (uint)(fVar17 < 0.0);
    iVar1 = local_b8;
    if (iVar6 <= local_b8) {
      iVar1 = iVar6;
    }
    if (local_b8 <= iVar6) {
      local_b8 = iVar6;
    }
    iVar6 = (int)((float)(int)fVar18 / 5.0) - (uint)(fVar18 < 0.0);
    local_dc = iStack_b4;
    if (iVar6 <= iStack_b4) {
      local_dc = iVar6;
    }
    if (iStack_b4 <= iVar6) {
      iStack_b4 = iVar6;
    }
    iVar6 = iStack_b4 + 1;
    local_e8 = ppuVar4;
    local_e0 = iVar1;
    local_d8 = ppuVar3;
    ppuStack_d0 = ppuVar4;
    local_c8 = iVar1;
    iStack_c4 = local_dc;
    local_c0 = ppuVar4;
    if (iVar6 != local_dc) {
      do {
        local_88 = (undefined **)((ulong)local_88 & 0xffffffff00000000);
        lVar16 = *(long *)(lVar15 + 0xd0);
        if (lVar16 == 0) {
          psVar13 = (short *)puVar9;
        }
        else {
          lVar5 = lVar16 + 0x130 + (ulong)*(uint *)(lVar16 + 0x198) * 0x30;
          if (1 < *(uint *)(lVar16 + 0x198)) {
            lVar5 = lVar16 + 0x130;
          }
          psVar13 = (short *)FUN_012eb21c(lVar5,&local_e8,0);
        }
        if (*psVar13 != -2) goto LAB_01e76c00;
        local_78 = (undefined *)CONCAT44(local_dc,local_e0);
        local_68 = local_e0;
        iStack_64 = local_dc;
        if (((*(long *)puVar8 == 0) || (lVar16 = *(long *)(*(long *)puVar8 + 0xa8), lVar16 == 0)) ||
           (local_88 = ppuVar3, local_80 = ppuVar4, local_70 = ppuVar4,
           uVar12 = FUN_00971f80(lVar16,&local_88,0), (uVar12 & 1) == 0)) goto LAB_01e76c00;
        if (local_e0 < local_b8) {
          local_e0 = local_e0 + 1;
        }
        else {
          local_dc = local_dc + 1;
          local_e0 = local_c8;
        }
      } while ((iVar1 != local_e0) || (iVar6 != local_dc));
    }
    uVar12 = FUN_021e7c50(&local_b0);
    if ((uVar12 & 1) == 0) {
      uVar11 = FUN_021e7c50(&local_d8);
      uVar11 = uVar11 ^ 1;
      goto LAB_01e76c04;
    }
  }
LAB_01e76c00:
  uVar11 = 0;
LAB_01e76c04:
  return uVar11 & 1;
}

