
/* WARNING: Removing unreachable block (ram,0x02b139dc) */
/* WARNING: Removing unreachable block (ram,0x02b13344) */
/* WARNING: Removing unreachable block (ram,0x02b13014) */
/* WARNING: Removing unreachable block (ram,0x02b13024) */
/* WARNING: Removing unreachable block (ram,0x02b13030) */
/* WARNING: Removing unreachable block (ram,0x02b13354) */
/* WARNING: Removing unreachable block (ram,0x02b13360) */
/* WARNING: Removing unreachable block (ram,0x02b139ec) */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_02b12e00(long param_1,long param_2,long param_3)

{
  uint *puVar1;
  int *piVar2;
  undefined4 *puVar3;
  int iVar4;
  short sVar5;
  undefined *puVar6;
  undefined *puVar7;
  bool bVar8;
  uint uVar9;
  uint uVar10;
  undefined4 uVar11;
  ulong uVar12;
  int iVar13;
  int iVar14;
  undefined *puVar15;
  undefined8 *puVar16;
  long lVar17;
  long lVar18;
  float *pfVar19;
  undefined4 uVar20;
  float fVar21;
  undefined8 local_a0;
  undefined8 local_98;
  ulong local_90;
  float local_88;
  undefined *local_80;
  int local_78;
  int iStack_74;
  
  sVar5 = *(short *)PTR_DAT_04bb6298;
  if (sVar5 == -1) {
LAB_02b12eb4:
    if (param_2 == 0) {
      return;
    }
  }
  else {
    puVar1 = (uint *)(PTR_DAT_04bc39f8 + (ulong)(uint)(int)sVar5 * 8);
    if (0xff < (uint)(int)sVar5) {
      puVar1 = (uint *)PTR_DAT_04bc39f8;
    }
    if ((puVar1[1] & 1) == 0) goto LAB_02b12eb4;
    if (param_2 == 0) {
      return;
    }
    if ((*puVar1 & 1) != 0) {
      return;
    }
  }
  *(uint *)(param_1 + 0x10) = *(int *)(param_3 + 0x18) + 0x20000000U >> 0x1e;
  puVar6 = PTR_DAT_04bb2010;
  pfVar19 = (float *)(param_3 + 0xc);
  local_80 = PTR_DAT_04bb2010 + 0x10;
  local_78 = (int)((float)(int)*pfVar19 / 5.0) - (uint)(*pfVar19 < 0.0);
  iStack_74 = (int)((float)(int)*(float *)(param_3 + 0x14) / 5.0) -
              (uint)(*(float *)(param_3 + 0x14) < 0.0);
  uVar12 = FUN_00976070(&local_80);
  if ((uVar12 & 1) != 0) {
LAB_02b12f34:
    uVar10 = 0x11;
    goto LAB_02b13b48;
  }
  local_98 = local_98 & 0xffffffff00000000;
  local_a0 = (undefined *)0x0;
  local_90 = CONCAT44(local_90._4_4_,0x1d);
  local_a0._0_4_ = 0x20000000;
  local_a0._4_4_ = 0;
  if (((DAT_04cfae30 != 0) && (*(long *)(DAT_04cfae30 + 0xa8) != 0)) &&
     (uVar12 = FUN_00949898(DAT_04cfae30 + 0x28,&local_80,&local_a0), (uVar12 & 1) != 0))
  goto LAB_02b12f34;
  fVar21 = *(float *)(param_3 + 0x14);
  iVar13 = (int)((float)(int)*(float *)(param_3 + 0xc) / 10.0) -
           (uint)(*(float *)(param_3 + 0xc) < 0.0);
  *(int *)(param_1 + 0x738) = iVar13;
  iVar14 = (int)((float)(int)fVar21 / 10.0) - (uint)(fVar21 < 0.0);
  *(int *)(param_1 + 0x73c) = iVar14;
  puVar15 = PTR_DAT_04bb27a8;
  local_80 = (undefined *)((ulong)local_80 & 0xffffffff00000000);
  if ((*(long *)(*(long *)PTR_DAT_04bb27a8 + 0x1f8) == 0) ||
     (lVar17 = *(long *)(*(long *)(*(long *)PTR_DAT_04bb27a8 + 0x1f8) + 0xb0), lVar17 == 0)) {
    uVar10 = 0;
  }
  else {
    uVar10 = iVar13 - *(int *)(lVar17 + 0x28);
    if ((uVar10 < *(uint *)(lVar17 + 0x18)) &&
       (uVar9 = iVar14 - *(int *)(lVar17 + 0x2c), uVar9 < *(uint *)(lVar17 + 0x1c))) {
      uVar10 = uVar10 + *(uint *)(lVar17 + 0x18) * uVar9;
LAB_02b130c4:
      if (*(uint *)(lVar17 + 0x30) <= uVar10) {
        uVar10 = 0;
      }
      puVar16 = (undefined8 *)(*(long *)(lVar17 + 0x38) + (long)(int)uVar10 * 0x68);
    }
    else if (*(char *)(lVar17 + 0x88) == '\0') {
      puVar16 = &DAT_051a50f0;
    }
    else {
      uVar10 = iVar13 - *(int *)(lVar17 + 0x98);
      puVar16 = &DAT_051a50f0;
      if ((uVar10 < *(uint *)(lVar17 + 0xa0)) &&
         (uVar9 = iVar14 - *(int *)(lVar17 + 0x9c), uVar9 < *(uint *)(lVar17 + 0xa4))) {
        uVar10 = uVar10 + *(uint *)(lVar17 + 0xa0) * uVar9 + *(int *)(lVar17 + 0x8c);
        goto LAB_02b130c4;
      }
    }
    uVar10 = (uint)*(char *)(puVar16 + 2);
  }
  local_a0._0_4_ = uVar10;
  uVar9 = FUN_01317b90(pfVar19,0);
  puVar7 = PTR_DAT_04bc4af0;
  if (uVar10 != uVar9) goto LAB_02b13b44;
  lVar17 = param_1 + 0x730;
  local_80._0_4_ = uVar9;
  uVar12 = FUN_01318c80(lVar17,*(undefined4 *)(PTR_DAT_04bc4af0 + 0x20),0);
  if ((uVar12 & 1) == 0) {
LAB_02b13178:
    iVar13 = 0;
  }
  else {
    uVar10 = FUN_013188b0(lVar17);
    if (3 < *(uint *)(param_1 + 0x10)) goto LAB_02b13178;
    uVar10 = uVar10 & 3;
    switch(*(uint *)(param_1 + 0x10)) {
    case 0:
      uVar9 = (uint)(uVar10 == 0);
      bVar8 = uVar10 == 3;
      break;
    case 1:
      uVar9 = (uint)(uVar10 == 1);
      bVar8 = uVar10 == 0;
      break;
    case 2:
      uVar9 = (uint)(uVar10 == 2);
      bVar8 = uVar10 == 1;
      break;
    case 3:
      uVar9 = (uint)(uVar10 == 3);
      bVar8 = uVar10 == 2;
    }
    iVar13 = uVar9 << 1;
    if (bVar8) {
      iVar13 = 1;
    }
  }
  *(int *)(param_1 + 0xc) = iVar13;
  if (*(int *)(param_1 + 0xc) == 0) {
    iVar14 = (int)((float)(int)*(float *)(param_3 + 0xc) / 10.0) -
             (uint)(*(float *)(param_3 + 0xc) < 0.0);
    iVar13 = (int)((float)(int)*(float *)(param_3 + 0x14) / 10.0) -
             (uint)(*(float *)(param_3 + 0x14) < 0.0);
    switch(*(undefined4 *)(param_1 + 0x10)) {
    case 0:
      iVar13 = iVar13 + 1;
      break;
    case 1:
      iVar14 = iVar14 + 1;
      break;
    case 2:
      iVar13 = iVar13 + -1;
      break;
    case 3:
      iVar14 = iVar14 + -1;
    }
    *(int *)(param_1 + 0x738) = iVar14;
    lVar18 = *(long *)puVar15;
    *(int *)(param_1 + 0x73c) = iVar13;
    local_80._0_4_ = 0;
    lVar18 = *(long *)(lVar18 + 0x1f8);
    if ((lVar18 == 0) || (lVar18 = *(long *)(lVar18 + 0xb0), lVar18 == 0)) {
      uVar10 = 0;
    }
    else {
      uVar10 = iVar14 - *(int *)(lVar18 + 0x28);
      if ((uVar10 < *(uint *)(lVar18 + 0x18)) &&
         (uVar9 = iVar13 - *(int *)(lVar18 + 0x2c), uVar9 < *(uint *)(lVar18 + 0x1c))) {
        uVar10 = uVar10 + *(uint *)(lVar18 + 0x18) * uVar9;
LAB_02b133f4:
        if (*(uint *)(lVar18 + 0x30) <= uVar10) {
          uVar10 = 0;
        }
        puVar16 = (undefined8 *)(*(long *)(lVar18 + 0x38) + (long)(int)uVar10 * 0x68);
      }
      else if (*(char *)(lVar18 + 0x88) == '\0') {
        puVar16 = &DAT_051a50f0;
      }
      else {
        uVar10 = iVar14 - *(int *)(lVar18 + 0x98);
        puVar16 = &DAT_051a50f0;
        if ((uVar10 < *(uint *)(lVar18 + 0xa0)) &&
           (uVar9 = iVar13 - *(int *)(lVar18 + 0x9c), uVar9 < *(uint *)(lVar18 + 0xa4))) {
          uVar10 = uVar10 + *(uint *)(lVar18 + 0xa0) * uVar9 + *(int *)(lVar18 + 0x8c);
          goto LAB_02b133f4;
        }
      }
      uVar10 = (uint)*(char *)(puVar16 + 2);
    }
    local_a0._0_4_ = uVar10;
    local_80._0_4_ = FUN_01317b90(pfVar19,0);
    if (uVar10 != (uint)local_80) goto LAB_02b13b44;
    uVar12 = FUN_01318c80(lVar17,*(undefined4 *)(puVar7 + 0x34),0);
    if ((uVar12 & 1) == 0) goto LAB_02b13884;
    local_80._0_4_ = FUN_013188b0(lVar17);
    if (3 < *(uint *)(param_1 + 0x10)) goto LAB_02b13884;
    uVar10 = (uint)local_80 & 3;
    switch(*(uint *)(param_1 + 0x10)) {
    case 0:
      if (uVar10 != 3) break;
      goto LAB_02b13948;
    case 1:
      if (uVar10 == 0) {
LAB_02b138f4:
        uVar10 = 3;
        goto LAB_02b13948;
      }
      break;
    case 2:
      if (uVar10 == 1) goto LAB_02b138f4;
      break;
    case 3:
      if (uVar10 == 2) goto LAB_02b138f4;
    }
LAB_02b13884:
    uVar12 = FUN_01318c80(lVar17,*(undefined4 *)(puVar7 + 0x20),0);
    if ((uVar12 & 1) == 0) {
LAB_02b138e4:
      uVar10 = 0;
    }
    else {
      uVar10 = FUN_013188b0(lVar17);
      if (3 < *(uint *)(param_1 + 0x10)) goto LAB_02b138e4;
      uVar10 = uVar10 & 3;
      switch(*(uint *)(param_1 + 0x10)) {
      case 0:
        uVar9 = 5;
        if (uVar10 != 0) {
          uVar9 = 0;
        }
        bVar8 = uVar10 == 3;
        break;
      case 1:
        uVar9 = 5;
        if (uVar10 != 1) {
          uVar9 = 0;
        }
        bVar8 = uVar10 == 0;
        break;
      case 2:
        uVar9 = 5;
        if (uVar10 != 2) {
          uVar9 = 0;
        }
        bVar8 = uVar10 == 1;
        break;
      case 3:
        uVar9 = 5;
        if (uVar10 != 3) {
          uVar9 = 0;
        }
        bVar8 = uVar10 == 2;
      }
      uVar10 = 4;
      if (!bVar8) {
        uVar10 = uVar9;
      }
    }
LAB_02b13948:
    *(uint *)(param_1 + 0xc) = uVar10;
    if (*(int *)(param_1 + 0xc) == 0) {
      iVar13 = (int)((float)(int)*(float *)(param_3 + 0xc) / 10.0) -
               (uint)(*(float *)(param_3 + 0xc) < 0.0);
      iVar14 = (int)((float)(int)*(float *)(param_3 + 0x14) / 10.0) -
               (uint)(*(float *)(param_3 + 0x14) < 0.0);
      if (*(uint *)(param_1 + 0x10) < 4) {
        lVar18 = (long)(int)*(uint *)(param_1 + 0x10) * 4;
        iVar13 = *(int *)(&DAT_041023e0 + lVar18) + iVar13;
        iVar14 = *(int *)(&DAT_041029c0 + lVar18) + iVar14;
      }
      *(int *)(param_1 + 0x738) = iVar13;
      lVar18 = *(long *)puVar15;
      *(int *)(param_1 + 0x73c) = iVar14;
      local_80._0_4_ = 0;
      lVar18 = *(long *)(lVar18 + 0x1f8);
      if ((lVar18 == 0) || (lVar18 = *(long *)(lVar18 + 0xb0), lVar18 == 0)) {
        uVar10 = 0;
      }
      else {
        uVar10 = iVar13 - *(int *)(lVar18 + 0x28);
        if ((uVar10 < *(uint *)(lVar18 + 0x18)) &&
           (uVar9 = iVar14 - *(int *)(lVar18 + 0x2c), uVar9 < *(uint *)(lVar18 + 0x1c))) {
          uVar10 = uVar10 + *(uint *)(lVar18 + 0x18) * uVar9;
LAB_02b13a84:
          if (*(uint *)(lVar18 + 0x30) <= uVar10) {
            uVar10 = 0;
          }
          puVar16 = (undefined8 *)(*(long *)(lVar18 + 0x38) + (long)(int)uVar10 * 0x68);
        }
        else if (*(char *)(lVar18 + 0x88) == '\0') {
          puVar16 = &DAT_051a50f0;
        }
        else {
          uVar10 = iVar13 - *(int *)(lVar18 + 0x98);
          puVar16 = &DAT_051a50f0;
          if ((uVar10 < *(uint *)(lVar18 + 0xa0)) &&
             (uVar9 = iVar14 - *(int *)(lVar18 + 0x9c), uVar9 < *(uint *)(lVar18 + 0xa4))) {
            uVar10 = uVar10 + *(uint *)(lVar18 + 0xa0) * uVar9 + *(int *)(lVar18 + 0x8c);
            goto LAB_02b13a84;
          }
        }
        uVar10 = (uint)*(char *)(puVar16 + 2);
      }
      local_a0._0_4_ = uVar10;
      local_80._0_4_ = FUN_01317b90(pfVar19,0);
      if (uVar10 == (uint)local_80) {
        uVar11 = FUN_02b148ac(param_1);
        *(undefined4 *)(param_1 + 0xc) = uVar11;
        if (*(int *)(param_1 + 0xc) != 0) goto LAB_02b131c0;
        FUN_02b14a04(&local_80,param_1,pfVar19);
        *(int *)(param_1 + 0x738) = local_78;
        *(int *)(param_1 + 0x73c) = iStack_74;
        uVar10 = FUN_01317cc0(lVar17,0);
        local_a0._0_4_ = uVar10;
        local_80._0_4_ = FUN_01317b90(pfVar19,0);
        if (uVar10 == (uint)local_80) {
          uVar11 = FUN_02b14958(param_1);
          *(undefined4 *)(param_1 + 0xc) = uVar11;
          if (*(int *)(param_1 + 0xc) != 0) goto LAB_02b131c0;
        }
      }
LAB_02b13b44:
      uVar10 = 0xd;
LAB_02b13b48:
      if (*(int *)(param_2 + 8) != 0) {
        return;
      }
      if (uVar10 < 0x18) {
        *(int *)(param_2 + 8) = 1 << (ulong)uVar10;
        return;
      }
      return;
    }
  }
LAB_02b131c0:
  switch(*(undefined4 *)(param_1 + 0x10)) {
  case 0:
    if ((*(uint *)(param_1 + 0xc) < 7) &&
       ((1 << (ulong)(*(uint *)(param_1 + 0xc) & 0x1f) & 0x52U) != 0)) {
      local_80._0_4_ = 2;
      goto LAB_02b13438;
    }
    uVar10 = *(int *)(param_1 + 0xc) - 2;
    if (uVar10 < 6) {
      puVar15 = &UNK_0417f0fc;
      goto LAB_02b13428;
    }
    break;
  case 1:
    if ((*(uint *)(param_1 + 0xc) < 7) &&
       ((1 << (ulong)(*(uint *)(param_1 + 0xc) & 0x1f) & 0x52U) != 0)) {
      local_80._0_4_ = 3;
      goto LAB_02b13438;
    }
    break;
  case 2:
    if (((6 < *(uint *)(param_1 + 0xc)) ||
        ((1 << (ulong)(*(uint *)(param_1 + 0xc) & 0x1f) & 0x52U) == 0)) &&
       (uVar10 = *(int *)(param_1 + 0xc) - 2, uVar10 < 6)) {
      puVar15 = &UNK_0417f0e4;
LAB_02b13428:
      local_80._0_4_ = *(uint *)(puVar15 + (long)(int)uVar10 * 4);
      goto LAB_02b13438;
    }
    break;
  case 3:
    if ((*(uint *)(param_1 + 0xc) < 7) &&
       (local_80._0_4_ = 1, (1 << (ulong)(*(uint *)(param_1 + 0xc) & 0x1f) & 0x52U) != 0))
    goto LAB_02b13438;
    uVar10 = *(int *)(param_1 + 0xc) - 2;
    if (uVar10 < 6) {
      puVar15 = &UNK_0417f114;
      goto LAB_02b13428;
    }
  }
  local_80._0_4_ = 0;
LAB_02b13438:
  *(uint *)(param_1 + 0x748) = (uint)local_80;
  *(int *)(param_2 + 0x10) = (int)(long)((float)(int)(uint)local_80 * 90.0 * 11930465.0);
  uVar12 = FUN_02b13b90(param_1,param_2,param_3);
  if (((uVar12 & 1) == 0) && (*(int *)(param_1 + 0xc) == 3)) {
    uVar10 = 0;
    do {
      local_80._0_4_ = uVar10;
      if (((uint)local_80 < 0x18) &&
         (uVar10 = (uint)local_80,
         (*(uint *)(param_2 + 8) >> (ulong)((uint)local_80 & 0x1f) & 1) != 0)) goto LAB_02b134d0;
      uVar10 = 0x18;
      if ((int)(uint)local_80 < 0x18) {
        uVar10 = (uint)local_80 + 1;
      }
    } while (uVar10 != 0x18);
    uVar10 = 0x16;
LAB_02b134d0:
    *(undefined4 *)(param_2 + 8) = 0;
    piVar2 = &DAT_04058000 + (ulong)*(uint *)(param_1 + 0x10) * 2;
    if (3 < *(uint *)(param_1 + 0x10)) {
      piVar2 = &DAT_04058000;
    }
    puVar3 = &DAT_04058000 + (ulong)*(uint *)(param_1 + 0x10) * 2;
    if (3 < *(uint *)(param_1 + 0x10)) {
      puVar3 = &DAT_04058000;
    }
    iVar13 = puVar3[1];
    *(int *)(param_1 + 0x738) = *(int *)(param_1 + 0x738) + *piVar2;
    *(int *)(param_1 + 0x73c) = *(int *)(param_1 + 0x73c) + iVar13;
    uVar12 = FUN_02b13b90(param_1,param_2,param_3);
    if ((uVar12 & 1) == 0) {
      uVar9 = 0;
      do {
        local_80._0_4_ = uVar9;
        if (((uint)local_80 < 0x18) &&
           (uVar9 = (uint)local_80,
           (*(uint *)(param_2 + 8) >> (ulong)((uint)local_80 & 0x1f) & 1) != 0)) goto LAB_02b13640;
        uVar9 = 0x18;
        if ((int)(uint)local_80 < 0x18) {
          uVar9 = (uint)local_80 + 1;
        }
      } while (uVar9 != 0x18);
      uVar9 = 0x16;
LAB_02b13640:
      uVar12 = FUN_02b141c4(uVar10,uVar9);
      if ((uVar12 & 1) == 0) {
        return;
      }
      *(undefined4 *)(param_2 + 8) = 0;
      piVar2 = &DAT_04058000 + (ulong)*(uint *)(param_1 + 0x10) * 2;
      if (3 < *(uint *)(param_1 + 0x10)) {
        piVar2 = &DAT_04058000;
      }
      puVar3 = &DAT_04058000 + (ulong)*(uint *)(param_1 + 0x10) * 2;
      if (3 < *(uint *)(param_1 + 0x10)) {
        puVar3 = &DAT_04058000;
      }
      iVar13 = puVar3[1];
      *(int *)(param_1 + 0x738) = *(int *)(param_1 + 0x738) - *piVar2;
      *(int *)(param_1 + 0x73c) = *(int *)(param_1 + 0x73c) - iVar13;
      FUN_02b13b90(param_1,param_2,param_3);
      return;
    }
  }
  uVar12 = FUN_02b1eb30(param_1,param_1 + 0x18);
  if ((uVar12 & 1) != 0) {
    *(undefined1 *)(param_2 + 0xc) = 1;
  }
  local_a0 = puVar6 + 0x10;
  iVar14 = *(int *)(param_1 + 0x738);
  local_88 = 0.0;
  iVar13 = *(int *)(param_1 + 0x73c);
  local_98 = 0;
  local_90 = 0;
  local_80 = PTR_DAT_04bb2018 + 0x10;
  if (*(int *)(param_1 + 0xc) == 3) {
    iVar4 = *(int *)(param_1 + 0x10);
    if (iVar4 == 2) {
      iVar13 = iVar13 + 2;
      uVar11 = 0x80000000;
    }
    else if (iVar4 == 1) {
      iVar14 = iVar14 + -2;
      uVar11 = 0x40000000;
    }
    else if (iVar4 == 0) {
      iVar13 = iVar13 + -2;
      uVar11 = 0;
    }
    else {
      iVar14 = iVar14 + 2;
      uVar11 = 0xc0000000;
    }
    fVar21 = (float)iVar14 * 10.0 + 5.0;
    local_90 = (ulong)(uint)fVar21;
    local_88 = (float)iVar13 * 10.0 + 5.0;
  }
  else {
    iVar4 = *(int *)(param_1 + 0x748);
    if (iVar4 == 2) {
      local_78 = iVar14 + 1;
      iStack_74 = iVar13 + -1;
      FUN_0137d6ec(&local_80,&local_a0);
      uVar11 = 0xe0000000;
      local_88 = (float)local_98._4_4_ * 5.0;
      fVar21 = (float)(int)local_98 * 5.0 + 5.0;
      local_90 = CONCAT44(local_90._4_4_,fVar21);
    }
    else if (iVar4 == 1) {
      local_78 = iVar14 + 1;
      iStack_74 = iVar13 + 1;
      FUN_0137d60c(&local_80,&local_a0);
      uVar11 = 0xa0000000;
      local_88 = (float)local_98._4_4_ * 5.0 + 5.0;
      fVar21 = (float)(int)local_98 * 5.0 + 5.0;
      local_90 = CONCAT44(local_90._4_4_,fVar21);
    }
    else {
      local_78 = iVar14 + -1;
      if (iVar4 == 0) {
        iStack_74 = iVar13 + 1;
        FUN_0137d678(&local_80,&local_a0);
        uVar11 = 0x60000000;
        fVar21 = (float)(int)local_98 * 5.0;
        local_88 = (float)local_98._4_4_ * 5.0 + 5.0;
        local_90 = CONCAT44(local_90._4_4_,fVar21);
      }
      else {
        iStack_74 = iVar13 + -1;
        FUN_0137d760(&local_80,&local_a0);
        uVar11 = 0x20000000;
        fVar21 = (float)(int)local_98 * 5.0;
        local_90 = CONCAT44(local_90._4_4_,fVar21);
        local_88 = (float)local_98._4_4_ * 5.0;
      }
    }
  }
  if (((DAT_04cfae30 == 0) || (*(long *)(DAT_04cfae30 + 0xa8) == 0)) ||
     (*(char *)(DAT_04cfae30 + 0x11c8) != '\0')) {
    uVar20 = 0xc3fa0000;
    local_90._0_4_ = fVar21;
  }
  else {
    uVar20 = FUN_0093a950(DAT_04cfae30 + 0x28,&local_90,0);
  }
  *(float *)(param_2 + 0x14) = (float)local_90;
  *(undefined4 *)(param_2 + 0x18) = uVar20;
  *(float *)(param_2 + 0x1c) = local_88;
  *(undefined4 *)(param_2 + 0x20) = uVar11;
  return;
}

