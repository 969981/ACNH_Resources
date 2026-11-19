
void FUN_039de650(long param_1,undefined8 param_2,long param_3,long param_4,long *param_5)

{
  undefined *puVar1;
  uint *puVar2;
  uint uVar3;
  ushort uVar4;
  char cVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  bool bVar9;
  bool bVar10;
  bool bVar11;
  bool bVar12;
  undefined8 uVar13;
  long lVar14;
  long *plVar15;
  ulong *puVar16;
  void *pvVar17;
  undefined8 *puVar18;
  char *__src;
  long *plVar19;
  byte bVar20;
  uint uVar21;
  uint uVar22;
  uint uVar23;
  long lVar24;
  ushort uVar25;
  int iVar26;
  int iVar27;
  uint uVar28;
  long lVar29;
  undefined4 uVar30;
  uint uVar31;
  uint uVar32;
  byte *pbVar33;
  undefined8 *puVar34;
  undefined8 *puVar35;
  long lVar36;
  long lVar37;
  int iVar38;
  undefined4 *__dest;
  char *__dest_00;
  ulong __size;
  void *pvVar39;
  void *__dest_01;
  ulong *puVar40;
  long lVar41;
  int iVar42;
  ulong uVar43;
  long *plVar44;
  float fVar45;
  float fVar46;
  float fVar47;
  float fVar48;
  float fVar49;
  float fVar50;
  float fVar51;
  float fVar52;
  undefined8 *local_570;
  undefined *local_560;
  void *local_558;
  undefined8 local_550;
  undefined8 uStack_548;
  undefined8 local_540;
  undefined8 uStack_538;
  undefined8 local_530;
  undefined8 uStack_528;
  undefined8 local_520;
  undefined8 uStack_518;
  undefined4 local_510 [2];
  undefined8 local_508;
  undefined8 uStack_500;
  undefined8 local_4f8;
  undefined8 uStack_4f0;
  undefined8 local_4e8;
  undefined8 uStack_4e0;
  undefined8 local_4d8;
  char *pcStack_4d0;
  undefined4 local_4c8;
  undefined8 local_4c0;
  byte *local_4b8;
  undefined4 local_4b0;
  undefined4 uStack_4ac;
  undefined2 uStack_4a8;
  char acStack_4a6 [2];
  undefined4 uStack_4a4;
  undefined2 local_4a0;
  undefined1 uStack_49e;
  undefined5 uStack_49d;
  undefined8 uStack_498;
  undefined8 local_490;
  undefined8 uStack_488;
  undefined8 local_480;
  undefined8 uStack_478;
  undefined4 local_470 [2];
  undefined8 local_468;
  undefined8 uStack_460;
  undefined8 local_458;
  undefined8 uStack_450;
  undefined8 local_448;
  undefined8 uStack_440;
  undefined8 local_438;
  char *pcStack_430;
  undefined4 local_428;
  
  puVar6 = PTR_DAT_04bb2028;
  local_4b0 = 0x20;
  local_490._0_4_ = (uint)(uint3)local_490;
  uVar3 = *(uint *)(param_3 + 0x14);
  uVar43 = (ulong)uVar3;
  uStack_4ac = s_lightmap_array_040cc5ff._0_4_;
  uStack_4a8 = s_lightmap_array_040cc5ff._4_2_;
  acStack_4a6 = (char  [2])s_lightmap_array_040cc5ff._6_2_;
  uStack_4a4 = s_lightmap_array_040cc5ff._8_4_;
  local_4a0 = s_lightmap_array_040cc5ff._12_2_;
  uVar30 = crc32b(0xffffffff,0x74,0x4c11db7);
  uStack_49e = 0;
  *(undefined8 *)(param_1 + 0x29e0) = 0;
  uVar30 = crc32b(uVar30,0x79,0x4c11db7);
  local_4c0 = puVar6 + 0x10;
  uVar30 = crc32b(uVar30,0x70,0x4c11db7);
  uVar21 = crc32b(uVar30,0x65,0x4c11db7);
  *(uint *)(param_1 + 0x29d8) = ~uVar21;
  plVar15 = (long *)(param_1 + 0x29a8);
  if (*(long *)(param_1 + 0x29b0) != 0) {
    plVar15 = (long *)(*(long *)(param_1 + 0x29b0) + 0x10);
  }
  *plVar15 = param_1 + 0x29d0;
  *(long *)(param_1 + 0x29b0) = param_1 + 0x29d0;
  __dest = *(undefined4 **)(param_1 + 0x29f0);
  *(int *)(param_1 + 0x29b8) = *(int *)(param_1 + 0x29b8) + 1;
  if (__dest != &uStack_4ac) {
    local_4b8 = (byte *)&uStack_4ac;
    (**(code **)(puVar6 + 0x28))(&local_4c0);
    lVar24 = 0;
    do {
      if (*(char *)((long)local_4b8 + lVar24) == '\0') goto LAB_039de7bc;
      if (*(char *)((long)local_4b8 + lVar24 + 1) == '\0') {
        lVar24 = lVar24 + 1;
        goto LAB_039de7bc;
      }
      if (*(char *)((long)local_4b8 + lVar24 + 2) == '\0') {
        lVar24 = lVar24 + 2;
        goto LAB_039de7bc;
      }
      lVar24 = lVar24 + 3;
    } while (lVar24 != 0x80001);
    lVar24 = 0;
LAB_039de7bc:
    iVar26 = (int)lVar24;
    if (*(int *)(param_1 + 0x29f8) <= (int)lVar24) {
      iVar26 = *(int *)(param_1 + 0x29f8) + -1;
    }
    memcpy(__dest,&uStack_4ac,(long)iVar26);
    *(undefined1 *)((long)__dest + (long)iVar26) = 0;
  }
  puVar1 = PTR_DAT_04bb2020;
  local_4c0 = PTR_DAT_04bb2020 + 0x10;
  local_4b8 = (byte *)0x40fbd14;
  uVar13 = 0;
  if (*(long *)PTR_DAT_04bd1140 != 0) {
    uVar13 = FUN_03954f70(*(long *)PTR_DAT_04bd1140,&local_4c0);
  }
  *(undefined8 *)(param_1 + 0x29c8) = uVar13;
  (**(code **)(local_4c0 + 0x18))(&local_4c0);
  uVar21 = (uint)*local_4b8;
  if (*local_4b8 != 0) {
    uVar22 = 0xffffffff;
    do {
      local_4b8 = local_4b8 + 1;
      uVar22 = crc32b(uVar22,uVar21,0x4c11db7);
      uVar21 = (uint)*local_4b8;
    } while (uVar21 != 0);
    uVar21 = ~uVar22;
  }
  *(uint *)(param_1 + 0x29bc) = uVar21;
  local_4c0 = puVar1 + 0x10;
  local_4b8 = (byte *)0x4083f96;
  plVar15 = (long *)(param_1 + 8);
  if (*(long *)(param_1 + 0x10) != 0) {
    plVar15 = (long *)(*(long *)(param_1 + 0x10) + 0x20);
  }
  *plVar15 = param_1 + 0x29a0;
  *(long *)(param_1 + 0x10) = param_1 + 0x29a0;
  uVar13 = 0;
  if (*(long *)PTR_DAT_04bd1140 != 0) {
    uVar13 = FUN_03954f70(*(long *)PTR_DAT_04bd1140,&local_4c0);
  }
  *(undefined8 *)(param_1 + 0x2a48) = uVar13;
  (**(code **)(local_4c0 + 0x18))(&local_4c0);
  uVar21 = (uint)*local_4b8;
  if (*local_4b8 != 0) {
    uVar22 = 0xffffffff;
    pbVar33 = local_4b8;
    do {
      pbVar33 = pbVar33 + 1;
      uVar22 = crc32b(uVar22,uVar21,0x4c11db7);
      uVar21 = (uint)*pbVar33;
    } while (uVar21 != 0);
    uVar21 = ~uVar22;
  }
  *(uint *)(param_1 + 0x2a3c) = uVar21;
  plVar15 = (long *)(param_1 + 8);
  if (*(long *)(param_1 + 0x10) != 0) {
    plVar15 = (long *)(*(long *)(param_1 + 0x10) + 0x20);
  }
  *plVar15 = param_1 + 0x2a20;
  *(long *)(param_1 + 0x10) = param_1 + 0x2a20;
  FUN_0390a734(param_1 + 0x228,1,1,0x80,0x20,1,1,0,0,1);
  iVar26 = *(int *)(param_1 + 0x268);
  *(char **)(param_1 + 0x2b8) = "lightmap_lut";
  uVar30 = *(undefined4 *)(param_1 + 0x264);
  lVar24 = *(long *)PTR_DAT_04bb2698;
  if (lVar24 == 0) {
    plVar15 = malloc(0x38);
  }
  else {
    plVar15 = param_5;
    if (param_5 == (long *)0x0) {
      lVar14 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
      plVar15 = (long *)(lVar24 + 8);
      if (lVar14 != 0) {
        plVar15 = (long *)(lVar14 + 0xa8);
      }
      plVar15 = (long *)*plVar15;
    }
    plVar15 = (long *)(**(code **)(*plVar15 + 0x30))(plVar15,0x38,8);
  }
  plVar15[6] = 0;
  plVar44 = plVar15 + 1;
  *plVar44 = 0;
  *(undefined2 *)((long)plVar15 + 0x2a) = 0;
  bVar20 = 0;
  plVar15[2] = 0;
  plVar15[3] = 0;
  plVar15[4] = 0;
  bVar11 = param_5 == (long *)0x0;
  puVar1 = PTR_DAT_04bb2cc8 + 0x10;
  *(undefined1 *)(plVar15 + 5) = 0;
  *plVar15 = (long)puVar1;
  plVar19 = param_5;
  if (param_5 == (long *)0x0) {
    lVar14 = *(long *)PTR_DAT_04bb2698;
    lVar24 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
    plVar19 = (long *)(lVar14 + 8);
    if (lVar24 != 0) {
      plVar19 = (long *)(lVar24 + 0xa8);
    }
    plVar19 = (long *)*plVar19;
    bVar20 = *(byte *)(plVar15 + 5);
  }
  plVar15[6] = 0;
  *plVar44 = 0;
  plVar15[2] = 0;
  *(byte *)(plVar15 + 5) = bVar20 & 0xfe;
  plVar15[3] = 0;
  plVar15[4] = 0;
  puVar1 = PTR_DAT_04bd0fa8;
  *(undefined2 *)((long)plVar15 + 0x2a) = 0;
  if (iVar26 == 0) {
    iVar26 = 0;
    *(undefined2 *)((long)plVar15 + 0x2a) = 8;
    lVar24 = 0;
LAB_039dead4:
    uVar30 = 0;
  }
  else {
    FUN_038f8590(*(undefined8 *)puVar1,plVar15,plVar19,iVar26,uVar30,8);
    lVar24 = plVar15[3];
    *(undefined2 *)((long)plVar15 + 0x2a) = 8;
    iVar26 = 0;
    if (plVar15[4] != 0) {
      iVar26 = (int)*plVar44 - *(int *)(plVar15[4] + 0x10);
    }
    if (lVar24 == 0) goto LAB_039dead4;
    uVar30 = *(undefined4 *)(lVar24 + 0x104);
  }
  uVar21 = 0;
  *(int *)(param_1 + 0x208) = iVar26;
  *(undefined4 *)(param_1 + 0x20c) = uVar30;
  *(long *)(param_1 + 0x210) = lVar24;
  puVar8 = PTR_DAT_04bb2a08;
  pvVar17 = (void *)((long)&local_550 + 4);
  *(long **)(param_1 + 0x218) = plVar15;
  puVar1 = PTR_PTR_04bb2238;
  *(undefined4 *)(param_1 + 0x220) = *(undefined4 *)(param_1 + 0x268);
  do {
    local_530._0_4_ = (uint)(uint3)local_530;
    local_550 = CONCAT44(local_550._4_4_,0x20);
    local_560 = puVar8 + 0x10;
    local_558 = pvVar17;
    (**(code **)(*(long *)puVar1 + 0x18))(puVar1);
    pvVar39 = *(void **)(puVar1 + 8);
    if (pvVar17 != pvVar39) {
      (**(code **)(*(long *)puVar1 + 0x18))(puVar1);
      lVar24 = 0;
      do {
        if (*(char *)(*(long *)(puVar1 + 8) + lVar24) == '\0') goto LAB_039dec2c;
        lVar14 = *(long *)(puVar1 + 8) + lVar24;
        if (*(char *)(lVar14 + 1) == '\0') {
          lVar24 = lVar24 + 1;
          goto LAB_039dec2c;
        }
        if (*(char *)(lVar14 + 2) == '\0') {
          lVar24 = lVar24 + 2;
          goto LAB_039dec2c;
        }
        lVar24 = lVar24 + 3;
      } while (lVar24 != 0x80001);
      lVar24 = 0;
LAB_039dec2c:
      iVar26 = (int)lVar24;
      if ((int)local_550 <= (int)lVar24) {
        iVar26 = (int)local_550 + -1;
      }
      memcpy(pvVar17,pvVar39,(long)iVar26);
      *(undefined1 *)((long)pvVar17 + (long)iVar26) = 0;
    }
    lVar24 = param_1 + 0x6e8 + ((long)((ulong)uVar21 << 0x20) >> 0x18);
    local_560 = puVar6 + 0x10;
    FUN_006e9454(&local_4c0,"name%d",uVar21);
    *(undefined8 *)(lVar24 + 0x10) = 0;
    (**(code **)(local_4c0 + 0x18))(&local_4c0);
    uVar22 = (uint)*local_4b8;
    if (*local_4b8 != 0) {
      uVar31 = 0xffffffff;
      pbVar33 = local_4b8;
      do {
        pbVar33 = pbVar33 + 1;
        uVar31 = crc32b(uVar31,uVar22,0x4c11db7);
        uVar22 = (uint)*pbVar33;
      } while (uVar22 != 0);
      uVar22 = ~uVar31;
    }
    *(uint *)(lVar24 + 8) = uVar22;
    plVar15 = (long *)(param_1 + 0x2a28);
    if (*(long *)(param_1 + 0x2a30) != 0) {
      plVar15 = (long *)(*(long *)(param_1 + 0x2a30) + 0x10);
    }
    *plVar15 = lVar24;
    *(long *)(param_1 + 0x2a30) = lVar24;
    __dest_01 = *(void **)(lVar24 + 0x20);
    *(int *)(param_1 + 0x2a38) = *(int *)(param_1 + 0x2a38) + 1;
    (**(code **)(local_560 + 0x18))(&local_560);
    pvVar39 = local_558;
    if (__dest_01 != local_558) {
      (**(code **)(local_560 + 0x18))(&local_560);
      lVar14 = 0;
      do {
        if (*(char *)((long)local_558 + lVar14) == '\0') goto LAB_039ded5c;
        if (*(char *)((long)local_558 + lVar14 + 1) == '\0') {
          lVar14 = lVar14 + 1;
          goto LAB_039ded5c;
        }
        if (*(char *)((long)local_558 + lVar14 + 2) == '\0') {
          lVar14 = lVar14 + 2;
          goto LAB_039ded5c;
        }
        lVar14 = lVar14 + 3;
      } while (lVar14 != 0x80001);
      lVar14 = 0;
LAB_039ded5c:
      iVar26 = (int)lVar14;
      if (*(int *)(lVar24 + 0x28) <= (int)lVar14) {
        iVar26 = *(int *)(lVar24 + 0x28) + -1;
      }
      memcpy(__dest_01,pvVar39,(long)iVar26);
      *(undefined1 *)((long)__dest_01 + (long)iVar26) = 0;
    }
    lVar14 = param_1 + 0x6e8 + (long)(int)uVar21 * 0x100;
    FUN_006e9454(&local_4c0,"intensity%d",uVar21);
    *(undefined8 *)(lVar14 + 0x60) = 0;
    (**(code **)(local_4c0 + 0x18))(&local_4c0);
    uVar22 = (uint)*local_4b8;
    if (*local_4b8 != 0) {
      uVar31 = 0xffffffff;
      pbVar33 = local_4b8;
      do {
        pbVar33 = pbVar33 + 1;
        uVar31 = crc32b(uVar31,uVar22,0x4c11db7);
        uVar22 = (uint)*pbVar33;
      } while (uVar22 != 0);
      uVar22 = ~uVar31;
    }
    *(uint *)(lVar14 + 0x58) = uVar22;
    plVar15 = (long *)(param_1 + 0x2a28);
    if (*(long *)(param_1 + 0x2a30) != 0) {
      plVar15 = (long *)(*(long *)(param_1 + 0x2a30) + 0x10);
    }
    *plVar15 = lVar14 + 0x50;
    *(long *)(param_1 + 0x2a30) = lVar14 + 0x50;
    *(int *)(param_1 + 0x2a38) = *(int *)(param_1 + 0x2a38) + 1;
    if (uVar21 == 2) {
      __dest_00 = *(char **)(lVar24 + 0x20);
      __src = "Hemisphere";
      if (__dest_00 != "Hemisphere") {
        iVar26 = *(int *)(lVar24 + 0x28);
        iVar27 = iVar26 + -1;
        bVar9 = SBORROW4(iVar26,10);
        bVar10 = iVar26 + -10 < 0;
        bVar12 = iVar26 == 10;
        iVar26 = 10;
LAB_039deb74:
        if (bVar12 || bVar10 != bVar9) {
          iVar26 = iVar27;
        }
        memcpy(__dest_00,__src,(long)iVar26);
        __dest_00[iVar26] = '\0';
      }
    }
    else if (uVar21 == 1) {
      __dest_00 = *(char **)(lVar24 + 0x20);
      __src = "Half-Lambert";
      if (__dest_00 != "Half-Lambert") {
        iVar26 = *(int *)(lVar24 + 0x28);
        iVar27 = iVar26 + -1;
        bVar9 = SBORROW4(iVar26,0xc);
        bVar10 = iVar26 + -0xc < 0;
        bVar12 = iVar26 == 0xc;
        iVar26 = 0xc;
        goto LAB_039deb74;
      }
    }
    else if (uVar21 == 0) {
      __dest_00 = *(char **)(lVar24 + 0x20);
      __src = "Lambert";
      if (__dest_00 != "Lambert") {
        iVar26 = *(int *)(lVar24 + 0x28);
        iVar27 = iVar26 + -1;
        bVar9 = SBORROW4(iVar26,7);
        bVar10 = iVar26 + -7 < 0;
        bVar12 = iVar26 == 7;
        iVar26 = 7;
        goto LAB_039deb74;
      }
    }
    else {
      FUN_038d1270(lVar24 + 0x18,"UserData%d");
    }
    puVar7 = PTR_DAT_04bb2698;
    uVar21 = uVar21 + 1;
  } while (uVar21 != 0x20);
  if (0 < (int)uVar3) {
    __size = uVar43 * 0x910 | 8;
    lVar24 = *(long *)PTR_DAT_04bb2698;
    if (lVar24 == 0) {
      puVar16 = malloc(__size);
joined_r0x039def30:
      if (puVar16 != (ulong *)0x0) {
        lVar24 = uVar43 * 0x910;
        *puVar16 = uVar43;
        puVar40 = puVar16 + 1;
        do {
          FUN_039e1510(puVar40);
          puVar40 = puVar40 + 0x122;
          lVar24 = lVar24 + -0x910;
        } while (lVar24 != 0);
        *(uint *)(param_1 + 0x1d0) = uVar3;
        *(ulong **)(param_1 + 0x1d8) = puVar16 + 1;
      }
      lVar24 = *(long *)puVar7;
      if (lVar24 == 0) goto LAB_039dfb5c;
      if (param_5 == (long *)0x0) {
LAB_039def90:
        lVar14 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
        plVar15 = (long *)(lVar24 + 8);
        if (lVar14 != 0) {
          plVar15 = (long *)(lVar14 + 0xa8);
        }
        plVar15 = (long *)*plVar15;
        bVar11 = true;
        if (plVar15 == (long *)0x0) goto LAB_039defe8;
      }
      else {
        bVar11 = false;
        plVar15 = param_5;
      }
      pvVar17 = (void *)(**(code **)(*plVar15 + 0x30))(plVar15,(long)(int)uVar3 << 4,8);
    }
    else {
      plVar15 = param_5;
      if (param_5 != (long *)0x0) {
LAB_039def04:
        puVar16 = (ulong *)(**(code **)(*plVar15 + 0x30))(plVar15,__size,8);
        goto joined_r0x039def30;
      }
      lVar14 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
      plVar15 = (long *)(lVar24 + 8);
      if (lVar14 != 0) {
        plVar15 = (long *)(lVar14 + 0xa8);
      }
      plVar15 = (long *)*plVar15;
      if (plVar15 != (long *)0x0) goto LAB_039def04;
      lVar24 = *(long *)puVar7;
      if (lVar24 != 0) goto LAB_039def90;
LAB_039dfb5c:
      pvVar17 = malloc((long)(int)uVar3 << 4);
    }
    if (pvVar17 != (void *)0x0) {
      *(void **)(param_1 + 0x1e8) = pvVar17;
      *(undefined4 *)(param_1 + 0x1e0) = 0;
      *(uint *)(param_1 + 0x1e4) = uVar3 << 1;
    }
  }
LAB_039defe8:
  iVar26 = *(int *)(param_1 + 0x1d0);
  if (iVar26 != 0) {
    lVar14 = *(long *)(param_1 + 0x1d8);
    iVar27 = 0;
    lVar24 = 0;
    if (param_4 != 0) {
      lVar24 = param_4 + 0x38;
    }
    do {
      lVar41 = lVar14 + (long)iVar27 * 0x910;
      FUN_039e1fc0(lVar41,iVar27,param_1,param_2,*(undefined4 *)(param_3 + 8),param_5);
      uVar21 = *(uint *)(lVar41 + 0x158);
      *(long *)(lVar41 + 0x120) = param_4;
      if (uVar21 != 0) {
        lVar29 = *(long *)(lVar41 + 0x160);
        uVar22 = 0;
        do {
          lVar37 = lVar29 + ((long)((ulong)uVar22 << 0x20) >> 0x18);
          lVar36 = *(long *)(lVar37 + 0xa0);
          if (lVar36 != lVar24) {
            if (lVar36 != 0) {
              plVar15 = (long *)((long)*(int *)(lVar36 + 0x4c) + lVar37 + 0x30);
              if (*plVar15 != 0) {
                *(long *)(*plVar15 + 8) = plVar15[1];
              }
              if ((long *)plVar15[1] != (long *)0x0) {
                *(long *)plVar15[1] = *plVar15;
              }
              *plVar15 = 0;
              plVar15[1] = 0;
              *(int *)(lVar36 + 0x48) = *(int *)(lVar36 + 0x48) + -1;
            }
            *(long *)(lVar37 + 0xa0) = lVar24;
            if (param_4 != 0) {
              plVar15 = (long *)((long)*(int *)(param_4 + 0x84) + lVar37 + 0x30);
              lVar37 = *(long *)(param_4 + 0x70);
              *(long **)(param_4 + 0x70) = plVar15;
              *plVar15 = lVar37;
              plVar15[1] = param_4 + 0x70;
              if (lVar37 != 0) {
                *(long **)(lVar37 + 8) = plVar15;
              }
              *(int *)(param_4 + 0x80) = *(int *)(param_4 + 0x80) + 1;
            }
          }
          uVar22 = uVar22 + 1;
        } while (uVar21 != uVar22);
      }
      lVar29 = lVar14 + (long)iVar27 * 0x910;
      lVar37 = *(long *)(lVar29 + 0x820);
      if (lVar37 != lVar24) {
        if (lVar37 != 0) {
          plVar15 = (long *)((long)*(int *)(lVar37 + 0x4c) + lVar29 + 0x7b0);
          if (*plVar15 != 0) {
            *(long *)(*plVar15 + 8) = plVar15[1];
          }
          if ((long *)plVar15[1] != (long *)0x0) {
            *(long *)plVar15[1] = *plVar15;
          }
          *plVar15 = 0;
          plVar15[1] = 0;
          *(int *)(lVar37 + 0x48) = *(int *)(lVar37 + 0x48) + -1;
        }
        *(long *)(lVar29 + 0x820) = lVar24;
        if (param_4 != 0) {
          plVar15 = (long *)((long)*(int *)(param_4 + 0x84) + lVar29 + 0x7b0);
          lVar29 = *(long *)(param_4 + 0x70);
          *(long **)(param_4 + 0x70) = plVar15;
          *plVar15 = lVar29;
          plVar15[1] = param_4 + 0x70;
          if (lVar29 != 0) {
            *(long **)(lVar29 + 8) = plVar15;
          }
          *(int *)(param_4 + 0x80) = *(int *)(param_4 + 0x80) + 1;
        }
      }
      FUN_006e9454(&local_4c0,&DAT_040c7be9,iVar27);
      uVar13 = 0;
      if (*(long *)PTR_DAT_04bd1140 != 0) {
        uVar13 = FUN_03954f70(*(long *)PTR_DAT_04bd1140,&local_4c0);
      }
      *(undefined8 *)(lVar41 + 0x80) = uVar13;
      (**(code **)(local_4c0 + 0x18))(&local_4c0);
      uVar21 = (uint)*local_4b8;
      if (*local_4b8 != 0) {
        uVar22 = 0xffffffff;
        pbVar33 = local_4b8;
        do {
          pbVar33 = pbVar33 + 1;
          uVar22 = crc32b(uVar22,uVar21,0x4c11db7);
          uVar21 = (uint)*pbVar33;
        } while (uVar21 != 0);
        uVar21 = ~uVar22;
      }
      *(uint *)(lVar41 + 0x68) = uVar21;
      plVar15 = (long *)(param_1 + 0x18);
      if (*(long *)(param_1 + 0x20) != 0) {
        plVar15 = (long *)(*(long *)(param_1 + 0x20) + 0x30);
      }
      *plVar15 = lVar41 + 0x40;
      *(long *)(param_1 + 0x20) = lVar41 + 0x40;
      *(long *)(lVar41 + 0x78) = param_1;
      lVar29 = *(long *)(param_1 + 0x1f0);
      plVar15 = (long *)(*(int *)(param_1 + 0x204) + lVar41);
      *(long **)(param_1 + 0x1f0) = plVar15;
      *plVar15 = lVar29;
      plVar15[1] = param_1 + 0x1f0;
      if (lVar29 != 0) {
        *(long **)(lVar29 + 8) = plVar15;
      }
      iVar27 = iVar27 + 1;
      *(int *)(param_1 + 0x200) = *(int *)(param_1 + 0x200) + 1;
    } while (iVar26 != iVar27);
  }
  local_470[0] = 0xffffffff;
  local_428 = 0x10000;
  local_480 = 0;
  uStack_478 = 0;
  local_490 = 0;
  uStack_488 = 0;
  local_4a0 = 0;
  uStack_49e = 0;
  uStack_49d = 0;
  uStack_498 = 0;
  local_4b0 = 0;
  uStack_4ac = 0;
  uStack_4a8 = 0;
  acStack_4a6[0] = '\0';
  acStack_4a6[1] = '\0';
  uStack_4a4 = 0;
  local_4c0 = (undefined *)0x0;
  local_4b8 = (byte *)0x0;
  local_468 = 0;
  uStack_460 = 0;
  local_458 = 0;
  uStack_450 = 0;
  local_448 = 0;
  uStack_440 = 0;
  local_438 = 0;
  pcStack_430 = "agl::TextureData";
  FUN_0390a734(&local_4c0,1,0x2b,*(undefined4 *)(param_3 + 0xc),*(undefined4 *)(param_3 + 0xc),1,1,0
               ,0,1);
  puVar6 = PTR_DAT_04bb2698;
  iVar26 = (uint)local_480;
  uVar43 = local_480 & 0xffffffff;
  uVar30 = uStack_488._4_4_;
  lVar24 = *(long *)PTR_DAT_04bb2698;
  if (lVar24 == 0) {
    plVar15 = malloc(0x38);
  }
  else {
    plVar15 = param_5;
    if (bVar11) {
      lVar14 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
      plVar15 = (long *)(lVar24 + 8);
      if (lVar14 != 0) {
        plVar15 = (long *)(lVar14 + 0xa8);
      }
      plVar15 = (long *)*plVar15;
    }
    plVar15 = (long *)(**(code **)(*plVar15 + 0x30))(plVar15,0x38,8);
  }
  plVar15[6] = 0;
  plVar44 = plVar15 + 1;
  *plVar44 = 0;
  *(undefined2 *)((long)plVar15 + 0x2a) = 0;
  bVar20 = 0;
  plVar15[2] = 0;
  plVar15[3] = 0;
  plVar15[4] = 0;
  *(undefined1 *)(plVar15 + 5) = 0;
  *plVar15 = (long)(PTR_DAT_04bb2cc8 + 0x10);
  plVar19 = param_5;
  if (bVar11) {
    lVar14 = *(long *)puVar6;
    lVar24 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
    plVar19 = (long *)(lVar14 + 8);
    if (lVar24 != 0) {
      plVar19 = (long *)(lVar24 + 0xa8);
    }
    plVar19 = (long *)*plVar19;
    bVar20 = *(byte *)(plVar15 + 5);
  }
  plVar15[6] = 0;
  *(undefined2 *)((long)plVar15 + 0x2a) = 0;
  *(byte *)(plVar15 + 5) = bVar20 & 0xfe;
  *plVar44 = 0;
  plVar15[2] = 0;
  plVar15[3] = 0;
  plVar15[4] = 0;
  if (iVar26 == 0) {
    iVar26 = 0;
    *(undefined2 *)((long)plVar15 + 0x2a) = 8;
    lVar24 = 0;
LAB_039df434:
    uVar30 = 0;
  }
  else {
    FUN_038f8590(*(undefined8 *)PTR_DAT_04bd0fa8,plVar15,plVar19,uVar43,uVar30,8);
    lVar24 = plVar15[3];
    *(undefined2 *)((long)plVar15 + 0x2a) = 8;
    iVar26 = 0;
    if (plVar15[4] != 0) {
      iVar26 = (int)*plVar44 - *(int *)(plVar15[4] + 0x10);
    }
    if (lVar24 == 0) goto LAB_039df434;
    uVar30 = *(undefined4 *)(lVar24 + 0x104);
  }
  *(long *)(param_1 + 0x3b0) = lVar24;
  *(int *)(param_1 + 0x3a8) = iVar26;
  *(undefined4 *)(param_1 + 0x3ac) = uVar30;
  *(long **)(param_1 + 0x3b8) = plVar15;
  *(uint *)(param_1 + 0x3c0) = (uint)local_480;
  FUN_038fd0e0(local_470);
  local_470[0] = 0xffffffff;
  local_428 = 0x10000;
  local_480 = 0;
  uStack_478 = 0;
  local_490 = 0;
  uStack_488 = 0;
  local_438 = 0;
  pcStack_430 = "agl::TextureData";
  local_4a0 = 0;
  uStack_49e = 0;
  uStack_49d = 0;
  uStack_498 = 0;
  local_4b0 = 0;
  uStack_4ac = 0;
  uStack_4a8 = 0;
  acStack_4a6[0] = '\0';
  acStack_4a6[1] = '\0';
  uStack_4a4 = 0;
  local_4c0 = (undefined *)0x0;
  local_4b8 = (byte *)0x0;
  local_468 = 0;
  uStack_460 = 0;
  local_458 = 0;
  uStack_450 = 0;
  local_448 = 0;
  uStack_440 = 0;
  FUN_0390a734(&local_4c0,1,0x2b,*(undefined4 *)(param_3 + 0x10),*(undefined4 *)(param_3 + 0x10),1,1
               ,0,0,1);
  iVar26 = (uint)local_480;
  uVar43 = local_480 & 0xffffffff;
  uVar30 = uStack_488._4_4_;
  lVar24 = *(long *)puVar6;
  if (lVar24 == 0) {
    plVar15 = malloc(0x38);
  }
  else {
    plVar15 = param_5;
    if (bVar11) {
      lVar14 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
      plVar15 = (long *)(lVar24 + 8);
      if (lVar14 != 0) {
        plVar15 = (long *)(lVar14 + 0xa8);
      }
      plVar15 = (long *)*plVar15;
    }
    plVar15 = (long *)(**(code **)(*plVar15 + 0x30))(plVar15,0x38,8);
  }
  plVar15[6] = 0;
  plVar44 = plVar15 + 1;
  *plVar44 = 0;
  *(undefined2 *)((long)plVar15 + 0x2a) = 0;
  bVar20 = 0;
  plVar15[2] = 0;
  plVar15[3] = 0;
  plVar15[4] = 0;
  *(undefined1 *)(plVar15 + 5) = 0;
  *plVar15 = (long)(PTR_DAT_04bb2cc8 + 0x10);
  plVar19 = param_5;
  if (bVar11) {
    lVar14 = *(long *)puVar6;
    lVar24 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
    plVar19 = (long *)(lVar14 + 8);
    if (lVar24 != 0) {
      plVar19 = (long *)(lVar24 + 0xa8);
    }
    plVar19 = (long *)*plVar19;
    bVar20 = *(byte *)(plVar15 + 5);
  }
  plVar15[6] = 0;
  *(undefined2 *)((long)plVar15 + 0x2a) = 0;
  *(byte *)(plVar15 + 5) = bVar20 & 0xfe;
  *plVar44 = 0;
  plVar15[2] = 0;
  plVar15[3] = 0;
  plVar15[4] = 0;
  if (iVar26 == 0) {
    iVar26 = 0;
    *(undefined2 *)((long)plVar15 + 0x2a) = 8;
    lVar24 = 0;
LAB_039df610:
    uVar30 = 0;
  }
  else {
    FUN_038f8590(*(undefined8 *)PTR_DAT_04bd0fa8,plVar15,plVar19,uVar43,uVar30,8);
    lVar24 = plVar15[3];
    *(undefined2 *)((long)plVar15 + 0x2a) = 8;
    iVar26 = 0;
    if (plVar15[4] != 0) {
      iVar26 = (int)*plVar44 - *(int *)(plVar15[4] + 0x10);
    }
    if (lVar24 == 0) goto LAB_039df610;
    uVar30 = *(undefined4 *)(lVar24 + 0x104);
  }
  *(long *)(param_1 + 0x550) = lVar24;
  *(int *)(param_1 + 0x548) = iVar26;
  *(undefined4 *)(param_1 + 0x54c) = uVar30;
  *(long **)(param_1 + 0x558) = plVar15;
  *(uint *)(param_1 + 0x560) = (uint)local_480;
  FUN_038fd0e0(local_470);
  fVar49 = *(float *)(param_1 + 0x2a50);
  lVar24 = *(long *)puVar6;
  iVar26 = *(int *)(param_3 + 0xc);
  iVar27 = *(int *)(param_3 + 0x10);
  uVar43 = (ulong)(uint)(iVar26 * iVar26 * 8);
  if (lVar24 == 0) {
    local_570 = malloc(uVar43);
  }
  else {
    plVar15 = param_5;
    if (bVar11) {
      lVar14 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
      plVar15 = (long *)(lVar24 + 8);
      if (lVar14 != 0) {
        plVar15 = (long *)(lVar14 + 0xa8);
      }
      plVar15 = (long *)*plVar15;
      if (plVar15 == (long *)0x0) {
        local_570 = (undefined8 *)0x0;
        goto LAB_039df6a8;
      }
    }
    local_570 = (undefined8 *)(**(code **)(*plVar15 + 0x30))(plVar15,uVar43,0x10);
  }
LAB_039df6a8:
  if (0 < iVar26) {
    iVar42 = 0;
    fVar49 = fVar49 / (float)iVar26 + 1.0;
    fVar51 = 2.0 / ((float)iVar26 + -1.0);
    puVar18 = local_570;
    do {
      iVar38 = 0;
      fVar52 = (fVar51 * (float)iVar42 + -1.0) * -fVar49;
      puVar34 = puVar18;
      do {
        fVar50 = 0.0;
        fVar47 = fVar49 * (fVar51 * (float)iVar38 + -1.0);
        fVar45 = 0.0;
        fVar48 = fVar52 * fVar52 + fVar47 * fVar47;
        fVar46 = 1.0 - fVar48;
        if ((0.0 <= fVar46) && (fVar45 = SQRT(fVar46), NAN(fVar45))) {
          fVar45 = sqrtf(fVar46);
        }
        fVar46 = SQRT(fVar48 + fVar45 * fVar45);
        if (fVar46 <= 0.0) {
          fVar46 = fVar52;
        }
        else {
          fVar46 = 1.0 / fVar46;
          fVar47 = fVar47 * fVar46;
          fVar45 = fVar45 * fVar46;
          fVar50 = fVar46 * 0.0;
          fVar46 = fVar52 * fVar46;
        }
        if ((*(ushort *)(param_1 + 0x2a70) & 0x80) != 0) {
          fVar45 = fVar45 * 0.5 + 0.5;
          fVar46 = fVar46 * 0.5 + 0.5;
          fVar47 = fVar47 * 0.5 + 0.5;
        }
        uVar21 = (uint)fVar47 & 0x7f800000;
        uVar22 = (uint)fVar47 >> 0x10 & 0x8000;
        if (uVar21 == 0x7f800000) {
          if (((uint)fVar47 & 0x7fffff) == 0) {
            uVar23 = uVar22 | 0x7c00;
          }
          else {
            uVar23 = (uint)fVar47 >> 0x10 | 0x7fff;
            if (((uint)fVar47 & 0x7fffff) >> 0x16 == 0) {
              uVar23 = uVar22 | 0x7dff;
            }
          }
        }
        else {
          uVar31 = uVar22;
          if (0x38000000 < uVar21) {
            uVar31 = (uVar21 >> 0xd) + 0x4000 & 0x7c00 | (uint)fVar47 >> 0xd & 0x3ff | uVar22;
          }
          uVar23 = uVar22 | 0x7c00;
          if (uVar21 < 0x47000001) {
            uVar23 = uVar31;
          }
        }
        uVar21 = (uint)fVar46 & 0x7f800000;
        uVar22 = (uint)fVar46 >> 0x10 & 0x8000;
        if (uVar21 == 0x7f800000) {
          if (((uint)fVar46 & 0x7fffff) == 0) {
            uVar28 = uVar22 | 0x7c00;
          }
          else {
            uVar28 = (uint)fVar46 >> 0x10 | 0x7fff;
            if (((uint)fVar46 & 0x7fffff) >> 0x16 == 0) {
              uVar28 = uVar22 | 0x7dff;
            }
          }
        }
        else {
          uVar31 = uVar22;
          if (0x38000000 < uVar21) {
            uVar31 = (uVar21 >> 0xd) + 0x4000 & 0x7c00 | (uint)fVar46 >> 0xd & 0x3ff | uVar22;
          }
          uVar28 = uVar22 | 0x7c00;
          if (uVar21 < 0x47000001) {
            uVar28 = uVar31;
          }
        }
        uVar21 = (uint)fVar45 & 0x7f800000;
        uVar22 = (uint)fVar45 >> 0x10 & 0x8000;
        if (uVar21 == 0x7f800000) {
          if (((uint)fVar45 & 0x7fffff) == 0) {
            uVar32 = uVar22 | 0x7c00;
          }
          else {
            uVar32 = (uint)fVar45 >> 0x10 | 0x7fff;
            if (((uint)fVar45 & 0x7fffff) >> 0x16 == 0) {
              uVar32 = uVar22 | 0x7dff;
            }
          }
        }
        else {
          uVar31 = uVar22;
          if (0x38000000 < uVar21) {
            uVar31 = (uVar21 >> 0xd) + 0x4000 & 0x7c00 | (uint)fVar45 >> 0xd & 0x3ff | uVar22;
          }
          uVar32 = uVar22 | 0x7c00;
          if (uVar21 < 0x47000001) {
            uVar32 = uVar31;
          }
        }
        uVar21 = (uint)fVar50 & 0x7f800000;
        uVar22 = (uint)fVar50 >> 0x10 & 0x8000;
        if (uVar21 == 0x7f800000) {
          if (((uint)fVar50 & 0x7fffff) == 0) goto LAB_039df724;
          if (((uint)fVar50 & 0x7fffff) >> 0x16 == 0) {
            uVar22 = uVar22 | 0x7dff;
          }
          else {
            uVar22 = (uint)fVar50 >> 0x10 | 0x7fff;
          }
        }
        else if (uVar21 < 0x47000001) {
          if (0x38000000 < uVar21) {
            uVar22 = (uVar21 >> 0xd) + 0x4000 & 0x7c00 | (uint)fVar50 >> 0xd & 0x3ff | uVar22;
          }
        }
        else {
LAB_039df724:
          uVar22 = uVar22 | 0x7c00;
        }
        iVar38 = iVar38 + 1;
        puVar18 = puVar34 + 1;
        *puVar34 = CONCAT44(uVar32 | uVar22 << 0x10,uVar23 | uVar28 << 0x10);
        puVar34 = puVar18;
      } while (iVar26 != iVar38);
      iVar42 = iVar42 + 1;
    } while (iVar42 != iVar26);
  }
  FUN_0390a734(param_1 + 0x3c8,1,0x2b,iVar26,iVar26,1,1,0,0,1);
  bVar10 = false;
  local_4c0 = *(undefined **)(param_1 + 0x3a8);
  *(undefined4 *)(param_1 + 0x3c8) = *(undefined4 *)(param_1 + 0x3a8);
  local_4b8 = *(byte **)(param_1 + 0x3b0);
  uVar13 = *(undefined8 *)(param_1 + 0x3b8);
  *(undefined4 *)(param_1 + 0x3cc) = *(undefined4 *)(param_1 + 0x3ac);
  *(byte **)(param_1 + 0x3d0) = local_4b8;
  *(undefined8 *)(param_1 + 0x3d8) = uVar13;
  if ((*(byte *)(param_1 + 0x416) >> 1 & 1) != 0) {
    bVar10 = 0x11 < *(ushort *)(param_1 + 0x460) && *(ushort *)(param_1 + 0x460) - 0x59 < 0xffffffd6
    ;
  }
  local_4b0 = (undefined4)uVar13;
  uStack_4ac = (undefined4)((ulong)uVar13 >> 0x20);
  uVar13 = FUN_038fd3e0(param_1 + 0x418,&local_4c0,(ushort *)(param_1 + 0x3f8),0,
                        *(undefined8 *)(param_1 + 0x458),bVar10,1);
  *(char **)(param_1 + 0x458) = "lightmap_sphere_normal";
  FUN_038faf2c(uVar13,param_1 + 0x3c8,local_570,0);
  *(undefined4 *)(param_1 + 0x468) = *(undefined4 *)(param_1 + 0x3c8);
  *(undefined8 *)(param_1 + 0x488) = *(undefined8 *)(param_1 + 1000);
  *(undefined4 *)(param_1 + 0x46c) = *(undefined4 *)(param_1 + 0x3cc);
  *(undefined8 *)(param_1 + 0x490) = *(undefined8 *)(param_1 + 0x3f0);
  *(undefined8 *)(param_1 + 0x470) = *(undefined8 *)(param_1 + 0x3d0);
  *(undefined8 *)(param_1 + 0x478) = *(undefined8 *)(param_1 + 0x3d8);
  *(undefined4 *)(param_1 + 0x480) = *(undefined4 *)(param_1 + 0x3e0);
  *(undefined4 *)(param_1 + 0x484) = *(undefined4 *)(param_1 + 0x3e4);
  *(undefined8 *)(param_1 + 0x4af) = *(undefined8 *)(param_1 + 0x40f);
  *(undefined8 *)(param_1 + 0x4a8) = *(undefined8 *)(param_1 + 0x408);
  *(undefined8 *)(param_1 + 0x4a0) = *(undefined8 *)(param_1 + 0x400);
  *(undefined8 *)(param_1 + 0x498) = *(undefined8 *)(param_1 + 0x3f8);
  FUN_038fd1e0(param_1 + 0x4b8);
  FUN_038fd2f0(param_1 + 0x4b8,param_1 + 0x418);
  *(undefined8 *)(param_1 + 0x4f8) = *(undefined8 *)(param_1 + 0x458);
  *(undefined4 *)(param_1 + 0x500) = *(undefined4 *)(param_1 + 0x460);
  puVar2 = (uint *)(param_1 + 0x53c);
  do {
    cVar5 = '\x01';
    bVar10 = (bool)ExclusiveMonitorPass(puVar2,0x10);
    if (bVar10) {
      *puVar2 = *puVar2 | 1;
      cVar5 = ExclusiveMonitorsStatus();
    }
  } while (cVar5 != '\0');
  *(undefined2 *)(param_1 + 0x52c) = 0;
  *(undefined1 *)(param_1 + 0x52e) = 0;
  do {
    cVar5 = '\x01';
    bVar10 = (bool)ExclusiveMonitorPass(puVar2,0x10);
    if (bVar10) {
      *puVar2 = *puVar2 & 0xfffffffb | 4;
      cVar5 = ExclusiveMonitorsStatus();
    }
  } while (cVar5 != '\0');
  if (local_570 != (undefined8 *)0x0) {
    if (*(long *)PTR_DAT_04bb2698 == 0) {
      free(local_570);
    }
    else {
      plVar15 = (long *)FUN_038cb610(*(long *)PTR_DAT_04bb2698,local_570);
      if (plVar15 != (long *)0x0) {
        (**(code **)(*plVar15 + 0x38))(plVar15,local_570);
      }
    }
  }
  iVar26 = iVar27;
  if (iVar27 < 0) {
    iVar26 = iVar27 + 1;
  }
  uVar43 = (ulong)(uint)(iVar27 * iVar27 * 8);
  lVar24 = *(long *)PTR_DAT_04bb2698;
  if (lVar24 == 0) {
    puVar18 = malloc(uVar43);
  }
  else {
    plVar15 = param_5;
    if (bVar11) {
      lVar14 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
      plVar15 = (long *)(lVar24 + 8);
      if (lVar14 != 0) {
        plVar15 = (long *)(lVar14 + 0xa8);
      }
      plVar15 = (long *)*plVar15;
      if (plVar15 == (long *)0x0) {
        puVar18 = (undefined8 *)0x0;
        goto LAB_039dfbf0;
      }
    }
    puVar18 = (undefined8 *)(**(code **)(*plVar15 + 0x30))(plVar15,uVar43,0x10);
  }
LAB_039dfbf0:
  if (0 < iVar27) {
    iVar26 = iVar26 >> 1;
    fVar49 = (float)iVar26;
    iVar42 = 0;
    puVar34 = puVar18;
    do {
      iVar38 = 0;
      fVar51 = (float)(iVar26 - iVar42) + -0.5;
      puVar35 = puVar34;
      do {
        fVar52 = (float)(iVar26 + iVar38) + -0.5;
        fVar45 = SQRT(fVar51 * fVar51 + fVar49 * fVar49 + fVar52 * fVar52);
        fVar47 = 0.0;
        if (fVar45 <= 0.0) {
          fVar46 = fVar51;
          fVar45 = fVar49;
        }
        else {
          fVar45 = 1.0 / fVar45;
          fVar52 = fVar52 * fVar45;
          fVar47 = fVar45 * 0.0;
          fVar46 = fVar51 * fVar45;
          fVar45 = fVar45 * fVar49;
        }
        if ((*(ushort *)(param_1 + 0x2a70) & 0x80) != 0) {
          fVar46 = fVar46 * 0.5 + 0.5;
          fVar52 = fVar52 * 0.5 + 0.5;
          fVar45 = fVar45 * 0.5 + 0.5;
        }
        uVar21 = (uint)fVar45 & 0x7f800000;
        uVar22 = (uint)fVar45 >> 0x10 & 0x8000;
        if (uVar21 == 0x7f800000) {
          if (((uint)fVar45 & 0x7fffff) == 0) goto LAB_039dfd18;
          uVar31 = (uint)fVar45 >> 0x10 | 0x7fff;
          if (((uint)fVar45 & 0x7fffff) >> 0x16 == 0) {
            uVar31 = uVar22 | 0x7dff;
          }
        }
        else if (uVar21 < 0x47000001) {
          uVar31 = uVar22;
          if (0x38000000 < uVar21) {
            uVar31 = (uVar21 >> 0xd) + 0x4000 & 0x7c00 | (uint)fVar45 >> 0xd & 0x3ff | uVar22;
          }
        }
        else {
LAB_039dfd18:
          uVar31 = uVar22 | 0x7c00;
        }
        uVar21 = (uint)fVar46 & 0x7f800000;
        uVar22 = (uint)fVar46 >> 0x10 & 0x8000;
        if (uVar21 == 0x7f800000) {
          if (((uint)fVar46 & 0x7fffff) == 0) {
            uVar28 = uVar22 | 0x7c00;
          }
          else {
            uVar28 = (uint)fVar46 >> 0x10 | 0x7fff;
            if (((uint)fVar46 & 0x7fffff) >> 0x16 == 0) {
              uVar28 = uVar22 | 0x7dff;
            }
          }
        }
        else {
          uVar23 = uVar22;
          if (0x38000000 < uVar21) {
            uVar23 = (uVar21 >> 0xd) + 0x4000 & 0x7c00 | (uint)fVar46 >> 0xd & 0x3ff | uVar22;
          }
          uVar28 = uVar22 | 0x7c00;
          if (uVar21 < 0x47000001) {
            uVar28 = uVar23;
          }
        }
        uVar21 = (uint)fVar52 & 0x7f800000;
        uVar22 = (uint)fVar52 >> 0x10 & 0x8000;
        if (uVar21 == 0x7f800000) {
          if (((uint)fVar52 & 0x7fffff) == 0) {
            uVar32 = uVar22 | 0x7c00;
          }
          else {
            uVar32 = (uint)fVar52 >> 0x10 | 0x7fff;
            if (((uint)fVar52 & 0x7fffff) >> 0x16 == 0) {
              uVar32 = uVar22 | 0x7dff;
            }
          }
        }
        else {
          uVar23 = uVar22;
          if (0x38000000 < uVar21) {
            uVar23 = (uVar21 >> 0xd) + 0x4000 & 0x7c00 | (uint)fVar52 >> 0xd & 0x3ff | uVar22;
          }
          uVar32 = uVar22 | 0x7c00;
          if (uVar21 < 0x47000001) {
            uVar32 = uVar23;
          }
        }
        uVar21 = (uint)fVar47 & 0x7f800000;
        uVar22 = (uint)fVar47 >> 0x10 & 0x8000;
        if (uVar21 == 0x7f800000) {
          if (((uint)fVar47 & 0x7fffff) == 0) goto LAB_039dfc50;
          if (((uint)fVar47 & 0x7fffff) >> 0x16 == 0) {
            uVar22 = uVar22 | 0x7dff;
          }
          else {
            uVar22 = (uint)fVar47 >> 0x10 | 0x7fff;
          }
        }
        else if (uVar21 < 0x47000001) {
          if (0x38000000 < uVar21) {
            uVar22 = (uVar21 >> 0xd) + 0x4000 & 0x7c00 | (uint)fVar47 >> 0xd & 0x3ff | uVar22;
          }
        }
        else {
LAB_039dfc50:
          uVar22 = uVar22 | 0x7c00;
        }
        iVar38 = iVar38 + -1;
        puVar34 = puVar35 + 1;
        *puVar35 = CONCAT44(uVar32 | uVar22 << 0x10,uVar31 | uVar28 << 0x10);
        puVar35 = puVar34;
      } while (iVar27 + iVar38 != 0);
      iVar42 = iVar42 + 1;
    } while (iVar42 != iVar27);
  }
  FUN_0390a734(param_1 + 0x568,1,0x2b,iVar27,iVar27,1,1,0,0,1);
  bVar10 = false;
  *(undefined4 *)(param_1 + 0x568) = *(undefined4 *)(param_1 + 0x548);
  local_4b8 = *(byte **)(param_1 + 0x550);
  uVar13 = *(undefined8 *)(param_1 + 0x558);
  *(undefined4 *)(param_1 + 0x56c) = *(undefined4 *)(param_1 + 0x54c);
  *(byte **)(param_1 + 0x570) = local_4b8;
  *(undefined8 *)(param_1 + 0x578) = uVar13;
  if ((*(byte *)(param_1 + 0x5b6) >> 1 & 1) != 0) {
    bVar10 = 0x11 < *(ushort *)(param_1 + 0x600) && *(ushort *)(param_1 + 0x600) - 0x59 < 0xffffffd6
    ;
  }
  local_4c0 = (undefined *)
              CONCAT44(*(undefined4 *)(param_1 + 0x54c),*(undefined4 *)(param_1 + 0x548));
  local_4b0 = (undefined4)uVar13;
  uStack_4ac = (undefined4)((ulong)uVar13 >> 0x20);
  uVar13 = FUN_038fd3e0(param_1 + 0x5b8,&local_4c0,(ushort *)(param_1 + 0x598),0,
                        *(undefined8 *)(param_1 + 0x5f8),bVar10,1);
  *(char **)(param_1 + 0x5f8) = "lightmap_cube_normal";
  FUN_038faf2c(uVar13,param_1 + 0x568,puVar18,0);
  *(undefined4 *)(param_1 + 0x608) = *(undefined4 *)(param_1 + 0x568);
  *(undefined8 *)(param_1 + 0x628) = *(undefined8 *)(param_1 + 0x588);
  *(undefined4 *)(param_1 + 0x60c) = *(undefined4 *)(param_1 + 0x56c);
  *(undefined8 *)(param_1 + 0x630) = *(undefined8 *)(param_1 + 0x590);
  *(undefined8 *)(param_1 + 0x610) = *(undefined8 *)(param_1 + 0x570);
  *(undefined8 *)(param_1 + 0x618) = *(undefined8 *)(param_1 + 0x578);
  *(undefined4 *)(param_1 + 0x620) = *(undefined4 *)(param_1 + 0x580);
  *(undefined4 *)(param_1 + 0x624) = *(undefined4 *)(param_1 + 0x584);
  *(undefined8 *)(param_1 + 0x64f) = *(undefined8 *)(param_1 + 0x5af);
  *(undefined8 *)(param_1 + 0x648) = *(undefined8 *)(param_1 + 0x5a8);
  *(undefined8 *)(param_1 + 0x640) = *(undefined8 *)(param_1 + 0x5a0);
  *(undefined8 *)(param_1 + 0x638) = *(undefined8 *)(param_1 + 0x598);
  FUN_038fd1e0(param_1 + 0x658);
  FUN_038fd2f0(param_1 + 0x658,param_1 + 0x5b8);
  *(undefined8 *)(param_1 + 0x698) = *(undefined8 *)(param_1 + 0x5f8);
  *(undefined4 *)(param_1 + 0x6a0) = *(undefined4 *)(param_1 + 0x600);
  puVar6 = PTR_DAT_04bb2698;
  puVar2 = (uint *)(param_1 + 0x6dc);
  do {
    cVar5 = '\x01';
    bVar10 = (bool)ExclusiveMonitorPass(puVar2,0x10);
    if (bVar10) {
      *puVar2 = *puVar2 | 1;
      cVar5 = ExclusiveMonitorsStatus();
    }
  } while (cVar5 != '\0');
  *(undefined2 *)(param_1 + 0x6cc) = 0;
  *(undefined1 *)(param_1 + 0x6ce) = 0;
  do {
    cVar5 = '\x01';
    bVar10 = (bool)ExclusiveMonitorPass(puVar2,0x10);
    if (bVar10) {
      *puVar2 = *puVar2 & 0xfffffffb | 4;
      cVar5 = ExclusiveMonitorsStatus();
    }
  } while (cVar5 != '\0');
  if (puVar18 != (undefined8 *)0x0) {
    if (*(long *)puVar6 == 0) {
      free(puVar18);
    }
    else {
      plVar15 = (long *)FUN_038cb610(*(long *)puVar6,puVar18);
      if (plVar15 != (long *)0x0) {
        (**(code **)(*plVar15 + 0x38))(plVar15,puVar18);
      }
    }
  }
  uVar25 = *(ushort *)(param_1 + 0x598);
  local_480 = 0;
  uStack_478 = 0;
  local_490 = 0;
  uStack_488 = 0;
  if (uVar25 < 2) {
    uVar25 = 1;
  }
  local_4a0 = 0;
  uStack_49e = 0;
  uStack_49d = 0;
  uStack_498 = 0;
  if (uVar25 < 0x41) {
    uVar25 = 0x40;
  }
  local_470[0] = 0xffffffff;
  local_510[0] = 0xffffffff;
  local_428 = 0x10000;
  local_4b0 = 0;
  uStack_4ac = 0;
  uStack_4a8 = 0;
  acStack_4a6[0] = '\0';
  acStack_4a6[1] = '\0';
  uStack_4a4 = 0;
  local_4c0 = (undefined *)0x0;
  local_4b8 = (byte *)0x0;
  uVar4 = *(ushort *)(param_1 + 0x3f8);
  local_468 = 0;
  uStack_460 = 0;
  local_458 = 0;
  uStack_450 = 0;
  if (uVar4 < 2) {
    uVar4 = 1;
  }
  local_448 = 0;
  uStack_440 = 0;
  local_4c8 = 0x10000;
  local_438 = 0;
  pcStack_430 = "agl::TextureData";
  local_520 = 0;
  uStack_518 = 0;
  local_530 = 0;
  uStack_528 = 0;
  local_540 = 0;
  uStack_538 = 0;
  local_550 = 0;
  uStack_548 = 0;
  local_560 = (undefined *)0x0;
  local_558 = (void *)0x0;
  local_508 = 0;
  uStack_500 = 0;
  local_4f8 = 0;
  uStack_4f0 = 0;
  local_4e8 = 0;
  uStack_4e0 = 0;
  local_4d8 = 0;
  pcStack_4d0 = "agl::TextureData";
  FUN_0390a734(&local_4c0,4,0x1d,uVar4,uVar4,2,5,0,0,1);
  FUN_0390a734(&local_560,8,0x1d,uVar25,uVar25,6,5,0,0,1);
  lVar24 = *(long *)puVar6;
  uVar21 = (uint)local_480;
  if ((uint)local_480 <= (uint)local_520) {
    uVar21 = (uint)local_520;
  }
  uVar22 = local_480._4_4_;
  if (local_480._4_4_ <= local_520._4_4_) {
    uVar22 = local_520._4_4_;
  }
  uVar31 = uStack_488._4_4_;
  if (uStack_488._4_4_ <= uStack_528._4_4_) {
    uVar31 = uStack_528._4_4_;
  }
  iVar26 = (uVar22 + uVar21 + uVar31 * 2) * uVar3;
  if (lVar24 == 0) {
    plVar15 = malloc(0x38);
  }
  else {
    plVar15 = param_5;
    if (bVar11) {
      lVar14 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
      plVar15 = (long *)(lVar24 + 8);
      if (lVar14 != 0) {
        plVar15 = (long *)(lVar14 + 0xa8);
      }
      plVar15 = (long *)*plVar15;
    }
    plVar15 = (long *)(**(code **)(*plVar15 + 0x30))(plVar15,0x38,8);
  }
  plVar15[6] = 0;
  plVar19 = plVar15 + 1;
  *plVar19 = 0;
  *(undefined2 *)((long)plVar15 + 0x2a) = 0;
  bVar20 = 0;
  plVar15[2] = 0;
  plVar15[3] = 0;
  plVar15[4] = 0;
  *(undefined1 *)(plVar15 + 5) = 0;
  *plVar15 = (long)(PTR_DAT_04bb2cc8 + 0x10);
  if (bVar11) {
    lVar14 = *(long *)puVar6;
    lVar24 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
    param_5 = (long *)(lVar14 + 8);
    if (lVar24 != 0) {
      param_5 = (long *)(lVar24 + 0xa8);
    }
    param_5 = (long *)*param_5;
    bVar20 = *(byte *)(plVar15 + 5) & 0xfe;
  }
  plVar15[6] = 0;
  *(byte *)(plVar15 + 5) = bVar20;
  *(undefined2 *)((long)plVar15 + 0x2a) = 0;
  *plVar19 = 0;
  plVar15[2] = 0;
  plVar15[3] = 0;
  plVar15[4] = 0;
  if (iVar26 == 0) {
    iVar26 = 0;
    *(undefined2 *)((long)plVar15 + 0x2a) = 4;
    lVar24 = 0;
  }
  else {
    FUN_038f8590(*(undefined8 *)PTR_DAT_04bd0fa8,plVar15,param_5,iVar26,8,4);
    lVar24 = plVar15[3];
    *(undefined2 *)((long)plVar15 + 0x2a) = 4;
    iVar26 = 0;
    if (plVar15[4] != 0) {
      iVar26 = (int)*plVar19 - *(int *)(plVar15[4] + 0x10);
    }
    if (lVar24 != 0) {
      uVar30 = *(undefined4 *)(lVar24 + 0x104);
      goto LAB_039e02c0;
    }
  }
  uVar30 = 0;
LAB_039e02c0:
  *(int *)(param_1 + 0x2a58) = iVar26;
  *(undefined4 *)(param_1 + 0x2a5c) = uVar30;
  *(long *)(param_1 + 0x2a60) = lVar24;
  *(long **)(param_1 + 0x2a68) = plVar15;
  FUN_038fd0e0(local_510);
  FUN_038fd0e0(local_470);
  *(undefined4 *)(param_1 + 0x2704) = 0xf;
  *(undefined4 *)(param_1 + 0x2778) = 0xf;
  *(undefined4 *)(param_1 + 0x26ec) = 0;
  *(undefined4 *)(param_1 + 0x2760) = 0xff;
  *(undefined4 *)(param_1 + 0x2784) = 0x2020202;
  *(undefined2 *)(param_1 + 0x26e8) = 0;
  *(undefined2 *)(param_1 + 0x275c) = 0;
  *(undefined2 *)(param_1 + 0x2788) = 0x101;
  *(undefined4 *)(param_1 + 0x278a) = 0x2020202;
  *(undefined2 *)(param_1 + 0x278e) = 0x101;
  *(undefined2 *)(param_1 + 0x2794) = 0x101;
  *(undefined4 *)(param_1 + 0x2796) = 0x2020202;
  *(undefined2 *)(param_1 + 0x279a) = 0x101;
  *(undefined2 *)(param_1 + 0x27a0) = 0x101;
  *(undefined4 *)(param_1 + 0x27a2) = 0x2020202;
  *(undefined2 *)(param_1 + 0x27a6) = 0x101;
  *(undefined2 *)(param_1 + 0x27ac) = 0x101;
  *(undefined4 *)(param_1 + 0x27ae) = 0x2020202;
  *(undefined2 *)(param_1 + 0x27b2) = 0x101;
  *(undefined2 *)(param_1 + 0x27d0) = 0;
  *(undefined4 *)(param_1 + 0x2790) = 0x2020202;
  *(undefined4 *)(param_1 + 0x279c) = 0x2020202;
  *(undefined4 *)(param_1 + 0x27a8) = 0x2020202;
  *(undefined4 *)(param_1 + 0x27d4) = 0;
  *(undefined4 *)(param_1 + 0x27ec) = 0xff;
  *(undefined2 *)(param_1 + 0x2844) = 0;
  *(undefined4 *)(param_1 + 0x2848) = 0xff;
  *(undefined4 *)(param_1 + 0x286c) = 0x2020202;
  *(undefined2 *)(param_1 + 0x2870) = 0x101;
  *(undefined4 *)(param_1 + 0x2872) = 0x2020202;
  *(undefined2 *)(param_1 + 0x2876) = 0x101;
  *(undefined4 *)(param_1 + 0x2878) = 0x2020202;
  *(undefined2 *)(param_1 + 0x287c) = 0x101;
  *(undefined4 *)(param_1 + 0x287e) = 0x2020202;
  *(undefined2 *)(param_1 + 0x2882) = 0x101;
  *(undefined4 *)(param_1 + 0x2884) = 0x2020202;
  *(undefined2 *)(param_1 + 0x2888) = 0x101;
  *(undefined4 *)(param_1 + 0x288a) = 0x2020202;
  *(undefined2 *)(param_1 + 0x288e) = 0x101;
  *(undefined4 *)(param_1 + 0x2890) = 0x2020202;
  *(undefined2 *)(param_1 + 0x2894) = 0x101;
  *(undefined4 *)(param_1 + 0x2896) = 0x2020202;
  *(undefined2 *)(param_1 + 0x289a) = 0x101;
  *(undefined4 *)(param_1 + 0x2860) = 0xff;
  *(undefined2 *)(param_1 + 0x28b8) = 0;
  *(undefined4 *)(param_1 + 0x28bc) = 0;
  *(undefined4 *)(param_1 + 0x28d4) = 0xffffff;
  *(undefined2 *)(param_1 + 0x292c) = 0;
  *(undefined4 *)(param_1 + 0x2930) = 0xff;
  *(undefined4 *)(param_1 + 0x2954) = 0x2020202;
  *(undefined2 *)(param_1 + 0x2958) = 0x101;
  *(undefined4 *)(param_1 + 0x295a) = 0x2020202;
  *(undefined2 *)(param_1 + 0x295e) = 0x101;
  *(undefined4 *)(param_1 + 0x2960) = 0x2020202;
  *(undefined2 *)(param_1 + 0x2964) = 0x101;
  *(undefined4 *)(param_1 + 0x2966) = 0x2020202;
  *(undefined2 *)(param_1 + 0x296a) = 0x101;
  *(undefined4 *)(param_1 + 0x296c) = 0x2020202;
  *(undefined2 *)(param_1 + 0x2970) = 0x101;
  *(undefined4 *)(param_1 + 0x2972) = 0x2020202;
  *(undefined2 *)(param_1 + 0x2976) = 0x101;
  *(undefined4 *)(param_1 + 0x2978) = 0x2020202;
  *(undefined2 *)(param_1 + 0x297c) = 0x101;
  *(undefined4 *)(param_1 + 0x297e) = 0x2020202;
  *(undefined2 *)(param_1 + 0x2982) = 0x101;
  *(undefined4 *)(param_1 + 0x2948) = 0xffffff;
  FUN_039e0450(param_1);
  return;
}

