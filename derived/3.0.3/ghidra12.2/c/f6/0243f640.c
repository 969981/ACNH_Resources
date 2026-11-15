
void FUN_0243f640(long param_1)

{
  undefined *puVar1;
  int iVar2;
  undefined8 *puVar3;
  long *plVar4;
  ushort uVar5;
  int iVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined *puVar10;
  undefined *puVar11;
  byte bVar12;
  int iVar13;
  long lVar14;
  float *pfVar15;
  ulong uVar16;
  ulong uVar17;
  undefined4 *puVar18;
  uint uVar19;
  int iVar20;
  uint *puVar21;
  byte *pbVar22;
  undefined4 uVar23;
  float fVar24;
  undefined4 local_a8;
  undefined4 uStack_a4;
  undefined1 local_a0 [12];
  byte local_94 [4];
  undefined4 local_90;
  undefined2 local_8c;
  byte local_88 [4];
  undefined4 local_84;
  undefined2 local_80;
  undefined4 local_7c;
  undefined1 local_78;
  undefined4 local_74;
  undefined4 local_64;
  
  if ((*(uint *)(param_1 + 0x1810) & 0xfffffff7) == 1) {
    uVar19 = *(uint *)(param_1 + 0x17cc) & 0xffffffef | 0x100;
  }
  else {
    lVar14 = *(long *)(param_1 + 0x68);
    *(int *)(param_1 + 0x18e5) = (int)(*(float *)(lVar14 + 0x278) * 999.99994);
    iVar13 = (int)(*(float *)(lVar14 + 0x27c) * 4.0);
    if (0x7ffe < iVar13) {
      iVar13 = 0x7fff;
    }
    if (iVar13 < -0x7fff) {
      iVar13 = -0x8000;
    }
    *(short *)(param_1 + 0x18e9) = (short)iVar13;
    fVar24 = *(float *)(lVar14 + 0x280);
    *(undefined4 *)(param_1 + 0x1830) = 0;
    *(undefined4 *)(param_1 + 0x1828) = 0;
    *(int *)(param_1 + 0x18eb) = (int)(fVar24 * 999.99994);
    uVar19 = *(uint *)(param_1 + 0x17cc) & 0xfffffeef;
  }
  *(uint *)(param_1 + 0x17cc) = uVar19;
  if (*(uint *)(param_1 + 0x1810) - 2 < 3) {
    puVar3 = &DAT_054e9a58;
    if (*(undefined8 **)(param_1 + 0x4c8) != (undefined8 *)0x0) {
      puVar3 = *(undefined8 **)(param_1 + 0x4c8);
    }
    uVar23 = FUN_016e026c(0,*(long *)(param_1 + 0x68) + 0x278,0,0);
    *(undefined4 *)((long)puVar3 + 0x2ec) = uVar23;
    *(undefined1 *)((long)puVar3 + 0x2e5) = 1;
  }
  FUN_02507c6c(local_88,1,1,1,0);
  puVar11 = PTR_DAT_04bb5038;
  puVar10 = PTR_DAT_04bb4718;
  puVar9 = PTR_DAT_04bb3778;
  puVar8 = PTR_DAT_04bb3770;
  puVar7 = PTR_DAT_04bb3238;
  local_90 = local_84;
  local_94[0] = 0xff;
  if (local_88[0] < 8) {
    local_94[0] = local_88[0];
  }
  local_8c = local_80;
  if (local_88[0] < 8) {
    puVar1 = PTR_DAT_04bb3780 + 0x10;
    do {
      lVar14 = *(long *)puVar10;
      puVar18 = (undefined4 *)puVar7;
      if (lVar14 != 0) {
        puVar18 = (undefined4 *)(lVar14 + (ulong)local_88[0] * 4 + 0xde8);
      }
      local_7c = *puVar18;
      local_64 = *(undefined4 *)(param_1 + 0x230);
      FUN_0071cb58(&local_a8,&local_7c,&local_64,0);
      plVar4 = (long *)CONCAT44(uStack_a4,local_a8);
      if (plVar4 != (long *)0x0) {
        if (((*puVar9 & 1) == 0) && (iVar13 = __cxa_guard_acquire(puVar9), iVar13 != 0)) {
          *(undefined **)puVar8 = puVar1;
          __cxa_guard_release(puVar9);
        }
        uVar17 = (**(code **)(*plVar4 + 0x20))(plVar4,puVar8);
        if ((uVar17 & 1) == 0) {
          local_a0[2] = 0;
        }
      }
      bVar12 = local_94[0];
      if ((((CONCAT44(uStack_a4,local_a8) != 0) && (local_a0[0] != '\0')) && (local_a0[2] != '\0'))
         && ((*(byte *)(CONCAT44(uStack_a4,local_a8) + 0x17d2) >> 2 & 1) != 0)) {
        FUN_02569d74(param_1 + 0xec0,7);
        lVar14 = *(long *)puVar10;
        if (lVar14 == 0) {
          if ((DAT_054f08d8 & 1) == 0) {
            iVar13 = __cxa_guard_acquire(&DAT_054f08d8);
            puVar21 = &DAT_054f08d0;
            if (iVar13 != 0) {
              DAT_054f08d0 = 0;
              __cxa_guard_release(&DAT_054f08d8);
            }
          }
          else {
            puVar21 = &DAT_054f08d0;
          }
        }
        else {
          puVar21 = (uint *)(lVar14 + 0x200);
        }
        local_7c = 2;
        *puVar21 = *puVar21 & 0xfffffffb;
        uVar17 = FUN_02546f34(param_1 + 0x1ee8,*(undefined4 *)(param_1 + 0x230));
        if ((uVar17 & 1) != 0) {
          return;
        }
        local_74 = 0;
        puVar18 = &local_7c;
        local_7c = 6;
        local_78 = 1;
        goto LAB_0243fc4c;
      }
      uVar17 = (ulong)local_94[0];
      if ((7 < local_94[0]) || (uVar17 + 1 == 8)) break;
      pbVar22 = puVar11 + uVar17 + 1;
      uVar16 = FUN_02507924(local_94,pbVar22);
      if ((uVar16 & 1) == 0) {
        if (uVar17 + 2 == 8) break;
        pbVar22 = puVar11 + uVar17 + 2;
        uVar16 = FUN_02507924(local_94,pbVar22);
        if ((uVar16 & 1) == 0) {
          if (uVar17 + 3 == 8) break;
          pbVar22 = puVar11 + uVar17 + 3;
          uVar16 = FUN_02507924(local_94,pbVar22);
          if ((uVar16 & 1) == 0) {
            if (uVar17 + 4 == 8) break;
            pbVar22 = puVar11 + uVar17 + 4;
            uVar16 = FUN_02507924(local_94,pbVar22);
            if ((uVar16 & 1) == 0) {
              if (uVar17 + 5 == 8) break;
              pbVar22 = puVar11 + uVar17 + 5;
              uVar16 = FUN_02507924(local_94,pbVar22);
              if ((uVar16 & 1) == 0) {
                if (uVar17 + 6 == 8) break;
                pbVar22 = puVar11 + uVar17 + 6;
                uVar16 = FUN_02507924(local_94,pbVar22);
                if ((uVar16 & 1) == 0) {
                  if (uVar17 + 7 == 8) break;
                  pbVar22 = puVar11 + uVar17 + 7;
                  uVar16 = FUN_02507924(local_94,pbVar22);
                  if ((uVar16 & 1) == 0) {
                    if (bVar12 == 0) break;
                    pbVar22 = puVar11 + uVar17 + 8;
                    FUN_02507924(local_94,pbVar22);
                  }
                }
              }
            }
          }
        }
      }
      local_88[0] = *pbVar22;
      if (7 < local_88[0]) break;
      local_94[0] = local_88[0];
    } while( true );
  }
  uVar5 = *(ushort *)(param_1 + 0x1900);
  lVar14 = FUN_0251e98c(1);
  pfVar15 = (float *)(**(code **)(*(long *)(lVar14 + 0x13b0) + 0xf0))(lVar14 + 0x13b0);
  fVar24 = *pfVar15;
  if (*(int *)(param_1 + 0x178) == 0) {
    local_7c = 10;
    local_a8 = 10;
    if ((*(byte *)(param_1 + 0x18f5) >> 2 & 1) != 0) goto LAB_0243f888;
  }
  iVar13 = (uint)uVar5 * 0x10000;
  plVar4 = &DAT_054e9a58;
  if (*(long **)(param_1 + 0x4c8) != (long *)0x0) {
    plVar4 = *(long **)(param_1 + 0x4c8);
  }
  lVar14 = (**(code **)(*plVar4 + 0x148))();
  iVar20 = iVar13 - *(int *)(lVar14 + 4);
  if (0xb60b5e < iVar20 + 0x5b05afU) {
    iVar6 = 0x15555560;
    iVar13 = -0x15555560;
    iVar20 = (int)(fVar24 * (float)iVar20);
    if (iVar20 < 1) {
      iVar6 = -0x5b05b0;
    }
    else {
      iVar13 = 0x5b05b0;
    }
    iVar2 = iVar20;
    if (iVar6 <= iVar20) {
      iVar2 = iVar6;
    }
    if (iVar13 <= iVar20) {
      iVar13 = iVar2;
    }
    iVar13 = iVar13 + *(int *)(lVar14 + 4);
  }
  *(int *)(lVar14 + 4) = iVar13;
LAB_0243f888:
  iVar13 = FUN_00a74b78(param_1 + 0x1ee8);
  if ((iVar13 == 0x13) &&
     ((((*(char *)(param_1 + 0x17ac) == '\0' &&
        ((local_a8 = 0, (*(uint *)(param_1 + 0xed0) & 1) != 0 ||
         (local_a8 = 0x24, (*(uint *)(param_1 + 0xed4) >> 4 & 1) != 0)))) ||
       (((*(uint *)(param_1 + 0xecc) >> 0xf & 1) == 0 &&
        (local_a8 = 0x2f, (*(uint *)(param_1 + 0xec4) >> 0xf & 1) != 0)))) ||
      (((*(uint *)(param_1 + 0xecc) >> 0x10 & 1) == 0 &&
       (local_a8 = 0x30, (*(uint *)(param_1 + 0xec4) >> 0x10 & 1) != 0)))))) {
    FUN_02569d74(param_1 + 0xec0,7);
    if (*(long *)PTR_DAT_04bb4718 == 0) {
      if ((DAT_054f08d8 & 1) == 0) {
        iVar13 = __cxa_guard_acquire(&DAT_054f08d8);
        puVar21 = &DAT_054f08d0;
        if (iVar13 != 0) {
          DAT_054f08d0 = 0;
          __cxa_guard_release(&DAT_054f08d8);
        }
      }
      else {
        puVar21 = &DAT_054f08d0;
      }
    }
    else {
      puVar21 = (uint *)(*(long *)PTR_DAT_04bb4718 + 0x200);
    }
    local_a8 = 2;
    *puVar21 = *puVar21 & 0xfffffffb;
    uVar17 = FUN_02546f34(param_1 + 0x1ee8,*(undefined4 *)(param_1 + 0x230));
    if ((uVar17 & 1) == 0) {
      puVar18 = &local_a8;
      local_a0._0_4_ = 0;
      local_a8 = 6;
      uStack_a4 = CONCAT31(uStack_a4._1_3_,1);
LAB_0243fc4c:
      FUN_02374e74(param_1,puVar18);
    }
  }
  return;
}

