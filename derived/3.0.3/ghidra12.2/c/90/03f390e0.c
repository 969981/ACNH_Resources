
bool FUN_03f390e0(long param_1,long *param_2)

{
  MutexType *pMVar1;
  MutexType *pMVar2;
  undefined *puVar3;
  bool bVar4;
  char cVar5;
  byte bVar6;
  int iVar7;
  int iVar8;
  uint uVar9;
  long *plVar10;
  char *pcVar11;
  ulong uVar12;
  undefined4 uVar13;
  uint uVar14;
  uint uVar15;
  ulong uVar16;
  long lVar17;
  ulong uVar18;
  long *plVar19;
  char *pcVar20;
  char *pcVar21;
  byte *pbVar22;
  uint uVar23;
  uint uVar24;
  int iVar25;
  long lVar26;
  undefined *puVar27;
  int iVar28;
  undefined8 *puVar29;
  void *pvVar30;
  long lVar31;
  long *plVar32;
  size_t __size;
  void *__src;
  undefined *puVar33;
  byte *pbVar34;
  long *local_148;
  char *local_130;
  undefined8 local_128;
  undefined8 local_120;
  char *pcStack_118;
  undefined2 local_110;
  undefined1 uStack_10e;
  undefined1 uStack_10d;
  undefined1 uStack_10c;
  undefined4 uStack_10b;
  undefined3 uStack_107;
  undefined8 local_104;
  undefined8 local_fc;
  undefined4 local_f4;
  undefined4 uStack_f0;
  undefined4 local_ec;
  undefined4 uStack_e8;
  undefined4 local_e4;
  undefined4 uStack_e0;
  undefined4 uStack_dc;
  undefined4 uStack_d8;
  undefined8 local_d4;
  undefined4 local_cc;
  char *local_c8;
  undefined8 uStack_c0;
  char *local_b8;
  undefined1 local_9d;
  undefined **local_98;
  undefined4 local_90;
  uint local_8c;
  undefined4 uStack_88;
  undefined4 local_84;
  undefined4 uStack_80;
  undefined4 local_7c;
  undefined *local_78;
  char *local_70;
  
  if (*(int *)(param_1 + 0x10) == 0) {
    return false;
  }
  pMVar1 = (MutexType *)(param_1 + 0x50);
  nn::os::LockMutex(pMVar1);
  pMVar2 = (MutexType *)(param_1 + 0x90);
  nn::os::LockMutex(pMVar2);
  puVar27 = PTR_DAT_04bb2e90;
  puVar33 = PTR_DAT_04bb2d88;
  if (*(char *)(param_1 + 10) == '\0') {
    nn::os::UnlockMutex(pMVar2);
    goto LAB_03f39814;
  }
  *(undefined1 *)(param_1 + 10) = 0;
  nn::os::UnlockMutex(pMVar2);
  nn::os::LockMutex(pMVar1);
  nn::os::GetSystemTick();
  if (*(long *)(param_1 + 0x1d0) != 0) {
    if (0 < *(int *)(param_1 + 0x1c8)) {
      lVar26 = 0;
      do {
        puVar29 = *(undefined8 **)(*(long *)(param_1 + 0x1d0) + lVar26 * 8);
        (**(code **)*puVar29)(puVar29);
        lVar26 = lVar26 + 1;
        *puVar29 = *(undefined8 *)(param_1 + 0x1d8);
        *(undefined8 **)(param_1 + 0x1d8) = puVar29;
      } while (lVar26 < *(int *)(param_1 + 0x1c8));
    }
    pvVar30 = *(void **)(param_1 + 0x1e0);
    *(undefined4 *)(param_1 + 0x1c8) = 0;
    if (pvVar30 != (void *)0x0) {
      if (*(long *)PTR_DAT_04bb2698 == 0) {
        free(pvVar30);
      }
      else {
        plVar10 = (long *)FUN_038cb610(*(long *)PTR_DAT_04bb2698,pvVar30);
        if (plVar10 != (long *)0x0) {
          (**(code **)(*plVar10 + 0x38))(plVar10,pvVar30);
        }
      }
    }
    *(undefined4 *)(param_1 + 0x1e4) = 0;
    *(undefined8 *)(param_1 + 0x1dc) = 0;
    *(undefined8 *)(param_1 + 0x1d4) = 0;
    *(undefined8 *)(param_1 + 0x1cc) = 0;
  }
  if (*(long **)(param_1 + 0x20) != (long *)0x0) {
    (**(code **)(**(long **)(param_1 + 0x20) + 0x20))();
    *(undefined8 *)(param_1 + 0x20) = 0;
  }
  puVar27 = PTR_DAT_04bb2020;
  local_130 = PTR_DAT_04bb2020 + 0x10;
  local_128 = "FilePathContainer";
  pcVar11 = (char *)FUN_038c6d48(*(undefined4 *)(param_1 + 0xc),&local_130,
                                 *(undefined8 *)(param_1 + 0x18),8,1,0);
  *(char **)(param_1 + 0x20) = pcVar11;
  if (pcVar11 != (char *)0x0) {
    local_8c = 0;
    uStack_88 = 0;
    local_84 = 0;
    uStack_80 = 0;
    local_98 = &PTR_LAB_04ba8d98;
    uVar13 = 0xffffffff;
    local_90 = 0xffffffff;
    local_7c = 0;
    if (*(int *)(param_1 + 0x10) == 2) {
      local_130 = (char *)((ulong)local_130 & 0xffffffff00000000);
      FUN_03f3a2c0(param_1,&local_98,&local_130,param_1 + 0xb0);
      if ((int)local_130 == 0) {
LAB_03f3970c:
        uVar13 = 2;
        goto LAB_03f39710;
      }
      if ((int)local_130 < 0) {
LAB_03f394fc:
        uVar13 = 4;
        uStack_80 = 0;
        local_7c = 0;
        goto LAB_03f39710;
      }
      plVar10 = *(long **)(param_1 + 0x20);
      uVar23 = (int)local_130 + 1;
      if (plVar10 == (long *)0x0) {
        lVar31 = *(long *)PTR_DAT_04bb2698;
        lVar26 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
        plVar10 = (long *)(lVar31 + 8);
        if (lVar26 != 0) {
          plVar10 = (long *)(lVar26 + 0xa8);
        }
        plVar10 = (long *)*plVar10;
      }
      puVar29 = (undefined8 *)
                (**(code **)(*plVar10 + 0x30))(plVar10,(ulong)uVar23 + 0x10,0xfffffff8);
      uStack_80 = SUB84(puVar29,0);
      local_7c = (undefined4)((ulong)puVar29 >> 0x20);
      *(undefined1 *)(puVar29 + 2) = 0;
      *puVar29 = puVar29 + 2;
      *(undefined4 *)(puVar29 + 1) = 0;
      *(uint *)((long)puVar29 + 0xc) = uVar23;
      FUN_03f3a590(param_1,&local_98,param_1 + 0xb0);
      local_148 = (long *)CONCAT44(local_7c,uStack_80);
      uVar24 = *(uint *)(local_148 + 1);
      uVar23 = 0;
      if (*(int *)((long)local_148 + 0xc) <= (int)uVar24) {
        uVar23 = *(int *)((long)local_148 + 0xc) + ~uVar24;
      }
      if (0 < (int)uVar23) {
        lVar26 = *local_148;
        memset((void *)(lVar26 + (int)uVar24),0,(ulong)uVar23);
        *(undefined1 *)(lVar26 + (int)(uVar23 + uVar24)) = 0;
        *(uint *)(local_148 + 1) = uVar23 + uVar24;
      }
LAB_03f39698:
      uVar24 = local_8c;
      uVar23 = local_8c - 1;
      *(undefined4 *)(param_1 + 0x14) = 0;
      if (0 < (int)local_8c) {
        uVar12 = (ulong)local_8c;
        __size = (uVar12 + (ulong)local_8c * 4) * 0x20;
        lVar26 = *(long *)PTR_DAT_04bb2698;
        if (lVar26 == 0) {
          pvVar30 = malloc(__size);
        }
        else {
          plVar10 = *(long **)(param_1 + 0x20);
          if (plVar10 == (long *)0x0) {
            lVar31 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
            plVar10 = (long *)(lVar26 + 8);
            if (lVar31 != 0) {
              plVar10 = (long *)(lVar31 + 0xa8);
            }
            plVar10 = (long *)*plVar10;
            if (plVar10 == (long *)0x0) goto LAB_03f39714;
          }
          pvVar30 = (void *)(**(code **)(*plVar10 + 0x30))(plVar10,__size,8);
        }
        if (pvVar30 != (void *)0x0) {
          *(void **)(param_1 + 0x1d8) = pvVar30;
          if (1 < uVar24) {
            if (uVar23 == 1) {
              uVar16 = 0;
            }
            else {
              uVar16 = 0;
              plVar10 = (long *)((long)pvVar30 + 0x98);
              do {
                uVar16 = uVar16 + 2;
                plVar10[-0x13] = (long)plVar10;
                *plVar10 = (long)(plVar10 + 0x13);
                plVar10 = plVar10 + 0x26;
              } while (((ulong)uVar23 & 0xfffffffe) != uVar16);
            }
            if ((uVar23 & 1) != 0) {
              plVar10 = (long *)((long)pvVar30 + uVar16 * 0x98);
              *plVar10 = (long)(plVar10 + 0x13);
            }
          }
          *(undefined8 *)((long)pvVar30 + (long)(int)(uVar23 * 0x13) * 8) = 0;
          *(void **)(param_1 + 0x1e0) = pvVar30;
          pvVar30 = (void *)((long)pvVar30 + uVar12 * 0x98);
          if (pvVar30 != (void *)0x0) {
            *(void **)(param_1 + 0x1d0) = pvVar30;
            *(undefined4 *)(param_1 + 0x1c8) = 0;
            *(uint *)(param_1 + 0x1cc) = uVar24;
          }
          local_130 = (char *)&local_120;
          local_120 = (char *)((ulong)local_120 & 0xffffffffffffff00);
          local_128 = (char *)0x8000000000;
          lVar31 = *local_148;
          uVar23 = *(uint *)(local_148 + 1);
          (**(code **)(*(long *)PTR_PTR_04bb2238 + 0x18))();
          lVar26 = *local_148;
          uVar24 = *(uint *)(local_148 + 1);
          if ((uVar24 != 0) || (lVar31 != lVar26)) {
            uVar9 = 0;
            puVar33 = PTR_DAT_04bb2e90 + 0x10;
            puVar3 = PTR_DAT_04bb2d88 + 0x10;
            do {
              pcVar20 = local_130;
              pcVar11 = (char *)(lVar31 + (int)uVar9);
              uVar15 = uVar9;
              if ((int)uVar9 < (int)uVar23) {
                pcVar21 = pcVar11;
                uVar14 = uVar9;
                do {
                  uVar14 = uVar14 + 1;
                  if (*pcVar21 == '\n' || *pcVar21 == '\r') goto LAB_03f39ae0;
                  pcVar21 = pcVar21 + 1;
                } while (uVar23 != uVar14);
                uVar14 = uVar23;
LAB_03f39ae0:
                pcVar21 = pcVar11;
                if ((int)(uVar14 + ~uVar9) < 0x80) {
                  do {
                    if (*pcVar21 == '\n' || *pcVar21 == '\r') goto LAB_03f39b60;
                    uVar15 = uVar15 + 1;
                    pcVar21 = pcVar21 + 1;
                  } while (uVar23 != uVar15);
                  uVar15 = uVar23;
                  goto LAB_03f39b60;
                }
                do {
                  if (*pcVar21 == '\n' || *pcVar21 == '\r') goto LAB_03f39b20;
                  uVar15 = uVar15 + 1;
                  pcVar21 = pcVar21 + 1;
                } while (uVar23 != uVar15);
                uVar15 = uVar23;
LAB_03f39b20:
                if (uVar15 - uVar9 == -1) {
                  do {
                    cVar5 = *pcVar11;
                    pcVar11 = pcVar11 + 1;
                  } while (cVar5 != '\0');
                }
                goto LAB_03f39e58;
              }
LAB_03f39b60:
              if (local_130 == pcVar11) {
                if ((int)local_128 == 0) goto LAB_03f39bd8;
LAB_03f39d1c:
                FUN_03f362c0(*(undefined8 *)PTR_DAT_04bb49b8,&local_130);
                if (*(int *)(param_1 + 0x1c8) < *(int *)(param_1 + 0x1cc)) {
                  plVar10 = *(long **)(param_1 + 0x1d8);
                  if (plVar10 != (long *)0x0) {
                    *(long *)(param_1 + 0x1d8) = *plVar10;
                  }
                  pcVar11 = (char *)((long)plVar10 + 0x14);
                  *(undefined1 *)((long)plVar10 + 0x93) = 0;
                  local_70 = local_130;
                  *(undefined4 *)(plVar10 + 2) = 0x80;
                  *plVar10 = (long)puVar33;
                  plVar10[1] = (long)pcVar11;
                  local_78 = puVar27 + 0x10;
                  (**(code **)(puVar27 + 0x28))(&local_78);
                  pcVar20 = local_70;
                  if (pcVar11 != local_70) {
                    (**(code **)(local_78 + 0x18))(&local_78);
                    lVar17 = 0;
                    do {
                      if (local_70[lVar17] == '\0') goto LAB_03f39e00;
                      if (local_70[lVar17 + 1] == '\0') {
                        lVar17 = lVar17 + 1;
                        goto LAB_03f39e00;
                      }
                      if (local_70[lVar17 + 2] == '\0') {
                        lVar17 = lVar17 + 2;
                        goto LAB_03f39e00;
                      }
                      lVar17 = lVar17 + 3;
                    } while (lVar17 != 0x80001);
                    lVar17 = 0;
LAB_03f39e00:
                    iVar8 = (int)lVar17;
                    if ((int)plVar10[2] <= (int)lVar17) {
                      iVar8 = (int)plVar10[2] + -1;
                    }
                    memcpy(pcVar11,pcVar20,(long)iVar8);
                    pcVar11[iVar8] = '\0';
                  }
                  *plVar10 = (long)puVar3;
                  if (*(int *)(param_1 + 0x1c8) < *(int *)(param_1 + 0x1cc)) {
                    *(long **)(*(long *)(param_1 + 0x1d0) + (long)*(int *)(param_1 + 0x1c8) * 8) =
                         plVar10;
                    *(int *)(param_1 + 0x1c8) = *(int *)(param_1 + 0x1c8) + 1;
                  }
                }
              }
              else {
                uVar15 = uVar15 - uVar9;
                if (uVar15 == 0xffffffff) {
                  uVar15 = 0xffffffff;
                  pcVar21 = pcVar11;
                  do {
                    cVar5 = *pcVar21;
                    uVar15 = uVar15 + 1;
                    pcVar21 = pcVar21 + 1;
                  } while (cVar5 != '\0');
                }
                if ((int)local_128._4_4_ <= (int)uVar15) {
                  uVar15 = local_128._4_4_ - 1;
                }
                if ((int)uVar15 < 1) {
                  uVar15 = 0;
                }
                else {
                  memcpy(local_130,pcVar11,(ulong)uVar15);
                  pcVar20 = pcVar20 + uVar15;
                }
                *pcVar20 = '\0';
                local_128 = (char *)CONCAT44(local_128._4_4_,uVar15);
                if (uVar15 != 0) goto LAB_03f39d1c;
LAB_03f39bd8:
                pcVar20 = local_130;
                if ((int)uVar9 < (int)uVar23) {
                  do {
                    uVar9 = uVar9 + 1;
                    if (*pcVar11 == '\n' || *pcVar11 == '\r') goto LAB_03f39c00;
                    pcVar11 = pcVar11 + 1;
                  } while (uVar23 != uVar9);
                  uVar9 = uVar23;
                }
LAB_03f39c00:
                if ((uVar9 == uVar24) && (lVar31 == lVar26)) break;
                pcVar11 = (char *)(lVar31 + (int)uVar9);
                uVar15 = uVar9;
                if ((int)uVar9 < (int)uVar23) {
                  pcVar21 = pcVar11;
                  uVar14 = uVar9;
                  do {
                    uVar14 = uVar14 + 1;
                    if (*pcVar21 == '\n' || *pcVar21 == '\r') goto LAB_03f39c54;
                    pcVar21 = pcVar21 + 1;
                  } while (uVar23 != uVar14);
                  uVar14 = uVar23;
LAB_03f39c54:
                  if (0x7f < (int)(uVar14 + ~uVar9)) {
                    pcVar20 = pcVar11;
                    do {
                      if (*pcVar20 == '\n' || *pcVar20 == '\r') goto LAB_03f39c8c;
                      uVar15 = uVar15 + 1;
                      pcVar20 = pcVar20 + 1;
                    } while (uVar23 != uVar15);
                    uVar15 = uVar23;
LAB_03f39c8c:
                    if (uVar15 - uVar9 == -1) {
                      do {
                        cVar5 = *pcVar11;
                        pcVar11 = pcVar11 + 1;
                      } while (cVar5 != '\0');
                    }
                    goto LAB_03f39e58;
                  }
                  pcVar21 = pcVar11;
                  do {
                    if (*pcVar21 == '\n' || *pcVar21 == '\r') goto LAB_03f39cc8;
                    uVar15 = uVar15 + 1;
                    pcVar21 = pcVar21 + 1;
                  } while (uVar23 != uVar15);
                  uVar15 = uVar23;
                }
LAB_03f39cc8:
                if (local_130 != pcVar11) {
                  uVar15 = uVar15 - uVar9;
                  if (uVar15 == 0xffffffff) {
                    uVar15 = 0xffffffff;
                    pcVar21 = pcVar11;
                    do {
                      cVar5 = *pcVar21;
                      uVar15 = uVar15 + 1;
                      pcVar21 = pcVar21 + 1;
                    } while (cVar5 != '\0');
                  }
                  if ((int)local_128._4_4_ <= (int)uVar15) {
                    uVar15 = local_128._4_4_ - 1;
                  }
                  if (0 < (int)uVar15) {
                    memcpy(local_130,pcVar11,(ulong)uVar15);
                    pcVar20[uVar15] = '\0';
                    local_128 = (char *)CONCAT44(local_128._4_4_,uVar15);
                    goto LAB_03f39d1c;
                  }
                  *local_130 = '\0';
                  local_128 = (char *)((ulong)local_128._4_4_ << 0x20);
                }
              }
LAB_03f39e58:
              if ((int)uVar9 < (int)uVar23) {
                pcVar11 = (char *)(lVar31 + (int)uVar9);
                do {
                  uVar9 = uVar9 + 1;
                  if (*pcVar11 == '\n' || *pcVar11 == '\r') goto LAB_03f39e84;
                  pcVar11 = pcVar11 + 1;
                } while (uVar23 != uVar9);
                uVar9 = uVar23;
              }
LAB_03f39e84:
            } while ((uVar9 != uVar24) || (lVar31 != lVar26));
          }
          (**(code **)(**(long **)(param_1 + 0x20) + 0x38))(*(long **)(param_1 + 0x20),local_148);
          if ((long *)CONCAT44(local_84,uStack_88) != (long *)0x0) {
            (**(code **)(*(long *)CONCAT44(local_84,uStack_88) + 0x18))();
          }
          (**(code **)(**(long **)(param_1 + 0x20) + 0x28))();
          uVar23 = *(uint *)(param_1 + 0x1c8);
          puVar33 = PTR_DAT_04bb2d88;
          if (1 < (int)uVar23) {
            puVar29 = *(undefined8 **)(param_1 + 0x1d0);
            uVar12 = (ulong)(uVar23 >> 1);
            do {
              uVar9 = (uint)uVar12;
              uVar24 = uVar9 * 2;
              plVar10 = (long *)puVar29[uVar12 - 1 & 0xffffffff];
              if ((int)uVar24 <= (int)uVar23) {
                uVar16 = uVar12 & 0xffffffff;
                do {
                  if ((int)uVar24 < (int)uVar23) {
                    plVar32 = (long *)(puVar29 + (int)uVar24)[-1];
                    plVar19 = (long *)puVar29[(int)uVar24];
                    (**(code **)(*plVar32 + 0x18))(plVar32);
                    (**(code **)(*plVar32 + 0x18))(plVar32);
                    pbVar34 = (byte *)plVar32[1];
                    (**(code **)(*plVar19 + 0x18))(plVar19);
                    if (pbVar34 != (byte *)plVar19[1]) {
                      pbVar34 = (byte *)plVar19[1];
                      pbVar22 = (byte *)plVar32[1];
                      lVar26 = 0x7ffff;
                      do {
                        bVar6 = *pbVar22;
                        if (bVar6 != *pbVar34) {
                          if (bVar6 < *pbVar34) {
                            uVar9 = 1;
                            goto LAB_03f39fec;
                          }
                          break;
                        }
                        if (bVar6 == 0) break;
                        bVar4 = lVar26 != 0;
                        pbVar34 = pbVar34 + 1;
                        pbVar22 = pbVar22 + 1;
                        lVar26 = lVar26 + -1;
                      } while (bVar4);
                    }
                    (**(code **)(*plVar19 + 0x18))(plVar19);
                    (**(code **)(*plVar19 + 0x18))(plVar19);
                    (**(code **)(*plVar32 + 0x18))(plVar32);
                    uVar9 = 0;
LAB_03f39fec:
                    uVar9 = uVar9 | uVar24;
                  }
                  else {
                    uVar9 = uVar24;
                  }
                  plVar32 = (long *)puVar29[(int)(uVar9 - 1)];
                  (**(code **)(*plVar10 + 0x18))(plVar10);
                  (**(code **)(*plVar10 + 0x18))(plVar10);
                  pbVar34 = (byte *)plVar10[1];
                  (**(code **)(*plVar32 + 0x18))(plVar32);
                  uVar15 = (uint)uVar16;
                  if (pbVar34 == (byte *)plVar32[1]) {
LAB_03f3a090:
                    (**(code **)(*plVar32 + 0x18))(plVar32);
                    (**(code **)(*plVar32 + 0x18))(plVar32);
                    (**(code **)(*plVar10 + 0x18))(plVar10);
                    uVar9 = uVar15;
                    break;
                  }
                  pbVar34 = (byte *)plVar32[1];
                  pbVar22 = (byte *)plVar10[1];
                  lVar26 = 0x7ffff;
                  while( true ) {
                    bVar6 = *pbVar22;
                    if (bVar6 != *pbVar34) break;
                    if (bVar6 == 0) goto LAB_03f3a090;
                    bVar4 = lVar26 == 0;
                    pbVar34 = pbVar34 + 1;
                    pbVar22 = pbVar22 + 1;
                    lVar26 = lVar26 + -1;
                    if (bVar4) goto LAB_03f3a090;
                  }
                  if (*pbVar34 <= bVar6) goto LAB_03f3a090;
                  uVar24 = uVar9 * 2;
                  uVar16 = (ulong)uVar9;
                  puVar29[(int)(uVar15 - 1)] = puVar29[(int)(uVar9 - 1)];
                } while ((int)uVar24 <= (int)uVar23);
              }
              puVar29[(int)(uVar9 - 1)] = plVar10;
              bVar4 = 1 < (long)uVar12;
              uVar12 = uVar12 - 1;
            } while (bVar4);
            uVar12 = (ulong)uVar23 - 1;
            uVar16 = uVar12 & 0xffffffff;
            plVar10 = (long *)puVar29[uVar16];
            puVar29[uVar16] = *puVar29;
            uVar16 = (ulong)uVar23;
            if (uVar23 < 3) {
              puVar33 = PTR_DAT_04bb2d88;
            }
            else {
              do {
                uVar18 = uVar12;
                uVar23 = 2;
                uVar24 = 1;
                do {
                  uVar9 = uVar23;
                  if ((int)uVar23 < (int)uVar18) {
                    uVar9 = FUN_03f3a8c0((puVar29 + (int)uVar23)[-1],puVar29[(int)uVar23]);
                    uVar9 = uVar23 | uVar9 >> 0x1f;
                  }
                  plVar32 = (long *)puVar29[(int)(uVar9 - 1)];
                  (**(code **)(*plVar10 + 0x18))(plVar10);
                  (**(code **)(*plVar10 + 0x18))(plVar10);
                  pbVar34 = (byte *)plVar10[1];
                  (**(code **)(*plVar32 + 0x18))(plVar32);
                  if (pbVar34 == (byte *)plVar32[1]) {
LAB_03f3a1c0:
                    (**(code **)(*plVar32 + 0x18))(plVar32);
                    (**(code **)(*plVar32 + 0x18))(plVar32);
                    (**(code **)(*plVar10 + 0x18))(plVar10);
                    lVar31 = (long)(int)(uVar24 - 1);
                    break;
                  }
                  lVar31 = (long)(int)(uVar9 - 1);
                  pbVar34 = (byte *)plVar32[1];
                  pbVar22 = (byte *)plVar10[1];
                  lVar26 = 0x7ffff;
                  while( true ) {
                    bVar6 = *pbVar22;
                    if (bVar6 != *pbVar34) break;
                    if (bVar6 == 0) goto LAB_03f3a1c0;
                    bVar4 = lVar26 == 0;
                    pbVar34 = pbVar34 + 1;
                    pbVar22 = pbVar22 + 1;
                    lVar26 = lVar26 + -1;
                    if (bVar4) goto LAB_03f3a1c0;
                  }
                  if (*pbVar34 <= bVar6) goto LAB_03f3a1c0;
                  uVar23 = uVar9 << 1;
                  puVar29[(int)(uVar24 - 1)] = puVar29[lVar31];
                  uVar24 = uVar9;
                } while ((long)(int)uVar23 < (long)uVar16);
                puVar33 = PTR_DAT_04bb2d88;
                puVar29[lVar31] = plVar10;
                uVar12 = uVar18 - 1 & 0xffffffff;
                plVar10 = (long *)puVar29[uVar12];
                puVar29[uVar12] = *puVar29;
                uVar12 = uVar18 - 1;
                uVar16 = uVar18;
              } while (2 < uVar18);
            }
            *puVar29 = plVar10;
          }
          goto LAB_03f39804;
        }
      }
    }
    else {
      if (*(int *)(param_1 + 0x10) == 1) {
        uStack_f0 = (undefined4)*(undefined8 *)(param_1 + 0x28);
        local_ec = (undefined4)((ulong)*(undefined8 *)(param_1 + 0x28) >> 0x20);
        if (*(char *)(param_1 + 9) == '\0') {
          local_128 = (char *)CONCAT44(local_128._4_4_,1);
          local_110 = 0x100;
          local_120 = puVar27 + 0x10;
          uStack_10d = 1;
          uStack_10c = 0;
          uStack_10b = 0x1010101;
          local_130 = PTR_DAT_04bdf0b0 + 0x10;
          local_f4 = 0;
          uStack_e8 = 0;
          local_104 = 0;
          local_fc = 0;
          local_e4 = 0;
          uStack_e0 = 0;
          uStack_dc = 0;
          uStack_d8 = 0;
          local_d4 = 0;
          local_cc = 0;
          uStack_c0 = *(undefined8 *)(param_1 + 0xb8);
          uStack_10e = *(undefined1 *)(param_1 + 8);
          pcStack_118 = "FilePathContainer";
          local_c8 = local_120;
          local_b8 = pcVar11;
          puVar29 = (undefined8 *)FUN_03f35730(*(undefined8 *)PTR_DAT_04bb49b8,&local_130);
          if (((*PTR_DAT_04bb2828 & 1) == 0) &&
             (iVar8 = __cxa_guard_acquire(PTR_DAT_04bb2828), iVar8 != 0)) {
            *(undefined **)PTR_DAT_04bb2820 = PTR_DAT_04bb2830 + 0x10;
            __cxa_guard_release(PTR_DAT_04bb2828);
          }
        }
        else {
          local_f4 = 0;
          local_110 = 0x20;
          uStack_10e = 0;
          uStack_10d = 0;
          local_e4 = CONCAT31(local_e4._1_3_,1);
          local_130 = puVar27 + 0x10;
          uStack_e8 = 0;
          uStack_10c = 0;
          uStack_10b = 0;
          uStack_107 = 0;
          local_104 = 0;
          local_fc = 0;
          uStack_e0 = 0;
          uStack_dc = 0;
          local_128 = *(char **)(param_1 + 0xb8);
          local_120 = pcVar11;
          pcStack_118 = pcVar11;
          puVar29 = (undefined8 *)FUN_038d9cc0(*(undefined8 *)PTR_DAT_04bb28c8,&local_130);
          if (((*PTR_DAT_04bb2828 & 1) == 0) &&
             (iVar8 = __cxa_guard_acquire(PTR_DAT_04bb2828), iVar8 != 0)) {
            *(undefined **)PTR_DAT_04bb2820 = PTR_DAT_04bb2830 + 0x10;
            __cxa_guard_release(PTR_DAT_04bb2828);
          }
        }
        if (puVar29 != (undefined8 *)0x0) {
          uVar12 = (**(code **)*puVar29)(puVar29,PTR_DAT_04bb2820);
          if ((uVar12 & 1) == 0) {
            puVar29 = (undefined8 *)0x0;
          }
          if (puVar29 != (undefined8 *)0x0) {
            uStack_88 = SUB84(puVar29,0);
            local_84 = (undefined4)((ulong)puVar29 >> 0x20);
            uVar23 = *(uint *)(puVar29 + 2);
            if (0x7ffffffe < uVar23) goto LAB_03f394fc;
            plVar10 = *(long **)(param_1 + 0x20);
            uVar24 = uVar23 + 1;
            if (plVar10 == (long *)0x0) {
              lVar31 = *(long *)PTR_DAT_04bb2698;
              lVar26 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
              plVar10 = (long *)(lVar31 + 8);
              if (lVar26 != 0) {
                plVar10 = (long *)(lVar26 + 0xa8);
              }
              plVar10 = (long *)*plVar10;
            }
            local_148 = (long *)(**(code **)(*plVar10 + 0x30))
                                          (plVar10,(ulong)uVar24 + 0x10,0xfffffff8);
            uStack_80 = SUB84(local_148,0);
            local_7c = (undefined4)((ulong)local_148 >> 0x20);
            plVar10 = local_148 + 2;
            *(char *)plVar10 = '\0';
            *local_148 = (long)plVar10;
            *(undefined4 *)(local_148 + 1) = 0;
            *(uint *)((long)local_148 + 0xc) = uVar24;
            plVar32 = (long *)puVar29[1];
            if (plVar10 == plVar32) {
              uVar9 = *(uint *)(local_148 + 1);
            }
            else {
              uVar9 = *(uint *)(puVar29 + 2);
              if (uVar9 == 0xffffffff) {
                uVar9 = 0xffffffff;
                plVar19 = plVar32;
                do {
                  lVar26 = *plVar19;
                  uVar9 = uVar9 + 1;
                  plVar19 = (long *)((long)plVar19 + 1);
                } while ((char)lVar26 != '\0');
              }
              if ((int)uVar24 <= (int)uVar9) {
                uVar9 = uVar23;
              }
              if ((int)uVar9 < 1) {
                uVar9 = 0;
              }
              else {
                memcpy(plVar10,plVar32,(ulong)uVar9);
                plVar10 = (long *)((long)plVar10 + (ulong)uVar9);
              }
              *(char *)plVar10 = '\0';
              plVar32 = (long *)*local_148;
              *(uint *)(local_148 + 1) = uVar9;
            }
            (**(code **)(*(long *)PTR_PTR_04bb2238 + 0x18))();
            if ((*(uint *)(local_148 + 1) != 0) || (plVar32 != (long *)*local_148)) {
              uVar23 = 0;
              do {
                pcVar11 = (char *)((long)plVar32 + (long)(int)uVar23);
                if ((int)uVar23 < (int)uVar9) {
                  pcVar20 = pcVar11;
                  uVar24 = uVar23;
                  do {
                    uVar24 = uVar24 + 1;
                    if (*pcVar20 == '\n') goto LAB_03f3963c;
                    pcVar20 = pcVar20 + 1;
                  } while (uVar9 != uVar24);
                  uVar24 = uVar9;
LAB_03f3963c:
                  if (uVar24 != uVar23 + 1) goto LAB_03f39648;
                }
                else {
LAB_03f39648:
                  if (*(char *)((long)plVar32 + (long)(int)uVar23) != '\r') {
                    local_8c = local_8c + 1;
                  }
                }
                if ((int)uVar23 < (int)uVar9) {
                  do {
                    uVar23 = uVar23 + 1;
                    if (*pcVar11 == '\n') goto LAB_03f3967c;
                    pcVar11 = pcVar11 + 1;
                  } while (uVar9 != uVar23);
                  uVar23 = uVar9;
                }
LAB_03f3967c:
              } while ((uVar23 != *(uint *)(local_148 + 1)) || (plVar32 != (long *)*local_148));
            }
            if (local_8c != 0) {
              local_90 = 0;
              goto LAB_03f39698;
            }
            goto LAB_03f3970c;
          }
        }
        uVar13 = 3;
      }
LAB_03f39710:
      *(undefined4 *)(param_1 + 0x14) = uVar13;
    }
LAB_03f39714:
    if (*(long *)(param_1 + 0x1d0) != 0) {
      if (0 < *(int *)(param_1 + 0x1c8)) {
        lVar26 = 0;
        do {
          puVar29 = *(undefined8 **)(*(long *)(param_1 + 0x1d0) + lVar26 * 8);
          (**(code **)*puVar29)(puVar29);
          lVar26 = lVar26 + 1;
          *puVar29 = *(undefined8 *)(param_1 + 0x1d8);
          *(undefined8 **)(param_1 + 0x1d8) = puVar29;
        } while (lVar26 < *(int *)(param_1 + 0x1c8));
      }
      pvVar30 = *(void **)(param_1 + 0x1e0);
      *(undefined4 *)(param_1 + 0x1c8) = 0;
      if (pvVar30 != (void *)0x0) {
        if (*(long *)PTR_DAT_04bb2698 == 0) {
          free(pvVar30);
        }
        else {
          plVar10 = (long *)FUN_038cb610(*(long *)PTR_DAT_04bb2698,pvVar30);
          if (plVar10 != (long *)0x0) {
            (**(code **)(*plVar10 + 0x38))(plVar10,pvVar30);
          }
        }
      }
      *(undefined4 *)(param_1 + 0x1e4) = 0;
      *(undefined8 *)(param_1 + 0x1dc) = 0;
      *(undefined8 *)(param_1 + 0x1d4) = 0;
      *(undefined8 *)(param_1 + 0x1cc) = 0;
    }
    if (CONCAT44(local_7c,uStack_80) != 0) {
      (**(code **)(**(long **)(param_1 + 0x20) + 0x38))();
    }
    if ((long *)CONCAT44(local_84,uStack_88) != (long *)0x0) {
      (**(code **)(*(long *)CONCAT44(local_84,uStack_88) + 0x18))();
    }
    if (*(long **)(param_1 + 0x20) != (long *)0x0) {
      (**(code **)(**(long **)(param_1 + 0x20) + 0x20))();
      *(undefined8 *)(param_1 + 0x20) = 0;
    }
  }
LAB_03f39804:
  nn::os::UnlockMutex(pMVar1);
  puVar27 = PTR_DAT_04bb2e90;
LAB_03f39814:
  local_9d = 0;
  pvVar30 = (void *)((long)&local_120 + 4);
  local_120 = (char *)CONCAT44(local_120._4_4_,0x80);
  local_130 = puVar27 + 0x10;
  local_128 = pvVar30;
  (**(code **)(*param_2 + 0x18))(param_2);
  __src = (void *)param_2[1];
  if (pvVar30 != __src) {
    (**(code **)(*param_2 + 0x18))(param_2);
    lVar26 = 0;
    do {
      if (*(char *)(param_2[1] + lVar26) == '\0') goto LAB_03f398ac;
      lVar31 = param_2[1] + lVar26;
      if (*(char *)(lVar31 + 1) == '\0') {
        lVar26 = lVar26 + 1;
        goto LAB_03f398ac;
      }
      if (*(char *)(lVar31 + 2) == '\0') {
        lVar26 = lVar26 + 2;
        goto LAB_03f398ac;
      }
      lVar26 = lVar26 + 3;
    } while (lVar26 != 0x80001);
    lVar26 = 0;
LAB_03f398ac:
    iVar8 = (int)lVar26;
    if ((int)local_120 <= (int)lVar26) {
      iVar8 = (int)local_120 + -1;
    }
    memcpy(pvVar30,__src,(long)iVar8);
    *(undefined1 *)((long)pvVar30 + (long)iVar8) = 0;
  }
  local_130 = puVar33 + 0x10;
  iVar8 = *(int *)(param_1 + 0x1c8);
  if (iVar8 == 0) {
    iVar28 = -1;
  }
  else {
    if (iVar8 < 2) {
      iVar25 = 0;
    }
    else {
      iVar25 = 0;
      iVar8 = iVar8 + -1;
      do {
        iVar28 = iVar8 + iVar25;
        if (iVar28 < 0 != SCARRY4(iVar8,iVar25)) {
          iVar28 = iVar28 + 1;
        }
        iVar28 = iVar28 >> 1;
        iVar7 = FUN_03f3a8c0(*(undefined8 *)(*(long *)(param_1 + 0x1d0) + (long)iVar28 * 8),
                             &local_130);
        if (iVar7 == 0) goto LAB_03f39954;
        if (iVar7 < 0) {
          iVar25 = iVar28 + 1;
        }
        else {
          iVar8 = iVar28 + -1;
        }
      } while (iVar25 < iVar8);
    }
    iVar8 = FUN_03f3a8c0(*(undefined8 *)(*(long *)(param_1 + 0x1d0) + (long)iVar25 * 8),&local_130);
    if (iVar8 != 0) {
      iVar25 = -1;
    }
    iVar28 = iVar25;
  }
LAB_03f39954:
  nn::os::UnlockMutex(pMVar1);
  return iVar28 != -1;
}

