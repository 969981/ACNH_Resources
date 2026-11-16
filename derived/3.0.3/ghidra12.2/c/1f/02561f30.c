
/* WARNING: Removing unreachable block (ram,0x02563534) */
/* WARNING: Removing unreachable block (ram,0x02563420) */
/* WARNING: Removing unreachable block (ram,0x02563214) */
/* WARNING: Removing unreachable block (ram,0x02563128) */
/* WARNING: Removing unreachable block (ram,0x02562fd4) */
/* WARNING: Removing unreachable block (ram,0x02562ce4) */
/* WARNING: Removing unreachable block (ram,0x02562c5c) */
/* WARNING: Removing unreachable block (ram,0x02562af0) */
/* WARNING: Removing unreachable block (ram,0x02562b4c) */
/* WARNING: Removing unreachable block (ram,0x02562a30) */
/* WARNING: Removing unreachable block (ram,0x02562794) */
/* WARNING: Removing unreachable block (ram,0x02562888) */
/* WARNING: Removing unreachable block (ram,0x02562bd4) */
/* WARNING: Removing unreachable block (ram,0x02562d9c) */
/* WARNING: Removing unreachable block (ram,0x02562dd8) */
/* WARNING: Removing unreachable block (ram,0x02563094) */
/* WARNING: Removing unreachable block (ram,0x0256318c) */
/* WARNING: Removing unreachable block (ram,0x025632a4) */
/* WARNING: Removing unreachable block (ram,0x02563390) */
/* WARNING: Removing unreachable block (ram,0x02563330) */
/* WARNING: Removing unreachable block (ram,0x025634ac) */
/* WARNING: Removing unreachable block (ram,0x025636b0) */
/* WARNING: Removing unreachable block (ram,0x02563ec4) */

undefined8 FUN_02561f30(undefined8 *param_1,char *param_2)

