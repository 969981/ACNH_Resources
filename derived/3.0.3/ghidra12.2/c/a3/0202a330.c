
/* WARNING: Removing unreachable block (ram,0x0202a4f8) */
/* WARNING: Removing unreachable block (ram,0x0202a4e8) */
/* WARNING: Removing unreachable block (ram,0x0202a824) */

void FUN_0202a330(long param_1)

{
  ushort *puVar1;
  undefined2 uVar2;
  long lVar3;
  ushort uVar4;
  ushort uVar5;
  int iVar6;
  undefined *puVar7;
  bool bVar8;
  int iVar9;
  uint uVar10;
  ulong uVar11;
  uint uVar12;
  long lVar13;
  uint uVar14;
  uint uVar15;
  long lVar16;
  long lVar17;
  uint uVar18;
  uint uVar19;
  int iVar20;
  uint uVar21;
  uint uVar22;
  uint uVar23;
  undefined8 *puVar24;
  ulong uVar25;
  uint uVar26;
  uint uVar27;
  float fVar28;
  float fVar29;
  uint local_ec;
  uint local_dc;
  undefined8 *local_d8;
  ushort *puStack_d0;
  undefined8 local_c8;
  undefined8 uStack_c0;
  undefined *local_b8;
  undefined8 uStack_b0;
  undefined *local_a8;
  undefined8 uStack_a0;
  undefined1 local_98;
  undefined8 local_90;
  long lStack_88;
  uint local_78;
  uint local_74;
  
  lVar13 = *(long *)PTR_DAT_04bb5ce0;
  if (lVar13 == 0) {
    uVar22 = 0;
    fVar28 = 40.0;
    uVar12 = 0;
    uVar27 = 0x10;
    fVar29 = 40.0;
    uVar26 = 0x10;
  }
  else {
    fVar28 = *(float *)(lVar13 + 0xd74);
    fVar29 = *(float *)(lVar13 + 0xd7c);
    uVar22 = *(uint *)(lVar13 + 0xd88);
    uVar12 = *(uint *)(lVar13 + 0xd8c);
    uVar26 = *(uint *)(lVar13 + 0xd98);
    uVar27 = *(uint *)(lVar13 + 0xd9c);
  }
  local_c8._0_4_ = 0x20;
  puVar1 = (ushort *)(param_1 + 0x5858);
  local_a8._0_4_ = (uint)(uint3)local_a8;
  puStack_d0 = (ushort *)((long)&local_c8 + 4);
  local_d8 = (undefined8 *)(PTR_DAT_04bb2028 + 0x10);
  uStack_c0._4_4_ = uStack_c0._4_4_ & 0xffffff00;
  local_c8._4_4_ = 0x72746e45;
  uStack_c0._0_4_ = 0x65636e61;
  lVar13 = FUN_02917a1c(&local_d8);
  puVar7 = PTR_DAT_04bb7f20;
  local_b8 = PTR_DAT_04bb2010;
  if (lVar13 == 0) {
    local_ec = (int)((float)(int)fVar28 / 5.0) - (uint)(fVar28 < 0.0);
    uVar10 = (int)((float)(int)fVar29 / 5.0) - (uint)(fVar29 < 0.0);
  }
  else {
    fVar28 = (float)NEON_ucvtf(*(undefined4 *)(lVar13 + 0x20));
    fVar28 = *(float *)(lVar13 + 0xc) +
             (*(float *)(lVar13 + 0x24) + *(float *)(lVar13 + 0x1c) * 0.5 + 0.0) *
             (*(float *)(PTR_DAT_04bb2d00 +
                        ((ulong)(long)(fVar28 * 11930465.0) >> 0x18 & 0xff) * 0x10) +
             (float)((uint)(long)(fVar28 * 11930465.0) & 0xffffff) * 5.9604645e-08 *
             *(float *)((long)(PTR_DAT_04bb2d00 +
                              ((ulong)(long)(fVar28 * 11930465.0) >> 0x18 & 0xff) * 0x10) + 4));
    local_ec = (int)((float)(int)fVar28 / 5.0) - (uint)(fVar28 < 0.0);
    uVar10 = uVar27 + 2;
  }
  local_90 = *(undefined8 *)(*(long *)PTR_DAT_04bb27a8 + 0x1f8);
  local_c8 = &local_90;
  local_98 = 0;
  lStack_88 = *(long *)PTR_DAT_04bb27c8;
  uStack_c0 = PTR_DAT_04bbc1a0 + 0x10;
  *(ushort *)(param_1 + 0x585c) = (ushort)uVar22;
  local_b8 = local_b8 + 0x10;
  uStack_b0 = 0;
  uStack_a0 = 0;
  lStack_88 = lStack_88 + 0x28;
  uVar21 = uVar27;
  if ((int)(uVar26 - uVar22) < 0xc) {
    uVar21 = uVar27 + 4;
  }
  local_d8 = (undefined8 *)(puVar7 + 0x10);
  *(short *)(param_1 + 0x5862) = (short)uVar21;
  *(short *)(param_1 + 0x585e) = (short)uVar12;
  *(ushort *)(param_1 + 0x5860) = (ushort)uVar26;
  uVar4 = (ushort)uVar22;
  if ((uVar26 & 0xffff) <= (uVar22 & 0xffff)) {
    uVar4 = (ushort)uVar26;
  }
  *puVar1 = uVar4;
  uVar2 = (short)uVar12;
  if ((uVar21 & 0xffff) <= (uVar12 & 0xffff)) {
    uVar2 = (short)uVar21;
  }
  *(undefined2 *)(param_1 + 0x585a) = uVar2;
  puStack_d0 = puVar1;
  local_a8 = local_b8;
  memset((void *)(param_1 + 0xef98),2,0x3c1);
  memset(*(void **)(param_1 + 0xf370),0,(long)*(int *)(param_1 + 0xf36c) << 2);
  *(undefined4 *)(param_1 + 0xf378) = 0;
  FUN_035a4230(puVar1);
  uVar11 = *(ulong *)(param_1 + 0x5870);
  if (uVar11 != 0) {
    uVar4 = *puVar1;
    uVar25 = 0;
    iVar9 = *(int *)(param_1 + 0x5864);
    uVar21 = (uint)*(ushort *)(param_1 + 0x585a);
    uVar23 = (uint)uVar4;
    do {
      iVar20 = uVar23 - *puVar1;
      if ((((-1 < iVar20) && (iVar20 < *(int *)(param_1 + 0x5864))) &&
          (iVar6 = uVar21 - *(ushort *)(param_1 + 0x585a), -1 < iVar6)) &&
         ((iVar6 < *(int *)(param_1 + 0x5868) && (*(long *)(param_1 + 0x5878) != 0)))) {
        (*(code *)*local_d8)
                  (&local_d8,
                   *(long *)(param_1 + 0x5878) +
                   (long)(iVar20 + *(int *)(param_1 + 0x5864) * iVar6) * 0x28);
        uVar11 = *(ulong *)(param_1 + 0x5870);
      }
      uVar25 = uVar25 + 1;
      bVar8 = uVar23 + 1 == iVar9 + (uint)uVar4;
      if (bVar8) {
        uVar21 = uVar21 + 1;
      }
      uVar14 = (uint)uVar4;
      if (!bVar8) {
        uVar14 = uVar23 + 1;
      }
      uVar23 = uVar14;
    } while (uVar25 < uVar11);
  }
  FUN_035a56c0(puVar1,0);
  uVar21 = local_ec & 0xffff;
  uVar10 = uVar10 & 0xffff;
  *(undefined1 *)(param_1 + 0x58a0) = 1;
  FUN_035a8968(puVar1,uVar21,uVar10);
  FUN_035a81f0(puVar1,uVar21,uVar10,0);
  *(undefined1 *)(param_1 + 0x58a0) = 0;
  local_dc = 0;
  lVar13 = *(long *)PTR_DAT_04bb2720;
  if (lVar13 == 0) {
    puVar24 = &DAT_055c04a0;
  }
  else {
    puVar24 = &DAT_055c04a0;
    if (*(long *)(lVar13 + 0x330) != 0) {
      puVar24 = (undefined8 *)
                (**(code **)(**(long **)PTR_DAT_04bb2640 + 0x18))
                          (*(long **)PTR_DAT_04bb2640,*(undefined4 *)(lVar13 + 0x338));
      iVar9 = FUN_006bd550(*puVar24,0);
      puVar24 = (undefined8 *)PTR_DAT_04bc3a80;
      if (iVar9 != 0x758f7eaf) {
        puVar24 = &DAT_055c04a0;
      }
    }
  }
  uVar11 = FUN_02b64e40(&local_dc,*(undefined4 *)(puVar24 + 7));
  puVar7 = PTR_DAT_04bb46b0;
  if ((uVar11 & 1) == 0) goto LAB_0202a92c;
  local_74 = local_dc;
  lVar13 = *(long *)PTR_DAT_04bb46b0;
  if (lVar13 == 0) goto LAB_0202a92c;
  puVar24 = *(undefined8 **)(lVar13 + 0x10);
  if ((*(byte *)(lVar13 + 0x453) & 1) == 0) {
    lVar13 = (**(code **)(*(long *)*puVar24 + 0x38))();
    if (lVar13 == 0) goto LAB_0202a92c;
    lVar13 = lVar13 + 0x70;
  }
  else {
    if ((puVar24 == (undefined8 *)0x0) || ((long *)puVar24[0x26] == (long *)0x0)) goto LAB_0202a92c;
    lVar13 = (**(code **)(*(long *)puVar24[0x26] + 0x38))();
    if (lVar13 == 0) goto LAB_0202a92c;
  }
  if (9 < local_74) goto LAB_0202a92c;
  lVar16 = lVar13 + 0x1962d8 + (ulong)local_74 * 0x10d8;
  if (9 < local_74) {
    lVar16 = lVar13 + 0x1962d8;
  }
  if ((*(long **)(lVar16 + 0x28) == (long *)0x0) ||
     (puVar24 = (undefined8 *)**(long **)(lVar16 + 0x28), puVar24 == (undefined8 *)0x0)) {
    local_ec = 0;
  }
  else {
    local_ec = (**(code **)*puVar24)();
  }
  local_74 = 0;
  local_78 = 0;
  uVar11 = FUN_02b67a30(&local_78,
                        (long)*(char *)(*(long *)(lVar16 + 0x10) + *(long *)(lVar16 + 8) + 0x1c4));
  if ((uVar11 & 1) != 0) {
    local_74 = local_78;
    lVar13 = *(long *)puVar7;
    if (lVar13 != 0) {
      puVar24 = *(undefined8 **)(lVar13 + 0x10);
      if ((*(byte *)(lVar13 + 0x453) & 1) == 0) {
        lVar13 = (**(code **)(*(long *)*puVar24 + 0x38))();
        if (lVar13 != 0) {
          lVar13 = lVar13 + 0x70;
LAB_0202a88c:
          if (local_74 < 10) {
            lVar3 = lVar13 + 0x1962d8 + (ulong)local_74 * 0x10d8;
            if (9 < local_74) {
              lVar3 = lVar13 + 0x1962d8;
            }
            if (*(long **)(lVar3 + 0x878) == (long *)0x0) {
              uVar11 = 0;
            }
            else {
              puVar24 = (undefined8 *)**(long **)(lVar3 + 0x878);
              uVar11 = 0;
              if (puVar24 != (undefined8 *)0x0) {
                uVar11 = (**(code **)*puVar24)();
              }
            }
            if ((*(byte *)(*(long *)(lVar3 + 0x860) + *(long *)(lVar3 + 0x858)) & 1) != 0) {
              if ((int)uVar22 <= (int)uVar26) {
                uVar23 = uVar22;
                do {
                  lVar13 = *(long *)(param_1 + 0x5898);
                  uVar4 = *puVar1;
                  uVar5 = *(ushort *)(param_1 + 0x585a);
                  iVar9 = *(int *)(lVar13 + 0x1c);
                  uVar14 = uVar23 + (iVar9 * (uVar12 - uVar5) - (uint)uVar4);
                  lVar17 = *(long *)(lVar13 + 0x10);
                  uVar18 = *(uint *)(lVar17 + (long)((int)uVar14 >> 5) * 4);
                  uVar15 = 1 << (ulong)(uVar14 & 0x1f);
                  if ((uVar15 & uVar18) != 0) {
                    *(uint *)(lVar17 + ((long)((ulong)uVar14 << 0x20) >> 0x25) * 4) =
                         uVar18 & (uVar15 ^ 0xffffffff);
                    *(int *)(lVar13 + 0x18) = *(int *)(lVar13 + 0x18) + -1;
                    lVar13 = *(long *)(param_1 + 0x5898);
                    uVar4 = *puVar1;
                    uVar5 = *(ushort *)(param_1 + 0x585a);
                    iVar9 = *(int *)(lVar13 + 0x1c);
                    lVar17 = *(long *)(lVar13 + 0x10);
                  }
                  iVar20 = uVar23 - uVar4;
                  uVar15 = iVar20 + iVar9 * ((uVar12 + 1) - (uint)uVar5);
                  uVar14 = *(uint *)(lVar17 + (long)((int)uVar15 >> 5) * 4);
                  uVar18 = 1 << (ulong)(uVar15 & 0x1f);
                  if ((uVar18 & uVar14) != 0) {
                    *(uint *)(lVar17 + ((long)((ulong)uVar15 << 0x20) >> 0x25) * 4) =
                         uVar14 & (uVar18 ^ 0xffffffff);
                    *(int *)(lVar13 + 0x18) = *(int *)(lVar13 + 0x18) + -1;
                    lVar13 = *(long *)(param_1 + 0x5898);
                    uVar5 = *(ushort *)(param_1 + 0x585a);
                    iVar9 = *(int *)(lVar13 + 0x1c);
                    lVar17 = *(long *)(lVar13 + 0x10);
                    iVar20 = uVar23 - *puVar1;
                  }
                  uVar19 = (uint)uVar5;
                  uVar15 = iVar20 + iVar9 * ((uVar12 + 2) - uVar19);
                  uVar14 = *(uint *)(lVar17 + (long)((int)uVar15 >> 5) * 4);
                  uVar18 = 1 << (ulong)(uVar15 & 0x1f);
                  if ((uVar18 & uVar14) != 0) {
                    *(uint *)(lVar17 + ((long)((ulong)uVar15 << 0x20) >> 0x25) * 4) =
                         uVar14 & (uVar18 ^ 0xffffffff);
                    *(int *)(lVar13 + 0x18) = *(int *)(lVar13 + 0x18) + -1;
                    lVar13 = *(long *)(param_1 + 0x5898);
                    uVar19 = (uint)*(ushort *)(param_1 + 0x585a);
                    iVar9 = *(int *)(lVar13 + 0x1c);
                    lVar17 = *(long *)(lVar13 + 0x10);
                    iVar20 = uVar23 - *puVar1;
                  }
                  uVar15 = iVar20 + iVar9 * (uVar27 - uVar19);
                  uVar14 = *(uint *)(lVar17 + (long)((int)uVar15 >> 5) * 4);
                  uVar18 = 1 << (ulong)(uVar15 & 0x1f);
                  if ((uVar18 & uVar14) != 0) {
                    *(uint *)(lVar17 + ((long)((ulong)uVar15 << 0x20) >> 0x25) * 4) =
                         uVar14 & (uVar18 ^ 0xffffffff);
                    *(int *)(lVar13 + 0x18) = *(int *)(lVar13 + 0x18) + -1;
                    lVar13 = *(long *)(param_1 + 0x5898);
                    uVar19 = (uint)*(ushort *)(param_1 + 0x585a);
                    iVar9 = *(int *)(lVar13 + 0x1c);
                    lVar17 = *(long *)(lVar13 + 0x10);
                    iVar20 = uVar23 - *puVar1;
                  }
                  uVar15 = iVar20 + iVar9 * (uVar27 + ~uVar19);
                  uVar18 = 1 << (ulong)(uVar15 & 0x1f);
                  uVar14 = *(uint *)(lVar17 + (long)((int)uVar15 >> 5) * 4);
                  if ((uVar18 & uVar14) != 0) {
                    *(uint *)(lVar17 + ((long)((ulong)uVar15 << 0x20) >> 0x25) * 4) =
                         uVar14 & (uVar18 ^ 0xffffffff);
                    *(int *)(lVar13 + 0x18) = *(int *)(lVar13 + 0x18) + -1;
                  }
                  uVar23 = uVar23 + 1;
                } while (uVar26 + 1 != uVar23);
              }
              if ((int)uVar12 <= (int)uVar27) {
                do {
                  lVar13 = *(long *)(param_1 + 0x5898);
                  uVar4 = *puVar1;
                  iVar9 = *(int *)(lVar13 + 0x1c) * (uVar12 - *(ushort *)(param_1 + 0x585a));
                  uVar23 = iVar9 + (uVar22 - uVar4);
                  lVar17 = *(long *)(lVar13 + 0x10);
                  uVar18 = 1 << (ulong)(uVar23 & 0x1f);
                  uVar14 = *(uint *)(lVar17 + (long)((int)uVar23 >> 5) * 4);
                  if ((uVar18 & uVar14) != 0) {
                    *(uint *)(lVar17 + ((long)((ulong)uVar23 << 0x20) >> 0x25) * 4) =
                         uVar14 & (uVar18 ^ 0xffffffff);
                    *(int *)(lVar13 + 0x18) = *(int *)(lVar13 + 0x18) + -1;
                    lVar13 = *(long *)(param_1 + 0x5898);
                    uVar4 = *puVar1;
                    lVar17 = *(long *)(lVar13 + 0x10);
                    iVar9 = *(int *)(lVar13 + 0x1c) * (uVar12 - *(ushort *)(param_1 + 0x585a));
                  }
                  uVar15 = (uint)uVar4;
                  uVar23 = ((uVar22 + 1) - uVar15) + iVar9;
                  uVar18 = 1 << (ulong)(uVar23 & 0x1f);
                  uVar14 = *(uint *)(lVar17 + (long)((int)uVar23 >> 5) * 4);
                  if ((uVar18 & uVar14) != 0) {
                    *(uint *)(lVar17 + ((long)((ulong)uVar23 << 0x20) >> 0x25) * 4) =
                         uVar14 & (uVar18 ^ 0xffffffff);
                    *(int *)(lVar13 + 0x18) = *(int *)(lVar13 + 0x18) + -1;
                    lVar13 = *(long *)(param_1 + 0x5898);
                    uVar15 = (uint)*puVar1;
                    lVar17 = *(long *)(lVar13 + 0x10);
                    iVar9 = *(int *)(lVar13 + 0x1c) * (uVar12 - *(ushort *)(param_1 + 0x585a));
                  }
                  uVar23 = ((uVar22 + 2) - uVar15) + iVar9;
                  uVar18 = 1 << (ulong)(uVar23 & 0x1f);
                  uVar14 = *(uint *)(lVar17 + (long)((int)uVar23 >> 5) * 4);
                  if ((uVar18 & uVar14) != 0) {
                    *(uint *)(lVar17 + ((long)((ulong)uVar23 << 0x20) >> 0x25) * 4) =
                         uVar14 & (uVar18 ^ 0xffffffff);
                    *(int *)(lVar13 + 0x18) = *(int *)(lVar13 + 0x18) + -1;
                    lVar13 = *(long *)(param_1 + 0x5898);
                    uVar15 = (uint)*puVar1;
                    lVar17 = *(long *)(lVar13 + 0x10);
                    iVar9 = *(int *)(lVar13 + 0x1c) * (uVar12 - *(ushort *)(param_1 + 0x585a));
                  }
                  uVar23 = iVar9 + (uVar26 - uVar15);
                  uVar18 = 1 << (ulong)(uVar23 & 0x1f);
                  uVar14 = *(uint *)(lVar17 + (long)((int)uVar23 >> 5) * 4);
                  if ((uVar18 & uVar14) != 0) {
                    *(uint *)(lVar17 + ((long)((ulong)uVar23 << 0x20) >> 0x25) * 4) =
                         uVar14 & (uVar18 ^ 0xffffffff);
                    *(int *)(lVar13 + 0x18) = *(int *)(lVar13 + 0x18) + -1;
                    lVar13 = *(long *)(param_1 + 0x5898);
                    uVar15 = (uint)*puVar1;
                    lVar17 = *(long *)(lVar13 + 0x10);
                    iVar9 = *(int *)(lVar13 + 0x1c) * (uVar12 - *(ushort *)(param_1 + 0x585a));
                  }
                  uVar23 = uVar26 + ~uVar15 + iVar9;
                  uVar18 = 1 << (ulong)(uVar23 & 0x1f);
                  uVar14 = *(uint *)(lVar17 + (long)((int)uVar23 >> 5) * 4);
                  if ((uVar18 & uVar14) != 0) {
                    *(uint *)(lVar17 + ((long)((ulong)uVar23 << 0x20) >> 0x25) * 4) =
                         uVar14 & (uVar18 ^ 0xffffffff);
                    *(int *)(lVar13 + 0x18) = *(int *)(lVar13 + 0x18) + -1;
                  }
                  uVar12 = uVar12 + 1;
                } while (uVar27 + 1 != uVar12);
              }
              if ((int)uVar22 <= (int)uVar26) {
                uVar23 = uVar27;
                uVar12 = uVar27;
                do {
                  uVar12 = uVar12 + 1;
                  if ((int)uVar22 <= (int)uVar26) {
                    uVar14 = uVar22;
                    do {
                      lVar13 = *(long *)(param_1 + 0x5898);
                      uVar18 = uVar14 + (*(int *)(lVar13 + 0x1c) *
                                         (uVar12 - *(ushort *)(param_1 + 0x585a)) - (uint)*puVar1);
                      uVar19 = 1 << (ulong)(uVar18 & 0x1f);
                      uVar15 = *(uint *)(*(long *)(lVar13 + 0x10) + (long)((int)uVar18 >> 5) * 4);
                      if ((uVar19 & uVar15) != 0) {
                        *(uint *)(*(long *)(lVar13 + 0x10) +
                                 ((long)((ulong)uVar18 << 0x20) >> 0x25) * 4) =
                             uVar15 & (uVar19 ^ 0xffffffff);
                        *(int *)(lVar13 + 0x18) = *(int *)(lVar13 + 0x18) + -1;
                      }
                      uVar14 = uVar14 + 1;
                    } while (uVar26 + 1 != uVar14);
                  }
                  bVar8 = (int)uVar23 < (int)(uVar27 + 3);
                  uVar23 = uVar23 + 1;
                } while (bVar8);
              }
              if (*(int *)(*(long *)(param_1 + 0x5898) + 0x18) == 0) {
                uVar11 = uVar11 & 0xffffffff;
                *(undefined1 *)(param_1 + 0x58a0) = 1;
                FUN_035a8968(puVar1,uVar21,uVar10);
                FUN_035a81f0(puVar1,uVar21,uVar10,0);
                *(undefined1 *)(param_1 + 0x58a0) = 0;
                if ((int)uVar22 <= (int)uVar26) {
                  uVar23 = uVar27;
                  uVar12 = uVar27;
                  do {
                    uVar12 = uVar12 + 1;
                    if ((int)uVar22 <= (int)uVar26) {
                      uVar14 = uVar22;
                      do {
                        lVar13 = *(long *)(param_1 + 0x5898);
                        uVar18 = uVar14 + (*(int *)(lVar13 + 0x1c) *
                                           (uVar12 - *(ushort *)(param_1 + 0x585a)) - (uint)*puVar1)
                        ;
                        uVar19 = 1 << (ulong)(uVar18 & 0x1f);
                        uVar15 = *(uint *)(*(long *)(lVar13 + 0x10) + (long)((int)uVar18 >> 5) * 4);
                        if ((uVar19 & uVar15) != 0) {
                          *(uint *)(*(long *)(lVar13 + 0x10) +
                                   ((long)((ulong)uVar18 << 0x20) >> 0x25) * 4) =
                               uVar15 & (uVar19 ^ 0xffffffff);
                          *(int *)(lVar13 + 0x18) = *(int *)(lVar13 + 0x18) + -1;
                        }
                        uVar14 = uVar14 + 1;
                      } while (uVar26 + 1 != uVar14);
                    }
                    bVar8 = (int)uVar23 < (int)(uVar27 + 3);
                    uVar23 = uVar23 + 1;
                  } while (bVar8);
                }
                if (*(int *)(*(long *)(param_1 + 0x5898) + 0x18) == 0) {
                  FUN_035a8914(puVar1,uVar21,uVar10,0);
                }
              }
              if ((((uVar11 & 1) != 0) && (*(long *)(lVar3 + 0x878) != 0)) &&
                 (puVar24 = *(undefined8 **)(*(long *)(lVar3 + 0x878) + 8),
                 puVar24 != (undefined8 *)0x0)) {
                (**(code **)*puVar24)();
              }
              if ((local_ec & 1) == 0) {
                return;
              }
              if (*(long *)(lVar16 + 0x28) == 0) {
                return;
              }
              puVar24 = *(undefined8 **)(*(long *)(lVar16 + 0x28) + 8);
              if (puVar24 == (undefined8 *)0x0) {
                return;
              }
              (**(code **)*puVar24)();
              return;
            }
            if ((((uVar11 & 1) != 0) && (*(long *)(lVar3 + 0x878) != 0)) &&
               (puVar24 = *(undefined8 **)(*(long *)(lVar3 + 0x878) + 8),
               puVar24 != (undefined8 *)0x0)) {
              (**(code **)*puVar24)();
            }
          }
        }
      }
      else if ((puVar24 != (undefined8 *)0x0) && ((long *)puVar24[0x26] != (long *)0x0)) {
        lVar13 = (**(code **)(*(long *)puVar24[0x26] + 0x38))();
        if (lVar13 != 0) goto LAB_0202a88c;
      }
    }
  }
  if ((((local_ec & 1) != 0) && (*(long *)(lVar16 + 0x28) != 0)) &&
     (puVar24 = *(undefined8 **)(*(long *)(lVar16 + 0x28) + 8), puVar24 != (undefined8 *)0x0)) {
    (**(code **)*puVar24)();
  }
LAB_0202a92c:
  if ((int)(uVar26 - uVar22) < 0xc) {
    if ((int)uVar22 <= (int)uVar26) {
      uVar10 = uVar27;
      uVar12 = uVar27;
      do {
        uVar12 = uVar12 + 1;
        if ((int)uVar22 <= (int)uVar26) {
          uVar21 = uVar22;
          do {
            lVar13 = *(long *)(param_1 + 0x5898);
            uVar23 = uVar21 + (*(int *)(lVar13 + 0x1c) * (uVar12 - *(ushort *)(param_1 + 0x585a)) -
                              (uint)*puVar1);
            uVar18 = 1 << (ulong)(uVar23 & 0x1f);
            uVar14 = *(uint *)(*(long *)(lVar13 + 0x10) + (long)((int)uVar23 >> 5) * 4);
            if ((uVar18 & uVar14) != 0) {
              *(uint *)(*(long *)(lVar13 + 0x10) + ((long)((ulong)uVar23 << 0x20) >> 0x25) * 4) =
                   uVar14 & (uVar18 ^ 0xffffffff);
              *(int *)(lVar13 + 0x18) = *(int *)(lVar13 + 0x18) + -1;
            }
            uVar21 = uVar21 + 1;
          } while (uVar26 + 1 != uVar21);
        }
        bVar8 = (int)uVar10 < (int)(uVar27 + 3);
        uVar10 = uVar10 + 1;
      } while (bVar8);
    }
  }
  else {
    if ((int)uVar22 <= (int)uVar26) {
      uVar10 = uVar22;
      do {
        lVar13 = *(long *)(param_1 + 0x5898);
        uVar4 = *puVar1;
        uVar5 = *(ushort *)(param_1 + 0x585a);
        iVar9 = *(int *)(lVar13 + 0x1c);
        uVar21 = uVar10 + (iVar9 * (uVar12 - uVar5) - (uint)uVar4);
        lVar16 = *(long *)(lVar13 + 0x10);
        uVar14 = 1 << (ulong)(uVar21 & 0x1f);
        uVar23 = *(uint *)(lVar16 + (long)((int)uVar21 >> 5) * 4);
        if ((uVar14 & uVar23) != 0) {
          *(uint *)(lVar16 + ((long)((ulong)uVar21 << 0x20) >> 0x25) * 4) =
               uVar23 & (uVar14 ^ 0xffffffff);
          *(int *)(lVar13 + 0x18) = *(int *)(lVar13 + 0x18) + -1;
          lVar13 = *(long *)(param_1 + 0x5898);
          uVar4 = *puVar1;
          uVar5 = *(ushort *)(param_1 + 0x585a);
          iVar9 = *(int *)(lVar13 + 0x1c);
          lVar16 = *(long *)(lVar13 + 0x10);
        }
        iVar20 = uVar10 - uVar4;
        uVar14 = iVar20 + iVar9 * ((uVar12 + 1) - (uint)uVar5);
        uVar23 = 1 << (ulong)(uVar14 & 0x1f);
        uVar21 = *(uint *)(lVar16 + (long)((int)uVar14 >> 5) * 4);
        if ((uVar23 & uVar21) != 0) {
          *(uint *)(lVar16 + ((long)((ulong)uVar14 << 0x20) >> 0x25) * 4) =
               uVar21 & (uVar23 ^ 0xffffffff);
          *(int *)(lVar13 + 0x18) = *(int *)(lVar13 + 0x18) + -1;
          lVar13 = *(long *)(param_1 + 0x5898);
          uVar5 = *(ushort *)(param_1 + 0x585a);
          iVar9 = *(int *)(lVar13 + 0x1c);
          lVar16 = *(long *)(lVar13 + 0x10);
          iVar20 = uVar10 - *puVar1;
        }
        uVar18 = (uint)uVar5;
        uVar14 = iVar20 + iVar9 * ((uVar12 + 2) - uVar18);
        uVar23 = 1 << (ulong)(uVar14 & 0x1f);
        uVar21 = *(uint *)(lVar16 + (long)((int)uVar14 >> 5) * 4);
        if ((uVar23 & uVar21) != 0) {
          *(uint *)(lVar16 + ((long)((ulong)uVar14 << 0x20) >> 0x25) * 4) =
               uVar21 & (uVar23 ^ 0xffffffff);
          *(int *)(lVar13 + 0x18) = *(int *)(lVar13 + 0x18) + -1;
          lVar13 = *(long *)(param_1 + 0x5898);
          uVar18 = (uint)*(ushort *)(param_1 + 0x585a);
          iVar9 = *(int *)(lVar13 + 0x1c);
          lVar16 = *(long *)(lVar13 + 0x10);
          iVar20 = uVar10 - *puVar1;
        }
        uVar14 = iVar20 + iVar9 * (uVar27 - uVar18);
        uVar23 = 1 << (ulong)(uVar14 & 0x1f);
        uVar21 = *(uint *)(lVar16 + (long)((int)uVar14 >> 5) * 4);
        if ((uVar23 & uVar21) != 0) {
          *(uint *)(lVar16 + ((long)((ulong)uVar14 << 0x20) >> 0x25) * 4) =
               uVar21 & (uVar23 ^ 0xffffffff);
          *(int *)(lVar13 + 0x18) = *(int *)(lVar13 + 0x18) + -1;
          lVar13 = *(long *)(param_1 + 0x5898);
          uVar18 = (uint)*(ushort *)(param_1 + 0x585a);
          iVar9 = *(int *)(lVar13 + 0x1c);
          lVar16 = *(long *)(lVar13 + 0x10);
          iVar20 = uVar10 - *puVar1;
        }
        uVar14 = iVar20 + iVar9 * (uVar27 + ~uVar18);
        uVar23 = 1 << (ulong)(uVar14 & 0x1f);
        uVar21 = *(uint *)(lVar16 + (long)((int)uVar14 >> 5) * 4);
        if ((uVar23 & uVar21) != 0) {
          *(uint *)(lVar16 + ((long)((ulong)uVar14 << 0x20) >> 0x25) * 4) =
               uVar21 & (uVar23 ^ 0xffffffff);
          *(int *)(lVar13 + 0x18) = *(int *)(lVar13 + 0x18) + -1;
        }
        uVar10 = uVar10 + 1;
      } while (uVar26 + 1 != uVar10);
    }
    if ((int)uVar12 <= (int)uVar27) {
      do {
        lVar13 = *(long *)(param_1 + 0x5898);
        uVar4 = *puVar1;
        iVar9 = *(int *)(lVar13 + 0x1c) * (uVar12 - *(ushort *)(param_1 + 0x585a));
        uVar10 = iVar9 + (uVar22 - uVar4);
        lVar16 = *(long *)(lVar13 + 0x10);
        uVar23 = 1 << (ulong)(uVar10 & 0x1f);
        uVar21 = *(uint *)(lVar16 + (long)((int)uVar10 >> 5) * 4);
        if ((uVar23 & uVar21) != 0) {
          *(uint *)(lVar16 + ((long)((ulong)uVar10 << 0x20) >> 0x25) * 4) =
               uVar21 & (uVar23 ^ 0xffffffff);
          *(int *)(lVar13 + 0x18) = *(int *)(lVar13 + 0x18) + -1;
          lVar13 = *(long *)(param_1 + 0x5898);
          uVar4 = *puVar1;
          lVar16 = *(long *)(lVar13 + 0x10);
          iVar9 = *(int *)(lVar13 + 0x1c) * (uVar12 - *(ushort *)(param_1 + 0x585a));
        }
        uVar14 = (uint)uVar4;
        uVar10 = ((uVar22 + 1) - uVar14) + iVar9;
        uVar23 = 1 << (ulong)(uVar10 & 0x1f);
        uVar21 = *(uint *)(lVar16 + (long)((int)uVar10 >> 5) * 4);
        if ((uVar23 & uVar21) != 0) {
          *(uint *)(lVar16 + ((long)((ulong)uVar10 << 0x20) >> 0x25) * 4) =
               uVar21 & (uVar23 ^ 0xffffffff);
          *(int *)(lVar13 + 0x18) = *(int *)(lVar13 + 0x18) + -1;
          lVar13 = *(long *)(param_1 + 0x5898);
          uVar14 = (uint)*puVar1;
          lVar16 = *(long *)(lVar13 + 0x10);
          iVar9 = *(int *)(lVar13 + 0x1c) * (uVar12 - *(ushort *)(param_1 + 0x585a));
        }
        uVar10 = ((uVar22 + 2) - uVar14) + iVar9;
        uVar23 = 1 << (ulong)(uVar10 & 0x1f);
        uVar21 = *(uint *)(lVar16 + (long)((int)uVar10 >> 5) * 4);
        if ((uVar23 & uVar21) != 0) {
          *(uint *)(lVar16 + ((long)((ulong)uVar10 << 0x20) >> 0x25) * 4) =
               uVar21 & (uVar23 ^ 0xffffffff);
          *(int *)(lVar13 + 0x18) = *(int *)(lVar13 + 0x18) + -1;
          lVar13 = *(long *)(param_1 + 0x5898);
          uVar14 = (uint)*puVar1;
          lVar16 = *(long *)(lVar13 + 0x10);
          iVar9 = *(int *)(lVar13 + 0x1c) * (uVar12 - *(ushort *)(param_1 + 0x585a));
        }
        uVar10 = iVar9 + (uVar26 - uVar14);
        uVar23 = 1 << (ulong)(uVar10 & 0x1f);
        uVar21 = *(uint *)(lVar16 + (long)((int)uVar10 >> 5) * 4);
        if ((uVar23 & uVar21) != 0) {
          *(uint *)(lVar16 + ((long)((ulong)uVar10 << 0x20) >> 0x25) * 4) =
               uVar21 & (uVar23 ^ 0xffffffff);
          *(int *)(lVar13 + 0x18) = *(int *)(lVar13 + 0x18) + -1;
          lVar13 = *(long *)(param_1 + 0x5898);
          uVar14 = (uint)*puVar1;
          lVar16 = *(long *)(lVar13 + 0x10);
          iVar9 = *(int *)(lVar13 + 0x1c) * (uVar12 - *(ushort *)(param_1 + 0x585a));
        }
        uVar10 = uVar26 + ~uVar14 + iVar9;
        uVar23 = 1 << (ulong)(uVar10 & 0x1f);
        uVar21 = *(uint *)(lVar16 + (long)((int)uVar10 >> 5) * 4);
        if ((uVar23 & uVar21) != 0) {
          *(uint *)(lVar16 + ((long)((ulong)uVar10 << 0x20) >> 0x25) * 4) =
               uVar21 & (uVar23 ^ 0xffffffff);
          *(int *)(lVar13 + 0x18) = *(int *)(lVar13 + 0x18) + -1;
        }
        uVar12 = uVar12 + 1;
      } while (uVar27 + 1 != uVar12);
    }
  }
  return;
}

