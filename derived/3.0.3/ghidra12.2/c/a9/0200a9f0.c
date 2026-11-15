
/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_0200a9f0(long param_1)

{
  uint uVar1;
  undefined *puVar2;
  uint uVar3;
  undefined **ppuVar4;
  int *piVar5;
  int *piVar6;
  undefined *puVar7;
  ulong uVar8;
  long lVar9;
  uint uVar10;
  uint uVar11;
  undefined *local_198;
  uint local_190;
  uint local_18c;
  undefined8 local_188;
  undefined4 local_180;
  undefined *local_178;
  undefined8 local_170;
  undefined *local_168;
  int local_160 [2];
  undefined *local_158;
  undefined8 uStack_150;
  undefined *local_148;
  undefined8 uStack_140;
  undefined *local_138;
  undefined8 uStack_130;
  undefined *local_128;
  undefined8 uStack_120;
  undefined *local_118;
  undefined8 uStack_110;
  undefined *local_108;
  undefined8 uStack_100;
  undefined *local_f8;
  undefined8 uStack_f0;
  undefined *local_e8;
  undefined8 uStack_e0;
  undefined *local_d8;
  undefined8 uStack_d0;
  undefined *local_c8;
  undefined8 uStack_c0;
  undefined *local_b8;
  undefined8 uStack_b0;
  undefined *local_a8;
  undefined8 uStack_a0;
  undefined *local_98;
  undefined8 uStack_90;
  undefined *local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined4 local_70;
  uint local_6c;
  
  puVar7 = PTR_DAT_04bb27c8;
  if ((*(byte *)(param_1 + 0x4d) & 1) != 0) {
    local_180 = 0;
    local_188 = 0;
    puVar2 = PTR_DAT_04bb2010 + 0x10;
    local_178 = puVar2;
    local_170 = 0x100000000;
    local_e8 = puVar2;
    uStack_e0 = 0x100000000;
    local_118 = puVar2;
    uStack_110 = 0xffffffff00000001;
    local_d8 = puVar2;
    uStack_d0 = 0xffffffffffffffff;
    local_b8 = puVar2;
    uStack_b0 = 0xffffffff;
    local_168 = puVar2;
    local_160[0] = 0;
    local_160[1] = 0;
    local_158 = puVar2;
    uStack_150 = 0x100000001;
    local_148 = puVar2;
    uStack_140 = 0;
    local_138 = puVar2;
    uStack_130 = 1;
    local_128 = puVar2;
    uStack_120 = 0;
    local_108 = puVar2;
    uStack_100 = 0;
    local_f8 = puVar2;
    uStack_f0 = 0xffffffff00000000;
    local_c8 = puVar2;
    uStack_c0 = 0x100000001;
    local_a8 = puVar2;
    uStack_a0 = 1;
    local_98 = puVar2;
    uStack_90 = 0x1ffffffff;
    local_88 = puVar2;
    uStack_80 = 0;
    local_188 = 2;
    uStack_80 = 0;
    uStack_90 = 0x1ffffffff;
    uStack_a0 = 1;
    uStack_b0 = 0xffffffff;
    uStack_c0 = 0x100000001;
    uStack_d0 = 0xffffffffffffffff;
    uStack_e0 = 0x100000000;
    uStack_f0 = 0xffffffff00000000;
    uStack_100 = 0;
    uStack_110 = 0xffffffff00000001;
    uStack_120 = 0;
    uStack_130 = 1;
    uStack_140 = 0;
    uStack_150 = 0x100000001;
    local_160[0] = 0;
    local_160[1] = 0;
    local_170 = 0x100000000;
    local_180 = 0;
    uVar10 = 0;
    do {
      local_6c = uVar10;
      if ((uVar10 & 1) == 0) {
        ppuVar4 = &local_178 + (ulong)uVar10 * 4;
        if (7 < uVar10) {
          ppuVar4 = &local_178;
        }
        local_190 = *(int *)(ppuVar4 + 1) + *(int *)(param_1 + 0x18);
        local_18c = *(int *)((long)ppuVar4 + 0xc) + *(int *)(param_1 + 0x1c);
        lVar9 = *(long *)puVar7;
        if (((lVar9 != 0) && (*(long *)(lVar9 + 0xa8) != 0)) &&
           (local_198 = puVar2, uVar8 = FUN_0094968c(lVar9 + 0x28,&local_198,&local_188),
           (uVar8 & 1) != 0)) {
          if ((((*(long *)puVar7 != 0) && (lVar9 = *(long *)(*(long *)puVar7 + 0xa8), lVar9 != 0))
              && ((-1 < (int)local_190 &&
                  ((-1 < (int)local_18c && (local_190 < *(uint *)(lVar9 + 0x38))))))) &&
             ((local_18c < *(uint *)(lVar9 + 0x3c) &&
              ((uVar11 = local_190 + *(uint *)(lVar9 + 0x38) * local_18c,
               uVar11 < *(uint *)(lVar9 + 0x68) && (*(long *)(lVar9 + 0x70) != 0)))))) {
            local_78 = CONCAT44(local_78._4_4_,3);
            if ((*(uint *)(*(long *)(lVar9 + 0x70) + (long)(int)uVar11 * 4) >> 3 & 1) != 0)
            goto LAB_0200aaf4;
          }
          piVar5 = local_160 + (ulong)local_6c * 8 + 1;
          piVar6 = local_160 + (ulong)local_6c * 8;
          if (7 < local_6c) {
            piVar5 = local_160 + 1;
            piVar6 = local_160;
          }
          uVar11 = *piVar6 + *(int *)(param_1 + 0x18);
          if (((((uint)DAT_053c3670 <= (uVar11 & 0xffff)) &&
               ((uVar11 & 0xffff) <=
                (((uint)DAT_053c3670 + (uint)(ushort)DAT_053c367c) - 1 & 0xffff))) &&
              (uVar3 = *piVar5 + *(int *)(param_1 + 0x1c), (uint)DAT_053c3672 <= (uVar3 & 0xffff)))
             && (((uVar3 & 0xffff) <= (((uint)DAT_053c3672 + (uint)DAT_053c3680) - 1 & 0xffff) &&
                 (uVar1 = (*(int *)(DAT_053c36b0 + 0x1c) * ((int)(short)uVar3 - (uint)DAT_053c3672)
                          - (uint)DAT_053c3670) + (int)(short)uVar11,
                 (*(uint *)(*(long *)(DAT_053c36b0 + 0x10) + (long)((int)uVar1 >> 5) * 4) >>
                  (ulong)(uVar1 & 0x1f) & 1) != 0)))) {
            *(undefined4 *)(param_1 + 0x34) = 0;
            *(uint *)(param_1 + 0x18) = uVar11;
            *(uint *)(param_1 + 0x1c) = uVar3;
            *(uint *)(param_1 + 0x28) = uVar11;
            *(uint *)(param_1 + 0x2c) = uVar3;
            *(float *)(param_1 + 0x38) = (float)(int)local_18c * 5.0 + 2.5;
            *(float *)(param_1 + 0x30) = (float)(int)local_190 * 5.0 + 2.5;
            uVar10 = local_6c;
            goto LAB_0200af00;
          }
        }
      }
LAB_0200aaf4:
      uVar11 = 8;
      if ((int)uVar10 < 8) {
        uVar11 = uVar10 + 1;
      }
      uVar10 = uVar11;
    } while (uVar11 != 8);
    puVar2 = PTR_DAT_04bb2010 + 0x10;
    uVar10 = 0;
    do {
      if ((uVar10 & 1) != 0) {
        local_70 = 0;
        local_6c = 1;
        local_78 = 0;
        ppuVar4 = &local_178 + (ulong)uVar10 * 4;
        if (7 < uVar10) {
          ppuVar4 = &local_178;
        }
        local_190 = *(int *)(ppuVar4 + 1) + *(int *)(param_1 + 0x18);
        local_18c = *(int *)((long)ppuVar4 + 0xc) + *(int *)(param_1 + 0x1c);
        local_78._0_4_ = 2;
        local_78._4_4_ = 0;
        local_6c = 1;
        local_70 = 0;
        lVar9 = *(long *)puVar7;
        if ((((lVar9 != 0) && (*(long *)(lVar9 + 0xa8) != 0)) &&
            (local_198 = puVar2, uVar8 = FUN_00949898(lVar9 + 0x28,&local_198,&local_78),
            (uVar8 & 1) != 0)) &&
           (((((*(long *)puVar7 == 0 || (lVar9 = *(long *)(*(long *)puVar7 + 0xa8), lVar9 == 0)) ||
              ((int)local_190 < 0)) ||
             (((int)local_18c < 0 || (*(uint *)(lVar9 + 0x38) <= local_190)))) ||
            (((*(uint *)(lVar9 + 0x3c) <= local_18c ||
              ((uVar11 = local_190 + *(uint *)(lVar9 + 0x38) * local_18c,
               *(uint *)(lVar9 + 0x68) <= uVar11 || (*(long *)(lVar9 + 0x70) == 0)))) ||
             (local_78 = CONCAT44(local_78._4_4_,3),
             (*(uint *)(*(long *)(lVar9 + 0x70) + (long)(int)uVar11 * 4) >> 3 & 1) == 0)))))) {
          piVar5 = local_160 + (ulong)uVar10 * 8;
          if (7 < uVar10) {
            piVar5 = local_160;
          }
          uVar11 = *piVar5 + *(int *)(param_1 + 0x18);
          piVar5 = local_160 + (ulong)uVar10 * 8 + 1;
          if (7 < uVar10) {
            piVar5 = local_160 + 1;
          }
          if (((((uint)DAT_053c3670 <= (uVar11 & 0xffff)) &&
               ((uVar11 & 0xffff) <=
                (((uint)DAT_053c3670 + (uint)(ushort)DAT_053c367c) - 1 & 0xffff))) &&
              (uVar3 = *piVar5 + *(int *)(param_1 + 0x1c), (uint)DAT_053c3672 <= (uVar3 & 0xffff)))
             && (((uVar3 & 0xffff) <= (((uint)DAT_053c3672 + (uint)DAT_053c3680) - 1 & 0xffff) &&
                 (uVar1 = (*(int *)(DAT_053c36b0 + 0x1c) * ((int)(short)uVar3 - (uint)DAT_053c3672)
                          - (uint)DAT_053c3670) + (int)(short)uVar11,
                 (*(uint *)(*(long *)(DAT_053c36b0 + 0x10) + (long)((int)uVar1 >> 5) * 4) >>
                  (ulong)(uVar1 & 0x1f) & 1) != 0)))) {
            *(undefined4 *)(param_1 + 0x34) = 0;
            *(uint *)(param_1 + 0x18) = uVar11;
            *(uint *)(param_1 + 0x1c) = uVar3;
            *(uint *)(param_1 + 0x28) = uVar11;
            *(uint *)(param_1 + 0x2c) = uVar3;
            *(float *)(param_1 + 0x38) = (float)(int)local_18c * 5.0 + 2.5;
            *(float *)(param_1 + 0x30) = (float)(int)local_190 * 5.0 + 2.5;
LAB_0200af00:
            *(byte *)(param_1 + 0x4c) =
                 *(byte *)(param_1 + 0x4c) | (byte)(1 << (ulong)(uVar10 & 0x1f));
            return;
          }
        }
      }
      uVar11 = 8;
      if ((int)uVar10 < 8) {
        uVar11 = uVar10 + 1;
      }
      uVar10 = uVar11;
    } while (uVar11 != 8);
    *(byte *)(param_1 + 0x4d) = *(byte *)(param_1 + 0x4d) & 0xfe;
  }
  return;
}

