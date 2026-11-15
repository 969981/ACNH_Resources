
/* WARNING: Removing unreachable block (ram,0x02122334) */
/* WARNING: Removing unreachable block (ram,0x021222dc) */
/* WARNING: Removing unreachable block (ram,0x021222b0) */
/* WARNING: Removing unreachable block (ram,0x021222c4) */
/* WARNING: Removing unreachable block (ram,0x021222e4) */
/* WARNING: Removing unreachable block (ram,0x02122344) */

void FUN_02121fb0(long param_1)

{
  int iVar1;
  undefined **ppuVar2;
  undefined *puVar3;
  uint uVar4;
  int iVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  int iVar9;
  undefined8 *puVar10;
  long *plVar11;
  long lVar12;
  ulong uVar13;
  undefined4 *puVar14;
  undefined1 *puVar15;
  uint uVar16;
  int *piVar17;
  int *piVar18;
  bool bVar19;
  uint uVar20;
  int iVar21;
  int *piVar22;
  int *piVar23;
  long lVar24;
  uint uVar25;
  undefined4 uVar26;
  ulong uVar27;
  uint uVar28;
  uint uVar29;
  long *plVar30;
  long *plVar31;
  uint uVar32;
  float fVar33;
  float fVar34;
  float fVar35;
  float fVar36;
  float fVar37;
  float fVar38;
  float fVar39;
  undefined4 local_9d4c;
  undefined *local_9d48;
  undefined *puStack_9d40;
  undefined8 local_9d38;
  undefined *local_9d30;
  undefined8 uStack_9d28;
  undefined *local_9d20;
  undefined *puStack_9d18;
  undefined8 local_9d10;
  undefined *local_9d08;
  undefined8 local_9d00;
  undefined *local_9cf8;
  undefined *puStack_9cf0;
  undefined8 local_9ce8;
  undefined *local_9ce0;
  undefined8 uStack_9cd8;
  undefined *local_9cd0;
  undefined *local_9cc8;
  undefined8 uStack_9cc0;
  undefined *local_9cb8;
  undefined8 uStack_9cb0;
  char local_9ca8 [4];
  char local_9ca4 [4];
  char local_9ca0 [4];
  char local_9c9c [4];
  undefined8 local_9c98;
  float local_9c90;
  undefined8 *local_9c88;
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
  undefined8 uStack_5b0;
  undefined1 *local_5a8;
  undefined8 uStack_5a0;
  undefined4 local_598;
  undefined8 local_590;
  undefined8 uStack_588;
  undefined8 local_580;
  undefined8 uStack_578;
  undefined1 auStack_570 [128];
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
  
  puVar8 = PTR_DAT_04bb5ce0;
  puVar7 = PTR_DAT_04bb2720;
  puVar6 = PTR_DAT_04bb2640;
  if (*(int *)(param_1 + 0x1620) != 7) {
    return;
  }
  if (*(long *)PTR_DAT_04bb5ce0 == 0) {
    return;
  }
  lVar12 = *(long *)PTR_DAT_04bb2720;
  if (lVar12 == 0) {
    return;
  }
  if (*(long *)(lVar12 + 0x330) == 0) {
    return;
  }
  puVar10 = (undefined8 *)
            (**(code **)(**(long **)PTR_DAT_04bb2640 + 0x18))
                      (*(long **)PTR_DAT_04bb2640,*(undefined4 *)(lVar12 + 0x338));
  iVar9 = FUN_006bd550(*puVar10,0);
  if (iVar9 != 0x758f7eaf) {
    return;
  }
  lVar12 = *(long *)puVar7;
  if (lVar12 == 0) {
    return;
  }
  if (*(long *)(lVar12 + 0x330) == 0) {
    return;
  }
  if (*(int *)(*(long *)(lVar12 + 0x330) + 0x244) == 0) {
    return;
  }
  lVar24 = *(long *)puVar8;
  if (lVar24 == 0) {
    uVar20 = 0;
    uVar16 = 0;
    uVar32 = 0x10;
    uVar25 = 0x10;
  }
  else {
    uVar20 = *(uint *)(lVar24 + 0xd88);
    uVar16 = *(uint *)(lVar24 + 0xd8c);
    uVar25 = *(uint *)(lVar24 + 0xd98);
    uVar32 = *(uint *)(lVar24 + 0xd9c);
  }
  uVar4 = uVar20;
  if ((int)uVar25 <= (int)uVar20) {
    uVar4 = uVar25;
  }
  piVar17 = (int *)((long)&uStack_9d28 + 4);
  piVar18 = (int *)&uStack_9d28;
  piVar22 = (int *)((long)&local_9d38 + 4);
  piVar23 = (int *)&local_9d38;
  if ((int)uVar20 <= (int)uVar25) {
    uVar20 = uVar25;
  }
  uVar25 = uVar16;
  if ((int)uVar32 <= (int)uVar16) {
    uVar25 = uVar32;
  }
  if ((int)uVar16 <= (int)uVar32) {
    uVar16 = uVar32;
  }
  if (*(int *)(param_1 + 0x1604) == 1) {
    puVar10 = (undefined8 *)
              (**(code **)(**(long **)puVar6 + 0x18))
                        (*(long **)puVar6,*(undefined4 *)(lVar12 + 0x338));
    iVar9 = FUN_006bd550(*puVar10,0);
    if (((iVar9 == 0x758f7eaf) && (*(long *)puVar7 != 0)) &&
       (lVar12 = *(long *)(*(long *)puVar7 + 0x330), lVar12 != 0)) {
      uVar32 = *(uint *)(lVar12 + 0x248);
      lVar12 = param_1 + 0x10;
      if (uVar32 < 8) {
        lVar12 = lVar12 + (ulong)uVar32 * 0x1c;
      }
    }
    else {
      lVar12 = param_1 + 0x10;
    }
  }
  else {
    lVar12 = param_1 + 0xd4;
  }
  fVar38 = *(float *)(lVar12 + 4);
  fVar39 = *(float *)(lVar12 + 0xc);
  local_9c24._0_8_ = 0x1f0000001f;
  local_9c10 = auStack_9be0;
  local_9c18 = 0x3c1;
  local_9be8[0] = 0;
  local_9c08 = 0;
  appuStack_9c00[0] = (undefined **)0x0;
  appuStack_9c00[1] = (undefined **)0x0;
  lVar12 = 0x50;
  while( true ) {
    ppuVar2 = (undefined **)((long)appuStack_9c00 + lVar12 + -8);
    *(undefined4 *)(auStack_9c2e + lVar12 + 1) = 0;
    *(undefined4 *)(auStack_9c2e + lVar12 + -2) = 0;
    *(undefined8 *)(local_9c24 + lVar12 + 0xc) = 0;
    *(undefined1 *)((long)appuStack_9c00 + lVar12 + -0x10) = 0;
    *(undefined8 *)(local_9c24 + lVar12 + -4) = 0;
    *(undefined8 *)(local_9c24 + lVar12 + 4) = 0;
    if (ppuVar2 == &local_5b8) break;
    *(undefined4 *)((long)appuStack_9c00 + lVar12 + -5) = 0;
    *(undefined4 *)ppuVar2 = 0;
    *(undefined8 *)((long)appuStack_9c00 + lVar12 + 0x10) = 0;
    local_9be8[lVar12] = 0;
    *(undefined4 *)(auStack_9be0 + lVar12) = 0;
    *(undefined4 *)(auStack_9be0 + lVar12 + 3) = 0;
    *(undefined8 *)((long)local_9bd8 + lVar12 + 0x10) = 0;
    local_9bc0[lVar12] = 0;
    *(undefined4 *)(auStack_9bb8 + lVar12) = 0;
    *(undefined4 *)(auStack_9bb8 + lVar12 + 3) = 0;
    local_9b98[lVar12] = 0;
    *(undefined8 *)((long)local_9bb0 + lVar12) = 0;
    *(undefined8 *)((long)appuStack_9c00 + lVar12) = 0;
    *(undefined8 *)((long)appuStack_9c00 + lVar12 + 8) = 0;
    *(undefined8 *)((long)local_9bd8 + lVar12) = 0;
    *(undefined8 *)((long)local_9bd8 + lVar12 + 8) = 0;
    *(undefined8 *)((long)local_9bb0 + lVar12 + 8) = 0;
    *(undefined8 *)((long)local_9bb0 + lVar12 + 0x10) = 0;
    lVar12 = lVar12 + 0xa0;
  }
  local_598 = 0x1f;
  local_590 = 0;
  uStack_588 = 0;
  local_580 = 0;
  uStack_578 = 0;
  local_5b8 = PTR_DAT_04bb7f28 + 0x10;
  uStack_5b0 = 0x1f000003c1;
  local_5a8 = auStack_570;
  uStack_5a0 = 0x1fffffffff;
  local_9c30 = 0x20;
  uStack_9c2c = 0x20;
  uStack_9c2a = 0x20;
  local_9c28 = 0xe1;
  local_9c26 = 0xc1;
  auStack_9c2e = (undefined1  [2])0x20;
  appuStack_9c00[2] = &local_5b8;
  memset(auStack_4f0,0,0x3c1);
  local_118 = &local_104;
  local_110 = 0x1fffffffff;
  local_108 = 0x1f;
  local_128 = PTR_DAT_04bb7f30 + 0x10;
  uStack_120 = 0x1f000003c1;
  local_9c40 = *(undefined8 *)(*(long *)PTR_DAT_04bb27a8 + 0x1f8);
  local_9c78 = &local_9c40;
  local_9c48 = 0;
  puStack_9c70 = PTR_DAT_04bbc1a0 + 0x10;
  local_9c68 = PTR_DAT_04bb2010 + 0x10;
  puStack_9c80 = &local_9c30;
  uStack_9c60 = 0;
  uStack_9c50 = 0;
  uStack_9c2c = (ushort)uVar4;
  local_9c88 = (undefined8 *)(PTR_DAT_04bb7f20 + 0x10);
  lStack_9c38 = *(long *)PTR_DAT_04bb27c8 + 0x28;
  local_9c28 = (ushort)uVar20;
  uStack_9c2a = (ushort)uVar25;
  local_9c26 = (ushort)uVar16;
  local_9c30 = uStack_9c2c;
  if ((uVar20 & 0xffff) <= (uVar4 & 0xffff)) {
    local_9c30 = local_9c28;
  }
  auStack_9c2e = (undefined1  [2])uStack_9c2a;
  if ((uVar16 & 0xffff) <= (uVar25 & 0xffff)) {
    auStack_9c2e = (undefined1  [2])local_9c26;
  }
  local_9c58 = local_9c68;
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
  if (local_9c18 != 0) {
    uVar28 = (uint)local_9c30;
    uVar27 = 0;
    uVar32 = (uint)(ushort)auStack_9c2e;
    uVar29 = (uint)local_9c30;
    iVar9 = local_9c24._0_4_ + uVar29;
    uVar13 = local_9c18;
    do {
      iVar21 = uVar28 - local_9c30;
      if (-1 < iVar21) {
        if (iVar21 < (int)local_9c24._0_4_) {
          iVar5 = uVar32 - (ushort)auStack_9c2e;
          if (-1 < iVar5) {
            if ((iVar5 < (int)local_9c24._4_4_) && (local_9c10 != (undefined1 *)0x0)) {
              (*(code *)*local_9c88)
                        (&local_9c88,local_9c10 + (long)(iVar21 + local_9c24._0_4_ * iVar5) * 0x28);
              uVar13 = local_9c18;
            }
          }
        }
      }
      uVar27 = uVar27 + 1;
      if (uVar28 + 1 == iVar9) {
        uVar32 = uVar32 + 1;
        uVar28 = uVar29;
      }
      else {
        uVar28 = uVar28 + 1;
      }
    } while (uVar27 < uVar13);
  }
  FUN_035a56c0(&local_9c30,0);
  puVar8 = PTR_DAT_04bb3350;
  puVar6 = PTR_DAT_04bb27c0;
  if (*(int *)(param_1 + 0x1e8) != 0) {
    lVar12 = (long)*(int *)(param_1 + 0x1e8) << 3;
    puVar3 = PTR_DAT_04bb3750 + 0x10;
    plVar30 = *(long **)(param_1 + 0x1f0);
    do {
      uVar32 = *(uint *)(*plVar30 + 0xe8);
      if ((uVar32 != 0) && (lVar24 = *(long *)puVar6, lVar24 != 0)) {
        plVar31 = *(long **)(*(long *)(*(long *)(lVar24 + 0x1c0) + 8) +
                            ((ulong)(uVar32 >> 0x11) & 0x7ff8));
        if ((plVar31 == (long *)0x0) ||
           (((*(uint *)(plVar31 + 0x49) >> 1 & 1) != 0 || (*(uint *)(plVar31 + 0x46) != uVar32)))) {
          plVar31 = (long *)0x0;
        }
        if (*(int *)(lVar24 + 0x288) == 1 || *(int *)(lVar24 + 0x288) == -1) {
          plVar11 = (long *)nn::os::GetTlsValue(*(undefined4 *)(*(long *)puVar8 + 0x68));
          lVar24 = *(long *)puVar6;
          iVar9 = (**(code **)(*plVar11 + 0x60))();
          if (iVar9 < 0x11) {
            uVar32 = 1;
          }
          else {
            uVar32 = *(uint *)(lVar24 + 0x5e8);
            if (4 < uVar32) goto LAB_021225b4;
            uVar32 = 0x1aU >> (ulong)(uVar32 & 0x1f) & 1;
          }
        }
        else {
LAB_021225b4:
          uVar32 = 0;
        }
        if (plVar31 != (long *)0x0) {
          lVar24 = plVar31[0x2a];
          if (((*PTR_DAT_04bb37d8 & 1) == 0) &&
             (iVar9 = __cxa_guard_acquire(PTR_DAT_04bb37d8), iVar9 != 0)) {
            *(undefined **)PTR_DAT_04bb37d0 = puVar3;
            __cxa_guard_release(PTR_DAT_04bb37d8);
          }
          uVar27 = (**(code **)(*plVar31 + 0x20))(plVar31,PTR_DAT_04bb37d0);
          uVar28 = 0;
          if ((int)lVar24 == 1) {
            uVar28 = uVar32;
          }
          if (((uVar27 & 1) != 0) && (uVar28 != 0)) {
            fVar33 = *(float *)(plVar31[0xd] + 0x278);
            fVar34 = *(float *)(plVar31[0xd] + 0x280);
            iVar9 = -2;
            if (0.0 <= fVar33) {
              iVar9 = -1;
            }
            iVar9 = iVar9 + (int)((float)(int)fVar33 / 5.0);
            iVar21 = -2;
            if (0.0 <= fVar34) {
              iVar21 = -1;
            }
            iVar21 = iVar21 + (int)((float)(int)fVar34 / 5.0);
            FUN_035a4360(&local_9c30,iVar9,iVar21,0);
            FUN_035a4360(&local_9c30,iVar9,iVar21 + (uint)DAT_057763a8,0);
            FUN_035a4360(&local_9c30,iVar9 + (uint)DAT_057763b0,iVar21,0);
            FUN_035a4360(&local_9c30,iVar9 + (uint)DAT_057763b8,iVar21 + (uint)DAT_057763c0,0);
          }
        }
      }
      plVar30 = plVar30 + 1;
      lVar12 = lVar12 + -8;
    } while (lVar12 != 0);
  }
  puVar6 = PTR_DAT_04bb2640;
  local_9c90 = 0.0;
  local_9c98 = 0;
  uVar20 = uVar20 - 1;
  uVar16 = uVar16 - 1;
  uVar32 = uVar4;
  if ((int)uVar20 <= (int)uVar4) {
    uVar32 = uVar20;
  }
  if ((int)uVar4 <= (int)uVar20) {
    uVar4 = uVar20;
  }
  uVar20 = uVar25;
  if ((int)uVar16 <= (int)uVar25) {
    uVar20 = uVar16;
  }
  if ((int)uVar25 <= (int)uVar16) {
    uVar25 = uVar16;
  }
  if (*(int *)(param_1 + 0x1604) == 1) {
    lVar12 = *(long *)puVar7;
    if ((lVar12 != 0) && (*(long *)(lVar12 + 0x330) != 0)) {
      puVar10 = (undefined8 *)
                (**(code **)(**(long **)PTR_DAT_04bb2640 + 0x18))
                          (*(long **)PTR_DAT_04bb2640,*(undefined4 *)(lVar12 + 0x338));
      iVar9 = FUN_006bd550(*puVar10,0);
      if ((iVar9 == 0x758f7eaf) &&
         ((*(long *)puVar7 != 0 && (lVar12 = *(long *)(*(long *)puVar7 + 0x330), lVar12 != 0)))) {
        uVar16 = *(uint *)(lVar12 + 0x248);
        lVar12 = param_1 + 0x10;
        if (uVar16 < 8) {
          lVar12 = lVar12 + (ulong)uVar16 * 0x1c;
        }
        goto LAB_021227c8;
      }
    }
    lVar12 = param_1 + 0x10;
  }
  else {
    lVar12 = param_1 + 0xd4;
  }
LAB_021227c8:
  uVar26 = *(undefined4 *)(lVar12 + 0x10);
  if (uVar25 + 1 == uVar20) {
LAB_02122940:
    local_9c9c[0] = '\0';
    local_9ca0[0] = '\0';
    local_9ca4[0] = '\0';
    local_9ca8[0] = '\0';
    local_9d48 = PTR_DAT_04bbc1a0 + 0x10;
    local_9ce8 = 0;
    local_9d10 = 0;
    local_9d38 = 0;
    puStack_9d40 = PTR_DAT_04bb2010 + 0x10;
    lVar12 = *(long *)puVar7;
    uStack_9cc0 = 0;
    uStack_9cb0 = 0;
    uStack_9cd8 = 0;
    local_9d00 = 0;
    uStack_9d28 = 0;
    local_9d30 = puStack_9d40;
    local_9d20 = local_9d48;
    puStack_9d18 = puStack_9d40;
    local_9d08 = puStack_9d40;
    local_9cf8 = local_9d48;
    puStack_9cf0 = puStack_9d40;
    local_9ce0 = puStack_9d40;
    local_9cd0 = local_9d48;
    local_9cc8 = puStack_9d40;
    local_9cb8 = puStack_9d40;
    if (lVar12 == 0) {
      puVar10 = &DAT_055c04a0;
    }
    else {
      puVar10 = &DAT_055c04a0;
      if (*(long *)(lVar12 + 0x330) != 0) {
        plVar30 = *(long **)puVar6;
        puVar10 = (undefined8 *)
                  (**(code **)(*plVar30 + 0x18))(plVar30,*(undefined4 *)(lVar12 + 0x338));
        iVar9 = FUN_006bd550(*puVar10,0);
        puVar10 = (undefined8 *)PTR_DAT_04bc3a80;
        if (iVar9 != 0x758f7eaf) {
          puVar10 = &DAT_055c04a0;
        }
      }
    }
    uVar27 = FUN_0180ff90(*(undefined4 *)(puVar10 + 7),local_9c9c,&local_9cd0,local_9ca0,&local_9cf8
                          ,local_9ca4,&local_9d20,local_9ca8,&local_9d48);
    if ((uVar27 & 1) != 0) {
      if (local_9ca4[0] == '\0') {
        if (local_9c9c[0] == '\0') {
          if (local_9ca0[0] == '\0') {
            if (local_9ca8[0] == '\0') goto LAB_02122ae0;
            puVar14 = (undefined4 *)PTR_DAT_04bb2cf8;
          }
          else {
            puVar14 = (undefined4 *)PTR_DAT_04bb2108;
            piVar17 = (int *)((long)&uStack_9cd8 + 4);
            piVar18 = (int *)&uStack_9cd8;
            piVar22 = (int *)((long)&local_9ce8 + 4);
            piVar23 = (int *)&local_9ce8;
          }
        }
        else {
          puVar14 = (undefined4 *)PTR_DAT_04bb2ce8;
          piVar17 = (int *)((long)&uStack_9cb0 + 4);
          piVar18 = (int *)&uStack_9cb0;
          piVar22 = (int *)((long)&uStack_9cc0 + 4);
          piVar23 = (int *)&uStack_9cc0;
        }
      }
      else {
        puVar14 = (undefined4 *)PTR_DAT_04bb2cf0;
        piVar17 = (int *)((long)&local_9d00 + 4);
        piVar18 = (int *)&local_9d00;
        piVar22 = (int *)((long)&local_9d10 + 4);
        piVar23 = (int *)&local_9d10;
      }
      uVar26 = *puVar14;
      local_9c90 = ((float)*piVar22 * 5.0 + (float)*piVar17 * 5.0 + 5.0) * 0.5;
      local_9c98 = CONCAT44(local_9c98._4_4_,
                            ((float)*piVar23 * 5.0 + (float)*piVar18 * 5.0 + 5.0) * 0.5);
    }
  }
  else {
    fVar33 = 3.4028235e+38;
    bVar19 = false;
    uVar16 = uVar32;
    do {
      iVar9 = uVar16 - local_9c30;
      if (-1 < iVar9) {
        if (iVar9 < (int)local_9c24._0_4_) {
          iVar21 = uVar20 - (ushort)auStack_9c2e;
          if (-1 < iVar21) {
            if (iVar21 < (int)local_9c24._4_4_) {
              iVar5 = (uVar16 + 1) - (uint)local_9c30;
              if (-1 < iVar5) {
                if (iVar5 < (int)local_9c24._0_4_) {
                  iVar1 = iVar21 + 1;
                  if (-1 < iVar1) {
                    if (iVar1 < (int)local_9c24._4_4_) {
                      if ((byte)local_9c10[(long)(iVar21 * local_9c24._0_4_ + iVar9) * 0x28 + 6] < 5
                         ) {
                        if ((1 << (ulong)((byte)local_9c10
                                                [(long)(iVar21 * local_9c24._0_4_ + iVar9) * 0x28 +
                                                 6] & 0x1f) & 0x13U) != 0) {
                          if ((byte)local_9c10[(long)(iVar21 * local_9c24._0_4_ + iVar5) * 0x28 + 6]
                              < 5) {
                            if ((1 << (ulong)((byte)local_9c10
                                                    [(long)(iVar21 * local_9c24._0_4_ + iVar5) *
                                                     0x28 + 6] & 0x1f) & 0x13U) != 0) {
                              if ((byte)local_9c10
                                        [(long)(iVar1 * local_9c24._0_4_ + iVar9) * 0x28 + 6] < 5) {
                                if ((1 << (ulong)((byte)local_9c10
                                                        [(long)(iVar1 * local_9c24._0_4_ + iVar9) *
                                                         0x28 + 6] & 0x1f) & 0x13U) != 0) {
                                  if ((byte)local_9c10
                                            [(long)(iVar1 * local_9c24._0_4_ + iVar5) * 0x28 + 6] <
                                      5) {
                                    if ((1 << (ulong)((byte)local_9c10
                                                            [(long)(iVar1 * local_9c24._0_4_ + iVar5
                                                                   ) * 0x28 + 6] & 0x1f) & 0x13U) !=
                                        0) {
                                      fVar35 = (float)(int)uVar16 * 5.0 + 2.5;
                                      fVar36 = fVar38 - fVar35;
                                      fVar34 = (float)(int)uVar20 * 5.0 + 2.5;
                                      fVar37 = fVar39 - fVar34;
                                      fVar36 = SQRT(fVar37 * fVar37 + fVar36 * fVar36);
                                      if (fVar36 < fVar33) {
                                        bVar19 = true;
                                        local_9c98 = (ulong)(uint)fVar35;
                                        fVar33 = fVar36;
                                        local_9c90 = fVar34;
                                      }
                                    }
                                  }
                                }
                              }
                            }
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
      if ((int)uVar16 < (int)uVar4) {
        uVar16 = uVar16 + 1;
      }
      else {
        uVar20 = uVar20 + 1;
        uVar16 = uVar32;
      }
    } while ((uVar32 != uVar16) || (uVar25 + 1 != uVar20));
    if (!bVar19) goto LAB_02122940;
  }
LAB_02122ae0:
  lVar12 = FUN_02121dc8(param_1);
  if (lVar12 == 0) {
    return;
  }
  *(undefined4 *)(*(long *)(lVar12 + 8) + 0x750) = 0;
  local_9d4c = uVar26;
  FUN_01e39778(*(undefined8 *)(lVar12 + 8),&local_9c98,&local_9d4c,0);
  if (*(int *)(param_1 + 0x1604) == 1) {
    lVar12 = *(long *)puVar7;
    if ((lVar12 != 0) && (*(long *)(lVar12 + 0x330) != 0)) {
      plVar30 = *(long **)puVar6;
      puVar10 = (undefined8 *)
                (**(code **)(*plVar30 + 0x18))(plVar30,*(undefined4 *)(lVar12 + 0x338));
      iVar9 = FUN_006bd550(*puVar10,0);
      if ((iVar9 == 0x758f7eaf) &&
         ((*(long *)puVar7 != 0 && (lVar12 = *(long *)(*(long *)puVar7 + 0x330), lVar12 != 0)))) {
        uVar20 = *(uint *)(lVar12 + 0x248);
        puVar15 = (undefined1 *)(param_1 + 0x10);
        if (uVar20 < 8) {
          puVar15 = puVar15 + (ulong)uVar20 * 0x1c;
        }
        goto LAB_02122b8c;
      }
    }
    puVar15 = (undefined1 *)(param_1 + 0x10);
  }
  else {
    puVar15 = (undefined1 *)(param_1 + 0xd4);
  }
LAB_02122b8c:
  *(undefined4 *)(puVar15 + 0x10) = uVar26;
  *(undefined4 *)(puVar15 + 0x14) = 0;
  *puVar15 = 1;
  *(undefined4 *)(puVar15 + 4) = (undefined4)local_9c98;
  *(undefined4 *)(puVar15 + 8) = local_9c98._4_4_;
  *(float *)(puVar15 + 0xc) = local_9c90;
  return;
}

