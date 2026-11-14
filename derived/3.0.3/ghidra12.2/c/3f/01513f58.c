
uint FUN_01513f58(undefined8 param_1,undefined4 *param_2)

{
  undefined *puVar1;
  uint uVar2;
  int iVar3;
  ulong uVar4;
  uint uVar5;
  uint *puVar6;
  ulong uVar7;
  int iVar8;
  uint *puVar9;
  long lVar10;
  long lVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float local_cc;
  float fStack_c8;
  float local_c4;
  undefined8 local_c0;
  undefined4 local_b8;
  int iStack_b4;
  undefined **local_b0;
  undefined *puStack_a8;
  undefined8 local_a0;
  undefined *local_98;
  undefined8 local_90;
  undefined8 local_88;
  float local_80;
  undefined **local_78;
  undefined4 local_70;
  undefined4 uStack_6c;
  uint *local_68;
  int local_28;
  undefined4 local_24;
  
  puVar1 = PTR_DAT_04bb43c0;
  lVar11 = *(long *)PTR_DAT_04bb43c0;
  uVar2 = FUN_0277d6c4(param_2);
  lVar10 = *(long *)puVar1;
  if (lVar10 != 0) {
    lVar11 = *(long *)(lVar11 + 0x57e58);
    uVar2 = (uVar2 & 0xffff) - (uint)*(ushort *)(lVar11 + 0x1f8);
    if ((uVar2 < *(uint *)(lVar11 + 0x1d8)) &&
       (*(long *)(*(long *)(lVar11 + 0x1e0) + (long)(int)uVar2 * 8) != 0)) {
      local_68 = (uint *)0x0;
      local_70 = *param_2;
      uStack_6c = param_2[1];
      local_78 = &PTR_FUN_04a36b50;
      uVar2 = FUN_0277d6c4(&local_70);
      if (*(long *)puVar1 == 0) {
LAB_015140f0:
        uVar5 = 0;
      }
      else {
        lVar10 = *(long *)(lVar10 + 0x57e58);
        uVar2 = (uVar2 & 0xffff) - (uint)*(ushort *)(lVar10 + 0x1f8);
        if ((*(uint *)(lVar10 + 0x1d8) <= uVar2) ||
           (*(long *)(*(long *)(lVar10 + 0x1e0) + (long)(int)uVar2 * 8) == 0)) goto LAB_015140f0;
        lVar10 = *(long *)PTR_DAT_04bc0428;
        uVar2 = FUN_0277d6c4(param_2);
        uVar2 = (uVar2 & 0xffff) - (uint)*(ushort *)(lVar10 + 0x1f8);
        if ((*(uint *)(lVar10 + 0x1d8) <= uVar2) ||
           (puVar6 = *(uint **)(*(long *)(lVar10 + 0x1e0) + (long)(int)uVar2 * 8),
           puVar6 == (uint *)0x0)) goto LAB_015140f0;
        uVar5 = 0;
        uVar2 = *puVar6;
        local_68 = puVar6;
        if ((uVar2 != 0) && (puVar6 != (uint *)(ulong)uVar2)) {
          puVar9 = (uint *)((long)puVar6 - (long)(ulong)uVar2);
          uVar5 = 0;
          if (*puVar9 != 0) {
            uVar2 = puVar9[1];
            if ((uVar2 != 0) && ((ulong)(ushort)puVar9[2] != 0)) {
              lVar10 = 0xc;
              if (*(char *)((long)puVar9 + 10) != '\0') {
                lVar10 = 0x1c;
              }
              lVar10 = (long)puVar9 + lVar10 + (ulong)(ushort)puVar9[2] * 8;
              if (lVar10 != 0) {
                uVar5 = 0;
                if ((ulong)uVar2 != 0) {
                  uVar5 = (uint)((ulong)((long)puVar6 - lVar10) / (ulong)uVar2);
                }
                if (*puVar9 <= uVar5) {
                  uVar5 = 0xffffffff;
                }
                if ((uVar5 < DAT_05326d48) &&
                   (uVar5 = (uint)*(ushort *)(DAT_05326d50 + (long)(int)uVar5 * 2), uVar5 < 0x52))
                goto LAB_015140f4;
              }
            }
            goto LAB_015140f0;
          }
        }
      }
LAB_015140f4:
      local_b0 = (undefined **)CONCAT44(local_b0._4_4_,uVar5);
      if ((uVar5 - 1 < 9) && (uVar4 = FUN_01ae5f4c(&local_78), (uVar4 & 1) == 0)) {
        local_88 = *(undefined8 *)(param_2 + 6);
        local_80 = (float)param_2[8];
        iVar8 = param_2[9];
        local_a0 = 0;
        puStack_a8 = PTR_DAT_04bb2010 + 0x10;
        local_b0 = &PTR_FUN_0498d548;
        local_90 = 0;
        local_98 = puStack_a8;
        local_28 = iVar8;
        FUN_01afb480(&local_78,&local_b0);
        fVar15 = local_80;
        local_a0._0_4_ = (int)local_a0 + param_2[4];
        local_90._0_4_ = (int)local_90 + param_2[4];
        local_a0._4_4_ = local_a0._4_4_ + param_2[5];
        local_90._4_4_ = local_90._4_4_ + param_2[5];
        fVar14 = (float)local_88;
        iVar3 = FUN_006f0400((float)local_88 -
                             ((float)(int)local_a0 * 5.0 + (float)(int)local_90 * 5.0 + 5.0) * 0.5,
                             local_80 -
                             ((float)local_a0._4_4_ * 5.0 + (float)local_90._4_4_ * 5.0 + 5.0) * 0.5
                            );
        local_b8 = 0;
        local_c0 = 0;
        iStack_b4 = iVar3;
        uVar4 = FUN_015114c0(param_2[10],param_2,&local_b0,&local_88,&local_28,&local_c0);
        uVar2 = 0;
        if ((uVar4 & 1) == 0) goto LAB_015142c0;
        uVar2 = iVar8 + 0x20000000U >> 0x1e;
        uVar5 = iVar3 + 0xa0000000U >> 0x1e;
        if (uVar2 == uVar5) {
          local_c4 = fVar15;
          local_cc = fVar14;
          fStack_c8 = local_88._4_4_;
          fVar12 = (float)(int)local_a0 * 5.0;
          fVar13 = (float)local_a0._4_4_ * 5.0;
          fVar16 = (float)(int)local_90 * 5.0 + 5.0;
          fVar17 = (float)local_90._4_4_ * 5.0 + 5.0;
          if ((iVar3 + 0x20000000U >> 0x1e | 2) == 2) {
            iVar8 = ((int)local_90 - (int)local_a0) + 1;
            if (iVar8 < 3) {
              local_cc = fVar12 + (float)iVar8 * 5.0 * 0.5;
            }
            else {
              fVar16 = fVar16 + -5.0;
              if (fVar14 <= fVar16) {
                fVar16 = fVar14;
              }
              local_cc = fVar12 + 5.0;
              if (fVar12 + 5.0 <= fVar14) {
                local_cc = fVar16;
              }
            }
            fVar13 = fVar13 + fVar17;
            iVar8 = local_90._4_4_ - local_a0._4_4_;
            fVar14 = fVar13 * 0.5;
            fVar16 = -(fVar13 * 0.5);
            if (0.0 <= fVar14) {
              fVar16 = fVar14;
            }
            fVar17 = -fVar15;
            if (0.0 <= fVar15) {
              fVar17 = fVar15;
            }
          }
          else {
            iVar8 = (local_90._4_4_ - local_a0._4_4_) + 1;
            if (iVar8 < 3) {
              local_c4 = fVar13 + (float)iVar8 * 5.0 * 0.5;
            }
            else {
              fVar17 = fVar17 + -5.0;
              if (fVar15 <= fVar17) {
                fVar17 = fVar15;
              }
              local_c4 = fVar13 + 5.0;
              if (fVar13 + 5.0 <= fVar15) {
                local_c4 = fVar17;
              }
            }
            fVar12 = fVar12 + fVar16;
            iVar8 = (int)local_90 - (int)local_a0;
            fVar15 = fVar12 * 0.5;
            fVar16 = -(fVar12 * 0.5);
            if (0.0 <= fVar15) {
              fVar16 = fVar15;
            }
            fVar17 = -fVar14;
            if (0.0 <= fVar14) {
              fVar17 = fVar14;
            }
          }
          fVar16 = fVar16 - fVar17;
          fVar14 = -fVar16;
          if (0.0 <= fVar16) {
            fVar14 = fVar16;
          }
          fVar14 = fVar14 - (float)(iVar8 + 1) * 5.0 * 0.5;
          if (5.0 < fVar14) {
            uVar7 = (ulong)((float)uVar5 * 90.0 * 11930465.0);
            uVar4 = uVar7 >> 0x18 & 0xff;
            fVar15 = (float)((uint)uVar7 & 0xffffff) * 5.9604645e-08;
            fVar14 = fVar14 + -5.0;
            fStack_c8 = local_88._4_4_ + 0.0;
            local_cc = local_cc +
                       fVar14 * ((float)(&DAT_04199798)[uVar4 * 4] +
                                fVar15 * (float)(&DAT_0419979c)[uVar4 * 4]);
            local_c4 = local_c4 +
                       fVar14 * ((float)(&DAT_041997a0)[uVar4 * 4] +
                                fVar15 * (float)(&DAT_041997a4)[uVar4 * 4]);
          }
          local_24 = (undefined4)(long)((float)uVar2 * 90.0 * 11930465.0);
          uVar2 = FUN_01514490(param_1,&local_cc,&local_24,&iStack_b4,param_2,param_2 + 2,1,0,
                               &DAT_0548e140);
          goto LAB_015142c0;
        }
      }
    }
  }
  uVar2 = 0;
LAB_015142c0:
  return uVar2 & 1;
}

