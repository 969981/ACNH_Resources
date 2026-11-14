
/* WARNING: Removing unreachable block (ram,0x01c921f4) */

void FUN_01c91a10(long param_1)

{
  MutexType *pMVar1;
  uint uVar2;
  byte bVar3;
  bool bVar4;
  undefined1 uVar5;
  undefined4 uVar6;
  uint uVar7;
  int iVar8;
  ulong uVar9;
  long lVar10;
  undefined8 *puVar11;
  long *plVar12;
  long lVar13;
  byte bVar14;
  uint *puVar15;
  undefined8 uVar16;
  long *plVar17;
  byte *pbVar18;
  byte bVar19;
  long lVar20;
  int *piVar21;
  ulong *puVar22;
  int iVar23;
  byte local_2ac [4];
  undefined *local_2a8;
  char *local_2a0;
  ulong local_298;
  ulong uStack_290;
  undefined8 local_288;
  undefined *local_280;
  void *local_278;
  undefined8 local_270;
  undefined1 local_16c;
  undefined *local_168;
  long lStack_160;
  undefined *local_158;
  undefined8 uStack_150;
  byte local_64 [4];
  
  if ((*(char *)(param_1 + 0xf4) != '\0') && (uVar9 = FUN_02640eb0(), (uVar9 & 1) != 0)) {
    lVar20 = *(long *)PTR_DAT_04bb46b0;
    local_2a8 = (undefined *)**(long **)(*(long *)PTR_DAT_04bb49f0 + 8);
    local_2a0 = (char *)(*(long **)(*(long *)PTR_DAT_04bb49f0 + 8))[1];
    if (*(long *)(lVar20 + 8) != 0) {
      lVar10 = (**(code **)(*(long *)**(undefined8 **)(lVar20 + 0x10) + 0x18))();
      uVar9 = FUN_02818404(lVar10 + 0x1e34c0,&local_2a8);
      if ((uVar9 & 1) != 0) {
        uVar6 = FUN_028189c8(lVar10 + 0x1e34c0,&local_2a8);
        lVar20 = FUN_026eed64(lVar20,uVar6);
        if (lVar20 != 0) {
          FUN_02669cc0(local_64);
          if (local_64[0] < 8) {
            FUN_02645730(&local_2a8,local_64);
            iVar8 = *(int *)(param_1 + 0x20);
            if (iVar8 != 0) {
              lVar10 = *(long *)(param_1 + 0x28);
              iVar23 = 0;
              do {
                if ((*(byte *)(lVar10 + (long)iVar23 * 0x50 + 0x48) >> 1 & 1) != 0) {
                  local_168 = *(undefined **)(lVar10 + (long)iVar23 * 0x50 + 0x40);
                  uVar9 = FUN_02647470(&local_2a8,&local_168);
                  if ((uVar9 & 1) != 0) {
                    lVar10 = *(long *)(lVar20 + 0x18320);
                    if (lVar10 == 0) {
                      uVar9 = 0;
                    }
                    else {
                      if (*(undefined8 **)(lVar10 + 0x10) == (undefined8 *)0x0) {
                        uVar9 = 0;
                      }
                      else {
                        uVar9 = (**(code **)**(undefined8 **)(lVar10 + 0x10))();
                        lVar10 = *(long *)(lVar20 + 0x18320);
                        uVar9 = uVar9 & 0xffffffff;
                        if (lVar10 == 0) goto LAB_01c91ba0;
                      }
                      plVar12 = *(long **)(lVar10 + 0x20);
                      if (plVar12 != (long *)0x0) {
                        local_2a8 = *(undefined **)(lVar20 + 0x18300);
                        local_2a0 = *(char **)(lVar20 + 0x18308);
                        local_298 = 0x1000;
                        (**(code **)(*plVar12 + 0x20))(plVar12,&local_2a8);
                      }
                    }
LAB_01c91ba0:
                    local_2a8 = PTR_DAT_04bb2020 + 0x10;
                    local_2a0 = "FriendListNotifyUpdate";
                    FUN_0274c120(*(long *)(lVar20 + 0x18308) + *(long *)(lVar20 + 0x18300),
                                 &local_2a8,1,local_64);
                    if ((((uVar9 & 1) != 0) && (*(long *)(lVar20 + 0x18320) != 0)) &&
                       (puVar11 = *(undefined8 **)(*(long *)(lVar20 + 0x18320) + 0x18),
                       puVar11 != (undefined8 *)0x0)) {
                      (**(code **)*puVar11)();
                    }
                    break;
                  }
                }
                iVar23 = iVar23 + 1;
              } while (iVar8 != iVar23);
            }
          }
          iVar8 = *(int *)(param_1 + 0x20);
          *(undefined1 *)(param_1 + 0xf4) = 0;
          if (iVar8 != 0) {
            lVar20 = *(long *)(param_1 + 0x28);
            iVar23 = 0;
            do {
              pbVar18 = (byte *)(lVar20 + (long)iVar23 * 0x50 + 0x48);
              bVar19 = *pbVar18;
              if ((bVar19 >> 2 & 1) == 0) {
                bVar19 = bVar19 & 0xfd;
              }
              else {
                bVar19 = 0;
                *(undefined8 *)(lVar20 + (long)iVar23 * 0x50 + 0x40) = 0;
              }
              *pbVar18 = bVar19;
              iVar23 = iVar23 + 1;
            } while (iVar8 != iVar23);
          }
        }
      }
    }
  }
  iVar8 = *(int *)(param_1 + 0xe4);
  if (iVar8 != 0) {
    lVar20 = *(long *)(*(long *)PTR_DAT_04bcb7d8 + 0x88);
    pMVar1 = (MutexType *)(lVar20 + 0x330);
    nn::os::LockMutex(pMVar1);
    iVar23 = *(int *)(lVar20 + 0x128);
    puVar15 = *(uint **)(*(long *)(lVar20 + 0x110) + (long)iVar23 * 8);
    uVar2 = *puVar15;
    if (0 < (int)uVar2) {
      puVar11 = *(undefined8 **)(puVar15 + 2);
      lVar10 = (ulong)uVar2 << 3;
      do {
        if (*(int *)*puVar11 == iVar8) goto LAB_01c91da4;
        puVar11 = puVar11 + 1;
        lVar10 = lVar10 + -8;
      } while (lVar10 != 0);
    }
    uVar2 = iVar23 + 1U & 1;
    uVar7 = -uVar2;
    if (-2 < iVar23) {
      uVar7 = uVar2;
    }
    puVar15 = *(uint **)(*(long *)(lVar20 + 0x110) + (ulong)uVar7 * 8);
    uVar2 = *puVar15;
    if (0 < (int)uVar2) {
      puVar11 = *(undefined8 **)(puVar15 + 2);
      lVar10 = (ulong)uVar2 << 3;
      do {
        if (*(int *)*puVar11 == iVar8) goto LAB_01c91da4;
        puVar11 = puVar11 + 1;
        lVar10 = lVar10 + -8;
      } while (lVar10 != 0);
    }
    if ((0 < *(int *)(lVar20 + 0x140)) &&
       (lVar10 = *(long *)(lVar20 + 0x138), lVar10 != lVar20 + 0x130)) {
      do {
        if (*(int *)(lVar10 + -8) == iVar8) {
LAB_01c91da4:
          nn::os::UnlockMutex(pMVar1);
          return;
        }
        lVar10 = *(long *)(lVar10 + 8);
      } while (lVar10 + -8 != lVar20 + 0x128);
    }
    nn::os::UnlockMutex(pMVar1);
    *(undefined4 *)(param_1 + 0xe4) = 0;
  }
  uVar2 = *(uint *)(param_1 + 0x18);
  if (uVar2 != 0xffffffff) {
    lVar20 = *(long *)(param_1 + 0x10);
    if (*(uint *)(param_1 + 8) <= uVar2) {
      uVar2 = 0;
    }
    pbVar18 = (byte *)(lVar20 + (long)(int)uVar2 * 0x58 + 0x10);
    bVar19 = *pbVar18;
    uVar7 = nn::pctl::IsFreeCommunicationAvailable();
    if ((uVar7 & 1) == (bVar19 & 0x40) >> 6) {
      *pbVar18 = bVar19;
      piVar21 = (int *)(lVar20 + (long)(int)uVar2 * 0x58 + 0x50);
      iVar8 = *piVar21;
      if ((-1 < iVar8) && (*piVar21 = iVar8 + -1, iVar8 == 0 || iVar8 + -1 == 0)) {
        if ((*(char *)(*(long *)PTR_DAT_04bb21d0 + 0xf78) != '\0') &&
           (lVar10 = *(long *)(*(long *)PTR_DAT_04bcb7d8 + 0x38), lVar10 != 0)) {
          if ((bVar19 & 1) == 0) {
            uVar9 = 0;
          }
          else if ((bVar19 & 6) == 2) {
            uVar9 = 2;
          }
          else {
            uVar9 = 1;
            if ((bVar19 & 0x20) != 0) {
              uVar9 = 2;
            }
          }
          lVar20 = lVar20 + (long)(int)uVar2 * 0x58;
          bVar14 = *(byte *)(lVar20 + 0x11);
          bVar3 = *(byte *)(lVar20 + 0x12);
          iVar8 = FUN_0018ba9c(lVar20 + 0x18,0x38,&local_168,0x100);
          if (iVar8 != -1) {
            local_288 = 0;
            local_270 = CONCAT44(local_270._4_4_,0x101);
            local_278 = (void *)((long)&local_270 + 4);
            local_2a0 = (char *)CONCAT44(local_2a0._4_4_,0x65);
            uStack_290 = uVar9 | ((ulong)bVar14 & 0xf) << 4 | ((ulong)bVar3 & 0xf) << 8;
            local_280 = &DAT_04a44860;
            local_298 = (ulong)bVar19;
            memcpy(local_278,&local_168,0x100);
            local_16c = 0;
            uVar6 = FUN_038752b0(lVar10,&local_2a8,0);
            *(undefined4 *)(param_1 + 0xe4) = uVar6;
          }
        }
        *piVar21 = -1;
      }
    }
    else {
      bVar14 = 0x40;
      if ((uVar7 & 1) == 0) {
        bVar14 = 0;
      }
      *pbVar18 = bVar14 | bVar19 & 0xbf;
      *(undefined4 *)(lVar20 + (long)(int)uVar2 * 0x58 + 0x50) = 0x1d;
    }
  }
  if (*(int *)(param_1 + 0xe4) != 0) {
    return;
  }
  puVar22 = (ulong *)(param_1 + 0xb8);
  uVar9 = *puVar22;
  if ((7 < *(byte *)(param_1 + 0xb2)) && (uVar9 == 0)) {
    return;
  }
  if (uVar9 == 0) {
    uVar9 = FUN_02640eb0();
    if ((uVar9 & 1) != 0) {
      local_2ac[0] = *(byte *)(param_1 + 0xb2);
      if (7 < local_2ac[0]) {
        local_2ac[0] = 0xff;
      }
      lVar20 = FUN_025830c0(*(undefined8 *)PTR_DAT_04bb4f78,local_2ac,1);
      if (lVar20 != 0) {
        lVar10 = lVar20 + 0x194b0;
        if (*(long *)(lVar20 + 0x194b8) == 0) {
          lVar10 = *(long *)(*(long *)PTR_DAT_04bb46b0 + 0x20);
        }
        local_2a0 = (char *)(lVar10 + 0x24810);
        local_298 = CONCAT71(local_298._1_7_,1);
        if (*(long **)(lVar10 + 0x24838) == (long *)0x0) {
          uVar5 = 0;
        }
        else {
          puVar11 = (undefined8 *)**(long **)(lVar10 + 0x24838);
          uVar5 = 0;
          if (puVar11 != (undefined8 *)0x0) {
            uVar5 = (**(code **)*puVar11)();
          }
        }
        local_298 = CONCAT62(local_298._2_6_,CONCAT11(uVar5,(undefined1)local_298)) &
                    0xffffffffffff01ff;
        local_2a8 = PTR_DAT_04bbb028 + 0x10;
        *puVar22 = *(ulong *)(*(long *)(lVar10 + 0x24820) + *(long *)(lVar10 + 0x24818));
        FUN_02640184(&local_2a8);
      }
    }
    uVar9 = *puVar22;
    if (uVar9 == 0) {
      return;
    }
  }
  if (*(char *)(*(long *)PTR_DAT_04bb21d0 + 0xf78) == '\0') goto LAB_01c921bc;
  plVar12 = (long *)(param_1 + 0x30);
  if (*(long *)(param_1 + 0xc0) == 0) {
    lVar20 = *(long *)(*(long *)PTR_DAT_04bcb7d8 + 0x38);
    if ((lVar20 != 0) && (iVar8 = FUN_0018ba9c(plVar12,0x82,&local_168,0x100), iVar8 != -1)) {
      local_288 = 0;
      local_270 = CONCAT44(local_270._4_4_,0x101);
      local_278 = (void *)((long)&local_270 + 4);
      local_2a0 = (char *)CONCAT44(local_2a0._4_4_,0x66);
      uStack_290 = 0;
      local_280 = &DAT_04a44860;
      local_298 = uVar9;
      memcpy(local_278,&local_168,0x100);
      local_16c = 0;
      iVar8 = FUN_038752b0(lVar20,&local_2a8,0);
      *(int *)(param_1 + 0xe4) = iVar8;
      goto LAB_01c92100;
    }
  }
  else {
    local_288 = *(undefined8 *)(param_1 + 0x50);
    local_280 = *(undefined **)(param_1 + 0x58);
    local_278 = *(void **)(param_1 + 0x60);
    local_270 = *(undefined8 *)(param_1 + 0x68);
    local_2a8 = (undefined *)*plVar12;
    local_2a0 = *(char **)(param_1 + 0x38);
    local_298 = *(ulong *)(param_1 + 0x40);
    uStack_290 = *(ulong *)(param_1 + 0x48);
    lVar20 = *(long *)PTR_DAT_04bc1128;
    uVar16 = *(undefined8 *)(param_1 + 200);
    *(long *)(lVar20 + 0x20) = *(long *)(param_1 + 0xc0);
    *(ulong *)(lVar20 + 0x28) = uVar9;
    *(undefined2 *)(lVar20 + 0x78) = 0;
    *(undefined8 *)(lVar20 + 0x30) = uVar16;
    *(undefined **)(lVar20 + 0x38) = local_2a8;
    *(ulong *)(lVar20 + 0x50) = uStack_290;
    *(char **)(lVar20 + 0x40) = local_2a0;
    *(ulong *)(lVar20 + 0x48) = local_298;
    *(void **)(lVar20 + 0x68) = local_278;
    *(undefined8 *)(lVar20 + 0x70) = local_270;
    *(undefined8 *)(lVar20 + 0x58) = local_288;
    *(undefined **)(lVar20 + 0x60) = local_280;
    uVar9 = FUN_01d762b0(plVar12,*(undefined4 *)(lVar20 + 0x80));
    bVar4 = false;
    if ((uVar9 & 1) == 0) {
      local_158 = PTR_LAB_04bc1378;
      uStack_150 = 0;
      local_168 = PTR_DAT_04bc1398 + 0x10;
      lStack_160 = lVar20;
      iVar8 = FUN_01d766b8(*(undefined8 *)(*(long *)PTR_DAT_04bcb7d8 + 0x88),&local_168,
                           lVar20 + 0x84,0,0,0);
      *(int *)(lVar20 + 0x80) = iVar8;
LAB_01c92100:
      bVar4 = iVar8 != 0;
    }
    if (!bVar4) {
      return;
    }
  }
  lVar10 = *(long *)(param_1 + 0xd0);
  lVar20 = *(long *)PTR_DAT_04bb5030;
  nn::os::LockMutex((MutexType *)(lVar20 + 0xe8));
  plVar12 = *(long **)(lVar20 + 0x68);
  if (plVar12 != (long *)(lVar20 + 0x60)) {
    plVar17 = (long *)(lVar10 + *(int *)(lVar20 + 0x74));
    do {
      if (plVar12 == plVar17) {
        if (*plVar17 != 0) {
          *(long *)(*plVar17 + 8) = plVar17[1];
        }
        if ((long *)plVar17[1] != (long *)0x0) {
          *(long *)plVar17[1] = *plVar17;
        }
        *plVar17 = 0;
        plVar17[1] = 0;
        plVar17 = (long *)(lVar20 + 0x30);
        lVar13 = *plVar17;
        *(int *)(lVar20 + 0x70) = *(int *)(lVar20 + 0x70) + -1;
        plVar12 = (long *)(lVar10 + *(int *)(lVar20 + 0x44));
        *plVar17 = (long)plVar12;
        *plVar12 = lVar13;
        plVar12[1] = (long)plVar17;
        if (lVar13 != 0) {
          *(long **)(lVar13 + 8) = plVar12;
        }
        *(int *)(lVar20 + 0x40) = *(int *)(lVar20 + 0x40) + 1;
        break;
      }
      plVar12 = (long *)plVar12[1];
    } while (plVar12 != (long *)(lVar20 + 0x60));
  }
  nn::os::UnlockMutex((MutexType *)(lVar20 + 0xe8));
LAB_01c921bc:
  *puVar22 = 0;
  *(undefined8 *)(param_1 + 0xc0) = 0;
  *(undefined1 *)(param_1 + 0xb2) = 0xff;
  *(undefined8 *)(param_1 + 200) = 0;
  return;
}

