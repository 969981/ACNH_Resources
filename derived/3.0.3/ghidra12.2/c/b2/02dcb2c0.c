
void FUN_02dcb2c0(long param_1)

{
  bool bVar1;
  long lVar2;
  undefined2 uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  int iVar7;
  int iVar8;
  uint uVar9;
  uint uVar10;
  long lVar11;
  long *plVar12;
  void *pvVar13;
  long *plVar14;
  long lVar15;
  ulong uVar16;
  ulong uVar17;
  undefined2 *puVar18;
  ulong uVar19;
  ulong uVar20;
  undefined2 local_70 [2];
  undefined2 local_6c [2];
  undefined2 local_68 [2];
  undefined2 local_64 [2];
  
  lVar2 = param_1 + 0x1c358;
  FUN_02b74240(lVar2);
  FUN_02b744e0(lVar2);
  FUN_02b74780(lVar2);
  FUN_02b74a20(lVar2);
  iVar7 = *(int *)(param_1 + 0x1c4bc) + 0x20;
  FUN_02b74cc0(lVar2,iVar7,1);
  FUN_02b752d0(lVar2,iVar7,1);
  FUN_02b758e0(lVar2,iVar7,1);
  FUN_02b75ef0(lVar2,iVar7,0);
  lVar2 = param_1 + 0x1c3a8;
  uVar4 = FUN_00da1ae4(lVar2);
  *(uint *)(param_1 + 0x1c1b8) = uVar4;
  plVar14 = (long *)PTR_DAT_04bb2698;
  if (0 < (int)uVar4) {
    lVar15 = *(long *)PTR_DAT_04bb2698;
    uVar17 = (ulong)uVar4;
    if (lVar15 == 0) {
      pvVar13 = malloc(uVar17 << 1);
joined_r0x02dcb530:
      if (pvVar13 != (void *)0x0) {
        *(uint *)(param_1 + 0x1c488) = uVar4;
        *(void **)(param_1 + 0x1c490) = pvVar13;
      }
    }
    else {
      lVar11 = nn::os::GetTlsValue(*(undefined4 *)(DAT_05ae7790 + 0x68));
      plVar12 = (long *)(lVar15 + 8);
      if (lVar11 != 0) {
        plVar12 = (long *)(lVar11 + 0xa8);
      }
      plVar12 = (long *)*plVar12;
      if (plVar12 != (long *)0x0) {
        pvVar13 = (void *)(**(code **)(*plVar12 + 0x30))(plVar12,uVar17 << 1,8);
        goto joined_r0x02dcb530;
      }
    }
    uVar3 = FUN_00edf160(lVar2,1);
    **(undefined2 **)(param_1 + 0x1c490) = uVar3;
    if (uVar4 != 1) {
      uVar9 = 1;
      do {
        uVar5 = FUN_00da1ae4(lVar2);
        uVar6 = uVar9 + 1;
        if (uVar9 < uVar5) {
          uVar3 = FUN_00edf160(lVar2,uVar6);
        }
        else {
          uVar3 = 0xffff;
        }
        if (*(uint *)(param_1 + 0x1c488) <= uVar9) {
          uVar9 = 0;
        }
        *(undefined2 *)(*(long *)(param_1 + 0x1c490) + (ulong)uVar9 * 2) = uVar3;
        uVar9 = uVar6;
      } while (uVar4 != uVar6);
      if (1 < (int)uVar4) {
        if (uVar4 - 1 < *(uint *)(param_1 + 0x1c488)) {
          puVar18 = *(undefined2 **)(param_1 + 0x1c490);
          uVar19 = (ulong)(uVar4 >> 1);
          uVar20 = uVar19;
          do {
            uVar9 = (int)uVar19 * 2;
            uVar3 = puVar18[uVar20 - 1 & 0xffffffff];
            if ((int)uVar4 < (int)uVar9) {
              uVar6 = (uint)uVar20;
            }
            else {
              uVar16 = uVar20 & 0xffffffff;
              local_70[0] = uVar3;
              do {
                if ((int)uVar9 < (int)uVar4) {
                  uVar6 = FUN_02b78070(puVar18 + (long)(int)uVar9 + -1);
                  uVar5 = uVar9 | uVar6 >> 0x1f;
                }
                else {
                  uVar5 = uVar9;
                }
                iVar7 = FUN_02b78070(local_70,puVar18 + (int)(uVar5 - 1));
                uVar6 = (uint)uVar16;
                if (-1 < iVar7) break;
                uVar9 = uVar5 * 2;
                uVar16 = (ulong)uVar5;
                puVar18[(int)(uVar6 - 1)] = puVar18[(int)(uVar5 - 1)];
                uVar6 = uVar5;
              } while ((int)uVar9 <= (int)uVar4);
            }
            uVar19 = (ulong)((int)uVar19 - 1);
            puVar18[(int)(uVar6 - 1)] = uVar3;
            bVar1 = 1 < (long)uVar20;
            uVar20 = uVar20 - 1;
          } while (bVar1);
          uVar20 = uVar17 - 1;
          uVar3 = puVar18[uVar20 & 0xffffffff];
          puVar18[uVar20 & 0xffffffff] = *puVar18;
          while (local_70[0] = uVar3, 2 < (int)uVar4) {
            uVar4 = (uint)uVar20;
            uVar19 = uVar20 & 0xffffffff;
            uVar9 = 2;
            uVar6 = 1;
            do {
              if ((int)uVar9 < (int)uVar4) {
                uVar5 = FUN_02b78070(puVar18 + (long)(int)uVar9 + -1);
                uVar5 = uVar9 | uVar5 >> 0x1f;
              }
              else {
                uVar5 = uVar9;
              }
              iVar7 = uVar5 - 1;
              iVar8 = FUN_02b78070(local_70,puVar18 + iVar7);
              if (-1 < iVar8) {
                iVar7 = uVar6 - 1;
                break;
              }
              uVar9 = uVar5 * 2;
              puVar18[(int)(uVar6 - 1)] = puVar18[iVar7];
              uVar6 = uVar5;
            } while ((int)uVar9 < (int)uVar17);
            uVar20 = uVar20 - 1;
            puVar18[iVar7] = uVar3;
            uVar3 = puVar18[uVar20 & 0xffffffff];
            puVar18[uVar20 & 0xffffffff] = *puVar18;
            uVar17 = uVar19;
          }
          *puVar18 = uVar3;
          plVar14 = (long *)PTR_DAT_04bb2698;
        }
      }
    }
  }
  lVar2 = param_1 + 0x1c360;
  uVar4 = FUN_00da1ae4(lVar2);
  if (0 < (int)uVar4) {
    lVar15 = *plVar14;
    uVar17 = (ulong)uVar4;
    if (lVar15 == 0) {
      pvVar13 = malloc(uVar17 << 1);
joined_r0x02dcb7e0:
      if (pvVar13 != (void *)0x0) {
        *(uint *)(param_1 + 0x1c478) = uVar4;
        *(void **)(param_1 + 0x1c480) = pvVar13;
      }
    }
    else {
      lVar11 = nn::os::GetTlsValue(*(undefined4 *)(DAT_05ae7790 + 0x68));
      plVar12 = (long *)(lVar15 + 8);
      if (lVar11 != 0) {
        plVar12 = (long *)(lVar11 + 0xa8);
      }
      plVar12 = (long *)*plVar12;
      if (plVar12 != (long *)0x0) {
        pvVar13 = (void *)(**(code **)(*plVar12 + 0x30))(plVar12,uVar17 << 1,8);
        goto joined_r0x02dcb7e0;
      }
    }
    uVar3 = FUN_00edf160(lVar2,1);
    **(undefined2 **)(param_1 + 0x1c480) = uVar3;
    if (uVar4 != 1) {
      uVar9 = 1;
      do {
        uVar5 = FUN_00da1ae4(lVar2);
        uVar6 = uVar9 + 1;
        if (uVar9 < uVar5) {
          uVar3 = FUN_00edf160(lVar2,uVar6);
        }
        else {
          uVar3 = 0xffff;
        }
        if (*(uint *)(param_1 + 0x1c478) <= uVar9) {
          uVar9 = 0;
        }
        *(undefined2 *)(*(long *)(param_1 + 0x1c480) + (ulong)uVar9 * 2) = uVar3;
        uVar9 = uVar6;
      } while (uVar4 != uVar6);
      if (1 < (int)uVar4) {
        if (uVar4 - 1 < *(uint *)(param_1 + 0x1c478)) {
          puVar18 = *(undefined2 **)(param_1 + 0x1c480);
          uVar19 = (ulong)(uVar4 >> 1);
          uVar20 = uVar19;
          do {
            uVar9 = (int)uVar19 * 2;
            uVar3 = puVar18[uVar20 - 1 & 0xffffffff];
            if ((int)uVar4 < (int)uVar9) {
              uVar6 = (uint)uVar20;
            }
            else {
              uVar16 = uVar20 & 0xffffffff;
              local_6c[0] = uVar3;
              do {
                if ((int)uVar9 < (int)uVar4) {
                  uVar6 = FUN_02b7cd10(puVar18 + (long)(int)uVar9 + -1);
                  uVar5 = uVar9 | uVar6 >> 0x1f;
                }
                else {
                  uVar5 = uVar9;
                }
                iVar7 = FUN_02b7cd10(local_6c,puVar18 + (int)(uVar5 - 1));
                uVar6 = (uint)uVar16;
                if (-1 < iVar7) break;
                uVar9 = uVar5 * 2;
                uVar16 = (ulong)uVar5;
                puVar18[(int)(uVar6 - 1)] = puVar18[(int)(uVar5 - 1)];
                uVar6 = uVar5;
              } while ((int)uVar9 <= (int)uVar4);
            }
            uVar19 = (ulong)((int)uVar19 - 1);
            puVar18[(int)(uVar6 - 1)] = uVar3;
            bVar1 = 1 < (long)uVar20;
            uVar20 = uVar20 - 1;
          } while (bVar1);
          uVar20 = uVar17 - 1;
          uVar3 = puVar18[uVar20 & 0xffffffff];
          puVar18[uVar20 & 0xffffffff] = *puVar18;
          while (local_6c[0] = uVar3, 2 < (int)uVar4) {
            uVar4 = (uint)uVar20;
            uVar19 = uVar20 & 0xffffffff;
            uVar9 = 2;
            uVar6 = 1;
            do {
              if ((int)uVar9 < (int)uVar4) {
                uVar5 = FUN_02b7cd10(puVar18 + (long)(int)uVar9 + -1);
                uVar5 = uVar9 | uVar5 >> 0x1f;
              }
              else {
                uVar5 = uVar9;
              }
              iVar7 = uVar5 - 1;
              iVar8 = FUN_02b7cd10(local_6c,puVar18 + iVar7);
              if (-1 < iVar8) {
                iVar7 = uVar6 - 1;
                break;
              }
              uVar9 = uVar5 * 2;
              puVar18[(int)(uVar6 - 1)] = puVar18[iVar7];
              uVar6 = uVar5;
            } while ((int)uVar9 < (int)uVar17);
            uVar20 = uVar20 - 1;
            puVar18[iVar7] = uVar3;
            uVar3 = puVar18[uVar20 & 0xffffffff];
            puVar18[uVar20 & 0xffffffff] = *puVar18;
            uVar17 = uVar19;
          }
          *puVar18 = uVar3;
          plVar14 = (long *)PTR_DAT_04bb2698;
        }
      }
    }
  }
  lVar2 = param_1 + 0x1c3f0;
  uVar4 = FUN_00da1ae4(lVar2);
  if (0 < (int)uVar4) {
    lVar15 = *plVar14;
    uVar17 = (ulong)uVar4;
    if (lVar15 == 0) {
      pvVar13 = malloc(uVar17 << 1);
joined_r0x02dcba90:
      if (pvVar13 != (void *)0x0) {
        *(uint *)(param_1 + 0x1c498) = uVar4;
        *(void **)(param_1 + 0x1c4a0) = pvVar13;
      }
    }
    else {
      lVar11 = nn::os::GetTlsValue(*(undefined4 *)(DAT_05ae7790 + 0x68));
      plVar12 = (long *)(lVar15 + 8);
      if (lVar11 != 0) {
        plVar12 = (long *)(lVar11 + 0xa8);
      }
      plVar12 = (long *)*plVar12;
      if (plVar12 != (long *)0x0) {
        pvVar13 = (void *)(**(code **)(*plVar12 + 0x30))(plVar12,uVar17 << 1,8);
        goto joined_r0x02dcba90;
      }
    }
    uVar3 = FUN_00edf160(lVar2,1);
    **(undefined2 **)(param_1 + 0x1c4a0) = uVar3;
    if (uVar4 != 1) {
      uVar9 = 1;
      do {
        uVar5 = FUN_00da1ae4(lVar2);
        uVar6 = uVar9 + 1;
        if (uVar9 < uVar5) {
          uVar3 = FUN_00edf160(lVar2,uVar6);
        }
        else {
          uVar3 = 0xffff;
        }
        if (*(uint *)(param_1 + 0x1c498) <= uVar9) {
          uVar9 = 0;
        }
        *(undefined2 *)(*(long *)(param_1 + 0x1c4a0) + (ulong)uVar9 * 2) = uVar3;
        uVar9 = uVar6;
      } while (uVar4 != uVar6);
      if (1 < (int)uVar4) {
        if (uVar4 - 1 < *(uint *)(param_1 + 0x1c498)) {
          puVar18 = *(undefined2 **)(param_1 + 0x1c4a0);
          uVar19 = (ulong)(uVar4 >> 1);
          uVar20 = uVar19;
          do {
            uVar9 = (int)uVar19 * 2;
            uVar3 = puVar18[uVar20 - 1 & 0xffffffff];
            if ((int)uVar4 < (int)uVar9) {
              uVar6 = (uint)uVar20;
            }
            else {
              uVar16 = uVar20 & 0xffffffff;
              local_68[0] = uVar3;
              do {
                if ((int)uVar9 < (int)uVar4) {
                  uVar6 = FUN_02b71b80(puVar18 + (long)(int)uVar9 + -1);
                  uVar5 = uVar9 | uVar6 >> 0x1f;
                }
                else {
                  uVar5 = uVar9;
                }
                iVar7 = FUN_02b71b80(local_68,puVar18 + (int)(uVar5 - 1));
                uVar6 = (uint)uVar16;
                if (-1 < iVar7) break;
                uVar9 = uVar5 * 2;
                uVar16 = (ulong)uVar5;
                puVar18[(int)(uVar6 - 1)] = puVar18[(int)(uVar5 - 1)];
                uVar6 = uVar5;
              } while ((int)uVar9 <= (int)uVar4);
            }
            uVar19 = (ulong)((int)uVar19 - 1);
            puVar18[(int)(uVar6 - 1)] = uVar3;
            bVar1 = 1 < (long)uVar20;
            uVar20 = uVar20 - 1;
          } while (bVar1);
          uVar20 = uVar17 - 1;
          uVar3 = puVar18[uVar20 & 0xffffffff];
          puVar18[uVar20 & 0xffffffff] = *puVar18;
          while (local_68[0] = uVar3, 2 < (int)uVar4) {
            uVar4 = (uint)uVar20;
            uVar19 = uVar20 & 0xffffffff;
            uVar9 = 2;
            uVar6 = 1;
            do {
              if ((int)uVar9 < (int)uVar4) {
                uVar5 = FUN_02b71b80(puVar18 + (long)(int)uVar9 + -1);
                uVar5 = uVar9 | uVar5 >> 0x1f;
              }
              else {
                uVar5 = uVar9;
              }
              iVar7 = uVar5 - 1;
              iVar8 = FUN_02b71b80(local_68,puVar18 + iVar7);
              if (-1 < iVar8) {
                iVar7 = uVar6 - 1;
                break;
              }
              uVar9 = uVar5 * 2;
              puVar18[(int)(uVar6 - 1)] = puVar18[iVar7];
              uVar6 = uVar5;
            } while ((int)uVar9 < (int)uVar17);
            uVar20 = uVar20 - 1;
            puVar18[iVar7] = uVar3;
            uVar3 = puVar18[uVar20 & 0xffffffff];
            puVar18[uVar20 & 0xffffffff] = *puVar18;
            uVar17 = uVar19;
          }
          *puVar18 = uVar3;
          plVar14 = (long *)PTR_DAT_04bb2698;
        }
      }
    }
  }
  *(undefined1 *)(param_1 + 0x1c4c0) = 0;
  lVar2 = param_1 + 0x1c438;
  iVar7 = FUN_00da1ae4(lVar2);
  if (0 < iVar7) {
    FUN_00edf160(lVar2,1);
    uVar17 = FUN_02b8dae0();
    bVar1 = (uVar17 & 1) == 0;
    if (!bVar1) {
      uVar3 = FUN_00edf160(lVar2,1);
      *(undefined1 *)(param_1 + 0x1c4c0) = 1;
      *(undefined2 *)(param_1 + 0x1c4b8) = uVar3;
    }
    uVar17 = (ulong)bVar1;
    iVar7 = FUN_00da1ae4(lVar2);
    if (1 < iVar7) {
      iVar7 = 2;
      do {
        uVar4 = FUN_00da1ae4(lVar2);
        if (iVar7 - 1U < uVar4) {
          FUN_00edf160(lVar2,iVar7);
          uVar20 = FUN_02b8dae0();
          if ((uVar20 & 1) != 0) goto LAB_02dcbb8c;
LAB_02dcbb34:
          uVar17 = (ulong)((int)uVar17 + 1);
        }
        else {
          uVar20 = FUN_02b8dae0(0xffff);
          if ((uVar20 & 1) == 0) goto LAB_02dcbb34;
LAB_02dcbb8c:
          uVar4 = FUN_00da1ae4(lVar2);
          if (iVar7 - 1U < uVar4) {
            uVar3 = FUN_00edf160(lVar2,iVar7);
          }
          else {
            uVar3 = 0xffff;
          }
          *(undefined2 *)(param_1 + 0x1c4b8) = uVar3;
          *(undefined1 *)(param_1 + 0x1c4c0) = 1;
        }
        iVar8 = FUN_00da1ae4(lVar2);
        bVar1 = iVar7 < iVar8;
        iVar7 = iVar7 + 1;
      } while (bVar1);
    }
    if (0 < (int)uVar17) {
      lVar15 = *plVar14;
      if (lVar15 == 0) {
        pvVar13 = malloc(uVar17 << 1);
      }
      else {
        lVar11 = nn::os::GetTlsValue(*(undefined4 *)(DAT_05ae7790 + 0x68));
        plVar14 = (long *)(lVar15 + 8);
        if (lVar11 != 0) {
          plVar14 = (long *)(lVar11 + 0xa8);
        }
        plVar14 = (long *)*plVar14;
        if (plVar14 == (long *)0x0) goto LAB_02dcbcdc;
        pvVar13 = (void *)(**(code **)(*plVar14 + 0x30))(plVar14,uVar17 << 1,8);
      }
      if (pvVar13 != (void *)0x0) {
        *(int *)(param_1 + 0x1c4a8) = (int)uVar17;
        *(void **)(param_1 + 0x1c4b0) = pvVar13;
      }
    }
  }
LAB_02dcbcdc:
  iVar7 = FUN_00da1ae4(lVar2);
  if (0 < iVar7) {
    FUN_00edf160(lVar2,1);
    uVar17 = FUN_02b8dae0();
    bVar1 = (uVar17 & 1) == 0;
    if (bVar1) {
      uVar3 = FUN_00edf160(lVar2,1);
      **(undefined2 **)(param_1 + 0x1c4b0) = uVar3;
    }
    uVar4 = (uint)bVar1;
    iVar7 = FUN_00da1ae4(lVar2);
    if (1 < iVar7) {
      iVar7 = 2;
      do {
        uVar9 = FUN_00da1ae4(lVar2);
        if (iVar7 - 1U < uVar9) {
          FUN_00edf160(lVar2,iVar7);
          uVar17 = FUN_02b8dae0();
        }
        else {
          uVar17 = FUN_02b8dae0(0xffff);
        }
        if ((uVar17 & 1) == 0) {
          uVar9 = FUN_00da1ae4(lVar2);
          if (iVar7 - 1U < uVar9) {
            uVar3 = FUN_00edf160(lVar2,iVar7);
          }
          else {
            uVar3 = 0xffff;
          }
          uVar9 = uVar4;
          if (*(uint *)(param_1 + 0x1c4a8) <= uVar4) {
            uVar9 = 0;
          }
          uVar4 = uVar4 + 1;
          *(undefined2 *)(*(long *)(param_1 + 0x1c4b0) + (long)(int)uVar9 * 2) = uVar3;
        }
        iVar8 = FUN_00da1ae4(lVar2);
        bVar1 = iVar7 < iVar8;
        iVar7 = iVar7 + 1;
      } while (bVar1);
      if ((1 < (int)uVar4) && (uVar4 - 1 < *(uint *)(param_1 + 0x1c4a8))) {
        puVar18 = *(undefined2 **)(param_1 + 0x1c4b0);
        uVar20 = (ulong)(uVar4 >> 1);
        uVar17 = uVar20;
        do {
          uVar9 = (int)uVar20 * 2;
          uVar3 = puVar18[uVar17 - 1 & 0xffffffff];
          if ((int)uVar4 < (int)uVar9) {
            uVar6 = (uint)uVar17;
          }
          else {
            uVar19 = uVar17 & 0xffffffff;
            local_64[0] = uVar3;
            do {
              if ((int)uVar9 < (int)uVar4) {
                uVar6 = FUN_02b70ac0(puVar18 + (long)(int)uVar9 + -1);
                uVar5 = uVar9 | uVar6 >> 0x1f;
              }
              else {
                uVar5 = uVar9;
              }
              iVar7 = FUN_02b70ac0(local_64,puVar18 + (int)(uVar5 - 1));
              uVar6 = (uint)uVar19;
              if (-1 < iVar7) break;
              uVar9 = uVar5 * 2;
              uVar19 = (ulong)uVar5;
              puVar18[(int)(uVar6 - 1)] = puVar18[(int)(uVar5 - 1)];
              uVar6 = uVar5;
            } while ((int)uVar9 <= (int)uVar4);
          }
          uVar20 = (ulong)((int)uVar20 - 1);
          puVar18[(int)(uVar6 - 1)] = uVar3;
          bVar1 = 1 < (long)uVar17;
          uVar17 = uVar17 - 1;
        } while (bVar1);
        uVar9 = uVar4 - 1;
        uVar3 = puVar18[uVar9];
        puVar18[uVar9] = *puVar18;
        while (2 < (int)uVar4) {
          uVar6 = 2;
          uVar5 = 1;
          local_64[0] = uVar3;
          do {
            if ((int)uVar6 < (int)uVar9) {
              uVar10 = FUN_02b70ac0(puVar18 + (long)(int)uVar6 + -1);
              uVar10 = uVar6 | uVar10 >> 0x1f;
            }
            else {
              uVar10 = uVar6;
            }
            iVar7 = uVar10 - 1;
            iVar8 = FUN_02b70ac0(local_64,puVar18 + iVar7);
            if (-1 < iVar8) {
              iVar7 = uVar5 - 1;
              break;
            }
            uVar6 = uVar10 * 2;
            puVar18[(int)(uVar5 - 1)] = puVar18[iVar7];
            uVar5 = uVar10;
          } while ((int)uVar6 < (int)uVar4);
          uVar6 = uVar9 - 1;
          puVar18[iVar7] = uVar3;
          uVar3 = puVar18[uVar6];
          puVar18[uVar6] = *puVar18;
          uVar4 = uVar9;
          uVar9 = uVar6;
        }
        *puVar18 = uVar3;
      }
    }
  }
  return;
}

