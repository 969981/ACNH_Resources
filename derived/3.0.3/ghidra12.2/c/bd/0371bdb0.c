
/* WARNING: Removing unreachable block (ram,0x0371bf8c) */
/* WARNING: Removing unreachable block (ram,0x0371bea4) */
/* WARNING: Removing unreachable block (ram,0x0371beb4) */
/* WARNING: Removing unreachable block (ram,0x0371bf9c) */

void FUN_0371bdb0(long param_1)

{
  ushort uVar1;
  ushort uVar2;
  ushort uVar3;
  ushort uVar4;
  ushort uVar5;
  ushort uVar6;
  ushort uVar7;
  undefined2 uVar8;
  undefined2 uVar9;
  undefined2 uVar10;
  int iVar11;
  undefined *puVar12;
  undefined *puVar13;
  undefined *puVar14;
  bool bVar15;
  ulong uVar16;
  long lVar17;
  long lVar18;
  int iVar19;
  ushort *puVar20;
  int iVar21;
  int iVar22;
  ulong uVar23;
  uint uVar24;
  uint uVar25;
  uint uVar26;
  float fVar27;
  int iVar28;
  float fVar29;
  undefined8 *local_140;
  ushort *puStack_138;
  undefined8 *local_130;
  undefined *puStack_128;
  undefined *local_120;
  undefined8 uStack_118;
  undefined *local_110;
  undefined8 uStack_108;
  undefined1 local_100;
  undefined8 local_f8;
  long lStack_f0;
  undefined *local_e8;
  undefined *puStack_e0;
  undefined8 local_d8;
  undefined *local_d0;
  undefined8 local_c8;
  undefined8 *local_c0;
  undefined8 local_b8;
  undefined8 **local_b0;
  undefined *puStack_a8;
  undefined *local_a0;
  undefined8 uStack_98;
  undefined *local_90;
  undefined8 uStack_88;
  undefined1 local_80;
  
  puVar13 = PTR_DAT_04bb59d8;
  if (((*(ushort **)PTR_DAT_04bc3a48 == (ushort *)0x0) || ((**(ushort **)PTR_DAT_04bc3a48 & 1) == 0)
      ) && ((*(int *)(*(long *)PTR_DAT_04bb27f8 + 0x14) == 4 ||
            (*(int *)(*(long *)PTR_DAT_04bb27f8 + 0x14) == 5)))) {
    local_b8 = local_b8 & 0xffffffff00000000;
    local_c0 = (undefined8 *)0x0;
    uVar16 = FUN_021d9820(&local_c0,1);
    puVar13 = PTR_DAT_04bb7f20;
    if ((uVar16 & 1) == 0) {
      *(undefined8 *)(param_1 + 0x14a8) = 0;
    }
    else {
      iVar21 = (int)((float)(int)(local_c0._0_4_ + -10.0) / 5.0) -
               (uint)(local_c0._0_4_ + -10.0 < 0.0);
      uVar24 = iVar21 + 3;
      iVar28 = (int)((float)(int)((float)local_b8 + -5.0) / 5.0) -
               (uint)((float)local_b8 + -5.0 < 0.0);
      local_140 = *(undefined8 **)(*(long *)PTR_DAT_04bb27a8 + 0x1f8);
      local_b0 = &local_140;
      local_80 = 0;
      puStack_a8 = PTR_DAT_04bbc1a0 + 0x10;
      local_a0 = PTR_DAT_04bb2010 + 0x10;
      uStack_98 = 0;
      lVar17 = param_1 + 0x1470;
      lVar18 = *(long *)PTR_DAT_04bb27c8;
      uVar8 = (undefined2)(iVar28 + 1U);
      *(undefined2 *)(param_1 + 0x1476) = uVar8;
      uStack_88 = 0;
      uVar9 = (undefined2)(iVar21 - 2U);
      *(undefined2 *)(param_1 + 0x1474) = uVar9;
      *(short *)(param_1 + 0x1478) = (short)uVar24;
      local_c0 = (undefined8 *)(puVar13 + 0x10);
      puStack_138 = (ushort *)(lVar18 + 0x28);
      uVar10 = (undefined2)(iVar28 + 6U);
      *(undefined2 *)(param_1 + 0x147a) = uVar10;
      if ((uVar24 & 0xffff) <= (iVar21 - 2U & 0xffff)) {
        uVar9 = (short)uVar24;
      }
      *(undefined2 *)(param_1 + 0x1470) = uVar9;
      if ((iVar28 + 6U & 0xffff) <= (iVar28 + 1U & 0xffff)) {
        uVar8 = uVar10;
      }
      *(undefined2 *)(param_1 + 0x1472) = uVar8;
      local_b8 = lVar17;
      local_90 = local_a0;
      memset((void *)(param_1 + 0xabb0),2,0x3c1);
      memset(*(void **)(param_1 + 0xaf88),0,(long)*(int *)(param_1 + 0xaf84) << 2);
      *(undefined4 *)(param_1 + 0xaf90) = 0;
      FUN_035a4230(lVar17);
      uVar16 = *(ulong *)(param_1 + 0x1488);
      if (uVar16 != 0) {
        uVar5 = *(ushort *)(param_1 + 0x1470);
        uVar26 = (uint)uVar5;
        uVar23 = 0;
        iVar22 = *(int *)(param_1 + 0x147c);
        uVar25 = (uint)*(ushort *)(param_1 + 0x1472);
        do {
          iVar19 = uVar26 - *(ushort *)(param_1 + 0x1470);
          if (((-1 < iVar19) && (iVar19 < *(int *)(param_1 + 0x147c))) &&
             ((iVar11 = uVar25 - *(ushort *)(param_1 + 0x1472), -1 < iVar11 &&
              ((iVar11 < *(int *)(param_1 + 0x1480) && (*(long *)(param_1 + 0x1490) != 0)))))) {
            (*(code *)*local_c0)
                      (&local_c0,
                       *(long *)(param_1 + 0x1490) +
                       (long)(iVar19 + *(int *)(param_1 + 0x147c) * iVar11) * 0x28);
            uVar16 = *(ulong *)(param_1 + 0x1488);
          }
          uVar23 = uVar23 + 1;
          if (uVar26 + 1 == iVar22 + (uint)uVar5) {
            uVar25 = uVar25 + 1;
            uVar26 = (uint)uVar5;
          }
          else {
            uVar26 = uVar26 + 1;
          }
        } while (uVar23 < uVar16);
      }
      FUN_035a56c0(lVar17,0);
      iVar22 = iVar28 + 3;
      iVar19 = iVar21;
      do {
        FUN_035a4360(lVar17,iVar19,iVar28,0);
        if (iVar19 < (int)uVar24) {
          iVar19 = iVar19 + 1;
        }
        else {
          iVar28 = iVar28 + 1;
          iVar19 = iVar21;
        }
      } while ((iVar21 != iVar19) || (iVar22 != iVar28));
    }
  }
  else {
    *(undefined8 *)(param_1 + 0x14a8) = 0;
    puVar14 = PTR_DAT_04bbc1a0;
    puVar12 = PTR_DAT_04bb2010;
    lVar17 = *(long *)puVar13;
    uVar5 = *(ushort *)(lVar17 + 0x28);
    uVar2 = *(ushort *)(lVar17 + 0x2c);
    uVar3 = *(ushort *)(lVar17 + 0x38);
    uVar4 = *(ushort *)(lVar17 + 0x3c);
    local_d8 = 0;
    local_e8 = PTR_DAT_04bbc1a0 + 0x10;
    puStack_e0 = PTR_DAT_04bb2010 + 0x10;
    local_c8 = 0;
    local_d0 = puStack_e0;
    FUN_02b90a80(&local_e8);
    local_b8 = (ulong)local_b8._4_4_ << 0x20;
    local_c0 = (undefined8 *)0x0;
    uVar16 = FUN_021d9820(&local_c0,1);
    if ((uVar16 & 1) == 0) {
      *(undefined8 *)(param_1 + 0xb050) = 0;
      *(undefined8 *)(param_1 + 0x14a8) = 0;
    }
    else {
      lVar17 = param_1 + 0x1470;
      local_b0 = (undefined8 **)&local_f8;
      puStack_a8 = puVar14 + 0x10;
      local_f8 = *(undefined8 *)(*(long *)PTR_DAT_04bb27a8 + 0x1f8);
      iVar21 = (int)((float)(int)(local_c0._0_4_ + -10.0) / 5.0) -
               (uint)(local_c0._0_4_ + -10.0 < 0.0);
      local_a0 = puVar12 + 0x10;
      uStack_98 = 0;
      iVar28 = (int)((float)(int)((float)local_b8 + -5.0) / 5.0) -
               (uint)((float)local_b8 + -5.0 < 0.0);
      uStack_88 = 0;
      local_c0 = (undefined8 *)(PTR_DAT_04bb7f20 + 0x10);
      lStack_f0 = *(long *)PTR_DAT_04bb27c8 + 0x28;
      local_80 = 0;
      *(ushort *)(param_1 + 0x1474) = uVar5;
      *(ushort *)(param_1 + 0x1476) = uVar2;
      *(ushort *)(param_1 + 0x1478) = uVar3;
      *(ushort *)(param_1 + 0x147a) = uVar4;
      uVar6 = uVar5;
      if (uVar3 <= uVar5) {
        uVar6 = uVar3;
      }
      uVar1 = uVar2;
      if (uVar4 <= uVar2) {
        uVar1 = uVar4;
      }
      *(ushort *)(param_1 + 0x1470) = uVar6;
      *(ushort *)(param_1 + 0x1472) = uVar1;
      local_b8 = lVar17;
      local_90 = local_a0;
      memset((void *)(param_1 + 0xabb0),2,0x3c1);
      memset(*(void **)(param_1 + 0xaf88),0,(long)*(int *)(param_1 + 0xaf84) << 2);
      *(undefined4 *)(param_1 + 0xaf90) = 0;
      FUN_035a4230(lVar17);
      uVar16 = *(ulong *)(param_1 + 0x1488);
      if (uVar16 != 0) {
        uVar7 = *(ushort *)(param_1 + 0x1470);
        uVar25 = (uint)uVar7;
        uVar23 = 0;
        iVar22 = *(int *)(param_1 + 0x147c);
        uVar24 = (uint)*(ushort *)(param_1 + 0x1472);
        do {
          iVar19 = uVar25 - *(ushort *)(param_1 + 0x1470);
          if ((((-1 < iVar19) && (iVar19 < *(int *)(param_1 + 0x147c))) &&
              (iVar11 = uVar24 - *(ushort *)(param_1 + 0x1472), -1 < iVar11)) &&
             ((iVar11 < *(int *)(param_1 + 0x1480) && (*(long *)(param_1 + 0x1490) != 0)))) {
            (*(code *)*local_c0)
                      (&local_c0,
                       *(long *)(param_1 + 0x1490) +
                       (long)(iVar19 + *(int *)(param_1 + 0x147c) * iVar11) * 0x28);
            uVar16 = *(ulong *)(param_1 + 0x1488);
          }
          uVar23 = uVar23 + 1;
          if (uVar25 + 1 == iVar22 + (uint)uVar7) {
            uVar24 = uVar24 + 1;
            uVar25 = (uint)uVar7;
          }
          else {
            uVar25 = uVar25 + 1;
          }
        } while (uVar23 < uVar16);
      }
      FUN_035a56c0(lVar17,0);
      iVar22 = iVar28 + 3;
      iVar19 = iVar21;
      do {
        FUN_035a4360(lVar17,iVar19,iVar28,0);
        if (iVar19 < iVar21 + 3) {
          iVar19 = iVar19 + 1;
        }
        else {
          iVar28 = iVar28 + 1;
          iVar19 = iVar21;
        }
      } while ((iVar21 != iVar19) || (iVar22 != iVar28));
      iVar28 = local_c8._4_4_ + 1;
      if (iVar28 != local_d8._4_4_) {
        iVar19 = (int)local_d8;
        iVar21 = local_d8._4_4_;
        iVar22 = (int)local_d8;
        do {
          FUN_035a4360(lVar17,iVar22,iVar21,0);
          if (iVar22 < (int)local_c8) {
            iVar22 = iVar22 + 1;
          }
          else {
            iVar21 = iVar21 + 1;
            iVar22 = (int)local_d8;
          }
        } while (iVar19 != iVar22 || iVar28 != iVar21);
      }
      local_120 = PTR_DAT_04bb2010;
      if ((*(byte *)(param_1 + 0x1231) >> 3 & 1) != 0) {
        *(undefined8 *)(param_1 + 0xb050) = 0;
        local_100 = 0;
        local_130 = &local_f8;
        iVar28 = *(int *)(*(long *)PTR_DAT_04bb59d8 + 0x54);
        fVar27 = (float)*(int *)(*(long *)PTR_DAT_04bb59d8 + 0x50) * 5.0 + 2.5;
        puVar20 = (ushort *)(param_1 + 0xb018);
        *puVar20 = uVar6;
        puStack_128 = PTR_DAT_04bbc1a0 + 0x10;
        fVar29 = (float)iVar28 * 5.0 + 2.5 + -5.0;
        local_120 = local_120 + 0x10;
        uStack_118 = 0;
        uStack_108 = 0;
        local_140 = (undefined8 *)(PTR_DAT_04bc2a98 + 0x10);
        *(ushort *)(param_1 + 0xb01c) = uVar5;
        *(ushort *)(param_1 + 0xb020) = uVar3;
        *(ushort *)(param_1 + 0xb022) = uVar4;
        *(ushort *)(param_1 + 0xb01e) = uVar2;
        iVar28 = (int)((float)(int)fVar27 / 5.0) - (uint)(fVar27 < 0.0);
        *(ushort *)(param_1 + 0xb01a) = uVar1;
        iVar21 = (int)((float)(int)fVar29 / 5.0) - (uint)(fVar29 < 0.0);
        puStack_138 = puVar20;
        local_110 = local_120;
        memset((void *)(param_1 + 0x12078),2,0x2c9);
        memset(*(void **)(param_1 + 0x12358),0,(long)*(int *)(param_1 + 0x12354) << 2);
        *(undefined4 *)(param_1 + 0x12360) = 0;
        FUN_035a4230(puVar20);
        uVar16 = *(ulong *)(param_1 + 0xb030);
        if (uVar16 != 0) {
          uVar5 = *puVar20;
          uVar23 = 0;
          iVar22 = *(int *)(param_1 + 0xb024);
          uVar24 = (uint)*(ushort *)(param_1 + 0xb01a);
          uVar25 = (uint)uVar5;
          do {
            iVar19 = uVar25 - *(ushort *)(param_1 + 0xb018);
            if ((((-1 < iVar19) && (iVar19 < *(int *)(param_1 + 0xb024))) &&
                (iVar11 = uVar24 - *(ushort *)(param_1 + 0xb01a), -1 < iVar11)) &&
               ((iVar11 < *(int *)(param_1 + 0xb028) && (*(long *)(param_1 + 0xb038) != 0)))) {
              (*(code *)*local_140)
                        (&local_140,
                         *(long *)(param_1 + 0xb038) +
                         (long)(iVar19 + *(int *)(param_1 + 0xb024) * iVar11) * 0x28);
              uVar16 = *(ulong *)(param_1 + 0xb030);
            }
            uVar23 = uVar23 + 1;
            bVar15 = uVar25 + 1 == iVar22 + (uint)uVar5;
            if (bVar15) {
              uVar24 = uVar24 + 1;
            }
            uVar26 = (uint)uVar5;
            if (!bVar15) {
              uVar26 = uVar25 + 1;
            }
            uVar25 = uVar26;
          } while (uVar23 < uVar16);
        }
        FUN_035a56c0(puVar20,0);
        *(undefined1 *)(param_1 + 0xb060) = 1;
        FUN_035a8968(puVar20,iVar28,iVar21);
        FUN_035a81f0(puVar20,iVar28,iVar21,0);
        *(undefined1 *)(param_1 + 0xb060) = 0;
      }
    }
  }
  return;
}

