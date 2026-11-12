
uint FUN_0087c200(long param_1,long *param_2,undefined2 *param_3)

{
  long lVar1;
  uint uVar2;
  uint uVar3;
  undefined1 uVar4;
  undefined1 uVar5;
  undefined2 uVar6;
  undefined *puVar7;
  bool bVar8;
  undefined4 uVar9;
  undefined *puVar10;
  undefined8 uVar11;
  uint uVar12;
  long lVar13;
  uint *puVar14;
  int *piVar15;
  int iVar16;
  ulong uVar17;
  undefined *puVar18;
  ulong uVar19;
  uint *puVar20;
  char cVar21;
  uint uVar22;
  undefined *local_70;
  long local_68;
  
  puVar7 = PTR_PTR_04bb3260;
  uVar12 = *(uint *)(param_1 + 1000);
  if (((int)uVar12 < 1) &&
     (((*(long *)(param_1 + 0x2d8) == 0 ||
       (puVar20 = *(uint **)(*(long *)(param_1 + 0x2d8) + 8), puVar20 == (uint *)0x0)) ||
      (uVar12 = *puVar20, (int)uVar12 < 1)))) {
    uVar22 = 0;
  }
  else {
    uVar19 = 0;
    uVar22 = 1;
    puVar18 = PTR_DAT_04bb2020 + 0x10;
    puVar10 = PTR_DAT_04bb3250;
    do {
      if ((int)*(uint *)(param_1 + 1000) < 1) {
        if (((((*(long *)(param_1 + 0x2d8) != 0) &&
              (puVar20 = *(uint **)(*(long *)(param_1 + 0x2d8) + 8), puVar20 != (uint *)0x0)) &&
             ((*(uint *)(param_1 + 0x2f0) <= uVar19 ||
              (*(char *)(*(long *)(param_1 + 0x2f8) + uVar19) != '\0')))) &&
            ((uVar19 < *puVar20 && (puVar20[1] != 0)))) && ((ushort)puVar20[2] != 0)) {
          iVar16 = 0xc;
          if (*(char *)((long)puVar20 + 10) != '\0') {
            iVar16 = 0x1c;
          }
          puVar20 = (uint *)((ulong)(puVar20[1] * (int)uVar19 + (uint)(ushort)puVar20[2] * 8 +
                                    iVar16) + (long)puVar20);
          goto joined_r0x0087c61c;
        }
      }
      else if (uVar19 < *(uint *)(param_1 + 1000)) {
        uVar17 = uVar19 & 0xffffffff;
        if (*(uint *)(param_1 + 0x3d8) <= uVar19) {
          uVar17 = 0;
        }
        puVar20 = *(uint **)(*(long *)(param_1 + 0x3e0) + uVar17 * 8);
joined_r0x0087c61c:
        if (puVar20 != (uint *)0x0) {
          uVar3 = *puVar20;
          if (uVar3 == 0 || puVar20 == (uint *)(ulong)uVar3) {
            if (uVar3 != 0) goto LAB_0087c77c;
          }
          else {
            puVar14 = (uint *)((long)puVar20 - (long)(ulong)uVar3);
            if (((*puVar14 != 0) && (uVar3 = puVar14[1], uVar3 != 0)) &&
               ((ulong)(ushort)puVar14[2] != 0)) {
              lVar13 = 0xc;
              if (*(char *)((long)puVar14 + 10) != '\0') {
                lVar13 = 0x1c;
              }
              lVar13 = (long)puVar14 + lVar13 + (ulong)(ushort)puVar14[2] * 8;
              if (lVar13 != 0) {
                uVar2 = 0;
                if ((ulong)uVar3 != 0) {
                  uVar2 = (uint)((ulong)((long)puVar20 - lVar13) / (ulong)uVar3);
                }
                if (*puVar14 <= uVar2) {
                  uVar2 = 0xffffffff;
                }
                if ((uVar2 < DAT_04ce9768) && (*(short *)(DAT_04ce9770 + (long)(int)uVar2 * 2) == 4)
                   ) goto LAB_0087c2b4;
              }
            }
LAB_0087c77c:
            cVar21 = *PTR_DAT_04bb3248;
            do {
              if (cVar21 == '\0') {
                cVar21 = '\x01';
                *PTR_DAT_04bb3248 = 1;
                memset(puVar10,0xff,0x288);
                puVar10 = PTR_DAT_04bb3250;
              }
              else {
                uVar3 = *(uint *)(puVar10 + 0x148);
                if (-1 < (int)uVar3) {
                  lVar13 = (ulong)uVar3 + (long)puVar20;
                  goto LAB_0087c310;
                }
                if (uVar3 != 0xffffffff) break;
              }
              puVar14 = (uint *)(ulong)*puVar20;
              lVar13 = 0;
              if ((*puVar20 == 0) || (puVar20 == puVar14)) goto LAB_0087c310;
              lVar13 = 0xc;
              if (*(char *)((long)puVar20 + (10 - (long)puVar14)) != '\0') {
                lVar13 = 0x1c;
              }
              lVar1 = (long)puVar20 + (lVar13 - (long)puVar14);
              if (lVar1 == 0) break;
              uVar17 = (ulong)*(ushort *)((long)puVar20 + (8 - (long)puVar14));
              *(undefined4 *)(puVar10 + 0x148) = 0xfffffffe;
              lVar13 = 0;
              if (uVar17 == 0) goto LAB_0087c310;
              piVar15 = (int *)(lVar1 + 4);
              while (piVar15[-1] != 0x443c0fb7) {
                piVar15 = piVar15 + 2;
                uVar17 = uVar17 - 1;
                if (uVar17 == 0) {
                  lVar13 = 0;
                  goto LAB_0087c310;
                }
              }
              iVar16 = 0;
              if (*piVar15 != -1) {
                iVar16 = *piVar15;
              }
              *(int *)(puVar10 + 0x148) = iVar16;
            } while (*puVar20 != 0);
          }
          lVar13 = 0;
LAB_0087c310:
          local_68 = *(long *)puVar7;
          if (lVar13 != 0) {
            local_68 = lVar13;
          }
          local_70 = puVar18;
          (**(code **)(*param_2 + 0x18))(param_2);
          (**(code **)(*param_2 + 0x18))(param_2);
          lVar13 = param_2[1];
          (**(code **)(local_70 + 0x18))(&local_70);
          if (lVar13 == local_68) {
LAB_0087c62c:
            if (*puVar20 != 0) {
              cVar21 = *PTR_DAT_04bb3248;
              puVar10 = PTR_DAT_04bb3250;
              do {
                if (cVar21 == '\0') {
                  cVar21 = '\x01';
                  *PTR_DAT_04bb3248 = 1;
                  memset(puVar10,0xff,0x288);
                  puVar10 = PTR_DAT_04bb3250;
                }
                else {
                  uVar3 = *(uint *)(puVar10 + 0x148);
                  if (-1 < (int)uVar3) {
                    lVar13 = (ulong)uVar3 + (long)puVar20;
                    goto LAB_0087c27c;
                  }
                  if (uVar3 != 0xffffffff) break;
                }
                puVar14 = (uint *)(ulong)*puVar20;
                lVar13 = 0;
                if ((*puVar20 == 0) || (puVar20 == puVar14)) goto LAB_0087c27c;
                lVar13 = 0xc;
                if (*(char *)((long)puVar20 + (10 - (long)puVar14)) != '\0') {
                  lVar13 = 0x1c;
                }
                lVar1 = (long)puVar20 + (lVar13 - (long)puVar14);
                if (lVar1 == 0) break;
                uVar17 = (ulong)*(ushort *)((long)puVar20 + (8 - (long)puVar14));
                *(undefined4 *)(puVar10 + 0x148) = 0xfffffffe;
                lVar13 = 0;
                if (uVar17 == 0) goto LAB_0087c27c;
                piVar15 = (int *)(lVar1 + 4);
                while (piVar15[-1] != 0x443c0fb7) {
                  piVar15 = piVar15 + 2;
                  uVar17 = uVar17 - 1;
                  if (uVar17 == 0) {
                    lVar13 = 0;
                    goto LAB_0087c27c;
                  }
                }
                iVar16 = 0;
                if (*piVar15 != -1) {
                  iVar16 = *piVar15;
                }
                *(int *)(puVar10 + 0x148) = iVar16;
              } while (*puVar20 != 0);
            }
            lVar13 = 0;
LAB_0087c27c:
            local_68 = *(long *)puVar7;
            if (lVar13 != 0) {
              local_68 = lVar13;
            }
            local_70 = PTR_DAT_04bb2020 + 0x10;
            uVar17 = FUN_00879630(param_1,&local_70,0);
            puVar10 = PTR_DAT_04bb3250;
            if ((uVar17 & 1) != 0) {
              if (*puVar20 == 0) goto LAB_0087cbf4;
              cVar21 = *PTR_DAT_04bb3248;
              puVar18 = PTR_DAT_04bb3250;
              goto LAB_0087cb3c;
            }
          }
          else {
            uVar17 = 0;
            bVar8 = true;
            do {
              lVar13 = param_2[1] + 2 + uVar17;
              cVar21 = *(char *)(lVar13 + -2);
              if (cVar21 != *(char *)(local_68 + uVar17)) break;
              if (cVar21 == '\0') {
                if (bVar8) goto LAB_0087c62c;
                break;
              }
              cVar21 = *(char *)(lVar13 + -1);
              if (cVar21 != *(char *)(local_68 + uVar17 + 1)) break;
              if (cVar21 == '\0') goto LAB_0087c62c;
              cVar21 = *(char *)(param_2[1] + 2 + uVar17);
              if (cVar21 != *(char *)(local_68 + uVar17 + 2)) break;
              if (cVar21 == '\0') goto LAB_0087c62c;
              bVar8 = uVar17 < 0x7fffe;
              uVar17 = uVar17 + 3;
            } while (uVar17 != 0x80001);
            if (*puVar20 != 0) {
              cVar21 = *PTR_DAT_04bb3248;
              puVar10 = PTR_DAT_04bb3250;
              do {
                if (cVar21 == '\0') {
                  cVar21 = '\x01';
                  *PTR_DAT_04bb3248 = 1;
                  memset(puVar10,0xff,0x288);
                  puVar10 = PTR_DAT_04bb3250;
                }
                else {
                  uVar3 = *(uint *)(puVar10 + 0x14c);
                  if (-1 < (int)uVar3) {
                    lVar13 = (ulong)uVar3 + (long)puVar20;
                    goto LAB_0087c4cc;
                  }
                  if (uVar3 != 0xffffffff) break;
                }
                puVar14 = (uint *)(ulong)*puVar20;
                lVar13 = 0;
                if ((*puVar20 == 0) || (puVar20 == puVar14)) goto LAB_0087c4cc;
                lVar13 = 0xc;
                if (*(char *)((long)puVar20 + (10 - (long)puVar14)) != '\0') {
                  lVar13 = 0x1c;
                }
                lVar1 = (long)puVar20 + (lVar13 - (long)puVar14);
                if (lVar1 == 0) break;
                uVar17 = (ulong)*(ushort *)((long)puVar20 + (8 - (long)puVar14));
                *(undefined4 *)(puVar10 + 0x14c) = 0xfffffffe;
                lVar13 = 0;
                if (uVar17 == 0) goto LAB_0087c4cc;
                piVar15 = (int *)(lVar1 + 4);
                while (piVar15[-1] != -0x44991235) {
                  piVar15 = piVar15 + 2;
                  uVar17 = uVar17 - 1;
                  if (uVar17 == 0) {
                    lVar13 = 0;
                    goto LAB_0087c4cc;
                  }
                }
                iVar16 = 0;
                if (*piVar15 != -1) {
                  iVar16 = *piVar15;
                }
                *(int *)(puVar10 + 0x14c) = iVar16;
              } while (*puVar20 != 0);
            }
            lVar13 = 0;
LAB_0087c4cc:
            local_68 = *(long *)PTR_PTR_04bb3270;
            if (lVar13 != 0) {
              local_68 = lVar13;
            }
            local_70 = PTR_DAT_04bb2020 + 0x10;
            (**(code **)(*param_2 + 0x18))(param_2);
            (**(code **)(*param_2 + 0x18))(param_2);
            lVar13 = param_2[1];
            (**(code **)(local_70 + 0x18))(&local_70);
            if (lVar13 == local_68) {
LAB_0087c854:
              if (*puVar20 != 0) {
                cVar21 = *PTR_DAT_04bb3248;
                puVar10 = PTR_DAT_04bb3250;
                do {
                  if (cVar21 == '\0') {
                    cVar21 = '\x01';
                    *PTR_DAT_04bb3248 = 1;
                    memset(puVar10,0xff,0x288);
                    puVar10 = PTR_DAT_04bb3250;
                  }
                  else {
                    uVar3 = *(uint *)(puVar10 + 0x148);
                    if (-1 < (int)uVar3) {
                      lVar13 = (ulong)uVar3 + (long)puVar20;
                      goto LAB_0087c92c;
                    }
                    if (uVar3 != 0xffffffff) break;
                  }
                  puVar14 = (uint *)(ulong)*puVar20;
                  lVar13 = 0;
                  if ((*puVar20 == 0) || (puVar20 == puVar14)) goto LAB_0087c92c;
                  lVar13 = 0xc;
                  if (*(char *)((long)puVar20 + (10 - (long)puVar14)) != '\0') {
                    lVar13 = 0x1c;
                  }
                  lVar1 = (long)puVar20 + (lVar13 - (long)puVar14);
                  if (lVar1 == 0) break;
                  uVar17 = (ulong)*(ushort *)((long)puVar20 + (8 - (long)puVar14));
                  *(undefined4 *)(puVar10 + 0x148) = 0xfffffffe;
                  lVar13 = 0;
                  if (uVar17 == 0) goto LAB_0087c92c;
                  piVar15 = (int *)(lVar1 + 4);
                  while (piVar15[-1] != 0x443c0fb7) {
                    piVar15 = piVar15 + 2;
                    uVar17 = uVar17 - 1;
                    if (uVar17 == 0) {
                      lVar13 = 0;
                      goto LAB_0087c92c;
                    }
                  }
                  iVar16 = 0;
                  if (*piVar15 != -1) {
                    iVar16 = *piVar15;
                  }
                  *(int *)(puVar10 + 0x148) = iVar16;
                } while (*puVar20 != 0);
              }
              lVar13 = 0;
LAB_0087c92c:
              local_68 = *(long *)puVar7;
              if (lVar13 != 0) {
                local_68 = lVar13;
              }
              local_70 = PTR_DAT_04bb2020 + 0x10;
              uVar17 = FUN_00879630(param_1,&local_70,0);
              puVar10 = PTR_DAT_04bb3250;
              if ((uVar17 & 1) != 0) {
                if (*puVar20 != 0) {
                  cVar21 = *PTR_DAT_04bb3248;
                  do {
                    if (cVar21 == '\0') {
                      cVar21 = '\x01';
                      *PTR_DAT_04bb3248 = 1;
                      memset(puVar10,0xff,0x288);
                      puVar10 = PTR_DAT_04bb3250;
                    }
                    else {
                      uVar3 = *(uint *)(puVar10 + 0x148);
                      if (-1 < (int)uVar3) {
                        lVar13 = (ulong)uVar3 + (long)puVar20;
                        goto LAB_0087ca3c;
                      }
                      if (uVar3 != 0xffffffff) break;
                    }
                    puVar14 = (uint *)(ulong)*puVar20;
                    lVar13 = 0;
                    if ((*puVar20 == 0) || (puVar20 == puVar14)) goto LAB_0087ca3c;
                    lVar13 = 0xc;
                    if (*(char *)((long)puVar20 + (10 - (long)puVar14)) != '\0') {
                      lVar13 = 0x1c;
                    }
                    lVar1 = (long)puVar20 + (lVar13 - (long)puVar14);
                    if (lVar1 == 0) break;
                    uVar17 = (ulong)*(ushort *)((long)puVar20 + (8 - (long)puVar14));
                    *(undefined4 *)(puVar10 + 0x148) = 0xfffffffe;
                    lVar13 = 0;
                    if (uVar17 == 0) goto LAB_0087ca3c;
                    piVar15 = (int *)(lVar1 + 4);
                    while (piVar15[-1] != 0x443c0fb7) {
                      piVar15 = piVar15 + 2;
                      uVar17 = uVar17 - 1;
                      if (uVar17 == 0) {
                        lVar13 = 0;
                        goto LAB_0087ca3c;
                      }
                    }
                    iVar16 = 0;
                    if (*piVar15 != -1) {
                      iVar16 = *piVar15;
                    }
                    *(int *)(puVar10 + 0x148) = iVar16;
                  } while (*puVar20 != 0);
                }
                lVar13 = 0;
LAB_0087ca3c:
                uVar4 = *(undefined1 *)(param_3 + 1);
                lVar1 = *(long *)puVar7;
                if (lVar13 != 0) {
                  lVar1 = lVar13;
                }
                uVar5 = *(undefined1 *)((long)param_3 + 3);
                uVar6 = *param_3;
                uVar9 = FUN_006bd550(lVar1,0);
                local_70 = (undefined *)CONCAT44(local_70._4_4_,uVar9);
                uVar11 = FUN_0088c0d0(param_1 + 8,&local_70);
                uVar17 = FUN_00875c10(param_1,uVar11,uVar6,uVar4,uVar5);
                puVar10 = PTR_DAT_04bb3250;
                if ((uVar17 & 1) != 0) break;
              }
            }
            else {
              uVar17 = 0;
              bVar8 = true;
              do {
                lVar13 = param_2[1] + 2 + uVar17;
                cVar21 = *(char *)(lVar13 + -2);
                puVar10 = PTR_DAT_04bb3250;
                if (cVar21 != *(char *)(local_68 + uVar17)) break;
                if (cVar21 == '\0') {
                  if (bVar8) goto LAB_0087c854;
                  break;
                }
                cVar21 = *(char *)(lVar13 + -1);
                if (cVar21 != *(char *)(local_68 + uVar17 + 1)) break;
                if (cVar21 == '\0') goto LAB_0087c854;
                cVar21 = *(char *)(param_2[1] + 2 + uVar17);
                if (cVar21 != *(char *)(local_68 + uVar17 + 2)) break;
                if (cVar21 == '\0') goto LAB_0087c854;
                bVar8 = uVar17 < 0x7fffe;
                uVar17 = uVar17 + 3;
              } while (uVar17 != 0x80001);
            }
          }
        }
      }
LAB_0087c2b4:
      uVar19 = uVar19 + 1;
      uVar22 = (uint)((int)uVar19 < (int)uVar12);
    } while (uVar19 != uVar12);
    param_1 = 1;
  }
  goto LAB_0087cc40;
  while( true ) {
    puVar14 = (uint *)(ulong)*puVar20;
    lVar13 = 0;
    if ((*puVar20 == 0) || (puVar20 == puVar14)) goto LAB_0087cbf8;
    lVar13 = 0xc;
    if (*(char *)((long)puVar20 + (10 - (long)puVar14)) != '\0') {
      lVar13 = 0x1c;
    }
    lVar1 = (long)puVar20 + (lVar13 - (long)puVar14);
    if (lVar1 == 0) break;
    uVar19 = (ulong)*(ushort *)((long)puVar20 + (8 - (long)puVar14));
    *(undefined4 *)(puVar18 + 0x148) = 0xfffffffe;
    lVar13 = 0;
    if (uVar19 == 0) goto LAB_0087cbf8;
    piVar15 = (int *)(lVar1 + 4);
    while (piVar15[-1] != 0x443c0fb7) {
      piVar15 = piVar15 + 2;
      uVar19 = uVar19 - 1;
      if (uVar19 == 0) {
        lVar13 = 0;
        goto LAB_0087cbf8;
      }
    }
    iVar16 = 0;
    if (*piVar15 != -1) {
      iVar16 = *piVar15;
    }
    *(int *)(puVar18 + 0x148) = iVar16;
    if (*puVar20 == 0) break;
LAB_0087cb3c:
    if (cVar21 == '\0') {
      cVar21 = '\x01';
      *PTR_DAT_04bb3248 = 1;
      memset(puVar18,0xff,0x288);
      puVar18 = PTR_DAT_04bb3250;
    }
    else {
      uVar12 = *(uint *)(puVar18 + 0x148);
      if (-1 < (int)uVar12) {
        lVar13 = (ulong)uVar12 + (long)puVar20;
        goto LAB_0087cbf8;
      }
      if (uVar12 != 0xffffffff) break;
    }
  }
LAB_0087cbf4:
  lVar13 = 0;
LAB_0087cbf8:
  uVar4 = *(undefined1 *)((long)param_3 + 3);
  lVar1 = *(long *)puVar7;
  if (lVar13 != 0) {
    lVar1 = lVar13;
  }
  uVar5 = *(undefined1 *)(param_3 + 1);
  uVar6 = *param_3;
  uVar9 = FUN_006bd550(lVar1,0);
  local_70 = (undefined *)CONCAT44(local_70._4_4_,uVar9);
  uVar11 = FUN_0088c0d0(param_1 + 8,&local_70);
  param_1 = FUN_00875c10(param_1,uVar11,uVar6,uVar5,uVar4);
LAB_0087cc40:
  return uVar22 & (uint)param_1;
}

