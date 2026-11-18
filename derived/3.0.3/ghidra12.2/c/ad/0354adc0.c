
void FUN_0354adc0(long param_1,int param_2)

{
  uint uVar1;
  long *plVar2;
  undefined *puVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  undefined4 uVar6;
  undefined1 uVar7;
  undefined1 uVar8;
  undefined2 uVar9;
  bool bVar10;
  undefined *puVar11;
  char cVar12;
  uint uVar13;
  uint uVar14;
  int iVar15;
  int *piVar16;
  uint *puVar17;
  long lVar18;
  uint *puVar19;
  ulong uVar20;
  ulong uVar21;
  void *__src;
  long lVar22;
  undefined *puVar23;
  undefined2 *puVar24;
  undefined8 *puVar25;
  undefined2 *puVar26;
  undefined8 *puVar27;
  uint uVar28;
  ulong uVar29;
  undefined8 local_1788;
  undefined8 *local_1780;
  undefined8 *******local_1778;
  undefined8 *******pppppppuStack_1770;
  undefined8 *******local_1768;
  undefined8 ******local_1760;
  undefined8 *****local_1758;
  undefined8 ****local_1750;
  undefined8 ***local_1748;
  undefined8 **local_1740;
  undefined8 *local_1738;
  undefined8 local_1730;
  undefined8 local_1728 [8];
  undefined *local_16e8;
  undefined2 local_16e0;
  undefined1 local_16de;
  char local_16dd;
  int local_16dc;
  long local_16d8;
  undefined2 local_16d0;
  undefined1 local_16ce;
  char local_16cd;
  int local_16cc;
  undefined *local_16c8;
  undefined1 auStack_16c0 [1876];
  uint local_f6c;
  uint local_f68;
  uint local_f64;
  int local_f60;
  int local_f54;
  undefined4 local_f50;
  undefined4 local_f4c;
  undefined8 local_f48;
  undefined1 auStack_f40 [1876];
  uint local_7ec;
  uint local_7e8;
  uint local_7e4;
  int local_7e0;
  undefined *local_7d8;
  undefined1 auStack_7d0 [1876];
  uint local_7c;
  uint local_78;
  uint local_74;
  int local_70;
  
  plVar2 = (long *)(param_1 + 0x1c370);
  local_f54 = param_2;
  piVar16 = (int *)(**(code **)(*plVar2 + 0x10))(plVar2);
  if (0 < *piVar16) {
    lVar22 = 0;
    puVar27 = *(undefined8 **)(piVar16 + 4);
    do {
      puVar25 = *(undefined8 **)(*(long *)(piVar16 + 2) + lVar22 * 8);
      lVar22 = lVar22 + 1;
      *puVar25 = puVar27;
      *(undefined8 **)(piVar16 + 4) = puVar25;
      puVar27 = puVar25;
    } while (lVar22 < *piVar16);
  }
  *piVar16 = 0;
  puVar23 = PTR_DAT_04bbfe60;
  if (local_f54 == 0x78) {
    puVar19 = (uint *)(param_1 + 0x108ec8);
    puVar17 = (uint *)FUN_0369fc5c(*(undefined8 *)PTR_DAT_04bc3a50);
    if (puVar19 == puVar17) {
      return;
    }
    uVar13 = *(uint *)(param_1 + 0x108ecc);
    if ((int)*puVar17 <= (int)*(uint *)(param_1 + 0x108ecc)) {
      uVar13 = *puVar17;
    }
    if (0 < (int)*puVar19) {
      lVar22 = 0;
      puVar27 = *(undefined8 **)(param_1 + 0x108ed8);
      do {
        puVar25 = *(undefined8 **)(*(long *)(param_1 + 0x108ed0) + lVar22 * 8);
        lVar22 = lVar22 + 1;
        *puVar25 = puVar27;
        *(undefined8 **)(param_1 + 0x108ed8) = puVar25;
        puVar27 = puVar25;
      } while (lVar22 < (int)*puVar19);
    }
    *puVar19 = 0;
    if ((int)uVar13 < 1) {
      return;
    }
    if (*(int *)(param_1 + 0x108ecc) < 1) {
      return;
    }
    lVar22 = 0;
    uVar14 = 0;
    do {
      if ((int)uVar14 < *(int *)(param_1 + 0x108ecc)) {
        puVar27 = *(undefined8 **)(param_1 + 0x108ed8);
        puVar26 = *(undefined2 **)(*(long *)(puVar17 + 2) + lVar22);
        if (puVar27 != (undefined8 *)0x0) {
          *(undefined8 *)(param_1 + 0x108ed8) = *puVar27;
        }
        *(undefined2 *)puVar27 = *puVar26;
        *(undefined1 *)((long)puVar27 + 2) = *(undefined1 *)(puVar26 + 1);
        *(undefined1 *)((long)puVar27 + 3) = *(undefined1 *)((long)puVar26 + 3);
        *(undefined4 *)((long)puVar27 + 4) = *(undefined4 *)(puVar26 + 2);
        uVar14 = *puVar19;
        if ((int)uVar14 < *(int *)(param_1 + 0x108ecc)) {
          *(undefined8 **)(*(long *)(param_1 + 0x108ed0) + (long)(int)uVar14 * 8) = puVar27;
          uVar14 = *puVar19 + 1;
          *puVar19 = uVar14;
        }
      }
      lVar22 = lVar22 + 8;
    } while ((ulong)uVar13 * 8 != lVar22);
    return;
  }
  local_16c8 = PTR_DAT_04bbfe60 + 0x10;
  uVar13 = nn::os::GetSystemTick();
  local_f6c = (uVar13 ^ uVar13 >> 0x1e) * 0x6c078965 + 1;
  local_f68 = (local_f6c ^ local_f6c >> 0x1e) * 0x6c078965 + 2;
  local_f64 = (local_f68 ^ local_f68 >> 0x1e) * 0x6c078965 + 3;
  local_f60 = (local_f64 ^ local_f64 >> 0x1e) * 0x6c078965 + 4;
  memcpy(auStack_16c0,(void *)(param_1 + 0x1069a0),0x754);
  if (local_f54 < 0x77) {
    if (local_f54 == 0xc) {
      __src = (void *)(param_1 + 0x107880);
    }
    else {
      if (local_f54 != 0xd) goto LAB_0354b028;
      __src = (void *)(param_1 + 0x107110);
    }
  }
  else {
    if ((local_f54 != 0x90) && (local_f54 != 0x77)) {
LAB_0354b028:
      FUN_0354ba60(*(undefined4 *)(param_1 + 0x23c),&local_16c8,&local_f54);
      puVar23 = local_16c8;
      goto LAB_0354b058;
    }
    __src = (void *)(param_1 + 0x108760);
  }
  memcpy(auStack_16c0,__src,0x754);
  puVar23 = puVar23 + 0x10;
LAB_0354b058:
  lVar22 = (**(code **)(puVar23 + 0x20))(&local_16c8);
  uVar29 = 0;
  do {
    if ((*(uint *)(lVar22 + (uVar29 >> 5) * 4) >> (ulong)((uint)uVar29 & 0x1f) & 1) != 0)
    goto LAB_0354b090;
    uVar13 = (uint)uVar29 + 1;
    uVar29 = (ulong)uVar13;
  } while (uVar13 != 15000);
  uVar29 = 0;
LAB_0354b090:
  lVar18 = (**(code **)(local_16c8 + 0x20))(&local_16c8);
  puVar3 = PTR_DAT_04bbfe58;
  puVar23 = PTR_DAT_04bb37e0;
  iVar15 = 15000;
  do {
    if ((*(uint *)(lVar18 + (ulong)(iVar15 - 1U >> 5) * 4) >> (ulong)(iVar15 - 1U & 0x1f) & 1) != 0)
    break;
    iVar15 = iVar15 + -1;
  } while (iVar15 != 0);
  if (iVar15 != (int)uVar29) {
LAB_0354b954:
    puVar26 = (undefined2 *)(puVar3 + uVar29 * 8);
    if (0x752 < (uint)(uVar29 >> 3)) {
      puVar26 = (undefined2 *)puVar3;
    }
    puVar24 = (undefined2 *)puVar23;
    if ((uint)uVar29 < 0x3a99) {
      puVar24 = puVar26;
    }
    uVar9 = *puVar24;
    uVar7 = *(undefined1 *)(puVar24 + 1);
    uVar8 = *(undefined1 *)((long)puVar24 + 3);
    uVar6 = *(undefined4 *)(puVar24 + 2);
    piVar16 = (int *)(**(code **)(*plVar2 + 0x10))(plVar2);
    if (*piVar16 < piVar16[1]) {
      puVar27 = *(undefined8 **)(piVar16 + 4);
      if (puVar27 != (undefined8 *)0x0) {
        *(undefined8 *)(piVar16 + 4) = *puVar27;
      }
      *(undefined2 *)puVar27 = uVar9;
      *(undefined1 *)((long)puVar27 + 2) = uVar7;
      *(undefined1 *)((long)puVar27 + 3) = uVar8;
      *(undefined4 *)((long)puVar27 + 4) = uVar6;
      if (*piVar16 < piVar16[1]) {
        *(undefined8 **)(*(long *)(piVar16 + 2) + (long)*piVar16 * 8) = puVar27;
        *piVar16 = *piVar16 + 1;
      }
    }
    do {
      uVar13 = (int)uVar29 + 1;
      uVar29 = (ulong)uVar13;
      if (0x752 < uVar13 >> 3) {
        uVar13 = 0x3a95;
        goto LAB_0354ba10;
      }
    } while ((*(uint *)(lVar22 + (ulong)(uVar13 >> 5) * 4) >> (ulong)(uVar13 & 0x1f) & 1) == 0);
    goto LAB_0354b94c;
  }
LAB_0354b0d4:
  puVar19 = (uint *)(**(code **)(*plVar2 + 0x18))(plVar2);
  uVar13 = *puVar19;
  if ((int)uVar13 < 1) {
    return;
  }
  uVar29 = 0;
  puVar23 = PTR_DAT_04bc0510 + 0x10;
  puVar3 = PTR_DAT_04bbfe60 + 0x10;
  puVar26 = (undefined2 *)PTR_DAT_04bb37e0;
LAB_0354b1b0:
  piVar16 = (int *)(**(code **)(*plVar2 + 0x18))(plVar2);
  puVar24 = puVar26;
  if ((*piVar16 != 0) &&
     (piVar16 = (int *)(**(code **)(*plVar2 + 0x18))(plVar2), uVar29 <= *piVar16 - 1)) {
    lVar22 = (**(code **)(*plVar2 + 0x18))(plVar2);
    puVar24 = *(undefined2 **)(*(long *)(lVar22 + 8) + uVar29 * 8);
  }
  puVar11 = PTR_DAT_04bb43c0;
  local_16e0 = *puVar24;
  local_16de = *(undefined1 *)(puVar24 + 1);
  local_16dd = *(char *)((long)puVar24 + 3);
  local_16dc = *(int *)(puVar24 + 2);
  lVar22 = *(long *)PTR_DAT_04bb43c0;
  local_16d8 = 0;
  local_16e8 = puVar23;
  local_16d0 = local_16e0;
  local_16ce = local_16de;
  local_16cd = local_16dd;
  local_16cc = local_16dc;
  uVar14 = FUN_0277d6c4(&local_16e0);
  if (*(long *)puVar11 != 0) {
    lVar22 = *(long *)(lVar22 + 0x57e58);
    uVar14 = (uVar14 & 0xffff) - (uint)*(ushort *)(lVar22 + 0x1f8);
    if ((uVar14 < *(uint *)(lVar22 + 0x1d8)) &&
       (*(long *)(*(long *)(lVar22 + 0x1e0) + (long)(int)uVar14 * 8) != 0)) {
      lVar22 = *(long *)PTR_DAT_04bc0428;
      uVar14 = FUN_0277d6c4(&local_16d0);
      uVar14 = (uVar14 & 0xffff) - (uint)*(ushort *)(lVar22 + 0x1f8);
      if (uVar14 < *(uint *)(lVar22 + 0x1d8)) {
        lVar22 = *(long *)(*(long *)(lVar22 + 0x1e0) + (long)(int)uVar14 * 8);
        if (lVar22 != 0) {
          local_16d8 = lVar22;
        }
      }
    }
  }
  iVar15 = FUN_01ad7260(&local_16e8);
  if (((iVar15 != 0) && (uVar20 = FUN_03422cc0(&local_16d0), (uVar20 & 1) == 0)) &&
     (uVar20 = FUN_03422a60(&local_16d0,param_1 + 0x1f8), (uVar20 & 1) == 0)) {
    local_1788 = 0;
    local_1780 = (undefined8 *)0x0;
    local_1730 = 0;
    if (local_1728 != (undefined8 *)0x0) {
      local_1788 = 0x800000000;
      local_1780 = local_1728;
    }
    local_1778 = &local_1768;
    pppppppuStack_1770 = &local_1768;
    local_1768 = &local_1760;
    local_1760 = &local_1758;
    local_1758 = &local_1750;
    local_1750 = &local_1748;
    local_1748 = &local_1740;
    local_1740 = &local_1738;
    local_1738 = &local_1730;
    FUN_0264cdf0(&local_1788,&local_16d0);
    lVar22 = *(long *)PTR_DAT_04bb27f8;
    if (lVar22 != 0) {
      local_f48 = puVar3;
      memset(auStack_f40,0,0x754);
      uVar14 = nn::os::GetSystemTick();
      local_7ec = (uVar14 ^ uVar14 >> 0x1e) * 0x6c078965 + 1;
      local_7e8 = (local_7ec ^ local_7ec >> 0x1e) * 0x6c078965 + 2;
      local_7e4 = (local_7e8 ^ local_7e8 >> 0x1e) * 0x6c078965 + 3;
      local_7e0 = (local_7e4 ^ local_7e4 >> 0x1e) * 0x6c078965 + 4;
      memcpy(auStack_f40,(void *)(lVar22 + 0x1298),0x754);
      local_7d8 = puVar3;
      memset(auStack_7d0,0,0x754);
      uVar14 = nn::os::GetSystemTick();
      local_7c = (uVar14 ^ uVar14 >> 0x1e) * 0x6c078965 + 1;
      local_78 = (local_7c ^ local_7c >> 0x1e) * 0x6c078965 + 2;
      local_74 = (local_78 ^ local_78 >> 0x1e) * 0x6c078965 + 3;
      local_70 = (local_74 ^ local_74 >> 0x1e) * 0x6c078965 + 4;
      memcpy(auStack_7d0,(void *)(lVar22 + 0xb28),0x754);
      lVar22 = (**(code **)(local_f48 + 0x20))(&local_f48);
      puVar11 = PTR_DAT_04bbfe58;
      puVar26 = (undefined2 *)PTR_DAT_04bb37e0;
      uVar20 = 0;
      do {
        uVar14 = (uint)uVar20;
        if ((*(uint *)(lVar22 + (uVar20 >> 5) * 4) >> (ulong)(uVar14 & 0x1f) & 1) != 0)
        goto LAB_0354b4b0;
        uVar28 = uVar14 + 1;
        if (((*(uint *)(lVar22 + (ulong)(uVar28 >> 5) * 4) >> (ulong)(uVar28 & 0x1f) & 1) != 0) ||
           (uVar28 = uVar14 + 2,
           (*(uint *)(lVar22 + (ulong)(uVar28 >> 5) * 4) >> (ulong)(uVar28 & 0x1f) & 1) != 0)) {
          uVar20 = (ulong)uVar28;
          goto LAB_0354b4b0;
        }
        uVar20 = (ulong)(uVar14 + 3);
      } while (uVar14 + 3 != 15000);
      uVar20 = 0;
LAB_0354b4b0:
      lVar18 = (**(code **)(local_f48 + 0x20))(&local_f48);
      uVar14 = 0x3a95;
      do {
        uVar28 = uVar14 + 2;
        if ((*(uint *)(lVar18 + (ulong)(uVar28 >> 5) * 4) >> (ulong)(uVar28 & 0x1f) & 1) != 0) {
LAB_0354b520:
          uVar14 = uVar28;
LAB_0354b524:
          uVar14 = uVar14 + 1;
          goto LAB_0354b538;
        }
        uVar28 = uVar14 + 1;
        if ((*(uint *)(lVar18 + (ulong)(uVar28 >> 5) * 4) >> (ulong)(uVar28 & 0x1f) & 1) != 0)
        goto LAB_0354b520;
        if ((*(uint *)(lVar18 + (ulong)(uVar14 >> 5) * 4) >> (ulong)(uVar14 & 0x1f) & 1) != 0)
        goto LAB_0354b524;
        uVar14 = uVar14 - 3;
      } while (uVar14 != 0xfffffffd);
      uVar14 = 0;
LAB_0354b538:
      uVar28 = (uint)uVar20;
      if (uVar14 != uVar28) {
        puVar4 = (undefined4 *)(puVar11 + uVar20 * 8);
        if (0x752 < uVar28 >> 3) {
          puVar4 = (undefined4 *)puVar11;
        }
        puVar5 = (undefined4 *)puVar26;
        if (uVar28 < 0x3a99) {
          puVar5 = puVar4;
        }
        local_f50 = *puVar5;
        local_f4c = puVar5[1];
        uVar21 = FUN_0277d7b4(&local_16d0,&local_f50);
        if ((uVar21 & 1) != 0) goto LAB_0354b7a0;
        do {
          uVar28 = (int)uVar20 + 1;
          uVar20 = (ulong)uVar28;
          if (0x752 < uVar28 >> 3) {
            uVar28 = 0x3a95;
            goto LAB_0354b5a4;
          }
        } while ((*(uint *)(lVar22 + (ulong)(uVar28 >> 5) * 4) >> (ulong)(uVar28 & 0x1f) & 1) == 0);
        goto LAB_0354b538;
      }
      lVar22 = (**(code **)(local_7d8 + 0x20))(&local_7d8);
      uVar20 = 0;
      do {
        uVar14 = (uint)uVar20;
        if ((*(uint *)(lVar22 + (uVar20 >> 5) * 4) >> (ulong)(uVar14 & 0x1f) & 1) != 0)
        goto LAB_0354b660;
        uVar28 = uVar14 + 1;
        if (((*(uint *)(lVar22 + (ulong)(uVar28 >> 5) * 4) >> (ulong)(uVar28 & 0x1f) & 1) != 0) ||
           (uVar28 = uVar14 + 2,
           (*(uint *)(lVar22 + (ulong)(uVar28 >> 5) * 4) >> (ulong)(uVar28 & 0x1f) & 1) != 0)) {
          uVar20 = (ulong)uVar28;
          goto LAB_0354b660;
        }
        uVar20 = (ulong)(uVar14 + 3);
      } while (uVar14 + 3 != 15000);
      uVar20 = 0;
LAB_0354b660:
      lVar18 = (**(code **)(local_7d8 + 0x20))(&local_7d8);
      uVar14 = 0x3a95;
      do {
        uVar28 = uVar14 + 2;
        if ((*(uint *)(lVar18 + (ulong)(uVar28 >> 5) * 4) >> (ulong)(uVar28 & 0x1f) & 1) != 0) {
LAB_0354b6c0:
          uVar14 = uVar28;
LAB_0354b6c4:
          uVar14 = uVar14 + 1;
          goto LAB_0354b6d8;
        }
        uVar28 = uVar14 + 1;
        if ((*(uint *)(lVar18 + (ulong)(uVar28 >> 5) * 4) >> (ulong)(uVar28 & 0x1f) & 1) != 0)
        goto LAB_0354b6c0;
        if ((*(uint *)(lVar18 + (ulong)(uVar14 >> 5) * 4) >> (ulong)(uVar14 & 0x1f) & 1) != 0)
        goto LAB_0354b6c4;
        uVar14 = uVar14 - 3;
      } while (uVar14 != 0xfffffffd);
      uVar14 = 0;
LAB_0354b6d8:
      uVar28 = (uint)uVar20;
      if (uVar14 != uVar28) {
        puVar4 = (undefined4 *)(puVar11 + uVar20 * 8);
        if (0x752 < uVar28 >> 3) {
          puVar4 = (undefined4 *)puVar11;
        }
        puVar5 = (undefined4 *)puVar26;
        if (uVar28 < 0x3a99) {
          puVar5 = puVar4;
        }
        local_f50 = *puVar5;
        local_f4c = puVar5[1];
        uVar21 = FUN_0277d7b4(&local_16d0,&local_f50);
        if ((uVar21 & 1) != 0) goto LAB_0354b7a0;
        do {
          uVar28 = (int)uVar20 + 1;
          uVar20 = (ulong)uVar28;
          if (0x752 < uVar28 >> 3) {
            uVar28 = 0x3a95;
            goto LAB_0354b744;
          }
        } while ((*(uint *)(lVar22 + (ulong)(uVar28 >> 5) * 4) >> (ulong)(uVar28 & 0x1f) & 1) == 0);
        goto LAB_0354b6d8;
      }
    }
    bVar10 = false;
    if ((int)local_1788 == 0) goto LAB_0354b1a4;
    goto LAB_0354b7ac;
  }
  goto LAB_0354b1a4;
  while( true ) {
    uVar14 = uVar13 + 1;
    if ((*(uint *)(lVar22 + (ulong)(uVar14 >> 5) * 4) >> (ulong)(uVar14 & 0x1f) & 1) != 0)
    goto LAB_0354b944;
    if ((*(uint *)(lVar22 + (ulong)(uVar13 >> 5) * 4) >> (ulong)(uVar13 & 0x1f) & 1) != 0)
    goto LAB_0354b948;
    uVar13 = uVar13 - 3;
    if (uVar13 == 0xfffffffd) break;
LAB_0354ba10:
    uVar14 = uVar13 + 2;
    if ((*(uint *)(lVar22 + (ulong)(uVar14 >> 5) * 4) >> (ulong)(uVar14 & 0x1f) & 1) != 0) {
LAB_0354b944:
      uVar13 = uVar14;
LAB_0354b948:
      uVar29 = (ulong)(uVar13 + 1);
      goto LAB_0354b94c;
    }
  }
  uVar29 = 0;
LAB_0354b94c:
  if (iVar15 == (int)uVar29) goto LAB_0354b0d4;
  goto LAB_0354b954;
  while( true ) {
    uVar1 = uVar28 + 1;
    if ((*(uint *)(lVar22 + (ulong)(uVar1 >> 5) * 4) >> (ulong)(uVar1 & 0x1f) & 1) != 0)
    goto LAB_0354b530;
    if ((*(uint *)(lVar22 + (ulong)(uVar28 >> 5) * 4) >> (ulong)(uVar28 & 0x1f) & 1) != 0)
    goto LAB_0354b534;
    uVar28 = uVar28 - 3;
    if (uVar28 == 0xfffffffd) break;
LAB_0354b5a4:
    uVar1 = uVar28 + 2;
    if ((*(uint *)(lVar22 + (ulong)(uVar1 >> 5) * 4) >> (ulong)(uVar1 & 0x1f) & 1) != 0) {
LAB_0354b530:
      uVar28 = uVar1;
LAB_0354b534:
      uVar20 = (ulong)(uVar28 + 1);
      goto LAB_0354b538;
    }
  }
  uVar20 = 0;
  goto LAB_0354b538;
LAB_0354b7a0:
  bVar10 = true;
  if ((int)local_1788 != 0) {
LAB_0354b7ac:
    lVar22 = (long)(int)local_1788 << 3;
    puVar27 = local_1780;
    do {
      local_f48 = *(undefined **)*puVar27;
      uVar20 = FUN_0277d7b4(&local_f48,&local_16d0);
      cVar12 = local_f48._3_1_;
      iVar15 = local_f48._4_4_;
      if ((((uVar20 & 1) == 0) || (local_f48._3_1_ != local_16cd)) ||
         (local_f48._4_4_ != local_16cc)) {
        if (bVar10) {
          uVar9 = (undefined2)local_f48;
          uVar7 = local_f48._2_1_;
          piVar16 = (int *)(**(code **)(*plVar2 + 0x10))(plVar2);
          if (*piVar16 < piVar16[1]) {
            puVar25 = *(undefined8 **)(piVar16 + 4);
            if (puVar25 != (undefined8 *)0x0) {
              *(undefined8 *)(piVar16 + 4) = *puVar25;
            }
            *(undefined2 *)puVar25 = uVar9;
            *(undefined1 *)((long)puVar25 + 2) = uVar7;
            *(char *)((long)puVar25 + 3) = cVar12;
            *(int *)((long)puVar25 + 4) = iVar15;
LAB_0354b8e8:
            if (*piVar16 < piVar16[1]) {
              *(undefined8 **)(*(long *)(piVar16 + 2) + (long)*piVar16 * 8) = puVar25;
              *piVar16 = *piVar16 + 1;
            }
          }
        }
        else {
          uVar20 = FUN_01b00960(&local_f48);
          if ((((uint)(uVar20 >> 7) & 0x1ffffff) < 0x7d) &&
             ((*(uint *)(param_1 + 0x109208 + (uVar20 >> 5 & 0x7ffffff) * 4) >>
               (ulong)((uint)uVar20 & 0x1f) & 1) != 0)) {
            uVar9 = (undefined2)local_f48;
            uVar7 = local_f48._2_1_;
            uVar8 = local_f48._3_1_;
            uVar6 = local_f48._4_4_;
            piVar16 = (int *)(**(code **)(*plVar2 + 0x10))(plVar2);
            if (*piVar16 < piVar16[1]) {
              puVar25 = *(undefined8 **)(piVar16 + 4);
              if (puVar25 != (undefined8 *)0x0) {
                *(undefined8 *)(piVar16 + 4) = *puVar25;
              }
              *(undefined2 *)puVar25 = uVar9;
              *(undefined1 *)((long)puVar25 + 2) = uVar7;
              *(undefined1 *)((long)puVar25 + 3) = uVar8;
              *(undefined4 *)((long)puVar25 + 4) = uVar6;
              goto LAB_0354b8e8;
            }
          }
        }
      }
      puVar27 = puVar27 + 1;
      lVar22 = lVar22 + -8;
    } while (lVar22 != 0);
  }
LAB_0354b1a4:
  uVar29 = uVar29 + 1;
  if (uVar29 == uVar13) {
    return;
  }
  goto LAB_0354b1b0;
  while( true ) {
    uVar1 = uVar28 + 1;
    if ((*(uint *)(lVar22 + (ulong)(uVar1 >> 5) * 4) >> (ulong)(uVar1 & 0x1f) & 1) != 0)
    goto LAB_0354b6d0;
    if ((*(uint *)(lVar22 + (ulong)(uVar28 >> 5) * 4) >> (ulong)(uVar28 & 0x1f) & 1) != 0)
    goto LAB_0354b6d4;
    uVar28 = uVar28 - 3;
    if (uVar28 == 0xfffffffd) break;
LAB_0354b744:
    uVar1 = uVar28 + 2;
    if ((*(uint *)(lVar22 + (ulong)(uVar1 >> 5) * 4) >> (ulong)(uVar1 & 0x1f) & 1) != 0) {
LAB_0354b6d0:
      uVar28 = uVar1;
LAB_0354b6d4:
      uVar20 = (ulong)(uVar28 + 1);
      goto LAB_0354b6d8;
    }
  }
  uVar20 = 0;
  goto LAB_0354b6d8;
}

