
undefined8 FUN_01cb84b0(uint *param_1,undefined8 *param_2)

{
  int *piVar1;
  undefined *puVar2;
  uint *puVar3;
  ulong uVar4;
  long *plVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined2 uVar8;
  uint uVar9;
  uint uVar10;
  int iVar11;
  void *pvVar12;
  long lVar13;
  ulong uVar14;
  long lVar15;
  long *plVar16;
  long *plVar17;
  undefined4 *puVar18;
  uint uVar19;
  undefined8 *puVar20;
  uint *puVar21;
  undefined4 *puVar22;
  uint *puVar23;
  uint *puVar24;
  ulong uVar25;
  long *plVar26;
  undefined8 uVar27;
  long *plVar28;
  long lVar29;
  int iVar30;
  uint local_800;
  uint local_7fc;
  undefined *local_7f8;
  undefined2 local_7f0;
  undefined1 local_7ee;
  undefined1 local_7ed;
  uint local_7ec;
  uint *local_7e8;
  undefined *local_7e0;
  undefined1 auStack_7d8 [1876];
  uint local_84;
  uint local_80;
  uint local_7c;
  int local_78;
  undefined4 local_6c;
  
  local_7e0 = PTR_DAT_04bbfe60 + 0x10;
  memset(auStack_7d8,0,0x754);
  uVar9 = nn::os::GetSystemTick();
  local_84 = (uVar9 ^ uVar9 >> 0x1e) * 0x6c078965 + 1;
  local_80 = (local_84 ^ local_84 >> 0x1e) * 0x6c078965 + 2;
  local_7c = (local_80 ^ local_80 >> 0x1e) * 0x6c078965 + 3;
  local_78 = (local_7c ^ local_7c >> 0x1e) * 0x6c078965 + 4;
  pvVar12 = (void *)FUN_01a451fc(&local_7e0);
  memset(pvVar12,0,0x754);
  memcpy(auStack_7d8,&DAT_0535cbc8,0x754);
  puVar7 = PTR_DAT_04bb43c0;
  uVar9 = 0;
  do {
    (**(code **)(local_7e0 + 0x10))(&local_7f8,&local_7e0,uVar9);
    lVar13 = (**(code **)(local_7e0 + 0x20))(&local_7e0);
    uVar19 = 1 << (ulong)(uVar9 & 0x1f);
    if ((*(uint *)(lVar13 + (ulong)(uVar9 >> 5) * 4) & uVar19) != 0) {
      lVar13 = *(long *)puVar7;
      uVar10 = FUN_0277d6c4(&local_7f8);
      if (*(long *)puVar7 != 0) {
        lVar13 = *(long *)(lVar13 + 0x57e58);
        uVar10 = (uVar10 & 0xffff) - (uint)*(ushort *)(lVar13 + 0x1f8);
        if (((uVar10 < *(uint *)(lVar13 + 0x1d8)) &&
            (*(long *)(*(long *)(lVar13 + 0x1e0) + (long)(int)uVar10 * 8) != 0)) &&
           (uVar14 = (**(code **)*param_2)(param_2,&local_7f8), (uVar14 & 1) != 0))
        goto LAB_01cb85c0;
      }
      lVar13 = (**(code **)(local_7e0 + 0x18))(&local_7e0);
      lVar15 = (ulong)(uVar9 >> 5) * 4;
      *(uint *)(lVar13 + lVar15) = *(uint *)(lVar13 + lVar15) & (uVar19 ^ 0xffffffff);
    }
LAB_01cb85c0:
    puVar6 = PTR_DAT_04bb2698;
    uVar9 = uVar9 + 1;
  } while (uVar9 != 15000);
  lVar13 = *(long *)PTR_DAT_04bb2698;
  if (lVar13 == 0) {
    plVar16 = malloc(0x8910);
  }
  else {
    lVar15 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
    plVar16 = (long *)(lVar13 + 8);
    if (lVar15 != 0) {
      plVar16 = (long *)(lVar15 + 0xa8);
    }
    plVar16 = (long *)*plVar16;
    if (plVar16 == (long *)0x0) {
      return 0;
    }
    plVar16 = (long *)(**(code **)(*plVar16 + 0x30))(plVar16,0x8910,8);
  }
  if (plVar16 == (long *)0x0) {
    return 0;
  }
  plVar17 = plVar16 + 3;
  lVar13 = 0x5b6;
  do {
    plVar17[1] = (long)plVar17;
    plVar17[2] = -0x100000000;
    lVar13 = lVar13 + -2;
    plVar17[-3] = (long)(plVar17 + -3);
    *plVar17 = (long)plVar17;
    plVar17[-2] = (long)(plVar17 + -3);
    plVar17[-1] = -0x100000000;
    plVar17 = plVar17 + 6;
  } while (lVar13 != 0);
  lVar13 = 0x5b6;
  puVar18 = (undefined4 *)((long)plVar16 + 0x2c);
  do {
    puVar18[-6] = 8;
    lVar13 = lVar13 + -2;
    *puVar18 = 8;
    puVar18 = puVar18 + 0xc;
  } while (lVar13 != 0);
  lVar13 = (**(code **)(local_7e0 + 0x20))(&local_7e0);
  uVar14 = 0;
  do {
    if ((*(uint *)(lVar13 + (uVar14 >> 5) * 4) >> (ulong)((uint)uVar14 & 0x1f) & 1) != 0)
    goto LAB_01cb8740;
    uVar9 = (uint)uVar14 + 1;
    uVar14 = (ulong)uVar9;
  } while (uVar9 != 15000);
  uVar14 = 0;
LAB_01cb8740:
  lVar15 = (**(code **)(local_7e0 + 0x20))(&local_7e0);
  iVar11 = 15000;
  do {
    if ((*(uint *)(lVar15 + (ulong)(iVar11 - 1U >> 5) * 4) >> (ulong)(iVar11 - 1U & 0x1f) & 1) != 0)
    break;
    iVar11 = iVar11 + -1;
  } while (iVar11 != 0);
  if (iVar11 != (int)uVar14) {
    puVar2 = PTR_DAT_04bc0510 + 0x10;
    puVar24 = (uint *)PTR_DAT_04bbfe58;
LAB_01cb8940:
    lVar15 = *(long *)puVar7;
    local_7e8 = (uint *)0x0;
    puVar21 = puVar24 + uVar14 * 2;
    if (0x752 < (uint)(uVar14 >> 3)) {
      puVar21 = puVar24;
    }
    puVar3 = (uint *)PTR_DAT_04bb37e0;
    if ((uint)uVar14 < 0x3a99) {
      puVar3 = puVar21;
    }
    local_7f0 = (undefined2)*puVar3;
    local_7ee = *(undefined1 *)((long)puVar3 + 2);
    local_7ed = *(undefined1 *)((long)puVar3 + 3);
    local_800 = *puVar3;
    local_7fc = puVar3[1];
    local_7f8 = puVar2;
    local_7ec = local_7fc;
    uVar9 = FUN_0277d6c4(&local_7f0);
    if (*(long *)puVar7 == 0) {
LAB_01cb8b50:
      local_6c = 0;
      local_800 = 0;
    }
    else {
      lVar15 = *(long *)(lVar15 + 0x57e58);
      uVar9 = (uVar9 & 0xffff) - (uint)*(ushort *)(lVar15 + 0x1f8);
      if ((*(uint *)(lVar15 + 0x1d8) <= uVar9) ||
         (*(long *)(*(long *)(lVar15 + 0x1e0) + (long)(int)uVar9 * 8) == 0)) goto LAB_01cb8b50;
      lVar15 = *(long *)PTR_DAT_04bc0428;
      uVar9 = FUN_0277d6c4(&local_800);
      uVar9 = (uVar9 & 0xffff) - (uint)*(ushort *)(lVar15 + 0x1f8);
      if ((*(uint *)(lVar15 + 0x1d8) <= uVar9) ||
         (puVar21 = *(uint **)(*(long *)(lVar15 + 0x1e0) + (long)(int)uVar9 * 8),
         puVar21 == (uint *)0x0)) goto LAB_01cb8b50;
      local_800 = 0;
      local_6c = 0;
      uVar9 = *puVar21;
      if ((uVar9 != 0) && (puVar21 != (uint *)(ulong)uVar9)) {
        puVar23 = (uint *)((long)puVar21 - (long)(ulong)uVar9);
        local_800 = 0;
        if (*puVar23 != 0) {
          uVar9 = puVar23[1];
          if ((uVar9 != 0) && ((ulong)(ushort)puVar23[2] != 0)) {
            lVar15 = 0xc;
            if (*(char *)((long)puVar23 + 10) != '\0') {
              lVar15 = 0x1c;
            }
            lVar15 = (long)puVar23 + lVar15 + (ulong)(ushort)puVar23[2] * 8;
            if (lVar15 != 0) {
              uVar19 = 0;
              if ((ulong)uVar9 != 0) {
                uVar19 = (uint)((ulong)((long)puVar21 - lVar15) / (ulong)uVar9);
              }
              if (*puVar23 <= uVar19) {
                uVar19 = 0xffffffff;
              }
              if ((uVar19 < *(uint *)PTR_DAT_04bc0020) &&
                 (local_800 = (uint)*(ushort *)
                                     (*(long *)(PTR_DAT_04bc0020 + 8) + (long)(int)uVar19 * 2),
                 local_800 < 0x5b6)) goto LAB_01cb8aac;
            }
          }
          local_800 = 0;
        }
      }
LAB_01cb8aac:
      local_7e8 = puVar21;
      if (local_800 != 0) {
        uVar9 = *puVar21;
        uVar19 = 0;
        if ((uVar9 != 0) && (puVar21 != (uint *)(ulong)uVar9)) {
          puVar24 = (uint *)((long)puVar21 - (long)(ulong)uVar9);
          uVar19 = 0;
          if (*puVar24 != 0) {
            uVar9 = puVar24[1];
            if ((uVar9 != 0) && ((ulong)(ushort)puVar24[2] != 0)) {
              lVar15 = 0xc;
              if (*(char *)((long)puVar24 + 10) != '\0') {
                lVar15 = 0x1c;
              }
              lVar15 = (long)puVar24 + lVar15 + (ulong)(ushort)puVar24[2] * 8;
              if (lVar15 != 0) {
                uVar19 = 0;
                if ((ulong)uVar9 != 0) {
                  uVar19 = (uint)((ulong)((long)puVar21 - lVar15) / (ulong)uVar9);
                }
                if (*puVar24 <= uVar19) {
                  uVar19 = 0xffffffff;
                }
                if ((uVar19 < *(uint *)PTR_DAT_04bc0020) &&
                   (uVar19 = (uint)*(ushort *)
                                    (*(long *)(PTR_DAT_04bc0020 + 8) + (long)(int)uVar19 * 2),
                   uVar19 < 0x5b6)) goto LAB_01cb8b6c;
              }
            }
            uVar19 = 0;
          }
        }
LAB_01cb8b6c:
        local_6c = 0;
        lVar15 = *(long *)puVar6;
        local_800 = uVar19;
        if (lVar15 == 0) {
          puVar24 = malloc(0x18);
        }
        else {
          lVar29 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
          plVar17 = (long *)(lVar15 + 8);
          if (lVar29 != 0) {
            plVar17 = (long *)(lVar29 + 0xa8);
          }
          plVar17 = (long *)*plVar17;
          if (plVar17 == (long *)0x0) goto LAB_01cb8f48;
          puVar24 = (uint *)(**(code **)(*plVar17 + 0x30))(plVar17,0x18,8);
        }
        if (puVar24 == (uint *)0x0) goto LAB_01cb8f48;
        puVar24[0] = 0;
        puVar24[1] = 0;
        puVar24[2] = 0;
        puVar24[3] = 0;
        puVar24[4] = 0;
        puVar24[5] = 0;
        *(undefined2 *)puVar24 = 0xfffe;
        *(undefined1 *)((long)puVar24 + 3) = 0;
        FUN_0277d4ac(puVar24);
        puVar24[2] = 0;
        puVar24[3] = 0;
        puVar24[4] = 0;
        puVar24[5] = 0;
        uVar9 = puVar3[1];
        *puVar24 = *puVar3;
        puVar24[1] = uVar9;
        plVar17 = plVar16 + (ulong)uVar19 * 3;
        if (0x5b5 < uVar19) {
          plVar17 = plVar16;
        }
        lVar15 = *plVar17;
        plVar26 = (long *)((long)*(int *)((long)plVar17 + 0x14) + (long)puVar24);
        *plVar17 = (long)plVar26;
        *plVar26 = lVar15;
        plVar26[1] = (long)plVar17;
        if (lVar15 != 0) {
          *(long **)(lVar15 + 8) = plVar26;
        }
        *(int *)(plVar17 + 2) = (int)plVar17[2] + 1;
        puVar24 = (uint *)PTR_DAT_04bbfe58;
      }
    }
    do {
      uVar9 = (int)uVar14 + 1;
      uVar14 = (ulong)uVar9;
      if (0x752 < uVar9 >> 3) {
        uVar9 = 0x3a95;
        goto LAB_01cb8c80;
      }
    } while ((*(uint *)(lVar13 + (ulong)(uVar9 >> 5) * 4) >> (ulong)(uVar9 & 0x1f) & 1) == 0);
    goto LAB_01cb8938;
  }
LAB_01cb8784:
  uVar14 = 0;
  lVar13 = 0;
  do {
    plVar17 = plVar16 + lVar13 * 3;
    lVar29 = -(long)*(int *)((long)plVar17 + 0x14);
    lVar15 = plVar17[1];
    if ((int)plVar17[2] < 1) {
      lVar15 = 0;
    }
    if ((lVar15 != 0 && lVar15 != *(int *)((long)plVar17 + 0x14)) &&
       (uVar14 = (ulong)((int)uVar14 + 1), 1 < (int)plVar17[2])) {
      plVar26 = *(long **)(plVar17[1] + 8);
      while (plVar5 = plVar26, plVar5 != plVar17) {
        plVar28 = (long *)*plVar5;
        plVar26 = (long *)plVar5[1];
        iVar11 = FUN_0342caf0((long)plVar28 + lVar29,(long)plVar5 + lVar29);
        if (0 < iVar11) {
          do {
            plVar28 = (long *)*plVar28;
            if (plVar28 == plVar17) {
              lVar15 = *plVar5;
              plVar28 = plVar17;
              goto joined_r0x01cb8888;
            }
            iVar11 = FUN_0342caf0((long)plVar28 + lVar29,(long)plVar5 + lVar29);
          } while (0 < iVar11);
          lVar15 = *plVar5;
joined_r0x01cb8888:
          if (lVar15 != 0) {
            *(long *)(lVar15 + 8) = plVar5[1];
          }
          if ((long *)plVar5[1] != (long *)0x0) {
            *(long *)plVar5[1] = *plVar5;
          }
          *plVar5 = 0;
          plVar5[1] = 0;
          puVar20 = (undefined8 *)plVar28[1];
          plVar28[1] = (long)plVar5;
          *plVar5 = (long)plVar28;
          plVar5[1] = (long)puVar20;
          if (puVar20 != (undefined8 *)0x0) {
            *puVar20 = plVar5;
          }
        }
      }
    }
    lVar13 = lVar13 + 1;
  } while (lVar13 != 0x5b6);
  uVar9 = (uint)uVar14;
  if (uVar9 == 0) {
LAB_01cb8f3c:
    uVar27 = 1;
  }
  else {
    if (0 < (int)uVar9) {
      lVar13 = *(long *)puVar6;
      if (lVar13 == 0) {
        pvVar12 = malloc(uVar14 << 1);
      }
      else {
        lVar15 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
        plVar17 = (long *)(lVar13 + 8);
        if (lVar15 != 0) {
          plVar17 = (long *)(lVar15 + 0xa8);
        }
        plVar17 = (long *)*plVar17;
        if (plVar17 == (long *)0x0) goto LAB_01cb8f48;
        pvVar12 = (void *)(**(code **)(*plVar17 + 0x30))(plVar17,uVar14 << 1,8);
      }
      if (pvVar12 != (void *)0x0) {
        *param_1 = uVar9;
        *(void **)(param_1 + 2) = pvVar12;
        lVar13 = *(long *)puVar6;
        if (lVar13 == 0) {
          puVar18 = malloc(uVar14 << 4);
        }
        else {
          lVar15 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
          plVar17 = (long *)(lVar13 + 8);
          if (lVar15 != 0) {
            plVar17 = (long *)(lVar15 + 0xa8);
          }
          plVar17 = (long *)*plVar17;
          if (plVar17 == (long *)0x0) goto LAB_01cb8f48;
          puVar18 = (undefined4 *)(**(code **)(*plVar17 + 0x30))(plVar17,uVar14 << 4,8);
        }
        if (puVar18 != (undefined4 *)0x0) {
          uVar25 = uVar14 & 3;
          puVar22 = puVar18;
          if (uVar25 != 0) {
            do {
              *puVar22 = 0;
              uVar25 = uVar25 - 1;
              *(undefined8 *)(puVar22 + 2) = 0;
              puVar22 = puVar22 + 4;
            } while (uVar25 != 0);
          }
          if (2 < (uVar14 - 1 & 0xfffffffffffffff)) {
            do {
              *puVar22 = 0;
              *(undefined8 *)(puVar22 + 2) = 0;
              puVar22[4] = 0;
              *(undefined8 *)(puVar22 + 6) = 0;
              puVar22[8] = 0;
              *(undefined8 *)(puVar22 + 10) = 0;
              puVar22[0xc] = 0;
              *(undefined8 *)(puVar22 + 0xe) = 0;
              puVar22 = puVar22 + 0x10;
            } while (puVar22 != puVar18 + uVar14 * 4);
          }
          uVar19 = 0;
          iVar11 = 0;
          param_1[4] = uVar9;
          *(undefined4 **)(param_1 + 6) = puVar18;
          do {
            plVar17 = plVar16 + (long)iVar11 * 3;
            lVar13 = plVar17[1];
            if ((int)plVar17[2] < 1) {
              lVar13 = 0;
            }
            lVar29 = (long)*(int *)((long)plVar17 + 0x14);
            lVar15 = lVar13 - lVar29;
            if (lVar13 != 0 && lVar15 != 0) {
              uVar14 = 0;
              iVar30 = 0;
              do {
                iVar30 = iVar30 + 1;
                plVar26 = *(long **)(lVar15 + lVar29 + 8);
                uVar14 = (ulong)((int)uVar14 + 2);
                lVar15 = (long)plVar26 - lVar29;
              } while (plVar26 != plVar17 && lVar15 != 0);
              uVar9 = uVar19;
              if (*param_1 <= uVar19) {
                uVar9 = 0;
              }
              *(short *)(*(long *)(param_1 + 2) + (long)(int)uVar9 * 2) = (short)iVar11;
              uVar9 = param_1[4];
              lVar15 = *(long *)(param_1 + 6);
              lVar13 = *(long *)puVar6;
              if (lVar13 == 0) {
                pvVar12 = malloc(uVar14);
              }
              else {
                lVar29 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
                plVar26 = (long *)(lVar13 + 8);
                if (lVar29 != 0) {
                  plVar26 = (long *)(lVar29 + 0xa8);
                }
                plVar26 = (long *)*plVar26;
                if (plVar26 == (long *)0x0) goto LAB_01cb8f48;
                pvVar12 = (void *)(**(code **)(*plVar26 + 0x30))(plVar26,uVar14,8);
              }
              if (pvVar12 == (void *)0x0) goto LAB_01cb8f48;
              uVar10 = uVar19;
              if (uVar9 <= uVar19) {
                uVar10 = 0;
              }
              piVar1 = (int *)(lVar15 + (long)(int)uVar10 * 0x10);
              *piVar1 = iVar30;
              *(void **)(piVar1 + 2) = pvVar12;
              uVar9 = uVar19;
              if (param_1[4] <= uVar19) {
                uVar9 = 0;
              }
              if ((long *)plVar17[1] != plVar17) {
                uVar14 = 0;
                lVar15 = (long)*(int *)((long)plVar17 + 0x14);
                lVar13 = plVar17[1] - lVar15;
                lVar29 = *(long *)(*(long *)(param_1 + 6) + (long)(int)uVar9 * 0x10 + 8);
                do {
                  uVar8 = FUN_0277d6c4(lVar13);
                  uVar25 = uVar14 << 1;
                  uVar4 = uVar14 >> 0x1f;
                  uVar14 = (ulong)((int)uVar14 + 1);
                  *(undefined2 *)(lVar29 + (-uVar4 & 0xfffffffe00000000 | uVar25)) = uVar8;
                  lVar13 = *(long *)(lVar13 + lVar15 + 8) - lVar15;
                } while (lVar13 != (long)plVar17 - lVar15);
              }
              uVar19 = uVar19 + 1;
            }
            iVar11 = iVar11 + 1;
          } while (iVar11 != 0x5b6);
          goto LAB_01cb8f3c;
        }
      }
    }
LAB_01cb8f48:
    uVar27 = 0;
  }
  lVar13 = 0;
  do {
    iVar11 = (int)plVar16[lVar13 * 3 + 2];
    if (iVar11 != 0) {
      do {
        if (0 < iVar11) {
          plVar17 = (long *)plVar16[lVar13 * 3 + 1];
          if (*plVar17 != 0) {
            *(long *)(*plVar17 + 8) = plVar17[1];
          }
          if ((long *)plVar17[1] != (long *)0x0) {
            *(long *)plVar17[1] = *plVar17;
          }
          *plVar17 = 0;
          plVar17[1] = 0;
          *(int *)(plVar16 + lVar13 * 3 + 2) = (int)plVar16[lVar13 * 3 + 2] + -1;
          if ((plVar17 != (long *)0x0) &&
             (pvVar12 = (void *)((long)plVar17 -
                                (long)*(int *)((long)plVar16 + lVar13 * 0x18 + 0x14)),
             pvVar12 != (void *)0x0)) {
            if (*(long *)puVar6 == 0) {
              free(pvVar12);
            }
            else {
              plVar17 = (long *)FUN_038cb610(*(long *)puVar6,pvVar12);
              if (plVar17 != (long *)0x0) {
                (**(code **)(*plVar17 + 0x38))(plVar17,pvVar12);
              }
            }
          }
        }
        iVar11 = (int)plVar16[lVar13 * 3 + 2];
      } while (iVar11 != 0);
    }
    lVar13 = lVar13 + 1;
  } while (lVar13 != 0x5b6);
  if (*(long *)puVar6 == 0) {
    free(plVar16);
    return uVar27;
  }
  plVar17 = (long *)FUN_038cb610(*(long *)puVar6,plVar16);
  if (plVar17 == (long *)0x0) {
    return uVar27;
  }
  (**(code **)(*plVar17 + 0x38))(plVar17,plVar16);
  return uVar27;
  while( true ) {
    uVar19 = uVar9 + 1;
    if ((*(uint *)(lVar13 + (ulong)(uVar19 >> 5) * 4) >> (ulong)(uVar19 & 0x1f) & 1) != 0)
    goto LAB_01cb8930;
    if ((*(uint *)(lVar13 + (ulong)(uVar9 >> 5) * 4) >> (ulong)(uVar9 & 0x1f) & 1) != 0)
    goto LAB_01cb8934;
    uVar9 = uVar9 - 3;
    if (uVar9 == 0xfffffffd) break;
LAB_01cb8c80:
    uVar19 = uVar9 + 2;
    if ((*(uint *)(lVar13 + (ulong)(uVar19 >> 5) * 4) >> (ulong)(uVar19 & 0x1f) & 1) != 0) {
LAB_01cb8930:
      uVar9 = uVar19;
LAB_01cb8934:
      uVar14 = (ulong)(uVar9 + 1);
      goto LAB_01cb8938;
    }
  }
  uVar14 = 0;
LAB_01cb8938:
  if (iVar11 == (int)uVar14) goto LAB_01cb8784;
  goto LAB_01cb8940;
}

