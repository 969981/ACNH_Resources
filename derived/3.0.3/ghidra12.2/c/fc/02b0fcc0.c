
/* WARNING: Removing unreachable block (ram,0x02b10310) */
/* WARNING: Removing unreachable block (ram,0x02b0fd50) */
/* WARNING: Removing unreachable block (ram,0x02b10308) */

void FUN_02b0fcc0(long param_1,long param_2,long param_3)

{
  long *plVar1;
  undefined *puVar2;
  int iVar3;
  ushort uVar4;
  short sVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  undefined *puVar9;
  undefined *puVar10;
  long lVar11;
  uint uVar12;
  long lVar13;
  uint *puVar14;
  undefined8 *puVar15;
  uint uVar16;
  uint uVar17;
  uint *puVar18;
  long lVar19;
  int iVar20;
  uint uVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  undefined *local_100;
  undefined *puStack_f8;
  int local_f0;
  int iStack_ec;
  undefined *local_e8;
  int local_e0;
  int iStack_dc;
  undefined *local_d8;
  undefined *puStack_d0;
  int local_c8;
  uint local_c4;
  undefined *local_c0;
  undefined8 local_b8;
  undefined **local_b0;
  undefined **local_a8;
  undefined *local_a0;
  undefined8 local_98;
  undefined *puStack_90;
  undefined8 local_88;
  undefined1 local_80;
  uint local_64;
  
  uVar12 = *(uint *)(param_2 + 8);
  local_b0 = (undefined **)CONCAT44(local_b0._4_4_,uVar12);
  plVar1 = (long *)(param_1 + 8) + uVar12;
  if (6 < uVar12) {
    plVar1 = (long *)(param_1 + 8);
  }
  if ((long *)*plVar1 == (long *)0x0) {
    return;
  }
  lVar11 = (**(code **)(*(long *)*plVar1 + 0x38))();
  if (lVar11 == 0) {
    return;
  }
  if ((*(byte *)(lVar11 + 8) >> 1 & 1) == 0) {
    lVar13 = lVar11 + 0x18;
  }
  else {
    local_b0 = (undefined **)CONCAT44(local_b0._4_4_,5);
    lVar13 = lVar11 + 0x350;
  }
  puStack_f8 = PTR_DAT_04bb2018 + 0x10;
  lVar19 = *(long *)(param_1 + 0x70);
  local_100 = PTR_DAT_04bbc5d8 + 0x10;
  fVar24 = (float)*(int *)(lVar13 + 0x14) * 0.5;
  fVar22 = (float)*(int *)(lVar13 + 0x10) * 0.5;
  fVar25 = (float)*(int *)(lVar13 + 0x20) * 0.5;
  fVar23 = (float)*(int *)(lVar13 + 0x24) * 0.5;
  uVar16 = 0;
  if (fVar22 != (float)(int)fVar22) {
    uVar16 = (uint)(fVar22 < 0.0);
  }
  iVar20 = (int)fVar22 - uVar16;
  uVar16 = 0;
  if (fVar24 != (float)(int)fVar24) {
    uVar16 = (uint)(fVar24 < 0.0);
  }
  uVar16 = (int)fVar24 - uVar16;
  uVar17 = 0;
  if (fVar25 != (float)(int)fVar25) {
    uVar17 = (uint)(fVar25 < 0.0);
  }
  iVar6 = (int)fVar25 - uVar17;
  uVar17 = 0;
  if (fVar23 != (float)(int)fVar23) {
    uVar17 = (uint)(fVar23 < 0.0);
  }
  uVar17 = (int)fVar23 - uVar17;
  iVar7 = iVar20;
  if (iVar6 <= iVar20) {
    iVar7 = iVar6;
  }
  if (iVar20 <= iVar6) {
    iVar20 = iVar6;
  }
  local_e0 = iVar7 + -1;
  uVar21 = uVar16;
  if ((int)uVar17 <= (int)uVar16) {
    uVar21 = uVar17;
  }
  if ((int)uVar16 <= (int)uVar17) {
    uVar16 = uVar17;
  }
  iStack_dc = uVar21 - 1;
  uVar17 = uVar16 + 1;
  local_b8 = CONCAT44(uVar16,iVar20);
  local_f0 = local_e0;
  if (iVar20 + 1 <= local_e0) {
    local_f0 = iVar20 + 1;
  }
  if (local_e0 <= iVar20 + 1) {
    local_e0 = iVar20 + 1;
  }
  iStack_ec = iStack_dc;
  if ((int)uVar17 <= iStack_dc) {
    iStack_ec = uVar16 + 1;
  }
  if (iStack_dc <= (int)uVar17) {
    iStack_dc = uVar16 + 1;
  }
  local_e8 = puStack_f8;
  local_d8 = local_100;
  puStack_d0 = puStack_f8;
  local_c8 = iVar7;
  local_c4 = uVar21;
  local_c0 = puStack_f8;
  if (lVar19 != 0) {
    local_b0 = &puStack_d0;
    local_a8 = &local_c0;
    local_98 = CONCAT44(uVar21,iVar7);
    local_a0 = puStack_f8;
    if (uVar17 != uVar21) {
      iVar20 = iVar7;
      do {
        FUN_01320eac(&local_64,lVar19,&local_a0);
        if (*(long *)(param_1 + 0x58) != 0) {
          iVar6 = *(int *)(param_1 + 0x68);
          iVar3 = *(int *)(param_1 + 0x60);
          if (iVar6 < iVar3) {
            *(int *)(param_1 + 0x68) = iVar6 + 1;
            iVar6 = *(int *)(param_1 + 100) + iVar6;
            iVar8 = 0;
            if (iVar3 <= iVar6) {
              iVar8 = iVar3;
            }
            lVar13 = *(long *)(param_1 + 0x58) + (long)(iVar6 - iVar8) * 0x18;
            *(int *)(lVar13 + 8) = iVar20;
            *(uint *)(lVar13 + 0xc) = uVar21;
            *(undefined2 *)(lVar13 + 0x10) = (undefined2)local_64;
          }
        }
        if (iVar20 < (int)local_b8) {
          iVar20 = iVar20 + 1;
        }
        else {
          uVar21 = uVar21 + 1;
          local_98 = (ulong)uVar21 << 0x20;
          iVar20 = local_c8;
        }
        local_98 = CONCAT44(local_98._4_4_,iVar20);
      } while ((iVar7 != iVar20) || (uVar17 != uVar21));
    }
    *(undefined1 *)(param_1 + 0x78) = 1;
  }
  puVar10 = PTR_DAT_04bbc5d8;
  puVar9 = PTR_DAT_04bb2018;
  if (*(long *)(param_1 + 0xa0) != 0) {
    FUN_0130a670(*(long *)(param_1 + 0xa0),param_1 + 0x80,&local_100);
    *(undefined1 *)(param_1 + 0xa8) = 1;
  }
  if (uVar12 != 4) {
    fVar23 = (float)*(int *)(lVar11 + 0x2c) * 0.5;
    fVar22 = (float)*(int *)(lVar11 + 0x28) * 0.5;
    fVar24 = (float)*(int *)(lVar11 + 0x38) * 0.5;
    fVar25 = (float)*(int *)(lVar11 + 0x3c) * 0.5;
    uVar12 = 0;
    if (fVar22 != (float)(int)fVar22) {
      uVar12 = (uint)(fVar22 < 0.0);
    }
    iVar20 = (int)fVar22 - uVar12;
    uVar12 = 0;
    if (fVar23 != (float)(int)fVar23) {
      uVar12 = (uint)(fVar23 < 0.0);
    }
    iVar6 = (int)fVar23 - uVar12;
    uVar12 = 0;
    if (fVar24 != (float)(int)fVar24) {
      uVar12 = (uint)(fVar24 < 0.0);
    }
    iVar7 = (int)fVar24 - uVar12;
    sVar5 = *(short *)PTR_DAT_04bb6298;
    uVar12 = 0;
    if (fVar25 != (float)(int)fVar25) {
      uVar12 = (uint)(fVar25 < 0.0);
    }
    iVar8 = (int)fVar25 - uVar12;
    iVar3 = iVar20;
    if (iVar7 <= iVar20) {
      iVar3 = iVar7;
    }
    if (iVar20 <= iVar7) {
      iVar20 = iVar7;
    }
    iVar7 = iVar6;
    if (iVar8 <= iVar6) {
      iVar7 = iVar8;
    }
    if (iVar6 <= iVar8) {
      iVar6 = iVar8;
    }
    if (sVar5 == -1) {
      lVar11 = *(long *)PTR_DAT_04bb27a8;
LAB_02b10234:
      local_64 = 0;
    }
    else {
      puVar2 = PTR_DAT_04bc39f8 + (ulong)(uint)(int)sVar5 * 8;
      if (0xff < (uint)(int)sVar5) {
        puVar2 = PTR_DAT_04bc39f8;
      }
      lVar11 = *(long *)PTR_DAT_04bb27a8;
      if ((*(uint *)(puVar2 + 4) & 1) == 0) goto LAB_02b10234;
      local_64 = 0x32;
    }
    if (local_64 == 0) {
      puVar15 = (undefined8 *)(lVar11 + 0x1f8);
    }
    else {
      puVar15 = (undefined8 *)(lVar11 + 0x30) + local_64;
      if (0x38 < local_64) {
        puVar15 = (undefined8 *)(lVar11 + 0x30);
      }
    }
    local_b0 = (undefined **)*puVar15;
    local_98 = CONCAT44(iVar7,iVar3);
    local_88 = CONCAT44(iVar6,iVar20);
    local_80 = 0;
    goto LAB_02b102d0;
  }
  lVar13 = *(long *)PTR_DAT_04bb5008;
  uVar12 = (uint)*(ushort *)(param_3 + 0xe) - (uint)*(ushort *)(lVar13 + 0xff0);
  if ((uVar12 < *(uint *)(lVar13 + 0xfd0)) &&
     (puVar14 = *(uint **)(*(long *)(lVar13 + 0xfd8) + (long)(int)uVar12 * 8),
     puVar14 != (uint *)0x0)) {
    uVar12 = *puVar14;
    if (uVar12 == 0 || puVar14 == (uint *)(ulong)uVar12) {
LAB_02b10044:
      uVar12 = 0;
    }
    else {
      puVar18 = (uint *)((long)puVar14 - (long)(ulong)uVar12);
      if (((*puVar18 == 0) || (uVar12 = puVar18[1], uVar12 == 0)) ||
         ((ulong)(ushort)puVar18[2] == 0)) goto LAB_02b10044;
      lVar13 = 0xc;
      if (*(char *)((long)puVar18 + 10) != '\0') {
        lVar13 = 0x1c;
      }
      lVar13 = (long)puVar18 + lVar13 + (ulong)(ushort)puVar18[2] * 8;
      if (lVar13 == 0) goto LAB_02b10044;
      uVar16 = 0;
      if ((ulong)uVar12 != 0) {
        uVar16 = (uint)((ulong)((long)puVar14 - lVar13) / (ulong)uVar12);
      }
      if (*puVar18 <= uVar16) {
        uVar16 = 0xffffffff;
      }
      if ((*(uint *)PTR_DAT_04bc4590 <= uVar16) ||
         (uVar4 = *(ushort *)(*(long *)(PTR_DAT_04bc4590 + 8) + (long)(int)uVar16 * 2),
         uVar12 = (uint)uVar4, 5 < uVar4)) goto LAB_02b10044;
    }
    local_b0 = (undefined **)CONCAT44(local_b0._4_4_,uVar12);
    if (2 < uVar12) {
      FUN_02b0ed20(lVar11);
      return;
    }
  }
  sVar5 = *(short *)PTR_DAT_04bb6298;
  if (sVar5 == -1) {
    lVar11 = *(long *)PTR_DAT_04bb27a8;
LAB_02b10264:
    local_64 = 0;
  }
  else {
    puVar2 = PTR_DAT_04bc39f8 + (ulong)(uint)(int)sVar5 * 8;
    if (0xff < (uint)(int)sVar5) {
      puVar2 = PTR_DAT_04bc39f8;
    }
    lVar11 = *(long *)PTR_DAT_04bb27a8;
    if ((*(uint *)(puVar2 + 4) & 1) == 0) goto LAB_02b10264;
    local_64 = 0x32;
  }
  if (local_64 == 0) {
    puVar15 = (undefined8 *)(lVar11 + 0x1f8);
  }
  else {
    puVar15 = (undefined8 *)(lVar11 + 0x30) + local_64;
    if (0x38 < local_64) {
      puVar15 = (undefined8 *)(lVar11 + 0x30);
    }
  }
  local_b0 = (undefined **)*puVar15;
  local_98 = CONCAT44(local_c4,local_c8);
  local_88 = local_b8;
  local_80 = 1;
LAB_02b102d0:
  local_a0 = puVar9 + 0x10;
  local_a8 = (undefined **)(puVar10 + 0x10);
  puStack_90 = local_a0;
  FUN_013102c0(param_1 + 0xb0,&local_b0);
  return;
}

