
/* WARNING: Removing unreachable block (ram,0x03192ce0) */
/* WARNING: Removing unreachable block (ram,0x03192b74) */
/* WARNING: Removing unreachable block (ram,0x03192a10) */
/* WARNING: Removing unreachable block (ram,0x031928a4) */
/* WARNING: Removing unreachable block (ram,0x0319273c) */
/* WARNING: Removing unreachable block (ram,0x031925d4) */
/* WARNING: Removing unreachable block (ram,0x03192470) */
/* WARNING: Removing unreachable block (ram,0x03192304) */
/* WARNING: Removing unreachable block (ram,0x031921a0) */
/* WARNING: Removing unreachable block (ram,0x03192034) */
/* WARNING: Removing unreachable block (ram,0x03191cf0) */
/* WARNING: Removing unreachable block (ram,0x03191c90) */
/* WARNING: Removing unreachable block (ram,0x03191b00) */
/* WARNING: Removing unreachable block (ram,0x03191b18) */
/* WARNING: Removing unreachable block (ram,0x03191ca8) */
/* WARNING: Removing unreachable block (ram,0x03191d0c) */
/* WARNING: Removing unreachable block (ram,0x031920e4) */
/* WARNING: Removing unreachable block (ram,0x03192250) */
/* WARNING: Removing unreachable block (ram,0x031923b4) */
/* WARNING: Removing unreachable block (ram,0x03192520) */
/* WARNING: Removing unreachable block (ram,0x03192688) */
/* WARNING: Removing unreachable block (ram,0x031927f0) */
/* WARNING: Removing unreachable block (ram,0x03192954) */
/* WARNING: Removing unreachable block (ram,0x03192ac0) */
/* WARNING: Removing unreachable block (ram,0x03192c2c) */
/* WARNING: Removing unreachable block (ram,0x03192d90) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_03190d10(long param_1)

{
  uint *puVar1;
  undefined *puVar2;
  code *pcVar3;
  undefined1 *puVar4;
  short sVar5;
  char cVar6;
  bool bVar7;
  byte bVar8;
  undefined4 uVar9;
  int iVar10;
  uint uVar11;
  uint uVar12;
  int iVar13;
  ulong uVar14;
  byte *pbVar15;
  short *psVar16;
  long lVar17;
  long lVar18;
  undefined8 *puVar19;
  long *plVar20;
  long lVar21;
  undefined8 *puVar22;
  undefined8 uVar23;
  byte *pbVar24;
  long *plVar25;
  undefined *puVar26;
  undefined8 uVar27;
  undefined8 uVar28;
  byte local_564 [4];
  code *local_560;
  undefined2 local_558;
  undefined2 uStack_556;
  undefined4 local_554;
  undefined8 uStack_550;
  undefined *local_548;
  byte local_540;
  undefined4 uStack_53f;
  undefined3 uStack_53b;
  undefined4 local_538;
  uint uStack_534;
  undefined8 local_530;
  undefined8 uStack_528;
  undefined4 local_520;
  undefined *local_518;
  undefined1 *puStack_510;
  undefined4 local_508;
  undefined1 local_504 [63];
  undefined1 local_4c5;
  undefined *local_4c0;
  undefined1 *puStack_4b8;
  undefined4 local_4b0;
  undefined1 local_4ac [63];
  undefined1 local_46d;
  undefined8 local_468;
  undefined *local_460;
  undefined8 uStack_458;
  undefined4 local_450;
  undefined1 local_44c;
  undefined8 local_448;
  undefined8 uStack_440;
  undefined4 local_438;
  undefined *local_430;
  undefined1 *puStack_428;
  undefined4 local_420;
  undefined1 local_41c [63];
  undefined1 local_3dd;
  undefined *local_3d8;
  undefined1 *puStack_3d0;
  undefined4 local_3c8;
  undefined1 local_3c4 [63];
  undefined1 local_385;
  undefined8 local_380;
  undefined *local_378;
  undefined8 uStack_370;
  undefined4 local_368;
  undefined1 local_364;
  undefined8 local_360;
  undefined8 local_358;
  undefined4 local_350;
  undefined *local_348;
  undefined1 *local_340;
  undefined4 local_338;
  undefined1 local_334 [63];
  undefined1 local_2f5;
  undefined *local_2f0;
  undefined1 *local_2e8;
  undefined4 local_2e0;
  undefined1 local_2dc [63];
  undefined1 local_29d;
  undefined8 local_298;
  undefined8 local_290;
  undefined8 local_288;
  undefined *local_280;
  undefined1 *local_278;
  undefined4 local_270;
  undefined1 local_26c [63];
  undefined1 local_22d;
  undefined *local_228;
  undefined1 *local_220;
  undefined4 local_218;
  undefined1 local_214 [63];
  undefined1 local_1d5;
  undefined *local_1d0;
  int local_1c8;
  undefined1 local_1c4;
  undefined8 local_1c0;
  undefined2 local_1b8;
  undefined8 local_1b0;
  undefined *local_1a8;
  undefined8 *local_1a0;
  undefined4 local_198;
  undefined1 local_194;
  undefined8 local_190;
  undefined8 local_188;
  undefined4 local_180;
  undefined *local_178;
  undefined1 *local_170;
  undefined4 local_168;
  undefined1 local_164 [63];
  undefined1 local_125;
  undefined *local_120;
  undefined1 *local_118;
  undefined4 local_110;
  undefined1 local_10c [63];
  undefined1 local_cd;
  undefined8 local_c8;
  undefined8 uStack_c0;
  undefined8 local_b8;
  undefined6 uStack_b0;
  undefined2 local_aa;
  undefined6 uStack_a8;
  undefined1 auStack_a2 [2];
  uint local_a0;
  undefined *local_98;
  undefined4 local_90;
  
  pbVar24 = PTR_DAT_04bc4e60;
  puVar1 = (uint *)(param_1 + 0x1c4b0);
  puVar19 = (undefined8 *)**(long **)(*(long *)(param_1 + 0x210) + 0x3f8);
  if (((*PTR_DAT_04bc4e60 & 1) == 0) &&
     (iVar10 = __cxa_guard_acquire(PTR_DAT_04bc4e60), iVar10 != 0)) {
    *(undefined **)PTR_DAT_04bc4e58 = PTR_DAT_04bc4d38 + 0x10;
    __cxa_guard_release(PTR_DAT_04bc4e60);
  }
  puVar2 = PTR_DAT_04bc4e58;
  uVar14 = (**(code **)*puVar19)(puVar19,PTR_DAT_04bc4e58);
  puVar26 = PTR_DAT_04bc4f00;
  uVar28 = 0x3f800000;
  if ((uVar14 & 1) == 0) {
    puVar19 = (undefined8 *)0x0;
  }
  plVar20 = *(long **)puVar19[0x45];
  if (plVar20 != (long *)0x0) {
    local_558 = 0x14;
    uStack_556 = 0;
    uVar23 = 0x40000000;
    if (*(int *)(param_1 + 0x1c4fc) != 8) {
      uVar23 = 0x3f800000;
    }
    local_560 = (code *)(PTR_DAT_04bc4f00 + 0x10);
    uVar27 = 0;
    if (*(int *)(param_1 + 0x1c4fc) != 0) {
      uVar27 = uVar23;
    }
    (**(code **)(*plVar20 + 0x18))(plVar20,&local_560);
    (**(code **)(plVar20[3] + 0x158))(uVar27,plVar20[1]);
  }
  puVar19 = (undefined8 *)**(long **)(*(long *)(param_1 + 0x210) + 0x3f8);
  if (((*pbVar24 & 1) == 0) && (iVar10 = __cxa_guard_acquire(PTR_DAT_04bc4e60), iVar10 != 0)) {
    *(undefined **)puVar2 = PTR_DAT_04bc4d38 + 0x10;
    __cxa_guard_release(PTR_DAT_04bc4e60);
  }
  uVar14 = (**(code **)*puVar19)(puVar19,PTR_DAT_04bc4e58);
  if ((uVar14 & 1) == 0) {
    puVar19 = (undefined8 *)0x0;
  }
  lVar17 = 0x18;
  if (*(uint *)(puVar19 + 0x44) < 4) {
    lVar17 = 0;
  }
  plVar20 = *(long **)(puVar19[0x45] + lVar17);
  if (plVar20 != (long *)0x0) {
    if (*(int *)(param_1 + 0x1c4fc) == 2) {
      local_560 = (code *)(PTR_DAT_04bc4e68 + 0x10);
      local_558 = 7;
      uStack_556 = 0;
      (**(code **)(*plVar20 + 0x18))(plVar20,&local_560);
      puVar19 = (undefined8 *)(plVar20[3] + 0x1c0);
    }
    else {
      local_560 = (code *)(PTR_DAT_04bc4e68 + 0x10);
      local_558 = 6;
      uStack_556 = 0;
      (**(code **)(*plVar20 + 0x18))(plVar20,&local_560);
      puVar19 = (undefined8 *)(plVar20[3] + 0x1b8);
    }
    (*(code *)*puVar19)(plVar20[1]);
  }
  lVar17 = *(long *)(*(long *)(*(long *)(param_1 + 0x210) + 0x580) + 0xa0);
  if (lVar17 != 0) {
    *(undefined2 *)(lVar17 + 0xbc) = 0;
  }
  *(undefined1 *)(*(long *)(param_1 + 0x1c2c8) + 0x40) = 0;
  *(undefined8 *)(param_1 + 0x1c4f0) = 0;
  *(undefined1 *)(param_1 + 0x1c51e) = 0;
  if (*puVar1 != 0) {
    uVar12 = 0;
    do {
      lVar17 = *(long *)(*(long *)(param_1 + 0x1c4b8) + (long)(int)uVar12 * 8);
      *(undefined2 *)(lVar17 + 0x310) = 0x100;
      FUN_03d5d280(lVar17,4);
      uVar12 = uVar12 + 1;
    } while (uVar12 < *puVar1);
  }
  puVar19 = (undefined8 *)PTR_DAT_04bb4f78;
  uStack_550 = (code *)CONCAT44(uStack_550._4_4_,(int)uStack_550);
  switch(*(undefined4 *)(param_1 + 0x1c4fc)) {
  case 0:
    *(undefined1 *)(param_1 + 0x1c51c) = 0;
    pbVar15 = (byte *)(param_1 + 0x1f8);
    lVar17 = *(long *)PTR_DAT_04bb4718;
    if ((lVar17 == 0) || (uVar14 = (ulong)*pbVar15, 7 < uVar14)) {
      if ((DAT_054f0c70 & 1) == 0) {
        iVar10 = __cxa_guard_acquire(&DAT_054f0c70);
        psVar16 = &DAT_054f0c08;
        pbVar24 = PTR_DAT_04bc4e60;
        cVar6 = DAT_054f0c6c;
        if (iVar10 != 0) {
          DAT_054f0c1c._0_4_ = 0;
          DAT_054f0c1c._4_4_ = 0;
          DAT_054f0c68 = 1;
          DAT_054f0c6c = '\0';
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
          pbVar24 = PTR_DAT_04bc4e60;
          cVar6 = DAT_054f0c6c;
        }
        goto joined_r0x031937d0;
      }
      psVar16 = &DAT_054f0c08;
      if (DAT_054f0c6c != '\0') goto LAB_03193590;
LAB_031937d4:
      iVar10 = 1;
    }
    else {
      lVar17 = lVar17 + uVar14 * 0xd0 + (ulong)(*(uint *)(lVar17 + uVar14 * 4 + 0xd68) & 1) * 0x68;
      psVar16 = (short *)(lVar17 + 0x6e8);
      cVar6 = *(char *)(lVar17 + 0x74c);
joined_r0x031937d0:
      if (cVar6 == '\0') goto LAB_031937d4;
LAB_03193590:
      if (*psVar16 != *(short *)PTR_DAT_04bb6298) goto LAB_031937d4;
      iVar10 = *(int *)(psVar16 + 0x30);
    }
    local_560 = (code *)CONCAT44(local_560._4_4_,iVar10);
    if (0xfffffffd < iVar10 - 7U) goto LAB_03193820;
    local_560 = (code *)(PTR_DAT_04bb2020 + 0x10);
    local_558 = 0x58a8;
    uStack_556 = 0x40e;
    local_554 = 0;
    iVar10 = FUN_0274bce0(pbVar15,&local_560);
    if (iVar10 == 0) {
LAB_031938b4:
      uVar12 = 1;
      iVar10 = 0;
      bVar7 = false;
      *(undefined1 *)(param_1 + 0x1c51c) = 1;
    }
    else {
      uVar14 = FUN_02538bb0(pbVar15);
      if ((uVar14 & 1) == 0) {
        local_560 = (code *)CONCAT44(local_560._4_4_,0x17);
        uVar14 = FUN_0290cbcc(&local_560);
        if ((uVar14 & 1) != 0) {
          if (*(int *)(PTR_DAT_04bc3a80 + 0x38) == -0x10e0fba8) {
            uVar12 = 0;
            iVar10 = 0;
            bVar7 = false;
            *(undefined1 *)(param_1 + 0x1c51c) = 0;
            goto LAB_031938c4;
          }
          goto LAB_03193820;
        }
        local_560 = (code *)CONCAT44(local_560._4_4_,0x19);
        uVar14 = FUN_0290cbcc(&local_560);
        if ((uVar14 & 1) == 0) {
          uVar14 = FUN_0180c600();
          if ((uVar14 & 1) == 0) {
            uVar14 = FUN_01c65b60();
            if ((uVar14 & 1) != 0) goto LAB_031938b4;
            local_560 = (code *)CONCAT44(local_560._4_4_,0x21);
            uVar14 = FUN_0290cbcc(&local_560);
            if (((uVar14 & 1) == 0) || (uVar14 = FUN_0180b660(), (uVar14 & 1) == 0)) {
              local_560 = (code *)CONCAT44(local_560._4_4_,0x20);
              uVar14 = FUN_0290cbcc(&local_560);
              if (((uVar14 & 1) == 0) || (uVar14 = FUN_0180b700(), (uVar14 & 1) == 0)) {
                uVar12 = (uint)*(byte *)(param_1 + 0x1c51c);
                iVar10 = 0;
                bVar7 = false;
                goto LAB_031938c4;
              }
              iVar10 = 6;
              goto LAB_03193828;
            }
          }
          goto LAB_03193820;
        }
        uVar14 = FUN_033fa420();
        if ((uVar14 & 1) != 0) {
          iVar10 = 2;
          goto LAB_03193828;
        }
        uVar14 = FUN_033fa3b0();
        if ((uVar14 & 1) != 0) goto LAB_03193820;
        uVar14 = FUN_033fa130();
        if (((uVar14 & 1) == 0) && (uVar14 = FUN_033fa310(), (uVar14 & 1) == 0)) {
          uVar12 = 2;
          iVar13 = 1;
        }
        else {
          iVar13 = 3;
          if (*(long *)PTR_DAT_04bb27f8 == 0) {
            uVar12 = 0;
          }
          else {
            uVar12 = *(uint *)(*(long *)PTR_DAT_04bb27f8 + 0x1a70) & 0x200;
            iVar13 = 3;
            if (uVar12 != 0) {
              iVar13 = 4;
            }
            uVar12 = uVar12 >> 8;
          }
        }
        local_560 = (code *)CONCAT44(local_560._4_4_,0x1a);
        uVar14 = FUN_0290cbcc(&local_560);
        *(char *)(param_1 + 0x1c51c) = (char)uVar12;
        iVar10 = 5;
        if ((uVar14 & 1) == 0) {
          iVar10 = iVar13;
        }
      }
      else {
LAB_03193820:
        iVar10 = 1;
LAB_03193828:
        uVar12 = 1;
        *(undefined1 *)(param_1 + 0x1c51c) = 1;
      }
      bVar7 = true;
    }
LAB_031938c4:
    puVar19 = (undefined8 *)**(long **)(*(long *)(param_1 + 0x210) + 0x3f8);
    if (((*pbVar24 & 1) == 0) && (iVar13 = __cxa_guard_acquire(PTR_DAT_04bc4e60), iVar13 != 0)) {
      *(undefined **)PTR_DAT_04bc4e58 = PTR_DAT_04bc4d38 + 0x10;
      __cxa_guard_release(PTR_DAT_04bc4e60);
    }
    uVar14 = (**(code **)*puVar19)(puVar19,PTR_DAT_04bc4e58);
    if ((uVar14 & 1) == 0) {
      puVar19 = (undefined8 *)0x0;
    }
    plVar20 = *(long **)(puVar19[0x45] + (ulong)(4 < *(uint *)(puVar19 + 0x44)) * 0x20);
    if (plVar20 != (long *)0x0) {
      if (uVar12 == 2) {
        local_560 = (code *)(puVar26 + 0x10);
        local_558 = 0x14;
        uStack_556 = 0;
        (**(code **)(*plVar20 + 0x18))(plVar20,&local_560);
        lVar17 = plVar20[3];
        uVar23 = 0x40000000;
      }
      else {
        if ((uVar12 != 1) && (uVar12 == 0)) {
          local_560 = (code *)(PTR_DAT_04bc4e68 + 0x10);
          local_558 = 6;
          uStack_556 = 0;
          (**(code **)(*plVar20 + 0x18))(plVar20,&local_560);
          (**(code **)(plVar20[3] + 0x1b8))(plVar20[1]);
          goto LAB_031939cc;
        }
        local_560 = (code *)(puVar26 + 0x10);
        local_558 = 0x14;
        uStack_556 = 0;
        (**(code **)(*plVar20 + 0x18))(plVar20,&local_560);
        lVar17 = plVar20[3];
        uVar23 = 0x3f800000;
      }
      (**(code **)(lVar17 + 0x158))(uVar23,plVar20[1]);
    }
LAB_031939cc:
    local_1a8 = (undefined *)CONCAT44(local_1a8._4_4_,iVar10);
    *(bool *)(param_1 + 0x1c51e) = iVar10 == 1;
    puVar19 = (undefined8 *)PTR_DAT_04bb4f78;
    switch(iVar10) {
    case 1:
      *(undefined8 *)(param_1 + 0x1c4f0) = 0xffffffffffffffff;
      goto LAB_03193a88;
    case 2:
      local_560 = FUN_03195fe0;
      break;
    case 3:
      local_560 = (code *)&LAB_03196170;
      uStack_550._0_4_ = CONCAT31(uStack_550._1_3_,1);
      goto LAB_03193a7c;
    case 4:
      local_560 = (code *)&LAB_03196380;
      break;
    case 5:
      local_560 = (code *)&LAB_03196570;
      break;
    case 6:
      local_560 = (code *)&LAB_03196760;
      break;
    default:
      *(undefined8 *)(param_1 + 0x1c4f0) = 0;
      puVar19 = (undefined8 *)PTR_DAT_04bb4f78;
      goto LAB_03193a88;
    }
    uStack_550._0_4_ = (uint)uStack_550._1_3_ << 8;
LAB_03193a7c:
    local_554 = 0;
    uStack_556 = 0;
    local_558 = 0;
    FUN_03195e80(param_1,&local_560);
LAB_03193a88:
    if (*puVar1 == 0) {
      bVar7 = true;
    }
    if (!bVar7) {
      uVar12 = 0;
      do {
        lVar17 = *(long *)(*(long *)(param_1 + 0x1c4b8) + (long)(int)uVar12 * 8);
        *(undefined2 *)(lVar17 + 0x310) = 1;
        FUN_03d49da4(*(undefined8 *)(lVar17 + 0x218),0,4);
        FUN_03d49da4(*(undefined8 *)(lVar17 + 0x218),1,4);
        FUN_03d49da4(*(undefined8 *)(lVar17 + 0x218),2,4);
        FUN_03d49da4(*(undefined8 *)(lVar17 + 0x218),3,4);
        uVar12 = uVar12 + 1;
      } while (uVar12 < *puVar1);
    }
    pbVar24 = PTR_DAT_04bc4e60;
    uStack_550 = (code *)CONCAT44(uStack_550._4_4_,(int)uStack_550);
    if (*(long *)PTR_DAT_04bb59d8 != 0) {
      lVar17 = *(long *)PTR_DAT_04bb2720;
      if (lVar17 == 0) {
        puVar22 = &DAT_055c04a0;
      }
      else {
        puVar22 = &DAT_055c04a0;
        if (*(long *)(lVar17 + 0x330) != 0) {
          puVar22 = (undefined8 *)
                    (**(code **)(**(long **)PTR_DAT_04bb2640 + 0x18))
                              (*(long **)PTR_DAT_04bb2640,*(undefined4 *)(lVar17 + 0x338));
          iVar10 = FUN_006bd550(*puVar22,0);
          puVar22 = (undefined8 *)PTR_DAT_04bc3a80;
          if (iVar10 != 0x758f7eaf) {
            puVar22 = &DAT_055c04a0;
          }
        }
      }
      uStack_550 = (code *)CONCAT44(uStack_550._4_4_,(int)uStack_550);
      if ((*(int *)(puVar22 + 7) == -0x17df00c3) &&
         ((*(ushort **)PTR_DAT_04bc3a48 == (ushort *)0x0 ||
          (uStack_550 = (code *)CONCAT44(uStack_550._4_4_,(int)uStack_550),
          (**(ushort **)PTR_DAT_04bc3a48 & 1) == 0)))) {
        local_560 = (code *)(PTR_DAT_04bb2020 + 0x10);
        local_558 = 0x65ee;
        uStack_556 = 0x40e;
        local_554 = 0;
        iVar10 = FUN_02758850(&local_560);
        uStack_550 = (code *)CONCAT44(uStack_550._4_4_,(int)uStack_550);
        if ((iVar10 != 0) &&
           (uStack_550 = (code *)CONCAT44(uStack_550._4_4_,(int)uStack_550),
           *(long *)(param_1 + 0x250) != 0)) {
          uVar9 = FUN_033fa670();
          lVar18 = *(long *)(param_1 + 0x250);
          *(undefined4 *)(lVar18 + 0x218) = uVar9;
          *(undefined4 *)(lVar18 + 0x21c) = uVar9;
          lVar17 = *(long *)(lVar18 + 0x210);
          *(undefined4 *)(lVar18 + 0x220) = 0xc;
          *(undefined4 *)(lVar17 + 600) = 0;
          *(undefined4 *)(lVar17 + 0x260) = uVar9;
          *(undefined4 *)(lVar17 + 0x264) = uVar9;
          *(undefined4 *)(lVar17 + 0x268) = 0;
          *(undefined1 *)(lVar17 + 0x290) = 0;
          *(undefined1 *)(lVar17 + 0x2a0) = 0;
          FUN_03125a4c();
          FUN_038694bc(param_1,*(undefined8 *)(param_1 + 0x250));
        }
      }
    }
    break;
  case 1:
  case 2:
  case 3:
  case 8:
  case 9:
  case 10:
    if (*(long *)PTR_DAT_04bb2230 == 0) {
      lVar17 = 0;
      if (cRam0000000000000d78 != '\0') goto LAB_03190f70;
LAB_03190fc8:
      bVar8 = 1;
    }
    else {
      lVar17 = *(long *)(*(long *)PTR_DAT_04bb2230 + 0x28);
      if (*(char *)(lVar17 + 0xd78) == '\0') goto LAB_03190fc8;
LAB_03190f70:
      bVar8 = (**(code **)(*(long *)(lVar17 + 0xd70) + 0x18))(lVar17 + 0xd70);
      *(undefined1 *)(lVar17 + 0xd78) = 0;
    }
    local_560 = *(code **)(lVar17 + 0xd80);
    uVar23 = *(undefined8 *)(lVar17 + 0xd88);
    *(byte *)(lVar17 + 0xd79) = bVar8 & 1;
    local_558 = (undefined2)uVar23;
    uStack_556 = (undefined2)((ulong)uVar23 >> 0x10);
    local_554 = (undefined4)((ulong)uVar23 >> 0x20);
    uStack_550._0_4_ = CONCAT31(uStack_550._1_3_,*(undefined1 *)(lVar17 + 0xd9c));
    FUN_03195e80(param_1,&local_560);
    if (*(long *)PTR_DAT_04bb2230 == 0) {
      lVar17 = 0;
      if (cRam0000000000000d78 != '\0') goto LAB_03191010;
LAB_03191034:
      bVar8 = 1;
    }
    else {
      lVar17 = *(long *)(*(long *)PTR_DAT_04bb2230 + 0x28);
      if (*(char *)(lVar17 + 0xd78) == '\0') goto LAB_03191034;
LAB_03191010:
      bVar8 = (**(code **)(*(long *)(lVar17 + 0xd70) + 0x18))(lVar17 + 0xd70);
      *(undefined1 *)(lVar17 + 0xd78) = 0;
    }
    *(byte *)(lVar17 + 0xd79) = bVar8 & 1;
    uVar9 = *(undefined4 *)(lVar17 + 0xd98);
    *(undefined8 *)(param_1 + 0x1c4e8) = 0;
    *(undefined4 *)(param_1 + 0x1c4f8) = uVar9;
    puVar22 = *(undefined8 **)(*(long *)(param_1 + 0x210) + 0x6d8);
    if (((*PTR_DAT_04bc4f40 & 1) == 0) &&
       (iVar10 = __cxa_guard_acquire(PTR_DAT_04bc4f40), iVar10 != 0)) {
      *(undefined **)PTR_DAT_04bc4f38 = PTR_DAT_04bc4f48 + 0x10;
      __cxa_guard_release(PTR_DAT_04bc4f40);
    }
    if (puVar22 != (undefined8 *)0x0) {
      uVar14 = (**(code **)*puVar22)(puVar22,PTR_DAT_04bc4f38);
      if ((uVar14 & 1) != 0) {
        local_538 = 0;
        uStack_534 = 0;
        local_560 = (code *)(PTR_DAT_04bb2020 + 0x10);
        local_558 = (undefined2)DAT_05701710;
        uStack_556 = (undefined2)((ulong)DAT_05701710 >> 0x10);
        local_554 = (undefined4)((ulong)DAT_05701710 >> 0x20);
        local_540 = *(byte *)(param_1 + 0x1f8);
        local_548 = &DAT_04068e7f;
        if (7 < local_540) {
          local_540 = 0xff;
        }
        uStack_550 = local_560;
        FUN_030ded60(puVar22,&local_560);
      }
    }
    iVar10 = *(int *)(param_1 + 0x1c4fc);
    if (iVar10 == 9) {
      uVar9 = FUN_0267c4d0((byte *)(param_1 + 0x1f8));
      *(undefined4 *)(param_1 + 0x1c504) = uVar9;
      lVar17 = *(long *)(param_1 + 0x248);
      *(undefined4 *)(lVar17 + 600) = 0;
      *(undefined4 *)(lVar17 + 0x260) = uVar9;
      *(undefined4 *)(lVar17 + 0x264) = uVar9;
      *(undefined4 *)(lVar17 + 0x268) = 0;
      *(undefined1 *)(lVar17 + 0x290) = 0;
      *(undefined1 *)(lVar17 + 0x2a0) = 0;
      FUN_03125a4c();
      plVar25 = *(long **)(param_1 + 0x248);
      plVar20 = (long *)plVar25[0x36];
      if (plVar20 != (long *)0x0) {
        (**(code **)(*plVar20 + 0x28))(plVar20,0);
        (**(code **)(*plVar25 + 0xa8))(plVar25);
        plVar25 = *(long **)(param_1 + 0x248);
      }
      lVar17 = *(long *)plVar25[0x44];
      if (lVar17 != 0) {
        bVar8 = *(byte *)(param_1 + 0x1f8);
        if (7 < bVar8) {
          bVar8 = 0xff;
        }
        local_560 = (code *)CONCAT71(local_560._1_7_,bVar8);
        lVar18 = FUN_025830c0(*puVar19,&local_560,1);
        if (lVar18 == 0) {
          uVar12 = 0;
        }
        else {
          lVar21 = lVar18 + 0x194b0;
          if (*(long *)(lVar18 + 0x194b8) == 0) {
            lVar21 = *(long *)(*(long *)PTR_DAT_04bb46b0 + 0x20);
          }
          if ((*(long **)(lVar21 + 0x178) == (long *)0x0) ||
             (puVar19 = (undefined8 *)**(long **)(lVar21 + 0x178), puVar19 == (undefined8 *)0x0)) {
            uVar11 = 1;
          }
          else {
            uVar11 = (**(code **)*puVar19)();
            uVar11 = uVar11 ^ 1;
          }
          uVar12 = *(uint *)(*(long *)(lVar21 + 0x160) + *(long *)(lVar21 + 0x158) + 72000);
          if (8999 < uVar12) {
            uVar12 = 9000;
          }
          if ((((uVar11 & 1) == 0) && (*(long *)(lVar21 + 0x178) != 0)) &&
             (puVar19 = *(undefined8 **)(*(long *)(lVar21 + 0x178) + 8),
             puVar19 != (undefined8 *)0x0)) {
            (**(code **)*puVar19)();
          }
        }
        local_194 = 0;
        local_198 = 0x13;
        local_1a0 = &local_c8;
        local_170 = local_164;
        local_190 = 0xffffffff;
        local_188 = 0xffffffff00000000;
        local_180 = 0xffffffff;
        local_168 = 0x40;
        local_125 = 0;
        local_164[0] = 0;
        puVar2 = PTR_DAT_04bb2bc0 + 0x10;
        local_118 = local_10c;
        local_110 = 0x40;
        local_cd = 0;
        local_10c[0] = 0;
        local_1a8 = PTR_DAT_04bc0bc0 + 0x10;
        uStack_a8 = 0;
        puVar4 = auStack_a2;
        if (auStack_a2 <= (undefined1 *)((long)&local_c8 + 2U)) {
          puVar4 = (undefined1 *)((long)&local_c8 + 2U);
        }
        local_b8 = 0;
        uStack_b0 = 0;
        local_aa = 0;
        local_c8 = 0;
        uStack_c0 = 0;
        local_178 = puVar2;
        local_120 = puVar2;
        memset(local_1a0,0,(ulong)(puVar4 + (-0xe1 - (long)&local_1a8)) & 0xfffffffffffffffc | 2);
        local_a0 = 0;
        FUN_01be4af0(&local_1a8,**(undefined4 **)PTR_DAT_04bb3448,uVar12,10,0,0);
        local_1d0 = PTR_DAT_04bc0a78;
        local_558 = 0x100;
        puStack_510 = local_504;
        puStack_4b8 = local_4ac;
        local_554 = 0;
        uStack_550._0_4_ = 0;
        uStack_550._4_4_ = 0;
        local_538 = 0;
        uStack_534 = uStack_534 & 0xffffff00;
        local_520 = 0xffffffff;
        local_508 = 0x40;
        local_4c5 = 0;
        local_504[0] = 0;
        local_4b0 = 0x40;
        local_46d = 0;
        local_4ac[0] = 0;
        local_530 = 0xffffffff;
        uStack_528 = 0xffffffff00000000;
        local_548 = PTR_DAT_04bb2e00 + 0x10;
        local_450 = 0;
        puStack_3d0 = local_3c4;
        local_3c4[0] = 0;
        puStack_428 = local_41c;
        local_41c[0] = 0;
        local_44c = 0;
        local_438 = 0xffffffff;
        local_420 = 0x40;
        local_3dd = 0;
        local_3c8 = 0x40;
        local_385 = 0;
        local_468 = 0;
        local_368 = 0;
        local_364 = 0;
        local_360 = 0xffffffff;
        local_358 = 0xffffffff00000000;
        local_350 = 0xffffffff;
        local_338 = 0x40;
        local_2f5 = 0;
        local_2e0 = 0x40;
        local_29d = 0;
        local_380 = 0;
        local_288 = 0;
        local_290 = 0;
        local_298 = 0;
        local_270 = 0x40;
        local_22d = 0;
        local_218 = 0x40;
        local_1d5 = 0;
        local_540 = 0;
        uStack_53f = 0;
        uStack_53b = 0;
        uStack_458 = 0;
        local_2e8 = local_2dc;
        local_2dc[0] = 0;
        uStack_370 = 0;
        local_278 = local_26c;
        local_26c[0] = 0;
        local_220 = local_214;
        local_340 = local_334;
        local_334[0] = 0;
        local_214[0] = 0;
        local_448 = 0xffffffff;
        uStack_440 = 0xffffffff00000000;
        local_1c8 = *(int *)PTR_DAT_04bc0b30;
        local_1c4 = 0;
        *(int *)PTR_DAT_04bc0b30 = local_1c8 + 1;
        local_1d0 = local_1d0 + 0x10;
        local_1c0 = 0;
        local_560 = (code *)(PTR_DAT_04bc0bf0 + 0x10);
        local_1b8 = 0;
        local_1b0 = 0;
        plVar20 = *(long **)(lVar17 + 0x48);
        local_518 = puVar2;
        local_4c0 = puVar2;
        local_460 = local_548;
        local_430 = puVar2;
        local_3d8 = puVar2;
        local_378 = local_548;
        local_348 = puVar2;
        local_2f0 = puVar2;
        local_280 = puVar2;
        local_228 = puVar2;
        local_a0 = uVar12;
        if (plVar20[1] != 0) {
          local_98 = PTR_DAT_04bc0878 + 0x10;
          local_90 = 9;
          (**(code **)(*plVar20 + 0x18))(plVar20,&local_98);
          (**(code **)(plVar20[3] + 0x5e0))(plVar20[1],PTR_DAT_04bb2da0,0);
          FUN_03d7dd80(lVar17);
        }
        FUN_01bea4e8(&local_560,lVar17,&local_1a8);
        FUN_01bea9c8(&local_560);
        FUN_01be9eb8(&local_560);
        pbVar24 = PTR_DAT_04bc4e60;
        puVar26 = PTR_DAT_04bc4f00;
        puVar19 = (undefined8 *)PTR_DAT_04bb4f78;
        uStack_550 = (code *)CONCAT44(uStack_550._4_4_,(int)uStack_550);
      }
      break;
    }
    goto LAB_031915b8;
  case 4:
  case 5:
  case 6:
    if (*(long *)PTR_DAT_04bb2230 == 0) {
      lVar17 = 0;
      if (cRam0000000000000d78 != '\0') goto LAB_03190fa4;
LAB_031911cc:
      bVar8 = 1;
    }
    else {
      lVar17 = *(long *)(*(long *)PTR_DAT_04bb2230 + 0x28);
      if (*(char *)(lVar17 + 0xd78) == '\0') goto LAB_031911cc;
LAB_03190fa4:
      bVar8 = (**(code **)(*(long *)(lVar17 + 0xd70) + 0x18))(lVar17 + 0xd70);
      *(undefined1 *)(lVar17 + 0xd78) = 0;
    }
    local_560 = *(code **)(lVar17 + 0xd80);
    uVar23 = *(undefined8 *)(lVar17 + 0xd88);
    *(byte *)(lVar17 + 0xd79) = bVar8 & 1;
    local_558 = (undefined2)uVar23;
    uStack_556 = (undefined2)((ulong)uVar23 >> 0x10);
    local_554 = (undefined4)((ulong)uVar23 >> 0x20);
    uStack_550._0_4_ = CONCAT31(uStack_550._1_3_,*(undefined1 *)(lVar17 + 0xd9c));
    FUN_03195e80(param_1,&local_560);
    uStack_550 = (code *)CONCAT44(uStack_550._4_4_,(int)uStack_550);
    break;
  case 7:
    lVar17 = *(long *)(*(long *)(*(long *)(param_1 + 0x210) + 0x580) + 0xa0);
    if (lVar17 != 0) {
      *(undefined2 *)(lVar17 + 0xbc) = 0x101;
    }
    *(undefined1 *)(*(long *)(param_1 + 0x1c2c8) + 0x40) = 1;
    uStack_550 = (code *)CONCAT44(uStack_550._4_4_,(int)uStack_550);
  }
  iVar10 = *(int *)(param_1 + 0x1c4fc);
LAB_031915b8:
  if (iVar10 == 8) {
    lVar17 = *(long *)(param_1 + 0x238);
    if (lVar17 != 0) {
      *(undefined8 *)(lVar17 + 0x260) = 0;
      *(undefined4 *)(lVar17 + 600) = 1;
      *(undefined4 *)(lVar17 + 0x268) = 0;
      *(undefined1 *)(lVar17 + 0x290) = 0;
      *(undefined1 *)(lVar17 + 0x2a0) = 0;
      FUN_03125a4c(lVar17,0);
    }
    if (*(long *)(param_1 + 0x240) != 0) {
      uVar9 = FUN_0267fc60(param_1 + 0x1f8);
      lVar17 = *(long *)(param_1 + 0x240);
      *(undefined4 *)(lVar17 + 600) = 1;
      *(undefined4 *)(lVar17 + 0x260) = uVar9;
      *(undefined4 *)(lVar17 + 0x264) = uVar9;
      *(undefined4 *)(lVar17 + 0x268) = 0;
      *(undefined1 *)(lVar17 + 0x290) = 0;
      *(undefined1 *)(lVar17 + 0x2a0) = 0;
      FUN_03125a4c();
    }
    puVar22 = (undefined8 *)**(long **)(*(long *)(param_1 + 0x210) + 0x3f8);
    if ((*pbVar24 & 1) == 0) {
      iVar10 = __cxa_guard_acquire(PTR_DAT_04bc4e60);
      if (iVar10 != 0) {
        *(undefined **)PTR_DAT_04bc4e58 = PTR_DAT_04bc4d38 + 0x10;
        __cxa_guard_release(PTR_DAT_04bc4e60);
      }
    }
    puVar2 = PTR_DAT_04bc4e58;
    uVar14 = (**(code **)*puVar22)(puVar22,PTR_DAT_04bc4e58);
    if ((uVar14 & 1) == 0) {
      puVar22 = (undefined8 *)0x0;
    }
    lVar17 = *(long *)puVar22[0x43];
    if (lVar17 != 0) {
      local_554 = 0;
      uStack_550._0_4_ = 0;
      local_558 = 0x100;
      uStack_550._4_4_ = 0;
      local_538 = 0;
      puStack_510 = local_504;
      uStack_534 = uStack_534 & 0xffffff00;
      local_530 = 0xffffffff;
      uStack_528 = 0xffffffff00000000;
      local_520 = 0xffffffff;
      local_508 = 0x40;
      local_4c5 = 0;
      local_518 = PTR_DAT_04bb2bc0 + 0x10;
      local_504[0] = 0;
      local_4b0 = 0x40;
      local_46d = 0;
      local_4ac[0] = 0;
      puStack_4b8 = local_4ac;
      local_548 = PTR_DAT_04bb2e00 + 0x10;
      local_438 = 0xffffffff;
      puStack_3d0 = local_3c4;
      local_3c4[0] = 0;
      puStack_428 = local_41c;
      local_41c[0] = 0;
      local_360 = 0xffffffff;
      local_350 = 0xffffffff;
      local_358 = 0xffffffff00000000;
      local_450 = 0;
      local_44c = 0;
      local_420 = 0x40;
      local_3dd = 0;
      local_3c8 = 0x40;
      local_385 = 0;
      local_468 = 0;
      local_368 = 0;
      local_364 = 0;
      local_338 = 0x40;
      local_2f5 = 0;
      local_2e0 = 0x40;
      local_29d = 0;
      local_380 = 0;
      local_288 = 0;
      local_290 = 0;
      local_298 = 0;
      local_270 = 0x40;
      local_22d = 0;
      local_218 = 0x40;
      local_1d5 = 0;
      local_448 = 0xffffffff;
      uStack_440 = 0xffffffff00000000;
      local_278 = local_26c;
      local_26c[0] = 0;
      local_220 = local_214;
      local_214[0] = 0;
      local_340 = local_334;
      local_334[0] = 0;
      local_2e8 = local_2dc;
      local_2dc[0] = 0;
      local_540 = 0;
      uStack_53f = 0;
      uStack_53b = 0;
      uStack_458 = 0;
      uStack_370 = 0;
      local_1c8 = *(int *)PTR_DAT_04bc0b30;
      local_1c4 = 0;
      *(int *)PTR_DAT_04bc0b30 = local_1c8 + 1;
      local_1d0 = PTR_DAT_04bc0a78 + 0x10;
      local_1c0 = 0;
      local_1b8 = 0;
      local_1b0 = 0;
      local_560 = (code *)(PTR_DAT_04bc0bf0 + 0x10);
      local_1a8 = PTR_DAT_04bb2020 + 0x10;
      local_1a0 = (undefined8 *)&DAT_040a04a3;
      local_4c0 = local_518;
      local_460 = local_548;
      local_430 = local_518;
      local_3d8 = local_518;
      local_378 = local_548;
      local_348 = local_518;
      local_2f0 = local_518;
      local_280 = local_518;
      local_228 = local_518;
      FUN_01bea210(&local_560,lVar17,&DAT_05701708,&local_1a8);
      FUN_01bea9c8(&local_560);
      FUN_01be9eb8(&local_560);
    }
    puVar22 = (undefined8 *)**(long **)(*(long *)(param_1 + 0x210) + 0x3f8);
    if ((*pbVar24 & 1) == 0) {
      iVar10 = __cxa_guard_acquire(PTR_DAT_04bc4e60);
      if (iVar10 != 0) {
        *(undefined **)puVar2 = PTR_DAT_04bc4d38 + 0x10;
        __cxa_guard_release(PTR_DAT_04bc4e60);
      }
    }
    uVar14 = (**(code **)*puVar22)(puVar22,PTR_DAT_04bc4e58);
    if ((uVar14 & 1) == 0) {
      puVar22 = (undefined8 *)0x0;
    }
    lVar17 = *(long *)(puVar22[0x43] + (ulong)(1 < *(uint *)(puVar22 + 0x42)) * 8);
    if (lVar17 != 0) {
      local_554 = 0;
      uStack_550._0_4_ = 0;
      local_558 = 0x100;
      uStack_550._4_4_ = 0;
      local_538 = 0;
      puStack_510 = local_504;
      uStack_534 = uStack_534 & 0xffffff00;
      local_530 = 0xffffffff;
      uStack_528 = 0xffffffff00000000;
      local_520 = 0xffffffff;
      local_508 = 0x40;
      local_4c5 = 0;
      local_518 = PTR_DAT_04bb2bc0 + 0x10;
      local_504[0] = 0;
      local_4b0 = 0x40;
      local_46d = 0;
      local_4ac[0] = 0;
      puStack_4b8 = local_4ac;
      local_548 = PTR_DAT_04bb2e00 + 0x10;
      local_438 = 0xffffffff;
      puStack_3d0 = local_3c4;
      local_3c4[0] = 0;
      puStack_428 = local_41c;
      local_41c[0] = 0;
      local_360 = 0xffffffff;
      local_350 = 0xffffffff;
      local_358 = 0xffffffff00000000;
      local_450 = 0;
      local_44c = 0;
      local_420 = 0x40;
      local_3dd = 0;
      local_3c8 = 0x40;
      local_385 = 0;
      local_468 = 0;
      local_368 = 0;
      local_364 = 0;
      local_338 = 0x40;
      local_2f5 = 0;
      local_2e0 = 0x40;
      local_29d = 0;
      local_380 = 0;
      local_288 = 0;
      local_290 = 0;
      local_298 = 0;
      local_270 = 0x40;
      local_22d = 0;
      local_218 = 0x40;
      local_1d5 = 0;
      local_448 = 0xffffffff;
      uStack_440 = 0xffffffff00000000;
      local_278 = local_26c;
      local_26c[0] = 0;
      local_220 = local_214;
      local_214[0] = 0;
      local_340 = local_334;
      local_334[0] = 0;
      local_2e8 = local_2dc;
      local_2dc[0] = 0;
      local_540 = 0;
      uStack_53f = 0;
      uStack_53b = 0;
      uStack_458 = 0;
      uStack_370 = 0;
      local_1c8 = *(int *)PTR_DAT_04bc0b30;
      local_1c4 = 0;
      *(int *)PTR_DAT_04bc0b30 = local_1c8 + 1;
      local_1d0 = PTR_DAT_04bc0a78 + 0x10;
      local_1c0 = 0;
      local_1b8 = 0;
      local_1b0 = 0;
      local_560 = (code *)(PTR_DAT_04bc0bf0 + 0x10);
      local_1a8 = PTR_DAT_04bb2020 + 0x10;
      local_1a0 = (undefined8 *)&DAT_040f8ff3;
      local_4c0 = local_518;
      local_460 = local_548;
      local_430 = local_518;
      local_3d8 = local_518;
      local_378 = local_548;
      local_348 = local_518;
      local_2f0 = local_518;
      local_280 = local_518;
      local_228 = local_518;
      FUN_01bea210(&local_560,lVar17,&DAT_05701708,&local_1a8);
      FUN_01bea9c8(&local_560);
      FUN_01be9eb8(&local_560);
    }
  }
  local_558 = 0x100;
  local_540 = 0;
  uStack_53f = 0;
  uStack_53b = 0;
  local_560 = (code *)(PTR_DAT_04bb73c8 + 0x10);
  FUN_0338b5cc(&local_560);
  lVar17 = *(long *)PTR_DAT_04bb2230;
  if (lVar17 == 0) {
    lVar18 = 0;
  }
  else {
    lVar18 = *(long *)(lVar17 + 0x28);
  }
  if (DAT_05739db8 != 0) {
    lVar21 = DAT_05739da8;
    if (DAT_05739db8 < 1) {
      lVar21 = 0;
    }
    if (*(char *)(lVar21 + 0x82) != '\0') {
      *(undefined1 *)(lVar21 + 0x83) = 1;
      lVar17 = *(long *)PTR_DAT_04bb2230;
    }
  }
  *(undefined4 *)(&DAT_00002140 + lVar18) = 0xd;
  *(undefined2 *)(lVar18 + 0xd78) = local_558;
  *(ulong *)(lVar18 + 0xd90) = CONCAT35(uStack_53b,CONCAT41(uStack_53f,local_540));
  *(code **)(lVar18 + 0xd80) = uStack_550;
  *(undefined **)(lVar18 + 0xd88) = local_548;
  *(ulong *)(lVar18 + 0xd95) = CONCAT17((undefined1)uStack_534,CONCAT43(local_538,uStack_53b));
  if (lVar17 == 0) {
    lVar18 = 0;
  }
  else {
    lVar18 = *(long *)(lVar17 + 0x28);
  }
  if (DAT_05739db8 != 0) {
    lVar21 = DAT_05739da8;
    if (DAT_05739db8 < 1) {
      lVar21 = 0;
    }
    if (*(char *)(lVar21 + 0x68) != '\0') {
      *(undefined1 *)(lVar21 + 0x69) = 1;
      lVar17 = *(long *)PTR_DAT_04bb2230;
    }
  }
  *(undefined1 *)(lVar18 + 0x12) = 1;
  lVar18 = 0;
  if (lVar17 != 0) {
    lVar18 = *(long *)(lVar17 + 0x28);
  }
  local_1a8 = (undefined *)((ulong)local_1a8 & 0xffffffff00000000);
  local_98 = (undefined *)CONCAT44(local_98._4_4_,1);
  if (DAT_05739db8 != 0) {
    lVar17 = DAT_05739da8;
    if (DAT_05739db8 < 1) {
      lVar17 = 0;
    }
    if (*(char *)(lVar17 + 0x6a) != '\0') {
      *(undefined1 *)(lVar17 + 0x6b) = 1;
    }
  }
  uVar9 = *(undefined4 *)(PTR_DAT_04bb37e0 + 4);
  *(undefined4 *)(lVar18 + 0x2c) = *(undefined4 *)PTR_DAT_04bb37e0;
  *(undefined4 *)(lVar18 + 0x30) = uVar9;
  *(undefined4 *)(&DAT_00002140 + lVar18) = 1;
  lVar17 = *(long *)(*(long *)(*(long *)(param_1 + 0x210) + 0x570) + 0xa0);
  if (lVar17 != 0) {
    *(undefined1 *)(lVar17 + 0xbc) = *(undefined1 *)(param_1 + 0x1c51d);
  }
  pbVar15 = (byte *)FUN_033d0598(PTR_DAT_04bb32e0);
  bVar8 = *pbVar15;
  *(byte *)(param_1 + 0x1c515) = bVar8;
  if ((bVar8 | 2) == 0x2a) {
    *(undefined1 *)(param_1 + 0x1c515) = 0xff;
  }
  puVar22 = (undefined8 *)**(long **)(*(long *)(param_1 + 0x210) + 0x3f8);
  if ((*pbVar24 & 1) == 0) {
    iVar10 = __cxa_guard_acquire(PTR_DAT_04bc4e60);
    if (iVar10 != 0) {
      *(undefined **)PTR_DAT_04bc4e58 = PTR_DAT_04bc4d38 + 0x10;
      __cxa_guard_release(PTR_DAT_04bc4e60);
    }
  }
  uVar14 = (**(code **)*puVar22)(puVar22,PTR_DAT_04bc4e58);
  if ((uVar14 & 1) == 0) {
    puVar22 = (undefined8 *)0x0;
  }
  plVar20 = *(long **)(puVar22[0x45] + (ulong)(1 < *(uint *)(puVar22 + 0x44)) * 8);
  if (plVar20 != (long *)0x0) {
    bVar8 = *(byte *)(param_1 + 0x1f8);
    if (7 < bVar8) {
      bVar8 = 0xff;
    }
    local_1a8 = (undefined *)CONCAT71(local_1a8._1_7_,bVar8);
    lVar17 = FUN_025830c0(*puVar19,&local_1a8,1);
    if (lVar17 == 0) {
      cVar6 = '\0';
    }
    else {
      pcVar3 = (code *)(PTR_DAT_04bb2020 + 0x10);
      local_558 = 0x9910;
      uStack_556 = 0x40d;
      local_554 = 0;
      local_560 = pcVar3;
      iVar10 = FUN_0274b8d0(lVar17,&local_560);
      if (iVar10 == 0) {
        local_558 = 0x686b;
        uStack_556 = 0x408;
        local_554 = 0;
        local_560 = pcVar3;
        iVar10 = FUN_0274b8d0(lVar17,&local_560);
        cVar6 = iVar10 != 0;
      }
      else {
        cVar6 = '\x02';
      }
    }
    local_558 = 0x14;
    uStack_556 = 0;
    uVar23 = 0x3f800000;
    if (cVar6 != '\x01') {
      uVar23 = 0;
    }
    local_560 = (code *)(puVar26 + 0x10);
    uVar27 = 0x40000000;
    if (cVar6 != '\x02') {
      uVar27 = uVar23;
    }
    (**(code **)(*plVar20 + 0x18))(plVar20,&local_560);
    (**(code **)(plVar20[3] + 0x158))(uVar27,plVar20[1]);
  }
  pbVar24 = (byte *)(param_1 + 0x1f8);
  uVar9 = FUN_02672e00(pbVar24);
  *(undefined4 *)(param_1 + 0x1c500) = uVar9;
  local_560 = (code *)0x839;
  FUN_0277d4ac(&local_560);
  puVar2 = PTR_PTR_04bb2238;
  if ((**(char **)(PTR_PTR_04bb2238 + 8) == '\0') && ((short)local_560 == -2)) {
    iVar13 = -1;
  }
  else {
    iVar13 = 0;
    iVar10 = 0;
    do {
      if ((*(int *)(param_1 + 0x268 + (long)iVar10 * 0x1a8 + 0x1a0) == 0) &&
         (lVar17 = param_1 + 0x268 + (long)iVar10 * 0x1a8, (*(byte *)(lVar17 + 0x18) >> 1 & 1) == 0)
         ) {
        FUN_03412d40(lVar17,PTR_PTR_04bb2238,&local_560,0);
        goto LAB_03191e3c;
      }
      iVar10 = iVar10 + 1;
      iVar13 = iVar13 + 1;
    } while (iVar10 != 0x10e);
    iVar13 = -1;
  }
LAB_03191e3c:
  *(int *)(param_1 + 0x1c2ac) = iVar13;
  local_560 = (code *)0x842;
  FUN_0277d4ac(&local_560);
  if (**(char **)(puVar2 + 8) == '\0' && (short)local_560 == -2) {
    iVar10 = -1;
  }
  else {
    iVar10 = 0;
    iVar13 = 0;
    do {
      if ((*(int *)(param_1 + 0x268 + (long)iVar13 * 0x1a8 + 0x1a0) == 0) &&
         (lVar17 = param_1 + 0x268 + (long)iVar13 * 0x1a8, (*(byte *)(lVar17 + 0x18) >> 1 & 1) == 0)
         ) {
        FUN_03412d40(lVar17,PTR_PTR_04bb2238,&local_560,0);
        goto LAB_03191ed4;
      }
      iVar13 = iVar13 + 1;
      iVar10 = iVar10 + 1;
    } while (iVar13 != 0x10e);
    iVar10 = -1;
  }
LAB_03191ed4:
  *(int *)(param_1 + 0x1c2b0) = iVar10;
  local_560 = (code *)0x873;
  FUN_0277d4ac(&local_560);
  if (**(char **)(puVar2 + 8) == '\0' && (short)local_560 == -2) {
    iVar10 = -1;
  }
  else {
    iVar10 = 0;
    iVar13 = 0;
    do {
      if ((*(int *)(param_1 + 0x268 + (long)iVar13 * 0x1a8 + 0x1a0) == 0) &&
         (lVar17 = param_1 + 0x268 + (long)iVar13 * 0x1a8, (*(byte *)(lVar17 + 0x18) >> 1 & 1) == 0)
         ) {
        FUN_03412d40(lVar17,PTR_PTR_04bb2238,&local_560,0);
        goto LAB_03191f70;
      }
      iVar13 = iVar13 + 1;
      iVar10 = iVar10 + 1;
    } while (iVar13 != 0x10e);
    iVar10 = -1;
  }
LAB_03191f70:
  *(int *)(param_1 + 0x1c2b4) = iVar10;
  local_560 = (code *)0x8a4;
  FUN_0277d4ac(&local_560);
  if (**(char **)(puVar2 + 8) == '\0' && (short)local_560 == -2) {
    iVar10 = -1;
  }
  else {
    iVar10 = 0;
    iVar13 = 0;
    do {
      if ((*(int *)(param_1 + 0x268 + (long)iVar13 * 0x1a8 + 0x1a0) == 0) &&
         (lVar17 = param_1 + 0x268 + (long)iVar13 * 0x1a8, (*(byte *)(lVar17 + 0x18) >> 1 & 1) == 0)
         ) {
        FUN_03412d40(lVar17,PTR_PTR_04bb2238,&local_560,0);
        goto LAB_03192010;
      }
      iVar13 = iVar13 + 1;
      iVar10 = iVar10 + 1;
    } while (iVar13 != 0x10e);
    iVar10 = -1;
  }
LAB_03192010:
  *(int *)(param_1 + 0x1c2b8) = iVar10;
  local_1a8 = (undefined *)((ulong)local_1a8 & 0xffffffff00000000);
  local_560 = (code *)(ulong)(ushort)DAT_04177938;
  FUN_0277d4ac(&local_560);
  if (**(char **)(puVar2 + 8) == '\0' && (short)local_560 == -2) {
    iVar10 = -1;
  }
  else {
    iVar10 = 0;
    iVar13 = 0;
    do {
      if ((*(int *)(param_1 + 0x268 + (long)iVar13 * 0x1a8 + 0x1a0) == 0) &&
         (lVar17 = param_1 + 0x268 + (long)iVar13 * 0x1a8, (*(byte *)(lVar17 + 0x18) >> 1 & 1) == 0)
         ) {
        FUN_03412d40(lVar17,PTR_PTR_04bb2238,&local_560,0);
        goto LAB_031920c4;
      }
      iVar13 = iVar13 + 1;
      iVar10 = iVar10 + 1;
    } while (iVar13 != 0x10e);
    iVar10 = -1;
  }
LAB_031920c4:
  *(int *)(param_1 + 0x1c258) = iVar10;
  local_1a8 = (undefined *)CONCAT44(local_1a8._4_4_,1);
  local_560 = (code *)(ulong)(ushort)DAT_0417793c;
  FUN_0277d4ac(&local_560);
  if (**(char **)(puVar2 + 8) == '\0' && (short)local_560 == -2) {
    iVar10 = -1;
  }
  else {
    iVar10 = 0;
    iVar13 = 0;
    do {
      if ((*(int *)(param_1 + 0x268 + (long)iVar13 * 0x1a8 + 0x1a0) == 0) &&
         (lVar17 = param_1 + 0x268 + (long)iVar13 * 0x1a8, (*(byte *)(lVar17 + 0x18) >> 1 & 1) == 0)
         ) {
        FUN_03412d40(lVar17,PTR_PTR_04bb2238,&local_560,0);
        goto LAB_03192180;
      }
      iVar13 = iVar13 + 1;
      iVar10 = iVar10 + 1;
    } while (iVar13 != 0x10e);
    iVar10 = -1;
  }
LAB_03192180:
  *(int *)(param_1 + 0x1c25c) = iVar10;
  local_1a8 = (undefined *)CONCAT44(local_1a8._4_4_,2);
  local_560 = (code *)(ulong)(ushort)DAT_04177940;
  FUN_0277d4ac(&local_560);
  if (**(char **)(puVar2 + 8) == '\0' && (short)local_560 == -2) {
    iVar10 = -1;
  }
  else {
    iVar10 = 0;
    iVar13 = 0;
    do {
      if ((*(int *)(param_1 + 0x268 + (long)iVar13 * 0x1a8 + 0x1a0) == 0) &&
         (lVar17 = param_1 + 0x268 + (long)iVar13 * 0x1a8, (*(byte *)(lVar17 + 0x18) >> 1 & 1) == 0)
         ) {
        FUN_03412d40(lVar17,PTR_PTR_04bb2238,&local_560,0);
        goto LAB_03192230;
      }
      iVar13 = iVar13 + 1;
      iVar10 = iVar10 + 1;
    } while (iVar13 != 0x10e);
    iVar10 = -1;
  }
LAB_03192230:
  *(int *)(param_1 + 0x1c260) = iVar10;
  local_1a8 = (undefined *)CONCAT44(local_1a8._4_4_,3);
  local_560 = (code *)(ulong)(ushort)DAT_04177944;
  FUN_0277d4ac(&local_560);
  if (**(char **)(puVar2 + 8) == '\0' && (short)local_560 == -2) {
    iVar10 = -1;
  }
  else {
    iVar10 = 0;
    iVar13 = 0;
    do {
      if ((*(int *)(param_1 + 0x268 + (long)iVar13 * 0x1a8 + 0x1a0) == 0) &&
         (lVar17 = param_1 + 0x268 + (long)iVar13 * 0x1a8, (*(byte *)(lVar17 + 0x18) >> 1 & 1) == 0)
         ) {
        FUN_03412d40(lVar17,PTR_PTR_04bb2238,&local_560,0);
        goto LAB_031922e4;
      }
      iVar13 = iVar13 + 1;
      iVar10 = iVar10 + 1;
    } while (iVar13 != 0x10e);
    iVar10 = -1;
  }
LAB_031922e4:
  *(int *)(param_1 + 0x1c264) = iVar10;
  local_1a8 = (undefined *)CONCAT44(local_1a8._4_4_,4);
  local_560 = (code *)(ulong)(ushort)DAT_04177948;
  FUN_0277d4ac(&local_560);
  if (**(char **)(puVar2 + 8) == '\0' && (short)local_560 == -2) {
    iVar10 = -1;
  }
  else {
    iVar10 = 0;
    iVar13 = 0;
    do {
      if ((*(int *)(param_1 + 0x268 + (long)iVar13 * 0x1a8 + 0x1a0) == 0) &&
         (lVar17 = param_1 + 0x268 + (long)iVar13 * 0x1a8, (*(byte *)(lVar17 + 0x18) >> 1 & 1) == 0)
         ) {
        FUN_03412d40(lVar17,PTR_PTR_04bb2238,&local_560,0);
        goto LAB_03192394;
      }
      iVar13 = iVar13 + 1;
      iVar10 = iVar10 + 1;
    } while (iVar13 != 0x10e);
    iVar10 = -1;
  }
LAB_03192394:
  *(int *)(param_1 + 0x1c268) = iVar10;
  local_1a8 = (undefined *)CONCAT44(local_1a8._4_4_,5);
  local_560 = (code *)(ulong)(ushort)DAT_0417794c;
  FUN_0277d4ac(&local_560);
  if (**(char **)(puVar2 + 8) == '\0' && (short)local_560 == -2) {
    iVar10 = -1;
  }
  else {
    iVar10 = 0;
    iVar13 = 0;
    do {
      if ((*(int *)(param_1 + 0x268 + (long)iVar13 * 0x1a8 + 0x1a0) == 0) &&
         (lVar17 = param_1 + 0x268 + (long)iVar13 * 0x1a8, (*(byte *)(lVar17 + 0x18) >> 1 & 1) == 0)
         ) {
        FUN_03412d40(lVar17,PTR_PTR_04bb2238,&local_560,0);
        goto LAB_03192450;
      }
      iVar13 = iVar13 + 1;
      iVar10 = iVar10 + 1;
    } while (iVar13 != 0x10e);
    iVar10 = -1;
  }
LAB_03192450:
  *(int *)(param_1 + 0x1c26c) = iVar10;
  local_1a8 = (undefined *)CONCAT44(local_1a8._4_4_,6);
  local_560 = (code *)(ulong)(ushort)DAT_04177950;
  FUN_0277d4ac(&local_560);
  if (**(char **)(puVar2 + 8) == '\0' && (short)local_560 == -2) {
    iVar10 = -1;
  }
  else {
    iVar10 = 0;
    iVar13 = 0;
    do {
      if ((*(int *)(param_1 + 0x268 + (long)iVar13 * 0x1a8 + 0x1a0) == 0) &&
         (lVar17 = param_1 + 0x268 + (long)iVar13 * 0x1a8, (*(byte *)(lVar17 + 0x18) >> 1 & 1) == 0)
         ) {
        FUN_03412d40(lVar17,PTR_PTR_04bb2238,&local_560,0);
        goto LAB_03192500;
      }
      iVar13 = iVar13 + 1;
      iVar10 = iVar10 + 1;
    } while (iVar13 != 0x10e);
    iVar10 = -1;
  }
LAB_03192500:
  *(int *)(param_1 + 0x1c270) = iVar10;
  local_1a8 = (undefined *)CONCAT44(local_1a8._4_4_,7);
  local_560 = (code *)(ulong)(ushort)DAT_04177954;
  FUN_0277d4ac(&local_560);
  if (**(char **)(puVar2 + 8) == '\0' && (short)local_560 == -2) {
    iVar10 = -1;
  }
  else {
    iVar10 = 0;
    iVar13 = 0;
    do {
      if ((*(int *)(param_1 + 0x268 + (long)iVar13 * 0x1a8 + 0x1a0) == 0) &&
         (lVar17 = param_1 + 0x268 + (long)iVar13 * 0x1a8, (*(byte *)(lVar17 + 0x18) >> 1 & 1) == 0)
         ) {
        FUN_03412d40(lVar17,PTR_PTR_04bb2238,&local_560,0);
        goto LAB_031925b4;
      }
      iVar13 = iVar13 + 1;
      iVar10 = iVar10 + 1;
    } while (iVar13 != 0x10e);
    iVar10 = -1;
  }
LAB_031925b4:
  *(int *)(param_1 + 0x1c274) = iVar10;
  local_1a8 = (undefined *)CONCAT44(local_1a8._4_4_,8);
  local_560 = (code *)(ulong)(ushort)DAT_04177958;
  FUN_0277d4ac(&local_560);
  if (**(char **)(puVar2 + 8) == '\0' && (short)local_560 == -2) {
    iVar10 = -1;
  }
  else {
    iVar10 = 0;
    iVar13 = 0;
    do {
      if ((*(int *)(param_1 + 0x268 + (long)iVar13 * 0x1a8 + 0x1a0) == 0) &&
         (lVar17 = param_1 + 0x268 + (long)iVar13 * 0x1a8, (*(byte *)(lVar17 + 0x18) >> 1 & 1) == 0)
         ) {
        FUN_03412d40(lVar17,PTR_PTR_04bb2238,&local_560,0);
        goto LAB_03192664;
      }
      iVar13 = iVar13 + 1;
      iVar10 = iVar10 + 1;
    } while (iVar13 != 0x10e);
    iVar10 = -1;
  }
LAB_03192664:
  *(int *)(param_1 + 0x1c278) = iVar10;
  local_1a8 = (undefined *)CONCAT44(local_1a8._4_4_,9);
  local_560 = (code *)(ulong)(ushort)DAT_0417795c;
  FUN_0277d4ac(&local_560);
  if (**(char **)(puVar2 + 8) == '\0' && (short)local_560 == -2) {
    iVar10 = -1;
  }
  else {
    iVar10 = 0;
    iVar13 = 0;
    do {
      if ((*(int *)(param_1 + 0x268 + (long)iVar13 * 0x1a8 + 0x1a0) == 0) &&
         (lVar17 = param_1 + 0x268 + (long)iVar13 * 0x1a8, (*(byte *)(lVar17 + 0x18) >> 1 & 1) == 0)
         ) {
        FUN_03412d40(lVar17,PTR_PTR_04bb2238,&local_560,0);
        goto LAB_03192720;
      }
      iVar13 = iVar13 + 1;
      iVar10 = iVar10 + 1;
    } while (iVar13 != 0x10e);
    iVar10 = -1;
  }
LAB_03192720:
  *(int *)(param_1 + 0x1c27c) = iVar10;
  local_1a8 = (undefined *)CONCAT44(local_1a8._4_4_,10);
  local_560 = (code *)(ulong)(ushort)DAT_04177960;
  FUN_0277d4ac(&local_560);
  if (**(char **)(puVar2 + 8) == '\0' && (short)local_560 == -2) {
    iVar10 = -1;
  }
  else {
    iVar10 = 0;
    iVar13 = 0;
    do {
      if ((*(int *)(param_1 + 0x268 + (long)iVar13 * 0x1a8 + 0x1a0) == 0) &&
         (lVar17 = param_1 + 0x268 + (long)iVar13 * 0x1a8, (*(byte *)(lVar17 + 0x18) >> 1 & 1) == 0)
         ) {
        FUN_03412d40(lVar17,PTR_PTR_04bb2238,&local_560,0);
        goto LAB_031927d0;
      }
      iVar13 = iVar13 + 1;
      iVar10 = iVar10 + 1;
    } while (iVar13 != 0x10e);
    iVar10 = -1;
  }
LAB_031927d0:
  *(int *)(param_1 + 0x1c280) = iVar10;
  local_1a8 = (undefined *)CONCAT44(local_1a8._4_4_,0xb);
  local_560 = (code *)(ulong)(ushort)DAT_04177964;
  FUN_0277d4ac(&local_560);
  if (**(char **)(puVar2 + 8) == '\0' && (short)local_560 == -2) {
    iVar10 = -1;
  }
  else {
    iVar10 = 0;
    iVar13 = 0;
    do {
      if ((*(int *)(param_1 + 0x268 + (long)iVar13 * 0x1a8 + 0x1a0) == 0) &&
         (lVar17 = param_1 + 0x268 + (long)iVar13 * 0x1a8, (*(byte *)(lVar17 + 0x18) >> 1 & 1) == 0)
         ) {
        FUN_03412d40(lVar17,PTR_PTR_04bb2238,&local_560,0);
        goto LAB_03192884;
      }
      iVar13 = iVar13 + 1;
      iVar10 = iVar10 + 1;
    } while (iVar13 != 0x10e);
    iVar10 = -1;
  }
LAB_03192884:
  *(int *)(param_1 + 0x1c284) = iVar10;
  local_1a8 = (undefined *)CONCAT44(local_1a8._4_4_,0xc);
  local_560 = (code *)(ulong)(ushort)DAT_04177968;
  FUN_0277d4ac(&local_560);
  if (**(char **)(puVar2 + 8) == '\0' && (short)local_560 == -2) {
    iVar10 = -1;
  }
  else {
    iVar10 = 0;
    iVar13 = 0;
    do {
      if ((*(int *)(param_1 + 0x268 + (long)iVar13 * 0x1a8 + 0x1a0) == 0) &&
         (lVar17 = param_1 + 0x268 + (long)iVar13 * 0x1a8, (*(byte *)(lVar17 + 0x18) >> 1 & 1) == 0)
         ) {
        FUN_03412d40(lVar17,PTR_PTR_04bb2238,&local_560,0);
        goto LAB_03192934;
      }
      iVar13 = iVar13 + 1;
      iVar10 = iVar10 + 1;
    } while (iVar13 != 0x10e);
    iVar10 = -1;
  }
LAB_03192934:
  *(int *)(param_1 + 0x1c288) = iVar10;
  local_1a8 = (undefined *)CONCAT44(local_1a8._4_4_,0xd);
  local_560 = (code *)(ulong)(ushort)DAT_0417796c;
  FUN_0277d4ac(&local_560);
  if (**(char **)(puVar2 + 8) == '\0' && (short)local_560 == -2) {
    iVar10 = -1;
  }
  else {
    iVar10 = 0;
    iVar13 = 0;
    do {
      if ((*(int *)(param_1 + 0x268 + (long)iVar13 * 0x1a8 + 0x1a0) == 0) &&
         (lVar17 = param_1 + 0x268 + (long)iVar13 * 0x1a8, (*(byte *)(lVar17 + 0x18) >> 1 & 1) == 0)
         ) {
        FUN_03412d40(lVar17,PTR_PTR_04bb2238,&local_560,0);
        goto LAB_031929f0;
      }
      iVar13 = iVar13 + 1;
      iVar10 = iVar10 + 1;
    } while (iVar13 != 0x10e);
    iVar10 = -1;
  }
LAB_031929f0:
  *(int *)(param_1 + 0x1c28c) = iVar10;
  local_1a8 = (undefined *)CONCAT44(local_1a8._4_4_,0xe);
  local_560 = (code *)(ulong)(ushort)DAT_04177970;
  FUN_0277d4ac(&local_560);
  if (**(char **)(puVar2 + 8) == '\0' && (short)local_560 == -2) {
    iVar10 = -1;
  }
  else {
    iVar10 = 0;
    iVar13 = 0;
    do {
      if ((*(int *)(param_1 + 0x268 + (long)iVar13 * 0x1a8 + 0x1a0) == 0) &&
         (lVar17 = param_1 + 0x268 + (long)iVar13 * 0x1a8, (*(byte *)(lVar17 + 0x18) >> 1 & 1) == 0)
         ) {
        FUN_03412d40(lVar17,PTR_PTR_04bb2238,&local_560,0);
        goto LAB_03192aa0;
      }
      iVar13 = iVar13 + 1;
      iVar10 = iVar10 + 1;
    } while (iVar13 != 0x10e);
    iVar10 = -1;
  }
LAB_03192aa0:
  *(int *)(param_1 + 0x1c290) = iVar10;
  local_1a8 = (undefined *)CONCAT44(local_1a8._4_4_,0xf);
  local_560 = (code *)(ulong)(ushort)DAT_04177974;
  FUN_0277d4ac(&local_560);
  if (**(char **)(puVar2 + 8) == '\0' && (short)local_560 == -2) {
    iVar10 = -1;
  }
  else {
    iVar10 = 0;
    iVar13 = 0;
    do {
      if ((*(int *)(param_1 + 0x268 + (long)iVar13 * 0x1a8 + 0x1a0) == 0) &&
         (lVar17 = param_1 + 0x268 + (long)iVar13 * 0x1a8, (*(byte *)(lVar17 + 0x18) >> 1 & 1) == 0)
         ) {
        FUN_03412d40(lVar17,PTR_PTR_04bb2238,&local_560,0);
        goto LAB_03192b54;
      }
      iVar13 = iVar13 + 1;
      iVar10 = iVar10 + 1;
    } while (iVar13 != 0x10e);
    iVar10 = -1;
  }
LAB_03192b54:
  *(int *)(param_1 + 0x1c294) = iVar10;
  local_1a8 = (undefined *)CONCAT44(local_1a8._4_4_,0x10);
  local_560 = (code *)(ulong)(ushort)DAT_04177978;
  FUN_0277d4ac(&local_560);
  if (**(char **)(puVar2 + 8) == '\0' && (short)local_560 == -2) {
    iVar10 = -1;
  }
  else {
    iVar10 = 0;
    iVar13 = 0;
    do {
      if ((*(int *)(param_1 + 0x268 + (long)iVar13 * 0x1a8 + 0x1a0) == 0) &&
         (lVar17 = param_1 + 0x268 + (long)iVar13 * 0x1a8, (*(byte *)(lVar17 + 0x18) >> 1 & 1) == 0)
         ) {
        FUN_03412d40(lVar17,PTR_PTR_04bb2238,&local_560,0);
        goto LAB_03192c04;
      }
      iVar13 = iVar13 + 1;
      iVar10 = iVar10 + 1;
    } while (iVar13 != 0x10e);
    iVar10 = -1;
  }
LAB_03192c04:
  *(int *)(param_1 + 0x1c298) = iVar10;
  local_1a8 = (undefined *)CONCAT44(local_1a8._4_4_,1);
  local_560 = (code *)(ulong)(ushort)DAT_04101d04;
  FUN_0277d4ac(&local_560);
  if (**(char **)(puVar2 + 8) == '\0' && (short)local_560 == -2) {
    iVar10 = -1;
  }
  else {
    iVar10 = 0;
    iVar13 = 0;
    do {
      if ((*(int *)(param_1 + 0x268 + (long)iVar13 * 0x1a8 + 0x1a0) == 0) &&
         (lVar17 = param_1 + 0x268 + (long)iVar13 * 0x1a8, (*(byte *)(lVar17 + 0x18) >> 1 & 1) == 0)
         ) {
        FUN_03412d40(lVar17,PTR_PTR_04bb2238,&local_560,0);
        goto LAB_03192cc0;
      }
      iVar13 = iVar13 + 1;
      iVar10 = iVar10 + 1;
    } while (iVar13 != 0x10e);
    iVar10 = -1;
  }
LAB_03192cc0:
  *(int *)(param_1 + 0x1c2a0) = iVar10;
  local_1a8 = (undefined *)CONCAT44(local_1a8._4_4_,2);
  local_560 = (code *)(ulong)(ushort)DAT_04101d08;
  FUN_0277d4ac(&local_560);
  if (**(char **)(puVar2 + 8) == '\0' && (short)local_560 == -2) {
    iVar10 = -1;
  }
  else {
    iVar10 = 0;
    iVar13 = 0;
    do {
      if ((*(int *)(param_1 + 0x268 + (long)iVar13 * 0x1a8 + 0x1a0) == 0) &&
         (lVar17 = param_1 + 0x268 + (long)iVar13 * 0x1a8, (*(byte *)(lVar17 + 0x18) >> 1 & 1) == 0)
         ) {
        FUN_03412d40(lVar17,PTR_PTR_04bb2238,&local_560,0);
        goto LAB_03192d70;
      }
      iVar13 = iVar13 + 1;
      iVar10 = iVar10 + 1;
    } while (iVar13 != 0x10e);
    iVar10 = -1;
  }
LAB_03192d70:
  *(int *)(param_1 + 0x1c2a4) = iVar10;
  local_1a8 = (undefined *)CONCAT44(local_1a8._4_4_,3);
  local_560 = (code *)(ulong)(ushort)DAT_04101d0c;
  FUN_0277d4ac(&local_560);
  if (**(char **)(puVar2 + 8) == '\0' && (short)local_560 == -2) {
    iVar10 = -1;
  }
  else {
    iVar10 = 0;
    iVar13 = 0;
    do {
      if ((*(int *)(param_1 + 0x268 + (long)iVar13 * 0x1a8 + 0x1a0) == 0) &&
         (lVar17 = param_1 + 0x268 + (long)iVar13 * 0x1a8, (*(byte *)(lVar17 + 0x18) >> 1 & 1) == 0)
         ) {
        FUN_03412d40(lVar17,PTR_PTR_04bb2238,&local_560,0);
        goto LAB_03192e24;
      }
      iVar13 = iVar13 + 1;
      iVar10 = iVar10 + 1;
    } while (iVar13 != 0x10e);
    iVar10 = -1;
  }
LAB_03192e24:
  *(int *)(param_1 + 0x1c2a8) = iVar10;
  lVar18 = *(long *)(*(long *)(param_1 + 0x210) + 0x6e8);
  lVar17 = *(long *)(*(long *)(param_1 + 0x210) + 0x6f0);
  uVar23 = *(undefined8 *)(lVar17 + 0x2b8);
  uVar27 = *(undefined8 *)(lVar18 + 0x2b8);
  plVar25 = (long *)**(undefined8 **)(lVar18 + 0x288);
  plVar20 = (long *)**(undefined8 **)(lVar17 + 0x288);
  local_558 = 0x1f;
  uStack_556 = 0;
  pcVar3 = (code *)(PTR_DAT_04bc0cb8 + 0x10);
  local_560 = pcVar3;
  (**(code **)(*plVar25 + 0x20))(plVar25,&local_560);
  (**(code **)(plVar25[3] + 0x210))(uVar27,plVar25[1],0,0);
  local_558 = 0x1f;
  uStack_556 = 0;
  local_560 = pcVar3;
  (**(code **)(*plVar25 + 0x18))(plVar25,&local_560);
  (**(code **)(plVar25[3] + 0x208))(plVar25[1],0,0,uVar27);
  local_558 = 0x1f;
  uStack_556 = 0;
  local_560 = pcVar3;
  (**(code **)(*plVar20 + 0x20))(plVar20,&local_560);
  (**(code **)(plVar20[3] + 0x210))(uVar23,plVar20[1],0,0);
  local_558 = 0x1f;
  uStack_556 = 0;
  local_560 = pcVar3;
  (**(code **)(*plVar20 + 0x18))(plVar20,&local_560);
  (**(code **)(plVar20[3] + 0x208))(plVar20[1],0,0,uVar23);
  bVar8 = *(byte *)(param_1 + 0x1f8);
  if (7 < bVar8) {
    bVar8 = 0xff;
  }
  local_1a8 = (undefined *)CONCAT71(local_1a8._1_7_,bVar8);
  lVar17 = FUN_025830c0(*(undefined8 *)PTR_DAT_04bb4f78,&local_1a8,1);
  puVar2 = PTR_DAT_04bc4f00;
  if (lVar17 == 0) {
    uVar12 = 0xffffffff;
  }
  else {
    if ((*(long **)(lVar17 + 0x1aa0) == (long *)0x0) ||
       (puVar19 = (undefined8 *)**(long **)(lVar17 + 0x1aa0), puVar19 == (undefined8 *)0x0)) {
      uVar11 = 1;
    }
    else {
      uVar11 = (**(code **)*puVar19)();
      uVar11 = uVar11 ^ 1;
    }
    psVar16 = (short *)FUN_02816430(*(long *)(lVar17 + 0x1a88) + *(long *)(lVar17 + 0x1a80));
    if (*psVar16 == -2) {
LAB_031930f8:
      uVar12 = 0xffffffff;
    }
    else {
      sVar5 = *(short *)PTR_DAT_04bb6298;
      if (sVar5 == -1) {
LAB_031930c0:
        lVar18 = *(long *)(lVar17 + 0x1a88) + *(long *)(lVar17 + 0x1a80);
        bVar8 = *(byte *)(lVar18 + 0x8b1);
        if ((char)bVar8 < '\0') goto LAB_031930f8;
        iVar10 = 0;
        if (*(char *)(lVar18 + 0x8b0) != '\0') {
          iVar10 = 0x14;
        }
        uVar12 = iVar10 + (uint)bVar8;
      }
      else {
        local_560 = (code *)CONCAT44(local_560._4_4_,0x20);
        puVar26 = PTR_DAT_04bc39f8 + (ulong)(uint)(int)sVar5 * 8;
        if (0xff < (uint)(int)sVar5) {
          puVar26 = PTR_DAT_04bc39f8;
        }
        if (((*(uint *)(puVar26 + 4) & 1) == 0) || (7 < *pbVar24)) goto LAB_031930c0;
        uVar12 = FUN_02582d8c(pbVar24,1);
        puVar26 = PTR_DAT_04bb4fb8;
        if ((7 < uVar12) ||
           ((*(char *)(*(long *)PTR_DAT_04bb4fb8 + (ulong)uVar12 * 0x13f0 + 0x13d4) == '\0' ||
            (*(char *)(*(long *)PTR_DAT_04bb4fb8 + (ulong)uVar12 * 0x13f0 + 0x13d6) == '\0'))))
        goto LAB_031930c0;
        uVar12 = FUN_02582d8c(pbVar24,1);
        if ((7 < uVar12) || (*(char *)(*(long *)puVar26 + (ulong)uVar12 * 0x13f0 + 0x13d4) == '\0'))
        goto LAB_031930c0;
        lVar18 = *(long *)puVar26 + (ulong)uVar12 * 0x13f0;
        if (*(int *)(lVar18 + 0x13b8) != 0) goto LAB_031930f8;
        uVar12 = *(uint *)(lVar18 + 0x13bc);
      }
    }
    if ((((uVar11 & 1) == 0) && (*(long *)(lVar17 + 0x1aa0) != 0)) &&
       (puVar19 = *(undefined8 **)(*(long *)(lVar17 + 0x1aa0) + 8), puVar19 != (undefined8 *)0x0)) {
      (**(code **)*puVar19)();
    }
  }
  uVar14 = 0;
  *(char *)(param_1 + 0x1c516) = (char)uVar12;
  lVar17 = 0x590;
  do {
    plVar20 = (long *)(*(long *)(param_1 + 0x210) + lVar17);
    if (0x13 < uVar14) {
      plVar20 = (long *)(*(long *)(param_1 + 0x210) + (ulong)((int)uVar14 - 0x14) * 8 + 0x630);
    }
    lVar18 = *plVar20;
    FUN_030bfe80(lVar18,uVar12 == uVar14);
    plVar20 = (long *)**(undefined8 **)(lVar18 + 0x2f0);
    local_558 = 0x14;
    uStack_556 = 0;
    local_560 = (code *)(puVar2 + 0x10);
    (**(code **)(*plVar20 + 0x18))(plVar20,&local_560);
    (**(code **)(plVar20[3] + 0x158))(0,plVar20[1]);
    uVar14 = uVar14 + 1;
    lVar17 = lVar17 + 8;
  } while (uVar14 != 0x28);
  FUN_03193d24(param_1,0);
  FUN_03194070(param_1,0);
  puVar26 = PTR_DAT_04bc4e60;
  sVar5 = *(short *)PTR_DAT_04bb6298;
  if (sVar5 == -1) {
LAB_031932f8:
    if (*(long *)(param_1 + 0x228) != 0) {
      uVar9 = FUN_0267a9f0(pbVar24);
      lVar17 = *(long *)(param_1 + 0x228);
      *(undefined4 *)(lVar17 + 600) = 1;
      *(undefined4 *)(lVar17 + 0x260) = uVar9;
      *(undefined4 *)(lVar17 + 0x264) = uVar9;
      *(undefined4 *)(lVar17 + 0x268) = 0;
      *(undefined1 *)(lVar17 + 0x290) = 0;
      *(undefined1 *)(lVar17 + 0x2a0) = 0;
      FUN_03125a4c();
      FUN_03190700(*(undefined8 *)(param_1 + 0x228),*(undefined8 *)(param_1 + 0x210),1);
    }
    puVar19 = (undefined8 *)**(long **)(*(long *)(param_1 + 0x210) + 0x3f8);
    if ((*puVar26 & 1) == 0) {
      iVar10 = __cxa_guard_acquire(PTR_DAT_04bc4e60);
      if (iVar10 != 0) {
        *(undefined **)PTR_DAT_04bc4e58 = PTR_DAT_04bc4d38 + 0x10;
        __cxa_guard_release(PTR_DAT_04bc4e60);
      }
    }
    uVar14 = (**(code **)*puVar19)(puVar19,PTR_DAT_04bc4e58);
    if ((uVar14 & 1) == 0) {
      puVar19 = (undefined8 *)0x0;
    }
    lVar17 = 0x28;
    if (*(uint *)(puVar19 + 0x44) < 6) {
      lVar17 = 0;
    }
    plVar20 = *(long **)(puVar19[0x45] + lVar17);
    if (plVar20 == (long *)0x0) goto LAB_031933c8;
    local_560 = (code *)(puVar2 + 0x10);
    local_558 = 0x14;
    uStack_556 = 0;
    (**(code **)(*plVar20 + 0x18))(plVar20,&local_560);
    uVar28 = 0;
  }
  else {
    local_560 = (code *)CONCAT44(local_560._4_4_,0x19);
    puVar1 = (uint *)(PTR_DAT_04bc39f8 + (ulong)(uint)(int)sVar5 * 8);
    if (0xff < (uint)(int)sVar5) {
      puVar1 = (uint *)PTR_DAT_04bc39f8;
    }
    if ((*puVar1 >> 0x19 & 1) == 0) goto LAB_031932f8;
    local_560 = (code *)(PTR_DAT_04bb2020 + 0x10);
    local_558 = 0x5fdb;
    uStack_556 = 0x409;
    local_554 = 0;
    iVar10 = FUN_02758850(&local_560);
    if (iVar10 == 0) goto LAB_031932f8;
    if (*(long *)(param_1 + 0x230) != 0) {
      uVar9 = FUN_02680a20(pbVar24);
      lVar17 = *(long *)(param_1 + 0x230);
      *(undefined4 *)(lVar17 + 600) = 1;
      *(undefined4 *)(lVar17 + 0x260) = uVar9;
      *(undefined4 *)(lVar17 + 0x264) = uVar9;
      *(undefined4 *)(lVar17 + 0x268) = 0;
      *(undefined1 *)(lVar17 + 0x290) = 0;
      *(undefined1 *)(lVar17 + 0x2a0) = 0;
      FUN_03125a4c();
      FUN_03190700(*(undefined8 *)(param_1 + 0x230),*(undefined8 *)(param_1 + 0x210),1);
    }
    puVar19 = (undefined8 *)**(long **)(*(long *)(param_1 + 0x210) + 0x3f8);
    if ((*puVar26 & 1) == 0) {
      iVar10 = __cxa_guard_acquire(PTR_DAT_04bc4e60);
      if (iVar10 != 0) {
        *(undefined **)PTR_DAT_04bc4e58 = PTR_DAT_04bc4d38 + 0x10;
        __cxa_guard_release(PTR_DAT_04bc4e60);
      }
    }
    uVar14 = (**(code **)*puVar19)(puVar19,PTR_DAT_04bc4e58);
    if ((uVar14 & 1) == 0) {
      puVar19 = (undefined8 *)0x0;
    }
    lVar17 = 0x28;
    if (*(uint *)(puVar19 + 0x44) < 6) {
      lVar17 = 0;
    }
    plVar20 = *(long **)(puVar19[0x45] + lVar17);
    if (plVar20 == (long *)0x0) goto LAB_031933c8;
    local_560 = (code *)(puVar2 + 0x10);
    local_558 = 0x14;
    uStack_556 = 0;
    (**(code **)(*plVar20 + 0x18))(plVar20,&local_560);
  }
  (**(code **)(plVar20[3] + 0x158))(uVar28,plVar20[1]);
LAB_031933c8:
  lVar17 = *(long *)(param_1 + 0x210);
  lVar18 = *(long *)(*(long *)(lVar17 + 0x588) + 0xa0);
  if (lVar18 != 0) {
    bVar7 = false;
    if (*(long *)PTR_DAT_04bb59d8 != 0) {
      lVar17 = *(long *)PTR_DAT_04bb2720;
      if (lVar17 == 0) {
        puVar19 = &DAT_055c04a0;
      }
      else {
        puVar19 = &DAT_055c04a0;
        if (*(long *)(lVar17 + 0x330) != 0) {
          puVar19 = (undefined8 *)
                    (**(code **)(**(long **)PTR_DAT_04bb2640 + 0x18))
                              (*(long **)PTR_DAT_04bb2640,*(undefined4 *)(lVar17 + 0x338));
          iVar10 = FUN_006bd550(*puVar19,0);
          puVar19 = (undefined8 *)PTR_DAT_04bc3a80;
          if (iVar10 != 0x758f7eaf) {
            puVar19 = &DAT_055c04a0;
          }
        }
      }
      if ((*(int *)(puVar19 + 7) == -0x17df00c3) &&
         ((*(ushort **)PTR_DAT_04bc3a48 == (ushort *)0x0 ||
          ((**(ushort **)PTR_DAT_04bc3a48 & 1) == 0)))) {
        local_560 = (code *)(PTR_DAT_04bb2020 + 0x10);
        local_558 = 0x65ee;
        uStack_556 = 0x40e;
        local_554 = 0;
        iVar10 = FUN_02758850(&local_560);
        bVar7 = iVar10 != 0;
      }
      else {
        bVar7 = false;
      }
    }
    *(bool *)(lVar18 + 0xbc) = bVar7;
    *(bool *)(lVar18 + 0xbd) = bVar7;
    lVar17 = *(long *)(param_1 + 0x210);
  }
  if ((*(long *)(lVar17 + 0x6d0) != 0) &&
     (plVar20 = (long *)**(undefined8 **)(*(long *)(lVar17 + 0x6d0) + 0x2f0), plVar20 != (long *)0x0
     )) {
    local_564[0] = *pbVar24;
    if (7 < local_564[0]) {
      local_564[0] = 0xff;
    }
    uVar14 = FUN_0266a8f0(local_564);
    local_560 = (code *)(puVar2 + 0x10);
    if ((uVar14 & 1) == 0) {
      local_558 = 0x14;
      uStack_556 = 0;
      (**(code **)(*plVar20 + 0x18))(plVar20,&local_560);
      uVar28 = 0;
    }
    else {
      local_558 = 0x14;
      uStack_556 = 0;
      (**(code **)(*plVar20 + 0x18))(plVar20,&local_560);
      uVar28 = 0x3f800000;
    }
    (**(code **)(plVar20[3] + 0x158))(uVar28,plVar20[1]);
  }
  return;
}

