
/* WARNING: Removing unreachable block (ram,0x0377cf28) */

undefined8 FUN_0377ce20(undefined8 *param_1)

{
  ushort *puVar1;
  void *pvVar2;
  undefined2 *puVar3;
  ushort uVar4;
  ushort uVar5;
  ushort uVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined *puVar10;
  uint uVar11;
  uint uVar12;
  int iVar13;
  undefined8 *puVar14;
  ulong uVar15;
  ulong uVar16;
  ulong uVar17;
  undefined8 *puVar18;
  int *piVar19;
  short *psVar20;
  long lVar21;
  long *plVar22;
  uint *puVar23;
  char cVar24;
  uint uVar25;
  void *pvVar26;
  uint *puVar27;
  char *pcVar28;
  long lVar29;
  byte bVar30;
  short sVar31;
  undefined2 uVar32;
  long lVar33;
  void *pvVar34;
  long *plVar35;
  uint local_e8;
  uint local_e4;
  undefined *local_e0;
  undefined1 *local_d8;
  undefined8 ****local_d0;
  undefined8 ****local_c8;
  undefined8 ***local_c0;
  undefined8 **local_b8;
  undefined8 *local_b0;
  undefined8 local_a8;
  undefined1 local_a0 [32];
  undefined *local_80;
  short local_78 [4];
  undefined4 local_70 [2];
  long local_68;
  
  puVar8 = PTR_DAT_04bb7648;
  plVar35 = (long *)PTR_DAT_04bb27f8;
  if (param_1 == (undefined8 *)0x0) {
    return 0;
  }
  local_80 = PTR_DAT_04bb7648 + 0x10;
  lVar21 = *(long *)PTR_DAT_04bb27f8;
  if ((((*(ushort **)PTR_DAT_04bc3a48 == (ushort *)0x0) ||
       ((**(ushort **)PTR_DAT_04bc3a48 & 1) == 0)) || (*(long *)PTR_DAT_04bc1530 == 0)) ||
     (lVar29 = *(long *)(*(long *)PTR_DAT_04bc1530 + 8), lVar29 == 0)) {
    psVar20 = (short *)(lVar21 + 0x2c);
    if ((*(ushort *)(lVar21 + 0x28) & 0x40) != 0) {
      psVar20 = (short *)(lVar21 + 0x2a);
    }
    sVar31 = *psVar20;
  }
  else if ((*(long **)(lVar29 + 0x60) == (long *)0x0) ||
          (puVar14 = (undefined8 *)**(long **)(lVar29 + 0x60), puVar14 == (undefined8 *)0x0)) {
    sVar31 = *(short *)(*(long *)(lVar29 + 0x48) + *(long *)(lVar29 + 0x40) + 2);
  }
  else {
    uVar15 = (**(code **)*puVar14)();
    sVar31 = *(short *)(*(long *)(lVar29 + 0x48) + *(long *)(lVar29 + 0x40) + 2);
    if ((((uVar15 & 1) != 0) && (*(long *)(lVar29 + 0x60) != 0)) &&
       (puVar14 = *(undefined8 **)(*(long *)(lVar29 + 0x60) + 8), puVar14 != (undefined8 *)0x0)) {
      (**(code **)*puVar14)();
    }
  }
  lVar21 = *(long *)PTR_DAT_04bb46b0;
  local_78[0] = sVar31;
  if (lVar21 != 0) {
    local_e0 = (undefined *)CONCAT44(local_e0._4_4_,1);
    if ((((*(byte *)(lVar21 + 0x50d) ^ 0xff) & 6) == 0) &&
       (lVar21 = (**(code **)(**(long **)(*(long *)(lVar21 + 0x10) + 0x188) + 0x38))(), lVar21 != 0)
       ) {
      if ((*(long **)(lVar21 + 0x36620) == (long *)0x0) ||
         (puVar14 = (undefined8 *)**(long **)(lVar21 + 0x36620), puVar14 == (undefined8 *)0x0)) {
        uVar15 = 0;
      }
      else {
        uVar15 = (**(code **)*puVar14)();
        uVar15 = uVar15 & 0xffffffff;
      }
      iVar13 = (int)*(char *)(*(long *)(lVar21 + 0x36608) + *(long *)(lVar21 + 0x36600));
      local_e0 = (undefined *)CONCAT44(local_e0._4_4_,iVar13);
      if (iVar13 == 1) {
        if ((*(long **)(lVar21 + 0x36658) == (long *)0x0) ||
           (puVar14 = (undefined8 *)**(long **)(lVar21 + 0x36658), puVar14 == (undefined8 *)0x0)) {
          uVar16 = 0;
        }
        else {
          uVar16 = (**(code **)*puVar14)();
          uVar16 = uVar16 & 0xffffffff;
        }
        lVar29 = *(long *)(lVar21 + 0x36640) + *(long *)(lVar21 + 0x36638);
        psVar20 = (short *)(lVar29 + 0x48b2);
        if ((*(byte *)(lVar29 + 0x48b5) & 1) != 0) {
          psVar20 = (short *)(lVar29 + 0x48b0);
        }
        if (*psVar20 == sVar31) {
          if ((((uVar16 & 1) != 0) && (*(long *)(lVar21 + 0x36658) != 0)) &&
             (puVar14 = *(undefined8 **)(*(long *)(lVar21 + 0x36658) + 8),
             puVar14 != (undefined8 *)0x0)) {
            (**(code **)*puVar14)();
          }
          if ((((uVar15 & 1) != 0) && (*(long *)(lVar21 + 0x36620) != 0)) &&
             (puVar14 = *(undefined8 **)(*(long *)(lVar21 + 0x36620) + 8),
             puVar14 != (undefined8 *)0x0)) {
            (**(code **)*puVar14)();
          }
        }
        else {
          uVar17 = FUN_03770770(local_78,0);
          if ((((uVar16 & 1) != 0) && (*(long *)(lVar21 + 0x36658) != 0)) &&
             (puVar14 = *(undefined8 **)(*(long *)(lVar21 + 0x36658) + 8),
             puVar14 != (undefined8 *)0x0)) {
            (**(code **)*puVar14)();
          }
          if ((((uVar15 & 1) != 0) && (*(long *)(lVar21 + 0x36620) != 0)) &&
             (puVar14 = *(undefined8 **)(*(long *)(lVar21 + 0x36620) + 8),
             puVar14 != (undefined8 *)0x0)) {
            (**(code **)*puVar14)();
          }
          if ((uVar17 & 1) == 0) goto LAB_0377d0d0;
        }
        uVar15 = FUN_03779330(param_1);
        if ((uVar15 & 1) != 0) {
          return 1;
        }
      }
      else if ((((uVar15 & 1) != 0) && (*(long *)(lVar21 + 0x36620) != 0)) &&
              (puVar14 = *(undefined8 **)(*(long *)(lVar21 + 0x36620) + 8),
              puVar14 != (undefined8 *)0x0)) {
        (**(code **)*puVar14)();
      }
    }
  }
LAB_0377d0d0:
  lVar21 = FUN_03762b90(&local_80);
  if (lVar21 == 0) {
    return 0;
  }
  if ((*(long **)(lVar21 + 0x60) == (long *)0x0) ||
     (puVar14 = (undefined8 *)**(long **)(lVar21 + 0x60), puVar14 == (undefined8 *)0x0)) {
    uVar11 = 0;
    plVar22 = *(long **)(lVar21 + 0x1758);
    uVar12 = 0;
    if (plVar22 != (long *)0x0) goto LAB_0377d118;
LAB_0377d134:
    local_e4 = 0;
  }
  else {
    uVar11 = (**(code **)*puVar14)();
    plVar22 = *(long **)(lVar21 + 0x1758);
    uVar12 = uVar11;
    if (plVar22 == (long *)0x0) goto LAB_0377d134;
LAB_0377d118:
    uVar11 = uVar12;
    if ((undefined8 *)*plVar22 == (undefined8 *)0x0) goto LAB_0377d134;
    local_e4 = (*(code *)**(undefined8 **)*plVar22)();
  }
  if ((*(long **)(lVar21 + 0x1790) == (long *)0x0) ||
     (puVar14 = (undefined8 *)**(long **)(lVar21 + 0x1790), puVar14 == (undefined8 *)0x0)) {
    local_e8 = 0;
  }
  else {
    local_e8 = (**(code **)*puVar14)();
  }
  local_c0 = &local_b8;
  local_b8 = &local_b0;
  *(undefined1 *)param_1[0x28] = 0;
  *(undefined1 *)param_1[0x2c] = 0;
  *(undefined1 *)param_1[0x30] = 0;
  *(undefined1 *)param_1[0x34] = 0;
  puVar1 = (ushort *)(*(long *)(lVar21 + 0x48) + *(long *)(lVar21 + 0x40));
  uVar4 = puVar1[2];
  local_d0 = &local_c0;
  local_e0 = (undefined *)0x0;
  local_d8 = (undefined1 *)0x0;
  local_b0 = &local_a8;
  local_a8 = 0;
  uVar5 = uVar4;
  uVar6 = puVar1[1];
  if (uVar4 != 0xffff && (*puVar1 & 1) == 0) {
    uVar5 = puVar1[1];
    uVar6 = uVar4;
  }
  local_70[0] = CONCAT22(local_70[0]._2_2_,uVar6);
  if (local_a0 != (undefined1 *)0x0) {
    local_e0 = (undefined *)0x400000000;
    local_d8 = local_a0;
  }
  local_c8 = local_d0;
  uVar15 = FUN_03770770(local_70,&local_e0);
  puVar10 = PTR_DAT_04bc0678;
  puVar9 = PTR_DAT_04bc0670;
  puVar7 = PTR_DAT_04bb4958;
  if ((uVar15 & 1) != 0) {
    uVar12 = (uint)local_e0;
    if (3 < (int)(uint)local_e0) {
      uVar12 = 4;
    }
    if ((0 < (int)(uint)local_e0) && (lVar29 = *(long *)PTR_DAT_04bb4958, lVar29 != 0)) {
      uVar15 = 0;
      if ((int)uVar12 < 2) {
        uVar12 = 1;
      }
      puVar14 = (undefined8 *)PTR_PTR_04bc0668;
      pcVar28 = PTR_DAT_04bc0670;
      puVar18 = (undefined8 *)PTR_DAT_04bc0678;
      do {
        if ((lVar29 != 0) && ((ulong)**(ushort **)(local_d8 + uVar15 * 8) < 500)) {
          uVar5 = *(ushort *)(lVar29 + (ulong)**(ushort **)(local_d8 + uVar15 * 8) * 2 + 0x620);
          if ((int)*(uint *)(lVar29 + 0x1c0) < 1) {
            if ((((*(long *)(lVar29 + 0xb0) != 0) &&
                 (puVar23 = *(uint **)(*(long *)(lVar29 + 0xb0) + 8), puVar23 != (uint *)0x0)) &&
                ((uVar25 = (uint)uVar5, *(uint *)(lVar29 + 200) <= uVar25 ||
                 (*(char *)(*(long *)(lVar29 + 0xd0) + (ulong)uVar25) != '\0')))) &&
               (((uVar25 < *puVar23 && (puVar23[1] != 0)) && ((ushort)puVar23[2] != 0)))) {
              iVar13 = 0xc;
              if (*(char *)((long)puVar23 + 10) != '\0') {
                iVar13 = 0x1c;
              }
              puVar23 = (uint *)((ulong)(puVar23[1] * uVar25 + (uint)(ushort)puVar23[2] * 8 + iVar13
                                        ) + (long)puVar23);
              goto joined_r0x0377d444;
            }
          }
          else if ((uint)uVar5 < *(uint *)(lVar29 + 0x1c0)) {
            uVar25 = (uint)uVar5;
            if (*(uint *)(lVar29 + 0x1b0) <= uVar25) {
              uVar25 = 0;
            }
            puVar23 = *(uint **)(*(long *)(lVar29 + 0x1b8) + (ulong)uVar25 * 8);
joined_r0x0377d444:
            if (puVar23 != (uint *)0x0) {
              if (*puVar23 != 0) {
                cVar24 = *pcVar28;
                do {
                  if (cVar24 == '\0') {
                    cVar24 = '\x01';
                    *pcVar28 = '\x01';
                    *puVar18 = 0xffffffffffffffff;
                    puVar18[1] = 0xffffffffffffffff;
                    *(undefined4 *)(puVar18 + 10) = 0xffffffff;
                    puVar18[2] = 0xffffffffffffffff;
                    puVar18[3] = 0xffffffffffffffff;
                    puVar18[4] = 0xffffffffffffffff;
                    puVar18[5] = 0xffffffffffffffff;
                    puVar18[6] = 0xffffffffffffffff;
                    puVar18[7] = 0xffffffffffffffff;
                    puVar18[8] = 0xffffffffffffffff;
                    puVar18[9] = 0xffffffffffffffff;
                  }
                  else {
                    uVar25 = *(uint *)(puVar18 + 9);
                    if (-1 < (int)uVar25) {
                      pvVar26 = (void *)((ulong)uVar25 + (long)puVar23);
                      goto LAB_0377d388;
                    }
                    if (uVar25 != 0xffffffff) break;
                  }
                  puVar27 = (uint *)(ulong)*puVar23;
                  pvVar26 = (void *)0x0;
                  if ((*puVar23 == 0) || (puVar23 == puVar27)) goto LAB_0377d388;
                  lVar29 = 0xc;
                  if (*(char *)((long)puVar23 + (10 - (long)puVar27)) != '\0') {
                    lVar29 = 0x1c;
                  }
                  lVar29 = (long)puVar23 + (lVar29 - (long)puVar27);
                  if (lVar29 == 0) break;
                  uVar16 = (ulong)*(ushort *)((long)puVar23 + (8 - (long)puVar27));
                  *(undefined4 *)(puVar18 + 9) = 0xfffffffe;
                  pvVar26 = (void *)0x0;
                  if (uVar16 == 0) goto LAB_0377d388;
                  piVar19 = (int *)(lVar29 + 4);
                  while (piVar19[-1] != 0x34c8eed5) {
                    piVar19 = piVar19 + 2;
                    uVar16 = uVar16 - 1;
                    if (uVar16 == 0) {
                      pvVar26 = (void *)0x0;
                      goto LAB_0377d388;
                    }
                  }
                  iVar13 = 0;
                  if (*piVar19 != -1) {
                    iVar13 = *piVar19;
                  }
                  *(int *)(puVar18 + 9) = iVar13;
                } while (*puVar23 != 0);
              }
              pvVar26 = (void *)0x0;
LAB_0377d388:
              pvVar34 = (void *)param_1[uVar15 * 4 + 0x28];
              pvVar2 = (void *)*puVar14;
              if (pvVar26 != (void *)0x0) {
                pvVar2 = pvVar26;
              }
              if (pvVar34 != pvVar2) {
                lVar29 = 0;
                do {
                  if (*(char *)((long)pvVar2 + lVar29) == '\0') {
LAB_0377d458:
                    iVar13 = (int)lVar29;
                    goto LAB_0377d45c;
                  }
                  if (*(char *)((long)pvVar2 + lVar29 + 1) == '\0') {
                    lVar29 = lVar29 + 1;
                    goto LAB_0377d458;
                  }
                  if (*(char *)((long)pvVar2 + lVar29 + 2) == '\0') {
                    lVar29 = lVar29 + 2;
                    goto LAB_0377d458;
                  }
                  lVar29 = lVar29 + 3;
                } while (lVar29 != 0x80001);
                iVar13 = 0;
LAB_0377d45c:
                if (*(int *)(param_1 + uVar15 * 4 + 0x29) <= iVar13) {
                  iVar13 = *(int *)(param_1 + uVar15 * 4 + 0x29) + -1;
                }
                memcpy(pvVar34,pvVar2,(long)iVar13);
                *(undefined1 *)((long)pvVar34 + (long)iVar13) = 0;
                puVar18 = (undefined8 *)PTR_DAT_04bc0678;
                puVar14 = (undefined8 *)PTR_PTR_04bc0668;
                pcVar28 = PTR_DAT_04bc0670;
                plVar35 = (long *)PTR_DAT_04bb27f8;
              }
            }
          }
        }
        uVar15 = uVar15 + 1;
        if (uVar15 == uVar12) break;
        lVar29 = *(long *)puVar7;
      } while( true );
    }
    goto LAB_0377d93c;
  }
  lVar29 = *(long *)PTR_DAT_04bb4958;
  if (lVar29 == 0) goto LAB_0377d93c;
  if (uVar6 < 500) {
    uVar4 = *(ushort *)(lVar29 + (ulong)uVar6 * 2 + 0x620);
    if ((int)*(uint *)(lVar29 + 0x1c0) < 1) {
      if ((((*(long *)(lVar29 + 0xb0) != 0) &&
           (puVar23 = *(uint **)(*(long *)(lVar29 + 0xb0) + 8), puVar23 != (uint *)0x0)) &&
          ((uVar12 = (uint)uVar4, *(uint *)(lVar29 + 200) <= uVar12 ||
           (*(char *)(*(long *)(lVar29 + 0xd0) + (ulong)uVar12) != '\0')))) &&
         (((uVar12 < *puVar23 && (puVar23[1] != 0)) && ((ushort)puVar23[2] != 0)))) {
        iVar13 = 0xc;
        if (*(char *)((long)puVar23 + 10) != '\0') {
          iVar13 = 0x1c;
        }
        puVar23 = (uint *)((ulong)(puVar23[1] * uVar12 + (uint)(ushort)puVar23[2] * 8 + iVar13) +
                          (long)puVar23);
        goto joined_r0x0377d6cc;
      }
    }
    else if ((uint)uVar4 < *(uint *)(lVar29 + 0x1c0)) {
      uVar12 = (uint)uVar4;
      if (*(uint *)(lVar29 + 0x1b0) <= uVar12) {
        uVar12 = 0;
      }
      puVar23 = *(uint **)(*(long *)(lVar29 + 0x1b8) + (ulong)uVar12 * 8);
joined_r0x0377d6cc:
      if (puVar23 != (uint *)0x0) {
        if (*puVar23 != 0) {
          cVar24 = *PTR_DAT_04bc0670;
          do {
            if (cVar24 == '\0') {
              cVar24 = '\x01';
              *(undefined8 *)puVar10 = 0xffffffffffffffff;
              *(undefined8 *)(puVar10 + 8) = 0xffffffffffffffff;
              *puVar9 = 1;
              *(undefined4 *)(puVar10 + 0x50) = 0xffffffff;
              *(undefined8 *)(puVar10 + 0x10) = 0xffffffffffffffff;
              *(undefined8 *)(puVar10 + 0x18) = 0xffffffffffffffff;
              *(undefined8 *)(puVar10 + 0x20) = 0xffffffffffffffff;
              *(undefined8 *)(puVar10 + 0x28) = 0xffffffffffffffff;
              *(undefined8 *)(puVar10 + 0x30) = 0xffffffffffffffff;
              *(undefined8 *)(puVar10 + 0x38) = 0xffffffffffffffff;
              *(undefined8 *)(puVar10 + 0x40) = 0xffffffffffffffff;
              *(undefined8 *)(puVar10 + 0x48) = 0xffffffffffffffff;
            }
            else {
              uVar12 = *(uint *)(puVar10 + 0x48);
              if (-1 < (int)uVar12) {
                pvVar26 = (void *)((ulong)uVar12 + (long)puVar23);
                goto LAB_0377d604;
              }
              if (uVar12 != 0xffffffff) break;
            }
            puVar27 = (uint *)(ulong)*puVar23;
            pvVar26 = (void *)0x0;
            if ((*puVar23 == 0) || (puVar23 == puVar27)) goto LAB_0377d604;
            lVar33 = 0xc;
            if (*(char *)((long)puVar23 + (10 - (long)puVar27)) != '\0') {
              lVar33 = 0x1c;
            }
            lVar33 = (long)puVar23 + (lVar33 - (long)puVar27);
            if (lVar33 == 0) break;
            uVar15 = (ulong)*(ushort *)((long)puVar23 + (8 - (long)puVar27));
            *(undefined4 *)(puVar10 + 0x48) = 0xfffffffe;
            pvVar26 = (void *)0x0;
            if (uVar15 == 0) goto LAB_0377d604;
            piVar19 = (int *)(lVar33 + 4);
            while (piVar19[-1] != 0x34c8eed5) {
              piVar19 = piVar19 + 2;
              uVar15 = uVar15 - 1;
              if (uVar15 == 0) {
                pvVar26 = (void *)0x0;
                goto LAB_0377d604;
              }
            }
            iVar13 = 0;
            if (*piVar19 != -1) {
              iVar13 = *piVar19;
            }
            *(int *)(puVar10 + 0x48) = iVar13;
          } while (*puVar23 != 0);
        }
        pvVar26 = (void *)0x0;
LAB_0377d604:
        pvVar34 = (void *)param_1[0x28];
        pvVar2 = *(void **)PTR_PTR_04bc0668;
        if (pvVar26 != (void *)0x0) {
          pvVar2 = pvVar26;
        }
        if (pvVar34 != pvVar2) {
          lVar29 = 0;
          do {
            if (*(char *)((long)pvVar2 + lVar29) == '\0') {
LAB_0377d6e0:
              iVar13 = (int)lVar29;
              goto LAB_0377d6e4;
            }
            if (*(char *)((long)pvVar2 + lVar29 + 1) == '\0') {
              lVar29 = lVar29 + 1;
              goto LAB_0377d6e0;
            }
            if (*(char *)((long)pvVar2 + lVar29 + 2) == '\0') {
              lVar29 = lVar29 + 2;
              goto LAB_0377d6e0;
            }
            lVar29 = lVar29 + 3;
          } while (lVar29 != 0x80001);
          iVar13 = 0;
LAB_0377d6e4:
          if (*(int *)(param_1 + 0x29) <= iVar13) {
            iVar13 = *(int *)(param_1 + 0x29) + -1;
          }
          memcpy(pvVar34,pvVar2,(long)iVar13);
          *(undefined1 *)((long)pvVar34 + (long)iVar13) = 0;
          lVar29 = *(long *)puVar7;
        }
        if (lVar29 == 0) goto LAB_0377d93c;
      }
    }
  }
  puVar9 = PTR_DAT_04bc0678;
  puVar7 = PTR_DAT_04bc0670;
  if (uVar5 < 500) {
    uVar5 = *(ushort *)(lVar29 + (ulong)uVar5 * 2 + 0x620);
    if ((int)*(uint *)(lVar29 + 0x1c0) < 1) {
      if ((((*(long *)(lVar29 + 0xb0) == 0) ||
           (puVar23 = *(uint **)(*(long *)(lVar29 + 0xb0) + 8), puVar23 == (uint *)0x0)) ||
          ((uVar12 = (uint)uVar5, uVar12 < *(uint *)(lVar29 + 200) &&
           (*(char *)(*(long *)(lVar29 + 0xd0) + (ulong)uVar12) == '\0')))) ||
         (((*puVar23 <= uVar12 || (puVar23[1] == 0)) || ((ushort)puVar23[2] == 0))))
      goto LAB_0377d93c;
      iVar13 = 0xc;
      if (*(char *)((long)puVar23 + 10) != '\0') {
        iVar13 = 0x1c;
      }
      puVar23 = (uint *)((ulong)(puVar23[1] * uVar12 + (uint)(ushort)puVar23[2] * 8 + iVar13) +
                        (long)puVar23);
    }
    else {
      if (*(uint *)(lVar29 + 0x1c0) <= (uint)uVar5) goto LAB_0377d93c;
      uVar12 = (uint)uVar5;
      if (*(uint *)(lVar29 + 0x1b0) <= uVar12) {
        uVar12 = 0;
      }
      puVar23 = *(uint **)(*(long *)(lVar29 + 0x1b8) + (ulong)uVar12 * 8);
    }
    if (puVar23 != (uint *)0x0) {
      if (*puVar23 != 0) {
        cVar24 = *PTR_DAT_04bc0670;
        do {
          if (cVar24 == '\0') {
            cVar24 = '\x01';
            *(undefined8 *)puVar9 = 0xffffffffffffffff;
            *(undefined8 *)(puVar9 + 8) = 0xffffffffffffffff;
            *puVar7 = 1;
            *(undefined4 *)(puVar9 + 0x50) = 0xffffffff;
            *(undefined8 *)(puVar9 + 0x10) = 0xffffffffffffffff;
            *(undefined8 *)(puVar9 + 0x18) = 0xffffffffffffffff;
            *(undefined8 *)(puVar9 + 0x20) = 0xffffffffffffffff;
            *(undefined8 *)(puVar9 + 0x28) = 0xffffffffffffffff;
            *(undefined8 *)(puVar9 + 0x30) = 0xffffffffffffffff;
            *(undefined8 *)(puVar9 + 0x38) = 0xffffffffffffffff;
            *(undefined8 *)(puVar9 + 0x40) = 0xffffffffffffffff;
            *(undefined8 *)(puVar9 + 0x48) = 0xffffffffffffffff;
          }
          else {
            uVar12 = *(uint *)(puVar9 + 0x48);
            if (-1 < (int)uVar12) {
              pvVar26 = (void *)((ulong)uVar12 + (long)puVar23);
              goto LAB_0377d834;
            }
            if (uVar12 != 0xffffffff) break;
          }
          puVar27 = (uint *)(ulong)*puVar23;
          pvVar26 = (void *)0x0;
          if ((*puVar23 == 0) || (puVar23 == puVar27)) goto LAB_0377d834;
          lVar29 = 0xc;
          if (*(char *)((long)puVar23 + (10 - (long)puVar27)) != '\0') {
            lVar29 = 0x1c;
          }
          lVar29 = (long)puVar23 + (lVar29 - (long)puVar27);
          if (lVar29 == 0) break;
          uVar15 = (ulong)*(ushort *)((long)puVar23 + (8 - (long)puVar27));
          *(undefined4 *)(puVar9 + 0x48) = 0xfffffffe;
          pvVar26 = (void *)0x0;
          if (uVar15 == 0) goto LAB_0377d834;
          piVar19 = (int *)(lVar29 + 4);
          while (piVar19[-1] != 0x34c8eed5) {
            piVar19 = piVar19 + 2;
            uVar15 = uVar15 - 1;
            if (uVar15 == 0) {
              pvVar26 = (void *)0x0;
              goto LAB_0377d834;
            }
          }
          iVar13 = 0;
          if (*piVar19 != -1) {
            iVar13 = *piVar19;
          }
          *(int *)(puVar9 + 0x48) = iVar13;
        } while (*puVar23 != 0);
      }
      pvVar26 = (void *)0x0;
LAB_0377d834:
      pvVar34 = (void *)param_1[0x2c];
      pvVar2 = *(void **)PTR_PTR_04bc0668;
      if (pvVar26 != (void *)0x0) {
        pvVar2 = pvVar26;
      }
      if (pvVar34 != pvVar2) {
        lVar29 = 0;
        do {
          if (*(char *)((long)pvVar2 + lVar29) == '\0') {
LAB_0377d910:
            iVar13 = (int)lVar29;
            goto LAB_0377d914;
          }
          if (*(char *)((long)pvVar2 + lVar29 + 1) == '\0') {
            lVar29 = lVar29 + 1;
            goto LAB_0377d910;
          }
          if (*(char *)((long)pvVar2 + lVar29 + 2) == '\0') {
            lVar29 = lVar29 + 2;
            goto LAB_0377d910;
          }
          lVar29 = lVar29 + 3;
        } while (lVar29 != 0x80001);
        iVar13 = 0;
LAB_0377d914:
        if (*(int *)(param_1 + 0x2d) <= iVar13) {
          iVar13 = *(int *)(param_1 + 0x2d) + -1;
        }
        memcpy(pvVar34,pvVar2,(long)iVar13);
        *(undefined1 *)((long)pvVar34 + (long)iVar13) = 0;
      }
    }
  }
LAB_0377d93c:
  *(undefined1 *)(param_1 + 1) = 0;
  local_e0 = puVar8 + 0x10;
  *(byte *)((long)param_1 + 9) =
       *(byte *)(*(long *)(lVar21 + 0x1740) + *(long *)(lVar21 + 0x1738)) & 1;
  lVar29 = *plVar35;
  if (((*(ushort **)PTR_DAT_04bc3a48 == (ushort *)0x0) || ((**(ushort **)PTR_DAT_04bc3a48 & 1) == 0)
      ) || ((*(long *)PTR_DAT_04bc1530 == 0 ||
            (lVar33 = *(long *)(*(long *)PTR_DAT_04bc1530 + 8), lVar33 == 0)))) {
    puVar3 = (undefined2 *)(lVar29 + 0x2c);
    if ((*(ushort *)(lVar29 + 0x28) & 0x40) != 0) {
      puVar3 = (undefined2 *)(lVar29 + 0x2a);
    }
    uVar32 = *puVar3;
  }
  else if ((*(long **)(lVar33 + 0x60) == (long *)0x0) ||
          (puVar14 = (undefined8 *)**(long **)(lVar33 + 0x60), puVar14 == (undefined8 *)0x0)) {
    uVar32 = *(undefined2 *)(*(long *)(lVar33 + 0x48) + *(long *)(lVar33 + 0x40) + 2);
  }
  else {
    uVar15 = (**(code **)*puVar14)();
    uVar32 = *(undefined2 *)(*(long *)(lVar33 + 0x48) + *(long *)(lVar33 + 0x40) + 2);
    if ((((uVar15 & 1) != 0) && (*(long *)(lVar33 + 0x60) != 0)) &&
       (puVar14 = *(undefined8 **)(*(long *)(lVar33 + 0x60) + 8), puVar14 != (undefined8 *)0x0)) {
      (**(code **)*puVar14)();
    }
  }
  local_d8 = (undefined1 *)CONCAT62(local_d8._2_6_,uVar32);
  lVar29 = FUN_03775b80(&local_e0);
  if (lVar29 == 0) {
    bVar30 = 0;
  }
  else {
    if ((*(long **)(lVar29 + 0xa00) == (long *)0x0) ||
       (puVar14 = (undefined8 *)**(long **)(lVar29 + 0xa00), puVar14 == (undefined8 *)0x0)) {
      uVar12 = 1;
    }
    else {
      uVar12 = (**(code **)*puVar14)();
      uVar12 = uVar12 ^ 1;
    }
    local_70[0] = 0;
    bVar30 = (byte)*(undefined2 *)(*(long *)(lVar29 + 0x9e8) + *(long *)(lVar29 + 0x9e0) + 0x153c) &
             1;
    if ((((uVar12 & 1) == 0) && (*(long *)(lVar29 + 0xa00) != 0)) &&
       (puVar14 = *(undefined8 **)(*(long *)(lVar29 + 0xa00) + 8), puVar14 != (undefined8 *)0x0)) {
      (**(code **)*puVar14)();
    }
  }
  *(byte *)((long)param_1 + 10) = bVar30;
  bVar30 = *(byte *)(*(long *)(lVar21 + 0x1778) + *(long *)(lVar21 + 6000));
  *(undefined2 *)((long)param_1 + 0xc) = 0;
  local_70[0] = 0x17;
  *(byte *)((long)param_1 + 10) = bVar30 >> 2 & 1;
  local_68 = *(long *)(lVar21 + 0x1740) + *(long *)(lVar21 + 0x1738) + 4;
  plVar35 = param_1 + 2;
  (**(code **)(*plVar35 + 0x38))(plVar35);
  local_c8 = (undefined8 ****)0x0;
  local_c0 = (undefined8 ***)0x0;
  local_d0 = (undefined8 ****)0x0;
  local_b8 = (undefined8 **)CONCAT71(local_b8._1_7_,1);
  local_b8 = (undefined8 **)((ulong)local_b8 & 0xffffffff);
  local_e0 = PTR_DAT_04bc0cd8 + 0x10;
  local_d8 = (undefined1 *)0x0;
  FUN_02906b00(&local_e0,plVar35,local_70);
  psVar20 = (short *)(**(code **)(*plVar35 + 0x18))(plVar35);
  iVar13 = (**(code **)(*plVar35 + 0x20))(plVar35);
  if ((((psVar20 == (short *)0x0) || (iVar13 == 0)) || (*psVar20 == 0)) &&
     (*(char *)((long)param_1 + 9) != '\0')) {
    *(undefined1 *)((long)param_1 + 9) = 0;
  }
  *(undefined2 *)(param_1 + 0x26) =
       *(undefined2 *)(*(long *)(lVar21 + 0x1740) + *(long *)(lVar21 + 0x1738) + 2);
  *(undefined2 *)((long)param_1 + 0x132) =
       *(undefined2 *)(*(long *)(lVar21 + 0x1778) + *(long *)(lVar21 + 6000) + 2);
  *(int *)((long)param_1 + 0x134) =
       (int)*(char *)(*(long *)(lVar21 + 0x1778) + *(long *)(lVar21 + 6000) + 4);
  *(undefined4 *)((long)param_1 + 0x1bc) =
       *(undefined4 *)(*(long *)(lVar21 + 0x1740) + *(long *)(lVar21 + 0x1738) + 0x3c);
  *param_1 = *(undefined8 *)(*(long *)(lVar21 + 0x1740) + *(long *)(lVar21 + 0x1738) + 0x34);
  lVar29 = *(long *)(lVar21 + 0x1778) + *(long *)(lVar21 + 6000);
  *(undefined1 *)(param_1 + 0x38) = *(undefined1 *)(lVar29 + 5);
  *(undefined1 *)((long)param_1 + 0x1c1) = *(undefined1 *)(lVar29 + 6);
  if ((((local_e8 & 1) != 0) && (*(long *)(lVar21 + 0x1790) != 0)) &&
     (puVar14 = *(undefined8 **)(*(long *)(lVar21 + 0x1790) + 8), puVar14 != (undefined8 *)0x0)) {
    (**(code **)*puVar14)();
  }
  if ((((local_e4 & 1) != 0) && (*(long *)(lVar21 + 0x1758) != 0)) &&
     (puVar14 = *(undefined8 **)(*(long *)(lVar21 + 0x1758) + 8), puVar14 != (undefined8 *)0x0)) {
    (**(code **)*puVar14)();
  }
  if ((((uVar11 & 1) != 0) && (*(long *)(lVar21 + 0x60) != 0)) &&
     (puVar14 = *(undefined8 **)(*(long *)(lVar21 + 0x60) + 8), puVar14 != (undefined8 *)0x0)) {
    (**(code **)*puVar14)();
  }
  return 1;
}

