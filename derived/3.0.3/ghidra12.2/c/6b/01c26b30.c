
void FUN_01c26b30(long param_1,int *param_2,int param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined2 *puVar5;
  uint uVar6;
  undefined *puVar7;
  undefined2 *puVar8;
  long lVar9;
  undefined8 *puVar10;
  uint uVar11;
  ulong uVar12;
  int iVar13;
  undefined8 *puVar14;
  ulong uVar15;
  uint *puVar16;
  uint *puVar17;
  long *plVar18;
  uint *puVar19;
  ulong uVar20;
  undefined *local_c0;
  undefined2 *local_b8;
  undefined4 local_b0;
  undefined2 local_ac [15];
  undefined1 local_8d;
  undefined *local_88;
  undefined2 *local_80;
  undefined4 local_78;
  undefined2 local_74 [3];
  undefined1 local_6d;
  uint local_64;
  
  if (param_2 == (int *)0x0) {
    return;
  }
  if (0 < *param_2) {
    lVar9 = 0;
    puVar10 = *(undefined8 **)(param_2 + 4);
    do {
      puVar14 = *(undefined8 **)(*(long *)(param_2 + 2) + lVar9 * 8);
      lVar9 = lVar9 + 1;
      *puVar14 = puVar10;
      *(undefined8 **)(param_2 + 4) = puVar14;
      puVar10 = puVar14;
    } while (lVar9 < *param_2);
  }
  *param_2 = 0;
  local_64 = 0;
  if (param_3 < -0x83ceb3d) {
    if (param_3 < -0x15fdefdb) {
      if (param_3 == -0x477aafe0) {
        local_64 = 5;
      }
      else if (param_3 == -0x2099c902) {
        local_64 = 9;
      }
    }
    else if (param_3 == -0x15fdefdb) {
      local_64 = 7;
    }
    else if (param_3 == -0xe632453) {
      local_64 = 3;
    }
  }
  else if (param_3 < 0x17f77b87) {
    if (param_3 == -0x83ceb3d) {
      local_64 = 4;
    }
    else if (param_3 == -0x169521c) {
      local_64 = 1;
    }
  }
  else if (param_3 == 0x17f77b87) {
    local_64 = 8;
  }
  else if (param_3 == 0x3b3bf38a) {
    local_64 = 6;
  }
  else if (param_3 == 0x3fce6459) {
    local_64 = 2;
  }
  uVar20 = 0;
  puVar1 = PTR_DAT_04bb2028 + 0x10;
  puVar2 = PTR_DAT_04bb3768 + 0x10;
  puVar3 = PTR_DAT_04bb2a08 + 0x10;
  puVar4 = PTR_DAT_04bb6a30 + 0x10;
  do {
    uVar11 = *(uint *)(param_1 + 0x5d0);
    if ((int)uVar11 < 1) {
      uVar15 = 0;
      if (*(long *)(param_1 + 0x4c0) != 0) {
        puVar19 = *(uint **)(*(long *)(param_1 + 0x4c0) + 8);
        uVar15 = 0;
        if (puVar19 != (uint *)0x0) {
          uVar15 = (ulong)*puVar19;
        }
      }
      if (uVar15 <= uVar20) {
        return;
      }
      if (0 < (int)uVar11) goto LAB_01c26d74;
      if ((((*(long *)(param_1 + 0x4c0) != 0) &&
           (puVar19 = *(uint **)(*(long *)(param_1 + 0x4c0) + 8), puVar19 != (uint *)0x0)) &&
          ((*(uint *)(param_1 + 0x4d8) <= uVar20 ||
           (*(char *)(*(long *)(param_1 + 0x4e0) + uVar20) != '\0')))) &&
         (((uVar20 < *puVar19 && (puVar19[1] != 0)) && ((ushort)puVar19[2] != 0)))) {
        iVar13 = 0xc;
        if (*(char *)((long)puVar19 + 10) != '\0') {
          iVar13 = 0x1c;
        }
        puVar19 = (uint *)((ulong)(puVar19[1] * (int)uVar20 + (uint)(ushort)puVar19[2] * 8 + iVar13)
                          + (long)puVar19);
        if (puVar19 == (uint *)0x0) goto LAB_01c26d30;
        goto LAB_01c26d98;
      }
    }
    else {
      if (uVar11 <= uVar20) {
        return;
      }
LAB_01c26d74:
      if (uVar20 < uVar11) {
        uVar15 = uVar20 & 0xffffffff;
        if (*(uint *)(param_1 + 0x5c0) <= uVar20) {
          uVar15 = 0;
        }
        puVar19 = *(uint **)(*(long *)(param_1 + 0x5c8) + uVar15 * 8);
        if (puVar19 != (uint *)0x0) {
LAB_01c26d98:
          uVar11 = *puVar19;
          if (uVar11 == 0 || puVar19 == (uint *)(ulong)uVar11) {
LAB_01c26dac:
            uVar11 = 0;
          }
          else {
            puVar16 = (uint *)((long)puVar19 - (long)(ulong)uVar11);
            uVar11 = 0;
            if (*puVar16 != 0) {
              uVar11 = puVar16[1];
              if ((uVar11 != 0) && ((ulong)(ushort)puVar16[2] != 0)) {
                lVar9 = 0xc;
                if (*(char *)((long)puVar16 + 10) != '\0') {
                  lVar9 = 0x1c;
                }
                lVar9 = (long)puVar16 + lVar9 + (ulong)(ushort)puVar16[2] * 8;
                if (lVar9 != 0) {
                  uVar6 = 0;
                  if ((ulong)uVar11 != 0) {
                    uVar6 = (uint)((ulong)((long)puVar19 - lVar9) / (ulong)uVar11);
                  }
                  if (*puVar16 <= uVar6) {
                    uVar6 = 0xffffffff;
                  }
                  if ((uVar6 < DAT_0534bce0) &&
                     (uVar11 = (uint)*(ushort *)(DAT_0534bce8 + (long)(int)uVar6 * 2), uVar11 < 10))
                  goto LAB_01c26db0;
                }
              }
              goto LAB_01c26dac;
            }
          }
LAB_01c26db0:
          if (local_64 == uVar11) {
            local_b0 = 0x20;
            local_8d = 0;
            local_ac[0] = 0x20;
            local_78 = 8;
            local_6d = 0;
            local_74[0] = 0x20;
            puVar16 = (uint *)(ulong)*puVar19;
            if (*puVar19 == 0) {
LAB_01c26f28:
              puVar10 = (undefined8 *)0x0;
            }
            else {
              if ((DAT_0534bcf0 & 1) == 0) {
                DAT_0534bcf0 = 1;
                DAT_0534bd04 = 0xffffffff;
                DAT_0534bcf4 = 0xffffffffffffffff;
                DAT_0534bcfc = 0xffffffffffffffff;
                uVar15 = 0xffffffff;
LAB_01c26f1c:
                if (puVar19 == puVar16) goto LAB_01c26f28;
                do {
                  if (uVar15 != 0xffffffff) goto LAB_01c26f28;
                  lVar9 = 0xc;
                  if (*(char *)((long)puVar19 + (10 - (long)puVar16)) != '\0') {
                    lVar9 = 0x1c;
                  }
                  lVar9 = (long)puVar19 + (lVar9 - (long)puVar16);
                  if (lVar9 == 0) goto LAB_01c26f28;
                  uVar15 = (ulong)*(ushort *)((long)puVar19 + (8 - (long)puVar16));
                  DAT_0534bcfc = CONCAT44(DAT_0534bcfc._4_4_,0xfffffffe);
                  if (uVar15 == 0) goto LAB_01c26f28;
                  puVar17 = (uint *)(lVar9 + 4);
                  while (puVar17[-1] != 0x8e768bd8) {
                    puVar17 = puVar17 + 2;
                    uVar15 = uVar15 - 1;
                    if (uVar15 == 0) goto LAB_01c26f28;
                  }
                  uVar15 = (ulong)*puVar17;
                  uVar12 = 0;
                  if (*puVar17 != 0xffffffff) {
                    uVar12 = uVar15;
                  }
                  DAT_0534bcfc = CONCAT44(DAT_0534bcfc._4_4_,(int)uVar12);
                } while ((int)uVar12 < 0);
              }
              else {
                uVar12 = DAT_0534bcfc & 0xffffffff;
                uVar15 = uVar12;
                if ((int)DAT_0534bcfc < 0) goto LAB_01c26f1c;
              }
              puVar10 = (undefined8 *)(uVar12 + (long)puVar19);
            }
            puVar14 = &DAT_0407ebb1;
            if (puVar10 != (undefined8 *)0x0) {
              puVar14 = puVar10;
            }
            local_c0 = puVar1;
            local_b8 = local_ac;
            local_88 = puVar2;
            local_80 = local_74;
            FUN_038d1270(&local_c0,puVar14);
            puVar16 = (uint *)(ulong)*puVar19;
            if (*puVar19 == 0) {
LAB_01c2700c:
              puVar10 = (undefined8 *)0x0;
            }
            else {
              if ((DAT_0534bcf0 & 1) == 0) {
                DAT_0534bcf0 = 1;
                DAT_0534bd04 = 0xffffffff;
                DAT_0534bcf4 = 0xffffffffffffffff;
                DAT_0534bcfc = 0xffffffffffffffff;
                uVar15 = 0xffffffff;
LAB_01c27000:
                if (puVar19 == puVar16) goto LAB_01c2700c;
                do {
                  if (uVar15 != 0xffffffff) goto LAB_01c2700c;
                  lVar9 = 0xc;
                  if (*(char *)((long)puVar19 + (10 - (long)puVar16)) != '\0') {
                    lVar9 = 0x1c;
                  }
                  lVar9 = (long)puVar19 + (lVar9 - (long)puVar16);
                  if (lVar9 == 0) goto LAB_01c2700c;
                  uVar15 = (ulong)*(ushort *)((long)puVar19 + (8 - (long)puVar16));
                  DAT_0534bcfc = CONCAT44(0xfffffffe,(int)DAT_0534bcfc);
                  if (uVar15 == 0) goto LAB_01c2700c;
                  puVar17 = (uint *)(lVar9 + 4);
                  while (puVar17[-1] != 0x9d9b3598) {
                    puVar17 = puVar17 + 2;
                    uVar15 = uVar15 - 1;
                    if (uVar15 == 0) goto LAB_01c2700c;
                  }
                  uVar15 = (ulong)*puVar17;
                  uVar12 = 0;
                  if (*puVar17 != 0xffffffff) {
                    uVar12 = uVar15;
                  }
                  DAT_0534bcfc = CONCAT44((int)uVar12,(int)DAT_0534bcfc);
                } while ((int)uVar12 < 0);
              }
              else {
                uVar12 = DAT_0534bcfc >> 0x20;
                uVar15 = uVar12;
                if ((long)DAT_0534bcfc < 0) goto LAB_01c27000;
              }
              puVar10 = (undefined8 *)(uVar12 + (long)puVar19);
            }
            puVar14 = &DAT_0407ebb1;
            if (puVar10 != (undefined8 *)0x0) {
              puVar14 = puVar10;
            }
            FUN_038d1270(&local_88,puVar14);
            if (*param_2 < param_2[1]) {
              plVar18 = *(long **)(param_2 + 4);
              if (plVar18 != (long *)0x0) {
                *(long *)(param_2 + 4) = *plVar18;
              }
              puVar5 = (undefined2 *)((long)plVar18 + 0x14);
              *(undefined4 *)(plVar18 + 2) = 0x20;
              *(undefined1 *)((long)plVar18 + 0x33) = 0;
              *plVar18 = (long)puVar3;
              plVar18[1] = (long)puVar5;
              (**(code **)(local_c0 + 0x18))(&local_c0);
              puVar8 = local_b8;
              if (puVar5 != local_b8) {
                (**(code **)(local_c0 + 0x18))(&local_c0);
                lVar9 = 0;
                do {
                  if (*(char *)((long)local_b8 + lVar9) == '\0') goto LAB_01c2714c;
                  if (*(char *)((long)local_b8 + lVar9 + 1) == '\0') {
                    lVar9 = lVar9 + 1;
                    goto LAB_01c2714c;
                  }
                  if (*(char *)((long)local_b8 + lVar9 + 2) == '\0') {
                    lVar9 = lVar9 + 2;
                    goto LAB_01c2714c;
                  }
                  lVar9 = lVar9 + 3;
                } while (lVar9 != 0x80001);
                lVar9 = 0;
LAB_01c2714c:
                iVar13 = (int)lVar9;
                if ((int)plVar18[2] <= (int)lVar9) {
                  iVar13 = (int)plVar18[2] + -1;
                }
                memcpy(puVar5,puVar8,(long)iVar13);
                *(undefined1 *)((long)puVar5 + (long)iVar13) = 0;
              }
              puVar7 = PTR_DAT_04bb2028;
              puVar5 = (undefined2 *)((long)plVar18 + 0x4c);
              *(undefined4 *)(plVar18 + 9) = 8;
              *(undefined1 *)((long)plVar18 + 0x53) = 0;
              *plVar18 = (long)(puVar7 + 0x10);
              plVar18[7] = (long)puVar4;
              plVar18[8] = (long)puVar5;
              (**(code **)(local_88 + 0x18))(&local_88);
              puVar8 = local_80;
              if (puVar5 != local_80) {
                (**(code **)(local_88 + 0x18))(&local_88);
                lVar9 = 0;
                do {
                  if (*(char *)((long)local_80 + lVar9) == '\0') goto LAB_01c2721c;
                  if (*(char *)((long)local_80 + lVar9 + 1) == '\0') {
                    lVar9 = lVar9 + 1;
                    goto LAB_01c2721c;
                  }
                  if (*(char *)((long)local_80 + lVar9 + 2) == '\0') {
                    lVar9 = lVar9 + 2;
                    goto LAB_01c2721c;
                  }
                  lVar9 = lVar9 + 3;
                } while (lVar9 != 0x80001);
                lVar9 = 0;
LAB_01c2721c:
                iVar13 = (int)lVar9;
                if ((int)plVar18[9] <= (int)lVar9) {
                  iVar13 = (int)plVar18[9] + -1;
                }
                memcpy(puVar5,puVar8,(long)iVar13);
                *(undefined1 *)((long)puVar5 + (long)iVar13) = 0;
              }
              plVar18[7] = (long)(PTR_DAT_04bb3768 + 0x10);
              if (*param_2 < param_2[1]) {
                *(long **)(*(long *)(param_2 + 2) + (long)*param_2 * 8) = plVar18;
                *param_2 = *param_2 + 1;
              }
            }
          }
        }
      }
    }
LAB_01c26d30:
    uVar20 = uVar20 + 1;
  } while( true );
}

