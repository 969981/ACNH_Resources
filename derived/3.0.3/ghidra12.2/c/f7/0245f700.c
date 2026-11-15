
void FUN_0245f700(long param_1)

{
  float *pfVar1;
  byte *pbVar2;
  char *pcVar3;
  byte *pbVar4;
  uint uVar5;
  int iVar6;
  float *pfVar7;
  float *pfVar8;
  ulong uVar9;
  byte bVar10;
  long lVar11;
  byte bVar12;
  uint uVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float local_10c;
  undefined8 local_108;
  undefined4 local_100;
  uint local_fc;
  undefined8 local_f8;
  float local_f0;
  uint local_ec;
  float local_e8;
  undefined4 uStack_e4;
  float local_e0;
  float local_dc;
  float local_d8;
  float local_d4;
  int local_d0;
  uint local_cc;
  undefined8 local_c8;
  float local_c0;
  float local_bc;
  undefined2 local_b8;
  undefined1 local_b6;
  undefined8 local_b0;
  undefined8 local_a8;
  undefined8 local_a0;
  undefined4 local_98;
  undefined8 local_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined4 local_78;
  int local_74;
  
  pcVar3 = (char *)(param_1 + 0x12f8);
  FUN_0245ea0c();
  if (*(int *)(param_1 + 0x178) == 0) {
    uVar9 = FUN_0245f360(param_1);
    if ((uVar9 & 1) != 0) {
      return;
    }
    iVar6 = *(int *)(param_1 + 0x159c);
    local_108 = CONCAT44(local_108._4_4_,iVar6);
    if (iVar6 == 3) {
      bVar10 = *(byte *)(param_1 + 0x18f8) & 0xcf | 0x20;
    }
    else if (iVar6 == 1) {
      bVar10 = *(byte *)(param_1 + 0x18f8) & 0xdf | 0x10;
    }
    else {
      bVar10 = *(byte *)(param_1 + 0x18f8);
      if (((bVar10 & 0x30) != 0) && (lVar11 = *(long *)(param_1 + 0x60), lVar11 != 0)) {
        *(undefined4 *)(lVar11 + 0x12d0) = 0;
        *(undefined1 *)(lVar11 + 0x142d) = 0;
        **(undefined1 **)(lVar11 + 0x12e0) = 0;
        *(undefined4 *)(lVar11 + 0x1428) = 0;
        *(undefined8 *)(lVar11 + 0x1334) = 0;
        *(undefined8 *)(lVar11 + 0x133c) = 0;
        *(undefined4 *)(lVar11 + 0x1344) = 0;
        *(undefined4 *)(lVar11 + 0x1330) = 0xffffffff;
        bVar10 = *(byte *)(param_1 + 0x18f8);
      }
      bVar10 = bVar10 & 0xcf;
    }
    *(byte *)(param_1 + 0x18f8) = bVar10;
  }
  else if (((*(byte *)(param_1 + 0x18f8) & 0x30) == 0) &&
          (lVar11 = *(long *)(param_1 + 0x60), lVar11 != 0)) {
    *(undefined4 *)(lVar11 + 0x12d0) = 0;
    *(undefined1 *)(lVar11 + 0x142d) = 0;
    **(undefined1 **)(lVar11 + 0x12e0) = 0;
    *(undefined4 *)(lVar11 + 0x1330) = 0xffffffff;
    *(undefined4 *)(lVar11 + 0x1428) = 0;
    *(undefined8 *)(lVar11 + 0x1334) = 0;
    *(undefined8 *)(lVar11 + 0x133c) = 0;
    *(undefined4 *)(lVar11 + 0x1344) = 0;
  }
  pfVar1 = (float *)PTR_DAT_04bc3038;
  if ((*(byte *)(param_1 + 0x17d6) >> 6 & 1) != 0) {
    pfVar7 = (float *)PTR_DAT_04bc3038;
    if (*pcVar3 != '\0') {
      pfVar7 = (float *)(param_1 + 0xeec);
    }
    fVar17 = SQRT(pfVar7[1] * pfVar7[1] + *pfVar7 * *pfVar7);
    lVar11 = FUN_0251e98c(1);
    pfVar7 = (float *)(**(code **)(*(long *)(lVar11 + 0x120) + 0xf0))(lVar11 + 0x120);
    if (*pfVar7 <= fVar17) {
      lVar11 = FUN_0251e98c(1);
      pfVar7 = (float *)(**(code **)(*(long *)(lVar11 + 0x120) + 0xf0))(lVar11 + 0x120);
      fVar14 = *pfVar7;
      lVar11 = FUN_0251e98c(1);
      pfVar7 = (float *)(**(code **)(*(long *)(lVar11 + 0x120) + 0xf0))(lVar11 + 0x120);
      fVar14 = (fVar17 - *pfVar7) / (1.0 - fVar14);
      fVar17 = 0.9999;
      if (fVar14 <= 0.9999) {
        fVar17 = fVar14;
      }
      if ((0.0 <= fVar14) && (0.0 < fVar17)) goto LAB_0245f8fc;
    }
    *(uint *)(param_1 + 0x17d4) = *(uint *)(param_1 + 0x17d4) & 0xffbfffff;
  }
LAB_0245f8fc:
  pfVar7 = (float *)(param_1 + 0xeec);
  pfVar8 = pfVar1;
  if (*pcVar3 != '\0') {
    pfVar8 = pfVar7;
  }
  fVar17 = SQRT(pfVar8[1] * pfVar8[1] + *pfVar8 * *pfVar8);
  lVar11 = FUN_0251e98c(1);
  pfVar8 = (float *)(**(code **)(*(long *)(lVar11 + 0x120) + 0xf0))(lVar11 + 0x120);
  if (fVar17 < *pfVar8) {
    return;
  }
  lVar11 = FUN_0251e98c(1);
  pfVar8 = (float *)(**(code **)(*(long *)(lVar11 + 0x120) + 0xf0))(lVar11 + 0x120);
  fVar14 = *pfVar8;
  lVar11 = FUN_0251e98c(1);
  pfVar8 = (float *)(**(code **)(*(long *)(lVar11 + 0x120) + 0xf0))(lVar11 + 0x120);
  fVar14 = (fVar17 - *pfVar8) / (1.0 - fVar14);
  fVar17 = 0.9999;
  if (fVar14 <= 0.9999) {
    fVar17 = fVar14;
  }
  if (fVar14 < 0.0) {
    return;
  }
  if (fVar17 <= 0.0 || *(int *)(param_1 + 0x178) != 0) {
    return;
  }
  pbVar2 = (byte *)(param_1 + 0x1ee8);
  lVar11 = *(long *)PTR_DAT_04bb39b0;
  if ((lVar11 != 0) && (*(int *)(lVar11 + 0x15c) != 0)) {
    pbVar4 = PTR_DAT_04bb32e0;
    if (*(int *)(lVar11 + 0x15c) != 0) {
      pbVar4 = (byte *)(lVar11 + 0x158);
    }
    bVar12 = *pbVar2;
    bVar10 = *pbVar4;
    if (7 < bVar10) {
      bVar10 = 0xff;
    }
    if (7 < bVar12) {
      bVar12 = 0xff;
    }
    if (bVar10 != bVar12) {
      if (*DAT_055c10d8 != '\0') {
        return;
      }
      if (*DAT_055cdb40 != '\0') {
        return;
      }
    }
  }
  pfVar8 = pfVar1;
  if (*pcVar3 != '\0') {
    pfVar8 = pfVar7;
  }
  FUN_02569464(&local_74,pfVar8);
  local_108 = CONCAT44(local_108._4_4_,local_74 + 0x20000000U >> 0x1e);
  uVar9 = FUN_01515e80(pbVar2,*(long *)(param_1 + 0x68) + 0x278,*(long *)(param_1 + 0x68) + 0x2b0,
                       &local_108);
  if ((uVar9 & 1) != 0) {
    return;
  }
  uVar9 = FUN_0151c248(pbVar2,*(long *)(param_1 + 0x68) + 0x278,*(long *)(param_1 + 0x68) + 0x2b0,
                       &local_108);
  if ((uVar9 & 1) != 0) {
    return;
  }
  local_90 = 0;
  local_78 = 0;
  local_88 = 0xbf80000000000000;
  uStack_80 = 0x673f800000;
  lVar11 = FUN_0251e98c(1);
  pfVar8 = (float *)(**(code **)(*(long *)(lVar11 + 0x2d0) + 0xf0))(lVar11 + 0x2d0);
  uStack_80 = CONCAT44(0xf7,(undefined4)uStack_80);
  local_b0 = 0;
  local_a8 = 0xbf80000000000000;
  local_a0 = 0x673f800000;
  local_98 = 0;
  local_88 = CONCAT44(*pfVar8 * 0.99,(undefined4)local_88);
  lVar11 = FUN_0251e98c(1);
  pfVar8 = (float *)(**(code **)(*(long *)(lVar11 + 0x2d0) + 0xf0))(lVar11 + 0x2d0);
  local_a0 = CONCAT44(0xf7,(undefined4)local_a0);
  local_c0 = 0.0;
  local_c8 = 0;
  local_b8 = 0;
  local_b6 = 0;
  if (*pcVar3 != '\0') {
    pfVar1 = pfVar7;
  }
  local_bc = *pfVar8 * 0.99 * 0.5;
  local_a8 = CONCAT44(local_bc,(undefined4)local_a8);
  FUN_02569464(&local_d0,pfVar1);
  local_cc = local_d0 + 0x20000000U >> 0x1e;
  fVar17 = *(float *)(*(long *)(param_1 + 0x68) + 0x278);
  uVar9 = (ulong)((float)local_cc * 90.0 * 11930465.0);
  fVar14 = *(float *)(*(long *)(param_1 + 0x68) + 0x280);
  local_dc = (float)(int)((int)((float)(int)fVar17 / 5.0) - (uint)(fVar17 < 0.0)) * 5.0 + 2.5;
  local_d4 = (float)(int)((int)((float)(int)fVar14 / 5.0) - (uint)(fVar14 < 0.0)) * 5.0 + 2.5;
  local_d8 = (float)FUN_016e026c(0,&local_dc,0,0);
  FUN_0245be94(&local_dc,1);
  uVar5 = FUN_0245be94(&local_dc,0);
  uVar13 = (uint)uVar9;
  pfVar1 = (float *)(PTR_DAT_04bb2d00 + (uVar9 >> 0x18 & 0xff) * 0x10);
  fVar17 = (float)(uVar13 & 0xffffff) * 5.9604645e-08;
  fVar14 = (*pfVar1 + fVar17 * pfVar1[1]) * 5.0 + local_dc;
  fVar17 = local_d4 + (pfVar1[2] + fVar17 * pfVar1[3]) * 5.0;
  local_e8 = (float)(int)((int)((float)(int)fVar14 / 5.0) - (uint)(fVar14 < 0.0)) * 5.0 + 2.5;
  local_e0 = (float)(int)((int)((float)(int)fVar17 / 5.0) - (uint)(fVar17 < 0.0)) * 5.0 + 2.5;
  uStack_e4 = FUN_016e026c(0,&local_e8,0,0);
  if (((DAT_054ce520 & 1) == 0) && (iVar6 = __cxa_guard_acquire(&DAT_054ce520), iVar6 != 0)) {
    DAT_054ce500 = 0.0;
    DAT_054ce504 = 0x40200000;
    DAT_054ce4f8 = 0;
    DAT_054ce50c = 0xc020000000000000;
    DAT_054ce514 = 0;
    __cxa_guard_release(&DAT_054ce520);
  }
  if (((DAT_054ce550 & 1) == 0) && (iVar6 = __cxa_guard_acquire(&DAT_054ce550), iVar6 != 0)) {
    DAT_054ce538 = 0.0;
    DAT_054ce53c = 0x40200000;
    DAT_054ce544 = 0xc020000000000000;
    DAT_054ce528 = 0;
    DAT_054ce530 = 0;
    __cxa_guard_release(&DAT_054ce550);
  }
  fVar16 = local_d4;
  fVar14 = local_d8;
  fVar17 = local_dc;
  if (*(int *)(param_1 + 0x159c) == 3) {
    bVar10 = *(byte *)(param_1 + 0x18f8) & 0xcf | 0x20;
  }
  else if (*(int *)(param_1 + 0x159c) == 1) {
    bVar10 = *(byte *)(param_1 + 0x18f8) & 0xdf | 0x10;
  }
  else {
    bVar10 = *(byte *)(param_1 + 0x18f8) & 0xcf;
  }
  *(byte *)(param_1 + 0x18f8) = bVar10;
  if (local_cc == 0) {
    if ((uVar5 >> 2 & 1) == 0) {
      return;
    }
    fVar16 = 7.5;
LAB_0245fd7c:
    fVar16 = local_d4 + fVar16;
    local_c0 = fVar16 + DAT_054ce500;
    local_90 = CONCAT44(local_d8 + DAT_054ce4f8._4_4_,local_dc + (float)DAT_054ce4f8);
    local_c8 = CONCAT44(local_d8 + DAT_054ce4f8._4_4_,local_dc + (float)DAT_054ce4f8);
    local_88 = CONCAT44(local_88._4_4_,local_c0);
    iVar6 = FUN_016ed290(&local_90,0,0,0);
    if ((iVar6 == 0) && (uVar9 = FUN_016e9c68(&local_c8), (uVar9 & 1) != 0)) goto LAB_0245ff68;
    fVar15 = fVar17 + (float)DAT_054ce504;
    local_c0 = fVar16 + (float)DAT_054ce50c;
    local_90 = CONCAT44(fVar14 + DAT_054ce504._4_4_,fVar15);
    local_88 = CONCAT44(local_88._4_4_,local_c0);
    local_c8 = CONCAT44(fVar14 + DAT_054ce504._4_4_,fVar15);
    iVar6 = FUN_016ed290(&local_90,0,0,0);
    if ((iVar6 == 0) && (uVar9 = FUN_016e9c68(&local_c8), (uVar9 & 1) != 0)) goto LAB_0245ff68;
    fVar17 = fVar17 + DAT_054ce50c._4_4_;
    local_c0 = fVar16 + DAT_054ce514._4_4_;
    fVar16 = (float)DAT_054ce514;
  }
  else {
    if (local_cc == 1) {
      if ((uVar5 >> 3 & 1) == 0) {
        return;
      }
      fVar17 = 7.5;
    }
    else {
      if (local_cc == 2) {
        if ((uVar5 & 1) == 0) {
          return;
        }
        fVar16 = -7.5;
        goto LAB_0245fd7c;
      }
      if ((uVar5 >> 1 & 1) == 0) {
        return;
      }
      fVar17 = -7.5;
    }
    fVar17 = local_dc + fVar17;
    local_c0 = local_d4 + (float)DAT_054ce530;
    local_88 = CONCAT44(local_88._4_4_,local_c0);
    local_90 = CONCAT44(local_d8 + DAT_054ce528._4_4_,fVar17 + (float)DAT_054ce528);
    local_c8 = CONCAT44(local_d8 + DAT_054ce528._4_4_,fVar17 + (float)DAT_054ce528);
    iVar6 = FUN_016ed290(&local_90,0,0,0);
    if ((iVar6 == 0) && (uVar9 = FUN_016e9c68(&local_c8), (uVar9 & 1) != 0)) goto LAB_0245ff68;
    local_c0 = fVar16 + (float)DAT_054ce53c;
    local_90 = CONCAT44(fVar14 + DAT_054ce538,fVar17 + DAT_054ce530._4_4_);
    local_88 = CONCAT44(local_88._4_4_,local_c0);
    local_c8 = CONCAT44(fVar14 + DAT_054ce538,fVar17 + DAT_054ce530._4_4_);
    iVar6 = FUN_016ed290(&local_90,0,0,0);
    if ((iVar6 == 0) && (uVar9 = FUN_016e9c68(&local_c8), (uVar9 & 1) != 0)) goto LAB_0245ff68;
    fVar17 = fVar17 + DAT_054ce53c._4_4_;
    local_c0 = fVar16 + DAT_054ce544._4_4_;
    fVar16 = (float)DAT_054ce544;
  }
  local_90 = CONCAT44(fVar14 + fVar16,fVar17);
  local_88 = CONCAT44(local_88._4_4_,local_c0);
  local_c8 = CONCAT44(fVar14 + fVar16,fVar17);
  iVar6 = FUN_016ed290(&local_90,0,0,0);
  if ((iVar6 != 0) || (uVar9 = FUN_016e9c68(&local_c8), (uVar9 & 1) == 0)) {
    local_b0 = CONCAT44(uStack_e4,local_e8);
    local_a8 = CONCAT44(local_a8._4_4_,local_e0);
    iVar6 = FUN_016ed290(&local_b0,0,0,0);
    if (iVar6 != 0) {
      return;
    }
    lVar11 = *(long *)(param_1 + 0x68);
    local_f0 = local_e0;
    local_100 = *(undefined4 *)(lVar11 + 0x280);
    local_f8 = CONCAT44(uStack_e4,local_e8);
    local_108 = *(undefined8 *)(lVar11 + 0x278);
    local_fc = *(uint *)(lVar11 + 0x2b4);
    if ((*(long *)PTR_DAT_04bb4718 == 0) || (7 < (ulong)*pbVar2)) {
      iVar6 = 0x40000000;
    }
    else {
      iVar6 = 0x40000000;
      if (*(int *)(*(long *)PTR_DAT_04bb4718 + (ulong)*pbVar2 * 4 + 0xea0) == 1) {
        iVar6 = -0x40000000;
      }
    }
    local_ec = iVar6 + uVar13;
    FUN_0245e824(param_1,&local_108);
    uVar5 = local_fc;
    local_10c = 0.0;
    fVar17 = (float)NEON_ucvtf(local_ec);
    FUN_006f05f8((float)local_fc * 8.381903e-08,fVar17 * 8.381903e-08,&local_10c);
    if (100.0 < local_10c) {
      local_ec = uVar5;
    }
    FUN_024607a0(param_1,&local_108);
    return;
  }
LAB_0245ff68:
  lVar11 = *(long *)(param_1 + 0x68);
  local_f8 = local_90;
  local_100 = *(undefined4 *)(lVar11 + 0x280);
  local_108 = *(undefined8 *)(lVar11 + 0x278);
  local_f0 = (float)(undefined4)local_88;
  local_fc = *(undefined4 *)(lVar11 + 0x2b4);
  local_ec = uVar13;
  FUN_02460144(param_1,&local_108);
  return;
}

