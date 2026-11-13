
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_012f3250(long param_1,long param_2)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  uint uVar6;
  int iVar7;
  uint uVar8;
  char cVar9;
  byte bVar10;
  short sVar11;
  short sVar12;
  bool bVar13;
  bool bVar14;
  uint uVar15;
  int iVar16;
  int iVar17;
  ulong uVar18;
  ushort *puVar19;
  ushort *puVar20;
  ushort *puVar21;
  uint uVar22;
  undefined4 uVar23;
  long lVar24;
  uint *puVar25;
  undefined1 uVar26;
  long lVar27;
  uint uVar28;
  undefined8 *puVar29;
  uint *puVar30;
  ulong uVar31;
  uint uVar32;
  uint uVar33;
  ushort uVar34;
  long lVar35;
  ushort uVar36;
  ushort uVar37;
  uint uVar38;
  ushort uVar39;
  float fVar40;
  float fVar41;
  int local_398;
  int local_394;
  undefined8 local_390;
  undefined8 local_388;
  undefined *local_380;
  int local_378;
  int local_374;
  undefined8 local_370;
  long local_368;
  undefined *local_360;
  int local_358;
  int local_354;
  undefined8 local_1f8;
  uint *local_1f0;
  undefined **local_1e8;
  undefined8 uStack_1e0;
  undefined *local_1d8;
  int local_1d0;
  int local_1cc;
  undefined1 auStack_1c8 [288];
  undefined *local_a8;
  undefined *local_a0;
  undefined8 local_98;
  undefined *local_90;
  undefined8 local_88;
  uint local_7c;
  
  if (param_2 == 0) {
    return;
  }
  lVar24 = param_1 + 0x38;
  local_398 = 0;
  local_1f0 = (uint *)((ulong)local_1f0 & 0xffffffff00000000);
  lVar1 = param_1 + 0x60;
  local_1f8 = (undefined *)0x0;
  uVar18 = FUN_012f74a8(param_1,lVar24,&local_1f8);
  if (((uVar18 & 1) != 0) && (local_1f8._4_4_ < 0.975)) goto LAB_012f32c0;
  local_1e8 = &PTR_LAB_0498d930;
  uStack_1e0 = 0;
  local_1f8 = PTR_DAT_04bbc5b0 + 0x10;
  local_1f0 = (uint *)(PTR_DAT_04bbc5b8 + 0x10);
  local_1d8 = PTR_DAT_04bb2e18 + 0x10;
  memset(&local_1d0,0,0x128);
  FUN_0137c524(auStack_1c8);
  puVar4 = PTR_DAT_04bb2018;
  local_88 = 0;
  local_98 = 0;
  local_a8 = PTR_DAT_04bbc5d8 + 0x10;
  puVar2 = PTR_DAT_04bb2018 + 0x10;
  local_a0 = puVar2;
  local_90 = puVar2;
  FUN_0137c6ec(&local_1f8);
  local_1f8 = PTR_DAT_04bbc278 + 0x10;
  FUN_0137c6ec(&local_1f8);
  fVar41 = (float)*(int *)(param_1 + 0x6c) * 10.0 + 5.0 + -10.0;
  fVar40 = (float)*(int *)(param_1 + 0x68) * 10.0 + 5.0 + -10.0;
  local_1d0 = (int)((float)(int)fVar40 / 10.0) - (uint)(fVar40 < 0.0);
  local_1cc = (int)((float)(int)fVar41 / 10.0) - (uint)(fVar41 < 0.0);
  local_98 = CONCAT44(local_1cc,local_1d0);
  local_88 = CONCAT44(local_1cc + 2,local_1d0 + 2);
  FUN_0137cab0(&local_1f8);
  iVar16 = FUN_012ffbd4(&local_1f8,lVar1);
  local_370 = (undefined *)CONCAT44(local_370._4_4_,iVar16);
  if (iVar16 == 0) {
    local_370 = (undefined *)(param_1 + 0x78);
    local_368 = param_1 + 0x88;
    iVar7 = *(int *)(param_1 + 0x80);
    local_354 = *(int *)(param_1 + 0x84);
    iVar16 = *(int *)(param_1 + 0x94) + 1;
    local_360 = puVar2;
    local_358 = iVar7;
    if (iVar16 != local_354) {
      do {
        uVar18 = FUN_012ffd88(&local_1f8,&local_360);
        if ((uVar18 & 1) != 0) goto LAB_012f3aec;
        if (local_358 < *(int *)(local_368 + 8)) {
          local_358 = local_358 + 1;
        }
        else {
          local_354 = local_354 + 1;
          local_358 = *(int *)(local_370 + 8);
        }
      } while (iVar7 != local_358 || iVar16 != local_354);
    }
    puVar5 = PTR_DAT_04bbc330;
    puVar2 = PTR_DAT_04bb27a8;
    sVar11 = *(short *)(param_1 + 0xd4);
    if (*(short *)(param_1 + 0xd8) <= *(short *)(param_1 + 0xd4)) {
      sVar11 = *(short *)(param_1 + 0xd8);
    }
    sVar12 = *(short *)(param_1 + 0xd6);
    if (*(short *)(param_1 + 0xda) <= *(short *)(param_1 + 0xd6)) {
      sVar12 = *(short *)(param_1 + 0xda);
    }
    uVar22 = *(int *)(param_1 + 0x6c) - (int)sVar12;
    uVar28 = *(int *)(param_1 + 0x68) - (int)sVar11;
    puVar20 = (ushort *)(param_1 + 0xdc + (ulong)(uVar22 * 3 + uVar28) * 0xe);
    if (2 < uVar22 || 2 < uVar28) {
      puVar20 = (ushort *)PTR_DAT_04bbc2f8;
    }
    puVar21 = puVar20 + (ulong)*(uint *)(param_1 + 0xa0) * 3;
    if (1 < *(uint *)(param_1 + 0xa0)) {
      puVar21 = puVar20;
    }
    local_1f8 = PTR_DAT_04bbc330 + 0x10;
    local_1f0 = (uint *)0x0;
    local_1e8 = (undefined **)CONCAT44(local_1e8._4_4_,(uint)(byte)puVar21[2]);
    lVar27 = *(long *)PTR_DAT_04bb27a8;
    uVar22 = (uint)*puVar21 - (uint)*(ushort *)(lVar27 + 0x408);
    if (uVar22 < *(uint *)(lVar27 + 1000)) {
      puVar25 = *(uint **)(*(long *)(lVar27 + 0x3f0) + (long)(int)uVar22 * 8);
      if (puVar25 == (uint *)0x0) goto LAB_012f3834;
      uVar22 = *puVar25;
      local_1f0 = puVar25;
      if (!(uVar22 != 0 && puVar25 != (uint *)(ulong)uVar22)) goto LAB_012f3834;
      puVar30 = (uint *)((long)puVar25 - (long)(ulong)uVar22);
      if (((*puVar30 == 0) || (uVar22 = puVar30[1], uVar22 == 0)) ||
         ((ulong)(ushort)puVar30[2] == 0)) goto LAB_012f3834;
      lVar27 = 0xc;
      if (*(char *)((long)puVar30 + 10) != '\0') {
        lVar27 = 0x1c;
      }
      lVar27 = (long)puVar30 + lVar27 + (ulong)(ushort)puVar30[2] * 8;
      if (lVar27 == 0) goto LAB_012f3834;
      uVar28 = 0;
      if ((ulong)uVar22 != 0) {
        uVar28 = (uint)((ulong)((long)puVar25 - lVar27) / (ulong)uVar22);
      }
      if (*puVar30 <= uVar28) {
        uVar28 = 0xffffffff;
      }
      if ((*(uint *)PTR_DAT_04bbbe48 <= uVar28) ||
         (uVar39 = *(ushort *)(*(long *)(PTR_DAT_04bbbe48 + 8) + (long)(int)uVar28 * 2), 4 < uVar39)
         ) goto LAB_012f3834;
    }
    else {
LAB_012f3834:
      uVar39 = 0;
    }
    bVar10 = (byte)puVar20[6];
    uVar22 = (uint)bVar10;
    local_370 = (undefined *)CONCAT44(local_370._4_4_,uVar22);
    if (DAT_051810a8 <= (int)uVar22) {
LAB_012f32c0:
      iVar16 = 2;
      goto LAB_012f3408;
    }
    local_390 = (undefined *)CONCAT44(local_390._4_4_,uVar22);
    uVar22 = *(int *)(param_1 + 0x44) - (int)sVar12;
    uVar28 = *(int *)(param_1 + 0x40) - (int)sVar11;
    puVar3 = (undefined *)(param_1 + 0xdc + (ulong)(uVar22 * 3 + uVar28) * 0xe);
    if (2 < uVar22 || 2 < uVar28) {
      puVar3 = PTR_DAT_04bbc2f8;
    }
    local_370 = (undefined *)CONCAT44(local_370._4_4_,(uint)(byte)puVar3[0xc]);
    if ((byte)puVar3[0xc] == 4) {
      local_370 = (undefined *)((ulong)local_370._4_4_ << 0x20);
    }
    if (bVar10 == 4) {
      local_390 = (undefined *)((ulong)local_390._4_4_ << 0x20);
    }
    if ((uint)local_390 < (uint)local_370) goto LAB_012f32c0;
    if ((uint)local_370 == (uint)local_390) {
      lVar27 = param_1 + 0x98;
      puVar19 = (ushort *)FUN_01301f64(lVar27,lVar24);
      local_370 = puVar5 + 0x10;
      local_368 = 0;
      local_360 = (undefined *)CONCAT44(local_360._4_4_,(uint)(byte)puVar19[2]);
      lVar35 = *(long *)puVar2;
      uVar22 = (uint)*puVar19 - (uint)*(ushort *)(lVar35 + 0x408);
      if (uVar22 < *(uint *)(lVar35 + 1000)) {
        lVar35 = *(long *)(*(long *)(lVar35 + 0x3f0) + (long)(int)uVar22 * 8);
        if (lVar35 != 0) {
          local_368 = lVar35;
        }
      }
      iVar16 = FUN_01313184(&local_370);
      if ((iVar16 == 3) && (iVar16 = FUN_01313218(&local_370), iVar16 == 2)) {
        fVar41 = (float)FUN_01317db0(param_1 + 0xc);
        fVar41 = *(float *)(param_1 + 0x1c) - fVar41;
        fVar40 = -fVar41;
        if (0.0 <= fVar41) {
          fVar40 = fVar41;
        }
        if (10.0 < fVar40) goto LAB_012f3aec;
      }
      if (uVar39 == 3) {
        iVar16 = FUN_013132ac(&local_1f8);
        local_370 = (undefined *)CONCAT44(local_370._4_4_,iVar16);
        if (iVar16 != 1) goto LAB_012f32c0;
        if (((DAT_05181c70 & 1) == 0) && (iVar16 = __cxa_guard_acquire(&DAT_05181c70), iVar16 != 0))
        {
          DAT_05181c30 = puVar4 + 0x10;
          _DAT_05181c38 = 1;
          DAT_05181c58 = 0xffffffff;
          DAT_05181c48 = 0xffffffff00000000;
          DAT_05181c68 = 0x100000000;
          DAT_05181c40 = DAT_05181c30;
          DAT_05181c50 = DAT_05181c30;
          DAT_05181c60 = DAT_05181c30;
          __cxa_guard_release(&DAT_05181c70);
        }
        uVar22 = (uint)(byte)puVar21[2];
        if (3 < uVar22) {
          uVar22 = 0;
        }
        local_388 = CONCAT44((&DAT_05181c3c)[(long)(int)uVar22 * 4] + *(int *)(param_1 + 0x6c),
                             (&DAT_05181c38)[(long)(int)uVar22 * 4] + *(int *)(param_1 + 0x68));
        local_390 = puVar4 + 0x10;
        lVar35 = FUN_01300ee0(lVar27,&local_390);
        puVar21 = (ushort *)FUN_01301f64(lVar27,&local_390);
        local_370 = puVar5 + 0x10;
        local_368 = 0;
        local_360 = (undefined *)CONCAT44(local_360._4_4_,(uint)(byte)puVar21[2]);
        lVar27 = *(long *)puVar2;
        uVar22 = (uint)*puVar21 - (uint)*(ushort *)(lVar27 + 0x408);
        if (uVar22 < *(uint *)(lVar27 + 1000)) {
          lVar27 = *(long *)(*(long *)(lVar27 + 0x3f0) + (long)(int)uVar22 * 8);
          if (lVar27 != 0) {
            local_368 = lVar27;
          }
        }
        local_7c = (uint)*(byte *)(lVar35 + 0xc);
        if ((local_7c == (byte)puVar20[6]) && (iVar16 = FUN_01313184(&local_370), iVar16 == 4)) {
          uVar22 = 9;
          local_398 = 2;
          goto LAB_012f3410;
        }
      }
      else if (uVar39 == 4) {
        bVar10 = (byte)puVar20[6];
        goto LAB_012f3ac4;
      }
LAB_012f3ac8:
      iVar16 = FUN_012f88f0(param_1);
      local_1f8 = (undefined *)CONCAT44(local_1f8._4_4_,iVar16);
      if (iVar16 != 0) {
        if (iVar16 == 2) {
          uVar22 = 0x10;
        }
        else {
          uVar22 = 0x11;
        }
        local_398 = 1;
        goto LAB_012f3410;
      }
      if ((*(long *)(param_1 + 0x50) != 0) &&
         (lVar27 = FUN_01381bbc(*(long *)(param_1 + 0x50),lVar1),
         (*(uint *)(lVar27 + 0xc) & 0x300) != 0x100)) goto LAB_012f32c0;
      goto LAB_012f340c;
    }
    if (uVar39 == 4) {
LAB_012f3ac4:
      if (bVar10 != 0) goto LAB_012f3ac8;
      goto LAB_012f32c0;
    }
LAB_012f3aec:
    uVar22 = 1;
    local_398 = 1;
  }
  else {
LAB_012f3408:
    local_398 = iVar16;
LAB_012f340c:
    uVar22 = 1;
  }
