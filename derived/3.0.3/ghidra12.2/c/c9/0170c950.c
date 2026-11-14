
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_0170c950(long param_1,uint param_2,undefined8 *param_3)

{
  float *pfVar1;
  int iVar2;
  uint uVar3;
  long *plVar4;
  undefined8 uVar5;
  long lVar6;
  uint uVar7;
  long lVar8;
  long lVar9;
  undefined4 uVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  undefined8 local_134;
  undefined4 local_12c;
  undefined8 local_128;
  undefined4 local_120;
  undefined4 local_11c;
  undefined4 uStack_118;
  undefined4 local_114;
  undefined8 local_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 local_f0;
  undefined8 uStack_e8;
  undefined *local_e0;
  undefined8 uStack_d8;
  undefined8 local_d0;
  undefined8 uStack_c8;
  undefined8 local_c0;
  float fStack_b8;
  float fStack_b4;
  undefined *local_b0;
  undefined8 local_a8;
  undefined8 local_a0;
  undefined4 local_98;
  undefined8 local_94;
  undefined5 local_8c;
  undefined3 uStack_87;
  undefined5 uStack_84;
  undefined *local_78;
  undefined8 uStack_70;
  undefined4 local_68;
  undefined1 local_64;
  
  if (0x13 < param_2) {
    return 0;
  }
  uVar7 = *(uint *)(param_1 + (ulong)param_2 * 4 + 0x14a8);
  uVar3 = uVar7 & 0xffff;
  if (0xfffeffff < uVar7 || uVar3 == 0xffff) {
    lVar6 = *(long *)(param_1 + 0x1150);
    if (lVar6 == 0) {
      return 0;
    }
    uStack_d8 = *(undefined8 *)(PTR_DAT_04bb2f90 + (ulong)param_2 * 8 + 0x98);
    local_e0 = PTR_DAT_04bb2020 + 0x10;
    if (*(int *)(lVar6 + 0x30) == 0) {
      uVar7 = 0xffffffff;
    }
    else {
      lVar9 = *(long *)(lVar6 + 0x38);
      lVar8 = 0;
      lVar6 = (long)*(int *)(lVar6 + 0x30) << 3;
      uVar7 = 0xffffffff;
      do {
        plVar4 = (long *)**(undefined8 **)(lVar9 + lVar8 * 8);
        iVar2 = (**(code **)(*plVar4 + 0x38))(plVar4,&local_e0);
        if (iVar2 != -1) {
          uVar7 = (uint)lVar8 & 0xffff | iVar2 << 0x10;
          break;
        }
        lVar8 = lVar8 + 1;
        lVar6 = lVar6 + -8;
      } while (lVar6 != 0);
    }
    uVar3 = uVar7 & 0xffff;
  }
  uVar5 = 0;
  uStack_108 = _UNK_04102208;
  local_110 = _DAT_04102200;
  uStack_f8 = _UNK_04102888;
  uStack_100 = _DAT_04102880;
  uStack_e8 = _UNK_041023d8;
  local_f0 = _DAT_041023d0;
  if ((uVar3 != 0xffff) && (uVar7 < 0xffff0000)) {
    plVar4 = (long *)**(undefined8 **)
                       (*(long *)(*(long *)(param_1 + 0x1150) + 0x38) +
                       (-(ulong)(uVar3 >> 0xf) & 0xfffffffffff80000 | (ulong)uVar3 << 3));
    (**(code **)(*plVar4 + 0x70))(plVar4,&local_110,(int)uVar7 >> 0x10);
    uStack_118 = uStack_f8._4_4_;
    fVar11 = (float)uStack_108;
    local_11c = uStack_108._4_4_;
    uStack_108 = uStack_108 & 0xffffffff;
    uStack_f8 = uStack_f8 & 0xffffffff;
    local_114 = uStack_e8._4_4_;
    fVar12 = (float)uStack_e8;
    uStack_e8 = uStack_e8 & 0xffffffff;
    uVar3 = FUN_006f0400(fVar11 + local_110._4_4_ * 0.0 + (float)local_110 * 0.0 + 0.0,
                         fVar12 + local_f0._4_4_ * 0.0 + (float)local_f0 * 0.0 + 0.0);
    uVar10 = FUN_016e026c(0,&local_11c,0,0);
    local_d0 = 0;
    uStack_c8 = 0;
    local_c0 = 0;
    local_a0 = 0;
    local_e0 = PTR_DAT_04bb2cc0 + 0x10;
    fStack_b8 = 0.0;
    local_94 = 0;
    local_b0 = PTR_DAT_04bb2ca0 + 0x10;
    uStack_d8 = 0;
    local_8c = 0;
    uStack_87 = 0;
    uStack_84 = 0;
    local_98 = 7;
    local_a8 = 0;
    local_78 = PTR_DAT_04bb2010 + 0x10;
    local_68 = 0;
    uStack_70 = 0;
    local_64 = 0;
    FUN_0093ab70(*(long *)PTR_DAT_04bb27c8 + 0x28,&local_11c,&local_e0);
    local_12c = 0;
    local_128 = local_a8;
    local_120 = (undefined4)local_a0;
    local_134 = 0x3f80000000000000;
    FUN_0094e208(&local_e0,&local_134,&local_128);
    uVar5 = 1;
    pfVar1 = (float *)(PTR_DAT_04bb2d00 + (ulong)(uVar3 >> 0x18) * 0x10);
    fVar11 = (float)(uVar3 & 0xffffff) * 5.9604645e-08;
    fVar21 = *pfVar1 + fVar11 * pfVar1[1];
    fVar12 = pfVar1[2] + fVar11 * pfVar1[3];
    fVar11 = -(pfVar1[1] * fVar11) - *pfVar1;
    fVar20 = fVar21 * 0.0;
    fVar16 = fVar12 * 0.0;
    fVar22 = fVar20 * 0.0 + 1.0;
    fVar21 = fVar21 + 0.0;
    fVar13 = SUB84(local_e0,0);
    fVar14 = (float)((ulong)local_e0 >> 0x20);
    fVar17 = (float)local_d0;
    fVar18 = (float)((ulong)local_d0 >> 0x20);
    fVar23 = (float)local_c0;
    fVar24 = (float)((ulong)local_c0 >> 0x20);
    fVar15 = (float)uStack_d8;
    fVar19 = (float)uStack_c8;
    param_3[1] = CONCAT44((float)((ulong)uStack_d8 >> 0x20) +
                          fVar13 * 0.0 + fVar14 * 0.0 + fVar15 * 0.0,
                          fVar21 * fVar13 + fVar20 * fVar14 + fVar12 * fVar15 + 0.0);
    *param_3 = CONCAT44(fVar20 * fVar13 + fVar22 * fVar14 + fVar16 * fVar15 + 0.0,
                        fVar12 * fVar13 + fVar16 * fVar14 + fVar11 * fVar15 + 0.0);
    param_3[3] = CONCAT44((float)((ulong)uStack_c8 >> 0x20) +
                          fVar17 * 0.0 + fVar18 * 0.0 + fVar19 * 0.0,
                          fVar21 * fVar17 + fVar20 * fVar18 + fVar12 * fVar19 + 0.0);
    param_3[2] = CONCAT44(fVar20 * fVar17 + fVar22 * fVar18 + fVar16 * fVar19 + 0.0,
                          fVar12 * fVar17 + fVar16 * fVar18 + fVar11 * fVar19 + 0.0);
    *(undefined4 *)((long)param_3 + 0x1c) = uVar10;
    *(undefined4 *)((long)param_3 + 0xc) = local_11c;
    param_3[5] = CONCAT44(fStack_b4 + fVar23 * 0.0 + fVar24 * 0.0 + fStack_b8 * 0.0,
                          fVar21 * fVar23 + fVar20 * fVar24 + fVar12 * fStack_b8 + 0.0);
    param_3[4] = CONCAT44(fVar20 * fVar23 + fVar22 * fVar24 + fVar16 * fStack_b8 + 0.0,
                          fVar12 * fVar23 + fVar16 * fVar24 + fVar11 * fStack_b8 + 0.0);
    *(undefined4 *)((long)param_3 + 0x2c) = local_114;
  }
  return uVar5;
}

