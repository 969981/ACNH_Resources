
/* WARNING: Removing unreachable block (ram,0x039fc740) */
/* WARNING: Removing unreachable block (ram,0x039fc594) */
/* WARNING: Removing unreachable block (ram,0x039fc3f4) */
/* WARNING: Removing unreachable block (ram,0x039fc31c) */
/* WARNING: Removing unreachable block (ram,0x039fc4c4) */
/* WARNING: Removing unreachable block (ram,0x039fc664) */
/* WARNING: Removing unreachable block (ram,0x039fcaa0) */

void FUN_039fb8c0(long param_1,long *param_2,long *param_3,undefined8 param_4)

{
  bool bVar1;
  byte *pbVar2;
  MutexType *pMVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  char *pcVar7;
  long *plVar8;
  byte bVar9;
  byte bVar10;
  ushort uVar11;
  ushort uVar12;
  ushort uVar13;
  int iVar14;
  int iVar15;
  long lVar16;
  undefined8 *puVar17;
  long *plVar18;
  long *plVar19;
  undefined8 uVar20;
  size_t __n;
  long lVar21;
  ulong uVar22;
  ulong uVar23;
  uint uVar24;
  uint uVar25;
  ulong uVar26;
  undefined8 *puVar27;
  byte *pbVar28;
  ulong uVar29;
  ulong uVar30;
  byte *pbVar31;
  long lVar32;
  uint uVar33;
  undefined8 *puVar34;
  ulong uVar35;
  ushort *puVar36;
  long lVar37;
  long lVar38;
  int *piVar39;
  long lVar40;
  uint *puVar41;
  int iVar42;
  char *pcVar43;
  long lVar44;
  ulong uVar45;
  byte *pbVar46;
  long lVar47;
  undefined4 uVar48;
  void *__dest;
  undefined *local_498;
  long lStack_490;
  undefined8 local_488;
  byte *local_480;
  undefined8 local_478;
  undefined8 uStack_470;
  undefined8 local_468;
  undefined8 uStack_460;
  undefined8 local_458;
  undefined8 uStack_450;
  undefined8 local_448;
  undefined8 uStack_440;
  undefined8 local_438;
  undefined8 uStack_430;
  undefined8 local_428;
  undefined8 uStack_420;
  undefined8 local_418;
  undefined8 uStack_410;
  undefined8 local_408;
  undefined8 uStack_400;
  undefined8 local_3f8;
  undefined8 uStack_3f0;
  undefined8 local_3e8;
  undefined8 uStack_3e0;
  undefined8 local_3d8;
  undefined8 uStack_3d0;
  undefined1 local_75;
  uint local_6c [3];
  
  nn::os::LockMutex((MutexType *)(param_1 + 0x2e0));
  if (param_2 == (long *)0x0) {
    lVar38 = *(long *)PTR_DAT_04bb2698;
    lVar16 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
    puVar17 = (undefined8 *)(lVar38 + 8);
    if (lVar16 != 0) {
      puVar17 = (undefined8 *)(lVar16 + 0xa8);
    }
    param_2 = (long *)*puVar17;
  }
  lVar16 = *(long *)(param_1 + 0x20);
  plVar8 = param_2;
  if (param_3 != (long *)0x0) {
    plVar8 = param_3;
  }
  uVar11 = *(ushort *)(lVar16 + 0xdc);
  uVar45 = (ulong)uVar11;
  if ((*(uint *)(param_1 + 0x2b4) & 1) == 0) {
    puVar17 = *(undefined8 **)(*(long *)PTR_DAT_04bbdcb8 + 0x48);
    if (puVar17 != (undefined8 *)0x0) {
      (**(code **)*puVar17)(puVar17,param_1);
    }
  }
  else if (((*(uint *)(param_1 + 0x2b4) >> 6 & 1) == 0) || (*(long *)PTR_DAT_04bd1148 == 0)) {
    lVar38 = FUN_038fe410(lVar16);
    if (lVar38 != 0) {
      FUN_0039c440(lVar16,PTR_LAB_04bd10c0,lVar38);
    }
  }
  else {
    if (uVar11 != 0) {
      uVar26 = 0;
      pbVar31 = PTR_DAT_04bb2020 + 0x10;
      do {
        lVar16 = *(long *)(*(long *)(param_1 + 0x20) + 0x28) + uVar26 * 0x78;
        uVar23 = (ulong)*(ushort *)(lVar16 + 0x6c);
        if (uVar23 != 0) {
          uVar22 = 0;
          do {
            lVar38 = *(long *)(lVar16 + 0x38) + uVar22 * 0xa8;
            bVar10 = *(byte *)(lVar38 + 0x9c);
            if ((ulong)bVar10 != 0) {
              uVar29 = 0;
              do {
                if ((*(long *)(*(long *)(lVar38 + 0x28) + uVar29 * 8) == 0) ||
                   (*(long *)(*(long *)(lVar38 + 0x90) + uVar29 * 8) == -1)) {
                  lVar37 = *(long *)(*(long *)(lVar38 + 0x30) + uVar29 * 8);
                  pbVar46 = (byte *)(lVar37 + 2);
                  bVar9 = *pbVar46;
                  uVar24 = (uint)bVar9;
                  if (bVar9 == 0) {
                    uVar25 = 0;
                  }
                  else {
                    uVar25 = 0xffffffff;
                    pbVar28 = (byte *)(lVar37 + 3);
                    do {
                      uVar25 = crc32b(uVar25,uVar24,0x4c11db7);
                      uVar24 = (uint)*pbVar28;
                      pbVar28 = pbVar28 + 1;
                    } while (uVar24 != 0);
                    uVar25 = ~uVar25;
                  }
                  plVar18 = *(long **)PTR_DAT_04bd1148;
                  pMVar3 = (MutexType *)(plVar18 + 0x70);
                  nn::os::LockMutex(pMVar3);
                  local_488 = (undefined *)CONCAT44(local_488._4_4_,uVar25);
                  lVar37 = *plVar18;
                  local_480 = pbVar31;
                  local_478 = pbVar46;
                  while (lVar37 != 0) {
                    iVar14 = FUN_039dace0(&local_488,lVar37 + 0x20);
                    if (iVar14 < 0) {
                      plVar19 = (long *)(lVar37 + 8);
                    }
                    else {
                      if (iVar14 == 0) {
                        lVar37 = *(long *)(lVar37 + 0x38);
                        if (lVar37 != 0) {
                          FUN_039d9b80(plVar18,lVar37,0);
                          nn::os::UnlockMutex(pMVar3);
                          uVar20 = *(undefined8 *)(lVar37 + 0xd8);
                          *(undefined8 *)(*(long *)(lVar38 + 0x28) + uVar29 * 8) =
                               *(undefined8 *)(lVar37 + 0xd0);
                          *(undefined8 *)(*(long *)(lVar38 + 0x90) + uVar29 * 8) = uVar20;
                          goto LAB_039fba28;
                        }
                        break;
                      }
                      plVar19 = (long *)(lVar37 + 0x10);
                    }
                    lVar37 = *plVar19;
                  }
                  nn::os::UnlockMutex(pMVar3);
                }
LAB_039fba28:
                uVar29 = uVar29 + 1;
              } while (uVar29 != bVar10);
            }
            uVar22 = uVar22 + 1;
          } while (uVar22 != uVar23);
        }
        uVar26 = uVar26 + 1;
      } while (uVar26 != uVar45);
      lVar16 = *(long *)(param_1 + 0x20);
    }
    if (*(short *)(lVar16 + 0xe4) != 0) {
      uVar26 = 0;
      pbVar31 = PTR_DAT_04bb2020 + 0x10;
      do {
        lVar38 = *(long *)(lVar16 + 0x68) + uVar26 * 0x70;
        uVar12 = *(ushort *)(lVar38 + 0x6c);
        if ((ulong)uVar12 != 0) {
          uVar23 = 0;
          do {
            if ((*(long *)(*(long *)(lVar38 + 0x30) + uVar23 * 8) == 0) ||
               (*(long *)(*(long *)(lVar38 + 0x50) + uVar23 * 8) == -1)) {
              lVar16 = *(long *)(*(long *)(lVar38 + 0x38) + uVar23 * 8);
              pbVar46 = (byte *)(lVar16 + 2);
              bVar10 = *pbVar46;
              uVar24 = (uint)bVar10;
              if (bVar10 == 0) {
                uVar25 = 0;
              }
              else {
                uVar25 = 0xffffffff;
                pbVar28 = (byte *)(lVar16 + 3);
                do {
                  uVar25 = crc32b(uVar25,uVar24,0x4c11db7);
                  uVar24 = (uint)*pbVar28;
                  pbVar28 = pbVar28 + 1;
                } while (uVar24 != 0);
                uVar25 = ~uVar25;
              }
              plVar18 = *(long **)PTR_DAT_04bd1148;
              pMVar3 = (MutexType *)(plVar18 + 0x70);
              nn::os::LockMutex(pMVar3);
              local_488 = (undefined *)CONCAT44(local_488._4_4_,uVar25);
              lVar16 = *plVar18;
              local_480 = pbVar31;
              local_478 = pbVar46;
              while (lVar16 != 0) {
                iVar14 = FUN_039dace0(&local_488,lVar16 + 0x20);
                if (iVar14 < 0) {
                  plVar19 = (long *)(lVar16 + 8);
                }
                else {
                  if (iVar14 == 0) {
                    lVar16 = *(long *)(lVar16 + 0x38);
                    if (lVar16 != 0) {
                      FUN_039d9b80(plVar18,lVar16,0);
                      nn::os::UnlockMutex(pMVar3);
                      uVar20 = *(undefined8 *)(lVar16 + 0xd8);
                      *(undefined8 *)(*(long *)(lVar38 + 0x30) + uVar23 * 8) =
                           *(undefined8 *)(lVar16 + 0xd0);
                      *(undefined8 *)(*(long *)(lVar38 + 0x50) + uVar23 * 8) = uVar20;
                      goto LAB_039fbb9c;
                    }
                    break;
                  }
                  plVar19 = (long *)(lVar16 + 0x10);
                }
                lVar16 = *plVar19;
              }
              nn::os::UnlockMutex(pMVar3);
            }
LAB_039fbb9c:
            uVar23 = uVar23 + 1;
          } while (uVar23 != uVar12);
          lVar16 = *(long *)(param_1 + 0x20);
        }
        uVar26 = uVar26 + 1;
      } while (uVar26 < *(ushort *)(lVar16 + 0xe4));
    }
  }
  if (uVar11 == 0) {
    lVar16 = 0;
  }
  else {
    uVar26 = 0;
    lVar16 = 0;
    do {
      lVar38 = *(long *)(*(long *)(param_1 + 0x20) + 0x28) + uVar26 * 0x78;
      uVar12 = *(ushort *)(lVar38 + 0x6a);
      if (uVar12 == 0) {
        lVar37 = 0;
      }
      else {
        if (uVar12 < 4) {
          uVar23 = 0;
          lVar37 = 0;
        }
        else {
          uVar23 = 0;
          lVar37 = 0;
          pbVar31 = (byte *)(*(long *)(lVar38 + 0x28) + 0x11b);
          do {
            pbVar28 = pbVar31 + -0xc0;
            uVar23 = uVar23 + 4;
            pbVar2 = pbVar31 + -0x60;
            bVar10 = *pbVar31;
            pbVar46 = pbVar31 + 0x60;
            pbVar31 = pbVar31 + 0x180;
            lVar37 = (DAT_05ae9370 + 0x1120) * 4 + lVar37 + (ulong)*pbVar28 * 0x260 +
                     (ulong)*pbVar2 * 0x260 + (ulong)bVar10 * 0x260 + (ulong)*pbVar46 * 0x260;
          } while (((ulong)uVar12 & 0xfffc) != uVar23);
        }
        uVar22 = (ulong)uVar12 & 3;
        if ((uVar12 & 3) != 0) {
          pbVar31 = (byte *)(*(long *)(lVar38 + 0x28) + uVar23 * 0x60 + 0x5b);
          do {
            uVar22 = uVar22 - 1;
            lVar37 = DAT_05ae9370 + 0x1120 + lVar37 + (ulong)*pbVar31 * 0x260;
            pbVar31 = pbVar31 + 0x60;
          } while (uVar22 != 0);
        }
      }
      uVar26 = uVar26 + 1;
      lVar32 = 0x430;
      if (*(ushort *)(lVar38 + 0x6c) != 0) {
        lVar32 = (ulong)*(ushort *)(lVar38 + 0x6c) * 0x198 + 0x430;
      }
      lVar16 = lVar32 + lVar16 + lVar37;
    } while (uVar26 != uVar45);
  }
  lVar38 = FUN_038fe410();
  if (lVar38 == 0) {
    uVar26 = 0;
  }
  else {
    uVar26 = (ulong)*(uint *)(*(long *)(lVar38 + 0x38) + 4);
  }
  plVar18 = *(long **)(*(long *)PTR_DAT_04bb4e50 + 8);
  puVar17 = (undefined8 *)(**(code **)(*plVar18 + 0x30))(plVar18,0x18000,8);
  lVar38 = *(long *)(param_1 + 0x20);
  uVar12 = *(ushort *)(lVar38 + 0xe4);
  if ((ulong)uVar12 == 0) {
    iVar14 = 0;
  }
  else {
    uVar23 = 0;
    iVar14 = 0;
    lVar38 = param_1 + 0x78;
    puVar4 = PTR_DAT_04bb2f40 + 0x10;
    puVar5 = PTR_DAT_04bb2020 + 0x10;
    do {
      local_75 = 0;
      local_478 = (byte *)CONCAT35(local_478._5_3_,0x400);
      lStack_490 = *(long *)(*(long *)(*(long *)(param_1 + 0x20) + 0x68) + uVar23 * 0x70 + 8) + 2;
      local_498 = puVar5;
      local_488 = puVar4;
      local_480 = (byte *)((long)&local_478 + 4);
      uVar22 = FUN_039b0f60(&local_498,local_6c,&local_488);
      if ((uVar22 & 1) == 0) {
        uVar22 = 0;
      }
      else {
        (**(code **)(local_488 + 0x18))(&local_488);
        lVar37 = 0;
        do {
          if (local_480[lVar37] == 0) goto LAB_039fbf1c;
          if (local_480[lVar37 + 1] == 0) {
            lVar37 = lVar37 + 1;
            goto LAB_039fbf1c;
          }
          if (local_480[lVar37 + 2] == 0) {
            lVar37 = lVar37 + 2;
            goto LAB_039fbf1c;
          }
          lVar37 = lVar37 + 3;
        } while (lVar37 != 0x80001);
        lVar37 = 0;
LAB_039fbf1c:
        iVar14 = iVar14 + (int)lVar37 + 1;
        uVar22 = (ulong)(local_6c[0] & (int)((uint)*(byte *)(param_1 + 0x2b4) << 0x1c) >> 0x1f);
      }
      uVar29 = -(uVar22 >> 0x1f) & 0xfffffffe00000000 | uVar22 << 1;
      uVar13 = *(ushort *)(lVar38 + uVar29);
      lVar37 = uVar23 * 0x70;
      uVar23 = uVar23 + 1;
      puVar17[(long)(int)((uint)uVar13 + (int)uVar22 * 0x400) * 2] =
           *(long *)(*(long *)(param_1 + 0x20) + 0x68) + lVar37;
      (puVar17 + (long)(int)((uint)uVar13 + (int)uVar22 * 0x400) * 2)[1] =
           *(long *)(*(long *)(*(long *)(param_1 + 0x20) + 0x68) + lVar37 + 8) + 2;
      *(short *)(lVar38 + uVar29) = *(short *)(lVar38 + uVar29) + 1;
    } while (uVar23 != uVar12);
    lVar38 = *(long *)(param_1 + 0x20);
  }
  uVar12 = *(ushort *)(lVar38 + 0xe6);
  if ((ulong)uVar12 != 0) {
    lVar38 = param_1 + 0x78;
    puVar4 = PTR_DAT_04bb2f40 + 0x10;
    puVar5 = PTR_DAT_04bb2020 + 0x10;
    uVar23 = 0;
    do {
      local_75 = 0;
      local_478 = (byte *)CONCAT35(local_478._5_3_,0x400);
      lStack_490 = *(long *)(*(long *)(*(long *)(param_1 + 0x20) + 0x78) + uVar23 * 0x60 + 8) + 2;
      local_498 = puVar5;
      local_488 = puVar4;
      local_480 = (byte *)((long)&local_478 + 4);
      uVar22 = FUN_039b0f60(&local_498,local_6c,&local_488);
      if ((uVar22 & 1) == 0) {
        uVar22 = 4;
      }
      else {
        (**(code **)(local_488 + 0x18))(&local_488);
        lVar37 = 0;
        do {
          if (local_480[lVar37] == 0) goto LAB_039fc08c;
          if (local_480[lVar37 + 1] == 0) {
            lVar37 = lVar37 + 1;
            goto LAB_039fc08c;
          }
          if (local_480[lVar37 + 2] == 0) {
            lVar37 = lVar37 + 2;
            goto LAB_039fc08c;
          }
          lVar37 = lVar37 + 3;
        } while (lVar37 != 0x80001);
        lVar37 = 0;
LAB_039fc08c:
        iVar14 = iVar14 + (int)lVar37 + 1;
        uVar24 = 4;
        if ((*(byte *)(param_1 + 0x2b4) & 8) != 0) {
          uVar24 = local_6c[0];
        }
        uVar22 = (ulong)uVar24;
      }
      uVar30 = -(uVar22 >> 0x1f) & 0xfffffffe00000000 | uVar22 << 1;
      uVar13 = *(ushort *)(lVar38 + uVar30);
      uVar29 = uVar23 + 1;
      puVar17[(long)(int)((uint)uVar13 + (int)uVar22 * 0x400) * 2] =
           *(long *)(*(long *)(param_1 + 0x20) + 0x78) + uVar23 * 0x60;
      (puVar17 + (long)(int)((uint)uVar13 + (int)uVar22 * 0x400) * 2)[1] =
           *(long *)(*(long *)(*(long *)(param_1 + 0x20) + 0x78) + uVar23 * 0x60 + 8) + 2;
      *(short *)(lVar38 + uVar30) = *(short *)(lVar38 + uVar30) + 1;
      uVar23 = uVar29;
    } while (uVar29 != uVar12);
    lVar38 = *(long *)(param_1 + 0x20);
  }
  puVar4 = PTR_DAT_04bb2f40;
  puVar36 = (ushort *)(param_1 + 0x78);
  lVar16 = (-(uVar26 >> 0x1f) & 0xfffffff000000000 | uVar26 << 4) + lVar16 +
           ((long)iVar14 + 7U & 0xfffffffffffffff8) +
           ((ulong)*(ushort *)(lVar38 + 0xe8) + (ulong)*(ushort *)(lVar38 + 0xe2) +
            (ulong)*puVar36 + (ulong)*(ushort *)(param_1 + 0x7a) +
            (ulong)*(ushort *)(param_1 + 0x7c) + (ulong)*(ushort *)(param_1 + 0x7e) +
            (ulong)*(ushort *)(param_1 + 0x80) + (ulong)*(ushort *)(param_1 + 0x82)) * 0x18;
  plVar19 = param_2;
  if (param_2 == (long *)0x0) {
    lVar37 = *(long *)PTR_DAT_04bb2698;
    lVar38 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
    puVar27 = (undefined8 *)(lVar37 + 8);
    if (lVar38 != 0) {
      puVar27 = (undefined8 *)(lVar38 + 0xa8);
    }
    plVar19 = (long *)*puVar27;
  }
  uVar20 = (**(code **)(*plVar19 + 0x30))(plVar19,lVar16,8);
  *(undefined8 *)(param_1 + 0xe0) = 0;
  *(long *)(param_1 + 0xe8) = lVar16;
  *(undefined8 *)(param_1 + 0xd8) = uVar20;
  iVar14 = (**(code **)(*param_2 + 0x78))(param_2);
  uVar12 = *(ushort *)(*(long *)(param_1 + 0x20) + 0xe2);
  if (uVar12 != 0) {
    lVar16 = *(long *)(param_1 + 0xd8) + *(long *)(param_1 + 0xe0);
    uVar26 = lVar16 + 7U & 0xfffffffffffffff8;
    lVar38 = 0;
    *(ulong *)(param_1 + 0xe0) =
         ((*(long *)(param_1 + 0xe0) + (ulong)uVar12 * 0x18) - lVar16) + uVar26;
    if (uVar12 != 1) {
      puVar27 = (undefined8 *)(uVar26 + 0x18);
      do {
        lVar38 = lVar38 + -2;
        puVar27[-3] = 0;
        puVar27[-1] = &DAT_0407ebb1;
        *puVar27 = 0;
        *(undefined4 *)(puVar27 + -2) = 0;
        puVar27[2] = &DAT_0407ebb1;
        *(undefined4 *)(puVar27 + 1) = 0;
        puVar27 = puVar27 + 6;
      } while (-lVar38 != ((ulong)uVar12 & 0xfffe));
      lVar38 = -lVar38;
    }
    if ((uVar12 & 1) != 0) {
      puVar27 = (undefined8 *)(uVar26 + lVar38 * 0x18);
      *puVar27 = 0;
      puVar27[2] = &DAT_0407ebb1;
      *(undefined4 *)(puVar27 + 1) = 0;
    }
    lVar16 = *(long *)(param_1 + 0x20);
    *(ulong *)(param_1 + 0x38) = uVar26;
    puVar5 = PTR_DAT_04bb2020;
    if (*(short *)(lVar16 + 0xe2) != 0) {
      uVar23 = 0;
      puVar6 = PTR_DAT_04bb2020 + 0x10;
      do {
        plVar19 = (long *)(uVar26 + uVar23 * 0x18);
        *plVar19 = *(long *)(lVar16 + 0x58) + uVar23 * 0x50;
        local_480 = (byte *)(*(long *)(*(long *)(*(long *)(param_1 + 0x20) + 0x58) + uVar23 * 0x50 +
                                      8) + 2);
        plVar19[2] = (long)local_480;
        local_488 = puVar6;
        (**(code **)(puVar5 + 0x28))(&local_488);
        uVar25 = (uint)*local_480;
        uVar24 = 0;
        if (*local_480 != 0) {
          uVar24 = 0xffffffff;
          pbVar31 = local_480;
          do {
            pbVar31 = pbVar31 + 1;
            uVar24 = crc32b(uVar24,uVar25,0x4c11db7);
            uVar25 = (uint)*pbVar31;
          } while (uVar25 != 0);
          uVar24 = ~uVar24;
        }
        lVar16 = uVar23 * 0x18;
        uVar23 = uVar23 + 1;
        *(uint *)(uVar26 + lVar16 + 8) = uVar24;
        lVar16 = *(long *)(param_1 + 0x20);
      } while (uVar23 < *(ushort *)(lVar16 + 0xe2));
    }
  }
  uVar12 = *(ushort *)(param_1 + 0x78);
  if (uVar12 != 0) {
    lVar16 = *(long *)(param_1 + 0xd8) + *(long *)(param_1 + 0xe0);
    puVar27 = (undefined8 *)(lVar16 + 7U & 0xfffffffffffffff8);
    *(ulong *)(param_1 + 0xe0) =
         ((*(long *)(param_1 + 0xe0) + (ulong)uVar12 * 0x18) - lVar16) + (long)puVar27;
    if (uVar12 == 1) {
      lVar16 = 0;
LAB_039fc36c:
      puVar34 = puVar27 + lVar16 * 3;
      *puVar34 = 0;
      puVar34[2] = &DAT_0407ebb1;
      *(undefined4 *)(puVar34 + 1) = 0;
    }
    else {
      lVar16 = 0;
      puVar34 = puVar27 + 3;
      do {
        lVar16 = lVar16 + -2;
        puVar34[-3] = 0;
        puVar34[-1] = &DAT_0407ebb1;
        *puVar34 = 0;
        *(undefined4 *)(puVar34 + -2) = 0;
        puVar34[2] = &DAT_0407ebb1;
        *(undefined4 *)(puVar34 + 1) = 0;
        puVar34 = puVar34 + 6;
      } while (-lVar16 != ((ulong)uVar12 & 0xfffe));
      lVar16 = -lVar16;
      if ((uVar12 & 1) != 0) goto LAB_039fc36c;
    }
    *(ulong *)(param_1 + 0x48) = (ulong)puVar27;
    if (*puVar36 != 0) {
      uVar26 = 0;
      puVar34 = puVar17;
      do {
        uVar26 = uVar26 + 1;
        *puVar27 = *puVar34;
        puVar27 = puVar27 + 3;
        puVar34 = puVar34 + 2;
      } while (uVar26 < *puVar36);
    }
  }
  uVar12 = *(ushort *)(param_1 + 0x7a);
  if (uVar12 != 0) {
    lVar16 = *(long *)(param_1 + 0xd8) + *(long *)(param_1 + 0xe0);
    puVar27 = (undefined8 *)(lVar16 + 7U & 0xfffffffffffffff8);
    *(ulong *)(param_1 + 0xe0) =
         ((*(long *)(param_1 + 0xe0) + (ulong)uVar12 * 0x18) - lVar16) + (long)puVar27;
    if (uVar12 == 1) {
      lVar16 = 0;
LAB_039fc43c:
      puVar34 = puVar27 + lVar16 * 3;
      *puVar34 = 0;
      puVar34[2] = &DAT_0407ebb1;
      *(undefined4 *)(puVar34 + 1) = 0;
    }
    else {
      lVar16 = 0;
      puVar34 = puVar27 + 3;
      do {
        lVar16 = lVar16 + -2;
        puVar34[-3] = 0;
        puVar34[-1] = &DAT_0407ebb1;
        *puVar34 = 0;
        *(undefined4 *)(puVar34 + -2) = 0;
        puVar34[2] = &DAT_0407ebb1;
        *(undefined4 *)(puVar34 + 1) = 0;
        puVar34 = puVar34 + 6;
      } while (-lVar16 != ((ulong)uVar12 & 0xfffe));
      lVar16 = -lVar16;
      if ((uVar12 & 1) != 0) goto LAB_039fc43c;
    }
    *(undefined8 **)(param_1 + 0x50) = puVar27;
    if (*(short *)(param_1 + 0x7a) != 0) {
      uVar26 = 0;
      puVar34 = puVar17 + 0x800;
      do {
        uVar26 = uVar26 + 1;
        *puVar27 = *puVar34;
        puVar27 = puVar27 + 3;
        puVar34 = puVar34 + 2;
      } while (uVar26 < *(ushort *)(param_1 + 0x7a));
    }
  }
  uVar12 = *(ushort *)(param_1 + 0x7c);
  if (uVar12 != 0) {
    lVar16 = *(long *)(param_1 + 0xd8) + *(long *)(param_1 + 0xe0);
    puVar27 = (undefined8 *)(lVar16 + 7U & 0xfffffffffffffff8);
    *(ulong *)(param_1 + 0xe0) =
         ((*(long *)(param_1 + 0xe0) + (ulong)uVar12 * 0x18) - lVar16) + (long)puVar27;
    if (uVar12 == 1) {
      lVar16 = 0;
LAB_039fc50c:
      puVar34 = puVar27 + lVar16 * 3;
      *puVar34 = 0;
      puVar34[2] = &DAT_0407ebb1;
      *(undefined4 *)(puVar34 + 1) = 0;
    }
    else {
      lVar16 = 0;
      puVar34 = puVar27 + 3;
      do {
        lVar16 = lVar16 + -2;
        puVar34[-3] = 0;
        puVar34[-1] = &DAT_0407ebb1;
        *puVar34 = 0;
        *(undefined4 *)(puVar34 + -2) = 0;
        puVar34[2] = &DAT_0407ebb1;
        *(undefined4 *)(puVar34 + 1) = 0;
        puVar34 = puVar34 + 6;
      } while (-lVar16 != ((ulong)uVar12 & 0xfffe));
      lVar16 = -lVar16;
      if ((uVar12 & 1) != 0) goto LAB_039fc50c;
    }
    *(undefined8 **)(param_1 + 0x58) = puVar27;
    if (*(short *)(param_1 + 0x7c) != 0) {
      uVar26 = 0;
      puVar34 = puVar17 + 0x1000;
      do {
        uVar26 = uVar26 + 1;
        *puVar27 = *puVar34;
        puVar27 = puVar27 + 3;
        puVar34 = puVar34 + 2;
      } while (uVar26 < *(ushort *)(param_1 + 0x7c));
    }
  }
  uVar12 = *(ushort *)(param_1 + 0x7e);
  if (uVar12 != 0) {
    lVar16 = *(long *)(param_1 + 0xd8) + *(long *)(param_1 + 0xe0);
    puVar27 = (undefined8 *)(lVar16 + 7U & 0xfffffffffffffff8);
    *(ulong *)(param_1 + 0xe0) =
         ((*(long *)(param_1 + 0xe0) + (ulong)uVar12 * 0x18) - lVar16) + (long)puVar27;
    if (uVar12 == 1) {
      lVar16 = 0;
LAB_039fc5dc:
      puVar34 = puVar27 + lVar16 * 3;
      *puVar34 = 0;
      puVar34[2] = &DAT_0407ebb1;
      *(undefined4 *)(puVar34 + 1) = 0;
    }
    else {
      lVar16 = 0;
      puVar34 = puVar27 + 3;
      do {
        lVar16 = lVar16 + -2;
        puVar34[-3] = 0;
        puVar34[-1] = &DAT_0407ebb1;
        *puVar34 = 0;
        *(undefined4 *)(puVar34 + -2) = 0;
        puVar34[2] = &DAT_0407ebb1;
        *(undefined4 *)(puVar34 + 1) = 0;
        puVar34 = puVar34 + 6;
      } while (-lVar16 != ((ulong)uVar12 & 0xfffe));
      lVar16 = -lVar16;
      if ((uVar12 & 1) != 0) goto LAB_039fc5dc;
    }
    *(undefined8 **)(param_1 + 0x60) = puVar27;
    if (*(short *)(param_1 + 0x7e) != 0) {
      uVar26 = 0;
      puVar34 = puVar17 + 0x1800;
      do {
        uVar26 = uVar26 + 1;
        *puVar27 = *puVar34;
        puVar27 = puVar27 + 3;
        puVar34 = puVar34 + 2;
      } while (uVar26 < *(ushort *)(param_1 + 0x7e));
    }
  }
  uVar12 = *(ushort *)(param_1 + 0x80);
  if (uVar12 != 0) {
    lVar16 = *(long *)(param_1 + 0xd8) + *(long *)(param_1 + 0xe0);
    puVar27 = (undefined8 *)(lVar16 + 7U & 0xfffffffffffffff8);
    *(ulong *)(param_1 + 0xe0) =
         ((*(long *)(param_1 + 0xe0) + (ulong)uVar12 * 0x18) - lVar16) + (long)puVar27;
    if (uVar12 == 1) {
      lVar16 = 0;
LAB_039fc6ac:
      puVar34 = puVar27 + lVar16 * 3;
      *puVar34 = 0;
      puVar34[2] = &DAT_0407ebb1;
      *(undefined4 *)(puVar34 + 1) = 0;
    }
    else {
      lVar16 = 0;
      puVar34 = puVar27 + 3;
      do {
        lVar16 = lVar16 + -2;
        puVar34[-3] = 0;
        puVar34[-1] = &DAT_0407ebb1;
        *puVar34 = 0;
        *(undefined4 *)(puVar34 + -2) = 0;
        puVar34[2] = &DAT_0407ebb1;
        *(undefined4 *)(puVar34 + 1) = 0;
        puVar34 = puVar34 + 6;
      } while (-lVar16 != ((ulong)uVar12 & 0xfffe));
      lVar16 = -lVar16;
      if ((uVar12 & 1) != 0) goto LAB_039fc6ac;
    }
    *(undefined8 **)(param_1 + 0x68) = puVar27;
    if (*(short *)(param_1 + 0x80) != 0) {
      uVar26 = 0;
      puVar34 = puVar17 + 0x2000;
      do {
        uVar26 = uVar26 + 1;
        *puVar27 = *puVar34;
        puVar27 = puVar27 + 3;
        puVar34 = puVar34 + 2;
      } while (uVar26 < *(ushort *)(param_1 + 0x80));
    }
  }
  uVar12 = *(ushort *)(param_1 + 0x82);
  if (uVar12 != 0) {
    lVar16 = *(long *)(param_1 + 0xd8) + *(long *)(param_1 + 0xe0);
    puVar27 = (undefined8 *)(lVar16 + 7U & 0xfffffffffffffff8);
    *(ulong *)(param_1 + 0xe0) =
         ((*(long *)(param_1 + 0xe0) + (ulong)uVar12 * 0x18) - lVar16) + (long)puVar27;
    if (uVar12 == 1) {
      lVar16 = 0;
LAB_039fc78c:
      puVar34 = puVar27 + lVar16 * 3;
      *puVar34 = 0;
      puVar34[2] = &DAT_0407ebb1;
      *(undefined4 *)(puVar34 + 1) = 0;
    }
    else {
      lVar16 = 0;
      puVar34 = puVar27 + 3;
      do {
        lVar16 = lVar16 + -2;
        puVar34[-3] = 0;
        puVar34[-1] = &DAT_0407ebb1;
        *puVar34 = 0;
        *(undefined4 *)(puVar34 + -2) = 0;
        puVar34[2] = &DAT_0407ebb1;
        *(undefined4 *)(puVar34 + 1) = 0;
        puVar34 = puVar34 + 6;
      } while (-lVar16 != ((ulong)uVar12 & 0xfffe));
      lVar16 = -lVar16;
      if ((uVar12 & 1) != 0) goto LAB_039fc78c;
    }
    *(undefined8 **)(param_1 + 0x70) = puVar27;
    if (*(short *)(param_1 + 0x82) != 0) {
      uVar26 = 0;
      puVar34 = puVar17 + 0x2800;
      do {
        uVar26 = uVar26 + 1;
        *puVar27 = *puVar34;
        puVar27 = puVar27 + 3;
        puVar34 = puVar34 + 2;
      } while (uVar26 < *(ushort *)(param_1 + 0x82));
    }
  }
  puVar6 = PTR_DAT_04bb2020;
  lVar16 = 0;
  puVar5 = PTR_DAT_04bb2020 + 0x10;
  do {
    if (puVar36[lVar16] != 0) {
      uVar26 = 0;
      do {
        lVar38 = uVar26 + lVar16 * 0x400;
        if ((*(byte *)(param_1 + 0x2b4) >> 4 & 1) != 0) {
          local_75 = 0;
          local_478 = (byte *)CONCAT35(local_478._5_3_,0x400);
          lStack_490 = puVar17[lVar38 * 2 + 1];
          local_498 = PTR_DAT_04bb2020 + 0x10;
          local_488 = puVar4 + 0x10;
          local_480 = (void *)((long)&local_478 + 4);
          uVar23 = FUN_039b0f60(&local_498,local_6c,&local_488);
          if ((uVar23 & 1) != 0) {
            (**(code **)(local_488 + 0x18))(&local_488);
            lVar37 = 0;
            do {
              if (*(char *)((long)local_480 + lVar37) == '\0') {
LAB_039fc904:
                iVar15 = (int)lVar37;
joined_r0x039fc904:
                if (-1 < iVar15) {
                  uVar24 = iVar15 + 1;
                  goto LAB_039fc90c;
                }
                uVar24 = 0;
                __dest = (void *)0x0;
                goto LAB_039fc93c;
              }
              if (*(char *)((long)local_480 + lVar37 + 1) == '\0') {
                lVar37 = lVar37 + 1;
                goto LAB_039fc904;
              }
              if (*(char *)((long)local_480 + lVar37 + 2) == '\0') {
                iVar15 = (int)lVar37 + 2;
                goto joined_r0x039fc904;
              }
              lVar37 = lVar37 + 3;
            } while (lVar37 != 0x80001);
            uVar24 = 1;
LAB_039fc90c:
            __dest = (void *)(*(long *)(param_1 + 0xd8) + *(long *)(param_1 + 0xe0));
            *(ulong *)(param_1 + 0xe0) = *(long *)(param_1 + 0xe0) + (ulong)uVar24;
            *(undefined1 *)((long)__dest + (ulong)(uVar24 - 1)) = 0;
LAB_039fc93c:
            (**(code **)(local_488 + 0x18))(&local_488);
            pbVar31 = local_480;
            if (__dest != local_480) {
              (**(code **)(local_488 + 0x18))(&local_488);
              lVar37 = 0;
              do {
                if (*(char *)((long)local_480 + lVar37) == '\0') goto LAB_039fc9bc;
                if (*(char *)((long)local_480 + lVar37 + 1) == '\0') {
                  lVar37 = lVar37 + 1;
                  goto LAB_039fc9bc;
                }
                if (*(char *)((long)local_480 + lVar37 + 2) == '\0') {
                  lVar37 = lVar37 + 2;
                  goto LAB_039fc9bc;
                }
                lVar37 = lVar37 + 3;
              } while (lVar37 != 0x80001);
              lVar37 = 0;
LAB_039fc9bc:
              iVar15 = (int)lVar37;
              if ((int)uVar24 <= (int)lVar37) {
                iVar15 = uVar24 - 1;
              }
              memcpy(__dest,pbVar31,(long)iVar15);
              *(undefined1 *)((long)__dest + (long)iVar15) = 0;
            }
            puVar17[lVar38 * 2 + 1] = __dest;
          }
        }
        uVar23 = ((ulong *)(param_1 + 0x48))[lVar16];
        local_480 = (byte *)puVar17[lVar38 * 2 + 1];
        *(byte **)(uVar23 + uVar26 * 0x18 + 0x10) = local_480;
        local_488 = puVar5;
        (**(code **)(puVar6 + 0x28))(&local_488);
        uVar25 = (uint)*local_480;
        uVar24 = 0;
        if (*local_480 != 0) {
          uVar24 = 0xffffffff;
          pbVar31 = local_480;
          do {
            pbVar31 = pbVar31 + 1;
            uVar24 = crc32b(uVar24,uVar25,0x4c11db7);
            uVar25 = (uint)*pbVar31;
          } while (uVar25 != 0);
          uVar24 = ~uVar24;
        }
        lVar38 = uVar26 * 0x18;
        uVar26 = uVar26 + 1;
        *(uint *)(uVar23 + lVar38 + 8) = uVar24;
      } while (uVar26 < puVar36[lVar16]);
    }
    lVar16 = lVar16 + 1;
  } while (lVar16 != 6);
  (**(code **)(*plVar18 + 0x38))(plVar18,puVar17);
  uVar12 = *(ushort *)(*(long *)(param_1 + 0x20) + 0xe8);
  uVar24 = (uint)uVar11;
  if (uVar12 == 0) goto LAB_039fcd14;
  lVar16 = *(long *)(param_1 + 0xd8) + *(long *)(param_1 + 0xe0);
  uVar26 = lVar16 + 7U & 0xfffffffffffffff8;
  *(ulong *)(param_1 + 0xe0) =
       ((*(long *)(param_1 + 0xe0) + (ulong)uVar12 * 0x18) - lVar16) + uVar26;
  if (uVar12 == 1) {
    lVar16 = 0;
LAB_039fcaec:
    puVar17 = (undefined8 *)(uVar26 + lVar16 * 0x18);
    *puVar17 = 0;
    puVar17[2] = &DAT_0407ebb1;
    *(undefined4 *)(puVar17 + 1) = 0;
  }
  else {
    lVar16 = 0;
    puVar17 = (undefined8 *)(uVar26 + 0x18);
    do {
      lVar16 = lVar16 + -2;
      puVar17[-3] = 0;
      puVar17[-1] = &DAT_0407ebb1;
      *puVar17 = 0;
      *(undefined4 *)(puVar17 + -2) = 0;
      puVar17[2] = &DAT_0407ebb1;
      *(undefined4 *)(puVar17 + 1) = 0;
      puVar17 = puVar17 + 6;
    } while (-lVar16 != ((ulong)uVar12 & 0xfffe));
    lVar16 = -lVar16;
    if ((uVar12 & 1) != 0) goto LAB_039fcaec;
  }
  lVar16 = *(long *)(param_1 + 0x20);
  *(ulong *)(param_1 + 0x40) = uVar26;
  puVar4 = PTR_DAT_04bb2020;
  if (*(short *)(lVar16 + 0xe8) != 0) {
    uVar23 = 0;
    puVar5 = PTR_DAT_04bb2020 + 0x10;
    do {
      lVar16 = *(long *)(lVar16 + 0x88) + uVar23 * 0x50;
      plVar18 = (long *)(uVar26 + uVar23 * 0x18);
      *plVar18 = lVar16;
      local_480 = (byte *)(*(long *)(*(long *)(*(long *)(param_1 + 0x20) + 0x88) + uVar23 * 0x50 + 8
                                    ) + 2);
      plVar18[2] = (long)local_480;
      local_488 = puVar5;
      (**(code **)(puVar4 + 0x28))(&local_488);
      uVar25 = (uint)*local_480;
      if (*local_480 != 0) {
        uVar33 = 0xffffffff;
        pbVar31 = local_480;
        do {
          pbVar31 = pbVar31 + 1;
          uVar33 = crc32b(uVar33,uVar25,0x4c11db7);
          uVar25 = (uint)*pbVar31;
        } while (uVar25 != 0);
        uVar25 = ~uVar33;
      }
      *(uint *)(uVar26 + uVar23 * 0x18 + 8) = uVar25;
      if ((*(short *)(lVar16 + 0x4a) != 0) && (uVar24 != 0)) {
        uVar22 = 0;
        do {
          uVar29 = 0;
          pcVar7 = (char *)(*(long *)(*(long *)(lVar16 + 0x28) + uVar22 * 0x30) + 2);
          do {
            lVar37 = *(long *)(*(long *)(param_1 + 0x20) + 0x28) + uVar29 * 0x78;
            lVar38 = *(long *)(lVar37 + 0x30);
            if (lVar38 != 0) {
              __n = strlen(pcVar7);
              uVar30 = (ulong)*(ushort *)(lVar38 + 0xc);
              puVar41 = (uint *)((int *)(lVar38 + 8) + uVar30 * 4);
              uVar25 = *puVar41;
              if (*(int *)(lVar38 + 8) < (int)*puVar41) {
                do {
                  uVar35 = (long)((ulong)uVar25 << 0x20) >> 0x23;
                  if (uVar35 < __n) {
                    uVar35 = (ulong)((byte)pcVar7[__n + ~uVar35] >> ((ulong)uVar25 & 7)) & 1;
                  }
                  else {
                    uVar35 = 0;
                  }
                  uVar30 = (ulong)*(ushort *)(lVar38 + 8 + uVar30 * 0x10 + uVar35 * 2 + 4);
                  puVar41 = (uint *)(lVar38 + 8 + uVar30 * 0x10);
                  bVar1 = (int)uVar25 < (int)*puVar41;
                  uVar25 = *puVar41;
                } while (bVar1);
              }
              if ((((__n == **(ushort **)(puVar41 + 2)) &&
                   (iVar15 = memcmp(*(ushort **)(puVar41 + 2) + 1,pcVar7,__n), iVar15 == 0)) &&
                  (uVar30 = (long)puVar41 + (-0x18 - lVar38),
                  ((uVar30 ^ 0xffffffffffffffff) & 0xffffffff0) != 0)) &&
                 (lVar38 = *(long *)(lVar37 + 0x28), lVar38 != 0)) {
                FUN_003a1028(lVar38 + (long)(int)(uVar30 >> 4) * 0x60);
              }
            }
            uVar29 = uVar29 + 1;
          } while (uVar29 != uVar45);
          uVar22 = uVar22 + 1;
        } while (uVar22 < *(ushort *)(lVar16 + 0x4a));
      }
      lVar16 = *(long *)(param_1 + 0x20);
      uVar23 = uVar23 + 1;
    } while (uVar23 < *(ushort *)(lVar16 + 0xe8));
  }
LAB_039fcd14:
  iVar15 = *(int *)(param_1 + 0x88);
  if (iVar15 != 0) {
    lVar16 = *(long *)(param_1 + 0x90);
    iVar42 = 0;
    do {
      FUN_03ad2d00(lVar16 + (long)iVar42 * 0x50,param_2,param_4);
      iVar42 = iVar42 + 1;
    } while (iVar15 != iVar42);
  }
  puVar4 = PTR_DAT_04bd16b8;
  if (uVar24 != 0) {
    lVar16 = 0;
    lVar38 = *(long *)(param_1 + 0xd8) + *(long *)(param_1 + 0xe0);
    uVar26 = lVar38 + 7U & 0xfffffffffffffff8;
    *(ulong *)(param_1 + 0xe0) = ((*(long *)(param_1 + 0xe0) + uVar45 * 0x430) - lVar38) + uVar26;
    do {
      plVar18 = (long *)(uVar26 + lVar16);
      *plVar18 = (long)(puVar4 + 0x10);
      plVar18[1] = 0;
      plVar18[4] = 0;
      plVar18[0x49] = 0x2000000000;
      *(undefined4 *)(plVar18 + 0x7b) = 0;
      plVar18[5] = 0x2000000000;
      plVar18[6] = (long)(plVar18 + 7);
      plVar18[0x27] = 0x2000000000;
      plVar18[0x28] = (long)(plVar18 + 0x29);
      plVar18[0x4a] = (long)(plVar18 + 0x4b);
      plVar18[2] = 0;
      plVar18[3] = 0;
      FUN_038e18e4(plVar18 + 0x7c);
      lVar16 = lVar16 + 0x430;
      *(undefined4 *)(plVar18 + 0x84) = 0;
      *(undefined8 *)((long)plVar18 + 0x424) = 0;
    } while (uVar45 * 0x430 != lVar16);
    *(ulong *)(param_1 + 0x28) = uVar26;
    uVar26 = 0;
    lVar38 = 0;
    lVar37 = 0;
    lVar16 = 0x428;
    do {
      puVar41 = (uint *)(*(long *)(param_1 + 0x28) + lVar16);
      FUN_039b7a80(puVar41 + -0x10a,param_1,uVar26 & 0xffffffff,param_1 + 0xd0,param_2,param_4);
      uVar26 = uVar26 + 1;
      lVar16 = lVar16 + 0x430;
      lVar38 = lVar38 + (ulong)puVar41[-1];
      lVar37 = lVar37 + (ulong)*puVar41;
    } while (uVar45 != uVar26);
    if (lVar37 != 0) {
      uVar20 = (**(code **)(*param_2 + 0x30))(param_2,lVar37,8);
      uVar26 = 0;
      *(undefined8 *)(param_1 + 0xb8) = uVar20;
      lVar16 = 0;
      *(undefined8 *)(param_1 + 0xc0) = 0;
      *(long *)(param_1 + 200) = lVar37;
      do {
        uVar23 = (ulong)*(ushort *)
                         (*(long *)(*(long *)(param_1 + 0x20) + 0x28) + uVar26 * 0x78 + 0x6c);
        if (uVar23 != 0) {
          lVar32 = *(long *)(param_1 + 0x28);
          lVar37 = 0;
          do {
            lVar47 = *(long *)(lVar32 + uVar26 * 0x430 + 0x18) + lVar37;
            local_488 = *(undefined **)(lVar47 + 0x10);
            local_468 = 0;
            uStack_460 = 8;
            local_458 = 0;
            uStack_450 = 0xffffffffffffffff;
            local_480 = (byte *)CONCAT44(local_480._4_4_,1);
            local_448 = 0;
            uStack_440 = 8;
            local_438 = 0;
            uStack_430 = 0xffffffffffffffff;
            local_428 = 0;
            uStack_420 = 8;
            local_418 = 0;
            uStack_410 = 0xffffffffffffffff;
            local_408 = 0;
            uStack_400 = 8;
            local_3f8 = 0;
            uStack_3f0 = 0xffffffffffffffff;
            local_3e8 = 0;
            uStack_3e0 = 8;
            local_3d8 = 0;
            uStack_3d0 = 0xffffffffffffffff;
            local_478 = (byte *)0x0;
            uStack_470 = 0;
            FUN_003b0a38(&local_488);
            lVar40 = *(long *)(param_1 + 0xb8) + *(long *)(param_1 + 0xc0);
            uVar22 = lVar40 + 7U & 0xfffffffffffffff8;
            *(ulong *)(param_1 + 0xc0) =
                 ((*(long *)(param_1 + 0xc0) + (ulong)*(uint *)(lVar47 + 0x18c)) - lVar40) + uVar22;
            FUN_003b0b60(lVar47 + 0xf0,&local_488,uVar22,*(undefined4 *)(lVar47 + 0x18c));
            uVar25 = FUN_003b0e1c(lVar47 + 0xf0,*(undefined8 *)(*(long *)PTR_DAT_04bc1010 + 0x30));
            lVar37 = lVar37 + 0x198;
            *(uint *)(lVar47 + 400) = uVar25;
            lVar16 = ((ulong)uVar25 + 0xff & 0x1ffffff00) + lVar16;
          } while (uVar23 * 0x198 != lVar37);
        }
        uVar26 = uVar26 + 1;
      } while (uVar26 != uVar45);
      if (lVar16 != 0) {
        piVar39 = (int *)(param_1 + 0xf8);
        piVar39[0] = 0;
        piVar39[1] = 0;
        *(undefined8 *)(param_1 + 0x120) = 0;
        *(undefined8 *)(param_1 + 0x110) = 0;
        *(undefined8 *)(param_1 + 0x100) = 0;
        *(undefined8 *)(param_1 + 0x108) = 0;
        *(undefined2 *)(param_1 + 0x11a) = 0;
        *(byte *)(param_1 + 0x118) = *(byte *)(param_1 + 0x118) & 0xfe;
        FUN_038f8590(*(undefined8 *)PTR_DAT_04bd0fa8,param_1 + 0xf0,plVar8,lVar16,0x100,3);
        lVar16 = *(long *)(param_1 + 0x110);
        *(undefined2 *)(param_1 + 0x11a) = 3;
        if (lVar16 == 0) {
          uVar26 = 0;
        }
        else {
          uVar26 = (ulong)(uint)(*piVar39 - *(int *)(lVar16 + 0x10));
        }
        if (*(char *)(param_1 + 0x270) != '\0') {
          *(undefined1 *)(param_1 + 0x270) = 0;
        }
        if (lVar16 != 0) {
          piVar39 = (int *)(lVar16 + 0x10);
        }
        FUN_0034fb58(param_1 + 0x160,*(undefined8 *)(param_1 + 0x108),*(undefined8 *)piVar39);
        uVar23 = 0;
        plVar18 = (long *)PTR_DAT_04bc1010;
        do {
          uVar22 = (ulong)*(ushort *)
                           (*(long *)(*(long *)(param_1 + 0x20) + 0x28) + uVar23 * 0x78 + 0x6c);
          if (uVar22 != 0) {
            lVar37 = *(long *)(param_1 + 0x28);
            uVar29 = 0;
            lVar16 = 0x195;
            do {
              pcVar7 = (char *)(*(long *)(lVar37 + uVar23 * 0x430 + 0x18) + lVar16);
              pcVar43 = pcVar7 + -0xa5;
              FUN_003b115c(pcVar43,*(undefined8 *)(*plVar18 + 0x30),param_1 + 0x160,uVar26,
                           *(undefined4 *)(pcVar7 + -5));
              if ((long)*pcVar7 != -1) {
                FUN_03ad27b0(*(undefined8 *)(*(long *)(pcVar7 + -0x175) + (long)*pcVar7 * 8),pcVar43
                            );
              }
              FUN_003b12a8(pcVar43,0);
              uVar29 = uVar29 + 1;
              lVar16 = lVar16 + 0x198;
              uVar26 = uVar26 + (*(int *)(pcVar7 + -5) + 0xffU & 0xffffff00);
              plVar18 = (long *)PTR_DAT_04bc1010;
            } while (uVar22 != uVar29);
          }
          uVar23 = uVar23 + 1;
        } while (uVar23 != uVar45);
      }
      if (lVar38 != 0) {
        *(undefined8 *)(param_1 + 0x158) = 0;
        uVar45 = lVar38 + 0x203U & 0xfffffffffffffffc;
        *(undefined2 *)(param_1 + 0x152) = 0;
        *(undefined8 *)(param_1 + 0x130) = 0;
        *(undefined8 *)(param_1 + 0x138) = 0;
        *(undefined8 *)(param_1 + 0x140) = 0;
        *(undefined8 *)(param_1 + 0x148) = 0;
        *(byte *)(param_1 + 0x150) = *(byte *)(param_1 + 0x150) & 0xfe;
        if (uVar45 == 0) {
          iVar15 = 0;
          pbVar31 = (byte *)0x0;
          uVar48 = 0;
          *(undefined2 *)(param_1 + 0x152) = 3;
        }
        else {
          FUN_038f8590(*(undefined8 *)PTR_DAT_04bd0fa8,(byte *)(param_1 + 0x128),plVar8,uVar45,4,3);
          pbVar31 = *(byte **)(param_1 + 0x140);
          *(undefined2 *)(param_1 + 0x152) = 3;
          if (*(long *)(param_1 + 0x148) == 0) {
            iVar15 = 0;
          }
          else {
            iVar15 = *(int *)(param_1 + 0x130) - *(int *)(*(long *)(param_1 + 0x148) + 0x10);
          }
          if (pbVar31 == (byte *)0x0) {
            uVar48 = 0;
          }
          else {
            uVar48 = *(undefined4 *)(pbVar31 + 0x104);
          }
        }
        uVar45 = 0;
        lVar16 = 0;
        if (uVar24 < 2) {
          uVar24 = 1;
        }
        do {
          lVar32 = *(long *)(param_1 + 0x28) + uVar45 * 0x430;
          lVar37 = *(long *)(lVar32 + 0x10);
          if (*(short *)(lVar37 + 0x6a) == 0) {
            lVar47 = 0;
          }
          else {
            lVar44 = 0;
            uVar26 = 0;
            lVar47 = 0;
            lVar40 = 0x52;
            do {
              local_488 = (undefined *)CONCAT44(uVar48,iVar15 + (int)lVar16 + (int)lVar47);
              local_480 = pbVar31;
              local_478 = (byte *)(param_1 + 0x128);
              lVar21 = FUN_039bad00(*(long *)(lVar32 + 0x20) + lVar44,
                                    *(long *)(lVar32 + 0x18) +
                                    (ulong)*(ushort *)(*(long *)(lVar37 + 0x28) + lVar40) * 0x198,
                                    &local_488,(lVar38 + 0x200) - (lVar16 + lVar47));
              uVar26 = uVar26 + 1;
              lVar37 = *(long *)(lVar32 + 0x10);
              lVar47 = lVar21 + lVar47;
              lVar40 = lVar40 + 0x60;
              lVar44 = lVar44 + 0x1118;
            } while (uVar26 < *(ushort *)(lVar37 + 0x6a));
          }
          lVar16 = lVar47 + lVar16;
          uVar45 = uVar45 + 1;
        } while (uVar45 != uVar24);
      }
    }
  }
  lVar16 = FUN_038fe410(*(undefined8 *)(param_1 + 0x20));
  if (lVar16 != 0) {
    uVar24 = *(uint *)(*(long *)(lVar16 + 0x38) + 4);
    uVar45 = (ulong)uVar24;
    if (0 < (int)uVar24) {
      lVar16 = *(long *)(param_1 + 0xd8) + *(long *)(param_1 + 0xe0);
      uVar26 = lVar16 + 7U & 0xfffffffffffffff8;
      *(ulong *)(param_1 + 0xe0) = ((*(long *)(param_1 + 0xe0) + uVar45 * 0x10) - lVar16) + uVar26;
      if (uVar24 == 1) {
        uVar23 = 0;
      }
      else {
        uVar23 = 0;
        puVar17 = (undefined8 *)(uVar26 + 0x10);
        do {
          uVar23 = uVar23 + 2;
          puVar17[-2] = 0;
          *(undefined4 *)(puVar17 + -1) = 0;
          *puVar17 = 0;
          *(undefined4 *)(puVar17 + 1) = 0;
          puVar17 = puVar17 + 4;
        } while ((uVar45 & 0xfffffffe) != uVar23);
      }
      if ((uVar24 & 1) != 0) {
        puVar17 = (undefined8 *)(uVar26 + uVar23 * 0x10);
        *puVar17 = 0;
        *(undefined4 *)(puVar17 + 1) = 0;
      }
      lVar16 = 0;
      lVar38 = 0;
      *(ulong *)(param_1 + 0x30) = uVar26;
      do {
        lVar32 = *(long *)(param_1 + 0x30);
        lVar37 = FUN_038fde10(*(undefined8 *)(param_1 + 0x20));
        if (lVar37 == 0) {
          uVar20 = 0;
        }
        else {
          uVar20 = *(undefined8 *)(*(long *)(lVar37 + 0x28) + (lVar38 >> 0x1d));
        }
        *(undefined8 *)(lVar32 + lVar16) = uVar20;
        lVar38 = lVar38 + 0x100000000;
        uVar45 = uVar45 - 1;
        lVar16 = lVar16 + 0x10;
      } while (uVar45 != 0);
    }
  }
  iVar15 = (**(code **)(*param_2 + 0x78))(param_2);
  *(int *)(param_1 + 0x2b0) = *(int *)(param_1 + 0x2b0) + (iVar14 - iVar15);
  *(uint *)(param_1 + 0x2b4) = *(uint *)(param_1 + 0x2b4) | 0x20;
  nn::os::UnlockMutex((MutexType *)(param_1 + 0x2e0));
  return;
}

