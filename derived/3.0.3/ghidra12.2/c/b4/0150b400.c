
undefined1 FUN_0150b400(short *param_1)

{
  short *psVar1;
  undefined8 *puVar2;
  int *piVar3;
  undefined4 uVar4;
  byte bVar5;
  undefined *puVar6;
  undefined *puVar7;
  bool bVar8;
  bool bVar9;
  bool bVar10;
  uint uVar11;
  int iVar12;
  uint uVar13;
  uint uVar14;
  ulong uVar15;
  long *plVar16;
  short sVar17;
  uint *puVar18;
  undefined8 *puVar19;
  undefined8 *puVar20;
  short sVar21;
  long *plVar22;
  long lVar23;
  long lVar24;
  undefined *local_80;
  int local_78;
  int iStack_74;
  undefined *local_70;
  int local_68;
  int local_64;
  byte local_60;
  undefined *local_58;
  undefined4 local_50;
  undefined4 uStack_4c;
  uint *local_48;
  uint local_24;
  
  puVar7 = PTR_DAT_04bb43c0;
  psVar1 = param_1 + 4;
  lVar24 = *(long *)PTR_DAT_04bb43c0;
  uVar11 = FUN_0277d6c4(psVar1);
  lVar23 = *(long *)puVar7;
  if (lVar23 == 0) {
    return 0;
  }
  lVar24 = *(long *)(lVar24 + 0x57e58);
  uVar11 = (uVar11 & 0xffff) - (uint)*(ushort *)(lVar24 + 0x1f8);
  if (*(uint *)(lVar24 + 0x1d8) <= uVar11) {
    return 0;
  }
  if (*(long *)(*(long *)(lVar24 + 0x1e0) + (long)(int)uVar11 * 8) == 0) {
    return 0;
  }
  local_48 = (uint *)0x0;
  local_50 = *(undefined4 *)(param_1 + 4);
  uStack_4c = *(undefined4 *)(param_1 + 6);
  local_58 = PTR_DAT_04bc0510 + 0x10;
  uVar11 = FUN_0277d6c4(&local_50);
  if (*(long *)puVar7 != 0) {
    lVar23 = *(long *)(lVar23 + 0x57e58);
    uVar11 = (uVar11 & 0xffff) - (uint)*(ushort *)(lVar23 + 0x1f8);
    if ((uVar11 < *(uint *)(lVar23 + 0x1d8)) &&
       (*(long *)(*(long *)(lVar23 + 0x1e0) + (long)(int)uVar11 * 8) != 0)) {
      lVar23 = *(long *)PTR_DAT_04bc0428;
      uVar11 = FUN_0277d6c4(psVar1);
      uVar11 = (uVar11 & 0xffff) - (uint)*(ushort *)(lVar23 + 0x1f8);
      if (uVar11 < *(uint *)(lVar23 + 0x1d8)) {
        puVar18 = *(uint **)(*(long *)(lVar23 + 0x1e0) + (long)(int)uVar11 * 8);
        if (puVar18 != (uint *)0x0) {
          local_48 = puVar18;
        }
      }
    }
  }
  uVar15 = FUN_0154df90(psVar1);
  puVar7 = PTR_DAT_04bb6298;
  sVar17 = *param_1;
  if ((uVar15 & 1) != 0) {
    bVar8 = sVar17 != 0;
    bVar9 = DAT_055c1b60 == &DAT_055c1b58;
    puVar19 = DAT_055c1b60 + -8;
    puVar20 = puVar19;
    bVar10 = bVar9;
    if (!bVar9 && bVar8) {
      puVar20 = DAT_055c1b60;
      sVar21 = sVar17;
      do {
        puVar20 = (undefined8 *)puVar20[1];
        sVar21 = sVar21 + -1;
        bVar10 = puVar20 == &DAT_055c1b58;
      } while (!bVar10 && sVar21 != 0);
      puVar20 = puVar20 + -8;
    }
    puVar2 = &DAT_055c04a0;
    if (!bVar10) {
      puVar2 = puVar20;
    }
    iVar12 = *(int *)(puVar2 + 7);
    if (*(int *)(PTR_DAT_04bbd458 + 8) == iVar12) {
      local_24 = 0;
    }
    else if (*(int *)(PTR_DAT_04bbd458 + 0xc) == iVar12) {
      local_24 = 1;
    }
    else if (*(int *)(PTR_DAT_04bbd458 + 0x10) == iVar12) {
      local_24 = 2;
    }
    else if (*(int *)(PTR_DAT_04bbd458 + 0x14) == iVar12) {
      local_24 = 3;
    }
    else if (*(int *)(PTR_DAT_04bbd458 + 0x18) == iVar12) {
      local_24 = 4;
    }
    else if (*(int *)(PTR_DAT_04bbd458 + 0x1c) == iVar12) {
      local_24 = 5;
    }
    else if (*(int *)(PTR_DAT_04bbd458 + 0x20) == iVar12) {
      local_24 = 6;
    }
    else if (*(int *)(PTR_DAT_04bbd458 + 0x24) == iVar12) {
      local_24 = 7;
    }
    else if (*(int *)(PTR_DAT_04bbd458 + 0x28) == iVar12) {
      local_24 = 8;
    }
    else if (*(int *)(PTR_DAT_04bbd458 + 0x2c) == iVar12) {
      local_24 = 9;
    }
    else {
      local_24 = 10;
      if (*(int *)(PTR_DAT_04bbd458 + 0x30) != iVar12) {
        local_24 = 0;
      }
    }
    puVar20 = puVar19;
    bVar10 = bVar9;
    if (!bVar9 && bVar8) {
      puVar20 = DAT_055c1b60;
      sVar21 = sVar17;
      do {
        puVar20 = (undefined8 *)puVar20[1];
        sVar21 = sVar21 + -1;
        bVar10 = puVar20 == &DAT_055c1b58;
      } while (!bVar10 && sVar21 != 0);
      puVar20 = puVar20 + -8;
    }
    puVar2 = &DAT_055c04a0;
    if (!bVar10) {
      puVar2 = puVar20;
    }
    uVar15 = 0;
    do {
      uVar11 = (uint)uVar15;
      piVar3 = (int *)((long)(PTR_DAT_04bbbf90 + 8) + uVar15 * 4);
      if (0x38 < uVar11) {
        piVar3 = (int *)(PTR_DAT_04bbbf90 + 8);
      }
      if (*piVar3 == *(int *)(puVar2 + 7)) goto LAB_0150b6fc;
      uVar14 = 0x39;
      if ((int)uVar11 < 0x39) {
        uVar14 = uVar11 + 1;
      }
      uVar15 = (ulong)uVar14;
    } while (uVar14 != 0x39);
    uVar11 = 0;
LAB_0150b6fc:
    if (uVar11 == 0) {
      if (*(short *)PTR_DAT_04bb6298 == sVar17) {
        local_68 = 0;
        local_70 = PTR_DAT_04bbfe68 + 0x10;
        lVar23 = *(long *)PTR_DAT_04bb2720;
        if (lVar23 == 0) {
          puVar20 = &DAT_055c04a0;
        }
        else {
          puVar20 = &DAT_055c04a0;
          if (*(long *)(lVar23 + 0x330) != 0) {
            puVar20 = (undefined8 *)
                      (**(code **)(**(long **)PTR_DAT_04bb2640 + 0x18))
                                (*(long **)PTR_DAT_04bb2640,*(undefined4 *)(lVar23 + 0x338));
            iVar12 = FUN_006bd550(*puVar20,0);
            puVar20 = (undefined8 *)PTR_DAT_04bc3a80;
            if (iVar12 != 0x758f7eaf) {
              puVar20 = &DAT_055c04a0;
            }
          }
        }
        local_64 = *(int *)(puVar20 + 7);
        local_60 = FUN_017baf44();
        local_70 = PTR_DAT_04bb3140;
        goto LAB_0150b8a4;
      }
      if (local_24 != 0) {
        uVar11 = (uint)*(byte *)(param_1 + 1);
        if (7 < uVar11) {
          uVar11 = 0;
        }
        local_68 = (int)param_1[2];
        local_64 = (int)param_1[3];
        local_80 = (undefined *)CONCAT44(local_80._4_4_,uVar11);
        local_70 = PTR_DAT_04bb2010 + 0x10;
        FUN_01549f80(local_24,&local_80,&local_70,(char)param_1[0xc]);
      }
    }
    else {
      puVar20 = DAT_055c1b60;
      if (!bVar9 && bVar8) {
        do {
          puVar20 = (undefined8 *)puVar20[1];
          sVar17 = sVar17 + -1;
          bVar9 = puVar20 == &DAT_055c1b58;
        } while (!bVar9 && sVar17 != 0);
        puVar19 = puVar20 + -8;
      }
      lVar23 = 0;
      puVar20 = &DAT_055c04a0;
      if (!bVar9) {
        puVar20 = puVar19;
      }
      while (*(int *)(PTR_DAT_04bbbf90 + lVar23 * 4 + 8) != *(int *)(puVar20 + 7)) {
        if (0x37 < (uint)lVar23) {
          lVar23 = 0;
          puVar6 = PTR_DAT_04bbbf90;
          goto LAB_0150b828;
        }
        if (*(int *)(PTR_DAT_04bbbf90 + lVar23 * 4 + 0xc) == *(int *)(puVar20 + 7)) {
          lVar23 = lVar23 + 1;
          break;
        }
        lVar23 = lVar23 + 2;
      }
      puVar6 = PTR_DAT_04bbbf90 + lVar23 * 4;
LAB_0150b828:
      local_70 = PTR_DAT_04bbfe68 + 0x10;
      local_64 = *(int *)(puVar6 + 8);
      local_68 = (int)lVar23;
      local_60 = FUN_017baf44();
      local_70 = PTR_DAT_04bb5438;
LAB_0150b8a4:
      local_70 = local_70 + 0x10;
      bVar5 = *(byte *)(param_1 + 1);
      local_60 = local_60 & 1;
      local_80 = PTR_DAT_04bb2010 + 0x10;
      local_78 = (int)param_1[2];
      iStack_74 = (int)param_1[3];
      if (7 < bVar5) {
        bVar5 = 0;
      }
      FUN_014fd424(&local_70,(char)param_1[0xc],&local_80,bVar5);
    }
    sVar17 = *param_1;
  }
  if (*(short *)puVar7 != sVar17) {
    return 1;
  }
  local_68 = 0;
  local_70 = PTR_DAT_04bbfe68 + 0x10;
  lVar23 = *(long *)PTR_DAT_04bb2720;
  if (lVar23 == 0) {
    puVar20 = &DAT_055c04a0;
  }
  else {
    puVar20 = &DAT_055c04a0;
    if (*(long *)(lVar23 + 0x330) != 0) {
      puVar20 = (undefined8 *)
                (**(code **)(**(long **)PTR_DAT_04bb2640 + 0x18))
                          (*(long **)PTR_DAT_04bb2640,*(undefined4 *)(lVar23 + 0x338));
      iVar12 = FUN_006bd550(*puVar20,0);
      puVar20 = (undefined8 *)PTR_DAT_04bc3a80;
      if (iVar12 != 0x758f7eaf) {
        puVar20 = &DAT_055c04a0;
      }
    }
  }
  local_64 = *(int *)(puVar20 + 7);
  local_60 = FUN_017baf44();
  local_60 = local_60 & 1;
  bVar5 = *(byte *)(param_1 + 1);
  local_70 = PTR_DAT_04bb3140 + 0x10;
  if (7 < bVar5) {
    bVar5 = 0;
  }
  local_78 = (int)param_1[2];
  iStack_74 = (int)param_1[3];
  local_80 = PTR_DAT_04bb2010 + 0x10;
  puVar18 = (uint *)FUN_014fbd50(&local_70,bVar5,&local_80);
  uVar11 = *puVar18;
  local_24 = uVar11;
  uVar15 = FUN_015039ac(&local_24);
  puVar7 = PTR_DAT_04bb27c0;
  if ((uVar15 & 1) == 0) {
    return 0;
  }
  lVar23 = *(long *)PTR_DAT_04bb27c0;
  if (lVar23 == 0) {
    return 0;
  }
  if ((((uVar11 == 0) ||
       (plVar22 = *(long **)(*(long *)(*(long *)(lVar23 + 0x1c0) + 8) +
                            ((ulong)(uVar11 >> 0x11) & 0x7ff8)), plVar22 == (long *)0x0)) ||
      ((*(uint *)(plVar22 + 0x49) >> 1 & 1) != 0)) || (*(uint *)(plVar22 + 0x46) != uVar11)) {
    plVar22 = (long *)0x0;
  }
  if ((*(int *)(lVar23 + 0x288) == 1) || (*(int *)(lVar23 + 0x288) == -1)) {
    plVar16 = (long *)nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
    lVar23 = *(long *)puVar7;
    iVar12 = (**(code **)(*plVar16 + 0x60))();
    if (iVar12 < 0x11) {
      uVar11 = 1;
    }
    else {
      if (4 < *(uint *)(lVar23 + 0x5e8)) goto LAB_0150ba90;
      uVar11 = 0x1aU >> (ulong)(*(uint *)(lVar23 + 0x5e8) & 0x1f) & 1;
    }
  }
  else {
LAB_0150ba90:
    uVar11 = 0;
  }
  if (plVar22 == (long *)0x0) {
    return 0;
  }
  lVar23 = plVar22[0x2a];
  uVar14 = *(uint *)(plVar22 + 0x49);
  if (((*PTR_DAT_04bb5928 & 1) == 0) &&
     (iVar12 = __cxa_guard_acquire(PTR_DAT_04bb5928), iVar12 != 0)) {
    *(undefined **)PTR_DAT_04bb5920 = PTR_DAT_04bb3290 + 0x10;
    __cxa_guard_release(PTR_DAT_04bb5928);
  }
  uVar13 = (**(code **)(*plVar22 + 0x20))(plVar22,PTR_DAT_04bb5920);
  if ((int)lVar23 != 1) {
    return 0;
  }
  if ((uVar13 & uVar11) == 0) {
    return 0;
  }
  if ((uVar14 >> 4 & 1) == 0) {
    return 0;
  }
  plVar22 = (long *)plVar22[0x151];
  if (local_48 != (uint *)0x0) {
    uVar11 = *local_48;
    uVar14 = 0;
    if ((uVar11 == 0) || (local_48 == (uint *)(ulong)uVar11)) goto LAB_0150bb7c;
    puVar18 = (uint *)((long)local_48 - (long)(ulong)uVar11);
    uVar14 = 0;
    if (*puVar18 == 0) goto LAB_0150bb7c;
    uVar11 = puVar18[1];
    if ((uVar11 != 0) && ((ulong)(ushort)puVar18[2] != 0)) {
      lVar23 = 0xc;
      if (*(char *)((long)puVar18 + 10) != '\0') {
        lVar23 = 0x1c;
      }
      lVar23 = (long)puVar18 + lVar23 + (ulong)(ushort)puVar18[2] * 8;
      if (lVar23 != 0) {
        uVar14 = 0;
        if ((ulong)uVar11 != 0) {
          uVar14 = (uint)((ulong)((long)local_48 - lVar23) / (ulong)uVar11);
        }
        if (*puVar18 <= uVar14) {
          uVar14 = 0xffffffff;
        }
        if ((uVar14 < *(uint *)PTR_DAT_04bc0048) &&
           (uVar14 = (uint)*(ushort *)(*(long *)(PTR_DAT_04bc0048 + 8) + (long)(int)uVar14 * 2),
           uVar14 < 0x52)) goto LAB_0150bb7c;
      }
    }
  }
  uVar14 = 0;
LAB_0150bb7c:
  local_80 = (undefined *)CONCAT44(local_80._4_4_,uVar14);
  if (*(uint *)(plVar22 + 0x5b) != uVar14) {
    return 0;
  }
  uVar11 = *(uint *)(param_1 + 8);
  uVar4 = *(undefined4 *)(param_1 + 10);
  uVar14 = (**(code **)(*plVar22 + 0x198))(plVar22);
  if (uVar14 <= uVar11) {
    return 1;
  }
  uVar15 = (**(code **)(*plVar22 + 0x1b0))(plVar22);
  if (((uVar15 & 1) == 0) || (*(uint *)(plVar22 + 0x50) != uVar11)) {
    FUN_03ebb160(plVar22 + 0x4f,uVar11);
    (**(code **)(*plVar22 + 0x218))(plVar22,uVar11,uVar4);
    return 1;
  }
  return 1;
}

