
/* WARNING: Removing unreachable block (ram,0x0163418c) */
/* WARNING: Removing unreachable block (ram,0x01634148) */
/* WARNING: Removing unreachable block (ram,0x016342e8) */

undefined8 * FUN_01633f10(long *param_1,int param_2)

{
  uint *puVar1;
  uint *puVar2;
  ushort uVar3;
  undefined4 uVar4;
  undefined *puVar5;
  void *__dest;
  bool bVar6;
  int iVar7;
  int iVar8;
  undefined8 *puVar9;
  long lVar10;
  long lVar11;
  char *pcVar12;
  ulong uVar13;
  long lVar14;
  uint uVar15;
  long *plVar16;
  void *__src;
  char *pcVar17;
  long *plVar18;
  uint uVar19;
  long lVar20;
  undefined *puVar21;
  uint uStack_1ac;
  uint local_1a8;
  undefined *local_1a0;
  char *local_198;
  undefined8 local_190;
  char *local_188;
  undefined *local_180;
  char *local_178;
  int local_170;
  char local_16c [255];
  undefined1 local_6d;
  
  local_170 = 0x100;
  local_6d = 0;
  local_180 = PTR_DAT_04bb4520 + 0x10;
  local_178 = local_16c;
  (**(code **)(*param_1 + 0x18))();
  pcVar17 = (char *)param_1[1];
  if (local_16c != pcVar17) {
    (**(code **)(*param_1 + 0x18))(param_1);
    lVar10 = 0;
    do {
      if (*(char *)(param_1[1] + lVar10) == '\0') goto LAB_01633fd0;
      lVar20 = param_1[1] + lVar10;
      if (*(char *)(lVar20 + 1) == '\0') {
        lVar10 = lVar10 + 1;
        goto LAB_01633fd0;
      }
      if (*(char *)(lVar20 + 2) == '\0') {
        lVar10 = lVar10 + 2;
        goto LAB_01633fd0;
      }
      lVar10 = lVar10 + 3;
    } while (lVar10 != 0x80001);
    lVar10 = 0;
LAB_01633fd0:
    iVar8 = (int)lVar10;
    if (local_170 <= (int)lVar10) {
      iVar8 = local_170 + -1;
    }
    memcpy(local_16c,pcVar17,(long)iVar8);
    local_16c[iVar8] = '\0';
  }
  puVar5 = PTR_DAT_04bb21f8;
  puVar21 = PTR_DAT_04bb2020;
  local_180 = PTR_DAT_04bb21f8 + 0x10;
  local_190 = PTR_DAT_04bb2020 + 0x10;
  local_188 = "Stage";
  local_178[(long)local_170 + -1] = '\0';
  (**(code **)(puVar5 + 0x28))(&local_180);
  pcVar17 = local_178;
  (**(code **)(local_190 + 0x18))(&local_190);
  pcVar12 = local_178;
  if (pcVar17 == local_188) {
LAB_016340a0:
    uVar3 = *(ushort *)PTR_DAT_04bb6298;
    uVar13 = (ulong)(short)uVar3;
    if (uVar13 != 0xffffffffffffffff) {
      uVar4 = (undefined4)((ulong)local_190 >> 0x20);
      puVar1 = (uint *)(PTR_DAT_04bc39f8 + (ulong)(uint)(int)(short)uVar3 * 8);
      if (0xff < (uint)(int)(short)uVar3) {
        puVar1 = (uint *)PTR_DAT_04bc39f8;
      }
      local_1a8 = *puVar1 & 1;
      puVar1 = (uint *)(PTR_DAT_04bc39f8 + (uVar13 & 0xffffffff) * 8);
      if (0xff < uVar3) {
        puVar1 = (uint *)PTR_DAT_04bc39f8;
      }
      uVar19 = *puVar1 >> 8 & 1;
      puVar1 = (uint *)(PTR_DAT_04bc39f8 + (uVar13 & 0xffffffff) * 8);
      if (0xff < uVar3) {
        puVar1 = (uint *)PTR_DAT_04bc39f8;
      }
      local_190 = (undefined *)CONCAT44(uVar4,0xf);
      puVar2 = (uint *)(PTR_DAT_04bc39f8 + (uVar13 & 0xffffffff) * 8);
      if (0xff < uVar3) {
        puVar2 = (uint *)PTR_DAT_04bc39f8;
      }
      if ((*puVar2 >> 0xf & 1) == 0) {
        local_190 = (undefined *)CONCAT44(uVar4,0x12);
        puVar2 = (uint *)(PTR_DAT_04bc39f8 + (uVar13 & 0xffffffff) * 8);
        if (0xff < uVar3) {
          puVar2 = (uint *)PTR_DAT_04bc39f8;
        }
        uVar15 = *puVar2 >> 0x12 & 1;
        if (uVar19 != 0) goto LAB_016342f0;
      }
      else {
        if (uVar19 != 0) {
LAB_016342f0:
          local_190 = puVar21 + 0x10;
          local_188 = "_Viewer";
          (**(code **)(local_180 + 0x18))(&local_180);
          lVar10 = 0;
          do {
            if (local_178[lVar10] == '\0') goto LAB_0163435c;
            if (local_178[lVar10 + 1] == '\0') {
              lVar10 = lVar10 + 1;
              goto LAB_0163435c;
            }
            if (local_178[lVar10 + 2] == '\0') {
              lVar10 = lVar10 + 2;
              goto LAB_0163435c;
            }
            lVar10 = lVar10 + 3;
          } while (lVar10 != 0x80001);
          lVar10 = 0;
LAB_0163435c:
          uVar19 = (uint)lVar10 & ((int)(uint)lVar10 >> 0x1f ^ 0xffffffffU);
          (**(code **)(local_190 + 0x18))(&local_190);
          lVar10 = 0;
          do {
            if (local_188[lVar10] == '\0') goto LAB_016343bc;
            if (local_188[lVar10 + 1] == '\0') {
              lVar10 = lVar10 + 1;
              goto LAB_016343bc;
            }
            if (local_188[lVar10 + 2] == '\0') {
              lVar10 = lVar10 + 2;
              goto LAB_016343bc;
            }
            lVar10 = lVar10 + 3;
          } while (lVar10 != 0x80001);
          lVar10 = 0;
LAB_016343bc:
          uVar15 = (uint)lVar10;
          if ((int)(local_170 - uVar19) <= (int)(uint)lVar10) {
            uVar15 = local_170 + ~uVar19;
          }
          if (0 < (int)uVar15) {
            (**(code **)(local_190 + 0x18))(&local_190);
            memcpy(pcVar12 + uVar19,local_188,(ulong)uVar15);
            pcVar12[(int)(uVar15 + uVar19)] = '\0';
          }
          uStack_1ac = 1;
          bVar6 = true;
          goto LAB_01634624;
        }
        uVar15 = 1;
      }
      if ((*puVar1 >> 0x18 & 1) == 0) goto LAB_01634274;
      local_190 = puVar21 + 0x10;
      local_188 = "_Movie";
      (**(code **)(local_180 + 0x18))(&local_180);
      lVar10 = 0;
      do {
        if (local_178[lVar10] == '\0') goto LAB_01634574;
        if (local_178[lVar10 + 1] == '\0') {
          lVar10 = lVar10 + 1;
          goto LAB_01634574;
        }
        if (local_178[lVar10 + 2] == '\0') {
          lVar10 = lVar10 + 2;
          goto LAB_01634574;
        }
        lVar10 = lVar10 + 3;
      } while (lVar10 != 0x80001);
      lVar10 = 0;
LAB_01634574:
      uVar19 = (uint)lVar10 & ((int)(uint)lVar10 >> 0x1f ^ 0xffffffffU);
      (**(code **)(local_190 + 0x18))(&local_190);
      lVar10 = 0;
      do {
        if (local_188[lVar10] == '\0') goto LAB_016345d0;
        if (local_188[lVar10 + 1] == '\0') goto LAB_016345c4;
        if (local_188[lVar10 + 2] == '\0') goto LAB_016345cc;
        lVar10 = lVar10 + 3;
      } while (lVar10 != 0x80001);
LAB_016345bc:
      lVar10 = 0;
      goto LAB_016345d0;
    }
    local_1a8 = 0;
    uVar15 = 0;
LAB_01634274:
    uVar13 = FUN_0180b7a0();
    puVar5 = PTR_DAT_04bb2720;
    if ((uVar13 & 1) != 0) {
LAB_0163442c:
      pcVar12 = local_178;
      local_190 = puVar21 + 0x10;
      local_188 = "_Idr";
      (**(code **)(local_180 + 0x18))(&local_180);
      lVar10 = 0;
      do {
        if (local_178[lVar10] == '\0') goto LAB_016344ec;
        if (local_178[lVar10 + 1] == '\0') {
          lVar10 = lVar10 + 1;
          goto LAB_016344ec;
        }
        if (local_178[lVar10 + 2] == '\0') {
          lVar10 = lVar10 + 2;
          goto LAB_016344ec;
        }
        lVar10 = lVar10 + 3;
      } while (lVar10 != 0x80001);
      lVar10 = 0;
LAB_016344ec:
      uVar19 = (uint)lVar10 & ((int)(uint)lVar10 >> 0x1f ^ 0xffffffffU);
      (**(code **)(local_190 + 0x18))(&local_190);
      lVar10 = 0;
      do {
        if (local_188[lVar10] == '\0') goto LAB_016345d0;
        if (local_188[lVar10 + 1] == '\0') goto LAB_016345c4;
        if (local_188[lVar10 + 2] == '\0') goto LAB_016345cc;
        lVar10 = lVar10 + 3;
      } while (lVar10 != 0x80001);
      goto LAB_016345bc;
    }
    lVar10 = *(long *)PTR_DAT_04bb2720;
    iVar8 = 0;
    if (lVar10 != 0) {
      if (*(long *)(lVar10 + 0x330) == 0) {
        iVar8 = 0;
      }
      else {
        puVar9 = (undefined8 *)
                 (**(code **)(**(long **)PTR_DAT_04bb2640 + 0x18))
                           (*(long **)PTR_DAT_04bb2640,*(undefined4 *)(lVar10 + 0x338));
        iVar7 = FUN_006bd550(*puVar9,0);
        iVar8 = 0;
        if (iVar7 == 0x758f7eaf) {
          iVar8 = 0;
          if (*(long *)puVar5 != 0) {
            lVar10 = *(long *)(*(long *)puVar5 + 0x330);
            iVar8 = 0;
            if (lVar10 != 0) {
              iVar8 = *(int *)(lVar10 + 0x244);
            }
          }
        }
      }
    }
    pcVar17 = local_178;
    if (*(int *)(PTR_DAT_04bbe4b0 + 0x84) == iVar8) goto LAB_0163442c;
    if (local_1a8 != 0) {
      local_190 = puVar21 + 0x10;
      local_188 = "_Inside";
      (**(code **)(local_180 + 0x18))(&local_180);
      lVar10 = 0;
      do {
        if (local_178[lVar10] == '\0') goto LAB_01635158;
        if (local_178[lVar10 + 1] == '\0') {
          lVar10 = lVar10 + 1;
          goto LAB_01635158;
        }
        if (local_178[lVar10 + 2] == '\0') {
          lVar10 = lVar10 + 2;
          goto LAB_01635158;
        }
        lVar10 = lVar10 + 3;
      } while (lVar10 != 0x80001);
      lVar10 = 0;
LAB_01635158:
      uVar19 = (uint)lVar10 & ((int)(uint)lVar10 >> 0x1f ^ 0xffffffffU);
      (**(code **)(local_190 + 0x18))(&local_190);
      lVar10 = 0;
      do {
        if (local_188[lVar10] == '\0') goto LAB_016351b0;
        if (local_188[lVar10 + 1] == '\0') {
          lVar10 = lVar10 + 1;
          goto LAB_016351b0;
        }
        if (local_188[lVar10 + 2] == '\0') {
          lVar10 = lVar10 + 2;
          goto LAB_016351b0;
        }
        lVar10 = lVar10 + 3;
      } while (lVar10 != 0x80001);
      lVar10 = 0;
LAB_016351b0:
      uVar15 = (uint)lVar10;
      if ((int)(local_170 - uVar19) <= (int)(uint)lVar10) {
        uVar15 = local_170 + ~uVar19;
      }
      if (0 < (int)uVar15) {
        (**(code **)(local_190 + 0x18))(&local_190);
        memcpy(pcVar17 + uVar19,local_188,(ulong)uVar15);
        pcVar17[(int)(uVar15 + uVar19)] = '\0';
      }
      uStack_1ac = 0;
      bVar6 = true;
      local_1a8 = 1;
      goto LAB_01634624;
    }
    if (uVar15 != 0) {
      local_190 = puVar21 + 0x10;
      local_188 = "_System";
      FUN_00958800(&local_180,&local_190,0xffffffff);
    }
    local_1a8 = 0;
    goto LAB_0163461c;
  }
  uVar13 = 0;
  bVar6 = true;
  do {
    if (local_178[uVar13] != local_188[uVar13]) break;
    if (local_178[uVar13] == '\0') {
      if (bVar6) goto LAB_016340a0;
      break;
    }
    bVar6 = uVar13 < 0x80000;
    uVar13 = uVar13 + 1;
  } while (uVar13 != 0x80001);
  uStack_1ac = 0;
  bVar6 = false;
  local_1a8 = 0;
  goto LAB_01634624;
LAB_016345c4:
  lVar10 = lVar10 + 1;
  goto LAB_016345d0;
LAB_016345cc:
  lVar10 = lVar10 + 2;
LAB_016345d0:
  uVar15 = (uint)lVar10;
  if ((int)(local_170 - uVar19) <= (int)(uint)lVar10) {
    uVar15 = local_170 + ~uVar19;
  }
  if (0 < (int)uVar15) {
    (**(code **)(local_190 + 0x18))(&local_190);
    memcpy(pcVar12 + uVar19,local_188,(ulong)uVar15);
    pcVar12[(int)(uVar15 + uVar19)] = '\0';
  }
LAB_0163461c:
  uStack_1ac = 0;
  bVar6 = true;
LAB_01634624:
  lVar10 = 0;
  plVar18 = (long *)0x0;
LAB_01634674:
  plVar16 = &DAT_0522eef0 + lVar10 * 0x50;
  (**(code **)(*plVar16 + 0x18))(plVar16);
  lVar20 = 0;
  do {
    if (*(char *)((&DAT_0522eef8)[lVar10 * 0x50] + lVar20) == '\0') goto LAB_016346d4;
    lVar11 = (&DAT_0522eef8)[lVar10 * 0x50] + lVar20;
    if (*(char *)(lVar11 + 1) == '\0') {
      lVar20 = lVar20 + 1;
      goto LAB_016346d4;
    }
    if (*(char *)(lVar11 + 2) == '\0') {
      lVar20 = lVar20 + 2;
      goto LAB_016346d4;
    }
    lVar20 = lVar20 + 3;
  } while (lVar20 != 0x80001);
  lVar20 = 0;
LAB_016346d4:
  (**(code **)(local_180 + 0x18))(&local_180);
  lVar11 = 0;
  do {
    iVar8 = (int)lVar20;
    if (local_178[lVar11] == '\0') {
LAB_01634724:
      iVar7 = (int)lVar11;
      if (iVar8 < iVar7) goto LAB_01634668;
LAB_0163473c:
      if ((int)lVar11 < 1) goto LAB_01634640;
      uVar13 = 0;
      goto LAB_01634754;
    }
    if (local_178[lVar11 + 1] == '\0') {
      lVar11 = lVar11 + 1;
      goto LAB_01634724;
    }
    if (local_178[lVar11 + 2] == '\0') {
      lVar11 = lVar11 + 2;
      iVar7 = (int)lVar11;
      if (iVar7 <= iVar8) goto LAB_0163473c;
      goto LAB_01634668;
    }
    lVar11 = lVar11 + 3;
  } while (lVar11 != 0x80001);
  if (-1 < iVar8) {
LAB_01634640:
    (**(code **)(local_180 + 0x18))(&local_180);
LAB_01634650:
    plVar18 = plVar16;
    if ((&DAT_0522f168)[lVar10 * 0xa0] != param_2) goto LAB_01634668;
    goto LAB_016347f0;
  }
LAB_01634668:
  plVar16 = plVar18;
  lVar10 = lVar10 + 1;
  plVar18 = plVar16;
  if (lVar10 == 7) goto LAB_016347e8;
  goto LAB_01634674;
  while( true ) {
    pcVar17 = local_178;
    lVar14 = lVar11;
    while( true ) {
      lVar14 = lVar14 + -1;
      if (*(char *)(lVar20 + uVar13) != *pcVar17) break;
      if (*(char *)(lVar20 + uVar13) == '\0') goto LAB_016347d0;
      lVar20 = lVar20 + 1;
      pcVar17 = pcVar17 + 1;
      if (lVar14 == 0) goto LAB_016347d0;
    }
    uVar13 = uVar13 + 1;
    if (uVar13 == (iVar8 - iVar7) + 1) break;
LAB_01634754:
    lVar20 = (&DAT_0522eef8)[lVar10 * 0x50];
    (**(code **)(local_180 + 0x18))(&local_180);
    if ((char *)(lVar20 + uVar13) == local_178) {
LAB_016347d0:
      if ((int)uVar13 != -1) goto LAB_01634650;
      goto LAB_01634668;
    }
  }
  goto LAB_01634668;
LAB_016347e8:
  if (plVar16 == (long *)0x0) {
    FUN_01635210(&DAT_0522eef0);
    pcVar17 = DAT_05230078;
    (**(code **)(local_180 + 0x18))(&local_180);
    pcVar12 = local_178;
    puVar21 = PTR_DAT_04bb2020;
    if (pcVar17 != local_178) {
      (**(code **)(local_180 + 0x18))(&local_180);
      lVar10 = 0;
      do {
        if (local_178[lVar10] == '\0') goto LAB_016348fc;
        if (local_178[lVar10 + 1] == '\0') goto LAB_016348f0;
        if (local_178[lVar10 + 2] == '\0') goto LAB_016348f8;
        lVar10 = lVar10 + 3;
      } while (lVar10 != 0x80001);
      goto LAB_016348e8;
    }
  }
  else {
LAB_016347f0:
    FUN_01635210(plVar16);
    pcVar17 = DAT_05230078;
    (**(code **)(local_180 + 0x18))(&local_180);
    pcVar12 = local_178;
    puVar21 = PTR_DAT_04bb2020;
    if (pcVar17 != local_178) {
      (**(code **)(local_180 + 0x18))(&local_180);
      lVar10 = 0;
      do {
        if (local_178[lVar10] == '\0') goto LAB_016348fc;
        if (local_178[lVar10 + 1] == '\0') goto LAB_016348f0;
        if (local_178[lVar10 + 2] == '\0') goto LAB_016348f8;
        lVar10 = lVar10 + 3;
      } while (lVar10 != 0x80001);
LAB_016348e8:
      lVar10 = 0;
      goto LAB_016348fc;
    }
  }
  goto LAB_0163492c;
LAB_016348f0:
  lVar10 = lVar10 + 1;
  goto LAB_016348fc;
LAB_016348f8:
  lVar10 = lVar10 + 2;
LAB_016348fc:
  iVar8 = (int)lVar10;
  if (DAT_05230080 <= (int)lVar10) {
    iVar8 = DAT_05230080 + -1;
  }
  memcpy(pcVar17,pcVar12,(long)iVar8);
  pcVar17[iVar8] = '\0';
LAB_0163492c:
  local_190 = puVar21 + 0x10;
  local_188 = "MaterialWorld";
  (**(code **)(local_180 + 0x18))(&local_180);
  lVar10 = 0;
  do {
    if (local_178[lVar10] == '\0') goto LAB_01634990;
    if (local_178[lVar10 + 1] == '\0') {
      lVar10 = lVar10 + 1;
      goto LAB_01634990;
    }
    if (local_178[lVar10 + 2] == '\0') {
      lVar10 = lVar10 + 2;
      goto LAB_01634990;
    }
    lVar10 = lVar10 + 3;
  } while (lVar10 != 0x80001);
  lVar10 = 0;
LAB_01634990:
  (**(code **)(local_190 + 0x18))(&local_190);
  lVar20 = 0;
  do {
    iVar8 = (int)lVar10;
    if (local_188[lVar20] == '\0') {
LAB_016349e4:
      iVar7 = (int)lVar20;
      if (iVar8 < iVar7) goto LAB_01634c50;
LAB_016349fc:
      if ((int)lVar20 < 1) goto LAB_01634a80;
      uVar13 = 0;
      goto LAB_01634a10;
    }
    if (local_188[lVar20 + 1] == '\0') {
      lVar20 = lVar20 + 1;
      goto LAB_016349e4;
    }
    if (local_188[lVar20 + 2] == '\0') {
      lVar20 = lVar20 + 2;
      iVar7 = (int)lVar20;
      if (iVar7 <= iVar8) goto LAB_016349fc;
      goto LAB_01634c50;
    }
    lVar20 = lVar20 + 3;
  } while (lVar20 != 0x80001);
  if (-1 < iVar8) {
LAB_01634a80:
    (**(code **)(local_190 + 0x18))(&local_190);
LAB_01634a9c:
    local_1a0 = puVar21 + 0x10;
    local_198 = "Inside";
    (**(code **)(local_180 + 0x18))(&local_180);
    lVar10 = 0;
    do {
      if (local_178[lVar10] == '\0') goto LAB_01634b00;
      if (local_178[lVar10 + 1] == '\0') {
        lVar10 = lVar10 + 1;
        goto LAB_01634b00;
      }
      if (local_178[lVar10 + 2] == '\0') {
        lVar10 = lVar10 + 2;
        goto LAB_01634b00;
      }
      lVar10 = lVar10 + 3;
    } while (lVar10 != 0x80001);
    lVar10 = 0;
LAB_01634b00:
    (**(code **)(local_1a0 + 0x18))(&local_1a0);
    lVar20 = 0;
    do {
      iVar8 = (int)lVar10;
      if (local_198[lVar20] == '\0') {
LAB_01634b54:
        iVar7 = (int)lVar20;
        if (iVar8 < iVar7) goto LAB_01634c50;
LAB_01634b6c:
        if ((int)lVar20 < 1) goto LAB_01634be8;
        uVar13 = 0;
        goto LAB_01634b80;
      }
      if (local_198[lVar20 + 1] == '\0') {
        lVar20 = lVar20 + 1;
        goto LAB_01634b54;
      }
      if (local_198[lVar20 + 2] == '\0') {
        lVar20 = lVar20 + 2;
        iVar7 = (int)lVar20;
        if (iVar7 <= iVar8) goto LAB_01634b6c;
        goto LAB_01634c50;
      }
      lVar20 = lVar20 + 3;
    } while (lVar20 != 0x80001);
    if (-1 < iVar8) {
LAB_01634be8:
      (**(code **)(local_1a0 + 0x18))(&local_1a0);
LAB_01634c04:
      pcVar17 = DAT_05230240;
      if (DAT_05230240 != "Indoor") {
        iVar8 = 6;
        if (DAT_05230248 < 7) {
          iVar8 = DAT_05230248 + -1;
        }
        memcpy(DAT_05230240,"Indoor",(long)iVar8);
        pcVar17[iVar8] = '\0';
      }
    }
  }
  goto LAB_01634c50;
  while( true ) {
    pcVar12 = local_188;
    lVar10 = lVar20;
    while( true ) {
      lVar10 = lVar10 + -1;
      if (pcVar17[uVar13] != *pcVar12) break;
      if (pcVar17[uVar13] == '\0') goto LAB_01634a94;
      pcVar17 = pcVar17 + 1;
      pcVar12 = pcVar12 + 1;
      if (lVar10 == 0) goto LAB_01634a94;
    }
    uVar13 = uVar13 + 1;
    if (uVar13 == (iVar8 - iVar7) + 1) break;
LAB_01634a10:
    pcVar17 = local_178;
    pcVar12 = local_178 + uVar13;
    (**(code **)(local_190 + 0x18))(&local_190);
    if (pcVar12 == local_188) {
LAB_01634a94:
      if ((int)uVar13 != -1) goto LAB_01634a9c;
      break;
    }
  }
  goto LAB_01634c50;
  while( true ) {
    pcVar12 = local_188;
    lVar10 = lVar20;
    while( true ) {
      lVar10 = lVar10 + -1;
      if (pcVar17[uVar13] != *pcVar12) break;
      if (pcVar17[uVar13] == '\0') goto LAB_01634db4;
      pcVar17 = pcVar17 + 1;
      pcVar12 = pcVar12 + 1;
      if (lVar10 == 0) goto LAB_01634db4;
    }
    uVar13 = uVar13 + 1;
    if (uVar13 == (iVar8 - iVar7) + 1) break;
LAB_01634d34:
    pcVar17 = local_178;
    pcVar12 = local_178 + uVar13;
    (**(code **)(local_190 + 0x18))(&local_190);
    if (pcVar12 == local_188) {
LAB_01634db4:
      if ((int)uVar13 != -1) goto LAB_01634dbc;
      break;
    }
  }
  goto LAB_01634e90;
  while( true ) {
    pcVar12 = local_198;
    lVar10 = lVar20;
    while( true ) {
      lVar10 = lVar10 + -1;
      if (pcVar17[uVar13] != *pcVar12) break;
      if (pcVar17[uVar13] == '\0') goto LAB_01635090;
      pcVar17 = pcVar17 + 1;
      pcVar12 = pcVar12 + 1;
      if (lVar10 == 0) goto LAB_01635090;
    }
    uVar13 = uVar13 + 1;
    if (uVar13 == (iVar8 - iVar7) + 1) break;
LAB_01635014:
    pcVar17 = local_178;
    pcVar12 = local_178 + uVar13;
    (**(code **)(local_1a0 + 0x18))(&local_1a0);
    if (pcVar12 == local_198) {
LAB_01635090:
      if ((int)uVar13 != -1) goto LAB_0163509c;
      break;
    }
  }
  goto LAB_01634e90;
  while( true ) {
    pcVar12 = local_198;
    lVar10 = lVar20;
    while( true ) {
      lVar10 = lVar10 + -1;
      if (pcVar17[uVar13] != *pcVar12) break;
      if (pcVar17[uVar13] == '\0') goto LAB_01634bfc;
      pcVar17 = pcVar17 + 1;
      pcVar12 = pcVar12 + 1;
      if (lVar10 == 0) goto LAB_01634bfc;
    }
    uVar13 = uVar13 + 1;
    if (uVar13 == (iVar8 - iVar7) + 1) break;
LAB_01634b80:
    pcVar17 = local_178;
    pcVar12 = local_178 + uVar13;
    (**(code **)(local_1a0 + 0x18))(&local_1a0);
    if (pcVar12 == local_198) {
LAB_01634bfc:
      if ((int)uVar13 != -1) goto LAB_01634c04;
      break;
    }
  }
LAB_01634c50:
  local_190 = puVar21 + 0x10;
  local_188 = "GameSceneViewer";
  (**(code **)(local_180 + 0x18))(&local_180);
  lVar10 = 0;
  do {
    if (local_178[lVar10] == '\0') goto LAB_01634cbc;
    if (local_178[lVar10 + 1] == '\0') {
      lVar10 = lVar10 + 1;
      goto LAB_01634cbc;
    }
    if (local_178[lVar10 + 2] == '\0') {
      lVar10 = lVar10 + 2;
      goto LAB_01634cbc;
    }
    lVar10 = lVar10 + 3;
  } while (lVar10 != 0x80001);
  lVar10 = 0;
LAB_01634cbc:
  (**(code **)(local_190 + 0x18))(&local_190);
  lVar20 = 0;
  do {
    iVar8 = (int)lVar10;
    if (local_188[lVar20] == '\0') {
LAB_01634d08:
      iVar7 = (int)lVar20;
      if (iVar8 < iVar7) goto LAB_01634e90;
LAB_01634d20:
      if ((int)lVar20 < 1) goto LAB_01634da0;
      uVar13 = 0;
      goto LAB_01634d34;
    }
    if (local_188[lVar20 + 1] == '\0') {
      lVar20 = lVar20 + 1;
      goto LAB_01634d08;
    }
    if (local_188[lVar20 + 2] == '\0') {
      lVar20 = lVar20 + 2;
      iVar7 = (int)lVar20;
      if (iVar7 <= iVar8) goto LAB_01634d20;
      goto LAB_01634e90;
    }
    lVar20 = lVar20 + 3;
  } while (lVar20 != 0x80001);
  if (-1 < iVar8) {
LAB_01634da0:
    (**(code **)(local_190 + 0x18))(&local_190);
LAB_01634dbc:
    local_1a0 = puVar21 + 0x10;
    local_198 = "Inside";
    (**(code **)(local_180 + 0x18))(&local_180);
    lVar10 = 0;
    do {
      if (local_178[lVar10] == '\0') goto LAB_01634e20;
      if (local_178[lVar10 + 1] == '\0') {
        lVar10 = lVar10 + 1;
        goto LAB_01634e20;
      }
      if (local_178[lVar10 + 2] == '\0') {
        lVar10 = lVar10 + 2;
        goto LAB_01634e20;
      }
      lVar10 = lVar10 + 3;
    } while (lVar10 != 0x80001);
    lVar10 = 0;
LAB_01634e20:
    (**(code **)(local_1a0 + 0x18))(&local_1a0);
    lVar20 = 0;
    do {
      iVar8 = (int)lVar10;
      if (local_198[lVar20] == '\0') {
LAB_01634e74:
        iVar7 = (int)lVar20;
        if (iVar8 < iVar7) goto LAB_01634e90;
LAB_01635000:
        if ((int)lVar20 < 1) goto LAB_01635078;
        uVar13 = 0;
        goto LAB_01635014;
      }
      if (local_198[lVar20 + 1] == '\0') {
        lVar20 = lVar20 + 1;
        goto LAB_01634e74;
      }
      if (local_198[lVar20 + 2] == '\0') {
        lVar20 = lVar20 + 2;
        iVar7 = (int)lVar20;
        if (iVar7 <= iVar8) goto LAB_01635000;
        goto LAB_01634e90;
      }
      lVar20 = lVar20 + 3;
    } while (lVar20 != 0x80001);
    if (-1 < iVar8) {
LAB_01635078:
      (**(code **)(local_1a0 + 0x18))(&local_1a0);
LAB_0163509c:
      pcVar17 = DAT_05230240;
      if (DAT_05230240 != "Indoor") {
        iVar8 = 6;
        if (DAT_05230248 < 7) {
          iVar8 = DAT_05230248 + -1;
        }
        memcpy(DAT_05230240,"Indoor",(long)iVar8);
        pcVar17[iVar8] = '\0';
      }
    }
  }
LAB_01634e90:
  pcVar17 = DAT_05230240;
  if (((local_1a8 & uStack_1ac) == 1) && (DAT_05230240 != "Indoor")) {
    iVar8 = 6;
    if (DAT_05230248 < 7) {
      iVar8 = DAT_05230248 + -1;
    }
    memcpy(DAT_05230240,"Indoor",(long)iVar8);
    pcVar17[iVar8] = '\0';
  }
  puVar5 = PTR_DAT_04bb2720;
  puVar21 = PTR_DAT_04bb2640;
  if (!bVar6) goto LAB_01635124;
  lVar10 = *(long *)PTR_DAT_04bb2720;
  if ((lVar10 == 0) || (*(long *)(lVar10 + 0x330) == 0)) {
LAB_01634f88:
    plVar18 = &DAT_055c04a0;
  }
  else {
    puVar9 = (undefined8 *)
             (**(code **)(**(long **)PTR_DAT_04bb2640 + 0x18))
                       (*(long **)PTR_DAT_04bb2640,*(undefined4 *)(lVar10 + 0x338));
    iVar8 = FUN_006bd550(*puVar9,0);
    if ((iVar8 != 0x758f7eaf) || (lVar10 = *(long *)puVar5, lVar10 == 0)) goto LAB_01634f88;
    plVar18 = &DAT_055c04a0;
    if (*(long *)(lVar10 + 0x330) != 0) {
      puVar9 = (undefined8 *)
               (**(code **)(**(long **)puVar21 + 0x18))
                         (*(long **)puVar21,*(undefined4 *)(lVar10 + 0x338));
      iVar8 = FUN_006bd550(*puVar9,0);
      plVar18 = (long *)PTR_DAT_04bc3a80;
      if (iVar8 != 0x758f7eaf) {
        plVar18 = &DAT_055c04a0;
      }
    }
  }
  __dest = DAT_05230298;
  (**(code **)(*plVar18 + 0x18))(plVar18);
  __src = (void *)plVar18[1];
  if (__dest != __src) {
    (**(code **)(*plVar18 + 0x18))(plVar18);
    lVar10 = 0;
    do {
      if (*(char *)(plVar18[1] + lVar10) == '\0') goto LAB_016350f8;
      lVar20 = plVar18[1] + lVar10;
      if (*(char *)(lVar20 + 1) == '\0') {
        lVar10 = lVar10 + 1;
        goto LAB_016350f8;
      }
      if (*(char *)(lVar20 + 2) == '\0') {
        lVar10 = lVar10 + 2;
        goto LAB_016350f8;
      }
      lVar10 = lVar10 + 3;
    } while (lVar10 != 0x80001);
    lVar10 = 0;
LAB_016350f8:
    iVar8 = (int)lVar10;
    if (DAT_052302a0 <= (int)lVar10) {
      iVar8 = DAT_052302a0 + -1;
    }
    memcpy(__dest,__src,(long)iVar8);
    *(undefined1 *)((long)__dest + (long)iVar8) = 0;
  }
LAB_01635124:
  return &DAT_05230070;
}

