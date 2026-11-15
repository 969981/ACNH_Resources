
/* WARNING: Removing unreachable block (ram,0x02035ce0) */
/* WARNING: Removing unreachable block (ram,0x02035cf0) */

void FUN_02035b00(long param_1)

{
  bool bVar1;
  ushort *puVar2;
  undefined2 uVar3;
  ushort uVar4;
  ushort uVar5;
  uint uVar6;
  undefined2 uVar7;
  int iVar8;
  undefined *puVar9;
  undefined1 *puVar10;
  undefined1 *puVar11;
  int iVar12;
  uint uVar13;
  ulong uVar14;
  int iVar15;
  long lVar16;
  uint uVar17;
  uint uVar18;
  long lVar19;
  int iVar20;
  uint uVar21;
  uint uVar22;
  uint uVar23;
  ulong uVar24;
  long lVar25;
  uint uVar26;
  float fVar27;
  float fVar28;
  long local_208;
  undefined1 *local_200;
  undefined8 *local_170;
  ushort *puStack_168;
  undefined8 local_160;
  undefined8 uStack_158;
  undefined *local_150;
  ulong local_148;
  undefined *local_140;
  undefined1 *local_138;
  uint local_130;
  undefined1 local_12c [127];
  undefined1 local_ad;
  undefined4 local_a8;
  undefined2 local_a4;
  undefined8 local_a0;
  undefined4 local_98;
  ushort *local_94;
  undefined4 local_8c;
  uint local_78;
  uint local_74;
  
  lVar25 = *(long *)PTR_DAT_04bb4938;
  if (**(char **)(lVar25 + 0x60) != '\0') {
    lVar16 = *(long *)PTR_DAT_04bb5ce0;
    if (lVar16 == 0) {
      local_74 = 0;
      uVar22 = 0;
      fVar27 = 40.0;
      iVar12 = 0x10;
      uVar23 = 0x10;
      fVar28 = 40.0;
    }
    else {
      fVar27 = *(float *)(lVar16 + 0xd74);
      fVar28 = *(float *)(lVar16 + 0xd7c);
      local_74 = *(uint *)(lVar16 + 0xd88);
      uVar22 = *(uint *)(lVar16 + 0xd8c);
      uVar23 = *(uint *)(lVar16 + 0xd98);
      iVar12 = *(int *)(lVar16 + 0xd9c);
    }
    local_160._0_4_ = 0x20;
    puVar2 = (ushort *)(param_1 + 0x5858);
    local_140._0_4_ = (uint)(uint3)local_140;
    puStack_168 = (ushort *)((long)&local_160 + 4);
    local_170 = (undefined8 *)(PTR_DAT_04bb2028 + 0x10);
    uStack_158._4_4_ = uStack_158._4_4_ & 0xffffff00;
    local_160._4_4_ = 0x72746e45;
    uStack_158._0_4_ = 0x65636e61;
    lVar16 = FUN_02917a1c(&local_170);
    puVar9 = PTR_DAT_04bb7f20;
    if (lVar16 == 0) {
      local_78 = (int)((float)(int)fVar27 / 5.0) - (uint)(fVar27 < 0.0);
      uVar13 = (int)((float)(int)fVar28 / 5.0) - (uint)(fVar28 < 0.0);
    }
    else {
      fVar27 = (float)NEON_ucvtf(*(undefined4 *)(lVar16 + 0x20));
      fVar27 = *(float *)(lVar16 + 0xc) +
               (*(float *)(lVar16 + 0x24) + *(float *)(lVar16 + 0x1c) * 0.5 + 0.0) *
               (*(float *)(PTR_DAT_04bb2d00 +
                          ((ulong)(long)(fVar27 * 11930465.0) >> 0x18 & 0xff) * 0x10) +
               (float)((uint)(long)(fVar27 * 11930465.0) & 0xffffff) * 5.9604645e-08 *
               *(float *)((long)(PTR_DAT_04bb2d00 +
                                ((ulong)(long)(fVar27 * 11930465.0) >> 0x18 & 0xff) * 0x10) + 4));
      local_78 = (int)((float)(int)fVar27 / 5.0) - (uint)(fVar27 < 0.0);
      uVar13 = iVar12 + 2;
    }
    local_160 = &local_208;
    local_208 = *(long *)(*(long *)PTR_DAT_04bb27a8 + 0x1f8);
    uStack_158 = PTR_DAT_04bbc1a0 + 0x10;
    local_150 = PTR_DAT_04bb2010 + 0x10;
    lVar16 = *(long *)PTR_DAT_04bb27c8;
    local_130 = local_130 & 0xffffff00;
    local_148 = 0;
    *(ushort *)(param_1 + 0x585c) = (ushort)local_74;
    local_138 = (undefined1 *)0x0;
    uVar7 = (undefined2)(iVar12 + 4U);
    *(undefined2 *)(param_1 + 0x5862) = uVar7;
    local_200 = (undefined1 *)(lVar16 + 0x28);
    local_170 = (undefined8 *)(puVar9 + 0x10);
    *(short *)(param_1 + 0x585e) = (short)uVar22;
    *(ushort *)(param_1 + 0x5860) = (ushort)uVar23;
    uVar4 = (ushort)local_74;
    if ((uVar23 & 0xffff) <= (local_74 & 0xffff)) {
      uVar4 = (ushort)uVar23;
    }
    *puVar2 = uVar4;
    uVar3 = (short)uVar22;
    if ((iVar12 + 4U & 0xffff) <= (uVar22 & 0xffff)) {
      uVar3 = uVar7;
    }
    *(undefined2 *)(param_1 + 0x585a) = uVar3;
    puStack_168 = puVar2;
    local_140 = local_150;
    memset((void *)(param_1 + 0xef98),2,0x3c1);
    memset(*(void **)(param_1 + 0xf370),0,(long)*(int *)(param_1 + 0xf36c) << 2);
    *(undefined4 *)(param_1 + 0xf378) = 0;
    FUN_035a4230(puVar2);
    uVar14 = *(ulong *)(param_1 + 0x5870);
    if (uVar14 != 0) {
      uVar4 = *puVar2;
      uVar26 = (uint)uVar4;
      uVar24 = 0;
      iVar15 = *(int *)(param_1 + 0x5864);
      uVar21 = (uint)*(ushort *)(param_1 + 0x585a);
      do {
        iVar20 = uVar26 - *puVar2;
        if ((((-1 < iVar20) && (iVar20 < *(int *)(param_1 + 0x5864))) &&
            (iVar8 = uVar21 - *(ushort *)(param_1 + 0x585a), -1 < iVar8)) &&
           ((iVar8 < *(int *)(param_1 + 0x5868) && (*(long *)(param_1 + 0x5878) != 0)))) {
          (*(code *)*local_170)
                    (&local_170,
                     *(long *)(param_1 + 0x5878) +
                     (long)(iVar20 + *(int *)(param_1 + 0x5864) * iVar8) * 0x28);
          uVar14 = *(ulong *)(param_1 + 0x5870);
        }
        uVar24 = uVar24 + 1;
        if (uVar26 + 1 == iVar15 + (uint)uVar4) {
          uVar21 = uVar21 + 1;
          uVar26 = (uint)uVar4;
        }
        else {
          uVar26 = uVar26 + 1;
        }
      } while (uVar24 < uVar14);
    }
    FUN_035a56c0(puVar2,0);
    *(undefined1 *)(param_1 + 0x58a0) = 1;
    local_78 = local_78 & 0xffff;
    uVar13 = uVar13 & 0xffff;
    FUN_035a8968(puVar2,local_78,uVar13);
    FUN_035a81f0(puVar2,local_78,uVar13,0);
    *(undefined1 *)(param_1 + 0x58a0) = 0;
    if ((int)local_74 <= (int)uVar23) {
      uVar21 = local_74;
      do {
        lVar16 = *(long *)(param_1 + 0x5898);
        uVar4 = *puVar2;
        uVar5 = *(ushort *)(param_1 + 0x585a);
        iVar15 = *(int *)(lVar16 + 0x1c);
        uVar26 = uVar21 + (iVar15 * (uVar22 - uVar5) - (uint)uVar4);
        lVar19 = *(long *)(lVar16 + 0x10);
        uVar17 = 1 << (ulong)(uVar26 & 0x1f);
        uVar6 = *(uint *)(lVar19 + (long)((int)uVar26 >> 5) * 4);
        if ((uVar17 & uVar6) != 0) {
          *(uint *)(lVar19 + ((long)((ulong)uVar26 << 0x20) >> 0x25) * 4) =
               uVar6 & (uVar17 ^ 0xffffffff);
          *(int *)(lVar16 + 0x18) = *(int *)(lVar16 + 0x18) + -1;
          lVar16 = *(long *)(param_1 + 0x5898);
          uVar4 = *puVar2;
          uVar5 = *(ushort *)(param_1 + 0x585a);
          iVar15 = *(int *)(lVar16 + 0x1c);
          lVar19 = *(long *)(lVar16 + 0x10);
        }
        iVar20 = uVar21 - uVar4;
        uVar17 = iVar20 + iVar15 * ((uVar22 + 1) - (uint)uVar5);
        uVar6 = 1 << (ulong)(uVar17 & 0x1f);
        uVar26 = *(uint *)(lVar19 + (long)((int)uVar17 >> 5) * 4);
        if ((uVar6 & uVar26) != 0) {
          *(uint *)(lVar19 + ((long)((ulong)uVar17 << 0x20) >> 0x25) * 4) =
               uVar26 & (uVar6 ^ 0xffffffff);
          *(int *)(lVar16 + 0x18) = *(int *)(lVar16 + 0x18) + -1;
          lVar16 = *(long *)(param_1 + 0x5898);
          uVar5 = *(ushort *)(param_1 + 0x585a);
          iVar15 = *(int *)(lVar16 + 0x1c);
          lVar19 = *(long *)(lVar16 + 0x10);
          iVar20 = uVar21 - *puVar2;
        }
        uVar18 = (uint)uVar5;
        uVar17 = iVar20 + iVar15 * ((uVar22 + 2) - uVar18);
        uVar6 = 1 << (ulong)(uVar17 & 0x1f);
        uVar26 = *(uint *)(lVar19 + (long)((int)uVar17 >> 5) * 4);
        if ((uVar6 & uVar26) != 0) {
          *(uint *)(lVar19 + ((long)((ulong)uVar17 << 0x20) >> 0x25) * 4) =
               uVar26 & (uVar6 ^ 0xffffffff);
          *(int *)(lVar16 + 0x18) = *(int *)(lVar16 + 0x18) + -1;
          lVar16 = *(long *)(param_1 + 0x5898);
          uVar18 = (uint)*(ushort *)(param_1 + 0x585a);
          iVar15 = *(int *)(lVar16 + 0x1c);
          lVar19 = *(long *)(lVar16 + 0x10);
          iVar20 = uVar21 - *puVar2;
        }
        uVar17 = iVar20 + iVar15 * (iVar12 - uVar18);
        uVar6 = 1 << (ulong)(uVar17 & 0x1f);
        uVar26 = *(uint *)(lVar19 + (long)((int)uVar17 >> 5) * 4);
        if ((uVar6 & uVar26) != 0) {
          *(uint *)(lVar19 + ((long)((ulong)uVar17 << 0x20) >> 0x25) * 4) =
               uVar26 & (uVar6 ^ 0xffffffff);
          *(int *)(lVar16 + 0x18) = *(int *)(lVar16 + 0x18) + -1;
          lVar16 = *(long *)(param_1 + 0x5898);
          uVar18 = (uint)*(ushort *)(param_1 + 0x585a);
          iVar15 = *(int *)(lVar16 + 0x1c);
          lVar19 = *(long *)(lVar16 + 0x10);
          iVar20 = uVar21 - *puVar2;
        }
        uVar17 = iVar20 + iVar15 * (iVar12 + ~uVar18);
        uVar6 = 1 << (ulong)(uVar17 & 0x1f);
        uVar26 = *(uint *)(lVar19 + (long)((int)uVar17 >> 5) * 4);
        if ((uVar6 & uVar26) != 0) {
          *(uint *)(lVar19 + ((long)((ulong)uVar17 << 0x20) >> 0x25) * 4) =
               uVar26 & (uVar6 ^ 0xffffffff);
          *(int *)(lVar16 + 0x18) = *(int *)(lVar16 + 0x18) + -1;
        }
        uVar21 = uVar21 + 1;
      } while (uVar23 + 1 != uVar21);
    }
    if ((int)uVar22 <= iVar12) {
      do {
        lVar16 = *(long *)(param_1 + 0x5898);
        uVar4 = *puVar2;
        iVar15 = *(int *)(lVar16 + 0x1c) * (uVar22 - *(ushort *)(param_1 + 0x585a));
        uVar21 = iVar15 + (local_74 - uVar4);
        lVar19 = *(long *)(lVar16 + 0x10);
        uVar6 = 1 << (ulong)(uVar21 & 0x1f);
        uVar26 = *(uint *)(lVar19 + (long)((int)uVar21 >> 5) * 4);
        if ((uVar6 & uVar26) != 0) {
          *(uint *)(lVar19 + ((long)((ulong)uVar21 << 0x20) >> 0x25) * 4) =
               uVar26 & (uVar6 ^ 0xffffffff);
          *(int *)(lVar16 + 0x18) = *(int *)(lVar16 + 0x18) + -1;
          lVar16 = *(long *)(param_1 + 0x5898);
          uVar4 = *puVar2;
          lVar19 = *(long *)(lVar16 + 0x10);
          iVar15 = *(int *)(lVar16 + 0x1c) * (uVar22 - *(ushort *)(param_1 + 0x585a));
        }
        uVar6 = (local_74 + 1 + iVar15) - (uint)uVar4;
        uVar26 = 1 << (ulong)(uVar6 & 0x1f);
        uVar21 = *(uint *)(lVar19 + (long)((int)uVar6 >> 5) * 4);
        if ((uVar26 & uVar21) != 0) {
          *(uint *)(lVar19 + ((long)((ulong)uVar6 << 0x20) >> 0x25) * 4) =
               uVar21 & (uVar26 ^ 0xffffffff);
          *(int *)(lVar16 + 0x18) = *(int *)(lVar16 + 0x18) + -1;
          lVar16 = *(long *)(param_1 + 0x5898);
          uVar4 = *puVar2;
          lVar19 = *(long *)(lVar16 + 0x10);
          iVar15 = *(int *)(lVar16 + 0x1c) * (uVar22 - *(ushort *)(param_1 + 0x585a));
        }
        uVar6 = (local_74 + 2 + iVar15) - (uint)uVar4;
        uVar26 = 1 << (ulong)(uVar6 & 0x1f);
        uVar21 = *(uint *)(lVar19 + (long)((int)uVar6 >> 5) * 4);
        if ((uVar26 & uVar21) != 0) {
          *(uint *)(lVar19 + ((long)((ulong)uVar6 << 0x20) >> 0x25) * 4) =
               uVar21 & (uVar26 ^ 0xffffffff);
          *(int *)(lVar16 + 0x18) = *(int *)(lVar16 + 0x18) + -1;
          lVar16 = *(long *)(param_1 + 0x5898);
          uVar4 = *puVar2;
          lVar19 = *(long *)(lVar16 + 0x10);
          iVar15 = *(int *)(lVar16 + 0x1c) * (uVar22 - *(ushort *)(param_1 + 0x585a));
        }
        uVar17 = (uint)uVar4;
        uVar21 = (uVar23 - uVar17) + iVar15;
        uVar6 = 1 << (ulong)(uVar21 & 0x1f);
        uVar26 = *(uint *)(lVar19 + (long)((int)uVar21 >> 5) * 4);
        if ((uVar6 & uVar26) != 0) {
          *(uint *)(lVar19 + ((long)((ulong)uVar21 << 0x20) >> 0x25) * 4) =
               uVar26 & (uVar6 ^ 0xffffffff);
          *(int *)(lVar16 + 0x18) = *(int *)(lVar16 + 0x18) + -1;
          lVar16 = *(long *)(param_1 + 0x5898);
          uVar17 = (uint)*puVar2;
          lVar19 = *(long *)(lVar16 + 0x10);
          iVar15 = *(int *)(lVar16 + 0x1c) * (uVar22 - *(ushort *)(param_1 + 0x585a));
        }
        uVar21 = iVar15 + uVar23 + ~uVar17;
        uVar6 = 1 << (ulong)(uVar21 & 0x1f);
        uVar26 = *(uint *)(lVar19 + (long)((int)uVar21 >> 5) * 4);
        if ((uVar6 & uVar26) != 0) {
          *(uint *)(lVar19 + ((long)((ulong)uVar21 << 0x20) >> 0x25) * 4) =
               uVar26 & (uVar6 ^ 0xffffffff);
          *(int *)(lVar16 + 0x18) = *(int *)(lVar16 + 0x18) + -1;
        }
        uVar22 = uVar22 + 1;
      } while (iVar12 + 1U != uVar22);
    }
    if ((int)local_74 <= (int)uVar23) {
      iVar20 = iVar12;
      iVar15 = iVar12;
      do {
        iVar15 = iVar15 + 1;
        if ((int)local_74 <= (int)uVar23) {
          uVar22 = local_74;
          do {
            lVar16 = *(long *)(param_1 + 0x5898);
            uVar21 = uVar22 + (*(int *)(lVar16 + 0x1c) *
                               (iVar15 - (uint)*(ushort *)(param_1 + 0x585a)) - (uint)*puVar2);
            uVar6 = 1 << (ulong)(uVar21 & 0x1f);
            uVar26 = *(uint *)(*(long *)(lVar16 + 0x10) + (long)((int)uVar21 >> 5) * 4);
            if ((uVar6 & uVar26) != 0) {
              *(uint *)(*(long *)(lVar16 + 0x10) + ((long)((ulong)uVar21 << 0x20) >> 0x25) * 4) =
                   uVar26 & (uVar6 ^ 0xffffffff);
              *(int *)(lVar16 + 0x18) = *(int *)(lVar16 + 0x18) + -1;
            }
            uVar22 = uVar22 + 1;
          } while (uVar23 + 1 != uVar22);
        }
        bVar1 = iVar20 < iVar12 + 3;
        iVar20 = iVar20 + 1;
      } while (bVar1);
    }
    if (*(int *)(*(long *)(param_1 + 0x5898) + 0x18) == 0) {
      *(undefined1 *)(param_1 + 0x58a0) = 1;
      FUN_035a8968(puVar2,local_78,uVar13);
      FUN_035a81f0(puVar2,local_78,uVar13,0);
      *(undefined1 *)(param_1 + 0x58a0) = 0;
      if ((int)local_74 <= (int)uVar23) {
        iVar20 = iVar12;
        iVar15 = iVar12;
        do {
          iVar15 = iVar15 + 1;
          if ((int)local_74 <= (int)uVar23) {
            uVar22 = local_74;
            do {
              lVar16 = *(long *)(param_1 + 0x5898);
              uVar21 = uVar22 + (*(int *)(lVar16 + 0x1c) *
                                 (iVar15 - (uint)*(ushort *)(param_1 + 0x585a)) - (uint)*puVar2);
              uVar6 = 1 << (ulong)(uVar21 & 0x1f);
              uVar26 = *(uint *)(*(long *)(lVar16 + 0x10) + (long)((int)uVar21 >> 5) * 4);
              if ((uVar6 & uVar26) != 0) {
                *(uint *)(*(long *)(lVar16 + 0x10) + ((long)((ulong)uVar21 << 0x20) >> 0x25) * 4) =
                     uVar26 & (uVar6 ^ 0xffffffff);
                *(int *)(lVar16 + 0x18) = *(int *)(lVar16 + 0x18) + -1;
              }
              uVar22 = uVar22 + 1;
            } while (uVar23 + 1 != uVar22);
          }
          bVar1 = iVar20 < iVar12 + 3;
          iVar20 = iVar20 + 1;
        } while (bVar1);
      }
      if (*(int *)(*(long *)(param_1 + 0x5898) + 0x18) == 0) {
        *(undefined1 *)(param_1 + 0x58a0) = 1;
        FUN_035a8968(puVar2,local_78,uVar13);
        FUN_035a81f0(puVar2,local_78,uVar13,0);
        *(undefined1 *)(param_1 + 0x58a0) = 0;
      }
    }
    iVar12 = FUN_021d7e50(lVar25 + 0x58);
    local_98 = 0;
    uVar14 = FUN_0203cba0(param_1,&local_94,&local_98,iVar12);
    if ((uVar14 & 1) != 0) {
      local_130 = 0x80;
      uStack_158._4_4_ = iVar12 + 0x400;
      local_ad = 0;
      local_a0 = 0;
      local_a4 = 0;
      local_140 = PTR_DAT_04bb2d88 + 0x10;
      local_170 = (undefined8 *)0xa00000000;
      puStack_168 = local_94;
      local_12c[0] = 0;
      local_138 = local_12c;
      local_a8 = 7;
      local_148 = local_148 & 0xffffffff00000000;
      local_150 = (undefined *)0x0;
      uStack_158._0_4_ = local_98;
      local_160._0_4_ = local_8c;
      local_160._4_4_ = 0x3f800000;
      (**(code **)(*(long *)(lVar25 + 0x58) + 0x18))(lVar25 + 0x58);
      FUN_0074fda4(&local_208,"%s/AIC:HotelIndoor/AIF:AI_NPC_HotelIndoor",
                   *(undefined8 *)(lVar25 + 0x60));
      puVar11 = local_138;
      (**(code **)(local_208 + 0x18))(&local_208);
      puVar10 = local_200;
      if (puVar11 != local_200) {
        (**(code **)(local_208 + 0x18))(&local_208);
        lVar25 = 0;
        do {
          if (local_200[lVar25] == '\0') goto LAB_0203652c;
          if (local_200[lVar25 + 1] == '\0') {
            lVar25 = lVar25 + 1;
            goto LAB_0203652c;
          }
          if (local_200[lVar25 + 2] == '\0') {
            lVar25 = lVar25 + 2;
            goto LAB_0203652c;
          }
          lVar25 = lVar25 + 3;
        } while (lVar25 != 0x80001);
        lVar25 = 0;
LAB_0203652c:
        iVar12 = (int)lVar25;
        if ((int)local_130 <= (int)lVar25) {
          iVar12 = local_130 - 1;
        }
        memcpy(puVar11,puVar10,(long)iVar12);
        puVar11[iVar12] = 0;
      }
      local_148 = CONCAT44(local_148._4_4_,1);
      FUN_02030e80(param_1,&local_170);
    }
    lVar25 = *(long *)PTR_DAT_04bb4938;
    if (**(char **)(lVar25 + 0x80) != '\0') {
      uVar14 = FUN_0203cba0(param_1,&local_94,&local_98,0x10);
      if ((uVar14 & 1) != 0) {
        local_ad = 0;
        local_130 = 0x80;
        local_12c[0] = 0;
        local_170 = (undefined8 *)0xa00000000;
        puStack_168 = local_94;
        local_138 = local_12c;
        local_a0 = 0;
        local_140 = PTR_DAT_04bb2d88 + 0x10;
        local_a4 = 0;
        local_148 = local_148 & 0xffffffff00000000;
        local_150 = (undefined *)0x0;
        local_160._0_4_ = local_8c;
        local_160._4_4_ = 0x3f800000;
        local_a8 = 7;
        uStack_158._0_4_ = local_98;
        uStack_158._4_4_ = 0x410;
        (**(code **)(*(long *)(lVar25 + 0x78) + 0x18))(lVar25 + 0x78);
        FUN_0074fda4(&local_208,"%s/AIC:HotelIndoor/AIF:AI_NPC_HotelIndoor",
                     *(undefined8 *)(lVar25 + 0x80));
        puVar11 = local_138;
        (**(code **)(local_208 + 0x18))(&local_208);
        puVar10 = local_200;
        if (puVar11 != local_200) {
          (**(code **)(local_208 + 0x18))(&local_208);
          lVar25 = 0;
          do {
            if (local_200[lVar25] == '\0') goto LAB_0203669c;
            if (local_200[lVar25 + 1] == '\0') {
              lVar25 = lVar25 + 1;
              goto LAB_0203669c;
            }
            if (local_200[lVar25 + 2] == '\0') {
              lVar25 = lVar25 + 2;
              goto LAB_0203669c;
            }
            lVar25 = lVar25 + 3;
          } while (lVar25 != 0x80001);
          lVar25 = 0;
LAB_0203669c:
          iVar12 = (int)lVar25;
          if ((int)local_130 <= (int)lVar25) {
            iVar12 = local_130 + -1;
          }
          memcpy(puVar11,puVar10,(long)iVar12);
          puVar11[iVar12] = 0;
        }
        FUN_02030e80(param_1,&local_170);
      }
    }
  }
  return;
}

