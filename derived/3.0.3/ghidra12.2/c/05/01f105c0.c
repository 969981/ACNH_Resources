
/* WARNING: Removing unreachable block (ram,0x01f10800) */
/* WARNING: Removing unreachable block (ram,0x01f107a8) */
/* WARNING: Removing unreachable block (ram,0x01f1078c) */
/* WARNING: Removing unreachable block (ram,0x01f10798) */
/* WARNING: Removing unreachable block (ram,0x01f107b0) */
/* WARNING: Removing unreachable block (ram,0x01f10810) */
/* WARNING: Removing unreachable block (ram,0x01f10840) */
/* WARNING: Removing unreachable block (ram,0x01f10850) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01f105c0(long param_1,float *param_2,uint *param_3)

{
  undefined **ppuVar1;
  undefined2 uVar2;
  undefined2 uVar3;
  ushort uVar4;
  int iVar5;
  int iVar6;
  undefined *puVar7;
  bool bVar8;
  byte bVar9;
  byte bVar10;
  byte bVar11;
  int iVar12;
  uint *puVar13;
  float *pfVar14;
  uint uVar15;
  undefined4 uVar16;
  ulong uVar17;
  byte *pbVar18;
  uint uVar19;
  uint uVar20;
  uint uVar21;
  undefined *puVar22;
  long lVar23;
  uint uVar24;
  short *psVar25;
  ulong uVar26;
  undefined8 *puVar27;
  uint uVar28;
  uint uVar29;
  uint uVar30;
  uint uVar31;
  uint uVar32;
  float fVar33;
  float fVar34;
  float fVar35;
  float fVar36;
  float fVar37;
  float fVar38;
  byte local_9cdc [4];
  undefined8 local_9cd8;
  undefined8 local_9cd0;
  undefined4 local_9cc8;
  undefined4 uStack_9cc4;
  undefined8 local_9cc0;
  undefined8 uStack_9cb8;
  undefined8 local_9cb0;
  undefined *local_9ca8;
  undefined8 uStack_9ca0;
  undefined4 local_9c98;
  undefined4 local_9c94;
  undefined4 uStack_9c90;
  undefined8 local_9c88;
  ushort *puStack_9c80;
  undefined8 *local_9c78;
  undefined *puStack_9c70;
  undefined *local_9c68;
  undefined8 uStack_9c60;
  undefined *local_9c58;
  undefined8 uStack_9c50;
  undefined1 local_9c48;
  undefined8 local_9c40;
  long lStack_9c38;
  ushort local_9c30;
  undefined1 auStack_9c2e [2];
  ushort uStack_9c2c;
  ushort uStack_9c2a;
  ushort local_9c28;
  ushort local_9c26;
  undefined1 local_9c24 [12];
  ulong local_9c18;
  undefined1 *local_9c10;
  undefined8 local_9c08;
  undefined **appuStack_9c00 [3];
  undefined1 local_9be8 [8];
  undefined1 auStack_9be0 [8];
  undefined8 local_9bd8 [3];
  undefined1 local_9bc0 [8];
  undefined1 auStack_9bb8 [8];
  undefined8 local_9bb0 [3];
  undefined1 local_9b98 [38368];
  undefined *local_5b8;
  undefined8 local_5b0;
  undefined1 *local_5a8;
  undefined8 local_5a0;
  undefined4 local_598;
  undefined8 local_590;
  undefined8 uStack_588;
  undefined8 local_580;
  undefined8 uStack_578;
  undefined1 local_570 [128];
  undefined1 auStack_4f0 [968];
  undefined *local_128;
  undefined8 uStack_120;
  undefined8 *local_118;
  ulong local_110;
  undefined4 local_108;
  undefined8 local_104;
  undefined8 uStack_fc;
  undefined8 local_f4;
  undefined8 uStack_ec;
  undefined8 local_e4;
  undefined8 uStack_dc;
  undefined8 local_d4;
  undefined8 uStack_cc;
  undefined8 local_c4;
  undefined8 uStack_bc;
  undefined8 local_b4;
  undefined8 uStack_ac;
  undefined8 local_a4;
  undefined8 uStack_9c;
  undefined8 local_94;
  undefined4 local_8c;
  
  lVar23 = *(long *)PTR_DAT_04bb5ce0;
  appuStack_9c00[2] = &local_5b8;
  if (lVar23 == 0) {
    uVar19 = 0;
    uVar21 = 0;
    uVar24 = 0x10;
    uVar28 = 0x10;
  }
  else {
    uVar19 = *(uint *)(lVar23 + 0xd88);
    uVar21 = *(uint *)(lVar23 + 0xd8c);
    uVar28 = *(uint *)(lVar23 + 0xd98);
    uVar24 = *(uint *)(lVar23 + 0xd9c);
  }
  local_9c10 = auStack_9be0;
  local_9c24._0_8_ = 0x1f0000001f;
  local_9c18 = 0x3c1;
  uVar2 = *(undefined2 *)(param_1 + 0xb008);
  uVar32 = uVar19;
  if ((int)uVar28 <= (int)uVar19) {
    uVar32 = uVar28;
  }
  uVar20 = uVar21;
  if ((int)uVar24 <= (int)uVar21) {
    uVar20 = uVar24;
  }
  local_9c08 = 0;
  appuStack_9c00[0] = (undefined **)0x0;
  local_9be8[0] = 0;
  uVar3 = *(undefined2 *)(param_1 + 0xb00c);
  appuStack_9c00[1] = (undefined **)0x0;
  lVar23 = 0x50;
  while( true ) {
    ppuVar1 = (undefined **)((long)appuStack_9c00 + lVar23 + -8);
    *(undefined4 *)(auStack_9c2e + lVar23 + 1) = 0;
    *(undefined4 *)(auStack_9c2e + lVar23 + -2) = 0;
    *(undefined8 *)(local_9c24 + lVar23 + 0xc) = 0;
    *(undefined1 *)((long)appuStack_9c00 + lVar23 + -0x10) = 0;
    *(undefined8 *)(local_9c24 + lVar23 + -4) = 0;
    *(undefined8 *)(local_9c24 + lVar23 + 4) = 0;
    if (ppuVar1 == appuStack_9c00[2]) break;
    *(undefined4 *)((long)appuStack_9c00 + lVar23 + -5) = 0;
    *(undefined4 *)ppuVar1 = 0;
    *(undefined8 *)((long)appuStack_9c00 + lVar23 + 0x10) = 0;
    local_9be8[lVar23] = 0;
    *(undefined4 *)(auStack_9be0 + lVar23) = 0;
    *(undefined4 *)(auStack_9be0 + lVar23 + 3) = 0;
    *(undefined8 *)((long)local_9bd8 + lVar23 + 0x10) = 0;
    local_9bc0[lVar23] = 0;
    *(undefined4 *)(auStack_9bb8 + lVar23) = 0;
    *(undefined4 *)(auStack_9bb8 + lVar23 + 3) = 0;
    local_9b98[lVar23] = 0;
    *(undefined8 *)((long)local_9bb0 + lVar23) = 0;
    *(undefined8 *)((long)appuStack_9c00 + lVar23) = 0;
    *(undefined8 *)((long)appuStack_9c00 + lVar23 + 8) = 0;
    *(undefined8 *)((long)local_9bd8 + lVar23) = 0;
    *(undefined8 *)((long)local_9bd8 + lVar23 + 8) = 0;
    *(undefined8 *)((long)local_9bb0 + lVar23 + 8) = 0;
    *(undefined8 *)((long)local_9bb0 + lVar23 + 0x10) = 0;
    lVar23 = lVar23 + 0xa0;
  }
  if ((int)uVar19 <= (int)uVar28) {
    uVar19 = uVar28;
  }
  local_598 = 0x1f;
  if ((int)uVar21 <= (int)uVar24) {
    uVar21 = uVar24;
  }
  local_5a8 = local_570;
  local_5a0 = 0x1fffffffff;
  local_590 = 0;
  uStack_588 = 0;
  local_5b8 = PTR_DAT_04bb7f28 + 0x10;
  local_580 = 0;
  uStack_578 = 0;
  local_5b0 = 0x1f000003c1;
  uStack_9c2c = 0x20;
  uStack_9c2a = 0x20;
  local_9c28 = 0xe1;
  local_9c26 = 0xc1;
  local_9c30 = 0x20;
  auStack_9c2e = (undefined1  [2])0x20;
  memset(auStack_4f0,0,0x3c1);
  local_118 = &local_104;
  local_110 = 0x1fffffffff;
  local_108 = 0x1f;
  local_128 = PTR_DAT_04bb7f30 + 0x10;
  uStack_120 = 0x1f000003c1;
  local_9c40 = *(undefined8 *)(*(long *)PTR_DAT_04bb27a8 + 0x1f8);
  local_9c88 = (undefined **)((ulong)local_9c88._4_4_ << 0x20);
  lStack_9c38 = *(long *)PTR_DAT_04bb27c8 + 0x28;
  lVar23 = *(long *)(*(long *)PTR_DAT_04bb27a8 + 0x1f8);
  if (lVar23 == 0) {
    uVar28 = (uint)(ushort)local_9c24._0_2_;
    uVar29 = 0;
    uVar15 = 0;
    uVar24 = (uint)(ushort)local_9c24._4_2_;
  }
  else {
    uVar15 = *(uint *)(lVar23 + 0x20);
    if ((int)uVar32 < (int)uVar15) {
      uVar28 = local_9c24._0_4_ + uVar15;
    }
    else {
      uVar24 = local_9c24._0_4_ + uVar32;
      iVar12 = *(int *)(lVar23 + 0x30) + 1;
      uVar28 = uVar24;
      if (iVar12 <= (int)uVar24) {
        uVar28 = *(int *)(lVar23 + 0x30) + 1;
      }
      uVar15 = iVar12 - local_9c24._0_4_;
      if ((int)uVar24 <= iVar12) {
        uVar15 = uVar32;
      }
    }
    uVar29 = *(uint *)(lVar23 + 0x24);
    if ((int)uVar20 < (int)uVar29) {
      uVar24 = local_9c24._4_4_ + uVar29;
    }
    else {
      uVar24 = local_9c24._4_4_ + uVar20;
      iVar12 = *(int *)(lVar23 + 0x34) + 1;
      uVar29 = iVar12 - local_9c24._4_4_;
      if ((int)uVar24 <= iVar12) {
        uVar29 = uVar20;
      }
      if (iVar12 <= (int)uVar24) {
        uVar24 = *(int *)(lVar23 + 0x34) + 1;
      }
    }
  }
  uStack_9c2c = (ushort)uVar15;
  local_9c28 = (ushort)uVar28;
  uStack_9c2a = (ushort)uVar29;
  local_9c30 = uStack_9c2c;
  if ((uVar28 & 0xffff) <= (uVar15 & 0xffff)) {
    local_9c30 = local_9c28;
  }
  local_9c26 = (ushort)uVar24;
  auStack_9c2e = (undefined1  [2])uStack_9c2a;
  if ((uVar24 & 0xffff) <= (uVar29 & 0xffff)) {
    auStack_9c2e = (undefined1  [2])local_9c26;
  }
  memset(auStack_4f0,2,0x3c1);
  local_104 = 0;
  uStack_fc = 0;
  local_94 = 0;
  local_8c = 0;
  local_110 = local_110 & 0xffffffff00000000;
  local_f4 = 0;
  uStack_ec = 0;
  local_e4 = 0;
  uStack_dc = 0;
  local_d4 = 0;
  uStack_cc = 0;
  local_c4 = 0;
  uStack_bc = 0;
  local_b4 = 0;
  uStack_ac = 0;
  local_a4 = 0;
  uStack_9c = 0;
  FUN_035a4230(&local_9c30);
  local_9c78 = &local_9c40;
  puStack_9c70 = PTR_DAT_04bbc1a0 + 0x10;
  local_9c88 = &PTR_FUN_04a64408;
  local_9c48 = 0;
  local_9c68 = PTR_DAT_04bb2010 + 0x10;
  uStack_9c60 = 0;
  uStack_9c50 = 0;
  puStack_9c80 = &local_9c30;
  local_9c58 = local_9c68;
  if (local_9c18 != 0) {
    uVar24 = (uint)local_9c30;
    uVar26 = 0;
    uVar28 = (uint)(ushort)auStack_9c2e;
    uVar20 = (uint)local_9c30;
    iVar12 = local_9c24._0_4_ + uVar20;
    uVar17 = local_9c18;
    do {
      iVar5 = uVar24 - local_9c30;
      if (-1 < iVar5) {
        if (iVar5 < (int)local_9c24._0_4_) {
          iVar6 = uVar28 - (ushort)auStack_9c2e;
          if (-1 < iVar6) {
            if ((iVar6 < (int)local_9c24._4_4_) && (local_9c10 != (undefined1 *)0x0)) {
              (*(code *)*local_9c88)
                        (&local_9c88,local_9c10 + (long)(iVar5 + local_9c24._0_4_ * iVar6) * 0x28);
              uVar17 = local_9c18;
            }
          }
        }
      }
      uVar26 = uVar26 + 1;
      if (uVar24 + 1 == iVar12) {
        uVar28 = uVar28 + 1;
        uVar24 = uVar20;
      }
      else {
        uVar24 = uVar24 + 1;
      }
    } while (uVar26 < uVar17);
  }
  FUN_035a56c0(&local_9c30,0);
  local_9be8[0] = 1;
  FUN_035a8968(&local_9c30,uVar2,uVar3);
  FUN_035a81f0(&local_9c30,uVar2,uVar3,0);
  local_9be8[0] = 0;
  uVar15 = *(int *)((long)appuStack_9c00[2] + 0x1c) * (uVar21 - (ushort)auStack_9c2e) -
           (uint)local_9c30;
  puVar22 = appuStack_9c00[2][2];
  uVar28 = 1 << (ulong)(uVar15 + 0x1e & 0x1f) &
           *(uint *)(puVar22 + (long)((int)(uVar15 + 0x1e) >> 5) * 4);
  uVar24 = 1 << (ulong)(uVar15 + 0x1f & 0x1f) &
           *(uint *)(puVar22 + (long)((int)(uVar15 + 0x1f) >> 5) * 4);
  uVar20 = *(uint *)(puVar22 + (long)((int)(uVar15 + 0x20) >> 5) * 4) & 1 << (ulong)(uVar15 & 0x1f);
  uVar15 = *(uint *)(puVar22 + (long)((int)(uVar15 + 0x21) >> 5) * 4) &
           1 << (ulong)(uVar15 + 0x21 & 0x1f);
  if (((uVar20 == 0 && uVar15 == 0) && uVar28 == 0) && uVar24 == 0) {
LAB_01f10f0c:
    puVar22 = PTR_DAT_04bb2010;
    uVar4 = local_9c26;
    if (uVar15 == 0) {
LAB_01f10f40:
      if (uVar20 != 0) {
        iVar12 = 0x20;
        local_9cd8 = puVar22 + 0x10;
        local_9cd0._0_4_ = 0x20;
        local_9cd0._4_4_ = uVar21;
        uVar26 = FUN_02149900(&local_9c30,&local_9cd8);
        if ((uVar26 & 1) != 0) goto LAB_01f10fb4;
      }
      if (uVar24 != 0) {
        iVar12 = 0x1f;
        local_9cd8 = puVar22 + 0x10;
        local_9cd0._0_4_ = 0x1f;
        local_9cd0._4_4_ = uVar21;
        uVar26 = FUN_02149900(&local_9c30,&local_9cd8);
        if ((uVar26 & 1) != 0) goto LAB_01f10fb4;
      }
      if (uVar28 != 0) {
        iVar12 = 0x1e;
        local_9cd8 = puVar22 + 0x10;
        local_9cd0._0_4_ = 0x1e;
        local_9cd0._4_4_ = uVar21;
        uVar26 = FUN_02149900(&local_9c30,&local_9cd8);
        if ((uVar26 & 1) != 0) goto LAB_01f10fb4;
      }
      local_9c08 = 0;
      appuStack_9c00[0] = (undefined **)0x0;
      if (local_9c18 != 0) {
        uVar26 = 0;
        uVar28 = (uint)(ushort)auStack_9c2e;
        uVar24 = (uint)local_9c30;
        do {
          iVar12 = uVar24 - local_9c30;
          if ((((-1 < iVar12) && (iVar12 < (int)local_9c24._0_4_)) &&
              (iVar5 = uVar28 - (ushort)auStack_9c2e, -1 < iVar5)) &&
             ((iVar5 < (int)local_9c24._4_4_ && (local_9c10 != (undefined1 *)0x0)))) {
            iVar12 = iVar12 + local_9c24._0_4_ * iVar5;
            if (local_9c10[(long)iVar12 * 0x28 + 6] != '\x03') {
              local_9c10[(long)iVar12 * 0x28 + 6] = '\0';
              *(undefined8 *)(local_9c10 + (long)iVar12 * 0x28 + 0x18) = 0;
              *(undefined8 *)(local_9c10 + (long)iVar12 * 0x28 + 8) = 0;
              *(undefined8 *)(local_9c10 + (long)iVar12 * 0x28 + 0x10) = 0;
            }
          }
          uVar26 = uVar26 + 1;
          bVar8 = uVar24 + 1 == local_9c24._0_4_ + (uint)local_9c30;
          if (bVar8) {
            uVar28 = uVar28 + 1;
          }
          uVar20 = (uint)local_9c30;
          if (!bVar8) {
            uVar20 = uVar24 + 1;
          }
          uVar24 = uVar20;
        } while (uVar26 < local_9c18);
      }
      local_9be8[0] = 1;
      FUN_035a8968(&local_9c30,uVar2,uVar3);
      FUN_035a81f0(&local_9c30,uVar2,uVar3,0);
      local_9be8[0] = 0;
      if ((int)(uVar21 + 5) < (int)(uint)uVar4) {
        do {
          uVar28 = uVar21 + 5;
          do {
            uVar15 = (uVar32 - local_9c30) +
                     *(int *)((long)appuStack_9c00[2] + 0x1c) * (uVar28 - (ushort)auStack_9c2e);
            uVar20 = 1 << (ulong)(uVar15 & 0x1f);
            uVar24 = *(uint *)(appuStack_9c00[2][2] + (long)((int)uVar15 >> 5) * 4);
            if ((uVar20 & uVar24) != 0) {
              *(uint *)(appuStack_9c00[2][2] + ((long)((ulong)uVar15 << 0x20) >> 0x25) * 4) =
                   uVar24 & (uVar20 ^ 0xffffffff);
              *(int *)(appuStack_9c00[2] + 3) = *(int *)(appuStack_9c00[2] + 3) + -1;
            }
            uVar28 = uVar28 + 1;
          } while (uVar4 != uVar28);
          bVar8 = uVar32 != uVar19;
          uVar32 = uVar32 + 1;
        } while (bVar8);
      }
    }
    else {
LAB_01f10f20:
      uVar4 = local_9c26;
      puVar22 = PTR_DAT_04bb2010;
      iVar12 = 0x21;
      local_9cd8 = PTR_DAT_04bb2010 + 0x10;
      local_9cd0._0_4_ = 0x21;
      local_9cd0._4_4_ = uVar21;
      uVar26 = FUN_02149900(&local_9c30,&local_9cd8);
      if ((uVar26 & 1) == 0) goto LAB_01f10f40;
LAB_01f10fb4:
      uVar28 = (iVar12 - (uint)local_9c30) +
               *(int *)((long)appuStack_9c00[2] + 0x1c) * (uVar21 - (ushort)auStack_9c2e);
      uVar21 = 1 << (ulong)(uVar28 & 0x1f);
      uVar19 = *(uint *)(appuStack_9c00[2][2] + (long)((int)uVar28 >> 5) * 4);
      if ((uVar21 & uVar19) == 0) {
        *(uint *)(appuStack_9c00[2][2] + ((long)((ulong)uVar28 << 0x20) >> 0x25) * 4) =
             uVar21 | uVar19;
        *(int *)(appuStack_9c00[2] + 3) = *(int *)(appuStack_9c00[2] + 3) + 1;
      }
    }
  }
  else {
    memset(auStack_4f0,2,0x3c1);
    memset(local_118,0,(long)uStack_120._4_4_ << 2);
    local_110 = local_110 & 0xffffffff00000000;
    FUN_035a4230(&local_9c30);
    if (local_9c18 != 0) {
      uVar30 = (uint)local_9c30;
      uVar26 = 0;
      uVar29 = (uint)(ushort)auStack_9c2e;
      uVar31 = (uint)local_9c30;
      iVar12 = local_9c24._0_4_ + uVar31;
      uVar17 = local_9c18;
      do {
        iVar5 = uVar30 - local_9c30;
        if (-1 < iVar5) {
          if (iVar5 < (int)local_9c24._0_4_) {
            iVar6 = uVar29 - (ushort)auStack_9c2e;
            if (-1 < iVar6) {
              if ((iVar6 < (int)local_9c24._4_4_) && (local_9c10 != (undefined1 *)0x0)) {
                (*(code *)*local_9c88)
                          (&local_9c88,local_9c10 + (long)(iVar5 + local_9c24._0_4_ * iVar6) * 0x28)
                ;
                uVar17 = local_9c18;
              }
            }
          }
        }
        uVar26 = uVar26 + 1;
        if (uVar30 + 1 == iVar12) {
          uVar29 = uVar29 + 1;
          uVar30 = uVar31;
        }
        else {
          uVar30 = uVar30 + 1;
        }
      } while (uVar26 < uVar17);
    }
    FUN_035a56c0(&local_9c30,0);
    local_9cd8._0_4_ = *(undefined4 *)(*(long *)(param_1 + 8) + 0x230);
    FUN_02147c00(&local_9c30,&local_9cd8,PTR_DAT_04bb3238,0);
    if (local_9c10 == (undefined1 *)0x0) goto LAB_01f10f0c;
    iVar12 = (uVar21 - (ushort)auStack_9c2e) * local_9c24._0_4_ - (uint)local_9c30;
    if ((uVar15 == 0) || (local_9c10[(long)(iVar12 + 0x21) * 0x28 + 6] == '\x03')) {
LAB_01f10ccc:
      if ((uVar20 != 0) && (local_9c10[(long)(iVar12 + 0x20) * 0x28 + 6] != '\x03')) {
        local_9be8[0] = 1;
        FUN_035a8968(&local_9c30,0x20,uVar21);
        FUN_035a81f0(&local_9c30,0x20,uVar21,0);
        local_9be8[0] = 0;
        uVar29 = -(uint)local_9c30 +
                 *(int *)((long)appuStack_9c00[2] + 0x1c) * (uVar21 - (ushort)auStack_9c2e);
        if ((*(uint *)(appuStack_9c00[2][2] + (long)((int)(uVar29 + 0x20) >> 5) * 4) >>
             (ulong)(uVar29 & 0x1f) & 1) != 0) goto LAB_01f10e68;
        if (local_9c10 == (undefined1 *)0x0) goto LAB_01f10f0c;
        iVar12 = -(uint)local_9c30 + (uVar21 - (ushort)auStack_9c2e) * local_9c24._0_4_;
      }
      if ((uVar24 != 0) && (local_9c10[(long)(iVar12 + 0x1f) * 0x28 + 6] != '\x03')) {
        local_9be8[0] = 1;
        FUN_035a8968(&local_9c30,0x1f,uVar21);
        FUN_035a81f0(&local_9c30,0x1f,uVar21,0);
        local_9be8[0] = 0;
        uVar29 = -(uint)local_9c30 +
                 *(int *)((long)appuStack_9c00[2] + 0x1c) * (uVar21 - (ushort)auStack_9c2e) + 0x1f;
        if ((*(uint *)(appuStack_9c00[2][2] + (long)((int)uVar29 >> 5) * 4) >>
             (ulong)(uVar29 & 0x1f) & 1) != 0) goto LAB_01f10e68;
        if (local_9c10 == (undefined1 *)0x0) goto LAB_01f10f0c;
        iVar12 = -(uint)local_9c30 + (uVar21 - (ushort)auStack_9c2e) * local_9c24._0_4_;
      }
      if ((uVar28 != 0) && (local_9c10[(long)(iVar12 + 0x1e) * 0x28 + 6] != '\x03')) {
        local_9be8[0] = 1;
        FUN_035a8968(&local_9c30,0x1e,uVar21);
        FUN_035a81f0(&local_9c30,0x1e,uVar21,0);
        local_9be8[0] = 0;
        uVar29 = (*(int *)((long)appuStack_9c00[2] + 0x1c) * (uVar21 - (ushort)auStack_9c2e) -
                 (uint)local_9c30) + 0x1e;
        if ((*(uint *)(appuStack_9c00[2][2] + (long)((int)uVar29 >> 5) * 4) >>
             (ulong)(uVar29 & 0x1f) & 1) != 0) goto LAB_01f10e68;
      }
      goto LAB_01f10f0c;
    }
    local_9be8[0] = 1;
    FUN_035a8968(&local_9c30,0x21,uVar21);
    FUN_035a81f0(&local_9c30,0x21,uVar21,0);
    local_9be8[0] = 0;
    uVar29 = -(uint)local_9c30 +
             *(int *)((long)appuStack_9c00[2] + 0x1c) * (uVar21 - (ushort)auStack_9c2e) + 0x21;
    if ((*(uint *)(appuStack_9c00[2][2] + (long)((int)uVar29 >> 5) * 4) >> (ulong)(uVar29 & 0x1f) &
        1) == 0) {
      if (local_9c10 != (undefined1 *)0x0) {
        iVar12 = -(uint)local_9c30 + (uVar21 - (ushort)auStack_9c2e) * local_9c24._0_4_;
        goto LAB_01f10ccc;
      }
      goto LAB_01f10f20;
    }
LAB_01f10e68:
    puVar22 = PTR_DAT_04bb2010;
    local_9be8[0] = 0;
    local_9cd8 = (undefined *)CONCAT44(local_9cd8._4_4_,(uint)local_9cd8);
    if ((int)(uVar21 + 1) < (int)(uint)local_9c26) {
      do {
        uVar28 = uVar21 + 1;
        do {
          uVar15 = (uVar32 - local_9c30) +
                   *(int *)((long)appuStack_9c00[2] + 0x1c) * (uVar28 - (ushort)auStack_9c2e);
          uVar20 = 1 << (ulong)(uVar15 & 0x1f);
          uVar24 = *(uint *)(appuStack_9c00[2][2] + (long)((int)uVar15 >> 5) * 4);
          if ((uVar20 & uVar24) != 0) {
            *(uint *)(appuStack_9c00[2][2] + ((long)((ulong)uVar15 << 0x20) >> 0x25) * 4) =
                 uVar24 & (uVar20 ^ 0xffffffff);
            *(int *)(appuStack_9c00[2] + 3) = *(int *)(appuStack_9c00[2] + 3) + -1;
          }
          uVar28 = uVar28 + 1;
        } while (local_9c26 != uVar28);
        bVar8 = uVar32 != uVar19;
        uVar32 = uVar32 + 1;
        local_9cd8 = (undefined *)CONCAT44(local_9cd8._4_4_,(uint)local_9cd8);
      } while (bVar8);
    }
  }
  lVar23 = *(long *)(param_1 + 8);
  fVar37 = *(float *)(lVar23 + 0x6a8);
  fVar36 = *(float *)(lVar23 + 0x6ac);
  fVar38 = *(float *)(lVar23 + 0x6b0);
  puVar13 = (uint *)nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_04bb39d8);
  uVar21 = puVar13[3];
  uVar19 = *puVar13;
  *puVar13 = puVar13[1];
  puVar13[1] = puVar13[2];
  uVar19 = uVar19 ^ uVar19 << 0xb;
  local_9cb0 = 0;
  local_9cc0 = puVar22 + 0x10;
  uVar19 = uVar19 >> 8 ^ uVar21 >> 0x13 ^ uVar19 ^ uVar21;
  puVar13[2] = uVar21;
  puVar13[3] = uVar19;
  puVar27 = (undefined8 *)(param_1 + 0xb010);
  uStack_9ca0 = *puVar27;
  uStack_9cb8 = 0;
  local_9cc8 = 0;
  uStack_9cc4 = 0;
  local_9c98 = *(undefined4 *)(param_1 + 0xb018);
  local_9ca8 = PTR_DAT_04bbbc20 + 0x10;
  local_9cd8 = PTR_DAT_04bbc1a0 + 0x10;
  local_9c94 = *(undefined4 *)(param_1 + 0xb01c);
  uStack_9c90 = 0;
  local_9cd0 = local_9cc0;
  uVar26 = FUN_021f2ed0(puVar27,&local_9cb0);
  if ((uVar26 & 1) == 0) {
    uVar26 = FUN_021f4f90(puVar27,&local_9cd8,&local_9cb0);
    if ((uVar26 & 1) != 0) {
      uVar16 = 3;
      goto LAB_01f11238;
    }
  }
  else {
    uVar16 = 1;
LAB_01f11238:
    local_9cb0 = CONCAT44(uVar16,(float)local_9cb0);
  }
  *(undefined4 *)(param_1 + 0xb020) = 0;
  *(undefined4 *)(*(long *)(param_1 + 8) + 0x750) = 0;
  puVar22 = PTR_DAT_04bb4718;
  lVar23 = *(long *)PTR_DAT_04bb39b0;
  pbVar18 = PTR_DAT_04bb32e0;
  if (lVar23 == 0) {
LAB_01f112a8:
    if (*pbVar18 < 8) goto LAB_01f11320;
LAB_01f112b4:
    if (*(long **)PTR_DAT_04bb27d0 == (long *)0x0) {
LAB_01f11318:
      pbVar18 = PTR_DAT_04bb5038;
      goto LAB_01f11320;
    }
    lVar23 = **(long **)PTR_DAT_04bb27d0;
    bVar9 = *(byte *)(lVar23 + 0x473);
    pbVar18 = PTR_DAT_04bb5038;
    if ((long)(char)bVar9 != 0xffffffffffffffff) {
      puVar13 = (uint *)(lVar23 + 0x48) + ((long)(char)bVar9 & 0xffffffffU) * 0x20;
      if (7 < bVar9) {
        puVar13 = (uint *)(lVar23 + 0x48);
      }
      if ((*puVar13 & 8) != 0) {
        pbVar18 = (byte *)(lVar23 + 0x471);
      }
    }
    local_9cdc[0] = *pbVar18;
    if (7 < local_9cdc[0]) goto LAB_01f11318;
  }
  else {
    if (*(int *)(lVar23 + 0x15c) != 0) {
      pbVar18 = (byte *)(lVar23 + 0x158);
    }
    if (7 < *pbVar18) {
      if ((*(int *)(lVar23 + 0x15c) != 0) && (*(long *)PTR_DAT_04bb4718 != 0)) {
        pbVar18 = (byte *)(*(long *)PTR_DAT_04bb4718 + 0x11a5);
        goto LAB_01f112a8;
      }
      goto LAB_01f112b4;
    }
LAB_01f11320:
    local_9cdc[0] = *pbVar18;
    if (7 < local_9cdc[0]) {
      local_9cdc[0] = 0xff;
    }
  }
  bVar9 = FUN_0252ee10(local_9cdc);
  bVar10 = FUN_0255b714(local_9cdc,1);
  lVar23 = *(long *)puVar22;
  if ((lVar23 == 0) || (uVar26 = (ulong)local_9cdc[0], 7 < uVar26)) {
    if ((DAT_054f0c70 & 1) == 0) {
      iVar12 = __cxa_guard_acquire(&DAT_054f0c70);
      psVar25 = &DAT_054f0c08;
      if (iVar12 != 0) {
        DAT_054f0c1c._0_4_ = 0;
        DAT_054f0c1c._4_4_ = 0;
        DAT_054f0c68 = 1;
        DAT_054f0c6c = '\0';
        DAT_054f0c24._0_4_ = 0;
        DAT_054f0c24._4_4_ = 0;
        DAT_054f0c2c._0_4_ = 0;
        DAT_054f0c2c._4_4_ = 0;
        _DAT_054f0c44 = 0;
        DAT_054f0c34._0_4_ = 0;
        DAT_054f0c34._4_4_ = 0;
        DAT_054f0c3c._0_4_ = 0;
        DAT_054f0c3c._4_4_ = 0;
        _DAT_054f0c08 = 0;
        _DAT_054f0c10 = 1;
        DAT_054f0c14._0_4_ = 0;
        DAT_054f0c14._4_4_ = 0;
        DAT_054f0c48 = 0;
        DAT_054f0c50 = 0;
        DAT_054f0c58 = 0;
        DAT_054f0c60 = 0;
        __cxa_guard_release(&DAT_054f0c70);
      }
    }
    else {
      psVar25 = &DAT_054f0c08;
    }
  }
  else {
    psVar25 = (short *)(lVar23 + uVar26 * 0xd0 +
                        (ulong)(*(uint *)(lVar23 + uVar26 * 4 + 0xd68) & 1) * 0x68 + 0x6e8);
  }
  puVar7 = PTR_DAT_04bb6298;
  if (((char)psVar25[0x32] == '\0') || (*psVar25 != *(short *)PTR_DAT_04bb6298)) {
    local_9cd8._0_4_ = 1;
  }
  else {
    local_9cd8._0_4_ = *(uint *)(psVar25 + 0x30);
  }
  lVar23 = *(long *)puVar22;
  if ((lVar23 == 0) || (uVar26 = (ulong)local_9cdc[0], 7 < uVar26)) {
    if ((DAT_054f0c70 & 1) == 0) {
      iVar12 = __cxa_guard_acquire(&DAT_054f0c70);
      psVar25 = &DAT_054f0c08;
      if (iVar12 != 0) {
        DAT_054f0c1c._0_4_ = 0;
        DAT_054f0c1c._4_4_ = 0;
        DAT_054f0c68 = 1;
        DAT_054f0c6c = '\0';
        DAT_054f0c24._0_4_ = 0;
        DAT_054f0c24._4_4_ = 0;
        DAT_054f0c2c._0_4_ = 0;
        DAT_054f0c2c._4_4_ = 0;
        _DAT_054f0c44 = 0;
        DAT_054f0c34._0_4_ = 0;
        DAT_054f0c34._4_4_ = 0;
        DAT_054f0c3c._0_4_ = 0;
        DAT_054f0c3c._4_4_ = 0;
        _DAT_054f0c08 = 0;
        _DAT_054f0c10 = 1;
        DAT_054f0c14._0_4_ = 0;
        DAT_054f0c14._4_4_ = 0;
        DAT_054f0c48 = 0;
        DAT_054f0c50 = 0;
        DAT_054f0c58 = 0;
        DAT_054f0c60 = 0;
        __cxa_guard_release(&DAT_054f0c70);
      }
    }
    else {
      psVar25 = &DAT_054f0c08;
    }
  }
  else {
    psVar25 = (short *)(lVar23 + uVar26 * 0xd0 +
                        (ulong)(*(uint *)(lVar23 + uVar26 * 4 + 0xd68) & 1) * 0x68 + 0x6e8);
  }
  if ((((char)psVar25[0x32] == '\0') || (*psVar25 != *(short *)puVar7)) ||
     (uVar21 = *(uint *)(psVar25 + 2), 0x148 < uVar21)) {
    uVar21 = 0;
    lVar23 = *(long *)puVar22;
    if (lVar23 != 0) goto LAB_01f11458;
LAB_01f11498:
    if ((DAT_054f0c70 & 1) == 0) {
      iVar12 = __cxa_guard_acquire(&DAT_054f0c70);
      psVar25 = &DAT_054f0c08;
      if (iVar12 != 0) {
        DAT_054f0c1c._0_4_ = 0;
        DAT_054f0c1c._4_4_ = 0;
        DAT_054f0c68 = 1;
        DAT_054f0c6c = '\0';
        DAT_054f0c24._0_4_ = 0;
        DAT_054f0c24._4_4_ = 0;
        DAT_054f0c2c._0_4_ = 0;
        DAT_054f0c2c._4_4_ = 0;
        _DAT_054f0c44 = 0;
        DAT_054f0c34._0_4_ = 0;
        DAT_054f0c34._4_4_ = 0;
        DAT_054f0c3c._0_4_ = 0;
        DAT_054f0c3c._4_4_ = 0;
        _DAT_054f0c08 = 0;
        _DAT_054f0c10 = 1;
        DAT_054f0c14._0_4_ = 0;
        DAT_054f0c14._4_4_ = 0;
        DAT_054f0c48 = 0;
        DAT_054f0c50 = 0;
        DAT_054f0c58 = 0;
        DAT_054f0c60 = 0;
        __cxa_guard_release(&DAT_054f0c70);
      }
      goto LAB_01f11484;
    }
    psVar25 = &DAT_054f0c08;
    if (DAT_054f0c6c != '\0') goto LAB_01f114b8;
LAB_01f114d4:
    uVar28 = 0;
    puVar22 = local_9cc0;
  }
  else {
    lVar23 = *(long *)puVar22;
    if (lVar23 == 0) goto LAB_01f11498;
LAB_01f11458:
    uVar26 = (ulong)local_9cdc[0];
    if (7 < uVar26) goto LAB_01f11498;
    psVar25 = (short *)(lVar23 + uVar26 * 0xd0 +
                        (ulong)(*(uint *)(lVar23 + uVar26 * 4 + 0xd68) & 1) * 0x68 + 0x6e8);
LAB_01f11484:
    if ((char)psVar25[0x32] == '\0') goto LAB_01f114d4;
LAB_01f114b8:
    if (*psVar25 != *(short *)puVar7) goto LAB_01f114d4;
    uVar28 = *(uint *)(psVar25 + 2);
    puVar22 = local_9cc0;
    if (0x148 < uVar28) goto LAB_01f114d4;
  }
  local_9cc0._4_4_ = (undefined4)((ulong)puVar22 >> 0x20);
  bVar11 = bVar10;
  if ((local_9cb0._4_4_ == 1) || (bVar11 = bVar9, local_9cb0._4_4_ == 3)) {
    if ((bVar11 & 1) != 0) goto LAB_01f1153c;
LAB_01f115b0:
    local_9cd8._0_4_ = (uint)local_9cd8 & 0xffffff00;
    local_9cd8._4_4_ = 0;
    local_9cd0._0_4_ = 0;
    local_9cd0._4_4_ = 0;
    local_9cc8 = 0;
    uStack_9cc4 = 0;
    local_9cc0._0_4_ = 0;
    FUN_01ec6980(param_1,&local_9cd8,&local_9ca8,0);
    if ((char)local_9cd8 != '\0') {
      local_9cb0 = local_9cb0 & 0xffffffff00000000;
      fVar37 = *(float *)(param_1 + 0xb010);
      local_9cc8 = 0;
      uStack_9cc4 = 0;
      fVar38 = *(float *)(param_1 + 0xb018);
      local_9cd8 = PTR_DAT_04bbc1a0 + 0x10;
      uVar19 = *(uint *)(param_1 + 0xb01c);
      local_9cd0 = PTR_DAT_04bb2010 + 0x10;
      uStack_9cb8 = 0;
      local_9cc0 = local_9cd0;
      uVar26 = FUN_021f2ed0(puVar27,&local_9cb0);
      if ((uVar26 & 1) == 0) {
        uVar26 = FUN_021f4f90(puVar27,&local_9cd8,&local_9cb0);
        if ((uVar26 & 1) == 0) goto LAB_01f1171c;
        uVar16 = 3;
      }
      else {
        uVar16 = 1;
      }
      *(undefined4 *)(param_1 + 0xb020) = uVar16;
      *(undefined4 *)(*(long *)(param_1 + 8) + 0x750) = uVar16;
      fVar36 = (float)local_9cb0;
      goto LAB_01f1171c;
    }
  }
  else {
    if (uVar28 - 0x118 < 3) goto LAB_01f115b0;
    local_9cc0 = puVar22;
    bVar11 = FUN_0252f03c(local_9cdc);
    puVar22 = local_9cc0;
    if (((bVar10 | bVar9 | uVar21 == 0x114 | bVar11 ^ 0xff) & 1) != 0) {
      uVar26 = FUN_0252f488(local_9cdc);
      puVar22 = local_9cc0;
      if ((uVar26 & 1) == 0) goto LAB_01f115b0;
    }
LAB_01f1153c:
    iVar12 = local_9cb0._4_4_;
    local_9cc0 = puVar22;
    pfVar14 = (float *)FUN_0252d9bc(0);
    if (pfVar14 == (float *)0x0) goto LAB_01f115b0;
    fVar33 = 9.0;
    if (iVar12 != 3) {
      fVar33 = 10.0;
    }
    fVar34 = *pfVar14 - *(float *)(param_1 + 0xb010);
    fVar35 = pfVar14[2] - *(float *)(param_1 + 0xb018);
    if (fVar33 <= SQRT(fVar35 * fVar35 + fVar34 * fVar34)) goto LAB_01f115b0;
    local_9cd8._0_4_ = (uint)local_9cd8 & 0xffffff00;
    local_9cd8._4_4_ = 0;
    local_9cd0._0_4_ = 0;
    local_9cd0._4_4_ = 0;
    local_9cc8 = 0;
    uStack_9cc4 = 0;
    local_9cc0._0_4_ = 0;
    FUN_01ec6980(param_1,&local_9cd8,&local_9ca8,0);
  }
  lVar23 = *(long *)(param_1 + 8);
  uVar19 = uVar19 & 0xe0000000;
  uVar28 = *(uint *)(appuStack_9c00[2] + 3);
  uVar21 = *(uint *)(lVar23 + 0x288);
  *(undefined4 *)(lVar23 + 0x288) = *(undefined4 *)(lVar23 + 0x28c);
  uVar21 = uVar21 ^ uVar21 << 0xb;
  *(undefined4 *)(lVar23 + 0x28c) = *(undefined4 *)(lVar23 + 0x290);
  uVar24 = *(uint *)(lVar23 + 0x294);
  *(uint *)(lVar23 + 0x290) = uVar24;
  uVar21 = uVar21 >> 8 ^ uVar24 >> 0x13 ^ uVar21 ^ uVar24;
  *(uint *)(lVar23 + 0x294) = uVar21;
  if (0 < (int)*(uint *)(appuStack_9c00[2] + 1)) {
    uVar24 = 0;
    uVar26 = (ulong)uVar28 * (ulong)uVar21 >> 0x20;
    do {
      if ((*(uint *)(appuStack_9c00[2][2] + (ulong)(uVar24 >> 5) * 4) >> (ulong)(uVar24 & 0x1f) & 1)
          != 0) {
        if ((int)uVar26 == 0) {
          iVar12 = *(int *)((long)appuStack_9c00[2] + 0x1c);
          iVar5 = 0;
          if (iVar12 != 0) {
            iVar5 = (int)uVar24 / iVar12;
          }
          fVar37 = (float)(int)((uVar24 - iVar5 * iVar12) + (uint)local_9c30) * 5.0;
          fVar38 = (float)(int)(iVar5 + (uint)(ushort)auStack_9c2e) * 5.0;
          break;
        }
        uVar26 = (ulong)((int)uVar26 - 1);
      }
      uVar24 = uVar24 + 1;
    } while (*(uint *)(appuStack_9c00[2] + 1) != uVar24);
  }
LAB_01f1171c:
  *param_2 = fVar37;
  param_2[1] = fVar36;
  param_2[2] = fVar38;
  *param_3 = uVar19;
  return;
}

