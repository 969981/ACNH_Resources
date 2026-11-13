
void FUN_0137cab0(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined4 *puVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  uint uVar11;
  int iVar12;
  int iVar13;
  long lVar14;
  undefined8 *puVar15;
  int iVar16;
  int iVar17;
  long lVar18;
  float fVar19;
  float fVar20;
  undefined *local_118;
  undefined8 local_110;
  undefined8 local_108;
  undefined *local_100;
  undefined8 local_f8;
  undefined *local_f0;
  undefined4 local_e8;
  undefined4 uStack_e4;
  undefined4 local_e0;
  undefined4 uStack_dc;
  undefined *local_d8;
  undefined8 local_d0;
  undefined8 local_c8;
  int local_c0;
  int local_bc;
  undefined *local_b8;
  undefined4 local_b0;
  undefined4 local_ac;
  byte local_a8;
  int local_9c;
  
  local_b0 = 0;
  local_b8 = PTR_DAT_04bbfe68 + 0x10;
  lVar14 = *(long *)PTR_DAT_04bb2720;
  if (lVar14 == 0) {
    puVar15 = &DAT_055c04a0;
  }
  else {
    puVar15 = &DAT_055c04a0;
    if (*(long *)(lVar14 + 0x330) != 0) {
      puVar15 = (undefined8 *)
                (**(code **)(**(long **)PTR_DAT_04bb2640 + 0x18))
                          (*(long **)PTR_DAT_04bb2640,*(undefined4 *)(lVar14 + 0x338));
      iVar10 = FUN_006bd550(*puVar15,0);
      puVar15 = (undefined8 *)PTR_DAT_04bc3a80;
      if (iVar10 != 0x758f7eaf) {
        puVar15 = &DAT_055c04a0;
      }
    }
  }
  local_ac = *(undefined4 *)(puVar15 + 7);
  local_a8 = FUN_017baf44();
  local_a8 = local_a8 & 1;
  iVar16 = *(int *)(param_1 + 0x164);
  iVar10 = *(int *)(param_1 + 0x174) + 1;
  if (iVar10 != iVar16) {
    iVar7 = *(int *)(param_1 + 0x160);
    puVar1 = PTR_DAT_04bc35c0 + 0x10;
    puVar2 = PTR_DAT_04bb2010 + 0x10;
    puVar3 = PTR_DAT_04bbc1a0 + 0x10;
    puVar4 = PTR_DAT_04bc0510 + 0x10;
    iVar17 = iVar7;
    iVar13 = iVar7;
    do {
      uVar11 = iVar16 - *(int *)(param_1 + 0x164);
      local_d0 = 0;
      puVar6 = (undefined4 *)(param_1 + 0x30);
      if (uVar11 < 3 && (uint)(iVar17 - iVar13) < 3) {
        puVar6 = (undefined4 *)(param_1 + 0x30) + (ulong)(uVar11 * 3 + (iVar17 - iVar13)) * 8;
      }
      fVar19 = (float)iVar17 * 10.0 + 2.5;
      fVar20 = (float)iVar16 * 10.0 + 2.5;
      iVar13 = (int)((float)(int)fVar19 / 5.0) - (uint)(fVar19 < 0.0);
      iVar9 = (int)((float)(int)fVar20 / 5.0) - (uint)(fVar20 < 0.0);
      local_d8 = puVar2;
      local_c8 = puVar2;
      local_c0 = iVar13;
      local_bc = iVar9;
      FUN_01a5033c(&local_e0,&local_b8,0,&local_c8,&local_d8);
      puVar5 = PTR_DAT_04bb43c0;
      if ((local_c0 == (int)local_d0) && (local_bc == local_d0._4_4_)) {
        lVar18 = *(long *)PTR_DAT_04bb43c0;
        uVar11 = FUN_0277d6c4(&local_e0);
        lVar14 = *(long *)puVar5;
        if (lVar14 == 0) {
LAB_0137cdc0:
          lVar14 = *(long *)PTR_DAT_04bbbc68;
          if (((lVar14 != 0) &&
              (((*(long *)(lVar14 + 0xb0) != 0 && (*(long *)(*(long *)(lVar14 + 0xb0) + 8) != 0)) &&
               (*(long *)(lVar14 + 0x488) != 0)))) &&
             (((*(long *)(*(long *)(lVar14 + 0x488) + 8) != 0 && (*(long *)(lVar14 + 0x2b0) != 0))
              && (*(long *)(*(long *)(lVar14 + 0x2b0) + 8) != 0)))) {
            uVar11 = FUN_0277d6c4(&local_e0);
            uVar11 = (uVar11 & 0xffff) - (uint)*(ushort *)(lVar14 + 0x1f8);
            if ((uVar11 < *(uint *)(lVar14 + 0x1d8)) &&
               (*(long *)(*(long *)(lVar14 + 0x1e0) + (long)(int)uVar11 * 8) != 0))
            goto LAB_0137ced4;
          }
          local_118 = puVar1;
          iVar12 = FUN_0277d6c4(&local_110);
          if (iVar12 - 0xf619U < 7) {
            local_f0 = PTR_DAT_04bc35c0 + 0x10;
            local_108 = 0;
            local_e8 = local_e0;
            uStack_e4 = uStack_dc;
            local_110 = PTR_DAT_04bb2010 + 0x10;
            local_f8 = 0;
            local_118 = puVar3;
            local_100 = local_110;
            FUN_0263fe7c(&local_f0,&local_118);
            if ((int)local_f8 - (int)local_108 == 1) {
              if (local_f8._4_4_ - local_108._4_4_ == 1) {
                local_9c = 0;
                goto LAB_0137ced4;
              }
            }
          }
        }
        else {
          lVar18 = *(long *)(lVar18 + 0x57e58);
          uVar11 = (uVar11 & 0xffff) - (uint)*(ushort *)(lVar18 + 0x1f8);
          if ((*(uint *)(lVar18 + 0x1d8) <= uVar11) ||
             (*(long *)(*(long *)(lVar18 + 0x1e0) + (long)(int)uVar11 * 8) == 0)) goto LAB_0137cdc0;
          local_108 = 0;
          local_118 = puVar4;
          uVar11 = FUN_0277d6c4(&local_110);
          if (*(long *)PTR_DAT_04bb43c0 != 0) {
            lVar14 = *(long *)(lVar14 + 0x57e58);
            uVar11 = (uVar11 & 0xffff) - (uint)*(ushort *)(lVar14 + 0x1f8);
            if ((uVar11 < *(uint *)(lVar14 + 0x1d8)) &&
               (*(long *)(*(long *)(lVar14 + 0x1e0) + (long)(int)uVar11 * 8) != 0)) {
              lVar14 = *(long *)PTR_DAT_04bc0428;
              uVar11 = FUN_0277d6c4(&local_e0);
              uVar11 = (uVar11 & 0xffff) - (uint)*(ushort *)(lVar14 + 0x1f8);
              if (uVar11 < *(uint *)(lVar14 + 0x1d8)) {
                lVar14 = *(long *)(*(long *)(lVar14 + 0x1e0) + (long)(int)uVar11 * 8);
                if (lVar14 != 0) {
                  local_108 = lVar14;
                }
              }
            }
          }
          local_f0 = (undefined *)((ulong)local_f0 & 0xffffffff00000000);
          local_9c = FUN_01aee3b4(&local_118);
          if (local_9c != (int)local_f0) goto LAB_0137cf30;
          local_f0 = (undefined *)((ulong)local_f0 & 0xffffffff00000000);
LAB_0137ced4:
          iVar12 = *(int *)(param_1 + 0x28);
          if ((iVar12 <= iVar17) && (iVar17 <= iVar12 + 3)) {
            iVar8 = *(int *)(param_1 + 0x2c);
            if ((iVar8 <= iVar16) &&
               (((iVar16 <= iVar8 + 3 && ((uint)(iVar17 - iVar12) < 3)) &&
                ((uint)(iVar16 - iVar8) < 3)))) {
              *(uint *)(param_1 + 0x18) =
                   *(uint *)(param_1 + 0x18) |
                   1 << (ulong)((iVar16 - iVar8) * 3 + (iVar17 - iVar12) & 0x1f);
            }
          }
        }
      }
LAB_0137cf30:
      *puVar6 = local_e0;
      puVar6[1] = uStack_dc;
      fVar19 = (float)iVar17 * 10.0 + 10.0 + -2.5;
      puVar5 = PTR_DAT_04bb2010 + 0x10;
      iVar12 = (int)((float)(int)fVar19 / 5.0) - (uint)(fVar19 < 0.0);
      local_110 = (undefined *)CONCAT44(iVar9,iVar12);
      local_118 = puVar5;
      FUN_01a5033c(&local_c8,&local_b8,0,&local_118,0);
      puVar6[2] = (undefined4)local_c8;
      puVar6[3] = local_c8._4_4_;
      fVar19 = (float)iVar16 * 10.0 + 10.0 + -2.5;
      iVar9 = (int)((float)(int)fVar19 / 5.0) - (uint)(fVar19 < 0.0);
      local_110 = (undefined *)CONCAT44(iVar9,iVar12);
      local_118 = puVar5;
      FUN_01a5033c(&local_c8,&local_b8,0,&local_118,0);
      local_110 = (undefined *)CONCAT44(iVar9,iVar13);
      puVar6[4] = (undefined4)local_c8;
      puVar6[5] = local_c8._4_4_;
      local_118 = puVar5;
      FUN_01a5033c(&local_c8,&local_b8,0,&local_118,0);
      puVar6[6] = (undefined4)local_c8;
      puVar6[7] = local_c8._4_4_;
      iVar13 = *(int *)(param_1 + 0x160);
      if (iVar17 < *(int *)(param_1 + 0x170)) {
        iVar17 = iVar17 + 1;
      }
      else {
        iVar16 = iVar16 + 1;
        iVar17 = iVar13;
      }
    } while ((iVar7 != iVar17) || (iVar10 != iVar16));
  }
  return;
}