LAB_012f3410:
  if (local_398 != 0) {
    uVar26 = 0;
    iVar16 = 0;
    uVar28 = 1 << (ulong)uVar22;
    if (0x11 < uVar22) {
      uVar28 = 0;
    }
    goto LAB_012f35fc;
  }
  sVar11 = *(short *)(param_1 + 0xd4);
  if (*(short *)(param_1 + 0xd8) <= *(short *)(param_1 + 0xd4)) {
    sVar11 = *(short *)(param_1 + 0xd8);
  }
  sVar12 = *(short *)(param_1 + 0xd6);
  if (*(short *)(param_1 + 0xda) <= *(short *)(param_1 + 0xd6)) {
    sVar12 = *(short *)(param_1 + 0xda);
  }
  uVar22 = *(int *)(param_1 + 0x6c) - (int)sVar12;
  uVar28 = *(int *)(param_1 + 0x68) - (int)sVar11;
  puVar20 = (ushort *)(param_1 + 0xdc + (ulong)(uVar22 * 3 + uVar28) * 0xe);
  if (2 < uVar22 || 2 < uVar28) {
    puVar20 = (ushort *)PTR_DAT_04bbc2f8;
  }
  puVar21 = puVar20 + (ulong)*(uint *)(param_1 + 0xa0) * 3;
  if (1 < *(uint *)(param_1 + 0xa0)) {
    puVar21 = puVar20;
  }
  lVar27 = *(long *)PTR_DAT_04bb27a8;
  uVar22 = (uint)*puVar21 - (uint)*(ushort *)(lVar27 + 0x408);
  if (((uVar22 < *(uint *)(lVar27 + 1000)) &&
      (puVar25 = *(uint **)(*(long *)(lVar27 + 0x3f0) + (long)(int)uVar22 * 8),
      puVar25 != (uint *)0x0)) &&
     (uVar22 = *puVar25, uVar22 != 0 && puVar25 != (uint *)(ulong)uVar22)) {
    puVar30 = (uint *)((long)puVar25 - (long)(ulong)uVar22);
    if (((*puVar30 != 0) && (uVar22 = puVar30[1], uVar22 != 0)) && ((ulong)(ushort)puVar30[2] != 0))
    {
      lVar27 = 0xc;
      if (*(char *)((long)puVar30 + 10) != '\0') {
        lVar27 = 0x1c;
      }
      lVar27 = (long)puVar30 + lVar27 + (ulong)(ushort)puVar30[2] * 8;
      if (lVar27 != 0) {
        uVar28 = 0;
        if ((ulong)uVar22 != 0) {
          uVar28 = (uint)((ulong)((long)puVar25 - lVar27) / (ulong)uVar22);
        }
        if (*puVar30 <= uVar28) {
          uVar28 = 0xffffffff;
        }
        if ((uVar28 < *(uint *)PTR_DAT_04bbbe48) &&
           (uVar39 = *(ushort *)(*(long *)(PTR_DAT_04bbbe48 + 8) + (long)(int)uVar28 * 2),
           uVar39 < 5)) {
          if (uVar39 == 3) {
            uVar28 = 0;
            uVar26 = 0;
            iVar16 = 9;
            goto LAB_012f35fc;
          }
          if (uVar39 == 4) {
            uVar22 = *(int *)(param_1 + 0x44) - (int)sVar12;
            uVar28 = *(int *)(param_1 + 0x40) - (int)sVar11;
            puVar2 = (undefined *)(param_1 + 0xdc + (ulong)(uVar22 * 3 + uVar28) * 0xe);
            if (2 < uVar22 || 2 < uVar28) {
              puVar2 = PTR_DAT_04bbc2f8;
            }
            uVar22 = (uint)(byte)puVar2[0xc];
            local_370 = (undefined *)CONCAT44(local_370._4_4_,(uint)(byte)puVar20[6]);
            if (uVar22 == 4) {
              uVar22 = 0;
            }
            if ((byte)puVar20[6] == 4) {
              local_370 = (undefined *)((ulong)local_370._4_4_ << 0x20);
            }
            if (((uint)local_370 < uVar22) || (uVar22 == (uint)local_370)) {
              uVar28 = 0;
              uVar26 = 0;
              iVar16 = 10;
            }
            else {
              uVar28 = 0;
              iVar16 = 10;
              uVar26 = 1;
            }
            goto LAB_012f35fc;
          }
        }
      }
    }
  }
  uVar28 = 0;
  uVar26 = 0;
  iVar16 = 0;