{
  byte *pbVar1;
  void *__dest;
  uint *puVar2;
  char cVar3;
  uint uVar4;
  undefined *puVar5;
  bool bVar6;
  bool bVar7;
  undefined1 uVar8;
  byte bVar9;
  int iVar10;
  long lVar11;
  float *pfVar12;
  uint uVar13;
  ulong uVar14;
  long lVar15;
  char cVar16;
  float *pfVar17;
  int iVar18;
  uint *puVar19;
  undefined8 *puVar20;
  uint *puVar21;
  float fVar22;
  undefined4 uVar23;
  undefined4 uVar24;
  float fVar25;
  float fVar26;
  float fVar27;
  float fVar28;
  float fVar29;
  float fVar30;
  int local_c4 [3];
  undefined2 local_b8;
  undefined1 local_b6;
  undefined4 local_b5;
  undefined1 local_b1;
  undefined4 local_b0;
  undefined8 local_ac;
  long local_a0;
  uint local_98;
  undefined1 local_94;
  undefined4 local_90;
  byte local_8c;
  char local_8b;
  undefined4 local_88;
  char local_84;
  float local_74;
  
  pbVar1 = (byte *)((long)param_1 + 0x6e4);
  uVar8 = FUN_02915598(pbVar1);
  puVar5 = PTR_DAT_04bb4718;
  if (*(long *)PTR_DAT_04bb4718 == 0) {
    if ((DAT_054f0960 & 1) == 0) {
      iVar10 = __cxa_guard_acquire(&DAT_054f0960);
      puVar20 = &DAT_054f0958;
      if (iVar10 != 0) {
        DAT_054f0958 = 0;
        __cxa_guard_release(&DAT_054f0960);
      }
    }
    else {
      puVar20 = &DAT_054f0958;
    }
  }
  else {
    puVar20 = (undefined8 *)(*(long *)PTR_DAT_04bb4718 + 0x204);
    if ((ulong)*pbVar1 < 8) {
      puVar20 = puVar20 + *pbVar1;
    }
  }
  local_b0 = 0x20;
  *(uint *)((long)puVar20 + 4) = *(uint *)((long)puVar20 + 4) & 0xfffffffe;
  uVar24 = *(undefined4 *)(param_2 + 4);
  pfVar17 = (float *)((long)param_1 + 0x2c);
  __dest = (void *)((long)param_1 + 0x43c);
  *(float *)(param_1 + 0xda) = *pfVar17;
  cVar3 = *(char *)(param_1 + 0xe0);
  param_1[0xdf] = 0;
  puVar21 = (uint *)(param_1 + 1);
  *(undefined1 *)(param_1 + 0xe0) = 0;
  *(undefined4 *)(param_1 + 0xde) = uVar24;
  *param_1 = *(undefined8 *)puVar21;
  *(undefined4 *)((long)param_1 + 0x6d4) = *(undefined4 *)(param_1 + 6);
  *(undefined4 *)(param_1 + 0xdb) = *(undefined4 *)((long)param_1 + 0x6dc);
  *(undefined4 *)((long)param_1 + 0x34) = *(undefined4 *)(param_1 + 7);
  memcpy(__dest,param_1 + 0xa3,0xdc);
  param_1[8] = 0;
  *(undefined8 *)((long)param_1 + 0x6dc) = 0x400000004;
  iVar10 = *(int *)(param_1 + 0xdd);
  pfVar17[0] = 0.0;
  pfVar17[1] = 0.0;
  *(undefined1 *)(param_1 + 0x87) = 0;
  puVar21[0] = 0;
  puVar21[1] = 0;
  *(undefined4 *)(param_1 + 7) = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  if (iVar10 != 0) {
    lVar11 = FUN_0251e98c(1);
    pfVar12 = (float *)(**(code **)(*(long *)(lVar11 + 0x150) + 0xf0))(lVar11 + 0x150);
    fVar29 = *pfVar12;
    pfVar12 = (float *)(**(code **)(*(long *)(lVar11 + 0x180) + 0xf0))(lVar11 + 0x180);
    fVar30 = *pfVar12;
    pfVar12 = (float *)(**(code **)(*(long *)(lVar11 + 0x1b0) + 0xf0))(lVar11 + 0x1b0);
    fVar25 = *pfVar12;
    if (fVar30 <= fVar25) {
      fVar30 = fVar25 * 1.5;
    }
    fVar22 = *(float *)((long)param_1 + 0x3c);
    if (fVar22 != 0.0) {
      fVar26 = 0.0;
      fVar27 = 0.0 - fVar22;
      fVar28 = -fVar27;
      if (0.0 <= fVar27) {
        fVar28 = fVar27;
      }
      if (fVar25 < fVar28) {
        fVar29 = fVar29 * fVar27;
        fVar26 = fVar25;
        if (fVar27 <= 0.0) {
          fVar26 = -fVar30;
          fVar30 = -fVar25;
        }
        if (fVar29 <= fVar30) {
          fVar30 = fVar29;
        }
        if (fVar26 <= fVar29) {
          fVar26 = fVar30;
        }
        fVar26 = fVar22 + fVar26;
      }
      *(float *)((long)param_1 + 0x3c) = fVar26;
    }
    *param_1 = 0;
    *(undefined4 *)(param_1 + 0xdb) = 4;
    *(undefined4 *)((long)param_1 + 0x34) = 0;
    *(undefined4 *)((long)param_1 + 0x6f4) = 0;
    *(undefined8 *)((long)param_1 + 0x704) = 0;
    param_1[0xff] = 0;
    memset(__dest,0,0x29c);
    *(int *)(param_1 + 0xdd) = *(int *)(param_1 + 0xdd) + -1;
  }
  if (*(int *)((long)param_1 + 0x6ec) == 0) {
    iVar10 = 0;
    local_98 = *(uint *)(param_2 + 4);
  }
  else {
    lVar11 = *(long *)puVar5;
    if (lVar11 == 0) {
      if ((DAT_054f0960 & 1) == 0) {
        iVar10 = __cxa_guard_acquire(&DAT_054f0960);
        puVar20 = &DAT_054f0958;
        if (iVar10 != 0) {
          DAT_054f0958 = 0;
          __cxa_guard_release(&DAT_054f0960);
        }
      }
      else {
        puVar20 = &DAT_054f0958;
      }
    }
    else {
      puVar20 = (undefined8 *)(lVar11 + 0x204);
      if ((ulong)*pbVar1 < 8) {
        puVar20 = puVar20 + *pbVar1;
      }
    }
    local_b0 = 0x20;
    *(uint *)((long)puVar20 + 4) = *(uint *)((long)puVar20 + 4) | 1;
    lVar11 = FUN_0251e98c(1);
    pfVar12 = (float *)(**(code **)(*(long *)(lVar11 + 0x150) + 0xf0))(lVar11 + 0x150);
    fVar29 = *pfVar12;
    pfVar12 = (float *)(**(code **)(*(long *)(lVar11 + 0x180) + 0xf0))(lVar11 + 0x180);
    fVar30 = *pfVar12;
    pfVar12 = (float *)(**(code **)(*(long *)(lVar11 + 0x1b0) + 0xf0))(lVar11 + 0x1b0);
    fVar25 = *pfVar12;
    if (fVar30 <= fVar25) {
      fVar30 = fVar25 * 1.5;
    }
    fVar22 = *(float *)((long)param_1 + 0x3c);
    if (fVar22 != 0.0) {
      fVar26 = 0.0;
      fVar27 = 0.0 - fVar22;
      fVar28 = -fVar27;
      if (0.0 <= fVar27) {
        fVar28 = fVar27;
      }
      if (fVar25 < fVar28) {
        fVar29 = fVar29 * fVar27;
        fVar26 = fVar25;
        if (fVar27 <= 0.0) {
          fVar26 = -fVar30;
          fVar30 = -fVar25;
        }
        if (fVar29 <= fVar30) {
          fVar30 = fVar29;
        }
        if (fVar26 <= fVar29) {
          fVar26 = fVar30;
        }
        fVar26 = fVar22 + fVar26;
      }
      *(float *)((long)param_1 + 0x3c) = fVar26;
    }
    *param_1 = 0;
    *(undefined4 *)(param_1 + 0xdb) = 4;
    *(undefined4 *)((long)param_1 + 0x34) = 0;
    *(undefined4 *)((long)param_1 + 0x6f4) = 0;
    *(undefined8 *)((long)param_1 + 0x704) = 0;
    param_1[0xff] = 0;
    memset(__dest,0,0x29c);
    iVar10 = *(int *)((long)param_1 + 0x6ec) + -1;
    *(int *)((long)param_1 + 0x6ec) = iVar10;
    local_98 = *(uint *)(param_2 + 4);
  }
  if ((int)local_98 < 0) {
LAB_0256237c:
    lVar11 = FUN_0251e98c(1);
    pfVar17 = (float *)(**(code **)(*(long *)(lVar11 + 0x150) + 0xf0))(lVar11 + 0x150);
    fVar29 = *pfVar17;
    pfVar17 = (float *)(**(code **)(*(long *)(lVar11 + 0x180) + 0xf0))(lVar11 + 0x180);
    fVar30 = *pfVar17;
    pfVar17 = (float *)(**(code **)(*(long *)(lVar11 + 0x1b0) + 0xf0))(lVar11 + 0x1b0);
    fVar25 = *pfVar17;
    if (fVar30 <= fVar25) {
      fVar30 = fVar25 * 1.5;
    }
    fVar22 = *(float *)((long)param_1 + 0x3c);
    if (fVar22 != 0.0) {
      fVar26 = 0.0;
      fVar27 = 0.0 - fVar22;
      fVar28 = -fVar27;
      if (0.0 <= fVar27) {
        fVar28 = fVar27;
      }
      if (fVar25 < fVar28) {
        fVar29 = fVar29 * fVar27;
        fVar26 = fVar25;
        if (fVar27 <= 0.0) {
          fVar26 = -fVar30;
          fVar30 = -fVar25;
        }
        if (fVar29 <= fVar30) {
          fVar30 = fVar29;
        }
        if (fVar26 <= fVar29) {
          fVar26 = fVar30;
        }
        fVar26 = fVar22 + fVar26;
      }
      *(float *)((long)param_1 + 0x3c) = fVar26;
    }
    *param_1 = 0;
    *(undefined4 *)(param_1 + 0xdb) = 4;
    *(undefined4 *)((long)param_1 + 0x34) = 0;
    *(undefined4 *)((long)param_1 + 0x6f4) = 0;
    *(undefined8 *)((long)param_1 + 0x704) = 0;
    param_1[0xff] = 0;
    memset(__dest,0,0x29c);
    return 0;
  }
  uVar14 = (ulong)local_98;
  lVar15 = *(long *)PTR_DAT_04bb3960;
  lVar11 = lVar15 + 0xf5b20;
  if (3 < local_98) {
    uVar14 = 0;
  }
  uVar13 = *(uint *)(lVar11 + uVar14 * 4 + 0x20);
  local_a0 = *(long *)(lVar11 + uVar14 * 8);
  local_94 = (uVar13 & 0xfffffffd) == 0 || uVar13 == 1;
  if (local_a0 == 0) goto LAB_0256237c;
  *(undefined4 *)(param_1 + 0xdf) = *(undefined4 *)(local_a0 + 0x98);
  *(undefined4 *)((long)param_1 + 0x6fc) = *(undefined4 *)(local_a0 + 0x9c);
  if ((*param_2 == '\0') || ((*(uint *)(lVar15 + 0xf5b68) & 0xfffffffe) == 2)) {
    lVar11 = FUN_0251e98c(1);
    pfVar17 = (float *)(**(code **)(*(long *)(lVar11 + 0x150) + 0xf0))(lVar11 + 0x150);
    fVar29 = *pfVar17;
    pfVar17 = (float *)(**(code **)(*(long *)(lVar11 + 0x180) + 0xf0))(lVar11 + 0x180);
    fVar30 = *pfVar17;
    pfVar17 = (float *)(**(code **)(*(long *)(lVar11 + 0x1b0) + 0xf0))(lVar11 + 0x1b0);
    fVar25 = *pfVar17;
    if (fVar30 <= fVar25) {
      fVar30 = fVar25 * 1.5;
    }
    fVar22 = *(float *)((long)param_1 + 0x3c);
    if (fVar22 != 0.0) {
      fVar26 = 0.0;
      fVar27 = 0.0 - fVar22;
      fVar28 = -fVar27;
      if (0.0 <= fVar27) {
        fVar28 = fVar27;
      }
      if (fVar25 < fVar28) {
        fVar29 = fVar29 * fVar27;
        fVar26 = fVar25;
        if (fVar27 <= 0.0) {
          fVar26 = -fVar30;
          fVar30 = -fVar25;
        }
        if (fVar29 <= fVar30) {
          fVar30 = fVar29;
        }
        if (fVar26 <= fVar29) {
          fVar26 = fVar30;
        }
        fVar26 = fVar22 + fVar26;
      }
      *(float *)((long)param_1 + 0x3c) = fVar26;
    }
    *param_1 = 0;
    *(undefined4 *)(param_1 + 0xdb) = 4;
    *(undefined4 *)((long)param_1 + 0x34) = 0;
    *(undefined4 *)((long)param_1 + 0x6f4) = 0;
    *(undefined8 *)((long)param_1 + 0x704) = 0;
    param_1[0xff] = 0;
    memset(__dest,0,0x29c);
    return 1;
  }
  *(undefined1 *)(param_1 + 0x87) = 1;
  if (*(int *)(param_1 + 0xdd) != 0 || iVar10 != 0) {
    return 1;
  }
  if ((*(long *)PTR_DAT_04bb7ff8 == 0) || (*(int *)(*(long *)PTR_DAT_04bb7ff8 + 0x588) == 0)) {
    cVar16 = '\0';
  }
  else {
    cVar16 = '\x01';
  }
  local_8c = param_2[0x10];
  local_90 = *(undefined4 *)(param_2 + 0xc);
  local_ac = 0;
  if (7 < local_8c) {
    local_8c = 0xff;
  }
  local_b0._0_3_ = CONCAT12(param_2[9],CONCAT11(param_2[8],cVar16));
  local_b0 = CONCAT13(uVar8,(undefined3)local_b0) & 0x1ffffff;
  local_8b = param_2[0x11];
  local_88 = *(undefined4 *)(param_2 + 0x14);
  local_84 = param_2[0x18];
  if ((*(uint *)(local_a0 + 8) & 1) == 0) {
    uVar13 = *(uint *)((long)param_1 + 0xc) & 0xfffffff7;
  }
  else {
    uVar13 = *(uint *)((long)param_1 + 0xc) | 8;
  }
  *(uint *)((long)param_1 + 0xc) = uVar13;
  puVar2 = (uint *)(param_1 + 2);
  if ((*(uint *)(local_a0 + 0x8c) & 1) == 0) {
    *(uint *)((long)param_1 + 0x14) = *(uint *)((long)param_1 + 0x14) & 0xfffffff7;
  }
  else {
    *(uint *)((long)param_1 + 0x14) = *(uint *)((long)param_1 + 0x14) | 8;
  }
  if ((*(uint *)(local_a0 + 8) >> 1 & 1) == 0) {
    uVar13 = *(uint *)((long)param_1 + 0xc) & 0xffffffef;
  }
  else {
    uVar13 = *(uint *)((long)param_1 + 0xc) | 0x10;
  }
  *(uint *)((long)param_1 + 0xc) = uVar13;
  if ((*(uint *)(local_a0 + 0x8c) >> 1 & 1) == 0) {
    uVar13 = *(uint *)((long)param_1 + 0x14) & 0xffffffef;
  }
  else {
    uVar13 = *(uint *)((long)param_1 + 0x14) | 0x10;
  }
  *(uint *)((long)param_1 + 0x14) = uVar13;
  if ((cVar16 == '\0') && ((*(uint *)(local_a0 + 8) >> 3 & 1) != 0)) {
    uVar13 = *(uint *)((long)param_1 + 0xc) | 0x20;
  }
  else {
    uVar13 = *(uint *)((long)param_1 + 0xc) & 0xffffffdf;
  }
  *(uint *)((long)param_1 + 0xc) = uVar13;
  bVar7 = local_a0 == 0;
  if (((local_a0 == 0) || (cVar16 != '\0')) || ((*(uint *)(local_a0 + 0x8c) >> 3 & 1) == 0)) {
    *(uint *)((long)param_1 + 0x14) = *(uint *)((long)param_1 + 0x14) & 0xffffffdf;
    if (local_a0 != 0) {
      bVar7 = false;
      goto LAB_02562860;
    }
    bVar7 = true;
LAB_025628ac:
    *(uint *)((long)param_1 + 0xc) = *(uint *)((long)param_1 + 0xc) & 0xffffffbf;
    if (!bVar7) {
      bVar7 = false;
      goto LAB_0256293c;
    }
    bVar7 = true;
LAB_02562960:
    *(uint *)((long)param_1 + 0x14) = *(uint *)((long)param_1 + 0x14) & 0xffffffbf;
    if (!bVar7) {
      bVar7 = false;
      goto LAB_025629d0;
    }
    bVar7 = true;
LAB_025629f4:
    *(uint *)((long)param_1 + 0xc) = *(uint *)((long)param_1 + 0xc) & 0xffffff7f;
    if (!bVar7) goto LAB_02562a58;
LAB_02562a7c:
    uVar13 = *(uint *)((long)param_1 + 0x14) & 0xffffff7f;
  }
  else {
    *(uint *)((long)param_1 + 0x14) = *(uint *)((long)param_1 + 0x14) | 0x20;
LAB_02562860:
    if ((*(uint *)(local_a0 + 8) >> 4 & 1) == 0) goto LAB_025628ac;
    *(uint *)((long)param_1 + 0xc) = *(uint *)((long)param_1 + 0xc) | 0x40;
LAB_0256293c:
    if ((*(uint *)(local_a0 + 0x8c) >> 4 & 1) == 0) goto LAB_02562960;
    *(uint *)((long)param_1 + 0x14) = *(uint *)((long)param_1 + 0x14) | 0x40;
LAB_025629d0:
    if ((*(uint *)(local_a0 + 8) >> 0xd & 1) == 0) goto LAB_025629f4;
    *(uint *)((long)param_1 + 0xc) = *(uint *)((long)param_1 + 0xc) | 0x80;
LAB_02562a58:
    if ((*(uint *)(local_a0 + 0x8c) >> 0xd & 1) == 0) goto LAB_02562a7c;
    uVar13 = *(uint *)((long)param_1 + 0x14) | 0x80;
  }
  *(uint *)((long)param_1 + 0x14) = uVar13;
  if ((local_a0 == 0) || ((*(uint *)(local_a0 + 8) >> 0xe & 1) == 0)) {
    *(uint *)((long)param_1 + 0xc) = *(uint *)((long)param_1 + 0xc) & 0xfffffeff;
    if (local_a0 != 0) goto LAB_02562b74;
LAB_02562b98:
    *(uint *)((long)param_1 + 0x14) = *(uint *)((long)param_1 + 0x14) & 0xfffffeff;
    if (local_a0 != 0) goto LAB_02562bfc;
LAB_02562c20:
    *(uint *)((long)param_1 + 0xc) = *(uint *)((long)param_1 + 0xc) & 0xfffffdff;
    if (local_a0 != 0) goto LAB_02562c84;
LAB_02562ca8:
    *(uint *)((long)param_1 + 0x14) = *(uint *)((long)param_1 + 0x14) & 0xfffffdff;
    if (local_a0 != 0) goto LAB_02562d0c;
LAB_02562d30:
    uVar13 = *(uint *)((long)param_1 + 0xc) & 0xfffffbff;
  }
  else {
    *(uint *)((long)param_1 + 0xc) = *(uint *)((long)param_1 + 0xc) | 0x100;
LAB_02562b74:
    if ((*(uint *)(local_a0 + 0x8c) >> 0xe & 1) == 0) goto LAB_02562b98;
    *(uint *)((long)param_1 + 0x14) = *(uint *)((long)param_1 + 0x14) | 0x100;
LAB_02562bfc:
    if ((*(uint *)(local_a0 + 8) >> 2 & 1) == 0) goto LAB_02562c20;
    *(uint *)((long)param_1 + 0xc) = *(uint *)((long)param_1 + 0xc) | 0x200;
LAB_02562c84:
    if ((*(uint *)(local_a0 + 0x8c) >> 2 & 1) == 0) goto LAB_02562ca8;
    *(uint *)((long)param_1 + 0x14) = *(uint *)((long)param_1 + 0x14) | 0x200;
LAB_02562d0c:
    if ((*(uint *)(local_a0 + 8) >> 5 & 1) == 0) goto LAB_02562d30;
    uVar13 = *(uint *)((long)param_1 + 0xc) | 0x400;
  }
  *(uint *)((long)param_1 + 0xc) = uVar13;
  if ((local_a0 == 0) || ((*(uint *)(local_a0 + 0x8c) >> 5 & 1) == 0)) {
    uVar13 = *(uint *)((long)param_1 + 0x14) & 0xfffffbff;
  }
  else {
    uVar13 = *(uint *)((long)param_1 + 0x14) | 0x400;
  }
  *(uint *)((long)param_1 + 0x14) = uVar13;
  bVar7 = cVar16 != '\0';
  if ((local_a0 == 0) || (cVar16 != '\0')) {
    bVar6 = true;
LAB_02562e6c:
    *(uint *)((long)param_1 + 0xc) = *(uint *)((long)param_1 + 0xc) & 0xfffff7ff;
    if (!bVar6) goto LAB_02562ed4;
    bVar6 = true;
LAB_02562efc:
    *(uint *)((long)param_1 + 0x14) = *(uint *)((long)param_1 + 0x14) & 0xfffff7ff;
    if (!bVar6) goto LAB_02562f68;
    bVar6 = true;
LAB_02562f94:
    *(uint *)((long)param_1 + 0xc) = *(uint *)((long)param_1 + 0xc) & 0xffffbfff;
    if (!bVar6) goto LAB_02562ffc;
LAB_02563024:
    uVar13 = *(uint *)((long)param_1 + 0x14) & 0xffffbfff;
  }
  else {
    if ((*(uint *)(local_a0 + 8) >> 0x10 & 1) == 0) {
      bVar6 = false;
      bVar7 = false;
      goto LAB_02562e6c;
    }
    *(uint *)((long)param_1 + 0xc) = *(uint *)((long)param_1 + 0xc) | 0x800;
    bVar7 = false;
LAB_02562ed4:
    if ((*(uint *)(local_a0 + 0x8c) >> 0x10 & 1) == 0) {
      bVar6 = false;
      goto LAB_02562efc;
    }
    *(uint *)((long)param_1 + 0x14) = *(uint *)((long)param_1 + 0x14) | 0x800;
LAB_02562f68:
    if ((*(uint *)(local_a0 + 8) >> 0x11 & 1) == 0) {
      bVar6 = false;
      goto LAB_02562f94;
    }
    *(uint *)((long)param_1 + 0xc) = *(uint *)((long)param_1 + 0xc) | 0x4000;
LAB_02562ffc:
    if ((*(uint *)(local_a0 + 0x8c) >> 0x11 & 1) == 0) goto LAB_02563024;
    uVar13 = *(uint *)((long)param_1 + 0x14) | 0x4000;
  }
  *(uint *)((long)param_1 + 0x14) = uVar13;
  if (((local_a0 == 0) || (bVar7)) || ((*(uint *)(local_a0 + 8) >> 0x12 & 1) == 0)) {
    uVar13 = *(uint *)((long)param_1 + 0xc) & 0xffffefff;
  }
  else {
    uVar13 = *(uint *)((long)param_1 + 0xc) | 0x1000;
  }
  *(uint *)((long)param_1 + 0xc) = uVar13;
  bVar7 = local_a0 != 0;
  bVar6 = (char)local_b0 == '\0';
  if ((!(bVar7 && bVar6)) || ((*(uint *)(local_a0 + 0x8c) >> 0x12 & 1) == 0)) {
    *(uint *)((long)param_1 + 0x14) = *(uint *)((long)param_1 + 0x14) & 0xffffefff;
    if (bVar7 && bVar6) goto LAB_025631b4;
LAB_025631d8:
    *(uint *)((long)param_1 + 0xc) = *(uint *)((long)param_1 + 0xc) & 0xffffdfff;
    if (bVar7 && bVar6) goto LAB_0256323c;
LAB_02563260:
    *(uint *)((long)param_1 + 0x14) = *(uint *)((long)param_1 + 0x14) & 0xffffdfff;
    if (local_a0 != 0) goto LAB_02563280;
LAB_025632e4:
    uVar13 = *(uint *)((long)param_1 + 0xc) & 0xffff7fff;
  }
  else {
    *(uint *)((long)param_1 + 0x14) = *(uint *)((long)param_1 + 0x14) | 0x1000;
LAB_025631b4:
    if ((*(uint *)(local_a0 + 8) >> 0x13 & 1) == 0) goto LAB_025631d8;
    *(uint *)((long)param_1 + 0xc) = *(uint *)((long)param_1 + 0xc) | 0x2000;
LAB_0256323c:
    if ((*(uint *)(local_a0 + 0x8c) >> 0x13 & 1) == 0) goto LAB_02563260;
    *(uint *)((long)param_1 + 0x14) = *(uint *)((long)param_1 + 0x14) | 0x2000;
LAB_02563280:
    if ((*(uint *)(local_a0 + 8) >> 10 & 1) == 0) goto LAB_025632e4;
    uVar13 = *(uint *)((long)param_1 + 0xc) | 0x8000;
  }
  *(uint *)((long)param_1 + 0xc) = uVar13;
  if ((local_a0 == 0) || ((*(uint *)(local_a0 + 0x8c) >> 10 & 1) == 0)) {
    *(uint *)((long)param_1 + 0x14) = *(uint *)((long)param_1 + 0x14) & 0xffff7fff;
    if (local_a0 != 0) goto LAB_025633b8;
LAB_025633e0:
    *(uint *)((long)param_1 + 0xc) = *(uint *)((long)param_1 + 0xc) & 0xfffeffff;
    if (local_a0 != 0) goto LAB_02563448;
LAB_02563470:
    *(uint *)((long)param_1 + 0x14) = *(uint *)((long)param_1 + 0x14) & 0xfffeffff;
    if (local_a0 != 0) goto LAB_025634d4;
LAB_025634f8:
    *(uint *)((long)param_1 + 0xc) = *(uint *)((long)param_1 + 0xc) & 0xfffdffff;
    if (local_a0 != 0) goto LAB_0256355c;
LAB_02563580:
    uVar13 = *(uint *)((long)param_1 + 0x14) & 0xfffdffff;
  }
  else {
    *(uint *)((long)param_1 + 0x14) = *(uint *)((long)param_1 + 0x14) | 0x8000;
LAB_025633b8:
    if ((*(uint *)(local_a0 + 8) >> 9 & 1) == 0) goto LAB_025633e0;
    *(uint *)((long)param_1 + 0xc) = *(uint *)((long)param_1 + 0xc) | 0x10000;
LAB_02563448:
    if ((*(uint *)(local_a0 + 0x8c) >> 9 & 1) == 0) goto LAB_02563470;
    *(uint *)((long)param_1 + 0x14) = *(uint *)((long)param_1 + 0x14) | 0x10000;
LAB_025634d4:
    if ((*(uint *)(local_a0 + 8) >> 7 & 1) == 0) goto LAB_025634f8;
    *(uint *)((long)param_1 + 0xc) = *(uint *)((long)param_1 + 0xc) | 0x20000;
LAB_0256355c:
    if ((*(uint *)(local_a0 + 0x8c) >> 7 & 1) == 0) goto LAB_02563580;
    uVar13 = *(uint *)((long)param_1 + 0x14) | 0x20000;
  }
  *(uint *)((long)param_1 + 0x14) = uVar13;
  local_c4[0] = 0x31;
  lVar11 = FUN_0251e98c();
  (**(code **)(*(long *)(lVar11 + 0x150) + 0xf0))(lVar11 + 0x150);
  (**(code **)(*(long *)(lVar11 + 0x180) + 0xf0))(lVar11 + 0x180);
  (**(code **)(*(long *)(lVar11 + 0x1b0) + 0xf0))(lVar11 + 0x1b0);
  if (local_a0 == 0) {
    fVar30 = 0.0;
    fVar25 = 0.0;
  }
  else {
    fVar25 = *(float *)(local_a0 + 0x98);
    fVar30 = *(float *)(local_a0 + 0x9c);
  }
  lVar11 = FUN_0251e98c(1);
  (**(code **)(*(long *)(lVar11 + 0x2260) + 0xf0))(lVar11 + 0x2260);
  lVar11 = *(long *)puVar5;
  if (lVar11 == 0) {
    if ((DAT_054f0960 & 1) == 0) {
      iVar10 = __cxa_guard_acquire(&DAT_054f0960);
      puVar19 = (uint *)&DAT_054f0958;
      if (iVar10 != 0) {
        DAT_054f0958 = 0;
        __cxa_guard_release(&DAT_054f0960);
      }
    }
    else {
      puVar19 = (uint *)&DAT_054f0958;
    }
  }
  else {
    puVar19 = (uint *)(lVar11 + 0x204);
    if ((ulong)local_8c < 8) {
      puVar19 = puVar19 + (ulong)local_8c * 2;
    }
  }
  fVar29 = SQRT(fVar30 * fVar30 + fVar25 * fVar25);
  local_c4[0] = 0x19;
  if ((*puVar19 >> 0x19 & 1) == 0) {
    if ((local_b0._1_1_ == '\0') || (local_b0._2_1_ != '\0')) goto LAB_025636f0;
    local_c4[0] = 0;
    if ((*(byte *)(*(long *)PTR_DAT_04bb2230 + 0x3f0) & 1) == 0) goto LAB_0256371c;
LAB_025636e4:
    uVar23 = 0;
    uVar24 = 0;
    fVar22 = 0.0;
  }
  else {
    uVar23 = 0;
    uVar24 = 0;
    fVar22 = 0.0;
    if (local_b0._1_1_ == '\0') {
LAB_025636f0:
      bVar9 = FUN_016f75d8(&local_88);
      if ((bVar9 & PTR_DAT_04bbde78[0xb] != '\0') != 0) goto LAB_025636e4;
LAB_0256371c:
      uVar23 = 0;
      uVar24 = 0;
      fVar22 = 0.0;
      if (0.025 <= fVar29) {
        *(float *)((long)param_1 + 0x2c) = fVar25;
        *(float *)(param_1 + 6) = fVar30;
        uVar24 = 0;
        uVar23 = FUN_02569a20(pfVar17,*(undefined4 *)(param_1[9] + 0x230));
        fVar22 = fVar29;
      }
    }
  }
  *(undefined4 *)((long)param_1 + 0x2c) = uVar23;
  *(undefined4 *)(param_1 + 6) = uVar24;
  fVar30 = *(float *)((long)param_1 + 0x3c);
  *(float *)(param_1 + 7) = fVar22;
  if (fVar22 <= fVar30) {
    if (fVar22 < fVar30) {
      fVar25 = fVar30 + -0.35;
      bVar7 = false;
      bVar6 = false;
      if (fVar25 <= fVar30) {
        bVar7 = false;
        bVar6 = true;
        if (!NAN(fVar25) && !NAN(fVar22)) {
          bVar7 = fVar25 == fVar22;
          bVar6 = fVar22 <= fVar25;
        }
      }
      fVar30 = fVar22;
      if (bVar6 && !bVar7) {
        fVar30 = fVar25;
      }
      goto LAB_025637a8;
    }
  }
  else {
    fVar25 = fVar30 + 0.35;
    bVar7 = false;
    bVar6 = false;
    if (fVar30 <= fVar25) {
      bVar7 = false;
      bVar6 = true;
      if (!NAN(fVar25) && !NAN(fVar22)) {
        bVar7 = fVar25 < fVar22;
        bVar6 = false;
      }
    }
    fVar30 = fVar22;
    if (bVar7 != bVar6) {
      fVar30 = fVar25;
    }
LAB_025637a8:
    *(float *)((long)param_1 + 0x3c) = fVar30;
  }
  if (0.7 < fVar30) {
    lVar11 = *(long *)(param_1[9] + 0x68);
    pfVar12 = (float *)&DAT_0417abf4;
    if (*(char *)(param_1 + 0x87) != '\0') {
      pfVar12 = pfVar17;
    }
    FUN_02569464(local_c4,pfVar12);
    uVar4 = local_c4[0] - *(int *)(lVar11 + 0x2b4);
    uVar13 = (uVar4 >> 0x1c) + 2 >> 2 & 3;
    *(uint *)((long)param_1 + 0x6dc) = uVar13;
    if ((uVar13 == 2) && (uVar13 = 3, ((uVar4 + 0xe0000000 >> 0x1c) + 2 & 0xc) == 4)) {
      uVar13 = 1;
    }
    *(uint *)(param_1 + 0xdc) = uVar13;
  }
  if (local_a0 == 0) {
    uVar24 = 0;
    uVar23 = 0;
  }
  else {
    uVar23 = *(undefined4 *)(local_a0 + 0xa0);
    uVar24 = *(undefined4 *)(local_a0 + 0xa4);
  }
  *(undefined4 *)(param_1 + 8) = uVar23;
  *(undefined4 *)((long)param_1 + 0x44) = uVar24;
  FUN_02569464(local_c4,param_1 + 0xdf);
  fVar30 = SQRT(*(float *)((long)param_1 + 0x6fc) * *(float *)((long)param_1 + 0x6fc) +
                *(float *)(param_1 + 0xdf) * *(float *)(param_1 + 0xdf));
  lVar11 = FUN_0251e98c(1);
  pfVar12 = (float *)(**(code **)(*(long *)(lVar11 + 0x120) + 0xf0))(lVar11 + 0x120);
  if (fVar30 < *pfVar12) {
LAB_02563b88:
    *(undefined8 *)((long)param_1 + 0x704) = 0;
  }
  else {
    lVar11 = FUN_0251e98c(1);
    pfVar12 = (float *)(**(code **)(*(long *)(lVar11 + 0x120) + 0xf0))(lVar11 + 0x120);
    fVar25 = *pfVar12;
    lVar11 = FUN_0251e98c(1);
    pfVar12 = (float *)(**(code **)(*(long *)(lVar11 + 0x120) + 0xf0))(lVar11 + 0x120);
    fVar25 = (fVar30 - *pfVar12) / (1.0 - fVar25);
    fVar30 = 0.9999;
    if (fVar25 <= 0.9999) {
      fVar30 = fVar25;
    }
    if ((fVar25 < 0.0) || (fVar30 < 0.8)) goto LAB_02563b88;
    uVar13 = *(uint *)((long)param_1 + 0x704);
    if (uVar13 < 2) {
      fVar30 = (float)NEON_ucvtf(local_c4[0]);
      *(float *)((long)param_1 + (ulong)uVar13 * 4 + 0x708) = fVar30 * 8.381903e-08;
LAB_02563944:
      *(uint *)((long)param_1 + 0x704) = uVar13 + 1;
    }
    else if (uVar13 < 0x3c) {
      fVar25 = *(float *)((long)param_1 + (ulong)(uVar13 - 2) * 4 + 0x708);
      fVar30 = *(float *)((long)param_1 + (ulong)(uVar13 - 1) * 4 + 0x708);
      if (fVar25 <= 360.0) {
        if (fVar25 < 0.0) {
          fVar29 = fVar25 / 360.0 + -1.0;
          goto LAB_025639e8;
        }
      }
      else {
        fVar29 = fVar25 / 360.0;
LAB_025639e8:
        fVar25 = fVar25 - (float)(int)fVar29 * 360.0;
      }
      if (fVar30 <= 360.0) {
        fVar29 = fVar30;
        if (fVar30 < 0.0) {
          fVar29 = fVar30 / 360.0 + -1.0;
          goto LAB_02563a34;
        }
      }
      else {
        fVar29 = fVar30 / 360.0;
LAB_02563a34:
        fVar29 = fVar30 - (float)(int)fVar29 * 360.0;
      }
      fVar22 = (float)NEON_ucvtf(local_c4[0]);
      if (fVar25 == fVar29) {
        iVar10 = 0;
      }
      else {
        fVar26 = fVar25 - fVar29;
        if (fVar25 <= fVar29) {
          fVar26 = fVar29 - fVar25;
        }
        if (fVar26 <= 180.0) {
          iVar10 = -1;
          if (fVar25 <= fVar29) {
            iVar10 = 1;
          }
        }
        else {
          iVar10 = -1;
          if (fVar29 < fVar25) {
            iVar10 = 1;
          }
        }
      }
      fVar22 = fVar22 * 8.381903e-08;
      if (fVar30 <= 360.0) {
        if (fVar30 < 0.0) {
          fVar25 = fVar30 / 360.0 + -1.0;
          goto LAB_02563ac0;
        }
      }
      else {
        fVar25 = fVar30 / 360.0;
LAB_02563ac0:
        fVar30 = fVar30 - (float)(int)fVar25 * 360.0;
      }
      if (fVar22 <= 360.0) {
        fVar25 = fVar22;
        if (fVar22 < 0.0) {
          fVar25 = fVar22 / 360.0 + -1.0;
          goto LAB_02563b00;
        }
      }
      else {
        fVar25 = fVar22 / 360.0;
LAB_02563b00:
        fVar25 = fVar22 - (float)(int)fVar25 * 360.0;
      }
      if (fVar30 == fVar25) {
        iVar18 = 0;
        fVar29 = 0.0;
      }
      else {
        fVar29 = fVar30 - fVar25;
        if (fVar30 <= fVar25) {
          fVar29 = fVar25 - fVar30;
        }
        if (fVar29 <= 180.0) {
          iVar18 = -1;
          if (fVar30 <= fVar25) {
            iVar18 = 1;
          }
        }
        else {
          iVar18 = -1;
          if (fVar25 < fVar30) {
            iVar18 = 1;
          }
          fVar29 = 360.0 - fVar29;
        }
      }
      fVar30 = -fVar29;
      if (0.0 <= fVar29) {
        fVar30 = fVar29;
      }
      if (5.0 <= fVar30) {
        if (iVar18 * iVar10 < 0) goto LAB_02563b88;
        *(float *)((long)param_1 + (ulong)uVar13 * 4 + 0x708) = fVar22;
        goto LAB_02563944;
      }
    }
  }
  FUN_02569464(local_c4,param_1 + 8);
  fVar30 = SQRT(*(float *)((long)param_1 + 0x44) * *(float *)((long)param_1 + 0x44) +
                *(float *)(param_1 + 8) * *(float *)(param_1 + 8));
  lVar11 = FUN_0251e98c(1);
  pfVar12 = (float *)(**(code **)(*(long *)(lVar11 + 0x120) + 0xf0))(lVar11 + 0x120);
  if (fVar30 < *pfVar12) {
LAB_02563e78:
    param_1[0xff] = 0;
  }
  else {
    lVar11 = FUN_0251e98c(1);
    pfVar12 = (float *)(**(code **)(*(long *)(lVar11 + 0x120) + 0xf0))(lVar11 + 0x120);
    fVar25 = *pfVar12;
    lVar11 = FUN_0251e98c(1);
    pfVar12 = (float *)(**(code **)(*(long *)(lVar11 + 0x120) + 0xf0))(lVar11 + 0x120);
    fVar25 = (fVar30 - *pfVar12) / (1.0 - fVar25);
    fVar30 = 0.9999;
    if (fVar25 <= 0.9999) {
      fVar30 = fVar25;
    }
    if ((fVar25 < 0.0) || (fVar30 < 0.8)) goto LAB_02563e78;
    uVar13 = *(uint *)(param_1 + 0xff);
    if (uVar13 < 2) {
      fVar30 = (float)NEON_ucvtf(local_c4[0]);
      *(float *)((long)param_1 + (ulong)uVar13 * 4 + 0x7fc) = fVar30 * 8.381903e-08;
LAB_02563c7c:
      *(uint *)(param_1 + 0xff) = uVar13 + 1;
    }
    else if (uVar13 < 0x3c) {
      fVar25 = *(float *)((long)param_1 + (ulong)(uVar13 - 2) * 4 + 0x7fc);
      fVar30 = *(float *)((long)param_1 + (ulong)(uVar13 - 1) * 4 + 0x7fc);
      if (fVar25 <= 360.0) {
        if (fVar25 < 0.0) {
          fVar29 = fVar25 / 360.0 + -1.0;
          goto LAB_02563cd8;
        }
      }
      else {
        fVar29 = fVar25 / 360.0;
LAB_02563cd8:
        fVar25 = fVar25 - (float)(int)fVar29 * 360.0;
      }
      if (fVar30 <= 360.0) {
        fVar29 = fVar30;
        if (fVar30 < 0.0) {
          fVar29 = fVar30 / 360.0 + -1.0;
          goto LAB_02563d24;
        }
      }
      else {
        fVar29 = fVar30 / 360.0;
LAB_02563d24:
        fVar29 = fVar30 - (float)(int)fVar29 * 360.0;
      }
      fVar22 = (float)NEON_ucvtf(local_c4[0]);
      if (fVar25 == fVar29) {
        iVar10 = 0;
      }
      else {
        fVar26 = fVar25 - fVar29;
        if (fVar25 <= fVar29) {
          fVar26 = fVar29 - fVar25;
        }
        if (fVar26 <= 180.0) {
          iVar10 = -1;
          if (fVar25 <= fVar29) {
            iVar10 = 1;
          }
        }
        else {
          iVar10 = -1;
          if (fVar29 < fVar25) {
            iVar10 = 1;
          }
        }
      }
      fVar22 = fVar22 * 8.381903e-08;
      if (fVar30 <= 360.0) {
        if (fVar30 < 0.0) {
          fVar25 = fVar30 / 360.0 + -1.0;
          goto LAB_02563db0;
        }
      }
      else {
        fVar25 = fVar30 / 360.0;
LAB_02563db0:
        fVar30 = fVar30 - (float)(int)fVar25 * 360.0;
      }
      if (fVar22 <= 360.0) {
        fVar25 = fVar22;
        if (fVar22 < 0.0) {
          fVar25 = fVar22 / 360.0 + -1.0;
          goto LAB_02563df0;
        }
      }
      else {
        fVar25 = fVar22 / 360.0;
LAB_02563df0:
        fVar25 = fVar22 - (float)(int)fVar25 * 360.0;
      }
      if (fVar30 == fVar25) {
        iVar18 = 0;
        fVar29 = 0.0;
      }
      else {
        fVar29 = fVar30 - fVar25;
        if (fVar30 <= fVar25) {
          fVar29 = fVar25 - fVar30;
        }
        if (fVar29 <= 180.0) {
          iVar18 = -1;
          if (fVar30 <= fVar25) {
            iVar18 = 1;
          }
        }
        else {
          iVar18 = -1;
          if (fVar25 < fVar30) {
            iVar18 = 1;
          }
          fVar29 = 360.0 - fVar29;
        }
      }
      fVar30 = -fVar29;
      if (0.0 <= fVar29) {
        fVar30 = fVar29;
      }
      if (5.0 <= fVar30) {
        if (iVar18 * iVar10 < 0) goto LAB_02563e78;
        *(float *)((long)param_1 + (ulong)uVar13 * 4 + 0x7fc) = fVar22;
        goto LAB_02563c7c;
      }
    }
  }
  if (((param_2[10] == '\0') || (param_2[8] == '\0')) || (param_2[9] != '\0')) {
    FUN_02564310(param_1,&local_b0);
  }
  else {
    if ((local_a0 == 0) || ((*(uint *)(local_a0 + 8) >> 1 & 1) == 0)) {
      *puVar21 = *puVar21 & 0xfffffffb;
      if (local_a0 != 0) goto LAB_02563f48;
      bVar9 = 0;
    }
    else {
      *puVar21 = *puVar21 | 4;
LAB_02563f48:
      bVar9 = *(byte *)(local_a0 + 0x8c) >> 1 & 1;
    }
    if (bVar9 == 0) {
      uVar13 = *puVar2 & 0xfffffffb;
    }
    else {
      uVar13 = *puVar2 | 4;
    }
    *puVar2 = uVar13;
  }
  lVar11 = 0;
  do {
    lVar15 = lVar11;
    uVar13 = (uint)lVar15;
    if ((uVar13 < 0x37) && ((puVar21[(int)uVar13 >> 5] >> (ulong)(uVar13 & 0x1f) & 1) != 0)) {
      *(undefined4 *)((long)param_1 + lVar15 * 4 + 0x5f4) = 0;
      *(int *)((long)param_1 + lVar15 * 4 + 0x518) =
           *(int *)((long)param_1 + lVar15 * 4 + 0x518) + 1;
    }
    else {
      *(undefined4 *)((long)param_1 + lVar15 * 4 + 0x518) = 0;
      *(int *)((long)param_1 + lVar15 * 4 + 0x5f4) =
           *(int *)((long)param_1 + lVar15 * 4 + 0x5f4) + 1;
    }
    lVar11 = lVar15 + 1;
  } while (lVar15 + 1 != 0x37);
  if (cVar3 != '\0') {
    *(undefined8 *)puVar2 = *(undefined8 *)puVar21;
  }
  local_c4[2] = DAT_04c9a0c8;
  bVar9 = *(byte *)((long)param_1 + 0x6e4);
  local_b5 = 0;
  local_b1 = 0;
  if (7 < bVar9) {
    bVar9 = 0xff;
  }
  local_c4[0] = CONCAT31((int3)((ulong)lVar15 >> 8),bVar9);
  local_b8 = 0;
  local_b6 = 0;
  param_1[3] = param_1[2];
  local_c4[1] = 0xffffffff;
  if ((*(char *)(param_1 + 5) != '\0') && (uVar14 = FUN_02530cec(local_c4), (uVar14 & 1) != 0)) {
    *(undefined1 *)(param_1 + 5) = 0;
    param_1[2] = param_1[4];
  }
  pfVar12 = (float *)&DAT_0417abf4;
  if (*(char *)(param_1 + 0x87) != '\0') {
    pfVar12 = pfVar17;
  }
  fVar30 = SQRT(pfVar12[1] * pfVar12[1] + *pfVar12 * *pfVar12);
  lVar11 = FUN_0251e98c(1);
  pfVar12 = (float *)(**(code **)(*(long *)(lVar11 + 0x120) + 0xf0))(lVar11 + 0x120);
  if (*pfVar12 <= fVar30) {
    lVar11 = FUN_0251e98c(1);
    pfVar12 = (float *)(**(code **)(*(long *)(lVar11 + 0x120) + 0xf0))(lVar11 + 0x120);
    fVar25 = *pfVar12;
    lVar11 = FUN_0251e98c(1);
    pfVar12 = (float *)(**(code **)(*(long *)(lVar11 + 0x120) + 0xf0))(lVar11 + 0x120);
    fVar25 = (fVar30 - *pfVar12) / (1.0 - fVar25);
    fVar30 = 0.9999;
    if (fVar25 <= 0.9999) {
      fVar30 = fVar25;
    }
    fVar29 = 0.0;
    if (0.0 <= fVar25) {
      fVar29 = fVar30;
    }
    if (0.0 < fVar29) {
      lVar11 = *(long *)(param_1[9] + 0x68);
      pfVar12 = (float *)&DAT_0417abf4;
      if (*(char *)(param_1 + 0x87) != '\0') {
        pfVar12 = pfVar17;
      }
      FUN_02569464(&local_74,pfVar12);
      fVar30 = local_74;
      local_74 = 0.0;
      fVar30 = (float)NEON_ucvtf(fVar30);
      fVar25 = (float)NEON_ucvtf(*(undefined4 *)(lVar11 + 0x2b4));
      iVar10 = FUN_006f05f8(fVar25 * 8.381903e-08,fVar30 * 8.381903e-08,&local_74);
      fVar30 = -local_74;
      if (-1 < iVar10) {
        fVar30 = local_74;
      }
      fVar25 = -fVar30;
      if (0.0 <= fVar30) {
        fVar25 = fVar30;
      }
      lVar11 = FUN_0251e98c(1);
      pfVar17 = (float *)(**(code **)(*(long *)(lVar11 + 0x6f0) + 0xf0))(lVar11 + 0x6f0);
      fVar29 = *pfVar17;
      fVar30 = -fVar29;
      if (0.0 <= fVar29) {
        fVar30 = fVar29;
      }
      if (fVar25 < fVar30) {
        *(int *)((long)param_1 + 0x6f4) = *(int *)((long)param_1 + 0x6f4) + 1;
        goto LAB_02564204;
      }
    }
  }
  *(undefined4 *)((long)param_1 + 0x6f4) = 0;
LAB_02564204:
  FUN_009ceb5c(param_1 + 10,*(undefined4 *)(param_1 + 0xde));
  FUN_009bdbf8(param_1 + 0x11,*(undefined4 *)(param_1 + 0xde),pbVar1);
  return 1;
}

