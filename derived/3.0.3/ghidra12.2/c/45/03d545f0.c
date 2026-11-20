
void FUN_03d545f0(long param_1,long *param_2)

{
  undefined **ppuVar1;
  undefined *puVar2;
  char cVar3;
  bool bVar4;
  int iVar5;
  long lVar6;
  long *plVar7;
  void *pvVar8;
  int iVar9;
  uint uVar10;
  char *pcVar11;
  byte *pbVar12;
  uint uVar13;
  ulong uVar14;
  ulong uVar15;
  uint uVar16;
  uint uVar17;
  long lVar18;
  undefined1 *puVar19;
  undefined *puVar20;
  undefined1 *__dest;
  undefined **local_1d8;
  char *local_1d0;
  undefined *local_1c8;
  undefined1 *local_1c0;
  long *local_1b8;
  int local_1b0;
  undefined1 auStack_1ac [36];
  undefined *local_188;
  undefined1 *local_180;
  undefined4 local_178;
  undefined1 local_174 [255];
  undefined1 local_75;
  undefined1 local_70;
  
  FUN_03b0d110();
  iVar5 = *(int *)(*(long *)(param_1 + 0x30) + 0x38);
  if (0 < iVar5) {
    lVar18 = *(long *)PTR_DAT_04bb2698;
    if (lVar18 == 0) {
      pvVar8 = malloc((long)iVar5 << 3);
    }
    else {
      plVar7 = param_2;
      if (param_2 == (long *)0x0) {
        lVar6 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
        plVar7 = (long *)(lVar18 + 8);
        if (lVar6 != 0) {
          plVar7 = (long *)(lVar6 + 0xa8);
        }
        plVar7 = (long *)*plVar7;
        if (plVar7 == (long *)0x0) goto LAB_03d5469c;
      }
      pvVar8 = (void *)(**(code **)(*plVar7 + 0x30))(plVar7,(long)iVar5 << 3,8);
    }
    if (pvVar8 != (void *)0x0) {
      *(void **)(param_1 + 0xf8) = pvVar8;
      *(undefined4 *)(param_1 + 0xf0) = 0;
      *(int *)(param_1 + 0xf4) = iVar5;
    }
  }
LAB_03d5469c:
  local_75 = 0;
  local_178 = 0x100;
  local_180 = local_174;
  local_174[0] = 0;
  local_1b8 = *(long **)(param_1 + 0x30);
  local_70 = 0;
  local_188 = PTR_DAT_04bb21f8 + 0x10;
  local_1b0 = -1;
  ppuVar1 = (undefined **)(PTR_DAT_04bb2020 + 0x10);
  local_1d0 = "";
  local_1d8 = ppuVar1;
  (**(code **)(*local_1b8 + 0x50))(local_1b8,auStack_1ac,&local_1d8);
  iVar5 = (**(code **)(*local_1b8 + 0x60))(local_1b8,auStack_1ac,&local_188,1);
  if (iVar5 != 1) {
LAB_03d54cb4:
    uVar10 = *(uint *)(param_1 + 0xf0);
    if (1 < (int)uVar10) {
      plVar7 = *(long **)(param_1 + 0xf8);
      uVar14 = (ulong)(uVar10 >> 1);
      do {
        uVar13 = (uint)uVar14 * 2;
        lVar18 = plVar7[uVar14 - 1 & 0xffffffff];
        if ((int)uVar10 < (int)uVar13) {
          uVar16 = (uint)uVar14;
        }
        else {
          uVar15 = uVar14 & 0xffffffff;
          do {
            if ((int)uVar13 < (int)uVar10) {
              uVar17 = uVar13 | *(uint *)((plVar7 + (int)uVar13)[-1] + 0x98) <
                                *(uint *)(plVar7[(int)uVar13] + 0x98);
            }
            else {
              uVar17 = uVar13;
            }
            uVar16 = (uint)uVar15;
            if (*(uint *)(plVar7[(int)(uVar17 - 1)] + 0x98) <= *(uint *)(lVar18 + 0x98)) break;
            plVar7[(int)((uint)uVar15 - 1)] = plVar7[(int)(uVar17 - 1)];
            uVar13 = uVar17 * 2;
            uVar15 = (ulong)uVar17;
            uVar16 = uVar17;
          } while ((int)uVar13 <= (int)uVar10);
        }
        plVar7[(int)(uVar16 - 1)] = lVar18;
        bVar4 = 1 < (long)uVar14;
        uVar14 = uVar14 - 1;
      } while (bVar4);
      uVar15 = (ulong)uVar10 - 1;
      uVar14 = uVar15 & 0xffffffff;
      lVar18 = plVar7[uVar14];
      plVar7[uVar14] = *plVar7;
      uVar14 = (ulong)uVar10;
      if (2 < uVar10) {
        do {
          uVar10 = 2;
          uVar13 = 1;
          do {
            if ((int)uVar10 < (int)uVar15) {
              uVar16 = uVar10 | *(uint *)((plVar7 + (int)uVar10)[-1] + 0x98) <
                                *(uint *)(plVar7[(int)uVar10] + 0x98);
            }
            else {
              uVar16 = uVar10;
            }
            lVar6 = (long)(int)(uVar13 - 1);
            if (*(uint *)(plVar7[(int)(uVar16 - 1)] + 0x98) <= *(uint *)(lVar18 + 0x98))
            goto LAB_03d54de0;
            plVar7[lVar6] = plVar7[(int)(uVar16 - 1)];
            uVar10 = uVar16 << 1;
            uVar13 = uVar16;
          } while ((long)(int)uVar10 < (long)uVar14);
          lVar6 = (long)(int)(uVar16 - 1);
LAB_03d54de0:
          plVar7[lVar6] = lVar18;
          uVar14 = uVar15 - 1 & 0xffffffff;
          lVar18 = plVar7[uVar14];
          plVar7[uVar14] = *plVar7;
          bVar4 = 2 < uVar15;
          uVar14 = uVar15;
          uVar15 = uVar15 - 1;
        } while (bVar4);
      }
      *plVar7 = lVar18;
    }
    if (local_1b8 != (long *)0x0) {
      (**(code **)(*local_1b8 + 0x58))(local_1b8,auStack_1ac);
    }
    if (*(char *)(param_1 + 0x100) != '\0') {
      FUN_03c888f0();
    }
    return;
  }
  puVar2 = PTR_DAT_04bb2d88 + 0x10;
LAB_03d54784:
  local_1b0 = local_1b0 + 1;
  local_1d0 = ".msbt";
  local_1d8 = ppuVar1;
  (**(code **)(local_188 + 0x18))(&local_188);
  lVar18 = 0;
  do {
    if (local_180[lVar18] == '\0') goto LAB_03d547f4;
    if (local_180[lVar18 + 1] == '\0') {
      lVar18 = lVar18 + 1;
      goto LAB_03d547f4;
    }
    if (local_180[lVar18 + 2] == '\0') {
      lVar18 = lVar18 + 2;
      goto LAB_03d547f4;
    }
    lVar18 = lVar18 + 3;
  } while (lVar18 != 0x80001);
  lVar18 = 0;
LAB_03d547f4:
  (*(code *)local_1d8[3])(&local_1d8);
  lVar6 = 0;
  do {
    iVar5 = (int)lVar18;
    if (local_1d0[lVar6] == '\0') {
LAB_03d54844:
      iVar9 = (int)lVar6;
      if (iVar5 < iVar9) goto LAB_03d54760;
LAB_03d5485c:
      if ((int)lVar6 < 1) goto LAB_03d54904;
      uVar14 = 0;
      goto LAB_03d54874;
    }
    if (local_1d0[lVar6 + 1] == '\0') {
      lVar6 = lVar6 + 1;
      goto LAB_03d54844;
    }
    if (local_1d0[lVar6 + 2] == '\0') {
      lVar6 = lVar6 + 2;
      iVar9 = (int)lVar6;
      if (iVar9 <= iVar5) goto LAB_03d5485c;
      goto LAB_03d54760;
    }
    lVar6 = lVar6 + 3;
  } while (lVar6 != 0x80001);
  if (-1 < iVar5) {
LAB_03d54904:
    (*(code *)local_1d8[3])(&local_1d8);
LAB_03d54924:
    lVar18 = *(long *)PTR_DAT_04bb2698;
    if (lVar18 == 0) {
      plVar7 = malloc(0xa0);
    }
    else {
      plVar7 = param_2;
      if (param_2 == (long *)0x0) {
        lVar6 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
        plVar7 = (long *)(lVar18 + 8);
        if (lVar6 != 0) {
          plVar7 = (long *)(lVar6 + 0xa8);
        }
        plVar7 = (long *)*plVar7;
      }
      plVar7 = (long *)(**(code **)(*plVar7 + 0x30))(plVar7,0xa0,8);
    }
    *(undefined1 *)((long)plVar7 + 0x93) = 0;
    *(undefined1 *)((long)plVar7 + 0x14) = 0;
    plVar7[1] = (long)plVar7 + 0x14;
    *(undefined4 *)(plVar7 + 2) = 0x80;
    *plVar7 = (long)puVar2;
    plVar7[0x13] = -1;
    (**(code **)(local_188 + 0x18))(&local_188);
    lVar18 = 0;
    do {
      if (local_180[lVar18] == '\0') {
LAB_03d54a0c:
        iVar5 = (int)lVar18 + 1;
        goto LAB_03d54a10;
      }
      if (local_180[lVar18 + 1] == '\0') {
        lVar18 = lVar18 + 1;
        goto LAB_03d54a0c;
      }
      if (local_180[lVar18 + 2] == '\0') {
        lVar18 = lVar18 + 2;
        goto LAB_03d54a0c;
      }
      lVar18 = lVar18 + 3;
    } while (lVar18 != 0x80001);
    iVar5 = 1;
LAB_03d54a10:
    local_1d0 = (char *)CONCAT44(local_1d0._4_4_,iVar5);
    local_1c8 = PTR_DAT_04bb2020 + 0x10;
    local_1c0 = &DAT_04079e84;
    local_1d8 = &local_188;
    (**(code **)(local_188 + 0x18))(&local_188);
    lVar18 = 0;
    do {
      if (local_180[lVar18] == '\0') {
LAB_03d54a90:
        iVar9 = (int)lVar18 + 1;
        goto joined_r0x03d54a94;
      }
      if (local_180[lVar18 + 1] == '\0') {
        lVar18 = lVar18 + 1;
        goto LAB_03d54a90;
      }
      if (local_180[lVar18 + 2] == '\0') {
        lVar18 = lVar18 + 2;
        goto LAB_03d54a90;
      }
      lVar18 = lVar18 + 3;
    } while (lVar18 != 0x80001);
    iVar9 = 1;
joined_r0x03d54a94:
    if (iVar5 != 0) {
      if (iVar5 == 1) {
        iVar5 = 0;
      }
      else {
        if ((iVar5 < 0) || (iVar9 < iVar5)) goto LAB_03d54b60;
        uVar14 = (ulong)(iVar5 - 2);
        do {
          puVar20 = local_1d8[1];
          if (puVar20[uVar14] == '\0') goto LAB_03d54b58;
          (**(code **)(local_1c8 + 0x18))(&local_1c8);
          uVar15 = 0;
          bVar4 = true;
          cVar3 = puVar20[uVar14];
          do {
            if (local_1c0[uVar15] == '\0') break;
            if (local_1c0[uVar15] == cVar3) {
              if (bVar4) goto LAB_03d54b58;
              break;
            }
            if (local_1c0[uVar15 + 1] == '\0') break;
            if (local_1c0[uVar15 + 1] == cVar3) goto LAB_03d54b58;
            if (local_1c0[uVar15 + 2] == '\0') break;
            if (local_1c0[uVar15 + 2] == cVar3) goto LAB_03d54b58;
            bVar4 = uVar15 < 0x7fffe;
            uVar15 = uVar15 + 3;
          } while (uVar15 != 0x80001);
          bVar4 = uVar14 != 0;
          uVar14 = uVar14 - 1;
        } while (bVar4);
        uVar14 = 0xffffffff;
LAB_03d54b58:
        iVar5 = (int)uVar14 + 1;
      }
      local_1d0 = (char *)CONCAT44(local_1d0._4_4_,iVar5);
    }
LAB_03d54b60:
    iVar5 = (int)local_1d0;
    uVar14 = (ulong)local_1d0 & 0xffffffff;
    (**(code **)(local_188 + 0x18))(&local_188);
    lVar18 = 0;
    do {
      if (local_180[lVar18] == '\0') goto LAB_03d54bbc;
      if (local_180[lVar18 + 1] == '\0') {
        lVar18 = lVar18 + 1;
        goto LAB_03d54bbc;
      }
      if (local_180[lVar18 + 2] == '\0') {
        lVar18 = lVar18 + 2;
        goto LAB_03d54bbc;
      }
      lVar18 = lVar18 + 3;
    } while (lVar18 != 0x80001);
    lVar18 = 0;
LAB_03d54bbc:
    __dest = (undefined1 *)plVar7[1];
    puVar19 = *(undefined1 **)(PTR_PTR_04bb2238 + 8);
    if (iVar5 <= (int)lVar18 && -1 < iVar5) {
      puVar19 = local_180 + uVar14;
    }
    if (__dest != puVar19) {
      lVar18 = 0;
      do {
        if (puVar19[lVar18] == '\0') goto LAB_03d54c2c;
        if (puVar19[lVar18 + 1] == '\0') {
          lVar18 = lVar18 + 1;
          goto LAB_03d54c2c;
        }
        if (puVar19[lVar18 + 2] == '\0') {
          lVar18 = lVar18 + 2;
          goto LAB_03d54c2c;
        }
        lVar18 = lVar18 + 3;
      } while (lVar18 != 0x80001);
      lVar18 = 0;
LAB_03d54c2c:
      iVar5 = (int)lVar18;
      if ((int)plVar7[2] <= (int)lVar18) {
        iVar5 = (int)plVar7[2] + -1;
      }
      memcpy(__dest,puVar19,(long)iVar5);
      __dest[iVar5] = 0;
    }
    (**(code **)(*plVar7 + 0x18))(plVar7);
    pbVar12 = (byte *)plVar7[1];
    uVar10 = (uint)*pbVar12;
    if (*pbVar12 != 0) {
      uVar13 = 0xffffffff;
      do {
        pbVar12 = pbVar12 + 1;
        uVar13 = crc32b(uVar13,uVar10,0x4c11db7);
        uVar10 = (uint)*pbVar12;
      } while (uVar10 != 0);
      uVar10 = ~uVar13;
    }
    *(uint *)(plVar7 + 0x13) = uVar10;
    *(int *)((long)plVar7 + 0x9c) = local_1b0;
    if (*(int *)(param_1 + 0xf0) < *(int *)(param_1 + 0xf4)) {
      *(long **)(*(long *)(param_1 + 0xf8) + (long)*(int *)(param_1 + 0xf0) * 8) = plVar7;
      *(int *)(param_1 + 0xf0) = *(int *)(param_1 + 0xf0) + 1;
    }
  }
  goto LAB_03d54760;
  while( true ) {
    pcVar11 = local_1d0;
    lVar18 = lVar6;
    while( true ) {
      lVar18 = lVar18 + -1;
      if (puVar19[uVar14] != *pcVar11) break;
      if ((puVar19[uVar14] == '\0') || (puVar19 = puVar19 + 1, pcVar11 = pcVar11 + 1, lVar18 == 0))
      goto LAB_03d54920;
    }
    uVar14 = uVar14 + 1;
    if (uVar14 == (iVar5 - iVar9) + 1) break;
LAB_03d54874:
    puVar19 = local_180;
    pcVar11 = local_180 + uVar14;
    (*(code *)local_1d8[3])(&local_1d8);
    if (pcVar11 == local_1d0) {
LAB_03d54920:
      if (-1 < (int)uVar14) goto LAB_03d54924;
      break;
    }
  }
LAB_03d54760:
  iVar5 = (**(code **)(*local_1b8 + 0x60))(local_1b8,auStack_1ac,&local_188,1);
  if (iVar5 != 1) goto LAB_03d54cb4;
  goto LAB_03d54784;
}

