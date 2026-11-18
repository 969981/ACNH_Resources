
/* WARNING: Removing unreachable block (ram,0x0377937c) */

undefined8 FUN_03779330(undefined8 *param_1)

{
  void *pvVar1;
  long lVar2;
  undefined4 uVar3;
  ushort uVar4;
  ushort uVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  byte bVar9;
  uint uVar10;
  int iVar11;
  undefined8 *puVar12;
  ulong uVar13;
  ulong uVar14;
  undefined8 *puVar15;
  int *piVar16;
  long lVar17;
  long *plVar18;
  long lVar19;
  uint *puVar20;
  char cVar21;
  uint uVar22;
  ulong uVar23;
  void *pvVar24;
  uint *puVar25;
  char *pcVar26;
  ulong uVar27;
  byte bVar28;
  void *pvVar29;
  ushort uVar30;
  uint local_e0;
  ushort local_dc [2];
  undefined8 local_d8;
  char *local_d0;
  undefined8 ****local_c8;
  undefined8 ****local_c0;
  undefined8 ***local_b8;
  undefined8 **local_b0;
  undefined8 *local_a8;
  undefined8 local_a0;
  undefined8 local_98 [4];
  ushort local_74 [2];
  uint local_70 [2];
  long local_68;
  
  lVar17 = *(long *)PTR_DAT_04bb46b0;
  if (lVar17 == 0) {
    return 0;
  }
  local_d8 = (undefined *)CONCAT44(local_d8._4_4_,1);
  if (((*(byte *)(lVar17 + 0x50d) ^ 0xff) & 6) != 0) {
    return 0;
  }
  lVar17 = (**(code **)(**(long **)(*(long *)(lVar17 + 0x10) + 0x188) + 0x38))();
  if (lVar17 == 0) {
    return 0;
  }
  if (*(long **)(lVar17 + 0x36620) == (long *)0x0) {
    uVar13 = 0;
  }
  else {
    puVar12 = (undefined8 *)**(long **)(lVar17 + 0x36620);
    uVar13 = 0;
    if (puVar12 != (undefined8 *)0x0) {
      uVar13 = (**(code **)*puVar12)();
    }
  }
  iVar11 = (int)*(char *)(*(long *)(lVar17 + 0x36608) + *(long *)(lVar17 + 0x36600));
  local_d8 = (undefined *)CONCAT44(local_d8._4_4_,iVar11);
  if ((((uVar13 & 1) != 0) && (*(long *)(lVar17 + 0x36620) != 0)) &&
     (puVar12 = *(undefined8 **)(*(long *)(lVar17 + 0x36620) + 8), puVar12 != (undefined8 *)0x0)) {
    (**(code **)*puVar12)();
  }
  if (iVar11 != 1) {
    return 0;
  }
  if ((*(long **)(lVar17 + 0x36658) == (long *)0x0) ||
     (puVar12 = (undefined8 *)**(long **)(lVar17 + 0x36658), puVar12 == (undefined8 *)0x0)) {
    uVar13 = 0;
  }
  else {
    uVar13 = (**(code **)*puVar12)();
    uVar13 = uVar13 & 0xffffffff;
  }
  lVar19 = *(long *)(lVar17 + 0x36640) + *(long *)(lVar17 + 0x36638);
  uVar30 = *(ushort *)(lVar19 + 0x48b0);
  uVar5 = *(ushort *)(lVar19 + 0x48b2);
  local_74[0] = uVar30;
  if ((*(long **)(lVar17 + 0x36690) == (long *)0x0) ||
     (puVar12 = (undefined8 *)**(long **)(lVar17 + 0x36690), puVar12 == (undefined8 *)0x0)) {
    uVar14 = 0;
    plVar18 = *(long **)(lVar17 + 0x37c70);
    if (plVar18 != (long *)0x0) goto LAB_037794b4;
LAB_037794d0:
    local_e0 = 0;
  }
  else {
    uVar14 = (**(code **)*puVar12)();
    uVar14 = uVar14 & 0xffffffff;
    plVar18 = *(long **)(lVar17 + 0x37c70);
    if (plVar18 == (long *)0x0) goto LAB_037794d0;
LAB_037794b4:
    if ((undefined8 *)*plVar18 == (undefined8 *)0x0) goto LAB_037794d0;
    local_e0 = (*(code *)**(undefined8 **)*plVar18)();
  }
  *(undefined1 *)param_1[0x28] = 0;
  *(undefined1 *)param_1[0x2c] = 0;
  *(undefined1 *)param_1[0x30] = 0;
  *(undefined1 *)param_1[0x34] = 0;
  local_d8 = (undefined *)0x0;
  local_d0 = (char *)0x0;
  local_b8 = &local_b0;
  local_b0 = &local_a8;
  local_c8 = &local_b8;
  local_a8 = &local_a0;
  local_a0 = 0;
  if (local_98 != (undefined8 *)0x0) {
    local_d8 = (undefined *)0x400000000;
    local_d0 = (char *)local_98;
  }
  local_c0 = local_c8;
  bVar9 = FUN_03770770(local_74,&local_d8);
  puVar8 = PTR_DAT_04bc0678;
  puVar7 = PTR_DAT_04bc0670;
  puVar6 = PTR_DAT_04bb4958;
  if ((bVar9 & 1) != 0) {
    uVar10 = (uint)local_d8;
    if (3 < (int)(uint)local_d8) {
      uVar10 = 4;
    }
    if ((0 < (int)(uint)local_d8) && (lVar19 = *(long *)PTR_DAT_04bb4958, lVar19 != 0)) {
      uVar27 = 0;
      if ((int)uVar10 < 2) {
        uVar10 = 1;
      }
      puVar12 = (undefined8 *)PTR_PTR_04bc0668;
      pcVar26 = PTR_DAT_04bc0670;
      puVar15 = (undefined8 *)PTR_DAT_04bc0678;
      do {
        if (lVar19 != 0) {
          if ((ulong)**(ushort **)((long)local_d0 + uVar27 * 8) < 500) {
            uVar30 = *(ushort *)
                      (lVar19 + (ulong)**(ushort **)((long)local_d0 + uVar27 * 8) * 2 + 0x620);
            if ((int)*(uint *)(lVar19 + 0x1c0) < 1) {
              if ((((*(long *)(lVar19 + 0xb0) != 0) &&
                   (puVar20 = *(uint **)(*(long *)(lVar19 + 0xb0) + 8), puVar20 != (uint *)0x0)) &&
                  ((uVar22 = (uint)uVar30, *(uint *)(lVar19 + 200) <= uVar22 ||
                   (*(char *)(*(long *)(lVar19 + 0xd0) + (ulong)uVar22) != '\0')))) &&
                 (((uVar22 < *puVar20 && (puVar20[1] != 0)) && ((ushort)puVar20[2] != 0)))) {
                iVar11 = 0xc;
                if (*(char *)((long)puVar20 + 10) != '\0') {
                  iVar11 = 0x1c;
                }
                puVar20 = (uint *)((ulong)(puVar20[1] * uVar22 + (uint)(ushort)puVar20[2] * 8 +
                                          iVar11) + (long)puVar20);
                goto joined_r0x03779784;
              }
            }
            else if ((uint)uVar30 < *(uint *)(lVar19 + 0x1c0)) {
              uVar22 = (uint)uVar30;
              if (*(uint *)(lVar19 + 0x1b0) <= uVar22) {
                uVar22 = 0;
              }
              puVar20 = *(uint **)(*(long *)(lVar19 + 0x1b8) + (ulong)uVar22 * 8);
joined_r0x03779784:
              if (puVar20 != (uint *)0x0) {
                if (*puVar20 != 0) {
                  cVar21 = *pcVar26;
                  do {
                    if (cVar21 == '\0') {
                      cVar21 = '\x01';
                      *pcVar26 = '\x01';
                      *puVar15 = 0xffffffffffffffff;
                      puVar15[1] = 0xffffffffffffffff;
                      *(undefined4 *)(puVar15 + 10) = 0xffffffff;
                      puVar15[2] = 0xffffffffffffffff;
                      puVar15[3] = 0xffffffffffffffff;
                      puVar15[4] = 0xffffffffffffffff;
                      puVar15[5] = 0xffffffffffffffff;
                      puVar15[6] = 0xffffffffffffffff;
                      puVar15[7] = 0xffffffffffffffff;
                      puVar15[8] = 0xffffffffffffffff;
                      puVar15[9] = 0xffffffffffffffff;
                    }
                    else {
                      uVar22 = *(uint *)(puVar15 + 9);
                      if (-1 < (int)uVar22) {
                        pvVar24 = (void *)((ulong)uVar22 + (long)puVar20);
                        goto LAB_037796cc;
                      }
                      if (uVar22 != 0xffffffff) break;
                    }
                    puVar25 = (uint *)(ulong)*puVar20;
                    pvVar24 = (void *)0x0;
                    if ((*puVar20 == 0) || (puVar20 == puVar25)) goto LAB_037796cc;
                    lVar19 = 0xc;
                    if (*(char *)((long)puVar20 + (10 - (long)puVar25)) != '\0') {
                      lVar19 = 0x1c;
                    }
                    lVar19 = (long)puVar20 + (lVar19 - (long)puVar25);
                    if (lVar19 == 0) break;
                    uVar23 = (ulong)*(ushort *)((long)puVar20 + (8 - (long)puVar25));
                    *(undefined4 *)(puVar15 + 9) = 0xfffffffe;
                    pvVar24 = (void *)0x0;
                    if (uVar23 == 0) goto LAB_037796cc;
                    piVar16 = (int *)(lVar19 + 4);
                    while (piVar16[-1] != 0x34c8eed5) {
                      piVar16 = piVar16 + 2;
                      uVar23 = uVar23 - 1;
                      if (uVar23 == 0) {
                        pvVar24 = (void *)0x0;
                        goto LAB_037796cc;
                      }
                    }
                    iVar11 = 0;
                    if (*piVar16 != -1) {
                      iVar11 = *piVar16;
                    }
                    *(int *)(puVar15 + 9) = iVar11;
                  } while (*puVar20 != 0);
                }
                pvVar24 = (void *)0x0;
LAB_037796cc:
                pvVar29 = (void *)param_1[uVar27 * 4 + 0x28];
                pvVar1 = (void *)*puVar12;
                if (pvVar24 != (void *)0x0) {
                  pvVar1 = pvVar24;
                }
                if (pvVar29 != pvVar1) {
                  lVar19 = 0;
                  do {
                    if (*(char *)((long)pvVar1 + lVar19) == '\0') {
LAB_03779798:
                      iVar11 = (int)lVar19;
                      goto LAB_0377979c;
                    }
                    if (*(char *)((long)pvVar1 + lVar19 + 1) == '\0') {
                      lVar19 = lVar19 + 1;
                      goto LAB_03779798;
                    }
                    if (*(char *)((long)pvVar1 + lVar19 + 2) == '\0') {
                      lVar19 = lVar19 + 2;
                      goto LAB_03779798;
                    }
                    lVar19 = lVar19 + 3;
                  } while (lVar19 != 0x80001);
                  iVar11 = 0;
LAB_0377979c:
                  if (*(int *)(param_1 + uVar27 * 4 + 0x29) <= iVar11) {
                    iVar11 = *(int *)(param_1 + uVar27 * 4 + 0x29) + -1;
                  }
                  memcpy(pvVar29,pvVar1,(long)iVar11);
                  *(undefined1 *)((long)pvVar29 + (long)iVar11) = 0;
                  puVar15 = (undefined8 *)PTR_DAT_04bc0678;
                  puVar12 = (undefined8 *)PTR_PTR_04bc0668;
                  pcVar26 = PTR_DAT_04bc0670;
                }
              }
            }
          }
        }
        uVar27 = uVar27 + 1;
        if (uVar27 == uVar10) break;
        lVar19 = *(long *)puVar6;
      } while( true );
    }
    uVar30 = **(ushort **)local_d0;
    goto LAB_03779cb4;
  }
  lVar19 = *(long *)PTR_DAT_04bb4958;
  if (lVar19 == 0) goto LAB_03779cb4;
  if (uVar30 < 500) {
    uVar4 = *(ushort *)(lVar19 + (ulong)uVar30 * 2 + 0x620);
    if ((int)*(uint *)(lVar19 + 0x1c0) < 1) {
      if ((((*(long *)(lVar19 + 0xb0) != 0) &&
           (puVar20 = *(uint **)(*(long *)(lVar19 + 0xb0) + 8), puVar20 != (uint *)0x0)) &&
          ((uVar10 = (uint)uVar4, *(uint *)(lVar19 + 200) <= uVar10 ||
           (*(char *)(*(long *)(lVar19 + 0xd0) + (ulong)uVar10) != '\0')))) &&
         (((uVar10 < *puVar20 && (puVar20[1] != 0)) && ((ushort)puVar20[2] != 0)))) {
        iVar11 = 0xc;
        if (*(char *)((long)puVar20 + 10) != '\0') {
          iVar11 = 0x1c;
        }
        puVar20 = (uint *)((ulong)(puVar20[1] * uVar10 + (uint)(ushort)puVar20[2] * 8 + iVar11) +
                          (long)puVar20);
        goto joined_r0x037799c4;
      }
    }
    else if ((uint)uVar4 < *(uint *)(lVar19 + 0x1c0)) {
      uVar10 = (uint)uVar4;
      if (*(uint *)(lVar19 + 0x1b0) <= uVar10) {
        uVar10 = 0;
      }
      puVar20 = *(uint **)(*(long *)(lVar19 + 0x1b8) + (ulong)uVar10 * 8);
joined_r0x037799c4:
      if (puVar20 != (uint *)0x0) {
        if (*puVar20 != 0) {
          cVar21 = *PTR_DAT_04bc0670;
          do {
            if (cVar21 == '\0') {
              cVar21 = '\x01';
              *(undefined8 *)puVar8 = 0xffffffffffffffff;
              *(undefined8 *)(puVar8 + 8) = 0xffffffffffffffff;
              *puVar7 = 1;
              *(undefined4 *)(puVar8 + 0x50) = 0xffffffff;
              *(undefined8 *)(puVar8 + 0x10) = 0xffffffffffffffff;
              *(undefined8 *)(puVar8 + 0x18) = 0xffffffffffffffff;
              *(undefined8 *)(puVar8 + 0x20) = 0xffffffffffffffff;
              *(undefined8 *)(puVar8 + 0x28) = 0xffffffffffffffff;
              *(undefined8 *)(puVar8 + 0x30) = 0xffffffffffffffff;
              *(undefined8 *)(puVar8 + 0x38) = 0xffffffffffffffff;
              *(undefined8 *)(puVar8 + 0x40) = 0xffffffffffffffff;
              *(undefined8 *)(puVar8 + 0x48) = 0xffffffffffffffff;
            }
            else {
              uVar10 = *(uint *)(puVar8 + 0x48);
              if (-1 < (int)uVar10) {
                pvVar24 = (void *)((ulong)uVar10 + (long)puVar20);
                goto LAB_037799d4;
              }
              if (uVar10 != 0xffffffff) break;
            }
            puVar25 = (uint *)(ulong)*puVar20;
            pvVar24 = (void *)0x0;
            if ((*puVar20 == 0) || (puVar20 == puVar25)) goto LAB_037799d4;
            lVar2 = 0xc;
            if (*(char *)((long)puVar20 + (10 - (long)puVar25)) != '\0') {
              lVar2 = 0x1c;
            }
            lVar2 = (long)puVar20 + (lVar2 - (long)puVar25);
            if (lVar2 == 0) break;
            uVar27 = (ulong)*(ushort *)((long)puVar20 + (8 - (long)puVar25));
            *(undefined4 *)(puVar8 + 0x48) = 0xfffffffe;
            pvVar24 = (void *)0x0;
            if (uVar27 == 0) goto LAB_037799d4;
            piVar16 = (int *)(lVar2 + 4);
            while (piVar16[-1] != 0x34c8eed5) {
              piVar16 = piVar16 + 2;
              uVar27 = uVar27 - 1;
              if (uVar27 == 0) {
                pvVar24 = (void *)0x0;
                goto LAB_037799d4;
              }
            }
            iVar11 = 0;
            if (*piVar16 != -1) {
              iVar11 = *piVar16;
            }
            *(int *)(puVar8 + 0x48) = iVar11;
          } while (*puVar20 != 0);
        }
        pvVar24 = (void *)0x0;
LAB_037799d4:
        pvVar29 = (void *)param_1[0x28];
        pvVar1 = *(void **)PTR_PTR_04bc0668;
        if (pvVar24 != (void *)0x0) {
          pvVar1 = pvVar24;
        }
        if (pvVar29 != pvVar1) {
          lVar19 = 0;
          do {
            if (*(char *)((long)pvVar1 + lVar19) == '\0') {
LAB_03779a40:
              iVar11 = (int)lVar19;
              goto LAB_03779a44;
            }
            if (*(char *)((long)pvVar1 + lVar19 + 1) == '\0') {
              lVar19 = lVar19 + 1;
              goto LAB_03779a40;
            }
            if (*(char *)((long)pvVar1 + lVar19 + 2) == '\0') {
              lVar19 = lVar19 + 2;
              goto LAB_03779a40;
            }
            lVar19 = lVar19 + 3;
          } while (lVar19 != 0x80001);
          iVar11 = 0;
LAB_03779a44:
          if (*(int *)(param_1 + 0x29) <= iVar11) {
            iVar11 = *(int *)(param_1 + 0x29) + -1;
          }
          memcpy(pvVar29,pvVar1,(long)iVar11);
          *(undefined1 *)((long)pvVar29 + (long)iVar11) = 0;
          lVar19 = *(long *)puVar6;
        }
        if (lVar19 == 0) goto LAB_03779cb4;
      }
    }
  }
  puVar7 = PTR_DAT_04bc0678;
  puVar6 = PTR_DAT_04bc0670;
  if (uVar5 < 500) {
    uVar4 = *(ushort *)(lVar19 + (ulong)uVar5 * 2 + 0x620);
    if ((int)*(uint *)(lVar19 + 0x1c0) < 1) {
      if ((((*(long *)(lVar19 + 0xb0) == 0) ||
           (puVar20 = *(uint **)(*(long *)(lVar19 + 0xb0) + 8), puVar20 == (uint *)0x0)) ||
          ((uVar10 = (uint)uVar4, uVar10 < *(uint *)(lVar19 + 200) &&
           (*(char *)(*(long *)(lVar19 + 0xd0) + (ulong)uVar10) == '\0')))) ||
         (((*puVar20 <= uVar10 || (puVar20[1] == 0)) || ((ushort)puVar20[2] == 0))))
      goto LAB_03779cb4;
      iVar11 = 0xc;
      if (*(char *)((long)puVar20 + 10) != '\0') {
        iVar11 = 0x1c;
      }
      puVar20 = (uint *)((ulong)(puVar20[1] * uVar10 + (uint)(ushort)puVar20[2] * 8 + iVar11) +
                        (long)puVar20);
    }
    else {
      if (*(uint *)(lVar19 + 0x1c0) <= (uint)uVar4) goto LAB_03779cb4;
      uVar10 = (uint)uVar4;
      if (*(uint *)(lVar19 + 0x1b0) <= uVar10) {
        uVar10 = 0;
      }
      puVar20 = *(uint **)(*(long *)(lVar19 + 0x1b8) + (ulong)uVar10 * 8);
    }
    if (puVar20 != (uint *)0x0) {
      if (*puVar20 != 0) {
        cVar21 = *PTR_DAT_04bc0670;
        do {
          if (cVar21 == '\0') {
            cVar21 = '\x01';
            *(undefined8 *)puVar7 = 0xffffffffffffffff;
            *(undefined8 *)(puVar7 + 8) = 0xffffffffffffffff;
            *puVar6 = 1;
            *(undefined4 *)(puVar7 + 0x50) = 0xffffffff;
            *(undefined8 *)(puVar7 + 0x10) = 0xffffffffffffffff;
            *(undefined8 *)(puVar7 + 0x18) = 0xffffffffffffffff;
            *(undefined8 *)(puVar7 + 0x20) = 0xffffffffffffffff;
            *(undefined8 *)(puVar7 + 0x28) = 0xffffffffffffffff;
            *(undefined8 *)(puVar7 + 0x30) = 0xffffffffffffffff;
            *(undefined8 *)(puVar7 + 0x38) = 0xffffffffffffffff;
            *(undefined8 *)(puVar7 + 0x40) = 0xffffffffffffffff;
            *(undefined8 *)(puVar7 + 0x48) = 0xffffffffffffffff;
          }
          else {
            uVar10 = *(uint *)(puVar7 + 0x48);
            if (-1 < (int)uVar10) {
              pvVar24 = (void *)((ulong)uVar10 + (long)puVar20);
              goto LAB_03779c18;
            }
            if (uVar10 != 0xffffffff) break;
          }
          puVar25 = (uint *)(ulong)*puVar20;
          pvVar24 = (void *)0x0;
          if ((*puVar20 == 0) || (puVar20 == puVar25)) goto LAB_03779c18;
          lVar19 = 0xc;
          if (*(char *)((long)puVar20 + (10 - (long)puVar25)) != '\0') {
            lVar19 = 0x1c;
          }
          lVar19 = (long)puVar20 + (lVar19 - (long)puVar25);
          if (lVar19 == 0) break;
          uVar27 = (ulong)*(ushort *)((long)puVar20 + (8 - (long)puVar25));
          *(undefined4 *)(puVar7 + 0x48) = 0xfffffffe;
          pvVar24 = (void *)0x0;
          if (uVar27 == 0) goto LAB_03779c18;
          piVar16 = (int *)(lVar19 + 4);
          while (piVar16[-1] != 0x34c8eed5) {
            piVar16 = piVar16 + 2;
            uVar27 = uVar27 - 1;
            if (uVar27 == 0) {
              pvVar24 = (void *)0x0;
              goto LAB_03779c18;
            }
          }
          iVar11 = 0;
          if (*piVar16 != -1) {
            iVar11 = *piVar16;
          }
          *(int *)(puVar7 + 0x48) = iVar11;
        } while (*puVar20 != 0);
      }
      pvVar24 = (void *)0x0;
LAB_03779c18:
      pvVar29 = (void *)param_1[0x2c];
      pvVar1 = *(void **)PTR_PTR_04bc0668;
      if (pvVar24 != (void *)0x0) {
        pvVar1 = pvVar24;
      }
      if (pvVar29 != pvVar1) {
        lVar19 = 0;
        do {
          if (*(char *)((long)pvVar1 + lVar19) == '\0') {
LAB_03779c84:
            iVar11 = (int)lVar19;
            goto LAB_03779c88;
          }
          if (*(char *)((long)pvVar1 + lVar19 + 1) == '\0') {
            lVar19 = lVar19 + 1;
            goto LAB_03779c84;
          }
          if (*(char *)((long)pvVar1 + lVar19 + 2) == '\0') {
            lVar19 = lVar19 + 2;
            goto LAB_03779c84;
          }
          lVar19 = lVar19 + 3;
        } while (lVar19 != 0x80001);
        iVar11 = 0;
LAB_03779c88:
        if (*(int *)(param_1 + 0x2d) <= iVar11) {
          iVar11 = *(int *)(param_1 + 0x2d) + -1;
        }
        memcpy(pvVar29,pvVar1,(long)iVar11);
        *(undefined1 *)((long)pvVar29 + (long)iVar11) = 0;
      }
    }
  }
LAB_03779cb4:
  *(byte *)((long)param_1 + 9) =
       *(byte *)(*(long *)(lVar17 + 0x37c58) + *(long *)(lVar17 + 0x37c50)) & 1;
  puVar6 = PTR_DAT_04bb7648;
  local_d0 = (char *)CONCAT62(local_d0._2_6_,uVar30);
  local_d8 = PTR_DAT_04bb7648 + 0x10;
  lVar19 = FUN_03775b80(&local_d8);
  if (lVar19 == 0) {
    bVar28 = 0;
  }
  else {
    if ((*(long **)(lVar19 + 0xa00) == (long *)0x0) ||
       (puVar12 = (undefined8 *)**(long **)(lVar19 + 0xa00), puVar12 == (undefined8 *)0x0)) {
      uVar10 = 1;
    }
    else {
      uVar10 = (**(code **)*puVar12)();
      uVar10 = uVar10 ^ 1;
    }
    local_70[0] = 0;
    bVar28 = (byte)*(undefined2 *)(*(long *)(lVar19 + 0x9e8) + *(long *)(lVar19 + 0x9e0) + 0x153c) &
             1;
    if ((((uVar10 & 1) == 0) && (*(long *)(lVar19 + 0xa00) != 0)) &&
       (puVar12 = *(undefined8 **)(*(long *)(lVar19 + 0xa00) + 8), puVar12 != (undefined8 *)0x0)) {
      (**(code **)*puVar12)();
    }
  }
  *(byte *)((long)param_1 + 10) = bVar28;
  *(byte *)((long)param_1 + 0xb) = uVar5 == 0xffff & (bVar9 ^ 1);
  local_70[0] = local_70[0] & 0xffff0000;
  FUN_0374a300(local_70,*(undefined1 *)
                         (*(long *)(lVar17 + 0x37c58) + *(long *)(lVar17 + 0x37c50) + 0x32));
  uVar10 = local_70[0] >> 4 & 0xf;
  local_d8 = (undefined *)(CONCAT44(local_d8._4_4_,local_70[0]) & 0xffffffff0000000f);
  if ((uint)local_d8 != 1) {
    uVar10 = 0;
  }
  local_d8 = (undefined *)CONCAT44(local_d8._4_4_,uVar10);
  *(undefined1 *)((long)param_1 + 0xd) = 0;
  *(bool *)((long)param_1 + 0xc) = uVar10 == 2;
  lVar19 = *(long *)PTR_DAT_04bb27f8;
  if (lVar19 != 0) {
    if ((*(long **)(lVar17 + 0x37c70) == (long *)0x0) ||
       (puVar12 = (undefined8 *)**(long **)(lVar17 + 0x37c70), puVar12 == (undefined8 *)0x0)) {
      local_dc[0] = 0;
      FUN_0374a300(local_dc,*(undefined1 *)
                             (*(long *)(lVar17 + 0x37c58) + *(long *)(lVar17 + 0x37c50) + 0x32));
    }
    else {
      uVar27 = (**(code **)*puVar12)();
      local_dc[0] = 0;
      FUN_0374a300(local_dc,*(undefined1 *)
                             (*(long *)(lVar17 + 0x37c58) + *(long *)(lVar17 + 0x37c50) + 0x32));
      if ((((uVar27 & 1) != 0) && (*(long *)(lVar17 + 0x37c70) != 0)) &&
         (puVar12 = *(undefined8 **)(*(long *)(lVar17 + 0x37c70) + 8), puVar12 != (undefined8 *)0x0)
         ) {
        (**(code **)*puVar12)();
      }
    }
    plVar18 = param_1 + 2;
    (**(code **)(*plVar18 + 0x38))(plVar18);
    if ((*(int *)(lVar19 + 0x14) == 0) ||
       ((*(ushort **)PTR_DAT_04bc3a48 != (ushort *)0x0 && ((**(ushort **)PTR_DAT_04bc3a48 & 1) != 0)
        ))) {
      uVar5 = local_dc[0] >> 4 & 0xf;
      if ((local_dc[0] & 0xf) != 1) {
        uVar5 = 0;
      }
      if (uVar5 != 2) {
        local_d8 = puVar6 + 0x10;
        local_d0 = (char *)CONCAT62(local_d0._2_6_,uVar30);
        lVar19 = FUN_0375f980(&local_d8);
        if (lVar19 != 0) {
          if ((*(long **)(lVar19 + 0x1758) == (long *)0x0) ||
             (puVar12 = (undefined8 *)**(long **)(lVar19 + 0x1758), puVar12 == (undefined8 *)0x0)) {
            uVar10 = 1;
          }
          else {
            uVar10 = (**(code **)*puVar12)();
            uVar10 = uVar10 ^ 1;
          }
          local_68 = *(long *)(lVar19 + 0x1740) + *(long *)(lVar19 + 0x1738) + 4;
          local_70[0] = 0x17;
          (**(code **)(*plVar18 + 0x38))(plVar18);
          local_c0 = (undefined8 ****)0x0;
          local_b8 = (undefined8 ***)0x0;
          local_c8 = (undefined8 ****)0x0;
          local_b0 = (undefined8 **)CONCAT71(local_b0._1_7_,1);
          local_b0 = (undefined8 **)((ulong)local_b0 & 0xffffffff);
          local_d8 = PTR_DAT_04bc0cd8 + 0x10;
          local_d0 = (char *)0x0;
          FUN_02906b00(&local_d8,plVar18,local_70);
          if ((((uVar10 & 1) == 0) && (*(long *)(lVar19 + 0x1758) != 0)) &&
             (puVar12 = *(undefined8 **)(*(long *)(lVar19 + 0x1758) + 8),
             puVar12 != (undefined8 *)0x0)) {
            (**(code **)*puVar12)();
          }
        }
      }
    }
    else {
      local_68 = *(long *)(lVar17 + 0x37c58) + *(long *)(lVar17 + 0x37c50) + 4;
      local_70[0] = 0x17;
      (**(code **)(*plVar18 + 0x38))(plVar18);
      local_c0 = (undefined8 ****)0x0;
      local_b8 = (undefined8 ***)0x0;
      local_c8 = (undefined8 ****)0x0;
      local_b0 = (undefined8 **)CONCAT71(local_b0._1_7_,1);
      local_b0 = (undefined8 **)((ulong)local_b0 & 0xffffffff);
      local_d8 = PTR_DAT_04bc0cd8 + 0x10;
      local_d0 = (char *)0x0;
      FUN_02906b00(&local_d8,plVar18,local_70);
    }
  }
  *(undefined2 *)(param_1 + 0x26) =
       *(undefined2 *)(*(long *)(lVar17 + 0x37c58) + *(long *)(lVar17 + 0x37c50) + 2);
  *(undefined2 *)((long)param_1 + 0x132) =
       *(undefined2 *)(*(long *)(lVar17 + 0x36678) + *(long *)(lVar17 + 0x36670) + 2);
  cVar21 = *(char *)(*(long *)(lVar17 + 0x36678) + *(long *)(lVar17 + 0x36670) + 4);
  *(undefined4 *)(param_1 + 0x37) = 0xffffffff;
  *(int *)((long)param_1 + 0x134) = (int)cVar21;
  uVar3 = *(undefined4 *)(*(long *)(lVar17 + 0x37c58) + *(long *)(lVar17 + 0x37c50) + 0x3c);
  *(undefined1 *)(param_1 + 1) = 1;
  *(undefined2 *)param_1 = 0;
  *(undefined1 *)((long)param_1 + 6) = 0;
  *(undefined4 *)((long)param_1 + 2) = 0x101;
  puVar6 = PTR_DAT_04bb2020;
  *(undefined4 *)((long)param_1 + 0x1bc) = uVar3;
  local_d8 = puVar6 + 0x10;
  local_d0 = "IsParty";
  iVar11 = FUN_02758850(&local_d8);
  if (iVar11 != 0) {
    *(undefined1 *)(param_1 + 1) = 0;
    *param_1 = *(undefined8 *)(*(long *)(lVar17 + 0x37c58) + *(long *)(lVar17 + 0x37c50) + 0x34);
  }
  lVar19 = *(long *)(lVar17 + 0x36678) + *(long *)(lVar17 + 0x36670);
  *(undefined1 *)(param_1 + 0x38) = *(undefined1 *)(lVar19 + 5);
  *(undefined1 *)((long)param_1 + 0x1c1) = *(undefined1 *)(lVar19 + 6);
  if ((((local_e0 & 1) != 0) && (*(long *)(lVar17 + 0x37c70) != 0)) &&
     (puVar12 = *(undefined8 **)(*(long *)(lVar17 + 0x37c70) + 8), puVar12 != (undefined8 *)0x0)) {
    (**(code **)*puVar12)();
  }
  if ((((uVar14 & 1) != 0) && (*(long *)(lVar17 + 0x36690) != 0)) &&
     (puVar12 = *(undefined8 **)(*(long *)(lVar17 + 0x36690) + 8), puVar12 != (undefined8 *)0x0)) {
    (**(code **)*puVar12)();
  }
  if ((((uVar13 & 1) != 0) && (*(long *)(lVar17 + 0x36658) != 0)) &&
     (puVar12 = *(undefined8 **)(*(long *)(lVar17 + 0x36658) + 8), puVar12 != (undefined8 *)0x0)) {
    (**(code **)*puVar12)();
  }
  return 1;
}