LAB_012f35fc:
  if (iVar16 == 0) {
    uVar22 = 0;
LAB_012f3648:
    while (uVar33 = uVar22, uVar33 == 1) {
      uVar22 = 2;
    }
    if (uVar33 == 0x12) {
      if (*(int *)(param_2 + 8) != 0) {
        return;
      }
      lVar27 = *(long *)(param_1 + 0x50);
      local_394 = 0;
      if (lVar27 == 0) {
        bVar14 = false;
        bVar13 = true;
      }
      else {
        iVar7 = *(int *)(param_1 + 0x68);
        iVar17 = *(int *)(param_1 + 0x6c);
        uVar22 = iVar7 - *(int *)(lVar27 + 0x28);
        uVar28 = *(uint *)(lVar27 + 0x18);
        uVar33 = iVar17 - *(int *)(lVar27 + 0x2c);
        if (uVar22 < uVar28 && uVar33 < *(uint *)(lVar27 + 0x1c)) {
          uVar38 = uVar22 + uVar28 * uVar33;
LAB_012f3a1c:
          uVar32 = *(uint *)(lVar27 + 0x30);
          lVar35 = *(long *)(lVar27 + 0x38);
          if (uVar32 <= uVar38) {
            uVar38 = 0;
          }
          bVar13 = (*(byte *)(lVar35 + (long)(int)uVar38 * 0x68 + 0xd) & 1) == 0;
          if (uVar28 <= uVar22 || *(uint *)(lVar27 + 0x1c) <= uVar33) {
            cVar9 = *(char *)(lVar27 + 0x88);
            goto LAB_012f3a60;
          }
          uVar22 = uVar22 + uVar28 * uVar33;
LAB_012f3aa8:
          if (uVar32 <= uVar22) {
            uVar22 = 0;
          }
          puVar29 = (undefined8 *)(lVar35 + (long)(int)uVar22 * 0x68);
        }
        else {
          cVar9 = *(char *)(lVar27 + 0x88);
          if (cVar9 != '\0') {
            uVar38 = iVar7 - *(int *)(lVar27 + 0x98);
            if ((uVar38 < *(uint *)(lVar27 + 0xa0)) &&
               (uVar32 = iVar17 - *(int *)(lVar27 + 0x9c), uVar32 < *(uint *)(lVar27 + 0xa4))) {
              uVar38 = uVar38 + *(uint *)(lVar27 + 0xa0) * uVar32 + *(int *)(lVar27 + 0x8c);
              goto LAB_012f3a1c;
            }
          }
          bVar13 = (DAT_051a50f8._5_1_ & 1) == 0;
LAB_012f3a60:
          if (cVar9 == '\0') {
            puVar29 = &DAT_051a50f0;
          }
          else {
            uVar22 = iVar7 - *(int *)(lVar27 + 0x98);
            puVar29 = &DAT_051a50f0;
            if ((uVar22 < *(uint *)(lVar27 + 0xa0)) &&
               (uVar28 = iVar17 - *(int *)(lVar27 + 0x9c), uVar28 < *(uint *)(lVar27 + 0xa4))) {
              uVar22 = uVar22 + *(uint *)(lVar27 + 0xa0) * uVar28 + *(int *)(lVar27 + 0x8c);
              uVar32 = *(uint *)(lVar27 + 0x30);
              lVar35 = *(long *)(lVar27 + 0x38);
              goto LAB_012f3aa8;
            }
          }
        }
        bVar14 = (*(uint *)((long)puVar29 + 0xc) & 0x300) != 0x100;
      }
      local_1f0 = (uint *)((ulong)local_1f0 & 0xffffffff00000000);
      local_1f8 = (undefined *)0x0;
      local_370._0_4_ = iVar16;
      uVar18 = FUN_012f74a8(param_1,lVar24,&local_1f8);
      puVar2 = PTR_DAT_04bbc2f8;
      if (((uVar18 & 1) != 0) && (local_1f8._4_4_ < 0.975)) goto LAB_012f3bf4;
      lVar24 = param_1 + 0xdc;
      sVar11 = *(short *)(param_1 + 0xd4);
      if (*(short *)(param_1 + 0xd8) <= *(short *)(param_1 + 0xd4)) {
        sVar11 = *(short *)(param_1 + 0xd8);
      }
      sVar12 = *(short *)(param_1 + 0xd6);
      if (*(short *)(param_1 + 0xda) <= *(short *)(param_1 + 0xd6)) {
        sVar12 = *(short *)(param_1 + 0xda);
      }
      uVar22 = *(int *)(param_1 + 0x44) - (int)sVar12;
      uVar28 = *(int *)(param_1 + 0x40) - (int)sVar11;
      uVar33 = *(int *)(param_1 + 0x6c) - (int)sVar12;
      uVar38 = *(int *)(param_1 + 0x68) - (int)sVar11;
      puVar4 = (undefined *)(lVar24 + (ulong)(uVar22 * 3 + uVar28) * 0xe);
      if (2 < uVar22 || 2 < uVar28) {
        puVar4 = PTR_DAT_04bbc2f8;
      }
      puVar5 = (undefined *)(lVar24 + (ulong)(uVar33 * 3 + uVar38) * 0xe);
      if (2 < uVar33 || 2 < uVar38) {
        puVar5 = PTR_DAT_04bbc2f8;
      }
      uVar22 = (uint)(byte)puVar4[0xc];
      local_370 = (undefined *)CONCAT44(local_370._4_4_,(uint)(byte)puVar5[0xc]);
      if (uVar22 == 4) {
        uVar22 = 0;
      }
      if ((byte)puVar5[0xc] == 4) {
        local_370 = (undefined *)((ulong)local_370._4_4_ << 0x20);
      }
      if ((uint)local_370 < uVar22) goto LAB_012f3bf4;
      if (uVar22 != (uint)local_370) {
        uVar22 = 1;
        local_394 = 1;
        goto LAB_012f3c00;
      }
      local_1e8 = &PTR_LAB_0498d930;
      uStack_1e0 = 0;
      local_1f8 = PTR_DAT_04bbc5b0 + 0x10;
      local_1f0 = (uint *)(PTR_DAT_04bbc5b8 + 0x10);
      local_1d8 = PTR_DAT_04bb2e18 + 0x10;
      memset(&local_1d0,0,0x128);
      FUN_0137c524(auStack_1c8);
      puVar4 = PTR_DAT_04bb2018;
      local_88 = 0;
      local_98 = 0;
      local_a8 = PTR_DAT_04bbc5d8 + 0x10;
      local_a0 = PTR_DAT_04bb2018 + 0x10;
      local_90 = local_a0;
      FUN_0137c6ec(&local_1f8);
      local_1f8 = PTR_DAT_04bbc278 + 0x10;
      FUN_0137c6ec(&local_1f8);
      fVar41 = (float)*(int *)(param_1 + 0x6c) * 10.0 + 5.0 + -10.0;
      fVar40 = (float)*(int *)(param_1 + 0x68) * 10.0 + 5.0 + -10.0;
      local_1d0 = (int)((float)(int)fVar40 / 10.0) - (uint)(fVar40 < 0.0);
      local_1cc = (int)((float)(int)fVar41 / 10.0) - (uint)(fVar41 < 0.0);
      local_98 = CONCAT44(local_1cc,local_1d0);
      local_88 = CONCAT44(local_1cc + 2,local_1d0 + 2);
      FUN_0137cab0(&local_1f8);
      local_370._1_7_ = (uint7)((ulong)local_370 >> 8) & 0xffffff;
      local_370 = (undefined *)((ulong)local_370._1_7_ << 8);
      uVar18 = FUN_012f7630(param_1,&local_370);
      if (bVar14) goto LAB_012f4000;
      sVar11 = *(short *)(param_1 + 0xd4);
      if (*(short *)(param_1 + 0xd8) <= *(short *)(param_1 + 0xd4)) {
        sVar11 = *(short *)(param_1 + 0xd8);
      }
      uVar22 = *(uint *)(param_1 + 0xa0);
      sVar12 = *(short *)(param_1 + 0xd6);
      if (*(short *)(param_1 + 0xda) <= *(short *)(param_1 + 0xd6)) {
        sVar12 = *(short *)(param_1 + 0xda);
      }
      uVar28 = *(int *)(param_1 + 0x68) - (int)sVar11;
      uVar33 = *(int *)(param_1 + 0x6c) - (int)sVar12;
      iVar16 = uVar33 * 3;
      puVar20 = (ushort *)(lVar24 + (ulong)(iVar16 + uVar28) * 0xe);
      if (2 < uVar33 || 2 < uVar28) {
        puVar20 = (ushort *)puVar2;
      }
      puVar21 = puVar20 + (ulong)uVar22 * 3;
      if (1 < uVar22) {
        puVar21 = puVar20;
      }
      lVar27 = *(long *)PTR_DAT_04bb27a8;
      uVar39 = *(ushort *)(lVar27 + 0x408);
      uVar32 = (uint)*puVar21 - (uint)uVar39;
      uVar38 = *(uint *)(lVar27 + 1000);
      if ((uVar32 < uVar38) &&
         (puVar25 = *(uint **)(*(long *)(lVar27 + 0x3f0) + (long)(int)uVar32 * 8),
         puVar25 != (uint *)0x0)) {
        uVar32 = *puVar25;
        uVar15 = 0;
        if ((uVar32 != 0) && (puVar25 != (uint *)(ulong)uVar32)) {
          puVar30 = (uint *)((long)puVar25 - (long)(ulong)uVar32);
          uVar15 = 0;
          if (*puVar30 != 0) {
            uVar32 = puVar30[1];
            if ((uVar32 != 0) && ((ulong)(ushort)puVar30[2] != 0)) {
              lVar35 = 0xc;
              if (*(char *)((long)puVar30 + 10) != '\0') {
                lVar35 = 0x1c;
              }
              lVar35 = (long)puVar30 + lVar35 + (ulong)(ushort)puVar30[2] * 8;
              if (lVar35 != 0) {
                uVar15 = 0;
                if ((ulong)uVar32 != 0) {
                  uVar15 = (uint)((ulong)((long)puVar25 - lVar35) / (ulong)uVar32);
                }
                if (*puVar30 <= uVar15) {
                  uVar15 = 0xffffffff;
                }
                if ((uVar15 < *(uint *)PTR_DAT_04bbbe48) &&
                   (uVar15 = (uint)*(ushort *)
                                    (*(long *)(PTR_DAT_04bbbe48 + 8) + (long)(int)uVar15 * 2),
                   uVar15 < 5)) goto LAB_012f3ff4;
              }
            }
            goto LAB_012f3ff0;
          }
        }
      }
      else {
LAB_012f3ff0:
        uVar15 = 0;
      }
LAB_012f3ff4:
      local_370 = (undefined *)CONCAT44(local_370._4_4_,uVar15);
      if (uVar15 != 0) goto LAB_012f4000;
      uVar32 = *(int *)(param_1 + 0x6c) + ~(int)sVar12;
      puVar20 = (ushort *)(lVar24 + (ulong)(uVar32 * 3 + uVar28) * 0xe);
      if (2 < uVar32 || 2 < uVar28) {
        puVar20 = (ushort *)puVar2;
      }
      puVar21 = puVar20 + (ulong)uVar22 * 3;
      if (1 < uVar22) {
        puVar21 = puVar20;
      }
      uVar32 = (uint)*puVar21 - (uint)uVar39;
      if ((uVar32 < uVar38) &&
         (puVar25 = *(uint **)(*(long *)(lVar27 + 0x3f0) + (long)(int)uVar32 * 8),
         puVar25 != (uint *)0x0)) {
        uVar32 = *puVar25;
        uVar15 = 0;
        if ((uVar32 != 0) && (puVar25 != (uint *)(ulong)uVar32)) {
          puVar30 = (uint *)((long)puVar25 - (long)(ulong)uVar32);
          uVar15 = 0;
          if (*puVar30 != 0) {
            uVar32 = puVar30[1];
            if ((uVar32 != 0) && ((ulong)(ushort)puVar30[2] != 0)) {
              lVar35 = 0xc;
              if (*(char *)((long)puVar30 + 10) != '\0') {
                lVar35 = 0x1c;
              }
              lVar35 = (long)puVar30 + lVar35 + (ulong)(ushort)puVar30[2] * 8;
              if (lVar35 != 0) {
                uVar15 = 0;
                if ((ulong)uVar32 != 0) {
                  uVar15 = (uint)((ulong)((long)puVar25 - lVar35) / (ulong)uVar32);
                }
                if (*puVar30 <= uVar15) {
                  uVar15 = 0xffffffff;
                }
                if ((uVar15 < *(uint *)PTR_DAT_04bbbe48) &&
                   (uVar15 = (uint)*(ushort *)
                                    (*(long *)(PTR_DAT_04bbbe48 + 8) + (long)(int)uVar15 * 2),
                   uVar15 < 5)) goto LAB_012f4374;
              }
            }
            goto LAB_012f4370;
          }
        }
      }
      else {
LAB_012f4370:
        uVar15 = 0;
      }
LAB_012f4374:
      local_390 = (undefined *)CONCAT44(local_390._4_4_,uVar15);
      puVar20 = (ushort *)(lVar24 + (ulong)((uVar33 + 1) * 3 + uVar28) * 0xe);
      if (2 < uVar33 + 1 || 2 < uVar28) {
        puVar20 = (ushort *)puVar2;
      }
      puVar21 = puVar20 + (ulong)uVar22 * 3;
      if (1 < uVar22) {
        puVar21 = puVar20;
      }
      uVar32 = (uint)uVar39;
      if ((*puVar21 - uVar32 < uVar38) &&
         (puVar25 = *(uint **)(*(long *)(lVar27 + 0x3f0) + (long)(int)(*puVar21 - uVar32) * 8),
         puVar25 != (uint *)0x0)) {
        uVar8 = *puVar25;
        uVar39 = 0;
        if ((uVar8 != 0) && (puVar25 != (uint *)(ulong)uVar8)) {
          puVar30 = (uint *)((long)puVar25 - (long)(ulong)uVar8);
          uVar39 = 0;
          if (*puVar30 != 0) {
            uVar8 = puVar30[1];
            if ((uVar8 != 0) && ((ulong)(ushort)puVar30[2] != 0)) {
              lVar35 = 0xc;
              if (*(char *)((long)puVar30 + 10) != '\0') {
                lVar35 = 0x1c;
              }
              lVar35 = (long)puVar30 + lVar35 + (ulong)(ushort)puVar30[2] * 8;
              if (lVar35 != 0) {
                uVar6 = 0;
                if ((ulong)uVar8 != 0) {
                  uVar6 = (uint)((ulong)((long)puVar25 - lVar35) / (ulong)uVar8);
                }
                if (*puVar30 <= uVar6) {
                  uVar6 = 0xffffffff;
                }
                if ((uVar6 < *(uint *)PTR_DAT_04bbbe48) &&
                   (uVar39 = *(ushort *)(*(long *)(PTR_DAT_04bbbe48 + 8) + (long)(int)uVar6 * 2),
                   uVar39 < 5)) goto LAB_012f4454;
              }
            }
            goto LAB_012f4450;
          }
        }
      }
      else {
LAB_012f4450:
        uVar39 = 0;
      }
LAB_012f4454:
      uVar8 = *(int *)(param_1 + 0x68) + ~(int)sVar11;
      puVar20 = (ushort *)(lVar24 + (ulong)(iVar16 + uVar8) * 0xe);
      if (2 < uVar33 || 2 < uVar8) {
        puVar20 = (ushort *)puVar2;
      }
      puVar21 = puVar20 + (ulong)uVar22 * 3;
      if (1 < uVar22) {
        puVar21 = puVar20;
      }
      if ((*puVar21 - uVar32 < uVar38) &&
         (puVar25 = *(uint **)(*(long *)(lVar27 + 0x3f0) + (long)(int)(*puVar21 - uVar32) * 8),
         puVar25 != (uint *)0x0)) {
        uVar8 = *puVar25;
        uVar36 = 0;
        if ((uVar8 != 0) && (puVar25 != (uint *)(ulong)uVar8)) {
          puVar30 = (uint *)((long)puVar25 - (long)(ulong)uVar8);
          uVar36 = 0;
          if (*puVar30 != 0) {
            uVar8 = puVar30[1];
            if ((uVar8 != 0) && ((ulong)(ushort)puVar30[2] != 0)) {
              lVar35 = 0xc;
              if (*(char *)((long)puVar30 + 10) != '\0') {
                lVar35 = 0x1c;
              }
              lVar35 = (long)puVar30 + lVar35 + (ulong)(ushort)puVar30[2] * 8;
              if (lVar35 != 0) {
                uVar6 = 0;
                if ((ulong)uVar8 != 0) {
                  uVar6 = (uint)((ulong)((long)puVar25 - lVar35) / (ulong)uVar8);
                }
                if (*puVar30 <= uVar6) {
                  uVar6 = 0xffffffff;
                }
                if ((uVar6 < *(uint *)PTR_DAT_04bbbe48) &&
                   (uVar36 = *(ushort *)(*(long *)(PTR_DAT_04bbbe48 + 8) + (long)(int)uVar6 * 2),
                   uVar36 < 5)) goto LAB_012f4538;
              }
            }
            goto LAB_012f4534;
          }
        }
      }
      else {
LAB_012f4534:
        uVar36 = 0;
      }
LAB_012f4538:
      local_370 = (undefined *)CONCAT44(local_370._4_4_,uVar22);
      puVar20 = (ushort *)(lVar24 + (ulong)(iVar16 + uVar28 + 1) * 0xe);
      if (2 < uVar33 || 2 < uVar28 + 1) {
        puVar20 = (ushort *)puVar2;
      }
      puVar21 = puVar20 + (ulong)uVar22 * 3;
      if (1 < uVar22) {
        puVar21 = puVar20;
      }
      if ((*puVar21 - uVar32 < uVar38) &&
         (puVar25 = *(uint **)(*(long *)(lVar27 + 0x3f0) + (long)(int)(*puVar21 - uVar32) * 8),
         puVar25 != (uint *)0x0)) {
        uVar22 = *puVar25;
        local_7c = 0;
        if ((uVar22 != 0) && (puVar25 != (uint *)(ulong)uVar22)) {
          puVar30 = (uint *)((long)puVar25 - (long)(ulong)uVar22);
          local_7c = 0;
          if (*puVar30 != 0) {
            uVar22 = puVar30[1];
            if ((uVar22 != 0) && ((ulong)(ushort)puVar30[2] != 0)) {
              lVar24 = 0xc;
              if (*(char *)((long)puVar30 + 10) != '\0') {
                lVar24 = 0x1c;
              }
              lVar24 = (long)puVar30 + lVar24 + (ulong)(ushort)puVar30[2] * 8;
              if (lVar24 != 0) {
                uVar28 = 0;
                if ((ulong)uVar22 != 0) {
                  uVar28 = (uint)((ulong)((long)puVar25 - lVar24) / (ulong)uVar22);
                }
                if (*puVar30 <= uVar28) {
                  uVar28 = 0xffffffff;
                }
                if ((uVar28 < *(uint *)PTR_DAT_04bbbe48) &&
                   (uVar34 = *(ushort *)(*(long *)(PTR_DAT_04bbbe48 + 8) + (long)(int)uVar28 * 2),
                   local_7c = (uint)uVar34, uVar34 < 5)) goto LAB_012f4614;
              }
            }
            goto LAB_012f4610;
          }
        }
      }
      else {
LAB_012f4610:
        local_7c = 0;
      }
LAB_012f4614:
      uVar34 = uVar39;
      uVar37 = uVar36;
      if ((uVar15 == 4) || (uVar15 == 1)) {
        if (uVar39 == 1) {
          uVar34 = 1;
          goto LAB_012f4774;
        }
        if (uVar39 == 4) goto LAB_012f4774;
        if (uVar36 == 1) {
          uVar37 = 1;
          goto LAB_012f4774;
        }
        if ((uVar36 == 4) || ((local_7c != 1 && (local_7c != 4)))) goto LAB_012f4774;
      }
      else {
LAB_012f4774:
        if ((uVar15 != 1) && ((uVar15 != 4 && ((uVar34 == 4 || (uVar34 == 1)))))) {
          if (uVar36 == 1) {
            uVar37 = 1;
          }
          else {
            uVar37 = uVar36;
            if ((uVar36 != 4) && ((local_7c == 1 || (local_7c == 4)))) goto LAB_012f4864;
          }
        }
        if (uVar15 != 1) {
          if ((((uVar15 != 4) && ((uVar34 == 4 || (uVar34 == 1)))) &&
              ((uVar37 == 4 || (uVar37 == 1)))) && ((local_7c != 1 && (local_7c != 4))))
          goto LAB_012f4864;
          if (uVar15 != 4) goto LAB_012f4000;
        }
        if ((((uVar39 == 1) || (uVar39 == 4)) || ((uVar37 != 4 && (uVar37 != 1)))) ||
           ((local_7c == 1 || (local_7c == 4)))) goto LAB_012f4000;
      }
LAB_012f4864:
      FUN_012ffa84(&local_370);
      FUN_0137ca04(&local_370,lVar1);
      iVar17 = FUN_012ffbd4(&local_370,lVar1);
      local_390 = (undefined *)(param_1 + 0x78);
      lVar24 = param_1 + 0x88;
      local_380 = puVar4 + 0x10;
      iVar7 = *(int *)(param_1 + 0x80);
      local_374 = *(int *)(param_1 + 0x84);
      iVar16 = *(int *)(param_1 + 0x94) + 1;
      local_388 = lVar24;
      local_378 = iVar7;
      if (iVar16 == local_374) goto LAB_012f48b4;
      goto LAB_012f4910;
    }
    if ((0x11 < uVar33) || ((uVar28 >> (ulong)(uVar33 & 0x1f) & 1) == 0)) {
      uVar22 = 0x12;
      if ((int)uVar33 < 0x12) {
        uVar22 = uVar33 + 1;
      }
      goto LAB_012f3648;
    }
  }
  *(int *)(param_2 + 8) = iVar16;
  *(int *)(param_2 + 0xc) = local_398;
  *(uint *)(param_2 + 0x10) = uVar28;
  *(undefined1 *)(param_2 + 0x14) = uVar26;
  return;
  while( true ) {
    if (local_378 < *(int *)(lVar24 + 8)) {
      local_378 = local_378 + 1;
    }
    else {
      local_374 = local_374 + 1;
      local_378 = *(int *)(local_390 + 8);
    }
    if (iVar7 == local_378 && iVar16 == local_374) break;
LAB_012f4910:
    if (local_378 == *(int *)(param_1 + 0x68) || local_374 == *(int *)(param_1 + 0x6c)) {
      uVar31 = FUN_012ffd88(&local_370,&local_380);
      if ((uVar31 & 1) != 0) goto LAB_012f4000;
      lVar24 = local_388;
    }
  }
