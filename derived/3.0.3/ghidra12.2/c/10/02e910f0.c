
void FUN_02e910f0(long param_1,int param_2)

{
  uint uVar1;
  long *plVar2;
  undefined *puVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  undefined2 *puVar6;
  undefined4 uVar7;
  undefined1 uVar8;
  undefined1 uVar9;
  undefined2 uVar10;
  bool bVar11;
  undefined *puVar12;
  undefined *puVar13;
  char cVar14;
  uint uVar15;
  uint uVar16;
  int iVar17;
  uint uVar18;
  int *piVar19;
  uint *puVar20;
  void *__s;
  long lVar21;
  uint *puVar22;
  ulong uVar23;
  ulong uVar24;
  long lVar25;
  undefined8 *puVar26;
  undefined2 *puVar27;
  undefined8 *puVar28;
  undefined *puVar29;
  long *plVar30;
  ulong uVar31;
  undefined8 local_1788;
  undefined8 *local_1780;
  undefined8 ******local_1778;
  undefined8 ******ppppppuStack_1770;
  undefined8 ******local_1768;
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
  undefined8 *local_f40 [234];
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
  
  plVar2 = (long *)(param_1 + 0x1ee50);
  local_f54 = param_2;
  piVar19 = (int *)(**(code **)(*plVar2 + 0x10))(plVar2);
  if (0 < *piVar19) {
    lVar25 = 0;
    puVar28 = *(undefined8 **)(piVar19 + 4);
    do {
      puVar26 = *(undefined8 **)(*(long *)(piVar19 + 2) + lVar25 * 8);
      lVar25 = lVar25 + 1;
      *puVar26 = puVar28;
      *(undefined8 **)(piVar19 + 4) = puVar26;
      puVar28 = puVar26;
    } while (lVar25 < *piVar19);
  }
  *piVar19 = 0;
  puVar3 = PTR_DAT_04bbfe60;
  if (local_f54 == 0x78) {
    puVar22 = (uint *)(param_1 + 0x1eb10);
    puVar20 = (uint *)FUN_0369fc5c(*(undefined8 *)PTR_DAT_04bc3a50);
    if (puVar22 != puVar20) {
      uVar15 = *(uint *)(param_1 + 0x1eb14);
      if ((int)*puVar20 <= (int)*(uint *)(param_1 + 0x1eb14)) {
        uVar15 = *puVar20;
      }
      if (0 < (int)*puVar22) {
        lVar25 = 0;
        puVar28 = *(undefined8 **)(param_1 + 0x1eb20);
        do {
          puVar26 = *(undefined8 **)(*(long *)(param_1 + 0x1eb18) + lVar25 * 8);
          lVar25 = lVar25 + 1;
          *puVar26 = puVar28;
          *(undefined8 **)(param_1 + 0x1eb20) = puVar26;
          puVar28 = puVar26;
        } while (lVar25 < (int)*puVar22);
      }
      *puVar22 = 0;
      if ((0 < (int)uVar15) && (0 < *(int *)(param_1 + 0x1eb14))) {
        lVar25 = 0;
        uVar16 = 0;
        do {
          if ((int)uVar16 < *(int *)(param_1 + 0x1eb14)) {
            puVar28 = *(undefined8 **)(param_1 + 0x1eb20);
            puVar27 = *(undefined2 **)(*(long *)(puVar20 + 2) + lVar25);
            if (puVar28 != (undefined8 *)0x0) {
              *(undefined8 *)(param_1 + 0x1eb20) = *puVar28;
            }
            *(undefined2 *)puVar28 = *puVar27;
            *(undefined1 *)((long)puVar28 + 2) = *(undefined1 *)(puVar27 + 1);
            *(undefined1 *)((long)puVar28 + 3) = *(undefined1 *)((long)puVar27 + 3);
            *(undefined4 *)((long)puVar28 + 4) = *(undefined4 *)(puVar27 + 2);
            uVar16 = *puVar22;
            if ((int)uVar16 < *(int *)(param_1 + 0x1eb14)) {
              *(undefined8 **)(*(long *)(param_1 + 0x1eb18) + (long)(int)uVar16 * 8) = puVar28;
              uVar16 = *puVar22 + 1;
              *puVar22 = uVar16;
            }
          }
          lVar25 = lVar25 + 8;
        } while ((ulong)uVar15 * 8 != lVar25);
      }
    }
  }
  else {
    puVar29 = PTR_DAT_04bbfe60 + 0x10;
    local_16c8 = puVar29;
    uVar15 = nn::os::GetSystemTick();
    local_f6c = (uVar15 ^ uVar15 >> 0x1e) * 0x6c078965 + 1;
    local_f68 = (local_f6c ^ local_f6c >> 0x1e) * 0x6c078965 + 2;
    local_f64 = (local_f68 ^ local_f68 >> 0x1e) * 0x6c078965 + 3;
    local_f60 = (local_f64 ^ local_f64 >> 0x1e) * 0x6c078965 + 4;
    memcpy(auStack_16c0,(void *)(param_1 + 0x1cd58),0x754);
    if (local_f54 == 0xc) {
      memcpy(auStack_16c0,(void *)(param_1 + 0x1d4c8),0x754);
    }
    else if (local_f54 == 0x91) {
      memcpy(auStack_16c0,(void *)(param_1 + 0x1dc38),0x754);
      puVar29 = puVar3 + 0x10;
    }
    else {
      FUN_033fd270(&local_f48,&local_f54,1);
      puVar3 = PTR_DAT_04bb43c0;
      if ((int)local_f48 != 0) {
        if ((int)local_f48 == 1) {
          __s = (void *)(**(code **)(local_16c8 + 0x18))(&local_16c8);
          memset(__s,0,0x754);
        }
        else {
          uVar15 = 0;
          do {
            (**(code **)(local_16c8 + 0x10))(&local_1788,&local_16c8,uVar15);
            lVar25 = (**(code **)(local_16c8 + 0x20))(&local_16c8);
            uVar16 = 1 << (ulong)(uVar15 & 0x1f);
            if ((*(uint *)(lVar25 + (ulong)(uVar15 >> 5) * 4) & uVar16) != 0) {
              lVar25 = *(long *)puVar3;
              uVar18 = FUN_0277d6c4(&local_1788);
              if (*(long *)puVar3 != 0) {
                lVar25 = *(long *)(lVar25 + 0x57e58);
                uVar18 = (uVar18 & 0xffff) - (uint)*(ushort *)(lVar25 + 0x1f8);
                if (((uVar18 < *(uint *)(lVar25 + 0x1d8)) &&
                    (*(long *)(*(long *)(lVar25 + 0x1e0) + (long)(int)uVar18 * 8) != 0)) &&
                   (uVar31 = (*(code *)*local_f40[0])(local_f40,&local_1788), (uVar31 & 1) != 0))
                goto LAB_02e91e00;
              }
              lVar25 = (**(code **)(local_16c8 + 0x18))(&local_16c8);
              lVar21 = (ulong)(uVar15 >> 5) * 4;
              *(uint *)(lVar25 + lVar21) = *(uint *)(lVar25 + lVar21) & (uVar16 ^ 0xffffffff);
            }
LAB_02e91e00:
            uVar15 = uVar15 + 1;
          } while (uVar15 != 15000);
        }
      }
      puVar29 = local_16c8;
    }
    lVar25 = (**(code **)(puVar29 + 0x20))(&local_16c8);
    uVar31 = 0;
    do {
      if ((*(uint *)(lVar25 + (uVar31 >> 5) * 4) >> (ulong)((uint)uVar31 & 0x1f) & 1) != 0)
      goto LAB_02e913d4;
      uVar15 = (uint)uVar31 + 1;
      uVar31 = (ulong)uVar15;
    } while (uVar15 != 15000);
    uVar31 = 0;
LAB_02e913d4:
    lVar21 = (**(code **)(local_16c8 + 0x20))(&local_16c8);
    puVar29 = PTR_DAT_04bbfe58;
    puVar3 = PTR_DAT_04bb37e0;
    iVar17 = 15000;
    do {
      if ((*(uint *)(lVar21 + (ulong)(iVar17 - 1U >> 5) * 4) >> (ulong)(iVar17 - 1U & 0x1f) & 1) !=
          0) break;
      iVar17 = iVar17 + -1;
    } while (iVar17 != 0);
    if (iVar17 != (int)uVar31) {
LAB_02e91cb4:
      puVar27 = (undefined2 *)(puVar29 + uVar31 * 8);
      if (0x752 < (uint)(uVar31 >> 3)) {
        puVar27 = (undefined2 *)puVar29;
      }
      puVar6 = (undefined2 *)puVar3;
      if ((uint)uVar31 < 0x3a99) {
        puVar6 = puVar27;
      }
      uVar10 = *puVar6;
      uVar8 = *(undefined1 *)(puVar6 + 1);
      uVar9 = *(undefined1 *)((long)puVar6 + 3);
      uVar7 = *(undefined4 *)(puVar6 + 2);
      piVar19 = (int *)(**(code **)(*plVar2 + 0x10))(plVar2);
      if (*piVar19 < piVar19[1]) {
        puVar28 = *(undefined8 **)(piVar19 + 4);
        if (puVar28 != (undefined8 *)0x0) {
          *(undefined8 *)(piVar19 + 4) = *puVar28;
        }
        *(undefined2 *)puVar28 = uVar10;
        *(undefined1 *)((long)puVar28 + 2) = uVar8;
        *(undefined1 *)((long)puVar28 + 3) = uVar9;
        *(undefined4 *)((long)puVar28 + 4) = uVar7;
        if (*piVar19 < piVar19[1]) {
          *(undefined8 **)(*(long *)(piVar19 + 2) + (long)*piVar19 * 8) = puVar28;
          *piVar19 = *piVar19 + 1;
        }
      }
      do {
        uVar15 = (int)uVar31 + 1;
        uVar31 = (ulong)uVar15;
        if (0x752 < uVar15 >> 3) {
          uVar15 = 0x3a95;
          goto LAB_02e91d70;
        }
      } while ((*(uint *)(lVar25 + (ulong)(uVar15 >> 5) * 4) >> (ulong)(uVar15 & 0x1f) & 1) == 0);
      goto LAB_02e91cac;
    }
LAB_02e91414:
    puVar22 = (uint *)(**(code **)(*plVar2 + 0x18))(plVar2);
    uVar15 = *puVar22;
    if (0 < (int)uVar15) {
      uVar31 = 0;
      puVar3 = PTR_DAT_04bc0510 + 0x10;
      puVar29 = PTR_DAT_04bbfe60 + 0x10;
      plVar30 = (long *)PTR_DAT_04bb43c0;
LAB_02e91500:
      piVar19 = (int *)(**(code **)(*plVar2 + 0x18))(plVar2);
      if (*piVar19 == 0) {
        puVar27 = (undefined2 *)PTR_DAT_04bb37e0;
      }
      else {
        piVar19 = (int *)(**(code **)(*plVar2 + 0x18))(plVar2);
        puVar27 = (undefined2 *)PTR_DAT_04bb37e0;
        if (uVar31 <= *piVar19 - 1) {
          lVar25 = (**(code **)(*plVar2 + 0x18))(plVar2);
          puVar27 = *(undefined2 **)(*(long *)(lVar25 + 8) + uVar31 * 8);
        }
      }
      local_16e0 = *puVar27;
      local_16de = *(undefined1 *)(puVar27 + 1);
      local_16d8 = 0;
      local_16dd = *(char *)((long)puVar27 + 3);
      local_16dc = *(int *)(puVar27 + 2);
      lVar25 = *plVar30;
      local_16e8 = puVar3;
      local_16d0 = local_16e0;
      local_16ce = local_16de;
      local_16cd = local_16dd;
      local_16cc = local_16dc;
      uVar16 = FUN_0277d6c4(&local_16e0);
      if (*plVar30 != 0) {
        lVar25 = *(long *)(lVar25 + 0x57e58);
        uVar16 = (uVar16 & 0xffff) - (uint)*(ushort *)(lVar25 + 0x1f8);
        if ((uVar16 < *(uint *)(lVar25 + 0x1d8)) &&
           (*(long *)(*(long *)(lVar25 + 0x1e0) + (long)(int)uVar16 * 8) != 0)) {
          lVar25 = *(long *)PTR_DAT_04bc0428;
          uVar16 = FUN_0277d6c4(&local_16d0);
          uVar16 = (uVar16 & 0xffff) - (uint)*(ushort *)(lVar25 + 0x1f8);
          if ((uVar16 < *(uint *)(lVar25 + 0x1d8)) &&
             (lVar25 = *(long *)(*(long *)(lVar25 + 0x1e0) + (long)(int)uVar16 * 8), lVar25 != 0)) {
            local_16d8 = lVar25;
          }
        }
      }
      iVar17 = FUN_01ad7260(&local_16e8);
      if (((iVar17 != 0) && (uVar23 = FUN_03422cc0(&local_16d0), (uVar23 & 1) == 0)) &&
         (uVar23 = FUN_03422a60(&local_16d0,param_1 + 0x1f8), (uVar23 & 1) == 0)) {
        local_1788 = 0;
        local_1780 = (undefined8 *)0x0;
        local_1730 = 0;
        if (local_1728 != (undefined8 *)0x0) {
          local_1788 = 0x800000000;
          local_1780 = local_1728;
        }
        local_1778 = &local_1768;
        ppppppuStack_1770 = &local_1768;
        local_1768 = &local_1760;
        local_1760 = &local_1758;
        local_1758 = &local_1750;
        local_1750 = &local_1748;
        local_1748 = &local_1740;
        local_1740 = &local_1738;
        local_1738 = &local_1730;
        FUN_0264cdf0(&local_1788,&local_16d0);
        lVar25 = *(long *)PTR_DAT_04bb4938;
        if (lVar25 != 0) {
          local_f48 = puVar29;
          memset(local_f40,0,0x754);
          uVar16 = nn::os::GetSystemTick();
          local_7ec = (uVar16 ^ uVar16 >> 0x1e) * 0x6c078965 + 1;
          local_7e8 = (local_7ec ^ local_7ec >> 0x1e) * 0x6c078965 + 2;
          local_7e4 = (local_7e8 ^ local_7e8 >> 0x1e) * 0x6c078965 + 3;
          local_7e0 = (local_7e4 ^ local_7e4 >> 0x1e) * 0x6c078965 + 4;
          memcpy(local_f40,(void *)(lVar25 + 0x1d68),0x754);
          local_7d8 = puVar29;
          memset(auStack_7d0,0,0x754);
          uVar16 = nn::os::GetSystemTick();
          local_7c = (uVar16 ^ uVar16 >> 0x1e) * 0x6c078965 + 1;
          local_78 = (local_7c ^ local_7c >> 0x1e) * 0x6c078965 + 2;
          local_74 = (local_78 ^ local_78 >> 0x1e) * 0x6c078965 + 3;
          local_70 = (local_74 ^ local_74 >> 0x1e) * 0x6c078965 + 4;
          memcpy(auStack_7d0,(void *)(lVar25 + 0x15f8),0x754);
          lVar25 = (**(code **)(local_f48 + 0x20))(&local_f48);
          puVar13 = PTR_DAT_04bbfe58;
          plVar30 = (long *)PTR_DAT_04bb43c0;
          puVar12 = PTR_DAT_04bb37e0;
          uVar23 = 0;
          do {
            uVar16 = (uint)uVar23;
            if ((*(uint *)(lVar25 + (uVar23 >> 5) * 4) >> (ulong)(uVar16 & 0x1f) & 1) != 0)
            goto LAB_02e91800;
            uVar18 = uVar16 + 1;
            if (((*(uint *)(lVar25 + (ulong)(uVar18 >> 5) * 4) >> (ulong)(uVar18 & 0x1f) & 1) != 0)
               || (uVar18 = uVar16 + 2,
                  (*(uint *)(lVar25 + (ulong)(uVar18 >> 5) * 4) >> (ulong)(uVar18 & 0x1f) & 1) != 0)
               ) {
              uVar23 = (ulong)uVar18;
              goto LAB_02e91800;
            }
            uVar23 = (ulong)(uVar16 + 3);
          } while (uVar16 + 3 != 15000);
          uVar23 = 0;
LAB_02e91800:
          lVar21 = (**(code **)(local_f48 + 0x20))(&local_f48);
          uVar16 = 0x3a95;
          do {
            uVar18 = uVar16 + 2;
            if (((*(uint *)(lVar21 + (ulong)(uVar18 >> 5) * 4) >> (ulong)(uVar18 & 0x1f) & 1) != 0)
               || (uVar18 = uVar16 + 1,
                  (*(uint *)(lVar21 + (ulong)(uVar18 >> 5) * 4) >> (ulong)(uVar18 & 0x1f) & 1) != 0)
               ) {
              uVar16 = uVar18;
LAB_02e91880:
              uVar16 = uVar16 + 1;
              goto LAB_02e91898;
            }
            if ((*(uint *)(lVar21 + (ulong)(uVar16 >> 5) * 4) >> (ulong)(uVar16 & 0x1f) & 1) != 0)
            goto LAB_02e91880;
            uVar16 = uVar16 - 3;
          } while (uVar16 != 0xfffffffd);
          uVar16 = 0;
LAB_02e91898:
          uVar18 = (uint)uVar23;
          if (uVar16 != uVar18) {
            puVar4 = (undefined4 *)(puVar13 + uVar23 * 8);
            if (0x752 < uVar18 >> 3) {
              puVar4 = (undefined4 *)puVar13;
            }
            puVar5 = (undefined4 *)puVar12;
            if (uVar18 < 0x3a99) {
              puVar5 = puVar4;
            }
            local_f50 = *puVar5;
            local_f4c = puVar5[1];
            uVar24 = FUN_0277d7b4(&local_16d0,&local_f50);
            if ((uVar24 & 1) != 0) goto LAB_02e91b00;
            do {
              uVar18 = (int)uVar23 + 1;
              uVar23 = (ulong)uVar18;
              if (0x752 < uVar18 >> 3) {
                uVar18 = 0x3a95;
                goto LAB_02e91904;
              }
            } while ((*(uint *)(lVar25 + (ulong)(uVar18 >> 5) * 4) >> (ulong)(uVar18 & 0x1f) & 1) ==
                     0);
            goto LAB_02e91898;
          }
          lVar25 = (**(code **)(local_7d8 + 0x20))(&local_7d8);
          uVar23 = 0;
          do {
            uVar16 = (uint)uVar23;
            if ((*(uint *)(lVar25 + (uVar23 >> 5) * 4) >> (ulong)(uVar16 & 0x1f) & 1) != 0)
            goto LAB_02e919c0;
            uVar18 = uVar16 + 1;
            if (((*(uint *)(lVar25 + (ulong)(uVar18 >> 5) * 4) >> (ulong)(uVar18 & 0x1f) & 1) != 0)
               || (uVar18 = uVar16 + 2,
                  (*(uint *)(lVar25 + (ulong)(uVar18 >> 5) * 4) >> (ulong)(uVar18 & 0x1f) & 1) != 0)
               ) {
              uVar23 = (ulong)uVar18;
              goto LAB_02e919c0;
            }
            uVar23 = (ulong)(uVar16 + 3);
          } while (uVar16 + 3 != 15000);
          uVar23 = 0;
LAB_02e919c0:
          lVar21 = (**(code **)(local_7d8 + 0x20))(&local_7d8);
          uVar16 = 0x3a95;
          do {
            uVar18 = uVar16 + 2;
            if (((*(uint *)(lVar21 + (ulong)(uVar18 >> 5) * 4) >> (ulong)(uVar18 & 0x1f) & 1) != 0)
               || (uVar18 = uVar16 + 1,
                  (*(uint *)(lVar21 + (ulong)(uVar18 >> 5) * 4) >> (ulong)(uVar18 & 0x1f) & 1) != 0)
               ) {
              uVar16 = uVar18;
LAB_02e91a24:
              uVar16 = uVar16 + 1;
              goto LAB_02e91a38;
            }
            if ((*(uint *)(lVar21 + (ulong)(uVar16 >> 5) * 4) >> (ulong)(uVar16 & 0x1f) & 1) != 0)
            goto LAB_02e91a24;
            uVar16 = uVar16 - 3;
          } while (uVar16 != 0xfffffffd);
          uVar16 = 0;
LAB_02e91a38:
          uVar18 = (uint)uVar23;
          if (uVar16 != uVar18) {
            puVar4 = (undefined4 *)(puVar13 + uVar23 * 8);
            if (0x752 < uVar18 >> 3) {
              puVar4 = (undefined4 *)puVar13;
            }
            puVar5 = (undefined4 *)puVar12;
            if (uVar18 < 0x3a99) {
              puVar5 = puVar4;
            }
            local_f50 = *puVar5;
            local_f4c = puVar5[1];
            uVar24 = FUN_0277d7b4(&local_16d0,&local_f50);
            if ((uVar24 & 1) != 0) goto LAB_02e91b00;
            do {
              uVar18 = (int)uVar23 + 1;
              uVar23 = (ulong)uVar18;
              if (0x752 < uVar18 >> 3) {
                uVar18 = 0x3a95;
                goto LAB_02e91aa4;
              }
            } while ((*(uint *)(lVar25 + (ulong)(uVar18 >> 5) * 4) >> (ulong)(uVar18 & 0x1f) & 1) ==
                     0);
            goto LAB_02e91a38;
          }
        }
        bVar11 = false;
        if ((int)local_1788 == 0) goto LAB_02e914f4;
        goto LAB_02e91b0c;
      }
      goto LAB_02e914f4;
    }
  }
  return;
  while( true ) {
    if ((*(uint *)(lVar25 + (ulong)(uVar15 >> 5) * 4) >> (ulong)(uVar15 & 0x1f) & 1) != 0)
    goto LAB_02e91ca8;
    uVar15 = uVar15 - 3;
    if (uVar15 == 0xfffffffd) break;
LAB_02e91d70:
    uVar16 = uVar15 + 2;
    if (((*(uint *)(lVar25 + (ulong)(uVar16 >> 5) * 4) >> (ulong)(uVar16 & 0x1f) & 1) != 0) ||
       (uVar16 = uVar15 + 1,
       (*(uint *)(lVar25 + (ulong)(uVar16 >> 5) * 4) >> (ulong)(uVar16 & 0x1f) & 1) != 0)) {
      uVar15 = uVar16;
LAB_02e91ca8:
      uVar31 = (ulong)(uVar15 + 1);
      goto LAB_02e91cac;
    }
  }
  uVar31 = 0;
LAB_02e91cac:
  if (iVar17 == (int)uVar31) goto LAB_02e91414;
  goto LAB_02e91cb4;
  while( true ) {
    if ((*(uint *)(lVar25 + (ulong)(uVar18 >> 5) * 4) >> (ulong)(uVar18 & 0x1f) & 1) != 0)
    goto LAB_02e91894;
    uVar18 = uVar18 - 3;
    if (uVar18 == 0xfffffffd) break;
LAB_02e91904:
    uVar1 = uVar18 + 2;
    if (((*(uint *)(lVar25 + (ulong)(uVar1 >> 5) * 4) >> (ulong)(uVar1 & 0x1f) & 1) != 0) ||
       (uVar1 = uVar18 + 1,
       (*(uint *)(lVar25 + (ulong)(uVar1 >> 5) * 4) >> (ulong)(uVar1 & 0x1f) & 1) != 0)) {
      uVar18 = uVar1;
LAB_02e91894:
      uVar23 = (ulong)(uVar18 + 1);
      goto LAB_02e91898;
    }
  }
  uVar23 = 0;
  goto LAB_02e91898;
LAB_02e91b00:
  bVar11 = true;
  if ((int)local_1788 != 0) {
LAB_02e91b0c:
    lVar25 = (long)(int)local_1788 << 3;
    puVar28 = local_1780;
    do {
      local_f48 = *(undefined **)*puVar28;
      uVar23 = FUN_0277d7b4(&local_f48,&local_16d0);
      cVar14 = local_f48._3_1_;
      iVar17 = local_f48._4_4_;
      if ((((uVar23 & 1) == 0) || (local_f48._3_1_ != local_16cd)) ||
         (local_f48._4_4_ != local_16cc)) {
        if (bVar11) {
          uVar10 = (undefined2)local_f48;
          uVar8 = local_f48._2_1_;
          piVar19 = (int *)(**(code **)(*plVar2 + 0x10))(plVar2);
          if (*piVar19 < piVar19[1]) {
            puVar26 = *(undefined8 **)(piVar19 + 4);
            if (puVar26 != (undefined8 *)0x0) {
              *(undefined8 *)(piVar19 + 4) = *puVar26;
            }
            *(undefined2 *)puVar26 = uVar10;
            *(undefined1 *)((long)puVar26 + 2) = uVar8;
            *(char *)((long)puVar26 + 3) = cVar14;
            *(int *)((long)puVar26 + 4) = iVar17;
LAB_02e91c48:
            if (*piVar19 < piVar19[1]) {
              *(undefined8 **)(*(long *)(piVar19 + 2) + (long)*piVar19 * 8) = puVar26;
              *piVar19 = *piVar19 + 1;
            }
          }
        }
        else {
          uVar23 = FUN_01b00960(&local_f48);
          if ((((uint)(uVar23 >> 7) & 0x1ffffff) < 0x7d) &&
             ((*(uint *)(param_1 + 0x1c56c + (uVar23 >> 5 & 0x7ffffff) * 4) >>
               (ulong)((uint)uVar23 & 0x1f) & 1) != 0)) {
            uVar10 = (undefined2)local_f48;
            uVar8 = local_f48._2_1_;
            uVar9 = local_f48._3_1_;
            uVar7 = local_f48._4_4_;
            piVar19 = (int *)(**(code **)(*plVar2 + 0x10))(plVar2);
            if (*piVar19 < piVar19[1]) {
              puVar26 = *(undefined8 **)(piVar19 + 4);
              if (puVar26 != (undefined8 *)0x0) {
                *(undefined8 *)(piVar19 + 4) = *puVar26;
              }
              *(undefined2 *)puVar26 = uVar10;
              *(undefined1 *)((long)puVar26 + 2) = uVar8;
              *(undefined1 *)((long)puVar26 + 3) = uVar9;
              *(undefined4 *)((long)puVar26 + 4) = uVar7;
              goto LAB_02e91c48;
            }
          }
        }
      }
      puVar28 = puVar28 + 1;
      lVar25 = lVar25 + -8;
    } while (lVar25 != 0);
  }
LAB_02e914f4:
  uVar31 = uVar31 + 1;
  if (uVar31 == uVar15) {
    return;
  }
  goto LAB_02e91500;
  while( true ) {
    if ((*(uint *)(lVar25 + (ulong)(uVar18 >> 5) * 4) >> (ulong)(uVar18 & 0x1f) & 1) != 0)
    goto LAB_02e91a34;
    uVar18 = uVar18 - 3;
    if (uVar18 == 0xfffffffd) break;
LAB_02e91aa4:
    uVar1 = uVar18 + 2;
    if (((*(uint *)(lVar25 + (ulong)(uVar1 >> 5) * 4) >> (ulong)(uVar1 & 0x1f) & 1) != 0) ||
       (uVar1 = uVar18 + 1,
       (*(uint *)(lVar25 + (ulong)(uVar1 >> 5) * 4) >> (ulong)(uVar1 & 0x1f) & 1) != 0)) {
      uVar18 = uVar1;
LAB_02e91a34:
      uVar23 = (ulong)(uVar18 + 1);
      goto LAB_02e91a38;
    }
  }
  uVar23 = 0;
  goto LAB_02e91a38;
}

