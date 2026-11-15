
/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_020040d0(long param_1)

{
  undefined **ppuVar1;
  int *piVar2;
  uint uVar3;
  int *piVar4;
  undefined *puVar5;
  undefined *puVar6;
  ulong uVar7;
  long lVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  undefined *local_198;
  uint local_190;
  uint local_18c;
  undefined *local_188 [3];
  int local_170 [2];
  undefined *local_168;
  undefined8 uStack_160;
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
  undefined8 local_88;
  undefined4 local_80;
  undefined8 local_78;
  undefined4 local_70;
  undefined4 local_6c;
  
  puVar6 = PTR_DAT_04bb27c8;
  puVar5 = PTR_DAT_04bb2010;
  if ((*(byte *)(param_1 + 0x4d) & 1) != 0) {
    local_80 = 0;
    local_88 = 0;
    local_88 = 2;
    local_80 = 0;
    local_188[0] = PTR_DAT_04bb2010 + 0x10;
    local_188[1] = (undefined *)0x100000000;
    local_f8 = local_188[0];
    uStack_f0 = 0x100000000;
    local_128 = local_188[0];
    uStack_120 = 0xffffffff00000001;
    local_e8 = local_188[0];
    uStack_e0 = 0xffffffffffffffff;
    local_188[2] = local_188[0];
    local_170[0] = 0;
    local_170[1] = 0;
    local_168 = local_188[0];
    uStack_160 = 0x100000001;
    local_158 = local_188[0];
    uStack_150 = 0;
    local_148 = local_188[0];
    uStack_140 = 1;
    local_138 = local_188[0];
    uStack_130 = 0;
    local_118 = local_188[0];
    uStack_110 = 0;
    local_108 = local_188[0];
    uStack_100 = 0xffffffff00000000;
    local_d8 = local_188[0];
    uStack_d0 = 0x100000001;
    local_c8 = local_188[0];
    uStack_c0 = 0xffffffff;
    local_b8 = local_188[0];
    uStack_b0 = 1;
    local_a8 = local_188[0];
    uStack_a0 = 0x1ffffffff;
    local_98 = local_188[0];
    uStack_90 = 0;
    uVar11 = 0;
    do {
      if ((uVar11 & 1) == 0) {
        local_78 = CONCAT44(local_78._4_4_,uVar11);
        ppuVar1 = local_188 + (ulong)uVar11 * 4;
        if (7 < uVar11) {
          ppuVar1 = local_188;
        }
        local_190 = *(int *)(ppuVar1 + 1) + *(int *)(param_1 + 0x18);
        local_18c = *(int *)((long)ppuVar1 + 0xc) + *(int *)(param_1 + 0x1c);
        local_198 = puVar5 + 0x10;
        lVar8 = *(long *)puVar6;
        if (((lVar8 != 0) && (*(long *)(lVar8 + 0xa8) != 0)) &&
           (uVar7 = FUN_0094968c(lVar8 + 0x28,&local_198,&local_88), (uVar7 & 1) != 0)) {
          if ((((*(long *)puVar6 != 0) && (lVar8 = *(long *)(*(long *)puVar6 + 0xa8), lVar8 != 0))
              && ((-1 < (int)local_190 &&
                  ((-1 < (int)local_18c && (local_190 < *(uint *)(lVar8 + 0x38))))))) &&
             ((local_18c < *(uint *)(lVar8 + 0x3c) &&
              ((uVar10 = local_190 + *(uint *)(lVar8 + 0x38) * local_18c,
               uVar10 < *(uint *)(lVar8 + 0x68) && (*(long *)(lVar8 + 0x70) != 0)))))) {
            local_78 = CONCAT44(local_78._4_4_,3);
            if ((*(uint *)(*(long *)(lVar8 + 0x70) + (long)(int)uVar10 * 4) >> 3 & 1) != 0)
            goto LAB_020041e0;
          }
          local_78 = CONCAT44(local_78._4_4_,uVar11);
          piVar2 = local_170 + (ulong)uVar11 * 8 + 1;
          piVar4 = local_170 + (ulong)uVar11 * 8;
          if (7 < uVar11) {
            piVar2 = local_170 + 1;
            piVar4 = local_170;
          }
          uVar10 = *piVar4 + *(int *)(param_1 + 0x18);
          if (((((uint)DAT_053bc9c0 <= (uVar10 & 0xffff)) &&
               ((uVar10 & 0xffff) <=
                (((uint)DAT_053bc9c0 + (uint)(ushort)DAT_053bc9cc) - 1 & 0xffff))) &&
              (uVar9 = *piVar2 + *(int *)(param_1 + 0x1c), (uint)DAT_053bc9c2 <= (uVar9 & 0xffff)))
             && (((uVar9 & 0xffff) <= (((uint)DAT_053bc9c2 + (uint)DAT_053bc9d0) - 1 & 0xffff) &&
                 (uVar3 = (uVar10 - DAT_053bc9c0) +
                          *(int *)(DAT_053bca00 + 0x1c) * (uVar9 - DAT_053bc9c2),
                 (*(uint *)(*(long *)(DAT_053bca00 + 0x10) + (long)((int)uVar3 >> 5) * 4) >>
                  (ulong)(uVar3 & 0x1f) & 1) != 0)))) goto LAB_02004568;
        }
      }
LAB_020041e0:
      uVar10 = 8;
      if ((int)uVar11 < 8) {
        uVar10 = uVar11 + 1;
      }
      uVar11 = uVar10;
    } while (uVar10 != 8);
    uVar11 = 0;
    do {
      if ((uVar11 & 1) != 0) {
        local_70 = 0;
        local_6c = 1;
        local_78 = 0;
        ppuVar1 = local_188 + (ulong)uVar11 * 4;
        if (7 < uVar11) {
          ppuVar1 = local_188;
        }
        local_190 = *(int *)(ppuVar1 + 1) + *(int *)(param_1 + 0x18);
        local_18c = *(int *)((long)ppuVar1 + 0xc) + *(int *)(param_1 + 0x1c);
        local_78._0_4_ = 2;
        local_78._4_4_ = 0;
        local_6c = 1;
        local_70 = 0;
        lVar8 = *(long *)puVar6;
        if ((((lVar8 != 0) && (*(long *)(lVar8 + 0xa8) != 0)) &&
            (local_198 = puVar5 + 0x10, uVar7 = FUN_00949898(lVar8 + 0x28,&local_198,&local_78),
            (uVar7 & 1) != 0)) &&
           (((((*(long *)puVar6 == 0 || (lVar8 = *(long *)(*(long *)puVar6 + 0xa8), lVar8 == 0)) ||
              ((int)local_190 < 0)) ||
             (((int)local_18c < 0 || (*(uint *)(lVar8 + 0x38) <= local_190)))) ||
            (((*(uint *)(lVar8 + 0x3c) <= local_18c ||
              ((uVar10 = local_190 + *(uint *)(lVar8 + 0x38) * local_18c,
               *(uint *)(lVar8 + 0x68) <= uVar10 || (*(long *)(lVar8 + 0x70) == 0)))) ||
             ((*(uint *)(*(long *)(lVar8 + 0x70) + (long)(int)uVar10 * 4) >> 3 & 1) == 0)))))) {
          local_78 = CONCAT44(local_78._4_4_,uVar11);
          piVar2 = local_170 + (ulong)uVar11 * 8 + 1;
          piVar4 = local_170 + (ulong)uVar11 * 8;
          if (7 < uVar11) {
            piVar2 = local_170 + 1;
            piVar4 = local_170;
          }
          uVar10 = *piVar4 + *(int *)(param_1 + 0x18);
          if (((((uint)DAT_053bc9c0 <= (uVar10 & 0xffff)) &&
               ((uVar10 & 0xffff) <=
                (((uint)DAT_053bc9c0 + (uint)(ushort)DAT_053bc9cc) - 1 & 0xffff))) &&
              (uVar9 = *piVar2 + *(int *)(param_1 + 0x1c), (uint)DAT_053bc9c2 <= (uVar9 & 0xffff)))
             && (((uVar9 & 0xffff) <= (((uint)DAT_053bc9c2 + (uint)DAT_053bc9d0) - 1 & 0xffff) &&
                 (uVar3 = (uVar10 - DAT_053bc9c0) +
                          *(int *)(DAT_053bca00 + 0x1c) * (uVar9 - DAT_053bc9c2),
                 (*(uint *)(*(long *)(DAT_053bca00 + 0x10) + (long)((int)uVar3 >> 5) * 4) >>
                  (ulong)(uVar3 & 0x1f) & 1) != 0)))) {
LAB_02004568:
            *(undefined4 *)(param_1 + 0x34) = 0;
            *(uint *)(param_1 + 0x18) = uVar10;
            *(uint *)(param_1 + 0x1c) = uVar9;
            *(uint *)(param_1 + 0x28) = uVar10;
            *(uint *)(param_1 + 0x2c) = uVar9;
            *(float *)(param_1 + 0x30) = (float)(int)local_190 * 5.0 + 2.5;
            *(float *)(param_1 + 0x38) = (float)(int)local_18c * 5.0 + 2.5;
            *(byte *)(param_1 + 0x4c) =
                 *(byte *)(param_1 + 0x4c) | (byte)(1 << (ulong)(uVar11 & 0x1f));
            return;
          }
        }
      }
      uVar10 = 8;
      if ((int)uVar11 < 8) {
        uVar10 = uVar11 + 1;
      }
      uVar11 = uVar10;
    } while (uVar10 != 8);
    *(byte *)(param_1 + 0x4d) = *(byte *)(param_1 + 0x4d) & 0xfe;
  }
  return;
}