LAB_012f48b4:
  if ((uVar18 & 1) != 0 || iVar17 != 0) {
LAB_012f4000:
    iVar16 = FUN_012ffbd4(&local_1f8,lVar1);
    if (iVar16 == 0) {
      local_370 = (undefined *)(param_1 + 0x78);
      local_368 = param_1 + 0x88;
      local_360 = puVar4 + 0x10;
      iVar16 = *(int *)(param_1 + 0x94) + 1;
      iVar7 = *(int *)(param_1 + 0x80);
      local_354 = *(int *)(param_1 + 0x84);
      local_358 = iVar7;
      if (iVar16 != local_354) {
        do {
          uVar31 = FUN_012ffd88(&local_1f8,&local_360);
          if ((uVar31 & 1) != 0) {
            uVar22 = 6;
            local_394 = 1;
            goto LAB_012f3c00;
          }
          if (local_358 < *(int *)(local_368 + 8)) {
            local_358 = local_358 + 1;
          }
          else {
            local_354 = local_354 + 1;
            local_358 = *(int *)((long)local_370 + 8);
          }
        } while (iVar7 != local_358 || iVar16 != local_354);
      }
      if ((uVar18 & 1) == 0) {
        lVar24 = FUN_01300ee0(param_1 + 0x98,lVar1);
        puVar20 = (ushort *)FUN_01301f64(param_1 + 0x98,lVar1);
        local_370 = PTR_DAT_04bbc330 + 0x10;
        local_368 = 0;
        local_360 = (undefined *)CONCAT44(local_360._4_4_,(uint)(byte)puVar20[2]);
        lVar27 = *(long *)PTR_DAT_04bb27a8;
        uVar22 = (uint)*puVar20 - (uint)*(ushort *)(lVar27 + 0x408);
        if (uVar22 < *(uint *)(lVar27 + 1000)) {
          lVar27 = *(long *)(*(long *)(lVar27 + 0x3f0) + (long)(int)uVar22 * 8);
          if (lVar27 != 0) {
            local_368 = lVar27;
          }
        }
        if ((int)(uint)*(byte *)(lVar24 + 0xc) < DAT_051810a8) {
          local_390._0_4_ = (uint)*(byte *)(lVar24 + 0xc);
          iVar16 = FUN_01313184(&local_370);
          local_390 = (undefined *)CONCAT44(local_390._4_4_,iVar16);
          if ((iVar16 == 0) || (iVar16 == 1)) {
            if ((*(long *)(param_1 + 0x50) == 0) ||
               (lVar24 = FUN_01381bbc(*(long *)(param_1 + 0x50),lVar1),
               (*(byte *)(lVar24 + 0xd) >> 2 & 1) == 0)) {
              uVar22 = 1;
              if (bVar14) {
                uVar18 = FUN_009773f0(lVar1);
                local_394 = 1;
                if ((uVar18 & 1) == 0) {
                  local_394 = 2;
                }
              }
            }
            else {
              uVar22 = 0xb;
              local_394 = 1;
            }
            goto LAB_012f3c00;
          }
        }
      }
LAB_012f3bf4:
      iVar16 = 2;
    }
    local_394 = iVar16;
  }
  uVar22 = 1;
