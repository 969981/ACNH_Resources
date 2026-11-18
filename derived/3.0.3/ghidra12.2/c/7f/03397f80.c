
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_03397f80(long param_1)

{
  undefined *puVar1;
  int *piVar2;
  uint *puVar3;
  uint uVar4;
  undefined4 uVar5;
  short sVar6;
  undefined *puVar7;
  int iVar8;
  uint uVar9;
  int iVar10;
  ulong uVar11;
  undefined8 *puVar12;
  byte bVar13;
  uint uVar14;
  short *psVar15;
  uint uVar16;
  uint uVar17;
  long *plVar18;
  long lVar19;
  byte bVar20;
  byte *pbVar21;
  ulong uVar22;
  undefined4 *puVar23;
  undefined4 *puVar24;
  short *psVar25;
  ulong uVar26;
  int *piVar27;
  byte *pbVar28;
  byte *pbVar29;
  byte local_9c [4];
  undefined4 local_98;
  undefined2 local_94;
  uint local_90;
  undefined4 local_8c;
  undefined2 local_88;
  byte local_84;
  undefined4 local_80;
  byte local_7c;
  undefined4 local_78;
  byte local_74;
  undefined4 local_70;
  byte local_6c;
  undefined4 local_68;
  int local_64;
  
  pbVar29 = (byte *)(param_1 + 0xc);
  local_84 = *pbVar29;
  local_80 = *(undefined4 *)(param_1 + 0x10);
  *(undefined1 *)(param_1 + 8) = 0;
  puVar1 = PTR_DAT_04bb32e0;
  local_78 = *(undefined4 *)(param_1 + 0x18);
  local_70 = *(undefined4 *)(param_1 + 0x20);
  if (7 < local_84) {
    local_84 = 0xff;
  }
  local_7c = *(byte *)(param_1 + 0x14);
  if (7 < local_7c) {
    local_7c = 0xff;
  }
  local_74 = *(byte *)(param_1 + 0x1c);
  if (7 < local_74) {
    local_74 = 0xff;
  }
  local_6c = *(byte *)(param_1 + 0x24);
  if (7 < local_6c) {
    local_6c = 0xff;
  }
  local_68 = *(undefined4 *)(param_1 + 0x28);
  *(undefined4 *)(param_1 + 0x10) = 0;
  bVar20 = *puVar1;
  if (7 < bVar20) {
    bVar20 = 0xff;
  }
  *pbVar29 = bVar20;
  *(byte *)(param_1 + 0x14) = bVar20;
  *(byte *)(param_1 + 0x1c) = bVar20;
  *(byte *)(param_1 + 0x24) = bVar20;
  puVar1 = PTR_DAT_04bb2720;
  *(undefined4 *)(param_1 + 0x18) = 0;
  *(undefined4 *)(param_1 + 0x20) = 0;
  *(undefined4 *)(param_1 + 0x28) = 0;
  if ((*(long *)(*(long *)puVar1 + 0x330) == 0) ||
     (*(int *)(*(long *)(*(long *)puVar1 + 0x330) + 8) != 4)) {
    bVar20 = 0;
  }
  else {
    bVar20 = 1;
  }
  *(byte *)(param_1 + 8) = bVar20;
  bVar13 = 0;
  if (*(long *)PTR_DAT_04bb7ff8 != 0) {
    bVar13 = (*(int *)(*(long *)PTR_DAT_04bb7ff8 + 0x588) != 0) << 1;
  }
  bVar13 = bVar13 | bVar20;
  *(byte *)(param_1 + 8) = bVar13;
  psVar25 = (short *)PTR_DAT_04bb6298;
  plVar18 = *(long **)PTR_DAT_04bb27d0;
  if ((plVar18 != (long *)0x0) && (1 < *(uint *)(plVar18 + 0x10))) {
    lVar19 = *plVar18;
    bVar20 = *(byte *)(lVar19 + 0x473);
    if ((long)(char)bVar20 != 0xffffffffffffffff) {
      pbVar21 = (byte *)(lVar19 + 0x48) + ((long)(char)bVar20 & 0xffffffffU) * 0x80;
      if (7 < bVar20) {
        pbVar21 = (byte *)(lVar19 + 0x48);
      }
      if (((*pbVar21 >> 3 & 1) != 0) && (*(byte *)(lVar19 + 0x472) != bVar20)) {
        bVar20 = bVar13 | 4;
        if (1 < *(byte *)(lVar19 + 0x476)) {
          bVar20 = bVar13;
        }
        bVar13 = bVar20;
      }
    }
  }
  *(byte *)(param_1 + 8) = bVar13;
  sVar6 = *psVar25;
  if (sVar6 == -1) {
    bVar20 = 0;
  }
  else {
    local_90 = 5;
    puVar3 = (uint *)(PTR_DAT_04bc39f8 + (ulong)(uint)(int)sVar6 * 8);
    if (0xff < (uint)(int)sVar6) {
      puVar3 = (uint *)PTR_DAT_04bc39f8;
    }
    bVar20 = ((*puVar3 & 0x20) != 0) << 3;
  }
  *(byte *)(param_1 + 8) = bVar20 | bVar13;
  FUN_02507c6c(&local_90,1,1,1,0);
  local_98 = local_8c;
  local_9c[0] = 0xff;
  if ((local_90 & 0xff) < 8) {
    local_9c[0] = (byte)local_90;
  }
  local_94 = local_88;
  if (7 < (local_90 & 0xff)) {
    return;
  }
  uVar26 = 0;
  puVar1 = PTR_DAT_04bb7c30 + 0x10;
  pbVar21 = pbVar29;
  puVar23 = &local_80;
  piVar27 = (int *)(param_1 + 0x34);
  do {
    iVar8 = FUN_00a74b78(local_9c);
    uVar9 = FUN_025310c0(local_9c,0);
    pbVar28 = pbVar21;
    if (3 < uVar26) {
      pbVar28 = pbVar29;
    }
    uVar22 = (ulong)local_9c[0];
    uVar17 = uVar9 & 1 | (uint)(iVar8 != 0x13) << 1;
    bVar20 = local_9c[0];
    if (7 < local_9c[0]) {
      bVar20 = 0xff;
    }
    *pbVar28 = bVar20;
    uVar4 = *(uint *)(pbVar28 + 4);
    uVar14 = (uint)(iVar8 == 9) << 2;
    *(uint *)(pbVar28 + 4) = uVar17 | uVar4 & 0xfffffff8 | uVar14;
    if (7 < local_9c[0]) {
      uVar16 = 0;
      uVar14 = uVar17 | uVar4 & 0xfffffff0 | uVar14;
    }
    else {
      lVar19 = *(long *)PTR_DAT_04bb2230;
      uVar11 = FUN_0252f488(local_9c);
      if ((uVar11 & 1) == 0) {
        uVar14 = *(uint *)(pbVar28 + 4) & 0xfffffff7;
        uVar16 = 0;
        psVar25 = (short *)PTR_DAT_04bb6298;
        if (*(int *)(lVar19 + 0x42c + uVar22 * 4) == 0) goto LAB_03398304;
      }
      else {
        *(undefined4 *)(lVar19 + 0x42c + uVar22 * 4) = 0x1e;
        uVar14 = *(uint *)(pbVar28 + 4) & 0xfffffff7;
      }
      uVar16 = 8;
      psVar25 = (short *)PTR_DAT_04bb6298;
    }
LAB_03398304:
    plVar18 = (long *)PTR_DAT_04bb2230;
    *(uint *)(pbVar28 + 4) = uVar16 | uVar14;
    uVar22 = FUN_02532880(local_9c,PTR_DAT_04bb3238);
    uVar17 = 0x80;
    if ((uVar22 & 1) == 0) {
      uVar17 = 0;
    }
    *(uint *)(pbVar28 + 4) = *(uint *)(pbVar28 + 4) & 0xffffff7f | uVar17;
    lVar19 = *(long *)PTR_DAT_04bb4718;
    if ((lVar19 == 0) || (uVar22 = (ulong)local_9c[0], 7 < uVar22)) {
      psVar15 = &DAT_054f0c08;
      if ((DAT_054f0c70 & 1) == 0) {
        iVar10 = __cxa_guard_acquire(&DAT_054f0c70);
        if (iVar10 == 0) {
          psVar15 = &DAT_054f0c08;
          psVar25 = (short *)PTR_DAT_04bb6298;
        }
        else {
          DAT_054f0c6c = 0;
          DAT_054f0c1c._0_4_ = 0;
          DAT_054f0c1c._4_4_ = 0;
          DAT_054f0c68 = 1;
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
          psVar15 = &DAT_054f0c08;
          plVar18 = (long *)PTR_DAT_04bb2230;
          psVar25 = (short *)PTR_DAT_04bb6298;
        }
      }
    }
    else {
      psVar15 = (short *)(lVar19 + uVar22 * 0xd0 +
                          (ulong)(*(uint *)(lVar19 + uVar22 * 4 + 0xd68) & 1) * 0x68 + 0x6e8);
    }
    if (((char)psVar15[0x32] == '\0') || (*psVar15 != *psVar25)) {
      local_64 = 1;
    }
    else {
      local_64 = *(int *)(psVar15 + 0x30);
    }
    *(uint *)(pbVar28 + 4) =
         *(uint *)(pbVar28 + 4) & 0xfffffe00 |
         *(uint *)(pbVar28 + 4) & 0xff | (uint)(local_64 - 5U < 2) << 8;
    uVar22 = FUN_0252e560(local_9c);
    uVar17 = 0x200;
    if ((uVar22 & 1) == 0) {
      uVar17 = 0;
    }
    *(uint *)(pbVar28 + 4) = *(uint *)(pbVar28 + 4) & 0xfffffdff | uVar17;
    puVar7 = PTR_DAT_04bb3238;
    uVar22 = FUN_02553884(6,local_9c,*(undefined4 *)PTR_DAT_04bb3238,1);
    uVar5 = *(undefined4 *)puVar7;
    uVar17 = 0x400;
    if ((uVar22 & 1) == 0) {
      uVar17 = 0;
    }
    *(uint *)(pbVar28 + 4) = *(uint *)(pbVar28 + 4) & 0xfffffbff | uVar17;
    uVar22 = FUN_02553884(0,local_9c,uVar5,1);
    uVar17 = 0x800;
    if ((uVar22 & 1) == 0) {
      uVar17 = 0;
    }
    uVar17 = *(uint *)(pbVar28 + 4) & 0xfffff7ff | uVar17;
    *(uint *)(pbVar28 + 4) = uVar17;
    piVar2 = piVar27;
    if (3 < uVar26) {
      piVar2 = (int *)(param_1 + 0x34);
    }
    if (iVar8 == 0x13) {
      iVar8 = *piVar2 + -1;
      if (0 < *piVar2) {
        *piVar2 = iVar8;
        if (iVar8 != 0) goto LAB_033984bc;
        uVar17 = *(uint *)(pbVar28 + 4);
      }
      uVar17 = uVar17 & 0xffffffbf;
    }
    else {
      *piVar2 = 0xf;
LAB_033984bc:
      uVar17 = *(uint *)(pbVar28 + 4) | 0x40;
    }
    *(uint *)(pbVar28 + 4) = uVar17;
    piVar2 = piVar27 + 4;
    if (3 < uVar26) {
      piVar2 = (int *)(param_1 + 0x44);
    }
    if ((uVar9 & 1) == 0) {
      iVar8 = *piVar2 + -1;
      if (0 < *piVar2) {
        *piVar2 = iVar8;
        if (iVar8 != 0) goto LAB_03398508;
        uVar17 = *(uint *)(pbVar28 + 4);
      }
      uVar17 = uVar17 & 0xffffffdf;
    }
    else {
      *piVar2 = 0xf;
LAB_03398508:
      uVar17 = *(uint *)(pbVar28 + 4) | 0x20;
    }
    *(uint *)(pbVar28 + 4) = uVar17;
    uVar22 = FUN_02531900(local_9c);
    piVar2 = piVar27 + 8;
    if (3 < uVar26) {
      piVar2 = (int *)(param_1 + 0x54);
    }
    if ((uVar22 & 1) == 0) {
      iVar8 = *piVar2 + -1;
      if ((0 < *piVar2) && (*piVar2 = iVar8, iVar8 != 0)) goto LAB_03398564;
      uVar9 = *(uint *)(pbVar28 + 4) & 0xffffffef;
    }
    else {
      *piVar2 = 0xf;
LAB_03398564:
      uVar9 = *(uint *)(pbVar28 + 4) | 0x10;
    }
    *(uint *)(pbVar28 + 4) = uVar9;
    puVar12 = (undefined8 *)FUN_0339be20(*(undefined8 *)(*plVar18 + 0x10),0x6d,local_9c);
    puVar24 = puVar23;
    if (puVar12 == (undefined8 *)0x0) {
LAB_033985f0:
      if (3 < uVar26) {
        puVar24 = &local_80;
      }
      uVar17 = *(uint *)(pbVar28 + 4);
      uVar9 = uVar17 & 0xffffefff;
      bVar20 = *(byte *)((long)puVar24 + 2);
      *(uint *)(pbVar28 + 4) = uVar9;
      if (((bVar20 >> 2 & 1) != 0) &&
         ((*(int *)(*(long *)(*plVar18 + 0x18) + 0x30) != 2 ||
          (*(long *)(*(long *)(*plVar18 + 0x18) + 0x38) != 0)))) goto LAB_03398640;
      uVar9 = uVar17 & 0xfffbefff;
    }
    else {
      if (((*PTR_DAT_04bb9378 & 1) == 0) &&
         (iVar8 = __cxa_guard_acquire(PTR_DAT_04bb9378), iVar8 != 0)) {
        *(undefined **)PTR_DAT_04bb9370 = PTR_DAT_04bb7c30 + 0x10;
        __cxa_guard_release(PTR_DAT_04bb9378);
      }
      uVar22 = (**(code **)*puVar12)(puVar12,PTR_DAT_04bb9370);
      if ((uVar22 & 1) == 0) goto LAB_033985f0;
      if (3 < uVar26) {
        puVar24 = &local_80;
      }
      uVar9 = *(uint *)(pbVar28 + 4) | 0x1000;
      *(uint *)(pbVar28 + 4) = uVar9;
LAB_03398640:
      uVar9 = uVar9 | 0x40000;
    }
    *(uint *)(pbVar28 + 4) = uVar9;
    lVar19 = *(long *)PTR_DAT_04bb27f8;
    if (((lVar19 == 0) ||
        ((*(ushort **)PTR_DAT_04bc3a48 != (ushort *)0x0 &&
         ((**(ushort **)PTR_DAT_04bc3a48 & 1) != 0)))) ||
       ((*(int *)(lVar19 + 0x14) != 4 && (*(int *)(lVar19 + 0x14) != 5)))) {
      uVar9 = uVar9 & 0xffffdfff;
    }
    else {
      uVar9 = uVar9 | 0x2000;
    }
    sVar6 = *psVar25;
    *(uint *)(pbVar28 + 4) = uVar9;
    if (sVar6 == -1) {
      uVar17 = 0;
    }
    else {
      local_64 = 0x1a;
      puVar3 = (uint *)(PTR_DAT_04bc39f8 + (ulong)(uint)(int)sVar6 * 8);
      if (0xff < (uint)(int)sVar6) {
        puVar3 = (uint *)PTR_DAT_04bc39f8;
      }
      uVar17 = (uint)((*puVar3 & 0x4000000) != 0) << 0xe;
    }
    *(uint *)(pbVar28 + 4) = uVar17 | uVar9 & 0xffffbfff;
    puVar12 = (undefined8 *)FUN_0339be20(*(undefined8 *)(*plVar18 + 0x10),0x6b,local_9c);
    if (puVar12 == (undefined8 *)0x0) {
      if ((*(byte *)((long)puVar24 + 2) >> 1 & 1) != 0) {
        uVar22 = 0;
        goto LAB_0339876c;
      }
LAB_0339878c:
      uVar9 = *(uint *)(pbVar28 + 4) & 0xfffdffff;
    }
    else {
      if (((*PTR_DAT_04bc98e8 & 1) == 0) &&
         (iVar8 = __cxa_guard_acquire(PTR_DAT_04bc98e8), iVar8 != 0)) {
        *(undefined **)PTR_DAT_04bc98e0 = puVar1;
        __cxa_guard_release(PTR_DAT_04bc98e8);
      }
      uVar22 = (**(code **)*puVar12)(puVar12,PTR_DAT_04bc98e0);
      if ((*(byte *)((long)puVar24 + 2) >> 1 & 1) == 0) {
        uVar22 = uVar22 & 1;
joined_r0x03398788:
        if (uVar22 == 0) goto LAB_0339878c;
      }
      else {
LAB_0339876c:
        if (((uVar22 & 1) == 0) && (*(int *)(*(long *)(*plVar18 + 0x18) + 0x30) == 2)) {
          uVar22 = *(ulong *)(*(long *)(*plVar18 + 0x18) + 0x38);
          goto joined_r0x03398788;
        }
      }
      uVar9 = *(uint *)(pbVar28 + 4) | 0x20000;
    }
    *(uint *)(pbVar28 + 4) = uVar9;
    uVar22 = FUN_0180c600();
    uVar9 = 0x8000;
    if ((uVar22 & 1) == 0) {
      uVar9 = 0;
    }
    *(uint *)(pbVar28 + 4) = *(uint *)(pbVar28 + 4) & 0xffff7fff | uVar9;
    uVar22 = FUN_02538bb0(local_9c);
    bVar20 = local_9c[0];
    uVar11 = (ulong)local_9c[0];
    uVar9 = 0x10000;
    if ((uVar22 & 1) == 0) {
      uVar9 = 0;
    }
    *(uint *)(pbVar28 + 4) = *(uint *)(pbVar28 + 4) & 0xfffeffff | uVar9;
    if (7 < local_9c[0]) {
      return;
    }
    if (uVar11 + 1 == 8) {
      return;
    }
    pbVar28 = PTR_DAT_04bb5038 + uVar11 + 1;
    uVar22 = FUN_02507924(local_9c,pbVar28);
    if ((uVar22 & 1) == 0) {
      if (uVar11 + 2 == 8) {
        return;
      }
      pbVar28 = PTR_DAT_04bb5038 + uVar11 + 2;
      uVar22 = FUN_02507924(local_9c,pbVar28);
      if ((uVar22 & 1) == 0) {
        if (uVar11 + 3 == 8) {
          return;
        }
        pbVar28 = PTR_DAT_04bb5038 + uVar11 + 3;
        uVar22 = FUN_02507924(local_9c,pbVar28);
        if ((uVar22 & 1) == 0) {
          if (uVar11 + 4 == 8) {
            return;
          }
          pbVar28 = PTR_DAT_04bb5038 + uVar11 + 4;
          uVar22 = FUN_02507924(local_9c,pbVar28);
          if ((uVar22 & 1) == 0) {
            if (uVar11 + 5 == 8) {
              return;
            }
            pbVar28 = PTR_DAT_04bb5038 + uVar11 + 5;
            uVar22 = FUN_02507924(local_9c,pbVar28);
            if ((uVar22 & 1) == 0) {
              if (uVar11 + 6 == 8) {
                return;
              }
              pbVar28 = PTR_DAT_04bb5038 + uVar11 + 6;
              uVar22 = FUN_02507924(local_9c,pbVar28);
              if ((uVar22 & 1) == 0) {
                if (uVar11 + 7 == 8) {
                  return;
                }
                pbVar28 = PTR_DAT_04bb5038 + uVar11 + 7;
                uVar22 = FUN_02507924(local_9c,pbVar28);
                if ((uVar22 & 1) == 0) {
                  if (bVar20 == 0) {
                    return;
                  }
                  pbVar28 = PTR_DAT_04bb5038 + uVar11 + 8;
                  FUN_02507924(local_9c,pbVar28);
                }
              }
            }
          }
        }
      }
    }
    local_9c[0] = *pbVar28;
    if (7 < local_9c[0]) {
      return;
    }
    pbVar21 = pbVar21 + 8;
    piVar27 = piVar27 + 1;
    puVar23 = puVar23 + 2;
    uVar26 = uVar26 + 1;
  } while( true );
}

