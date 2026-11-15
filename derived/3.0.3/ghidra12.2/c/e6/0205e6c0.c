
void FUN_0205e6c0(undefined8 *param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  ulong uVar4;
  char *__src;
  uint uVar5;
  uint *puVar6;
  int iVar7;
  uint uVar8;
  ulong uVar9;
  long lVar10;
  undefined8 *puVar11;
  uint *puVar12;
  long lVar13;
  char cVar14;
  int *piVar15;
  char *pcVar16;
  long lVar17;
  ulong uVar18;
  long lVar19;
  uint local_13c;
  byte local_12c [4];
  uint local_128;
  uint local_124;
  undefined *local_120;
  char *pcStack_118;
  undefined4 local_110;
  char local_10c [7];
  undefined1 local_105;
  byte local_fc [4];
  uint local_f8 [38];
  
  *(undefined4 *)(param_1 + 0x11) = 0;
  local_f8[0x1e] = 0;
  local_f8[0x1f] = 0;
  local_f8[0x20] = 0;
  local_f8[0x21] = 0;
  local_f8[0x14] = 0;
  local_f8[0x15] = 0;
  *param_1 = 0;
  local_f8[0x22] = 0;
  local_f8[0x1a] = 0;
  local_f8[0x1b] = 0;
  local_f8[0x1c] = 0;
  local_f8[0x1d] = 0;
  local_f8[0x16] = 0;
  local_f8[0x17] = 0;
  local_f8[0x18] = 0;
  local_f8[0x19] = 0;
  param_1[0xf] = 0;
  param_1[0x10] = 0;
  param_1[0xd] = 0;
  param_1[0xe] = 0;
  param_1[0xb] = 0;
  param_1[0xc] = 0;
  param_1[9] = 0;
  param_1[10] = 0;
  param_1[7] = 0;
  param_1[8] = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  local_f8[0x10] = 0;
  local_f8[0x11] = 0;
  local_f8[0x12] = 0;
  local_f8[0x13] = 0;
  local_f8[0xc] = 0;
  local_f8[0xd] = 0;
  local_f8[0xe] = 0;
  local_f8[0xf] = 0;
  local_f8[8] = 0;
  local_f8[9] = 0;
  local_f8[10] = 0;
  local_f8[0xb] = 0;
  local_f8[4] = 0;
  local_f8[5] = 0;
  local_f8[6] = 0;
  local_f8[7] = 0;
  local_f8[0] = 0;
  local_f8[1] = 0;
  local_f8[2] = 0;
  local_f8[3] = 0;
  FUN_0252d11c(local_fc);
  lVar10 = *(long *)PTR_DAT_04bb46b0;
  if (lVar10 != 0) {
    puVar11 = *(undefined8 **)(lVar10 + 0x10);
    if ((*(byte *)(lVar10 + 0x453) & 1) == 0) {
      lVar10 = (**(code **)(*(long *)*puVar11 + 0x38))();
      if (lVar10 == 0) {
        return;
      }
      lVar10 = lVar10 + 0x70;
    }
    else {
      if (puVar11 == (undefined8 *)0x0) {
        return;
      }
      if ((long *)puVar11[0x26] == (long *)0x0) {
        return;
      }
      lVar10 = (**(code **)(*(long *)puVar11[0x26] + 0x38))();
      if (lVar10 == 0) {
        return;
      }
    }
    if ((*(long **)(lVar10 + 0xd0) == (long *)0x0) ||
       (puVar11 = (undefined8 *)**(long **)(lVar10 + 0xd0), puVar11 == (undefined8 *)0x0)) {
      local_13c = 0;
    }
    else {
      local_13c = (**(code **)*puVar11)();
    }
    puVar3 = PTR_DAT_04bb2020;
    lVar17 = 0x1267c;
    uVar18 = 0;
    puVar1 = PTR_DAT_04bb2020 + 0x10;
    puVar2 = PTR_DAT_04bb3768 + 0x10;
    do {
      pcStack_118 = "HasAcquaintanceship";
      local_120 = puVar1;
      iVar7 = FUN_02746c30(uVar18 & 0xffffffff,local_fc,&local_120);
      if (iVar7 != 0) {
        local_120 = puVar3 + 0x10;
        pcStack_118 = "MoveInCompletion";
        iVar7 = FUN_02749340(*(long *)(lVar10 + 0xb8) + *(long *)(lVar10 + 0xb0) + lVar17,&local_120
                            );
        if (iVar7 != 0) {
          local_105 = 0;
          local_110 = 8;
          local_10c[0] = '\0';
          local_120 = puVar2;
          pcStack_118 = local_10c;
          uVar9 = FUN_021d7c00(&local_120,uVar18 & 0xffffffff);
          if ((uVar9 & 1) != 0) {
            local_124 = 0;
            uVar9 = FUN_020fc100(&local_124,&local_128,&local_120);
            if (((uVar9 & 1) != 0) && (uVar9 = (ulong)local_124, local_128 < 0x20)) {
              if (0x22 < local_124) {
                uVar9 = 0;
              }
              local_f8[uVar9] = local_f8[uVar9] | 1 << (ulong)(local_128 & 0x1f);
            }
          }
        }
      }
      uVar18 = uVar18 + 1;
      lVar17 = lVar17 + 0x13230;
    } while (uVar18 != 10);
    if (7 < local_fc[0]) {
      local_fc[0] = 0xff;
    }
    local_12c[0] = local_fc[0];
    lVar17 = FUN_025830c0(*(undefined8 *)PTR_DAT_04bb4f78,local_12c,1);
    if (lVar17 != 0) {
      if (*(long **)(lVar17 + 0x17f68) == (long *)0x0) {
        uVar18 = 0;
      }
      else {
        puVar11 = (undefined8 *)**(long **)(lVar17 + 0x17f68);
        uVar18 = 0;
        if (puVar11 != (undefined8 *)0x0) {
          uVar18 = (**(code **)*puVar11)();
        }
      }
      puVar1 = PTR_DAT_04bb40b8;
      lVar19 = *(long *)PTR_DAT_04bb4138;
      if (lVar19 != 0) {
        puVar2 = PTR_DAT_04bb3768 + 0x10;
        puVar3 = PTR_DAT_04bb6a30 + 0x10;
        uVar9 = 0;
        do {
          uVar4 = uVar9 + 1;
          uVar8 = FUN_021f55b0(uVar4 & 0xffffffff);
          if (((-1 < (int)uVar8) &&
              (lVar13 = *(long *)(lVar10 + 0xb8) + *(long *)(lVar10 + 0xb0) + 0x1cb6bc,
              *(char *)(lVar13 + uVar9 * 0xe8 + 4) != '\0')) &&
             (iVar7 = FUN_027c56e8(lVar13 + uVar9 * 0xe8,
                                   *(long *)(lVar17 + 0x17f50) + *(long *)(lVar17 + 0x17f48)),
             -1 < iVar7)) {
            if ((int)*(uint *)(lVar19 + 0x1c0) < 1) {
              if (((((*(long *)(lVar19 + 0xb0) != 0) &&
                    (puVar12 = *(uint **)(*(long *)(lVar19 + 0xb0) + 8), puVar12 != (uint *)0x0)) &&
                   ((*(uint *)(lVar19 + 200) <= uVar8 ||
                    (*(char *)(*(long *)(lVar19 + 0xd0) + (ulong)uVar8) != '\0')))) &&
                  ((uVar8 < *puVar12 && (puVar12[1] != 0)))) && ((ushort)puVar12[2] != 0)) {
                iVar7 = 0xc;
                if (*(char *)((long)puVar12 + 10) != '\0') {
                  iVar7 = 0x1c;
                }
                puVar12 = (uint *)((ulong)(puVar12[1] * uVar8 + (uint)(ushort)puVar12[2] * 8 + iVar7
                                          ) + (long)puVar12);
                goto joined_r0x0205ebd8;
              }
            }
            else if (uVar8 < *(uint *)(lVar19 + 0x1c0)) {
              if (*(uint *)(lVar19 + 0x1b0) <= uVar8) {
                uVar8 = 0;
              }
              puVar12 = *(uint **)(*(long *)(lVar19 + 0x1b8) + (ulong)uVar8 * 8);
joined_r0x0205ebd8:
              if (puVar12 != (uint *)0x0) {
                uVar8 = *puVar12;
                if (uVar8 != 0) {
                  cVar14 = *PTR_DAT_04bb40b0;
                  do {
                    if (cVar14 == '\0') {
                      cVar14 = '\x01';
                      *PTR_DAT_04bb40b0 = 1;
                      *(undefined4 *)(puVar1 + 0xa0) = 0xffffffff;
                      *(undefined8 *)puVar1 = 0xffffffffffffffff;
                      *(undefined8 *)(puVar1 + 8) = 0xffffffffffffffff;
                      *(undefined8 *)(puVar1 + 0x10) = 0xffffffffffffffff;
                      *(undefined8 *)(puVar1 + 0x18) = 0xffffffffffffffff;
                      *(undefined8 *)(puVar1 + 0x20) = 0xffffffffffffffff;
                      *(undefined8 *)(puVar1 + 0x28) = 0xffffffffffffffff;
                      *(undefined8 *)(puVar1 + 0x30) = 0xffffffffffffffff;
                      *(undefined8 *)(puVar1 + 0x38) = 0xffffffffffffffff;
                      *(undefined8 *)(puVar1 + 0x40) = 0xffffffffffffffff;
                      *(undefined8 *)(puVar1 + 0x48) = 0xffffffffffffffff;
                      *(undefined8 *)(puVar1 + 0x50) = 0xffffffffffffffff;
                      *(undefined8 *)(puVar1 + 0x58) = 0xffffffffffffffff;
                      *(undefined8 *)(puVar1 + 0x60) = 0xffffffffffffffff;
                      *(undefined8 *)(puVar1 + 0x68) = 0xffffffffffffffff;
                      *(undefined8 *)(puVar1 + 0x70) = 0xffffffffffffffff;
                      *(undefined8 *)(puVar1 + 0x78) = 0xffffffffffffffff;
                      *(undefined8 *)(puVar1 + 0x80) = 0xffffffffffffffff;
                      *(undefined8 *)(puVar1 + 0x88) = 0xffffffffffffffff;
                      *(undefined8 *)(puVar1 + 0x90) = 0xffffffffffffffff;
                      *(undefined8 *)(puVar1 + 0x98) = 0xffffffffffffffff;
                      uVar8 = *puVar12;
                    }
                    else {
                      uVar5 = *(uint *)(puVar1 + 0x80);
                      if (-1 < (int)uVar5) {
                        pcVar16 = (char *)((ulong)uVar5 + (long)puVar12);
                        goto LAB_0205eaf8;
                      }
                      if (uVar5 != 0xffffffff) break;
                    }
                    puVar6 = (uint *)(ulong)uVar8;
                    pcVar16 = (char *)0x0;
                    if ((puVar6 == (uint *)0x0) || (pcVar16 = (char *)0x0, puVar12 == puVar6))
                    goto LAB_0205eaf8;
                    lVar13 = 0xc;
                    if (*(char *)((long)puVar12 + (10 - (long)puVar6)) != '\0') {
                      lVar13 = 0x1c;
                    }
                    lVar13 = (long)puVar12 + (lVar13 - (long)puVar6);
                    pcVar16 = (char *)0x0;
                    if (lVar13 == 0) goto LAB_0205eaf8;
                    uVar9 = (ulong)*(ushort *)((long)puVar12 + (8 - (long)puVar6));
                    *(undefined4 *)(puVar1 + 0x80) = 0xfffffffe;
                    if (uVar9 == 0) break;
                    piVar15 = (int *)(lVar13 + 4);
                    while (piVar15[-1] != 0x2f1b930d) {
                      piVar15 = piVar15 + 2;
                      uVar9 = uVar9 - 1;
                      if (uVar9 == 0) goto LAB_0205eaf4;
                    }
                    iVar7 = 0;
                    if (*piVar15 != -1) {
                      iVar7 = *piVar15;
                    }
                    *(int *)(puVar1 + 0x80) = iVar7;
                    uVar8 = *puVar12;
                    if (uVar8 == 0) break;
                  } while( true );
                }
LAB_0205eaf4:
                pcVar16 = (char *)0x0;
LAB_0205eaf8:
                local_110 = 8;
                local_105 = 0;
                __src = *(char **)PTR_PTR_04bc1178;
                if (pcVar16 != (char *)0x0) {
                  __src = pcVar16;
                }
                pcStack_118 = local_10c;
                if (local_10c != __src) {
                  lVar13 = 0;
                  do {
                    if (__src[lVar13] == '\0') {
LAB_0205ebec:
                      iVar7 = (int)lVar13;
                      if (7 < iVar7) {
                        iVar7 = 7;
                      }
                      goto LAB_0205ebf8;
                    }
                    if (__src[lVar13 + 1] == '\0') {
                      lVar13 = lVar13 + 1;
                      goto LAB_0205ebec;
                    }
                    if (__src[lVar13 + 2] == '\0') {
                      lVar13 = lVar13 + 2;
                      goto LAB_0205ebec;
                    }
                    lVar13 = lVar13 + 3;
                  } while (lVar13 != 0x80001);
                  iVar7 = 0;
LAB_0205ebf8:
                  local_120 = puVar3;
                  memcpy(local_10c,__src,(long)iVar7);
                  local_10c[iVar7] = '\0';
                }
                local_124 = 0;
                local_120 = puVar2;
                uVar9 = FUN_020fc100(&local_124,&local_128,&local_120);
                if (((uVar9 & 1) != 0) && (uVar9 = (ulong)local_124, local_128 < 0x20)) {
                  if (0x22 < local_124) {
                    uVar9 = 0;
                  }
                  local_f8[uVar9] = local_f8[uVar9] | 1 << (ulong)(local_128 & 0x1f);
                }
              }
            }
          }
          uVar9 = uVar4;
        } while (uVar4 != 0x1a4);
        uVar18 = uVar18 & 0xffffffff;
        uVar9 = 0;
        *(undefined4 *)(param_1 + 0x11) = 0;
        param_1[0xf] = 0;
        param_1[0x10] = 0;
        *param_1 = 0;
        param_1[0xd] = 0;
        param_1[0xe] = 0;
        param_1[0xb] = 0;
        param_1[0xc] = 0;
        param_1[9] = 0;
        param_1[10] = 0;
        param_1[7] = 0;
        param_1[8] = 0;
        param_1[5] = 0;
        param_1[6] = 0;
        param_1[3] = 0;
        param_1[4] = 0;
        param_1[1] = 0;
        param_1[2] = 0;
        for (lVar19 = 0;
            *(undefined4 *)((long)param_1 + (-(uVar9 >> 0x1f) & 0xfffffffc00000000 | uVar9 << 2)) =
                 *(undefined4 *)((long)local_f8 + lVar19), lVar19 != 0x88; lVar19 = lVar19 + 8) {
          lVar13 = uVar9 << 0x20;
          uVar9 = (ulong)((int)uVar9 + 2);
          *(undefined4 *)((long)param_1 + (lVar13 + 0x100000000 >> 0x1e)) =
               *(undefined4 *)((long)local_f8 + lVar19 + 4);
        }
      }
      if ((((uVar18 & 1) != 0) && (*(long *)(lVar17 + 0x17f68) != 0)) &&
         (puVar11 = *(undefined8 **)(*(long *)(lVar17 + 0x17f68) + 8), puVar11 != (undefined8 *)0x0)
         ) {
        (**(code **)*puVar11)();
      }
    }
    if ((((local_13c & 1) != 0) && (*(long *)(lVar10 + 0xd0) != 0)) &&
       (puVar11 = *(undefined8 **)(*(long *)(lVar10 + 0xd0) + 8), puVar11 != (undefined8 *)0x0)) {
      (**(code **)*puVar11)();
    }
  }
  return;
}