LAB_012f3c00:
  if (local_394 == 0) {
    sVar11 = *(short *)(param_1 + 0xd4);
    if (*(short *)(param_1 + 0xd8) <= *(short *)(param_1 + 0xd4)) {
      sVar11 = *(short *)(param_1 + 0xd8);
    }
    sVar12 = *(short *)(param_1 + 0xd6);
    if (*(short *)(param_1 + 0xda) <= *(short *)(param_1 + 0xd6)) {
      sVar12 = *(short *)(param_1 + 0xda);
    }
    uVar22 = *(int *)(param_1 + 0x6c) - (int)sVar12;
    uVar28 = *(int *)(param_1 + 0x68) - (int)sVar11;
    puVar20 = (ushort *)(param_1 + (ulong)(uVar22 * 3 + uVar28) * 0xe + 0xdc);
    if (2 < uVar22 || 2 < uVar28) {
      puVar20 = (ushort *)PTR_DAT_04bbc2f8;
    }
    puVar21 = puVar20 + (ulong)*(uint *)(param_1 + 0xa0) * 3;
    if (1 < *(uint *)(param_1 + 0xa0)) {
      puVar21 = puVar20;
    }
    lVar24 = *(long *)PTR_DAT_04bb27a8;
    uVar22 = (uint)*puVar21 - (uint)*(ushort *)(lVar24 + 0x408);
    if (((uVar22 < *(uint *)(lVar24 + 1000)) &&
        (puVar25 = *(uint **)(*(long *)(lVar24 + 0x3f0) + (long)(int)uVar22 * 8),
        puVar25 != (uint *)0x0)) &&
       (uVar22 = *puVar25, uVar22 != 0 && puVar25 != (uint *)(ulong)uVar22)) {
      puVar30 = (uint *)((long)puVar25 - (long)(ulong)uVar22);
      uVar22 = *puVar30;
      if (((uVar22 != 0) && (uVar18 = (ulong)puVar30[1], puVar30[1] != 0)) &&
         (uVar31 = (ulong)(ushort)puVar30[2], uVar31 != 0)) {
        lVar24 = 0xc;
        if (*(char *)((long)puVar30 + 10) != '\0') {
          lVar24 = 0x1c;
        }
        lVar24 = (long)puVar30 + lVar24 + uVar31 * 8;
        if (lVar24 != 0) {
          uVar28 = 0;
          if (uVar18 != 0) {
            uVar28 = (uint)((ulong)((long)puVar25 - lVar24) / uVar18);
          }
          if (uVar22 <= uVar28) {
            uVar28 = 0xffffffff;
          }
          if (((uVar28 < *(uint *)PTR_DAT_04bbbe48) &&
              (*(short *)(*(long *)(PTR_DAT_04bbbe48 + 8) + (long)(int)uVar28 * 2) == 1 &&
               uVar28 < *(uint *)PTR_DAT_04bbbe30)) &&
             (*(short *)(*(long *)(PTR_DAT_04bbbe30 + 8) + (long)(int)uVar28 * 2) == 2)) {
            *(undefined4 *)(param_2 + 8) = 0xe;
            return;
          }
        }
        lVar24 = 0xc;
        if (*(char *)((long)puVar30 + 10) != '\0') {
          lVar24 = 0x1c;
        }
        lVar24 = (long)puVar30 + lVar24 + uVar31 * 8;
        if (lVar24 != 0) {
          uVar28 = 0;
          if (uVar18 != 0) {
            uVar28 = (uint)((ulong)((long)puVar25 - lVar24) / uVar18);
          }
          if (uVar22 <= uVar28) {
            uVar28 = 0xffffffff;
          }
          if (uVar28 < *(uint *)PTR_DAT_04bbbe48) {
            uVar23 = 1;
            if (*(short *)(*(long *)(PTR_DAT_04bbbe48 + 8) + (long)(int)uVar28 * 2) != 1) {
              uVar23 = 2;
            }
            *(undefined4 *)(param_2 + 8) = uVar23;
            return;
          }
        }
      }
    }
    *(undefined4 *)(param_2 + 8) = 2;
  }
  else {
    *(int *)(param_2 + 0xc) = local_394;
    if (bVar13) {
      local_1f8._0_4_ = 1;
      uVar22 = (uint)local_1f8;
    }
    else if (0x11 < uVar22) {
      return;
    }
    *(uint *)(param_2 + 0x10) = *(uint *)(param_2 + 0x10) | 1 << (ulong)uVar22;
  }
  return;
}

