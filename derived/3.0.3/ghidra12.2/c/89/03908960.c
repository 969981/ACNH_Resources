
void FUN_03908960(long param_1,long param_2,long param_3,uint param_4,long *param_5)

{
  bool bVar1;
  undefined *puVar2;
  size_t __size;
  undefined *puVar3;
  uint *puVar4;
  uint uVar5;
  byte bVar6;
  char cVar7;
  long lVar8;
  long *plVar9;
  ulong *puVar10;
  undefined8 uVar11;
  long lVar12;
  void *pvVar13;
  int *piVar14;
  long lVar15;
  uint uVar16;
  int *piVar17;
  ulong uVar18;
  uint uVar19;
  long *plVar20;
  long lVar21;
  uint uVar22;
  int iVar23;
  int iVar24;
  long lVar25;
  int iVar26;
  ulong uVar27;
  long *plVar28;
  long lVar29;
  ulong uVar30;
  uint uVar31;
  ulong *puVar32;
  int iVar33;
  byte local_880 [1024];
  undefined *local_480;
  int *local_478;
  
  plVar28 = (long *)(param_1 + 0x20);
  *plVar28 = param_2;
  *(ushort *)(param_1 + 0x46) = *(ushort *)(param_1 + 0x46) & 0xfffe | (ushort)(param_4 >> 2) & 1;
  if (param_2 != 0) {
    FUN_038f4da0(plVar28,1);
    lVar25 = *(long *)(param_1 + 0x20) + (ulong)*(uint *)(*(long *)(param_1 + 0x20) + 0x14);
    uVar31 = *(uint *)(lVar25 + (ulong)*(uint *)(lVar25 + 0x150) + 0x154);
    if (0 < (int)uVar31) {
      uVar30 = (ulong)uVar31 * 0x150 | 8;
      lVar25 = *(long *)PTR_DAT_04bb2698;
      if (lVar25 == 0) {
        puVar10 = malloc(uVar30);
        puVar3 = PTR_DAT_04bd11b0;
      }
      else {
        plVar9 = param_5;
        if (param_5 == (long *)0x0) {
          lVar8 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
          plVar9 = (long *)(lVar25 + 8);
          if (lVar8 != 0) {
            plVar9 = (long *)(lVar8 + 0xa8);
          }
          plVar9 = (long *)*plVar9;
          if (plVar9 == (long *)0x0) goto LAB_03908ae8;
        }
        puVar10 = (ulong *)(**(code **)(*plVar9 + 0x30))(plVar9,uVar30,8);
        puVar3 = PTR_DAT_04bd11b0;
      }
      PTR_DAT_04bd11b0 = puVar3;
      if (puVar10 != (ulong *)0x0) {
        puVar32 = puVar10 + 1;
        *puVar10 = (ulong)uVar31;
        puVar10 = puVar32;
        do {
          *puVar10 = (ulong)(puVar3 + 0x10);
          puVar10[1] = 0;
          *(undefined4 *)(puVar10 + 2) = 0;
          *(undefined4 *)((long)puVar10 + 0x14) = 0;
          *(undefined4 *)(puVar10 + 3) = 0;
          *(undefined1 *)((long)puVar10 + 0x1c) = 2;
          *(undefined2 *)((long)puVar10 + 0x1e) = 0;
          *(undefined4 *)(puVar10 + 4) = 0;
          puVar10[5] = 0;
          *(undefined4 *)(puVar10 + 6) = 0;
          puVar10[7] = 0;
          *(undefined4 *)(puVar10 + 8) = 0;
          puVar10[9] = 0;
          *(undefined4 *)(puVar10 + 10) = 0;
          puVar10[0xb] = 0;
          *(undefined4 *)(puVar10 + 0xc) = 0;
          puVar10[0xd] = 0;
          *(undefined4 *)(puVar10 + 0xe) = 0;
          puVar10[0x28] = 0;
          *(undefined2 *)(puVar10 + 0x29) = 0;
          puVar10[0xf] = 0;
          puVar10[0x16] = 0;
          puVar10[0x17] = 0;
          puVar10[0x14] = 0;
          puVar10[0x15] = 0;
          puVar10[0x12] = 0;
          puVar10[0x13] = 0;
          puVar10[0x10] = 0;
          puVar10[0x11] = 0;
          puVar10 = puVar10 + 0x2a;
        } while (puVar10 != puVar32 + (ulong)uVar31 * 0x2a);
        *(uint *)(param_1 + 0x30) = uVar31;
        *(ulong **)(param_1 + 0x38) = puVar32;
      }
    }
LAB_03908ae8:
    puVar3 = PTR_DAT_04bbd560;
    lVar25 = *plVar28 + (ulong)*(uint *)(*plVar28 + 0x14);
    lVar25 = lVar25 + 0x150 + (ulong)*(uint *)(lVar25 + 0x150);
    uVar31 = *(uint *)(lVar25 + 4);
    if (uVar31 != 0) {
      piVar14 = (int *)(lVar25 + 8);
      uVar19 = 0;
      puVar2 = PTR_DAT_04bb2020 + 0x10;
      do {
        uVar16 = uVar19;
        if (*(uint *)(param_1 + 0x30) <= uVar19) {
          uVar16 = 0;
        }
        lVar25 = *(long *)(param_1 + 0x38) + (ulong)uVar16 * 0x150;
        local_478 = piVar14 + 4;
        local_480 = puVar2;
        FUN_039057b0(lVar25,&local_480,(long)local_478 + (ulong)(uint)piVar14[1],param_5);
        plVar9 = (long *)(lVar25 + 8);
        lVar25 = *plVar9;
        uVar16 = *(uint *)(lVar25 + 0x20);
        if (-1 < (int)uVar16) {
          iVar24 = 2;
          iVar26 = 0;
          do {
            uVar22 = iVar26 - 1;
            if (iVar26 == 0) {
              lVar25 = *(long *)(lVar25 + 0x18);
            }
            else {
              uVar5 = uVar22;
              if (uVar16 <= uVar22) {
                uVar5 = 0;
              }
              lVar25 = *(long *)(lVar25 + 0x28) + (ulong)uVar5 * 0x150;
            }
            uVar11 = (**(code **)puVar3)(*plVar28 + 0x120);
            *(undefined8 *)(lVar25 + 0x140) = uVar11;
            uVar16 = piVar14[2];
            if ((uVar16 & 1) != 0) {
              iVar23 = piVar14[3];
              iVar33 = 2;
              if ((uVar16 & 4) != 0) {
                iVar33 = 3;
              }
              uVar5 = iVar23 + iVar33 * iVar26;
              if (uVar5 != 0xffffffff) {
                piVar17 = (int *)(*plVar28 + (ulong)*(uint *)(*plVar28 + 0x14) + 0x158);
                if (uVar5 != 0) {
                  if (6 < uVar5 - 1) {
                    uVar16 = iVar23 + iVar33 * iVar26 & 0xfffffff8;
                    do {
                      uVar16 = uVar16 - 8;
                      piVar17 = (int *)((long)piVar17 + (long)*piVar17 +
                                       (long)*(int *)((long)piVar17 + (long)*piVar17));
                      piVar17 = (int *)((long)piVar17 + (long)*piVar17);
                      piVar17 = (int *)((long)piVar17 + (long)*piVar17);
                      piVar17 = (int *)((long)piVar17 + (long)*piVar17);
                      piVar17 = (int *)((long)piVar17 + (long)*piVar17);
                      piVar17 = (int *)((long)piVar17 + (long)*piVar17);
                      piVar17 = (int *)((long)piVar17 + (long)*piVar17);
                    } while (uVar16 != 0);
                  }
                  if ((uVar5 & 7) != 0) {
                    uVar16 = iVar23 + iVar26 * iVar33 & 7;
                    do {
                      uVar16 = uVar16 - 1;
                      piVar17 = (int *)((long)piVar17 + (long)*piVar17);
                    } while (uVar16 != 0);
                  }
                }
                *(int **)(lVar25 + 0x80) = piVar17 + 4;
                uVar16 = piVar14[2];
              }
            }
            if ((uVar16 >> 1 & 1) != 0) {
              iVar23 = piVar14[3];
              iVar33 = 2;
              if ((uVar16 & 4) != 0) {
                iVar33 = 3;
              }
              uVar5 = iVar33 * iVar26 + iVar23 + 1;
              if (uVar5 != 0xffffffff) {
                piVar17 = (int *)(*plVar28 + (ulong)*(uint *)(*plVar28 + 0x14) + 0x158);
                if (uVar5 != 0) {
                  if (6 < (uint)(iVar23 + iVar33 * iVar26)) {
                    uVar16 = iVar23 + iVar33 * iVar26 + 1U & 0xfffffff8;
                    do {
                      uVar16 = uVar16 - 8;
                      piVar17 = (int *)((long)piVar17 + (long)*piVar17 +
                                       (long)*(int *)((long)piVar17 + (long)*piVar17));
                      piVar17 = (int *)((long)piVar17 + (long)*piVar17);
                      piVar17 = (int *)((long)piVar17 + (long)*piVar17);
                      piVar17 = (int *)((long)piVar17 + (long)*piVar17);
                      piVar17 = (int *)((long)piVar17 + (long)*piVar17);
                      piVar17 = (int *)((long)piVar17 + (long)*piVar17);
                      piVar17 = (int *)((long)piVar17 + (long)*piVar17);
                    } while (uVar16 != 0);
                  }
                  if ((uVar5 & 7) != 0) {
                    uVar16 = iVar23 + iVar26 * iVar33 + 1U & 7;
                    do {
                      uVar16 = uVar16 - 1;
                      piVar17 = (int *)((long)piVar17 + (long)*piVar17);
                    } while (uVar16 != 0);
                  }
                }
                *(int **)(lVar25 + 0x90) = piVar17 + 4;
                uVar16 = piVar14[2];
              }
            }
            if ((uVar16 >> 2 & 1) != 0) {
              iVar33 = piVar14[3];
              uVar5 = iVar26 * 3 + iVar33 + 2;
              if (uVar5 != 0xffffffff) {
                piVar17 = (int *)(*plVar28 + (ulong)*(uint *)(*plVar28 + 0x14) + 0x158);
                if (uVar5 != 0) {
                  if (6 < (uint)(iVar33 + iVar26 * 3 + 1)) {
                    uVar16 = iVar33 + iVar24 & 0xfffffff8;
                    do {
                      uVar16 = uVar16 - 8;
                      piVar17 = (int *)((long)piVar17 + (long)*piVar17 +
                                       (long)*(int *)((long)piVar17 + (long)*piVar17));
                      piVar17 = (int *)((long)piVar17 + (long)*piVar17);
                      piVar17 = (int *)((long)piVar17 + (long)*piVar17);
                      piVar17 = (int *)((long)piVar17 + (long)*piVar17);
                      piVar17 = (int *)((long)piVar17 + (long)*piVar17);
                      piVar17 = (int *)((long)piVar17 + (long)*piVar17);
                      piVar17 = (int *)((long)piVar17 + (long)*piVar17);
                    } while (uVar16 != 0);
                  }
                  if ((uVar5 & 7) != 0) {
                    uVar16 = iVar24 + iVar33 & 7;
                    do {
                      uVar16 = uVar16 - 1;
                      piVar17 = (int *)((long)piVar17 + (long)*piVar17);
                    } while (uVar16 != 0);
                  }
                }
                *(int **)(lVar25 + 0xa0) = piVar17 + 4;
                uVar16 = piVar14[2];
              }
            }
            if ((uVar16 >> 3 & 1) != 0) {
              iVar33 = piVar14[3];
              uVar16 = iVar33 + iVar26;
              if (uVar16 != 0xffffffff) {
                piVar17 = (int *)(*plVar28 + (ulong)*(uint *)(*plVar28 + 0x14) + 0x158);
                if (uVar16 != 0) {
                  if (6 < iVar33 + uVar22) {
                    uVar22 = uVar16 & 0xfffffff8;
                    do {
                      uVar22 = uVar22 - 8;
                      piVar17 = (int *)((long)piVar17 + (long)*piVar17 +
                                       (long)*(int *)((long)piVar17 + (long)*piVar17));
                      piVar17 = (int *)((long)piVar17 + (long)*piVar17);
                      piVar17 = (int *)((long)piVar17 + (long)*piVar17);
                      piVar17 = (int *)((long)piVar17 + (long)*piVar17);
                      piVar17 = (int *)((long)piVar17 + (long)*piVar17);
                      piVar17 = (int *)((long)piVar17 + (long)*piVar17);
                      piVar17 = (int *)((long)piVar17 + (long)*piVar17);
                    } while (uVar22 != 0);
                  }
                  if ((uVar16 & 7) != 0) {
                    uVar16 = iVar26 + iVar33 & 7;
                    do {
                      uVar16 = uVar16 - 1;
                      piVar17 = (int *)((long)piVar17 + (long)*piVar17);
                    } while (uVar16 != 0);
                  }
                }
                *(int **)(lVar25 + 0xb0) = piVar17 + 4;
              }
            }
            lVar25 = *plVar9;
            iVar24 = iVar24 + 3;
            uVar16 = *(uint *)(lVar25 + 0x20);
            bVar1 = iVar26 < (int)uVar16;
            iVar26 = iVar26 + 1;
          } while (bVar1);
        }
        piVar14 = (int *)((long)piVar14 + (long)*piVar14);
        uVar19 = uVar19 + 1;
      } while (uVar31 != uVar19);
    }
  }
  if ((*(long *)(*(long *)PTR_DAT_04bb4e50 + 0x10) == 0) || (FUN_03909bd0(param_1), param_3 == 0))
  goto LAB_03909848;
  plVar28 = (long *)(param_1 + 0x28);
  *plVar28 = param_3;
  FUN_03902d20(plVar28);
  if (*(long *)(param_1 + 0x20) == 0) {
    uVar31 = *(uint *)(*(long *)(param_1 + 0x28) +
                       (ulong)*(uint *)(*(long *)(param_1 + 0x28) + 0x10) + 0x18);
    if (0 < (int)uVar31) {
      uVar30 = (ulong)uVar31 * 0x150 | 8;
      lVar25 = *(long *)PTR_DAT_04bb2698;
      if (lVar25 == 0) {
        puVar10 = malloc(uVar30);
        puVar3 = PTR_DAT_04bd11b0;
      }
      else {
        plVar9 = param_5;
        if (param_5 == (long *)0x0) {
          lVar8 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
          plVar9 = (long *)(lVar25 + 8);
          if (lVar8 != 0) {
            plVar9 = (long *)(lVar8 + 0xa8);
          }
          plVar9 = (long *)*plVar9;
          if (plVar9 == (long *)0x0) goto LAB_03908f40;
        }
        puVar10 = (ulong *)(**(code **)(*plVar9 + 0x30))(plVar9,uVar30,8);
        puVar3 = PTR_DAT_04bd11b0;
      }
      PTR_DAT_04bd11b0 = puVar3;
      if (puVar10 != (ulong *)0x0) {
        puVar32 = puVar10 + 1;
        *puVar10 = (ulong)uVar31;
        puVar10 = puVar32;
        do {
          *puVar10 = (ulong)(puVar3 + 0x10);
          puVar10[1] = 0;
          *(undefined4 *)(puVar10 + 2) = 0;
          *(undefined4 *)((long)puVar10 + 0x14) = 0;
          *(undefined4 *)(puVar10 + 3) = 0;
          *(undefined1 *)((long)puVar10 + 0x1c) = 2;
          *(undefined2 *)((long)puVar10 + 0x1e) = 0;
          *(undefined4 *)(puVar10 + 4) = 0;
          puVar10[5] = 0;
          *(undefined4 *)(puVar10 + 6) = 0;
          puVar10[7] = 0;
          *(undefined4 *)(puVar10 + 8) = 0;
          puVar10[9] = 0;
          *(undefined4 *)(puVar10 + 10) = 0;
          puVar10[0xb] = 0;
          *(undefined4 *)(puVar10 + 0xc) = 0;
          puVar10[0xd] = 0;
          *(undefined4 *)(puVar10 + 0xe) = 0;
          puVar10[0x28] = 0;
          *(undefined2 *)(puVar10 + 0x29) = 0;
          puVar10[0xf] = 0;
          puVar10[0x16] = 0;
          puVar10[0x17] = 0;
          puVar10[0x14] = 0;
          puVar10[0x15] = 0;
          puVar10[0x12] = 0;
          puVar10[0x13] = 0;
          puVar10[0x10] = 0;
          puVar10[0x11] = 0;
          puVar10 = puVar10 + 0x2a;
        } while (puVar10 != puVar32 + (ulong)uVar31 * 0x2a);
        *(uint *)(param_1 + 0x30) = uVar31;
        *(ulong **)(param_1 + 0x38) = puVar32;
      }
    }
  }
LAB_03908f40:
  puVar3 = PTR_DAT_04bb2698;
  piVar14 = (int *)(*(long *)(param_1 + 0x28) + (ulong)*(uint *)(*(long *)(param_1 + 0x28) + 0x10) +
                   0x14);
  uVar31 = *(uint *)((long)piVar14 + (long)*piVar14 + 4);
  uVar30 = (ulong)uVar31;
  if ((int)uVar31 < 1) {
LAB_03909178:
    uVar31 = *(uint *)(param_1 + 0x58);
    uVar30 = (ulong)uVar31;
  }
  else {
    __size = uVar30 * 0x58 + 8;
    lVar25 = *(long *)PTR_DAT_04bb2698;
    if (lVar25 == 0) {
      puVar10 = malloc(__size);
    }
    else {
      plVar9 = param_5;
      if (param_5 == (long *)0x0) {
        lVar8 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
        plVar9 = (long *)(lVar25 + 8);
        if (lVar8 != 0) {
          plVar9 = (long *)(lVar8 + 0xa8);
        }
        plVar9 = (long *)*plVar9;
        if (plVar9 == (long *)0x0) goto LAB_03909178;
      }
      puVar10 = (ulong *)(**(code **)(*plVar9 + 0x30))(plVar9,__size,8);
    }
    if (puVar10 == (ulong *)0x0) goto LAB_03909178;
    lVar25 = (long)puVar10 + 0x2c;
    *puVar10 = uVar30;
    lVar8 = (ulong)uVar31 * 0x58;
    puVar2 = PTR_DAT_04bd0d40 + 0x10;
    puVar32 = puVar10 + 1;
    do {
      *(undefined **)(lVar25 + -0x24) = puVar2;
      *(undefined8 *)(lVar25 + -0x14) = 0;
      *(undefined8 *)(lVar25 + -0xc) = 0;
      *(long *)(lVar25 + -0x1c) = 0;
      if (*(long *)puVar3 != 0) {
        lVar12 = FUN_038cb610();
        *(long *)(lVar25 + -0x1c) = lVar12;
        if (lVar12 != 0) {
          if ((*(uint *)(lVar12 + 0xd0) & 1) == 0) {
            lVar29 = 0;
          }
          else {
            lVar29 = lVar12 + 0x90;
            nn::os::LockMutex((MutexType *)(lVar12 + 0xb0));
          }
          plVar20 = (long *)(lVar12 + 0x70);
          lVar15 = *plVar20;
          plVar9 = (long *)((long)puVar32 + (long)*(int *)(lVar12 + 0x84));
          *plVar20 = (long)plVar9;
          *plVar9 = lVar15;
          plVar9[1] = (long)plVar20;
          if (lVar15 != 0) {
            *(long **)(lVar15 + 8) = plVar9;
          }
          *(int *)(lVar12 + 0x80) = *(int *)(lVar12 + 0x80) + 1;
          if (lVar29 != 0) {
            nn::os::UnlockMutex((MutexType *)(lVar29 + 0x20));
          }
        }
      }
      *(undefined ***)(lVar25 + -0x24) = &PTR_FUN_04b65ec0;
      lVar8 = lVar8 + -0x58;
      puVar32 = puVar32 + 0xb;
      *(undefined8 *)(lVar25 + -4) = 0x100000000;
      *(undefined8 *)(lVar25 + 0x2c) = 0;
      *(undefined8 *)(lVar25 + 4) = 0;
      *(undefined8 *)(lVar25 + 0xc) = 0;
      *(undefined8 *)(lVar25 + 0x14) = 0;
      *(undefined8 *)(lVar25 + 0x1c) = 0;
      *(undefined4 *)(lVar25 + 0x24) = 0;
      lVar25 = lVar25 + 0x58;
    } while (lVar8 != 0);
    *(uint *)(param_1 + 0x58) = uVar31;
    *(ulong **)(param_1 + 0x60) = puVar10 + 1;
  }
  if (0 < (int)uVar31) {
    lVar25 = *(long *)PTR_DAT_04bb2698;
    if (lVar25 == 0) {
      pvVar13 = malloc(uVar30 << 3);
    }
    else {
      plVar9 = param_5;
      if (param_5 == (long *)0x0) {
        lVar8 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
        plVar9 = (long *)(lVar25 + 8);
        if (lVar8 != 0) {
          plVar9 = (long *)(lVar8 + 0xa8);
        }
        plVar9 = (long *)*plVar9;
        if (plVar9 == (long *)0x0) goto LAB_039091f4;
      }
      pvVar13 = (void *)(**(code **)(*plVar9 + 0x30))(plVar9,uVar30 << 3,8);
    }
    if (pvVar13 != (void *)0x0) {
      *(int *)(param_1 + 0x68) = (int)uVar30;
      *(void **)(param_1 + 0x70) = pvVar13;
    }
  }
LAB_039091f4:
  uVar31 = *(uint *)(param_1 + 0x58);
  if (0 < (int)uVar31) {
    lVar25 = *(long *)PTR_DAT_04bb2698;
    if (lVar25 == 0) {
      pvVar13 = malloc((ulong)uVar31 << 3);
    }
    else {
      plVar9 = param_5;
      if (param_5 == (long *)0x0) {
        lVar8 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
        plVar9 = (long *)(lVar25 + 8);
        if (lVar8 != 0) {
          plVar9 = (long *)(lVar8 + 0xa8);
        }
        plVar9 = (long *)*plVar9;
        if (plVar9 == (long *)0x0) goto LAB_0390926c;
      }
      pvVar13 = (void *)(**(code **)(*plVar9 + 0x30))(plVar9,(ulong)uVar31 << 3,8);
    }
    if (pvVar13 != (void *)0x0) {
      *(uint *)(param_1 + 0x78) = uVar31;
      *(void **)(param_1 + 0x80) = pvVar13;
    }
  }
LAB_0390926c:
  uVar31 = *(uint *)(param_1 + 0x30);
  uVar30 = (ulong)uVar31;
  if (0 < (int)uVar31) {
    uVar27 = uVar30 * 0x1f0 | 8;
    lVar25 = *(long *)PTR_DAT_04bb2698;
    if (lVar25 == 0) {
      puVar10 = malloc(uVar27);
    }
    else {
      plVar9 = param_5;
      if (param_5 == (long *)0x0) {
        lVar8 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
        plVar9 = (long *)(lVar25 + 8);
        if (lVar8 != 0) {
          plVar9 = (long *)(lVar8 + 0xa8);
        }
        plVar9 = (long *)*plVar9;
        if (plVar9 == (long *)0x0) goto LAB_039093e8;
      }
      puVar10 = (ulong *)(**(code **)(*plVar9 + 0x30))(plVar9,uVar27,8);
    }
    if (puVar10 != (ulong *)0x0) {
      puVar32 = puVar10 + 1;
      *puVar10 = uVar30;
      puVar3 = PTR_DAT_04bd11a8 + 0x10;
      puVar2 = PTR_DAT_04bb2020 + 0x10;
      puVar10 = puVar32;
      do {
        *puVar10 = (ulong)&PTR_FUN_04b65ea0;
        *(undefined4 *)(puVar10 + 1) = 0;
        puVar10[0x13] = (ulong)"unititled";
        puVar10[0x2b] = 0;
        puVar10[0x39] = 0;
        *(undefined4 *)(puVar10 + 0x3b) = 0;
        puVar10[0x3c] = 0;
        *(undefined1 *)(puVar10 + 0x3d) = 0;
        puVar10[2] = 0;
        puVar10[3] = (ulong)puVar3;
        puVar10[4] = (ulong)puVar2;
        puVar10[5] = (ulong)"unititled";
        puVar10[6] = 0;
        puVar10[7] = 0;
        puVar10[8] = 0;
        puVar10[9] = 0;
        puVar10[10] = 0;
        puVar10[0xb] = 0;
        puVar10[0xc] = 0;
        puVar10[0xd] = 0;
        puVar10[0xe] = 0;
        puVar10[0xf] = 0;
        puVar10[0x11] = (ulong)puVar3;
        puVar10[0x12] = (ulong)puVar2;
        puVar10[0x1c] = 0;
        puVar10[0x1d] = 0;
        puVar10[0x1a] = 0;
        puVar10[0x1b] = 0;
        puVar10[0x18] = 0;
        puVar10[0x19] = 0;
        puVar10[0x16] = 0;
        puVar10[0x17] = 0;
        puVar10[0x14] = 0;
        puVar10[0x15] = 0;
        puVar10[0x1f] = (ulong)puVar3;
        puVar10[0x20] = (ulong)puVar2;
        puVar10[0x21] = (ulong)"unititled";
        puVar10[0x22] = 0;
        puVar10[0x23] = 0;
        puVar10[0x24] = 0;
        puVar10[0x25] = 0;
        puVar10[0x26] = 0;
        puVar10[0x27] = 0;
        puVar10[0x28] = 0;
        puVar10[0x29] = 0;
        puVar10[0x2a] = 0;
        puVar10[0x2d] = (ulong)puVar3;
        puVar10[0x2e] = (ulong)puVar2;
        puVar10[0x2f] = (ulong)"unititled";
        puVar10[0x30] = 0;
        puVar10[0x31] = 0;
        puVar10[0x32] = 0;
        puVar10[0x33] = 0;
        puVar10[0x34] = 0;
        puVar10[0x35] = 0;
        puVar10[0x36] = 0;
        puVar10[0x37] = 0;
        puVar10[0x38] = 0;
        puVar10 = puVar10 + 0x3e;
      } while (puVar10 != puVar32 + uVar30 * 0x3e);
      *(uint *)(param_1 + 0x48) = uVar31;
      *(ulong **)(param_1 + 0x50) = puVar32;
    }
  }
LAB_039093e8:
  lVar25 = *plVar28 + (ulong)*(uint *)(*plVar28 + 0x10);
  piVar14 = (int *)(lVar25 + 0x14);
  iVar24 = *piVar14;
  uVar31 = *(uint *)((long)piVar14 + (long)iVar24 + 4);
  uVar30 = (ulong)uVar31;
  if ((int)uVar31 < 1) {
LAB_03909494:
    if (uVar31 != 0) goto LAB_0390996c;
  }
  else {
    iVar26 = *(int *)(lVar25 + 0x18);
    if (iVar26 != 0) {
      uVar27 = 0;
      do {
        local_880[uVar27] = 0;
        piVar17 = (int *)(lVar25 + 0x1c);
        iVar33 = iVar26;
        do {
          if ((((uVar27 == (long)(short)piVar17[2]) || (uVar27 == (long)(short)piVar17[3])) ||
              (uVar27 == (long)(short)piVar17[4])) || (uVar27 == (long)(short)piVar17[5])) {
            local_880[uVar27] = 1;
            break;
          }
          iVar33 = iVar33 + -1;
          piVar17 = (int *)((long)piVar17 + (long)*piVar17);
        } while (iVar33 != 0);
        uVar27 = uVar27 + 1;
      } while (uVar27 != uVar30);
      goto LAB_03909494;
    }
    memset(local_880,0,uVar30);
LAB_0390996c:
    uVar27 = 0;
    piVar14 = (int *)((long)piVar14 + (long)iVar24 + 8);
    do {
      uVar18 = uVar27 & 0xffffffff;
      lVar8 = *(long *)(param_1 + 0x60);
      uVar31 = (uint)uVar27 & 0xffff;
      bVar6 = local_880[uVar27];
      if (*(uint *)(param_1 + 0x58) <= uVar27) {
        uVar18 = 0;
      }
      lVar12 = lVar8 + uVar18 * 0x58;
      *(long *)(lVar12 + 0x28) = param_1;
      *(int **)(lVar12 + 0x30) = piVar14;
      *(uint *)(lVar12 + 0x20) = uVar31;
      *(uint *)(lVar12 + 0x24) = *(uint *)(lVar12 + 0x24) & 0xfffffffd | (uint)bVar6 << 1;
      if (*(uint *)(param_1 + 0x78) <= uVar31) {
        uVar31 = 0;
      }
      *(int **)(*(long *)(param_1 + 0x80) + (ulong)uVar31 * 8) = piVar14 + 4;
      uVar31 = *(uint *)(lVar12 + 0x20);
      if (*(uint *)(*(long *)(lVar12 + 0x28) + 0x68) <= uVar31) {
        uVar31 = 0;
      }
      *(ulong *)(*(long *)(*(long *)(lVar12 + 0x28) + 0x70) + (long)(int)uVar31 * 8) =
           (long)(piVar14 + 4) + (ulong)(uint)piVar14[1];
      uVar31 = *(uint *)(*(long *)(lVar12 + 0x28) + 0x58);
      if ((int)uVar31 < 1) {
LAB_03909aa0:
        uVar31 = *(uint *)(lVar12 + 0x48);
        if (uVar31 != 0) {
          pvVar13 = *(void **)(lVar8 + uVar18 * 0x58 + 0x50);
          goto LAB_03909ab0;
        }
      }
      else {
        lVar29 = *(long *)PTR_DAT_04bb2698;
        if (lVar29 == 0) {
          pvVar13 = malloc((ulong)uVar31);
        }
        else {
          plVar28 = param_5;
          if (param_5 == (long *)0x0) {
            lVar15 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
            plVar28 = (long *)(lVar29 + 8);
            if (lVar15 != 0) {
              plVar28 = (long *)(lVar15 + 0xa8);
            }
            plVar28 = (long *)*plVar28;
            if (plVar28 == (long *)0x0) goto LAB_03909aa0;
          }
          pvVar13 = (void *)(**(code **)(*plVar28 + 0x30))(plVar28,(ulong)uVar31,8);
        }
        if (pvVar13 == (void *)0x0) goto LAB_03909aa0;
        *(uint *)(lVar12 + 0x48) = uVar31;
        *(void **)(lVar8 + uVar18 * 0x58 + 0x50) = pvVar13;
LAB_03909ab0:
        uVar19 = 0;
        do {
          uVar16 = uVar19 + 1;
          *(undefined1 *)((long)pvVar13 + (long)(int)uVar19) = 0;
          uVar19 = uVar16;
        } while (uVar31 != uVar16);
      }
      lVar8 = *(long *)PTR_DAT_04bd1158;
      if ((lVar8 != 0) && (*(long *)(*(long *)PTR_DAT_04bb4e50 + 0x58) != 0)) {
        (**(code **)(*(long *)(lVar8 + 8) + 0x18))((long *)(lVar8 + 8));
        FUN_006e9454(&local_480,&DAT_0406a3d7,"Icon = NOTE",*(undefined8 *)(lVar8 + 0x10));
      }
      uVar27 = uVar27 + 1;
      piVar14 = (int *)((long)piVar14 + (long)*piVar14);
    } while (uVar27 != uVar30);
  }
  nn::os::GetSystemTick();
  uVar31 = *(uint *)(lVar25 + 0x18);
  if (uVar31 != 0) {
    uVar19 = 0;
    piVar14 = (int *)(lVar25 + 0x1c);
    puVar3 = PTR_DAT_04bb2020 + 0x10;
    do {
      uVar16 = uVar19;
      if (*(uint *)(param_1 + 0x30) <= uVar19) {
        uVar16 = 0;
      }
      lVar25 = *(long *)(param_1 + 0x38) + (ulong)uVar16 * 0x150;
      if (*(long *)(lVar25 + 8) == 0) {
        local_478 = piVar14 + 6;
        piVar17 = (int *)((long)((long)local_478 + (ulong)(uint)piVar14[1]) +
                         (long)*(int *)((long)local_478 + (ulong)(uint)piVar14[1]));
        piVar17 = (int *)((long)piVar17 + (long)*piVar17);
        piVar17 = (int *)((long)piVar17 + (long)*piVar17);
        local_480 = puVar3;
        FUN_039057b0(lVar25,&local_480,(long)piVar17 + (long)*piVar17,param_5);
      }
      lVar25 = 0;
      iVar24 = 0;
      lVar8 = *(long *)(param_1 + 0x50);
      uVar16 = uVar19;
      if (*(uint *)(param_1 + 0x48) <= uVar19) {
        uVar16 = 0;
      }
      uVar30 = (ulong)uVar16;
      lVar29 = lVar8 + uVar30 * 0x1f0;
      uVar16 = uVar19 & 0xffff;
      *(long *)(lVar29 + 0x10) = param_1;
      *(short *)(lVar29 + 8) = (short)uVar19;
      lVar12 = lVar29 + 0x18;
      if (*(uint *)(param_1 + 0x30) <= uVar16) {
        uVar16 = 0;
      }
      lVar15 = *(long *)(param_1 + 0x38) + (ulong)uVar16 * 0x150;
      plVar28 = (long *)(lVar15 + 8);
      do {
        if ((short)piVar14[lVar25 + 2] == -1) {
          *(undefined8 *)(lVar12 + (long)iVar24 * 0x70 + 0x68) = 0;
        }
        else {
          lVar21 = *(long *)(lVar29 + 0x10);
          uVar16 = (uint)(short)piVar14[lVar25 + 2];
          if (*(uint *)(lVar21 + 0x58) <= uVar16) {
            uVar16 = 0;
          }
          iVar26 = (int)lVar25;
          plVar9 = (long *)(lVar12 + (long)iVar24 * 0x70 + 0x68);
          *plVar9 = *(long *)(lVar21 + 0x60) + (long)(int)uVar16 * 0x58;
          piVar17 = (int *)((long)piVar14 + (ulong)(uint)piVar14[1] + 0x18);
          if (((0 < iVar26) && (piVar17 = (int *)((long)piVar17 + (long)*piVar17), iVar26 != 1)) &&
             (piVar17 = (int *)((long)piVar17 + (long)*piVar17), iVar26 != 2)) {
            piVar17 = (int *)((long)piVar17 + (long)*piVar17);
          }
          lVar21 = lVar12 + (long)iVar24 * 0x70;
          FUN_03908404(lVar21,piVar17[1],*(undefined4 *)(*plVar28 + 0x30),param_5);
          *(long *)(lVar21 + 0x10) = *(long *)(*plVar9 + 0x30) + 0x10;
          iVar26 = piVar17[1];
          if (iVar26 != 0) {
            piVar17 = piVar17 + 2;
            do {
              if (*(int *)(lVar21 + 0x28) < *(int *)(lVar21 + 0x2c)) {
                *(int **)(*(long *)(lVar21 + 0x30) + (long)*(int *)(lVar21 + 0x28) * 8) =
                     piVar17 + 3;
                *(int *)(lVar21 + 0x28) = *(int *)(lVar21 + 0x28) + 1;
              }
              if (*(int *)(lVar21 + 0x38) < *(int *)(lVar21 + 0x3c)) {
                *(ulong *)(*(long *)(lVar21 + 0x40) + (long)*(int *)(lVar21 + 0x38) * 8) =
                     (long)(piVar17 + 3) + (ulong)(uint)piVar17[1];
                *(int *)(lVar21 + 0x38) = *(int *)(lVar21 + 0x38) + 1;
              }
              iVar26 = iVar26 + -1;
              piVar17 = (int *)((long)piVar17 + (long)*piVar17);
            } while (iVar26 != 0);
          }
          *(long *)(lVar15 + lVar25 * 0x10 + 0x88) = lVar21;
        }
        lVar25 = lVar25 + 1;
        iVar24 = iVar24 + 1;
      } while (lVar25 != 4);
      uVar16 = *(uint *)(*plVar28 + 0x30);
      if (0 < (int)uVar16) {
        puVar4 = (uint *)(lVar8 + uVar30 * 0x1f0 + 0x1d8);
        lVar25 = *(long *)PTR_DAT_04bb2698;
        if (lVar25 == 0) {
          pvVar13 = malloc((ulong)uVar16 << 2);
          if (pvVar13 != (void *)0x0) goto LAB_03909798;
LAB_039097bc:
          uVar16 = *puVar4;
          if (uVar16 == 0) goto LAB_039097ec;
          pvVar13 = *(void **)(lVar8 + uVar30 * 0x1f0 + 0x1e0);
        }
        else {
          plVar28 = param_5;
          if (param_5 == (long *)0x0) {
            lVar12 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
            plVar28 = (long *)(lVar25 + 8);
            if (lVar12 != 0) {
              plVar28 = (long *)(lVar12 + 0xa8);
            }
            plVar28 = (long *)*plVar28;
            if (plVar28 == (long *)0x0) goto LAB_039097bc;
          }
          pvVar13 = (void *)(**(code **)(*plVar28 + 0x30))(plVar28,(ulong)uVar16 << 2,8);
          if (pvVar13 == (void *)0x0) goto LAB_039097bc;
LAB_03909798:
          *puVar4 = uVar16;
          *(void **)(lVar8 + uVar30 * 0x1f0 + 0x1e0) = pvVar13;
        }
        uVar30 = 0;
        do {
          *(undefined4 *)((long)pvVar13 + (-(uVar30 >> 0x1f) & 0xfffffffc00000000 | uVar30 << 2)) =
               0;
          uVar27 = uVar30 + 1;
          uVar30 = uVar27 & 0xffffffff;
        } while (uVar16 != (uint)uVar27);
      }
LAB_039097ec:
      lVar25 = *(long *)PTR_DAT_04bd1158;
      if ((lVar25 != 0) && (*(long *)(*(long *)PTR_DAT_04bb4e50 + 0x58) != 0)) {
        (**(code **)(*(long *)(lVar25 + 8) + 0x18))((long *)(lVar25 + 8));
        FUN_006e9454(&local_480,&DAT_0406a3d7,"Icon = CIRCLE_ORENGE",*(undefined8 *)(lVar25 + 0x10))
        ;
      }
      uVar19 = uVar19 + 1;
      piVar14 = (int *)((long)piVar14 + (long)*piVar14);
    } while (uVar31 != uVar19);
  }
  FUN_03909d70(param_1);
LAB_03909848:
  iVar24 = *(int *)(param_1 + 0x30);
  if (iVar24 != 0) {
    lVar25 = *(long *)(param_1 + 0x38);
    iVar26 = 0;
    do {
      plVar28 = (long *)(lVar25 + (long)iVar26 * 0x150 + 8);
      lVar8 = *(long *)(*plVar28 + 0x18);
      puVar4 = (uint *)(lVar8 + 0x10);
      do {
        cVar7 = '\x01';
        bVar1 = (bool)ExclusiveMonitorPass(puVar4,0x10);
        if (bVar1) {
          *puVar4 = *puVar4 | 1;
          cVar7 = ExclusiveMonitorsStatus();
        }
      } while (cVar7 != '\0');
      puVar4 = (uint *)(lVar8 + 0x14);
      do {
        cVar7 = '\x01';
        bVar1 = (bool)ExclusiveMonitorPass(puVar4,0x10);
        if (bVar1) {
          *puVar4 = *puVar4 & 0xffffff81 | 0x7e;
          cVar7 = ExclusiveMonitorsStatus();
        }
      } while (cVar7 != '\0');
      lVar8 = *plVar28;
      iVar33 = *(int *)(lVar8 + 0x20);
      if (iVar33 != 0) {
        lVar8 = *(long *)(lVar8 + 0x28);
        iVar23 = 0;
        do {
          puVar4 = (uint *)(lVar8 + (long)iVar23 * 0x150 + 0x10);
          do {
            cVar7 = '\x01';
            bVar1 = (bool)ExclusiveMonitorPass(puVar4,0x10);
            if (bVar1) {
              *puVar4 = *puVar4 | 1;
              cVar7 = ExclusiveMonitorsStatus();
            }
          } while (cVar7 != '\0');
          puVar4 = (uint *)(lVar8 + (long)iVar23 * 0x150 + 0x14);
          do {
            cVar7 = '\x01';
            bVar1 = (bool)ExclusiveMonitorPass(puVar4,0x10);
            if (bVar1) {
              *puVar4 = *puVar4 & 0xffffff81 | 0x7e;
              cVar7 = ExclusiveMonitorsStatus();
            }
          } while (cVar7 != '\0');
          iVar23 = iVar23 + 1;
        } while (iVar33 != iVar23);
        lVar8 = *plVar28;
      }
      *(int *)(param_1 + 0x40) = *(int *)(lVar8 + 0x20) + *(int *)(param_1 + 0x40) + 1;
      iVar26 = iVar26 + 1;
    } while (iVar24 != iVar26);
  }
  return;
}

