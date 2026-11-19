
/* WARNING: Removing unreachable block (ram,0x03c2a1f8) */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

long FUN_03c29f30(long param_1,uint *param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  char *pcVar3;
  undefined *puVar4;
  byte bVar5;
  char *__src;
  int iVar6;
  ulong uVar7;
  undefined8 uVar8;
  uint uVar9;
  long lVar10;
  undefined8 uVar11;
  ulong uVar12;
  uint uVar13;
  char *pcVar14;
  long lVar15;
  byte *pbVar16;
  byte *pbVar17;
  long *plVar18;
  long *plVar19;
  undefined8 *puVar20;
  byte *pbVar21;
  undefined8 *puVar22;
  undefined4 uVar23;
  uint *puVar24;
  long *plVar25;
  uint local_638;
  uint uStack_634;
  undefined *local_630;
  byte *local_628;
  int local_620;
  byte local_61c [255];
  undefined1 local_51d;
  undefined8 local_518;
  undefined8 local_510;
  undefined8 local_508;
  undefined1 local_500;
  char cStack_4ff;
  undefined2 uStack_4fe;
  undefined2 local_4fc;
  undefined2 uStack_4fa;
  int iStack_4f8;
  undefined2 local_4f4;
  uint local_4f0;
  uint uStack_4ec;
  char local_4e8;
  undefined *local_4e0;
  char *local_4d8;
  undefined4 local_4d0;
  char local_4cc [31];
  undefined1 local_4ad;
  undefined *local_4a8;
  char *local_4a0;
  undefined8 local_498;
  undefined8 local_490;
  char *local_488;
  char *local_480;
  undefined8 local_478;
  undefined4 local_470;
  undefined1 local_395;
  undefined1 local_38d;
  undefined8 local_388;
  undefined8 uStack_380;
  undefined8 local_378;
  undefined6 uStack_370;
  undefined2 local_36a;
  undefined6 uStack_368;
  uint local_360;
  uint uStack_35c;
  char local_358;
  undefined *local_350;
  char *local_348;
  int local_340;
  char acStack_33c [31];
  undefined1 local_31d;
  undefined *local_318;
  undefined1 *local_310;
  undefined4 local_308;
  undefined1 local_304 [31];
  undefined1 local_2e5;
  undefined8 local_2e0;
  undefined8 local_2d8;
  undefined1 local_2d0;
  undefined8 local_2c8;
  undefined *local_2c0;
  undefined1 *local_2b8;
  undefined8 local_2b0;
  undefined4 local_2a8;
  undefined *local_2a0;
  byte *local_298;
  undefined *local_290;
  byte *local_288;
  undefined8 local_280;
  undefined4 local_278;
  undefined8 local_270;
  undefined8 uStack_268;
  undefined4 local_260;
  undefined2 local_25c;
  undefined4 local_258;
  undefined1 local_250;
  char *local_248;
  byte *local_240;
  undefined4 local_238;
  byte local_234 [255];
  undefined1 local_135;
  undefined1 local_130;
  undefined *local_128;
  long local_120;
  long *local_118;
  undefined8 uStack_110;
  undefined8 local_108;
  undefined8 uStack_100;
  undefined8 local_f8;
  long local_f0 [15];
  char local_78;
  
  if (*(char *)(param_1 + 0x23d9) == '\0') {
    uVar7 = nn::os::TryLockMutex((MutexType *)(param_1 + 0x2400));
    if ((uVar7 & 1) == 0) goto LAB_03c2a0b4;
  }
  else {
    nn::os::LockMutex((MutexType *)(param_1 + 0x2400));
  }
  uVar7 = (**(code **)(*DAT_05aed588 + 0x20))(DAT_05aed588,param_2);
  if ((uVar7 & 1) == 0) {
LAB_03c2a0b4:
    nn::os::UnlockMutex((MutexType *)(param_1 + 0x2400));
    return 0;
  }
  local_51d = 0;
  local_61c[0] = 0;
  local_620 = 0x100;
  local_4fc = 0;
  uStack_4fa = 0;
  iStack_4f8 = 0xffffffff;
  local_500 = 1;
  cStack_4ff = 0;
  local_630 = PTR_DAT_04bb21f8 + 0x10;
  local_518 = 0x1000;
  local_510 = *(undefined8 *)(DAT_05aed590 + 0x338);
  local_4d8 = local_4cc;
  local_4cc[0] = '\0';
  local_508 = 0;
  local_4d0 = 0x20;
  local_4f4 = 0;
  local_4ad = 0;
  local_4e0 = PTR_DAT_04bb2028 + 0x10;
  local_638 = *param_2;
  uStack_634 = param_2[1];
  puVar24 = param_2 + 2;
  local_628 = local_61c;
  (**(code **)(*(long *)puVar24 + 0x18))(puVar24);
  pbVar21 = *(byte **)(param_2 + 4);
  if (local_61c != pbVar21) {
    (**(code **)(*(long *)(param_2 + 2) + 0x18))(puVar24);
    lVar10 = 0;
    do {
      if (*(char *)(*(long *)(param_2 + 4) + lVar10) == '\0') goto LAB_03c2a0cc;
      lVar15 = *(long *)(param_2 + 4) + lVar10;
      if (*(char *)(lVar15 + 1) == '\0') {
        lVar10 = lVar10 + 1;
        goto LAB_03c2a0cc;
      }
      if (*(char *)(lVar15 + 2) == '\0') {
        lVar10 = lVar10 + 2;
        goto LAB_03c2a0cc;
      }
      lVar10 = lVar10 + 3;
    } while (lVar10 != 0x80001);
    lVar10 = 0;
LAB_03c2a0cc:
    iVar6 = (int)lVar10;
    if (local_620 <= (int)lVar10) {
      iVar6 = local_620 + -1;
    }
    memcpy(local_61c,pbVar21,(long)iVar6);
    local_61c[iVar6] = 0;
  }
  local_508 = *(undefined8 *)(param_2 + 0x4c);
  uVar8 = *(undefined8 *)(param_2 + 0x4e);
  uVar11 = *(undefined8 *)((long)param_2 + 0x13e);
  local_500 = (undefined1)uVar8;
  cStack_4ff = (char)((ulong)uVar8 >> 8);
  uStack_4fe = (undefined2)((ulong)uVar8 >> 0x10);
  local_4fc = (undefined2)((ulong)uVar8 >> 0x20);
  uStack_4fa = (undefined2)uVar11;
  iStack_4f8 = (int)((ulong)uVar11 >> 0x10);
  local_4f4 = (undefined2)((ulong)uVar11 >> 0x30);
  local_518 = *(undefined8 *)(param_2 + 0x48);
  local_510 = *(undefined8 *)(param_2 + 0x4a);
  FUN_038b6c10(&local_4e0,&local_630);
  local_4a0 = "pack";
  local_4a8 = PTR_DAT_04bb2020 + 0x10;
  (**(code **)(local_4e0 + 0x18))(&local_4e0);
  (**(code **)(local_4e0 + 0x18))(&local_4e0);
  pcVar14 = local_4d8;
  (**(code **)(local_4a8 + 0x18))(&local_4a8);
  if (pcVar14 == local_4a0) {
LAB_03c2a1ec:
    local_4e8 = '\x01';
LAB_03c2a234:
    if ((uStack_634 != 0) || (*(int *)(param_1 + 0x2490) != 0)) goto LAB_03c2a244;
  }
  else {
    if (*local_4d8 == *local_4a0) {
      if (*local_4d8 == '\0') goto LAB_03c2a1ec;
      pcVar14 = local_4d8 + 2;
      uVar7 = 0;
      do {
        uVar12 = uVar7;
        if (uVar12 == 0x80000) goto LAB_03c2a220;
        if (pcVar14[uVar12 - 1] != local_4a0[uVar12 + 1]) {
          pcVar14 = (char *)0x0;
          goto LAB_03c2a220;
        }
        if (pcVar14[uVar12 - 1] == '\0') goto LAB_03c2a1e4;
        if (pcVar14[uVar12] != local_4a0[uVar12 + 2]) {
          pcVar14 = (char *)0x0;
          uVar12 = uVar12 | 1;
          goto LAB_03c2a220;
        }
        uVar7 = uVar12 + 2;
      } while (pcVar14[uVar12] != '\0');
      uVar12 = uVar12 + 1;
LAB_03c2a1e4:
      pcVar14 = (char *)0x1;
LAB_03c2a220:
      uVar9 = (uint)(uVar12 < 0x80000) & (uint)pcVar14;
      local_4e8 = (char)uVar9;
      if (uVar9 == 0) goto LAB_03c2a244;
      goto LAB_03c2a234;
    }
    local_4e8 = '\0';
LAB_03c2a244:
    (**(code **)(local_630 + 0x18))(&local_630);
    uVar9 = (uint)*local_628;
    if (*local_628 == 0) {
      uVar13 = 0;
    }
    else {
      uVar13 = 0xffffffff;
      pbVar21 = local_628;
      do {
        pbVar21 = pbVar21 + 1;
        uVar13 = crc32b(uVar13,uVar9,0x4c11db7);
        uVar9 = (uint)*pbVar21;
      } while (uVar9 != 0);
      uVar13 = ~uVar13;
    }
    uStack_4ec = uVar13 % 100;
    local_4f0 = uVar13;
    if (cStack_4ff == '\0') {
      lVar10 = param_1 + (ulong)uStack_4ec * 0x18;
      plVar25 = *(long **)(lVar10 + 0x348);
      plVar19 = (long *)(lVar10 + 0x348);
      if (plVar25 != plVar19) {
        do {
          lVar10 = plVar25[2];
          if (*(uint *)(lVar10 + 0x20) == uVar13) {
            plVar18 = (long *)(lVar10 + 0x60);
            (**(code **)(*plVar18 + 0x18))(plVar18);
            (**(code **)(*plVar18 + 0x18))(plVar18);
            pbVar21 = *(byte **)(lVar10 + 0x68);
            (**(code **)(local_630 + 0x18))(&local_630);
            if (pbVar21 != local_628) {
              pbVar21 = *(byte **)(lVar10 + 0x68);
              if (*pbVar21 != *local_628) goto LAB_03c2a2e0;
              if (*pbVar21 != 0) {
                uVar7 = 0;
                do {
                  uVar12 = uVar7;
                  if (pbVar21[uVar12 + 1] != local_628[uVar12 + 1]) goto LAB_03c2a2e0;
                  if (pbVar21[uVar12 + 1] == 0) goto LAB_03c2a3c0;
                  if (pbVar21[uVar12 + 2] != local_628[uVar12 + 2]) goto LAB_03c2a2e0;
                  if (pbVar21[uVar12 + 2] == 0) {
                    uVar12 = uVar12 + 1;
                    goto LAB_03c2a3c0;
                  }
                  if ((uVar12 == 0x7fffe) || (pbVar21[uVar12 + 3] != local_628[uVar12 + 3]))
                  goto LAB_03c2a2e0;
                  uVar7 = uVar12 + 3;
                } while (pbVar21[uVar12 + 3] != 0);
                uVar12 = uVar12 + 2;
LAB_03c2a3c0:
                if (0x7ffff < uVar12) goto LAB_03c2a2e0;
              }
            }
            lVar10 = plVar25[2];
            if (*(char *)(lVar10 + 0x191) == '\0') goto LAB_03c2afd0;
          }
LAB_03c2a2e0:
          plVar25 = (long *)*plVar25;
        } while (plVar25 != plVar19);
      }
    }
    uVar9 = local_4f0;
    puVar20 = (undefined8 *)(param_1 + 0xca8) + (ulong)uStack_4ec * 3;
    if (99 < uStack_4ec) {
      puVar20 = (undefined8 *)(param_1 + 0xca8);
    }
    for (puVar22 = (undefined8 *)*puVar20; puVar22 != puVar20; puVar22 = (undefined8 *)*puVar22) {
      lVar10 = puVar22[2];
      if (*(uint *)(lVar10 + 0x20) == uVar9) {
        plVar19 = (long *)(lVar10 + 0x60);
        (**(code **)(*plVar19 + 0x18))(plVar19);
        (**(code **)(*plVar19 + 0x18))(plVar19);
        pbVar21 = *(byte **)(lVar10 + 0x68);
        (**(code **)(local_630 + 0x18))(&local_630);
        if (pbVar21 == local_628) {
LAB_03c2a4cc:
          lVar10 = puVar22[2];
          if (lVar10 != 0) goto LAB_03c2a69c;
          break;
        }
        bVar5 = **(byte **)(lVar10 + 0x68);
        if (bVar5 == *local_628) {
          if (bVar5 == 0) goto LAB_03c2a4cc;
          lVar15 = 0x7fffe;
          pbVar21 = local_628;
          pbVar16 = *(byte **)(lVar10 + 0x68);
          while( true ) {
            if (pbVar16[1] != pbVar21[1]) break;
            if (pbVar16[1] == 0) goto LAB_03c2a4cc;
            if (pbVar16[2] != pbVar21[2]) break;
            if (pbVar16[2] == 0) goto LAB_03c2a4cc;
            if ((lVar15 == 0) || (bVar5 = pbVar16[3], bVar5 != pbVar21[3])) break;
            lVar15 = lVar15 + -3;
            pbVar21 = pbVar21 + 3;
            pbVar16 = pbVar16 + 3;
            if (bVar5 == 0) goto LAB_03c2a4cc;
          }
        }
      }
    }
    lVar15 = *(long *)PTR_DAT_04bb3350;
    lVar10 = nn::os::GetTlsValue(*(undefined4 *)(lVar15 + 0x68));
    if (*(long *)(lVar15 + 0x60) == lVar10) {
      local_395 = 0;
      local_4a0 = (char *)((long)&local_498 + 4);
      local_498 = (byte *)CONCAT35(local_498._5_3_,0x100);
      local_4a8 = PTR_DAT_04bb21f8 + 0x10;
      (**(code **)(local_630 + 0x18))(&local_630);
      FUN_038d1270(&local_4a8,"%s is load in main thread",local_628);
    }
    uVar9 = local_4f0;
    plVar19 = (long *)(param_1 + 0x1608) + (ulong)uStack_4ec * 3;
    if (99 < uStack_4ec) {
      plVar19 = (long *)(param_1 + 0x1608);
    }
    for (plVar25 = (long *)*plVar19; plVar25 != plVar19; plVar25 = (long *)*plVar25) {
      lVar10 = plVar25[2];
      if (*(uint *)(lVar10 + 0x20) == uVar9) {
        plVar18 = (long *)(lVar10 + 0x60);
        (**(code **)(*plVar18 + 0x18))(plVar18);
        (**(code **)(*plVar18 + 0x18))(plVar18);
        pbVar21 = *(byte **)(lVar10 + 0x68);
        (**(code **)(local_630 + 0x18))(&local_630);
        if (pbVar21 == local_628) {
LAB_03c2a64c:
          lVar10 = plVar25[2];
          if ((lVar10 == 0) || (uStack_634 != 0)) goto LAB_03c2a69c;
          *(uint *)(lVar10 + 0x1a0) = CONCAT22(uStack_4fa,local_4fc);
          *(undefined4 *)(lVar10 + 0x1a4) = *(undefined4 *)(param_1 + 0x2444);
          iVar6 = iStack_4f8;
          if (iStack_4f8 == -1) {
            if (*(long *)PTR_DAT_04bb2720 == 0) {
              *(undefined4 *)(lVar10 + 0x1a8) = 0xffffffff;
              goto LAB_03c2a6b4;
            }
            iVar6 = *(int *)(*(long *)PTR_DAT_04bb2720 + 0x338);
          }
          *(int *)(lVar10 + 0x1a8) = iVar6;
          goto LAB_03c2a6b4;
        }
        bVar5 = **(byte **)(lVar10 + 0x68);
        if (bVar5 == *local_628) {
          if (bVar5 == 0) goto LAB_03c2a64c;
          lVar15 = 0x7fffe;
          pbVar21 = local_628;
          pbVar16 = *(byte **)(lVar10 + 0x68);
          while( true ) {
            if (pbVar16[1] != pbVar21[1]) break;
            if (pbVar16[1] == 0) goto LAB_03c2a64c;
            if (pbVar16[2] != pbVar21[2]) break;
            if (pbVar16[2] == 0) goto LAB_03c2a64c;
            if ((lVar15 == 0) || (bVar5 = pbVar16[3], bVar5 != pbVar21[3])) break;
            lVar15 = lVar15 + -3;
            pbVar21 = pbVar21 + 3;
            pbVar16 = pbVar16 + 3;
            if (bVar5 == 0) goto LAB_03c2a64c;
          }
        }
      }
    }
    lVar10 = 0;
LAB_03c2a69c:
    if (uStack_634 == 1) {
      if (lVar10 != 0) {
LAB_03c2a6a8:
        lVar10 = -1;
        goto LAB_03c2afd0;
      }
      local_498 = (byte *)CONCAT35(local_498._5_3_,0x100);
      local_4a0 = (char *)((long)&local_498 + 4);
      plVar19 = *(long **)(*(long *)PTR_DAT_04bb2650 + 0x100);
      local_395 = 0;
      local_4a8 = PTR_DAT_04bb21f8 + 0x10;
      if (*(char *)(param_1 + 0x2440) != '\0') {
        plVar25 = *(long **)(*(long *)PTR_DAT_04bb2650 + 0x108);
        local_248 = (char *)((ulong)local_248 & 0xffffffffffffff00);
        if ((char)plVar25[0xf] != '\0') {
          (**(code **)(*plVar25 + 0xc0))(plVar25,&local_248,&local_630);
          if ((char)local_248 != '\0') goto LAB_03c2a6a8;
        }
      }
      local_248 = (char *)((ulong)local_248 & 0xffffffffffffff00);
      if ((char)plVar19[0xf] != '\0') {
        (**(code **)(*plVar19 + 0xc0))(plVar19,&local_248,&local_630);
        lVar10 = -(ulong)((char)local_248 != '\0');
        goto LAB_03c2afd0;
      }
    }
    else if ((lVar10 == 0) &&
            ((1 < local_638 || (lVar10 = FUN_03c2b470(param_1,&local_638), lVar10 == 0)))) {
      if (local_638 == 2) {
        lVar10 = FUN_03c2c60c(param_1,&local_638);
        goto LAB_03c2afd0;
      }
    }
    else {
LAB_03c2a6b4:
      if (local_638 == 0) {
        puVar20 = *(undefined8 **)(lVar10 + 0x48);
        if (local_4e8 == '\0') {
          uVar8 = puVar20[1];
          uVar23 = *(undefined4 *)(puVar20 + 2);
          (**(code **)(local_630 + 0x18))(&local_630);
          local_498 = (byte *)((ulong)local_498 & 0xffffffffffffff00);
          local_4a0 = (char *)0x0;
          local_4a8 = (undefined *)0x0;
          local_478 = 0;
          local_488 = PTR_DAT_04bb2020 + 0x10;
          local_240 = local_628;
          local_470 = 0x20;
          local_480 = local_4d8;
          local_248 = local_488;
          local_490 = FUN_03c2c8f0(param_1,&local_630);
          lVar10 = FUN_03c2d3f0(param_1,&local_638,&local_4a8,&local_248,uVar8,uVar23);
          goto LAB_03c2afd0;
        }
        if (((*PTR_DAT_04bb2868 & 1) == 0) &&
           (iVar6 = __cxa_guard_acquire(PTR_DAT_04bb2868), iVar6 != 0)) {
          *(undefined **)PTR_DAT_04bb2860 = PTR_DAT_04bb2870 + 0x10;
          __cxa_guard_release(PTR_DAT_04bb2868);
        }
        if (puVar20 == (undefined8 *)0x0) {
          puVar20 = (undefined8 *)0x0;
        }
        else {
          uVar7 = (**(code **)*puVar20)(puVar20,PTR_DAT_04bb2860);
          if ((uVar7 & 1) == 0) {
            puVar20 = (undefined8 *)0x0;
          }
        }
        FUN_006cd430(local_f0,puVar20);
        local_f8 = 0;
        local_108 = 0;
        uStack_100 = 0;
        local_128 = PTR_DAT_04bb2818 + 0x10;
        local_118 = (long *)0x0;
        uStack_110 = 0;
        local_4a0 = "";
        local_4a8 = PTR_DAT_04bb2020 + 0x10;
        local_120 = 0;
        if (local_78 != '\0') {
          local_120 = (**(code **)(local_f0[0] + 0xd0))(local_f0,&local_128,&local_4a8);
          if (local_120 != 0) {
            local_118 = local_f0;
          }
        }
        local_135 = 0;
        local_238 = 0x100;
        local_240 = local_234;
        local_234[0] = 0;
        pcVar14 = PTR_DAT_04bb21f8 + 0x10;
        local_130 = 0;
        local_248 = pcVar14;
        if (local_78 != '\0') {
          pbVar21 = (byte *)((long)&local_490 + 4);
          puVar1 = PTR_DAT_04bb2020 + 0x10;
          puVar2 = PTR_DAT_04bb2028 + 0x10;
          pcVar3 = PTR_DAT_04bb4520 + 0x10;
          puVar4 = PTR_DAT_04bb2a08 + 0x10;
          do {
            uVar7 = (**(code **)(local_f0[0] + 0x48))(local_f0,&local_128);
            if ((uVar7 & 1) == 0) {
LAB_03c2af38:
              if (((local_78 != '\0') &&
                  (uVar7 = (**(code **)(local_f0[0] + 0x48))(local_f0,&local_128), (uVar7 & 1) != 0)
                  ) && (uVar7 = (**(code **)(local_f0[0] + 0xd8))(local_f0,&local_128),
                       (uVar7 & 1) != 0)) {
                local_120 = 0;
                local_118 = (long *)0x0;
              }
              break;
            }
            local_4a8 = (undefined *)((ulong)local_4a8 & 0xffffffff00000000);
            (**(code **)(local_f0[0] + 0xe0))(local_f0,&local_4a8,&local_128,&local_248,1);
            if ((int)local_4a8 == 0) goto LAB_03c2af38;
            (**(code **)(local_248 + 0x18))(&local_248);
            uVar9 = (uint)*local_240;
            if (*local_240 == 0) {
              uVar13 = 0;
            }
            else {
              uVar13 = 0xffffffff;
              pbVar16 = local_240;
              do {
                pbVar16 = pbVar16 + 1;
                uVar13 = crc32b(uVar13,uVar9,0x4c11db7);
                uVar9 = (uint)*pbVar16;
              } while (uVar9 != 0);
              uVar13 = ~uVar13;
            }
            pbVar16 = local_240;
            if (cStack_4ff == '\0') {
              puVar20 = (undefined8 *)(param_1 + 0x348 + (ulong)(uVar13 % 100) * 0x18);
              for (puVar22 = (undefined8 *)*puVar20; puVar22 != puVar20;
                  puVar22 = (undefined8 *)*puVar22) {
                lVar10 = puVar22[2];
                if (*(uint *)(lVar10 + 0x20) == uVar13) {
                  plVar19 = (long *)(lVar10 + 0x60);
                  (**(code **)(*plVar19 + 0x18))(plVar19);
                  (**(code **)(*plVar19 + 0x18))(plVar19);
                  pbVar17 = *(byte **)(lVar10 + 0x68);
                  (**(code **)(local_248 + 0x18))(&local_248);
                  pbVar16 = local_240;
                  if (pbVar17 != local_240) {
                    pbVar17 = *(byte **)(lVar10 + 0x68);
                    if (*pbVar17 != *local_240) goto LAB_03c2aae0;
                    if (*pbVar17 != 0) {
                      uVar7 = 0;
                      do {
                        uVar12 = uVar7;
                        if (pbVar17[uVar12 + 1] != local_240[uVar12 + 1]) goto LAB_03c2aae0;
                        if (pbVar17[uVar12 + 1] == 0) goto LAB_03c2abc0;
                        if (pbVar17[uVar12 + 2] != local_240[uVar12 + 2]) goto LAB_03c2aae0;
                        if (pbVar17[uVar12 + 2] == 0) {
                          uVar12 = uVar12 + 1;
                          goto LAB_03c2abc0;
                        }
                        if ((uVar12 == 0x7fffe) || (pbVar17[uVar12 + 3] != local_240[uVar12 + 3]))
                        goto LAB_03c2aae0;
                        uVar7 = uVar12 + 3;
                      } while (pbVar17[uVar12 + 3] != 0);
                      uVar12 = uVar12 + 2;
LAB_03c2abc0:
                      if (0x7ffff < uVar12) goto LAB_03c2aae0;
                    }
                  }
                  if (*(char *)(puVar22[2] + 0x191) == '\0') goto LAB_03c2af2c;
                }
LAB_03c2aae0:
              }
            }
            local_280 = 0;
            local_278 = 0;
            local_260 = 0;
            local_270 = 0;
            uStack_268 = 0;
            local_25c = 0x101;
            local_258 = 0;
            local_250 = 0;
            local_290 = puVar1;
            local_288 = pbVar16;
            if (local_78 == '\0') {
              uVar23 = 0;
              uVar8 = 0;
            }
            else {
              uVar8 = (**(code **)(local_f0[0] + 0x58))(local_f0,&local_290);
              pbVar16 = local_240;
              uVar23 = local_258;
            }
            local_2e0 = 0;
            local_2d8 = 0;
            local_2d0 = 0;
            local_2c0 = PTR_DAT_04bb2020 + 0x10;
            local_2c8 = 0;
            local_2b0 = 0;
            local_2e5 = 0;
            local_304[0] = 0;
            local_2b8 = PTR_DAT_04bb2120;
            local_2a8 = 0x20;
            local_308 = 0x20;
            local_318 = puVar2;
            local_310 = local_304;
            local_2a0 = local_2c0;
            local_298 = pbVar16;
            FUN_038b6c10(&local_318,&local_248);
            local_2b8 = local_310;
            local_2c8 = FUN_03c2c8f0(param_1,&local_248);
            local_490 = CONCAT44(local_490._4_4_,0x100);
            local_4a8 = (undefined *)CONCAT44(uStack_634,local_638);
            local_38d = 0;
            local_4a0 = pcVar3;
            local_498 = pbVar21;
            (**(code **)(local_630 + 0x18))(&local_630);
            pbVar16 = local_628;
            if (pbVar21 != local_628) {
              (**(code **)(local_630 + 0x18))(&local_630);
              lVar10 = 0;
              do {
                if (local_628[lVar10] == 0) goto LAB_03c2acec;
                if (local_628[lVar10 + 1] == 0) {
                  lVar10 = lVar10 + 1;
                  goto LAB_03c2acec;
                }
                if (local_628[lVar10 + 2] == 0) {
                  lVar10 = lVar10 + 2;
                  goto LAB_03c2acec;
                }
                lVar10 = lVar10 + 3;
              } while (lVar10 != 0x80001);
              lVar10 = 0;
LAB_03c2acec:
              iVar6 = (int)lVar10;
              if ((int)local_490 <= (int)lVar10) {
                iVar6 = (int)local_490 + -1;
              }
              memcpy(pbVar21,pbVar16,(long)iVar6);
              pbVar21[iVar6] = 0;
            }
            uStack_370 = CONCAT24(local_4fc,CONCAT22(uStack_4fe,CONCAT11(cStack_4ff,local_500)));
            local_340 = 0x20;
            local_31d = 0;
            local_378 = local_508;
            local_36a = uStack_4fa;
            uStack_368 = (undefined6)(CONCAT26(local_4f4,CONCAT42(iStack_4f8,uStack_4fa)) >> 0x10);
            local_388 = local_518;
            uStack_380 = local_510;
            local_360 = local_4f0;
            uStack_35c = uStack_4ec;
            local_358 = local_4e8;
            local_4a0 = pcVar14;
            local_350 = puVar4;
            local_348 = acStack_33c;
            (**(code **)(local_4e0 + 0x18))(&local_4e0);
            __src = local_4d8;
            if (acStack_33c != local_4d8) {
              (**(code **)(local_4e0 + 0x18))(&local_4e0);
              lVar10 = 0;
              do {
                if (local_4d8[lVar10] == '\0') goto LAB_03c2addc;
                if (local_4d8[lVar10 + 1] == '\0') {
                  lVar10 = lVar10 + 1;
                  goto LAB_03c2addc;
                }
                if (local_4d8[lVar10 + 2] == '\0') {
                  lVar10 = lVar10 + 2;
                  goto LAB_03c2addc;
                }
                lVar10 = lVar10 + 3;
              } while (lVar10 != 0x80001);
              lVar10 = 0;
LAB_03c2addc:
              iVar6 = (int)lVar10;
              if (local_340 <= (int)lVar10) {
                iVar6 = local_340 + -1;
              }
              memcpy(acStack_33c,__src,(long)iVar6);
              acStack_33c[iVar6] = '\0';
            }
            pbVar16 = local_498;
            local_350 = PTR_DAT_04bb2028 + 0x10;
            (**(code **)(local_248 + 0x18))(&local_248);
            pbVar17 = local_240;
            if (pbVar16 != local_240) {
              (**(code **)(local_248 + 0x18))(&local_248);
              lVar10 = 0;
              do {
                if (local_240[lVar10] == 0) goto LAB_03c2ae8c;
                if (local_240[lVar10 + 1] == 0) {
                  lVar10 = lVar10 + 1;
                  goto LAB_03c2ae8c;
                }
                if (local_240[lVar10 + 2] == 0) {
                  lVar10 = lVar10 + 2;
                  goto LAB_03c2ae8c;
                }
                lVar10 = lVar10 + 3;
              } while (lVar10 != 0x80001);
              lVar10 = 0;
LAB_03c2ae8c:
              iVar6 = (int)lVar10;
              if ((int)local_490 <= (int)lVar10) {
                iVar6 = (int)local_490 + -1;
              }
              memcpy(pbVar16,pbVar17,(long)iVar6);
              pbVar16[iVar6] = 0;
            }
            (**(code **)(local_4a0 + 0x18))(&local_4a0);
            local_360 = (uint)*local_498;
            if (*local_498 != 0) {
              uVar9 = 0xffffffff;
              pbVar16 = local_498;
              do {
                pbVar16 = pbVar16 + 1;
                uVar9 = crc32b(uVar9,local_360,0x4c11db7);
                local_360 = (uint)*pbVar16;
              } while (local_360 != 0);
              local_360 = ~uVar9;
            }
            uStack_35c = local_360 % 100;
            FUN_03c2d3f0(param_1,&local_4a8,&local_2e0,&local_2a0,uVar8,uVar23);
LAB_03c2af2c:
          } while (local_78 != '\0');
        }
        plVar19 = local_118;
        local_128 = PTR_DAT_04bb2818 + 0x10;
        if (((local_118 != (long *)0x0) && ((char)local_118[0xf] != '\0')) &&
           (uVar7 = (**(code **)(*local_118 + 0x48))(local_118,&local_128), (uVar7 & 1) != 0)) {
          (**(code **)(*plVar19 + 0xd8))(plVar19,&local_128);
        }
        FUN_038b3c54(local_f0);
      }
    }
  }
  lVar10 = 0;
LAB_03c2afd0:
  nn::os::UnlockMutex((MutexType *)(param_1 + 0x2400));
  return lVar10;
}

