
ushort FUN_01240360(uint param_1,ulong param_2,byte param_3)

{
  uint uVar1;
  long lVar2;
  long lVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  undefined *puVar7;
  undefined *puVar8;
  uint uVar9;
  ushort *puVar10;
  byte bVar11;
  int *piVar12;
  char cVar13;
  uint *puVar14;
  ulong uVar15;
  ulong uVar16;
  uint *puVar17;
  uint *puVar18;
  int iVar19;
  ushort uVar20;
  int iVar21;
  uint uVar22;
  uint local_70 [3];
  uint local_64;
  
  puVar8 = PTR_DAT_04bbbc78;
  puVar7 = PTR_DAT_04bbbc70;
  if (((DAT_05150358 != 0) && (*(long *)(DAT_05150358 + 0x2b0) != 0)) &&
     (piVar12 = *(int **)(*(long *)(DAT_05150358 + 0x2b0) + 8), piVar12 != (int *)0x0)) {
    if (2 < param_3) {
      param_3 = 3;
    }
    if (param_3 < 2) {
      param_3 = 1;
    }
    if (param_1 - 0x23 < 8) {
      iVar21 = *(int *)(DAT_05150358 + 0x3c0);
      iVar5 = *(int *)(&DAT_040580c0 + (long)(int)(param_1 - 0x23) * 4);
      if ((0 < iVar21) || (iVar21 = *piVar12, 0 < iVar21)) {
        uVar22 = 0;
        local_64 = param_1;
        do {
          uVar9 = *(uint *)(DAT_05150358 + 0x3c0);
          if ((int)uVar9 < 1) {
            if ((((*(long *)(DAT_05150358 + 0x2b0) != 0) &&
                 (puVar14 = *(uint **)(*(long *)(DAT_05150358 + 0x2b0) + 8), puVar14 != (uint *)0x0)
                 ) && ((*(uint *)(DAT_05150358 + 0x2c8) <= uVar22 ||
                       (*(char *)(*(long *)(DAT_05150358 + 0x2d0) + (long)(int)uVar22) != '\0'))))
               && (((uVar22 < *puVar14 && (puVar14[1] != 0)) && ((ushort)puVar14[2] != 0)))) {
              iVar19 = 0xc;
              if (*(char *)((long)puVar14 + 10) != '\0') {
                iVar19 = 0x1c;
              }
              puVar14 = (uint *)((ulong)(puVar14[1] * uVar22 + (uint)(ushort)puVar14[2] * 8 + iVar19
                                        ) + (long)puVar14);
              goto joined_r0x012405c4;
            }
          }
          else if (uVar22 < uVar9) {
            uVar1 = uVar22;
            if (*(uint *)(DAT_05150358 + 0x3b0) <= uVar22) {
              uVar1 = 0;
            }
            puVar14 = *(uint **)(*(long *)(DAT_05150358 + 0x3b8) + (ulong)uVar1 * 8);
joined_r0x012405c4:
            if (puVar14 != (uint *)0x0) {
              uVar1 = *puVar14;
              if (uVar1 == 0 || puVar14 == (uint *)(ulong)uVar1) {
LAB_01240524:
                local_70[2] = 0;
              }
              else {
                puVar18 = (uint *)((long)puVar14 - (long)(ulong)uVar1);
                if ((*puVar18 == 0) || (uVar1 = puVar18[1], uVar1 == 0)) goto LAB_01240524;
                if ((ulong)(ushort)puVar18[2] == 0) {
                  local_70[2] = 0;
                }
                else {
                  lVar2 = 0xc;
                  if (*(char *)((long)puVar18 + 10) != '\0') {
                    lVar2 = 0x1c;
                  }
                  lVar2 = (long)puVar18 + lVar2 + (ulong)(ushort)puVar18[2] * 8;
                  if (lVar2 == 0) {
                    local_70[2] = 0;
                  }
                  else {
                    uVar4 = 0;
                    if ((ulong)uVar1 != 0) {
                      uVar4 = (uint)((ulong)((long)puVar14 - lVar2) / (ulong)uVar1);
                    }
                    if (*puVar18 <= uVar4) {
                      uVar4 = 0xffffffff;
                    }
                    if (uVar4 < DAT_05150d50) {
                      uVar20 = *(ushort *)(DAT_05150d58 + (long)(int)uVar4 * 2);
                      local_70[2] = (uint)uVar20;
                      if (0x2e < uVar20) goto LAB_01240524;
                    }
                    else {
                      local_70[2] = 0;
                    }
                  }
                }
              }
              if (local_64 == local_70[2]) {
                bVar11 = (&DAT_04102ef8)[param_2 >> 4 & 3];
                if (iVar5 == 4) {
                  iVar6 = (uint)bVar11 * 3;
                  iVar19 = (uint)(byte)(&DAT_04102ef8)[param_2 >> 2 & 3] * 9 +
                           (uint)(byte)(&DAT_04102ef8)[param_2 & 3] * 0x1b;
                  bVar11 = (&DAT_04102ef8)[param_2 >> 6 & 3];
                }
                else {
                  if (iVar5 != 3) {
                    return 0xfffe;
                  }
                  iVar6 = (uint)(byte)(&DAT_04102ef8)[param_2 & 3] * 9;
                  iVar19 = (uint)(byte)(&DAT_04102ef8)[param_2 >> 2 & 3] * 3;
                }
                uVar1 = iVar6 + (uint)bVar11 + uVar22 + iVar19;
                if ((int)uVar9 < 1) {
                  if (*(long *)(DAT_05150358 + 0x2b0) == 0) {
                    return 0xfffe;
                  }
                  puVar14 = *(uint **)(*(long *)(DAT_05150358 + 0x2b0) + 8);
                  if (puVar14 == (uint *)0x0) {
                    return 0xfffe;
                  }
                  if ((uVar1 < *(uint *)(DAT_05150358 + 0x2c8)) &&
                     (*(char *)(*(long *)(DAT_05150358 + 0x2d0) + (long)(int)uVar1) == '\0')) {
                    return 0xfffe;
                  }
                  if (*puVar14 <= uVar1) {
                    return 0xfffe;
                  }
                  if (puVar14[1] == 0) {
                    return 0xfffe;
                  }
                  if ((ushort)puVar14[2] == 0) {
                    return 0xfffe;
                  }
                  iVar19 = 0xc;
                  if (*(char *)((long)puVar14 + 10) != '\0') {
                    iVar19 = 0x1c;
                  }
                  puVar14 = (uint *)((ulong)(puVar14[1] * uVar1 + (uint)(ushort)puVar14[2] * 8 +
                                            iVar19) + (long)puVar14);
                }
                else {
                  if (uVar9 <= uVar1) {
                    return 0xfffe;
                  }
                  if (*(uint *)(DAT_05150358 + 0x3b0) <= uVar1) {
                    uVar1 = 0;
                  }
                  puVar14 = *(uint **)(*(long *)(DAT_05150358 + 0x3b8) + (ulong)uVar1 * 8);
                }
                if (puVar14 == (uint *)0x0) {
                  return 0xfffe;
                }
                puVar18 = (uint *)(ulong)*puVar14;
                if (*puVar14 == 0) {
LAB_012407d4:
                  uVar20 = 0;
                }
                else {
                  if ((DAT_05150d18 & 1) == 0) {
                    DAT_05150d18 = 1;
                    DAT_05150d1c = 0xffffffffffffffff;
                    DAT_05150d24 = 0xffffffffffffffff;
                    uVar15 = 0xffffffff;
                    DAT_05150d2c = 0xffffffffffffffff;
                    DAT_05150d34 = 0xffffffffffffffff;
LAB_01240718:
                    if (puVar14 != puVar18) {
                      do {
                        if (uVar15 != 0xffffffff) goto LAB_01240720;
                        lVar2 = 0xc;
                        if (*(char *)((long)puVar14 + (10 - (long)puVar18)) != '\0') {
                          lVar2 = 0x1c;
                        }
                        lVar2 = (long)puVar14 + (lVar2 - (long)puVar18);
                        if (lVar2 == 0) goto LAB_01240720;
                        uVar15 = (ulong)*(ushort *)((long)puVar14 + (8 - (long)puVar18));
                        DAT_05150d24 = CONCAT44(DAT_05150d24._4_4_,0xfffffffe);
                        if (uVar15 == 0) goto LAB_01240720;
                        puVar17 = (uint *)(lVar2 + 4);
                        while (puVar17[-1] != 0x753336dd) {
                          puVar17 = puVar17 + 2;
                          uVar15 = uVar15 - 1;
                          if (uVar15 == 0) goto LAB_01240720;
                        }
                        uVar15 = (ulong)*puVar17;
                        uVar16 = 0;
                        if (*puVar17 != 0xffffffff) {
                          uVar16 = uVar15;
                        }
                        DAT_05150d24 = CONCAT44(DAT_05150d24._4_4_,(int)uVar16);
                      } while ((int)uVar16 < 0);
                      goto joined_r0x012407b8;
                    }
                  }
                  else {
                    uVar15 = DAT_05150d24 & 0xffffffff;
                    uVar16 = uVar15;
                    if ((int)DAT_05150d24 < 0) goto LAB_01240718;
joined_r0x012407b8:
                    if (((ushort *)(uVar16 + (long)puVar14) != (ushort *)0x0) &&
                       (uVar20 = *(ushort *)(uVar16 + (long)puVar14), uVar20 != 0xfffe))
                    goto LAB_012407e8;
                  }
LAB_01240720:
                  puVar18 = (uint *)(ulong)*puVar14;
                  if (*puVar14 == 0) goto LAB_012407d4;
                  uVar15 = DAT_05150d1c >> 0x20;
                  if ((long)DAT_05150d1c < 0) {
                    if (puVar14 == puVar18) goto LAB_012407d4;
                    do {
                      if (uVar15 != 0xffffffff) goto LAB_012407d4;
                      lVar2 = 0xc;
                      if (*(char *)((long)puVar14 + (10 - (long)puVar18)) != '\0') {
                        lVar2 = 0x1c;
                      }
                      lVar2 = (long)puVar14 + (lVar2 - (long)puVar18);
                      if (lVar2 == 0) goto LAB_012407d4;
                      uVar15 = (ulong)*(ushort *)((long)puVar14 + (8 - (long)puVar18));
                      DAT_05150d1c = CONCAT44(0xfffffffe,(undefined4)DAT_05150d1c);
                      if (uVar15 == 0) goto LAB_012407d4;
                      puVar17 = (uint *)(lVar2 + 4);
                      while (puVar17[-1] != 0x6aa33bf0) {
                        puVar17 = puVar17 + 2;
                        uVar15 = uVar15 - 1;
                        if (uVar15 == 0) goto LAB_012407d4;
                      }
                      uVar15 = (ulong)*puVar17;
                      uVar16 = 0;
                      if (*puVar17 != 0xffffffff) {
                        uVar16 = uVar15;
                      }
                      DAT_05150d1c = CONCAT44((int)uVar16,(undefined4)DAT_05150d1c);
                    } while ((int)uVar16 < 0);
                  }
                  else {
                    uVar16 = uVar15;
                  }
                  if ((ushort *)(uVar16 + (long)puVar14) == (ushort *)0x0) goto LAB_012407d4;
                  uVar20 = *(ushort *)(uVar16 + (long)puVar14);
                }
                if (param_3 == 2) {
                  return uVar20;
                }
LAB_012407e8:
                local_70[0] = (uint)uVar20;
                local_70[1] = 0;
                FUN_0277d4ac(local_70);
                lVar2 = DAT_05150358;
                uVar9 = FUN_0277d6c4(local_70);
                uVar9 = (uVar9 & 0xffff) - (uint)*(ushort *)(lVar2 + 0x1f8);
                if (*(uint *)(lVar2 + 0x1d8) <= uVar9) {
                  return uVar20;
                }
                puVar14 = *(uint **)(*(long *)(lVar2 + 0x1e0) + (long)(int)uVar9 * 8);
                if (puVar14 == (uint *)0x0) {
                  return uVar20;
                }
                if (*puVar14 == 0) {
                  return uVar20;
                }
                cVar13 = *puVar7;
                while (cVar13 == '\0') {
                  cVar13 = '\x01';
                  *(undefined8 *)puVar8 = 0xffffffffffffffff;
                  *(undefined8 *)(puVar8 + 8) = 0xffffffffffffffff;
                  *puVar7 = 1;
                  *(undefined4 *)(puVar8 + 0x60) = 0xffffffff;
                  *(undefined8 *)(puVar8 + 0x10) = 0xffffffffffffffff;
                  *(undefined8 *)(puVar8 + 0x18) = 0xffffffffffffffff;
                  *(undefined8 *)(puVar8 + 0x20) = 0xffffffffffffffff;
                  *(undefined8 *)(puVar8 + 0x28) = 0xffffffffffffffff;
                  *(undefined8 *)(puVar8 + 0x30) = 0xffffffffffffffff;
                  *(undefined8 *)(puVar8 + 0x38) = 0xffffffffffffffff;
                  *(undefined8 *)(puVar8 + 0x40) = 0xffffffffffffffff;
                  *(undefined8 *)(puVar8 + 0x48) = 0xffffffffffffffff;
                  *(undefined8 *)(puVar8 + 0x50) = 0xffffffffffffffff;
                  *(undefined8 *)(puVar8 + 0x58) = 0xffffffffffffffff;
LAB_012408a4:
                  puVar18 = (uint *)(ulong)*puVar14;
                  bVar11 = 0;
                  if ((*puVar14 == 0) || (puVar14 == puVar18)) goto LAB_01240938;
                  lVar2 = 0xc;
                  if (*(char *)((long)puVar14 + (10 - (long)puVar18)) != '\0') {
                    lVar2 = 0x1c;
                  }
                  lVar2 = (long)puVar14 + (lVar2 - (long)puVar18);
                  if (lVar2 == 0) goto LAB_01240918;
                  uVar15 = (ulong)*(ushort *)((long)puVar14 + (8 - (long)puVar18));
                  *(undefined4 *)(puVar8 + 0x4c) = 0xfffffffe;
                  bVar11 = 0;
                  if (uVar15 == 0) goto LAB_01240938;
                  piVar12 = (int *)(lVar2 + 4);
                  while (piVar12[-1] != -0xa58ccc9) {
                    piVar12 = piVar12 + 2;
                    uVar15 = uVar15 - 1;
                    if (uVar15 == 0) {
                      bVar11 = 0;
                      goto LAB_01240938;
                    }
                  }
                  iVar19 = 0;
                  if (*piVar12 != -1) {
                    iVar19 = *piVar12;
                  }
                  *(int *)(puVar8 + 0x4c) = iVar19;
                  if (*puVar14 == 0) {
                    return uVar20;
                  }
                }
                uVar9 = *(uint *)(puVar8 + 0x4c);
                if ((int)uVar9 < 0) {
                  if (uVar9 == 0xffffffff) goto LAB_012408a4;
LAB_01240918:
                  bVar11 = 0;
                }
                else {
                  bVar11 = 0;
                  if (((byte *)((ulong)uVar9 + (long)puVar14) != (byte *)0x0) &&
                     (bVar11 = *(byte *)((ulong)uVar9 + (long)puVar14), bVar11 == param_3)) {
                    return uVar20;
                  }
                }
LAB_01240938:
                uVar9 = *puVar14;
                if (uVar9 == 0) {
                  return uVar20;
                }
                uVar15 = (ulong)*(uint *)(puVar8 + 0x2c);
                while ((int)uVar15 < 0) {
                  if ((uVar15 != 0xffffffff) || (lVar2 = (long)puVar14 - (ulong)uVar9, lVar2 == 0))
                  goto LAB_012409cc;
                  lVar3 = 0xc;
                  if (*(char *)(lVar2 + 10) != '\0') {
                    lVar3 = 0x1c;
                  }
                  if (lVar3 + lVar2 == 0) goto LAB_012409cc;
                  uVar15 = (ulong)*(ushort *)(lVar2 + 8);
                  *(undefined4 *)(puVar8 + 0x2c) = 0xfffffffe;
                  if (uVar15 == 0) goto LAB_012409cc;
                  puVar18 = (uint *)(lVar3 + lVar2 + 4);
                  while (puVar18[-1] != 0x2c6a189e) {
                    puVar18 = puVar18 + 2;
                    uVar15 = uVar15 - 1;
                    if (uVar15 == 0) goto LAB_012409cc;
                  }
                  uVar15 = 0;
                  if (*puVar18 != 0xffffffff) {
                    uVar15 = (ulong)*puVar18;
                  }
                  *(int *)(puVar8 + 0x2c) = (int)uVar15;
                  uVar9 = *puVar14;
                  if (uVar9 == 0) {
                    return uVar20;
                  }
                }
                if (((short *)(uVar15 + (long)puVar14) == (short *)0x0) ||
                   (*(short *)(uVar15 + (long)puVar14) == -2)) {
LAB_012409cc:
                  uVar9 = *puVar14;
                  if (uVar9 == 0) {
                    return uVar20;
                  }
                  uVar15 = (ulong)*(uint *)(puVar8 + 0x1c);
                  while ((int)uVar15 < 0) {
                    if (uVar15 != 0xffffffff) {
                      return uVar20;
                    }
                    lVar2 = (long)puVar14 - (ulong)uVar9;
                    if (lVar2 == 0) {
                      return uVar20;
                    }
                    lVar3 = 0xc;
                    if (*(char *)(lVar2 + 10) != '\0') {
                      lVar3 = 0x1c;
                    }
                    if (lVar3 + lVar2 == 0) {
                      return uVar20;
                    }
                    uVar15 = (ulong)*(ushort *)(lVar2 + 8);
                    *(undefined4 *)(puVar8 + 0x1c) = 0xfffffffe;
                    if (uVar15 == 0) {
                      return uVar20;
                    }
                    puVar18 = (uint *)(lVar3 + lVar2 + 4);
                    while (puVar18[-1] != 0x76e7fe08) {
                      puVar18 = puVar18 + 2;
                      uVar15 = uVar15 - 1;
                      if (uVar15 == 0) {
                        return uVar20;
                      }
                    }
                    uVar15 = 0;
                    if (*puVar18 != 0xffffffff) {
                      uVar15 = (ulong)*puVar18;
                    }
                    *(int *)(puVar8 + 0x1c) = (int)uVar15;
                    uVar9 = *puVar14;
                    if (uVar9 == 0) {
                      return uVar20;
                    }
                  }
                  if ((short *)(uVar15 + (long)puVar14) == (short *)0x0) {
                    return uVar20;
                  }
                  if (*(short *)(uVar15 + (long)puVar14) == -2) {
                    return uVar20;
                  }
                  do {
                    if (-1 < (int)uVar15) {
                      puVar10 = (ushort *)(uVar15 + (long)puVar14);
                      if (puVar10 != (ushort *)0x0) goto LAB_01240bb8;
                      break;
                    }
                    if (uVar15 != 0xffffffff) break;
                    puVar18 = (uint *)(ulong)*puVar14;
                    uVar20 = 0xfffe;
                    if ((*puVar14 == 0) || (puVar14 == puVar18)) goto LAB_01240b6c;
                    lVar2 = 0xc;
                    if (*(char *)((long)puVar14 + (10 - (long)puVar18)) != '\0') {
                      lVar2 = 0x1c;
                    }
                    lVar2 = (long)puVar14 + (lVar2 - (long)puVar18);
                    if (lVar2 == 0) goto LAB_01240b6c;
                    uVar15 = (ulong)*(ushort *)((long)puVar14 + (8 - (long)puVar18));
                    *(undefined4 *)(puVar8 + 0x1c) = 0xfffffffe;
                    if (uVar15 == 0) goto LAB_01240b6c;
                    puVar18 = (uint *)(lVar2 + 4);
                    while (puVar18[-1] != 0x76e7fe08) {
                      puVar18 = puVar18 + 2;
                      uVar15 = uVar15 - 1;
                      if (uVar15 == 0) goto LAB_01240b68;
                    }
                    uVar15 = 0;
                    if (*puVar18 != 0xffffffff) {
                      uVar15 = (ulong)*puVar18;
                    }
                    *(int *)(puVar8 + 0x1c) = (int)uVar15;
                  } while (*puVar14 != 0);
                  uVar20 = 0xfffe;
                }
                else {
                  while ((int)uVar15 < 0) {
                    if (uVar15 != 0xffffffff) goto LAB_01240b68;
                    puVar18 = (uint *)(ulong)*puVar14;
                    uVar20 = 0xfffe;
                    if ((*puVar14 == 0) || (puVar14 == puVar18)) goto LAB_01240b6c;
                    lVar2 = 0xc;
                    if (*(char *)((long)puVar14 + (10 - (long)puVar18)) != '\0') {
                      lVar2 = 0x1c;
                    }
                    lVar2 = (long)puVar14 + (lVar2 - (long)puVar18);
                    if (lVar2 == 0) goto LAB_01240b6c;
                    uVar15 = (ulong)*(ushort *)((long)puVar14 + (8 - (long)puVar18));
                    *(undefined4 *)(puVar8 + 0x2c) = 0xfffffffe;
                    if (uVar15 == 0) goto LAB_01240b6c;
                    puVar18 = (uint *)(lVar2 + 4);
                    while (puVar18[-1] != 0x2c6a189e) {
                      puVar18 = puVar18 + 2;
                      uVar15 = uVar15 - 1;
                      if (uVar15 == 0) goto LAB_01240b68;
                    }
                    uVar20 = 0xfffe;
                    uVar15 = 0;
                    if (*puVar18 != 0xffffffff) {
                      uVar15 = (ulong)*puVar18;
                    }
                    *(int *)(puVar8 + 0x2c) = (int)uVar15;
                    if (*puVar14 == 0) goto LAB_01240b6c;
                  }
                  puVar10 = (ushort *)(uVar15 + (long)puVar14);
                  if (puVar10 == (ushort *)0x0) {
                    uVar20 = 0xfffe;
                  }
                  else {
LAB_01240bb8:
                    uVar20 = *puVar10;
                  }
                }
                goto LAB_01240b6c;
              }
              if (local_70[2] < 0x2b) {
                if ((1L << ((ulong)local_70[2] & 0x3f) & 0x7b800000000U) == 0) {
                  if ((ulong)local_70[2] != 0x26) goto LAB_01240be4;
                  uVar22 = uVar22 + 0x51;
                }
                else {
                  uVar22 = uVar22 + 0x1b;
                }
              }
              else {
LAB_01240be4:
                uVar22 = uVar22 + 1;
              }
            }
          }
LAB_01240460:
          if (iVar21 <= (int)uVar22) {
            return 0xfffe;
          }
        } while( true );
      }
    }
  }
  return 0xfffe;
LAB_01240b68:
  uVar20 = 0xfffe;
LAB_01240b6c:
  if (bVar11 == param_3) goto LAB_01240460;
  goto LAB_012407e8;
}

