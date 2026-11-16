
void FUN_029b4be0(long param_1,undefined1 *param_2)

{
  char *pcVar1;
  undefined4 *puVar2;
  MutexType *pMVar3;
  bool bVar4;
  undefined8 *puVar5;
  char cVar6;
  undefined1 uVar7;
  long lVar8;
  bool bVar9;
  byte bVar10;
  uint uVar11;
  int iVar12;
  long *plVar13;
  long lVar14;
  long *plVar15;
  uint uVar16;
  long *plVar17;
  int iVar18;
  long *plVar19;
  uint uVar20;
  long lVar21;
  uint uVar22;
  uint uVar23;
  int iVar24;
  long lVar25;
  long *plVar26;
  long *plVar27;
  long *local_c8;
  uint local_b4;
  undefined **local_b0;
  undefined2 local_a8;
  undefined1 local_a6;
  undefined8 local_a0;
  undefined8 uStack_98;
  long local_90;
  undefined8 uStack_88;
  undefined8 local_80;
  long lStack_78;
  undefined **local_70;
  char *pcStack_68;
  
  uVar11 = (uint)*(byte *)(param_1 + 8);
  if ((*(byte *)(param_1 + 8) & 1) != 0) {
    cVar6 = param_2[1];
    FUN_029b4950(param_1);
    lVar21 = DAT_055e74f0;
    puVar2 = (undefined4 *)(DAT_055e74f0 + 0x5bd20);
    pMVar3 = (MutexType *)(DAT_055e74f0 + 0x5bd48);
    nn::os::LockMutex(pMVar3);
    if (*(long **)(lVar21 + 0x5cf8) != (long *)(lVar21 + 0x5cf0)) {
      plVar26 = *(long **)(lVar21 + 0x5cf8);
      do {
        plVar13 = (long *)plVar26[1];
        plVar19 = plVar13;
        if (*plVar26 != 0) {
          *(long **)(*plVar26 + 8) = plVar13;
          plVar19 = (long *)plVar26[1];
        }
        if (plVar19 != (long *)0x0) {
          *plVar19 = *plVar26;
        }
        *plVar26 = 0;
        plVar26[1] = 0;
        *(int *)(lVar21 + 0x5d00) = *(int *)(lVar21 + 0x5d00) + -1;
        plVar26[-0x29] = *(long *)(lVar21 + 0x5d08);
        *(long **)(lVar21 + 0x5d08) = plVar26 + -0x29;
        plVar26 = plVar13;
      } while (plVar13 != (long *)(lVar21 + 0x5cf0));
    }
    *puVar2 = 0;
    nn::os::UnlockMutex(pMVar3);
    local_b0 = (undefined **)0x300010101;
    FUN_029b7580(DAT_055e74f8,param_1 + 0x20,param_1 + 0x16050,cVar6 != '\0',&local_b0);
    lVar21 = *(long *)(param_1 + 0x28);
    if (lVar21 != param_1 + 0x20) {
      lVar25 = lVar21 + -0x48;
      do {
        lVar8 = DAT_055e74f0;
        if ((*(long *)(lVar25 + 0x40) == 0) && (*(int *)(DAT_055e74f0 + 0x1b70) != 0)) {
          nn::os::LockMutex((MutexType *)&DAT_055e9108);
          if (0 < *(int *)(lVar8 + 0x1b70)) {
            iVar12 = *(int *)(lVar8 + 0x1b6c);
            iVar18 = *(int *)(lVar8 + 0x1b68);
            iVar24 = 0;
            if (iVar18 <= iVar12) {
              iVar24 = iVar18;
            }
            lVar14 = *(long *)(*(long *)(lVar8 + 0x1b60) + (long)(iVar12 - iVar24) * 8);
            *(int *)(lVar8 + 0x1b70) = *(int *)(lVar8 + 0x1b70) + -1;
            iVar24 = 0;
            if (iVar12 + 1 < iVar18) {
              iVar24 = iVar12 + 1;
            }
            *(int *)(lVar8 + 0x1b6c) = iVar24;
            if (lVar14 != 0) {
              *(undefined4 *)(lVar25 + 0x38) = 1;
              *(long *)(lVar25 + 0x40) = lVar14;
            }
          }
          nn::os::UnlockMutex((MutexType *)&DAT_055e9108);
        }
        lVar21 = *(long *)(lVar21 + 8);
        lVar25 = lVar21 + -0x48;
      } while (lVar25 != param_1 + -0x28);
    }
    uVar11 = *(byte *)(param_1 + 8) & 0xfc | 2;
    *(char *)(param_1 + 8) = (char)uVar11;
  }
  if (*(uint *)(param_1 + 0x30) == 0) goto joined_r0x029b4e44;
  plVar27 = *(long **)(param_1 + 0x28);
  plVar26 = (long *)(param_1 + 0x20);
  iVar24 = *(int *)(param_2 + 8);
  plVar19 = (long *)(param_1 + -0x28);
  plVar13 = plVar27 + -9;
  if (plVar27 == plVar26) {
    uVar23 = 0xffffffff;
    local_b4 = 0xffffffff;
    if (0 < iVar24 * 0x1000000) {
      local_c8 = (long *)0x0;
      if ((uVar11 >> 1 & 1) != 0) {
        *(byte *)(param_1 + 8) = (byte)uVar11 & 0xfd;
      }
      goto LAB_029b4fa8;
    }
LAB_029b4ebc:
    local_c8 = (long *)0x0;
    bVar4 = false;
    bVar9 = false;
    uVar23 = local_b4;
    uVar11 = local_b4;
  }
  else {
    uVar16 = 0;
    plVar17 = plVar27;
    plVar15 = plVar13;
    uVar22 = 0xffffffff;
    do {
      uVar23 = uVar22;
      if (*(char *)((long)plVar15 + 10) == '\0') break;
      plVar17 = (long *)plVar17[1];
      uVar23 = uVar16;
      if (*(char *)((long)plVar15 + 10) != '\x01') {
        uVar23 = uVar22;
      }
      uVar16 = uVar16 + 1;
      plVar15 = plVar17 + -9;
      uVar22 = uVar23;
    } while (plVar15 != plVar19);
    local_b4 = uVar23;
    if ((int)uVar23 < 0) {
      plVar17 = (long *)0x0;
      if (iVar24 * 0x1000000 < 1) goto LAB_029b4ebc;
LAB_029b4f14:
      local_c8 = plVar17;
      if (uVar23 == 0xffffffff) {
        if ((uVar11 >> 1 & 1) != 0) {
          *(byte *)(param_1 + 8) = (byte)uVar11 & 0xfd;
          do {
            if (plVar13[8] != 0) {
              FUN_029bcc30(*(undefined4 *)(param_1 + 0x1b070),DAT_055e74f0,plVar13,param_1 + 0x1b078
                           ,param_1 + 0x1b0d8,*(undefined4 *)(param_1 + 0x1b124),
                           *(undefined4 *)(param_1 + 0x1b120),*(undefined8 *)(param_2 + 0x10),
                           *(long *)(*(long *)(*(long *)(param_2 + 0x18) + 0x30) + 0x18) + 0x28);
            }
            plVar27 = (long *)plVar27[1];
            plVar13 = plVar27 + -9;
          } while (plVar13 != plVar19);
          plVar27 = *(long **)(param_1 + 0x28);
          plVar13 = plVar27 + -9;
        }
        uVar23 = 0xffffffff;
      }
LAB_029b4fa8:
      if (plVar13 != plVar19) {
        iVar12 = 0;
        uVar11 = 0xffffffff;
        do {
          lVar21 = *(long *)(param_1 + 0x28);
          if ((char)iVar24 < '\x01') goto LAB_029b511c;
          plVar17 = (long *)(lVar21 + -0x48);
          if (plVar13 == plVar17) {
            iVar18 = 0;
            bVar10 = *(byte *)(plVar13 + 1);
          }
          else {
            iVar18 = 0;
            do {
              bVar10 = *(byte *)((long)plVar17 + 0xe);
              *(undefined1 *)((long)plVar17 + 0xe) = 0;
              iVar18 = (uint)bVar10 + iVar18;
              *(byte *)(plVar17 + 1) = *(byte *)(plVar17 + 1) | 0x30;
              lVar21 = *(long *)(lVar21 + 8);
              plVar17 = (long *)(lVar21 + -0x48);
            } while (plVar13 != plVar17);
            bVar10 = *(byte *)(plVar13 + 1);
          }
          if ((bVar10 >> 5 & 1) == 0) {
            uVar16 = (uint)*(byte *)((long)plVar13 + 0xe) + (iVar18 - iVar24);
            *(byte *)(plVar13 + 1) = bVar10 | 0x10;
            *(char *)((long)plVar13 + 0xe) = (char)uVar16;
            if ((0 < (int)uVar11) && (uVar11 - 1 < *(uint *)(param_1 + 0x30))) {
              plVar17 = plVar26;
              if (6 < iVar12 - 2U) {
                uVar22 = uVar11 & 0xfffffff8;
                do {
                  uVar22 = uVar22 - 8;
                  plVar17 = *(long **)(*(long *)(*(long *)(*(long *)(*(long *)(*(long *)(*(long *)(
                                                  plVar17[1] + 8) + 8) + 8) + 8) + 8) + 8) + 8);
                } while (uVar22 != 0);
              }
              if ((uVar11 & 7) != 0) {
                uVar22 = uVar11 & 7;
                do {
                  plVar17 = (long *)plVar17[1];
                  uVar22 = uVar22 - 1;
                } while (uVar22 != 0);
              }
              if (((plVar17 != (long *)0x0) && (plVar17 != (long *)&DAT_00000048)) &&
                 ((*(byte *)(plVar17 + -8) & 1) != 0)) {
                *(undefined1 *)((long)plVar17 + -0x3e) = 2;
                *(undefined1 *)((long)plVar17 + -0x3c) = 0;
                *(byte *)(plVar17 + -8) = *(byte *)(plVar17 + -8) & 0xfe;
                uVar16 = (uint)*(byte *)((long)plVar13 + 0xe);
              }
            }
            if ((char)uVar16 < '\x01') {
              iVar24 = -uVar16;
              *(undefined1 *)((long)plVar13 + 0xe) = 0;
              *(byte *)(plVar13 + 1) = *(byte *)(plVar13 + 1) | 0x20;
            }
            else {
              iVar24 = 0;
            }
          }
          plVar27 = (long *)plVar27[1];
          uVar11 = uVar11 + 1;
          iVar12 = iVar12 + 1;
          plVar13 = plVar27 + -9;
        } while (plVar13 != plVar19);
        lVar21 = *(long *)(param_1 + 0x28);
LAB_029b511c:
        plVar13 = (long *)(lVar21 + -0x48);
        if (plVar13 != plVar19) {
          plVar27 = plVar13;
          do {
            if ('\0' < *(char *)((long)plVar27 + 0xe)) goto LAB_029b5180;
          } while (((*(byte *)(plVar27 + 1) & 1) == 0) &&
                  (plVar27 = (long *)(plVar27[10] + -0x48), plVar27 != plVar19));
          do {
            bVar10 = *(byte *)(plVar13 + 1);
            *(byte *)(plVar13 + 1) = bVar10 | 0x30;
            if ((bVar10 & 1) != 0) break;
            plVar13 = (long *)(plVar13[10] + -0x48);
          } while (plVar13 != plVar19);
        }
      }
LAB_029b5180:
      uVar16 = *(uint *)(param_1 + 0x30);
      if (local_c8 == (long *)0x0) {
        plVar13 = (long *)(*(long *)(param_1 + 0x28) + -0x48);
        uVar11 = 1;
        uVar22 = uVar16;
        if (plVar13 != plVar19) goto LAB_029b51f8;
LAB_029b51d8:
        iVar24 = 0;
      }
      else {
        plVar13 = *(long **)(param_1 + 0x28);
        if (plVar13 == plVar26) {
          iVar24 = -1;
        }
        else {
          iVar24 = 0;
          do {
            if (plVar13 == local_c8 + 9) goto LAB_029b51e4;
            plVar13 = (long *)plVar13[1];
            iVar24 = iVar24 + 1;
          } while (plVar13 != plVar26);
          iVar24 = -1;
        }
LAB_029b51e4:
        uVar11 = 0;
        plVar13 = local_c8;
        uVar22 = uVar16 - iVar24;
        if (local_c8 == plVar19) goto LAB_029b51d8;
LAB_029b51f8:
        lVar21 = *plVar26;
        iVar24 = 0;
        if ((int)uVar16 < 1) {
          lVar21 = 0;
        }
        plVar27 = (long *)0x0;
        if (lVar21 != 0) {
          plVar27 = (long *)(lVar21 + -0x48);
        }
        do {
          if (uVar11 < 2) {
            if ((*(byte *)(plVar13 + 1) >> 5 & 1) == 0) break;
            if (((*(byte *)(plVar13 + 1) & 1) != 0) || (plVar27 == plVar13)) goto LAB_029b5278;
          }
          else {
            if (((*(byte *)(plVar13 + 1) & 1) != 0) || (plVar27 == plVar13)) {
LAB_029b5278:
              uVar22 = uVar11;
              break;
            }
            if ((*(byte *)(plVar13 + 1) >> 4 & 1) == 0) break;
            iVar24 = iVar24 + 1;
          }
          uVar11 = uVar11 + 1;
          plVar13 = (long *)(plVar13[10] + -0x48);
        } while (plVar13 != plVar19);
      }
      if (uVar11 == 2 && uVar22 == 2) {
        iVar24 = 1;
      }
      bVar9 = 0 < iVar24;
      uVar11 = uVar23;
      if (0 < iVar24) {
        iVar12 = 0;
        uVar22 = uVar23;
        do {
          if ((-1 < (int)uVar22) && (!(uVar16 <= uVar22 || (int)uVar16 <= (int)uVar22))) {
            plVar13 = plVar26;
            if (6 < uVar22) {
              uVar20 = uVar22 + 1 & 0xfffffff8;
              do {
                uVar20 = uVar20 - 8;
                plVar13 = *(long **)(*(long *)(*(long *)(*(long *)(*(long *)(*(long *)(*(long *)(
                                                  plVar13[1] + 8) + 8) + 8) + 8) + 8) + 8) + 8);
              } while (uVar20 != 0);
            }
            for (uVar20 = uVar22 + 1 & 7; uVar20 != 0; uVar20 = uVar20 - 1) {
              plVar13 = (long *)plVar13[1];
            }
            if ((plVar13 != (long *)0x0) && (plVar13 != (long *)&DAT_00000048)) {
              bVar10 = *(byte *)(plVar13 + -8);
              *(undefined1 *)((long)plVar13 + -0x3e) = 1;
              if ((bVar10 & 1) != 0) {
                bVar10 = bVar10 & 0xfe;
                *(undefined1 *)((long)plVar13 + -0x3e) = 2;
              }
              *(undefined1 *)((long)plVar13 + -0x3c) = 0;
              uVar20 = uVar22 + 1;
              *(byte *)(plVar13 + -8) = bVar10 | 0x10;
              uVar16 = *(uint *)(param_1 + 0x30);
              if ((int)uVar20 < (int)uVar16) {
                if (uVar20 < uVar16) {
                  uVar20 = uVar20 & ((int)uVar20 >> 0x1f ^ 0xffffffffU);
                  uVar16 = uVar20 + 1;
                  plVar27 = plVar26;
                  if (6 < uVar20) {
                    uVar20 = uVar16 & 0xfffffff8;
                    do {
                      uVar20 = uVar20 - 8;
                      plVar27 = *(long **)(*(long *)(*(long *)(*(long *)(*(long *)(*(long *)(*(long 
                                                  *)(plVar27[1] + 8) + 8) + 8) + 8) + 8) + 8) + 8);
                    } while (uVar20 != 0);
                  }
                  for (uVar16 = uVar16 & 7; uVar16 != 0; uVar16 = uVar16 - 1) {
                    plVar27 = (long *)plVar27[1];
                  }
                }
                else {
                  plVar27 = (long *)0x0;
                }
                plVar17 = (long *)0x0;
                if (plVar27 != (long *)0x0) {
                  plVar17 = plVar27 + -9;
                }
                *(char *)((long)plVar17 + 0xe) =
                     *(char *)((long)plVar17 + 0xe) + *(char *)((long)plVar13 + -0x3a);
                *(undefined1 *)((long)plVar13 + -0x3a) = 0;
                *(byte *)(plVar13 + -8) = *(byte *)(plVar13 + -8) | 0x20;
                uVar16 = *(uint *)(param_1 + 0x30);
              }
            }
          }
          uVar22 = uVar22 + 1;
          iVar12 = iVar12 + 1;
        } while (iVar12 != iVar24);
        if ((int)uVar23 <= (int)uVar22) {
          uVar11 = uVar22;
        }
        if (uVar11 < uVar16 && (int)uVar11 < (int)uVar16) {
          uVar20 = uVar11 & ((int)uVar11 >> 0x1f ^ 0xffffffffU);
          uVar16 = uVar20 + 1;
          uVar22 = uVar16 & 3;
          plVar13 = plVar26;
          if (2 < uVar20) {
            uVar16 = uVar16 & 0xfffffffc;
            do {
              uVar16 = uVar16 - 4;
              plVar13 = *(long **)(*(long *)(*(long *)(plVar13[1] + 8) + 8) + 8);
            } while (uVar16 != 0);
          }
          for (; uVar22 != 0; uVar22 = uVar22 - 1) {
            plVar13 = (long *)plVar13[1];
          }
          if ((plVar13 != (long *)0x0) && (plVar27 = plVar13 + -9, plVar27 != (long *)0x0)) {
            while (plVar27 != plVar19) {
              if (*(char *)((long)plVar27 + 10) == '\0') {
                if ((-1 < *(char *)((long)plVar27 + 0xc)) || ((*(byte *)(plVar27 + 1) & 1) != 0))
                break;
                *(undefined1 *)((long)plVar27 + 10) = 2;
              }
              plVar13 = (long *)plVar13[1];
              uVar11 = uVar11 + 1;
              plVar27 = plVar13 + -9;
            }
          }
        }
        local_b4 = uVar11;
      }
      if (local_c8 == (long *)0x0) {
        local_c8 = (long *)0x0;
        bVar4 = false;
        goto LAB_029b555c;
      }
    }
    else {
      if (uVar23 < *(uint *)(param_1 + 0x30)) {
        uVar16 = uVar23 + 1 & 3;
        plVar15 = plVar26;
        if (2 < uVar23) {
          uVar22 = uVar23 + 1 & 0xfffffffc;
          do {
            uVar22 = uVar22 - 4;
            plVar15 = *(long **)(*(long *)(*(long *)(plVar15[1] + 8) + 8) + 8);
          } while (uVar22 != 0);
        }
        for (; uVar16 != 0; uVar16 = uVar16 - 1) {
          plVar15 = (long *)plVar15[1];
        }
      }
      else {
        plVar15 = (long *)0x0;
      }
      local_c8 = plVar15 + -9;
      plVar17 = (long *)0x0;
      if (plVar15 != (long *)0x0) {
        plVar17 = local_c8;
      }
      if (0 < iVar24 * 0x1000000) goto LAB_029b4f14;
      bVar9 = false;
      uVar11 = uVar23;
      if (plVar17 == (long *)0x0) {
        local_c8 = (long *)0x0;
        bVar4 = false;
        goto LAB_029b555c;
      }
    }
    if (*(char *)((long)local_c8 + 10) == '\x01') {
      cVar6 = *(char *)((long)local_c8 + 0xc);
      uVar16 = (int)cVar6 - 1;
      uVar22 = (int)cVar6;
      if (0 < cVar6) {
        *(char *)((long)local_c8 + 0xc) = (char)uVar16;
        uVar22 = uVar16;
      }
      if (!bVar9) {
        if (((uVar22 & 0xff) != 0) || ((*(byte *)(local_c8 + 1) & 0x21) != 0x20)) {
          bVar9 = false;
          goto LAB_029b5554;
        }
        *(undefined1 *)((long)local_c8 + 10) = 2;
        local_b4 = uVar11 + 1;
        FUN_029b59e0(param_1,&local_b4);
        uVar11 = local_b4;
      }
      bVar4 = true;
      bVar9 = true;
    }
    else {
LAB_029b5554:
      bVar4 = true;
    }
  }
LAB_029b555c:
  lVar21 = DAT_055e74f0;
  uVar7 = *param_2;
  pMVar3 = (MutexType *)(DAT_055e74f0 + 0x5bd48);
  nn::os::LockMutex(pMVar3);
  *(undefined1 *)(lVar21 + 0x3c59) = uVar7;
  nn::os::UnlockMutex(pMVar3);
  uVar16 = *(uint *)(param_1 + 0x30);
  if ((((int)uVar11 < (int)uVar16) && (bVar9)) && (uVar16 != 0)) {
    if (uVar11 < uVar16) {
      uVar22 = uVar11 & ((int)uVar11 >> 0x1f ^ 0xffffffffU);
      uVar23 = uVar22 + 1;
      uVar16 = uVar23 & 3;
      if (2 < uVar22) {
        uVar23 = uVar23 & 0xfffffffc;
        do {
          uVar23 = uVar23 - 4;
          plVar26 = *(long **)(*(long *)(*(long *)(plVar26[1] + 8) + 8) + 8);
        } while (uVar23 != 0);
      }
      for (; uVar16 != 0; uVar16 = uVar16 - 1) {
        plVar26 = (long *)plVar26[1];
      }
    }
    else {
      plVar26 = (long *)0x0;
    }
    plVar13 = (long *)0x0;
    if (plVar26 != (long *)0x0) {
      plVar13 = plVar26 + -9;
    }
    FUN_029bd080(DAT_055e74f0,local_c8,plVar13,*(undefined8 *)(param_2 + 0x18),param_2[2]);
    if ((*(byte *)(plVar13 + 1) >> 1 & 1) == 0) {
      if (bVar4) goto LAB_029b564c;
    }
    else {
      bVar9 = false;
      if ((int)plVar13[2] == 0x10b) {
        bVar9 = bVar4;
      }
      if (bVar9) {
LAB_029b564c:
        *(undefined1 *)((long)local_c8 + 0xc) = 0;
        *(undefined1 *)((long)local_c8 + 10) = 2;
      }
    }
    *(undefined1 *)((long)plVar13 + 10) = 1;
    uVar23 = uVar11;
  }
  if (-1 < (int)uVar23) {
    uVar11 = 0;
    do {
      if (*(int *)(param_1 + 0x30) < 1) goto LAB_029b5890;
      puVar5 = (undefined8 *)0x0;
      if (*(long *)(param_1 + 0x28) != 0) {
        puVar5 = (undefined8 *)(*(long *)(param_1 + 0x28) + -0x48);
      }
      if ((*(char *)((long)puVar5 + 0xc) == '\0') && ((*(byte *)(puVar5 + 1) >> 5 & 1) != 0)) {
        *(undefined1 *)((long)puVar5 + 10) = 2;
      }
      if (*(byte *)((long)puVar5 + 10) < 2) break;
      if ('\0' < *(char *)((long)puVar5 + 0xe) && 1 < *(int *)(param_1 + 0x30)) {
        lVar25 = *(long *)(*(long *)(param_1 + 0x28) + 8);
        lVar21 = 0;
        if (lVar25 != 0) {
          lVar21 = lVar25 + -0x48;
        }
        *(char *)(lVar21 + 0xe) = *(char *)(lVar21 + 0xe) + *(char *)((long)puVar5 + 0xe);
        *(undefined1 *)((long)puVar5 + 0xe) = 0;
        *(byte *)(puVar5 + 1) = *(byte *)(puVar5 + 1) | 0x30;
      }
      for (lVar21 = *(long *)(param_1 + 0x28); lVar25 = DAT_055e74f0,
          puVar5 != (undefined8 *)(lVar21 + -0x48); lVar21 = *(long *)(lVar21 + 8)) {
        if ((*(byte *)(lVar21 + -0x40) & 1) != 0) {
          *(byte *)(lVar21 + -0x40) = *(byte *)(lVar21 + -0x40) & 0xfe;
        }
      }
      lVar21 = puVar5[8];
      if (lVar21 != 0) {
        nn::os::LockMutex((MutexType *)&DAT_055e9108);
        iVar24 = *(int *)(lVar25 + 0x1b70);
        iVar12 = *(int *)(lVar25 + 0x1b68);
        if (iVar24 < iVar12) {
          *(int *)(lVar25 + 0x1b70) = iVar24 + 1;
          iVar24 = *(int *)(lVar25 + 0x1b6c) + iVar24;
          iVar18 = 0;
          if (iVar12 <= iVar24) {
            iVar18 = iVar12;
          }
          *(long *)(*(long *)(lVar25 + 0x1b60) + (long)(iVar24 - iVar18) * 8) = lVar21;
        }
        nn::os::UnlockMutex((MutexType *)&DAT_055e9108);
      }
      plVar26 = puVar5 + 9;
      if (*plVar26 != 0) {
        *(undefined8 *)(*plVar26 + 8) = puVar5[10];
      }
      if ((long *)puVar5[10] != (long *)0x0) {
        *(long *)puVar5[10] = *plVar26;
      }
      *plVar26 = 0;
      puVar5[10] = 0;
      bVar9 = uVar11 != uVar23;
      uVar11 = uVar11 + 1;
      *(int *)(param_1 + 0x30) = *(int *)(param_1 + 0x30) + -1;
      *puVar5 = *(undefined8 *)(param_1 + 0x38);
      *(undefined8 **)(param_1 + 0x38) = puVar5;
    } while (bVar9);
  }
  lVar21 = DAT_055e74f0;
  if (*(int *)(param_1 + 0x30) == 1) {
    puVar5 = (undefined8 *)0x0;
    if (*(long *)(param_1 + 0x28) != 0) {
      puVar5 = (undefined8 *)(*(long *)(param_1 + 0x28) + -0x48);
    }
    lVar25 = puVar5[8];
    if (lVar25 != 0) {
      nn::os::LockMutex((MutexType *)&DAT_055e9108);
      iVar24 = *(int *)(lVar21 + 0x1b70);
      iVar12 = *(int *)(lVar21 + 0x1b68);
      if (iVar24 < iVar12) {
        *(int *)(lVar21 + 0x1b70) = iVar24 + 1;
        iVar24 = *(int *)(lVar21 + 0x1b6c) + iVar24;
        iVar18 = 0;
        if (iVar12 <= iVar24) {
          iVar18 = iVar12;
        }
        *(long *)(*(long *)(lVar21 + 0x1b60) + (long)(iVar24 - iVar18) * 8) = lVar25;
      }
      nn::os::UnlockMutex((MutexType *)&DAT_055e9108);
    }
    plVar26 = puVar5 + 9;
    if (*plVar26 != 0) {
      *(undefined8 *)(*plVar26 + 8) = puVar5[10];
    }
    if ((long *)puVar5[10] != (long *)0x0) {
      *(long *)puVar5[10] = *plVar26;
    }
    *plVar26 = 0;
    puVar5[10] = 0;
    *(int *)(param_1 + 0x30) = *(int *)(param_1 + 0x30) + -1;
    *puVar5 = *(undefined8 *)(param_1 + 0x38);
    *(undefined8 **)(param_1 + 0x38) = puVar5;
  }
LAB_029b5890:
  lVar21 = *(long *)(param_1 + 0x28);
  if ((long *)(lVar21 + -0x48) != plVar19) {
    plVar26 = (long *)0x0;
    plVar13 = (long *)(lVar21 + -0x48);
    do {
      plVar27 = plVar13;
      pcVar1 = (char *)((long)plVar27 + 10);
      if ((*pcVar1 != '\x01') && (plVar27 = plVar26, *pcVar1 == '\0')) break;
      lVar21 = *(long *)(lVar21 + 8);
      plVar26 = plVar27;
      plVar13 = (long *)(lVar21 + -0x48);
    } while ((long *)(lVar21 + -0x48) != plVar19);
    if (plVar27 != (long *)0x0) {
      bVar9 = false;
      if (((*(byte *)(plVar27 + 1) >> 1 & 1) == 0) && (*(char *)((long)plVar27 + 10) == '\x01')) {
        bVar9 = false;
        if ((1 < (int)plVar27[2] - 0x1abU) && ((int)plVar27[2] != 0x10b)) {
          bVar9 = (plVar27[5] & 0x100000000U) == 0;
        }
      }
      bVar4 = false;
      if (-1 < (int)plVar27[5]) {
        bVar4 = bVar9;
      }
      *(undefined1 *)(param_1 + 0x1b06c) = bVar4;
      goto joined_r0x029b4e44;
    }
  }
  *(undefined1 *)(param_1 + 0x1b06c) = 0;
joined_r0x029b4e44:
  if ((DAT_055e9128 & 1) == 0) {
    local_b0 = &PTR_LAB_04917c40;
    DAT_055e9128 = 1;
    local_a8 = 1;
    local_70 = &PTR_LAB_048f9770;
    pcStack_68 = "DoubutsugoBlend";
    local_90 = DAT_055e74f0 + 0x3c18;
    uStack_88 = 0;
    local_a0 = *(undefined8 *)(DAT_055e74f0 + 0x3b78);
    lStack_78 = DAT_055e74f0 + 0x3c38;
    local_80 = 0;
    local_a6 = 0;
    uStack_98 = 0;
    FUN_03f44830(DAT_055e74f0 + 0x3b80,&local_b0);
  }
  return;
}

