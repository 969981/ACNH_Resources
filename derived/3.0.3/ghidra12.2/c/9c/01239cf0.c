
undefined8 FUN_01239cf0(uint *param_1,undefined4 *param_2,ulong param_3,uint param_4)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  uint uVar4;
  bool bVar5;
  bool bVar6;
  char cVar7;
  uint uVar8;
  uint uVar9;
  ulong uVar10;
  char *pcVar11;
  ushort *puVar12;
  undefined8 uVar13;
  char cVar14;
  ushort uVar15;
  int iVar16;
  ushort uVar17;
  uint *puVar18;
  int *piVar19;
  long lVar20;
  uint *puVar21;
  uint uVar22;
  uint uVar23;
  uint local_a0;
  uint local_9c;
  undefined8 local_98;
  uint local_80 [2];
  undefined *local_78;
  undefined4 local_70;
  undefined4 uStack_6c;
  uint *local_68;
  
  puVar2 = PTR_DAT_04bb43c0;
  local_68 = (uint *)0x0;
  local_78 = PTR_DAT_04bc0510 + 0x10;
  local_70 = *param_2;
  uStack_6c = param_2[1];
  lVar20 = *(long *)PTR_DAT_04bb43c0;
  uVar8 = FUN_0277d6c4(&local_70);
  if (*(long *)puVar2 == 0) {
LAB_01239dcc:
    puVar21 = (uint *)0x0;
  }
  else {
    lVar20 = *(long *)(lVar20 + 0x57e58);
    uVar8 = (uVar8 & 0xffff) - (uint)*(ushort *)(lVar20 + 0x1f8);
    if ((*(uint *)(lVar20 + 0x1d8) <= uVar8) ||
       (*(long *)(*(long *)(lVar20 + 0x1e0) + (long)(int)uVar8 * 8) == 0)) goto LAB_01239dcc;
    lVar20 = *(long *)PTR_DAT_04bc0428;
    uVar8 = FUN_0277d6c4(param_2);
    uVar8 = (uVar8 & 0xffff) - (uint)*(ushort *)(lVar20 + 0x1f8);
    if (*(uint *)(lVar20 + 0x1d8) <= uVar8) goto LAB_01239dcc;
    puVar21 = *(uint **)(*(long *)(lVar20 + 0x1e0) + (long)(int)uVar8 * 8);
    if (puVar21 != (uint *)0x0) {
      local_68 = puVar21;
    }
  }
  uVar10 = FUN_01b14e50(&local_78);
  if (((uVar10 & 1) == 0) && (uVar10 = FUN_01b14bf0(&local_78), (uVar10 & 1) == 0)) {
LAB_0123a410:
    uVar13 = 0;
  }
  else {
    if (puVar21 == (uint *)0x0) {
      uVar8 = 0xbc;
      bVar5 = false;
      bVar6 = false;
      goto LAB_0123a1bc;
    }
    puVar18 = (uint *)((long)puVar21 - (ulong)*puVar21);
    if (((*puVar21 == 0) || (puVar18 == (uint *)0x0)) || (*puVar18 == 0)) goto LAB_01239fd8;
    uVar8 = puVar18[1];
    if ((uVar8 == 0) || ((ulong)(ushort)puVar18[2] == 0)) {
LAB_01239ec0:
      if ((*puVar18 == 0) || ((uVar8 = puVar18[1], uVar8 == 0 || ((ulong)(ushort)puVar18[2] == 0))))
      {
LAB_01239fd8:
        uVar15 = 0;
        uVar8 = *puVar21;
        if ((uVar8 != 0) && (puVar21 != (uint *)(ulong)uVar8)) {
          puVar18 = (uint *)((long)puVar21 - (long)(ulong)uVar8);
          uVar15 = 0;
          if (*puVar18 != 0) {
            uVar8 = puVar18[1];
            if ((uVar8 != 0) && ((ulong)(ushort)puVar18[2] != 0)) {
              lVar20 = 0xc;
              if (*(char *)((long)puVar18 + 10) != '\0') {
                lVar20 = 0x1c;
              }
              lVar20 = (long)puVar18 + lVar20 + (ulong)(ushort)puVar18[2] * 8;
              if (lVar20 != 0) {
                uVar23 = 0;
                if ((ulong)uVar8 != 0) {
                  uVar23 = (uint)((ulong)((long)puVar21 - lVar20) / (ulong)uVar8);
                }
                if (*puVar18 <= uVar23) {
                  uVar23 = 0xffffffff;
                }
                if ((uVar23 < DAT_05326ec0) &&
                   (uVar15 = *(ushort *)(DAT_05326ec8 + (long)(int)uVar23 * 2), uVar15 < 0xbd))
                goto LAB_0123a06c;
              }
            }
            uVar15 = 0;
          }
        }
LAB_0123a06c:
        uVar17 = 0;
        bVar5 = uVar15 == 0x4e;
        uVar8 = *puVar21;
        if ((uVar8 != 0) && (puVar21 != (uint *)(ulong)uVar8)) {
          puVar18 = (uint *)((long)puVar21 - (long)(ulong)uVar8);
          if ((*puVar18 == 0) ||
             ((uVar8 = puVar18[1], uVar8 == 0 || ((ulong)(ushort)puVar18[2] == 0)))) {
LAB_0123a110:
            uVar17 = 0;
          }
          else {
            lVar20 = 0xc;
            if (*(char *)((long)puVar18 + 10) != '\0') {
              lVar20 = 0x1c;
            }
            lVar20 = (long)puVar18 + lVar20 + (ulong)(ushort)puVar18[2] * 8;
            uVar17 = 0;
            if (lVar20 != 0) {
              uVar23 = 0;
              if ((ulong)uVar8 != 0) {
                uVar23 = (uint)((ulong)((long)puVar21 - lVar20) / (ulong)uVar8);
              }
              if (*puVar18 <= uVar23) {
                uVar23 = 0xffffffff;
              }
              if ((DAT_05326ec0 <= uVar23) ||
                 (uVar17 = *(ushort *)(DAT_05326ec8 + (long)(int)uVar23 * 2), 0xbc < uVar17))
              goto LAB_0123a110;
            }
          }
        }
        uVar8 = 0;
        bVar6 = uVar17 == 0x9c;
        uVar23 = *puVar21;
        if ((uVar23 != 0) && (puVar21 != (uint *)(ulong)uVar23)) {
          puVar18 = (uint *)((long)puVar21 - (long)(ulong)uVar23);
          uVar8 = 0;
          if (*puVar18 != 0) {
            uVar8 = puVar18[1];
            if ((uVar8 != 0) && ((ulong)(ushort)puVar18[2] != 0)) {
              lVar20 = 0xc;
              if (*(char *)((long)puVar18 + 10) != '\0') {
                lVar20 = 0x1c;
              }
              lVar20 = (long)puVar18 + lVar20 + (ulong)(ushort)puVar18[2] * 8;
              if (lVar20 != 0) {
                uVar23 = 0;
                if ((ulong)uVar8 != 0) {
                  uVar23 = (uint)((ulong)((long)puVar21 - lVar20) / (ulong)uVar8);
                }
                if (*puVar18 <= uVar23) {
                  uVar23 = 0xffffffff;
                }
                if ((uVar23 < DAT_05326ec0) &&
                   (uVar8 = (uint)*(ushort *)(DAT_05326ec8 + (long)(int)uVar23 * 2), uVar8 < 0xbd))
                goto LAB_0123a1bc;
              }
            }
            uVar8 = 0;
          }
        }
LAB_0123a1bc:
        local_98 = CONCAT44(local_98._4_4_,0x9d);
        local_80[0] = uVar8;
        if (uVar8 == 0x9d) {
          if ((param_3 & 1) == 0) goto LAB_0123a410;
          local_98 = 0xfffe;
          FUN_0277d4ac(&local_98);
          uVar10 = FUN_0123e600(&local_98,param_2);
          if ((uVar10 & 1) != 0) {
            if (param_1 == (uint *)0x0) goto LAB_0123ae98;
            goto LAB_0123a1f8;
          }
        }
        puVar2 = PTR_DAT_04bbbc78;
        uVar23 = *(uint *)(DAT_05150358 + 0x1c0);
        if ((0 < (int)uVar23) ||
           (((*(long *)(DAT_05150358 + 0xb0) != 0 &&
             (puVar21 = *(uint **)(*(long *)(DAT_05150358 + 0xb0) + 8), puVar21 != (uint *)0x0)) &&
            (uVar23 = *puVar21, uVar23 != 0)))) {
          if (bVar6) {
            uVar8 = 0;
            lVar20 = DAT_05150358;
            do {
              if ((int)*(uint *)(lVar20 + 0x1c0) < 1) {
                if (((((*(long *)(lVar20 + 0xb0) != 0) &&
                      (puVar21 = *(uint **)(*(long *)(lVar20 + 0xb0) + 8), puVar21 != (uint *)0x0))
                     && ((*(uint *)(lVar20 + 200) <= uVar8 ||
                         (*(char *)(*(long *)(lVar20 + 0xd0) + (long)(int)uVar8) != '\0')))) &&
                    ((uVar8 < *puVar21 && (puVar21[1] != 0)))) && ((ushort)puVar21[2] != 0)) {
                  iVar16 = 0xc;
                  if (*(char *)((long)puVar21 + 10) != '\0') {
                    iVar16 = 0x1c;
                  }
                  puVar21 = (uint *)((ulong)(puVar21[1] * uVar8 + (uint)(ushort)puVar21[2] * 8 +
                                            iVar16) + (long)puVar21);
                  goto joined_r0x0123a3c0;
                }
              }
              else if (uVar8 < *(uint *)(lVar20 + 0x1c0)) {
                uVar22 = uVar8;
                if (*(uint *)(lVar20 + 0x1b0) <= uVar8) {
                  uVar22 = 0;
                }
                puVar21 = *(uint **)(*(long *)(lVar20 + 0x1b8) + (ulong)uVar22 * 8);
joined_r0x0123a3c0:
                if (puVar21 != (uint *)0x0) {
                  if (*puVar21 != 0) {
                    cVar7 = DAT_051513c0;
                    do {
                      puVar3 = PTR_DAT_04bbbc70;
                      if (cVar7 == '\0') {
                        cVar7 = '\x01';
                        *(undefined8 *)puVar2 = 0xffffffffffffffff;
                        *(undefined8 *)(puVar2 + 8) = 0xffffffffffffffff;
                        *(undefined4 *)(puVar2 + 0x60) = 0xffffffff;
                        *puVar3 = 1;
                        *(undefined8 *)(puVar2 + 0x10) = 0xffffffffffffffff;
                        *(undefined8 *)(puVar2 + 0x18) = 0xffffffffffffffff;
                        *(undefined8 *)(puVar2 + 0x20) = 0xffffffffffffffff;
                        *(undefined8 *)(puVar2 + 0x28) = 0xffffffffffffffff;
                        *(undefined8 *)(puVar2 + 0x30) = 0xffffffffffffffff;
                        *(undefined8 *)(puVar2 + 0x38) = 0xffffffffffffffff;
                        *(undefined8 *)(puVar2 + 0x40) = 0xffffffffffffffff;
                        *(undefined8 *)(puVar2 + 0x48) = 0xffffffffffffffff;
                        *(undefined8 *)(puVar2 + 0x50) = 0xffffffffffffffff;
                        *(undefined8 *)(puVar2 + 0x58) = 0xffffffffffffffff;
                      }
                      else {
                        uVar22 = *(uint *)(puVar2 + 0x34);
                        if (-1 < (int)uVar22) {
                          if ((ushort *)((ulong)uVar22 + (long)puVar21) != (ushort *)0x0) {
                            uVar22 = (uint)*(ushort *)((ulong)uVar22 + (long)puVar21);
                            goto LAB_0123a3dc;
                          }
                          break;
                        }
                        if (uVar22 != 0xffffffff) break;
                      }
                      puVar18 = (uint *)(ulong)*puVar21;
                      uVar22 = 0xfffe;
                      if ((*puVar21 == 0) || (puVar21 == puVar18)) goto LAB_0123a3dc;
                      lVar20 = 0xc;
                      if (*(char *)((long)puVar21 + (10 - (long)puVar18)) != '\0') {
                        lVar20 = 0x1c;
                      }
                      lVar20 = (long)puVar21 + (lVar20 - (long)puVar18);
                      if (lVar20 == 0) goto LAB_0123a3dc;
                      uVar10 = (ulong)*(ushort *)((long)puVar21 + (8 - (long)puVar18));
                      *(undefined4 *)(puVar2 + 0x34) = 0xfffffffe;
                      if (uVar10 == 0) goto LAB_0123a3dc;
                      piVar19 = (int *)(lVar20 + 4);
                      while (piVar19[-1] != -0x485b96aa) {
                        piVar19 = piVar19 + 2;
                        uVar10 = uVar10 - 1;
                        if (uVar10 == 0) goto LAB_0123a3d8;
                      }
                      iVar16 = 0;
                      if (*piVar19 != -1) {
                        iVar16 = *piVar19;
                      }
                      *(int *)(puVar2 + 0x34) = iVar16;
                      if (*puVar21 == 0) break;
                    } while( true );
                  }
LAB_0123a3d8:
                  uVar22 = 0xfffe;
LAB_0123a3dc:
                  uVar9 = FUN_0277d6c4(param_2);
                  if (uVar9 == uVar22) {
                    if (param_1 == (uint *)0x0) goto LAB_0123ae98;
                    uVar8 = DAT_0514cb58 ^ DAT_0514cb58 << 0xb;
                    DAT_0514cb58 = uVar8 >> 8 ^ DAT_0514cb64 >> 0x13 ^ uVar8 ^ DAT_0514cb64;
                    uVar8 = DAT_0514cb5c ^ DAT_0514cb5c << 0xb;
                    DAT_0514cb5c = uVar8 >> 8 ^ DAT_0514cb58 >> 0x13 ^ uVar8 ^ DAT_0514cb58;
                    uVar8 = DAT_0514cb60 ^ DAT_0514cb60 << 0xb;
                    DAT_0514cb60 = uVar8 >> 8 ^ DAT_0514cb5c >> 0x13 ^ uVar8 ^ DAT_0514cb5c;
                    uVar8 = DAT_0514cb64 ^ DAT_0514cb64 << 0xb;
                    uVar8 = uVar8 >> 8 ^ DAT_0514cb60 >> 0x13 ^ uVar8 ^ DAT_0514cb60;
                    iVar16 = (int)((ulong)DAT_0514cb58 * 3 >> 0x20);
                    DAT_0514cb64 = uVar8;
                    if (iVar16 != 0) {
                      uVar23 = DAT_0514cb58 ^ DAT_0514cb58 << 0xb;
                      uVar22 = DAT_0514cb5c ^ DAT_0514cb5c << 0xb;
                      uVar23 = uVar23 >> 8 ^ uVar8 >> 0x13 ^ uVar23 ^ uVar8;
                      DAT_0514cb64 = uVar23;
                      uVar9 = uVar8;
                      uVar4 = DAT_0514cb60;
                      DAT_0514cb58 = DAT_0514cb5c;
                      if (iVar16 != 1) {
                        DAT_0514cb64 = uVar22 >> 8 ^ uVar23 >> 0x13 ^ uVar22 ^ uVar23;
                        uVar9 = uVar23;
                        uVar4 = uVar8;
                        DAT_0514cb58 = DAT_0514cb60;
                      }
                      DAT_0514cb5c = uVar4;
                      DAT_0514cb60 = uVar9;
                    }
                    local_98._0_4_ =
                         *(uint *)(&DAT_041748c8 +
                                  ((ulong)DAT_0514cb64 + (ulong)DAT_0514cb64 * 2 >> 0x1e & 0xc));
                    goto LAB_0123ae7c;
                  }
                  lVar20 = DAT_05150358;
                }
              }
              uVar8 = uVar8 + 1;
            } while (uVar8 != uVar23);
          }
          else if (uVar8 == 0x9d) {
            uVar8 = 0;
            lVar20 = DAT_05150358;
            do {
              if ((int)*(uint *)(lVar20 + 0x1c0) < 1) {
                if ((((*(long *)(lVar20 + 0xb0) != 0) &&
                     (puVar21 = *(uint **)(*(long *)(lVar20 + 0xb0) + 8), puVar21 != (uint *)0x0))
                    && ((*(uint *)(lVar20 + 200) <= uVar8 ||
                        (*(char *)(*(long *)(lVar20 + 0xd0) + (long)(int)uVar8) != '\0')))) &&
                   (((uVar8 < *puVar21 && (puVar21[1] != 0)) && ((ushort)puVar21[2] != 0)))) {
                  iVar16 = 0xc;
                  if (*(char *)((long)puVar21 + 10) != '\0') {
                    iVar16 = 0x1c;
                  }
                  puVar21 = (uint *)((ulong)(puVar21[1] * uVar8 + (uint)(ushort)puVar21[2] * 8 +
                                            iVar16) + (long)puVar21);
                  goto joined_r0x0123a5d0;
                }
              }
              else if (uVar8 < *(uint *)(lVar20 + 0x1c0)) {
                uVar22 = uVar8;
                if (*(uint *)(lVar20 + 0x1b0) <= uVar8) {
                  uVar22 = 0;
                }
                puVar21 = *(uint **)(*(long *)(lVar20 + 0x1b8) + (ulong)uVar22 * 8);
joined_r0x0123a5d0:
                if (puVar21 != (uint *)0x0) {
                  if (*puVar21 != 0) {
                    cVar7 = DAT_051513c0;
                    do {
                      puVar3 = PTR_DAT_04bbbc70;
                      if (cVar7 == '\0') {
                        cVar7 = '\x01';
                        *(undefined8 *)puVar2 = 0xffffffffffffffff;
                        *(undefined8 *)(puVar2 + 8) = 0xffffffffffffffff;
                        *(undefined4 *)(puVar2 + 0x60) = 0xffffffff;
                        *puVar3 = 1;
                        *(undefined8 *)(puVar2 + 0x10) = 0xffffffffffffffff;
                        *(undefined8 *)(puVar2 + 0x18) = 0xffffffffffffffff;
                        *(undefined8 *)(puVar2 + 0x20) = 0xffffffffffffffff;
                        *(undefined8 *)(puVar2 + 0x28) = 0xffffffffffffffff;
                        *(undefined8 *)(puVar2 + 0x30) = 0xffffffffffffffff;
                        *(undefined8 *)(puVar2 + 0x38) = 0xffffffffffffffff;
                        *(undefined8 *)(puVar2 + 0x40) = 0xffffffffffffffff;
                        *(undefined8 *)(puVar2 + 0x48) = 0xffffffffffffffff;
                        *(undefined8 *)(puVar2 + 0x50) = 0xffffffffffffffff;
                        *(undefined8 *)(puVar2 + 0x58) = 0xffffffffffffffff;
                      }
                      else {
                        uVar22 = *(uint *)(puVar2 + 0x34);
                        if (-1 < (int)uVar22) {
                          if ((ushort *)((ulong)uVar22 + (long)puVar21) != (ushort *)0x0) {
                            uVar22 = (uint)*(ushort *)((ulong)uVar22 + (long)puVar21);
                            goto LAB_0123a5ec;
                          }
                          break;
                        }
                        if (uVar22 != 0xffffffff) break;
                      }
                      puVar18 = (uint *)(ulong)*puVar21;
                      uVar22 = 0xfffe;
                      if ((*puVar21 == 0) || (puVar21 == puVar18)) goto LAB_0123a5ec;
                      lVar20 = 0xc;
                      if (*(char *)((long)puVar21 + (10 - (long)puVar18)) != '\0') {
                        lVar20 = 0x1c;
                      }
                      lVar20 = (long)puVar21 + (lVar20 - (long)puVar18);
                      if (lVar20 == 0) goto LAB_0123a5ec;
                      uVar10 = (ulong)*(ushort *)((long)puVar21 + (8 - (long)puVar18));
                      *(undefined4 *)(puVar2 + 0x34) = 0xfffffffe;
                      if (uVar10 == 0) goto LAB_0123a5ec;
                      piVar19 = (int *)(lVar20 + 4);
                      while (piVar19[-1] != -0x485b96aa) {
                        piVar19 = piVar19 + 2;
                        uVar10 = uVar10 - 1;
                        if (uVar10 == 0) goto LAB_0123a5e8;
                      }
                      iVar16 = 0;
                      if (*piVar19 != -1) {
                        iVar16 = *piVar19;
                      }
                      *(int *)(puVar2 + 0x34) = iVar16;
                      if (*puVar21 == 0) break;
                    } while( true );
                  }
LAB_0123a5e8:
                  uVar22 = 0xfffe;
LAB_0123a5ec:
                  uVar9 = FUN_0277d6c4(param_2);
                  if (uVar9 == uVar22) {
                    puVar12 = (ushort *)FUN_01246470(puVar21,0x10,0x54706054,DAT_05151388);
                    if (puVar12 == (ushort *)0x0) {
                      local_98._0_4_ = 0;
                    }
                    else {
                      local_98._0_4_ = (uint)*puVar12;
                    }
                    goto LAB_0123ae7c;
                  }
                  lVar20 = DAT_05150358;
                }
              }
              uVar8 = uVar8 + 1;
            } while (uVar8 != uVar23);
          }
          else {
            uVar8 = 0;
            do {
              if ((int)*(uint *)(DAT_05150358 + 0x1c0) < 1) {
                if ((((*(long *)(DAT_05150358 + 0xb0) != 0) &&
                     (puVar21 = *(uint **)(*(long *)(DAT_05150358 + 0xb0) + 8),
                     puVar21 != (uint *)0x0)) &&
                    ((*(uint *)(DAT_05150358 + 200) <= uVar8 ||
                     (*(char *)(*(long *)(DAT_05150358 + 0xd0) + (long)(int)uVar8) != '\0')))) &&
                   (((uVar8 < *puVar21 && (puVar21[1] != 0)) && ((ushort)puVar21[2] != 0)))) {
                  iVar16 = 0xc;
                  if (*(char *)((long)puVar21 + 10) != '\0') {
                    iVar16 = 0x1c;
                  }
                  puVar21 = (uint *)((ulong)(puVar21[1] * uVar8 + (uint)(ushort)puVar21[2] * 8 +
                                            iVar16) + (long)puVar21);
                  goto joined_r0x0123a7e8;
                }
              }
              else if (uVar8 < *(uint *)(DAT_05150358 + 0x1c0)) {
                uVar22 = uVar8;
                if (*(uint *)(DAT_05150358 + 0x1b0) <= uVar8) {
                  uVar22 = 0;
                }
                puVar21 = *(uint **)(*(long *)(DAT_05150358 + 0x1b8) + (ulong)uVar22 * 8);
joined_r0x0123a7e8:
                if (puVar21 != (uint *)0x0) {
                  if (bVar5) {
                    if (*puVar21 != 0) {
                      cVar7 = DAT_051513c0;
                      do {
                        puVar3 = PTR_DAT_04bbbc70;
                        if (cVar7 == '\0') {
                          cVar7 = '\x01';
                          *(undefined8 *)puVar2 = 0xffffffffffffffff;
                          *(undefined8 *)(puVar2 + 8) = 0xffffffffffffffff;
                          *(undefined4 *)(puVar2 + 0x60) = 0xffffffff;
                          *puVar3 = 1;
                          *(undefined8 *)(puVar2 + 0x10) = 0xffffffffffffffff;
                          *(undefined8 *)(puVar2 + 0x18) = 0xffffffffffffffff;
                          *(undefined8 *)(puVar2 + 0x20) = 0xffffffffffffffff;
                          *(undefined8 *)(puVar2 + 0x28) = 0xffffffffffffffff;
                          *(undefined8 *)(puVar2 + 0x30) = 0xffffffffffffffff;
                          *(undefined8 *)(puVar2 + 0x38) = 0xffffffffffffffff;
                          *(undefined8 *)(puVar2 + 0x40) = 0xffffffffffffffff;
                          *(undefined8 *)(puVar2 + 0x48) = 0xffffffffffffffff;
                          *(undefined8 *)(puVar2 + 0x50) = 0xffffffffffffffff;
                          *(undefined8 *)(puVar2 + 0x58) = 0xffffffffffffffff;
                        }
                        else {
                          uVar22 = *(uint *)(puVar2 + 0x20);
                          if (-1 < (int)uVar22) {
                            if ((ushort *)((ulong)uVar22 + (long)puVar21) != (ushort *)0x0) {
                              uVar22 = (uint)*(ushort *)((ulong)uVar22 + (long)puVar21);
                              goto LAB_0123a804;
                            }
                            break;
                          }
                          if (uVar22 != 0xffffffff) break;
                        }
                        puVar18 = (uint *)(ulong)*puVar21;
                        uVar22 = 0xfffe;
                        if ((*puVar21 == 0) || (puVar21 == puVar18)) goto LAB_0123a804;
                        lVar20 = 0xc;
                        if (*(char *)((long)puVar21 + (10 - (long)puVar18)) != '\0') {
                          lVar20 = 0x1c;
                        }
                        lVar20 = (long)puVar21 + (lVar20 - (long)puVar18);
                        if (lVar20 == 0) goto LAB_0123a804;
                        uVar10 = (ulong)*(ushort *)((long)puVar21 + (8 - (long)puVar18));
                        *(undefined4 *)(puVar2 + 0x20) = 0xfffffffe;
                        if (uVar10 == 0) goto LAB_0123a804;
                        piVar19 = (int *)(lVar20 + 4);
                        while (piVar19[-1] != -0xb9870ed) {
                          piVar19 = piVar19 + 2;
                          uVar10 = uVar10 - 1;
                          if (uVar10 == 0) goto LAB_0123a800;
                        }
                        iVar16 = 0;
                        if (*piVar19 != -1) {
                          iVar16 = *piVar19;
                        }
                        *(int *)(puVar2 + 0x20) = iVar16;
                        if (*puVar21 == 0) break;
                      } while( true );
                    }
LAB_0123a800:
                    uVar22 = 0xfffe;
LAB_0123a804:
                    uVar9 = FUN_0277d6c4(param_2);
                    if (uVar9 != uVar22) goto LAB_0123a930;
                    if (*puVar21 == 0) goto LAB_0123aa1c;
                    cVar7 = DAT_051513c0;
                    do {
                      puVar3 = PTR_DAT_04bbbc70;
                      if (cVar7 == '\0') {
                        cVar7 = '\x01';
                        *(undefined8 *)puVar2 = 0xffffffffffffffff;
                        *(undefined8 *)(puVar2 + 8) = 0xffffffffffffffff;
                        *(undefined4 *)(puVar2 + 0x60) = 0xffffffff;
                        *puVar3 = 1;
                        *(undefined8 *)(puVar2 + 0x10) = 0xffffffffffffffff;
                        *(undefined8 *)(puVar2 + 0x18) = 0xffffffffffffffff;
                        *(undefined8 *)(puVar2 + 0x20) = 0xffffffffffffffff;
                        *(undefined8 *)(puVar2 + 0x28) = 0xffffffffffffffff;
                        *(undefined8 *)(puVar2 + 0x30) = 0xffffffffffffffff;
                        *(undefined8 *)(puVar2 + 0x38) = 0xffffffffffffffff;
                        *(undefined8 *)(puVar2 + 0x40) = 0xffffffffffffffff;
                        *(undefined8 *)(puVar2 + 0x48) = 0xffffffffffffffff;
                        *(undefined8 *)(puVar2 + 0x50) = 0xffffffffffffffff;
                        *(undefined8 *)(puVar2 + 0x58) = 0xffffffffffffffff;
                      }
                      else {
                        uVar22 = *(uint *)(puVar2 + 0x4c);
                        if (-1 < (int)uVar22) {
                          if (((byte *)((ulong)uVar22 + (long)puVar21) == (byte *)0x0) ||
                             (*(byte *)((ulong)uVar22 + (long)puVar21) < 2)) goto LAB_0123a930;
                          puVar12 = (ushort *)FUN_01246470(puVar21,0x10,0x54706054,DAT_05151388);
                          if (puVar12 == (ushort *)0x0) {
                            uVar15 = 0;
                          }
                          else {
                            uVar15 = *puVar12;
                          }
                          local_80[0] = (uint)uVar15;
                          local_80[1] = 0;
                          FUN_0277d4ac(local_80);
                          FUN_0124c030(&local_98,local_80);
                          if ((param_4 & 1) == 0) {
                            pcVar11 = (char *)FUN_01246470(puVar21,0x13,0xf5a73337,
                                                           *(undefined8 *)PTR_DAT_04bbbcb0);
                            if ((pcVar11 == (char *)0x0) || (*pcVar11 != '\x03')) goto LAB_0123a650;
                          }
                          else {
                            uVar10 = FUN_0124ea54(&local_98);
                            if ((uVar10 & 1) == 0) {
                              pcVar11 = (char *)FUN_01246470(puVar21,0x13,0xf5a73337,
                                                             *(undefined8 *)PTR_DAT_04bbbcb0);
                              if ((pcVar11 == (char *)0x0) || (*pcVar11 != '\x04'))
                              goto LAB_0123a650;
                            }
                            else {
                              cVar7 = FUN_01b15798(&local_78);
                              pcVar11 = (char *)FUN_01246470(puVar21,0x13,0xf5a73337,
                                                             *(undefined8 *)PTR_DAT_04bbbcb0);
                              if (pcVar11 == (char *)0x0) {
                                cVar14 = '\0';
                              }
                              else {
                                cVar14 = *pcVar11;
                              }
                              if (cVar14 != cVar7) goto LAB_0123a650;
                            }
                          }
                          if (param_1 != (uint *)0x0) {
                            puVar12 = (ushort *)FUN_01246470(puVar21,0x10,0x54706054,DAT_05151388);
                            if (puVar12 == (ushort *)0x0) {
                              uVar15 = 0;
                            }
                            else {
                              uVar15 = *puVar12;
                            }
                            local_a0 = (uint)uVar15;
                            local_9c = 0;
                            FUN_0277d4ac(&local_a0);
                            *param_1 = local_a0;
                            param_1[1] = local_9c;
                          }
                          goto LAB_0123ae98;
                        }
                        if (uVar22 != 0xffffffff) goto LAB_0123a930;
                      }
                      lVar20 = (long)puVar21 - (ulong)*puVar21;
                      if ((*puVar21 == 0) || (lVar20 == 0)) goto LAB_0123a930;
                      lVar1 = 0xc;
                      if (*(char *)(lVar20 + 10) != '\0') {
                        lVar1 = 0x1c;
                      }
                      if (lVar1 + lVar20 == 0) goto LAB_0123a930;
                      uVar10 = (ulong)*(ushort *)(lVar20 + 8);
                      *(undefined4 *)(puVar2 + 0x4c) = 0xfffffffe;
                      if (uVar10 == 0) goto LAB_0123a930;
                      piVar19 = (int *)(lVar1 + lVar20 + 4);
                      while (piVar19[-1] != -0xa58ccc9) {
                        piVar19 = piVar19 + 2;
                        uVar10 = uVar10 - 1;
                        if (uVar10 == 0) goto LAB_0123a930;
                      }
                      uVar22 = 0xfffe;
                      iVar16 = 0;
                      if (*piVar19 != -1) {
                        iVar16 = *piVar19;
                      }
                      *(int *)(puVar2 + 0x4c) = iVar16;
                    } while (*puVar21 != 0);
                  }
                  else {
LAB_0123a930:
                    if (*puVar21 != 0) {
                      cVar7 = DAT_051513c0;
                      do {
                        puVar3 = PTR_DAT_04bbbc70;
                        if (cVar7 == '\0') {
                          cVar7 = '\x01';
                          *(undefined8 *)puVar2 = 0xffffffffffffffff;
                          *(undefined8 *)(puVar2 + 8) = 0xffffffffffffffff;
                          *(undefined4 *)(puVar2 + 0x60) = 0xffffffff;
                          *puVar3 = 1;
                          *(undefined8 *)(puVar2 + 0x10) = 0xffffffffffffffff;
                          *(undefined8 *)(puVar2 + 0x18) = 0xffffffffffffffff;
                          *(undefined8 *)(puVar2 + 0x20) = 0xffffffffffffffff;
                          *(undefined8 *)(puVar2 + 0x28) = 0xffffffffffffffff;
                          *(undefined8 *)(puVar2 + 0x30) = 0xffffffffffffffff;
                          *(undefined8 *)(puVar2 + 0x38) = 0xffffffffffffffff;
                          *(undefined8 *)(puVar2 + 0x40) = 0xffffffffffffffff;
                          *(undefined8 *)(puVar2 + 0x48) = 0xffffffffffffffff;
                          *(undefined8 *)(puVar2 + 0x50) = 0xffffffffffffffff;
                          *(undefined8 *)(puVar2 + 0x58) = 0xffffffffffffffff;
                        }
                        else {
                          uVar22 = *(uint *)(puVar2 + 0x10);
                          if (-1 < (int)uVar22) {
                            if ((ushort *)((ulong)uVar22 + (long)puVar21) == (ushort *)0x0) break;
                            uVar22 = (uint)*(ushort *)((ulong)uVar22 + (long)puVar21);
                            goto LAB_0123aa20;
                          }
                          if (uVar22 != 0xffffffff) break;
                        }
                        puVar18 = (uint *)(ulong)*puVar21;
                        uVar22 = 0xfffe;
                        if ((*puVar21 == 0) || (puVar21 == puVar18)) goto LAB_0123aa20;
                        lVar20 = 0xc;
                        if (*(char *)((long)puVar21 + (10 - (long)puVar18)) != '\0') {
                          lVar20 = 0x1c;
                        }
                        lVar20 = (long)puVar21 + (lVar20 - (long)puVar18);
                        if (lVar20 == 0) goto LAB_0123aa20;
                        uVar10 = (ulong)*(ushort *)((long)puVar21 + (8 - (long)puVar18));
                        *(undefined4 *)(puVar2 + 0x10) = 0xfffffffe;
                        if (uVar10 == 0) goto LAB_0123aa20;
                        piVar19 = (int *)(lVar20 + 4);
                        while (piVar19[-1] != 0x6ac5a6df) {
                          piVar19 = piVar19 + 2;
                          uVar10 = uVar10 - 1;
                          if (uVar10 == 0) goto LAB_0123aa1c;
                        }
                        uVar22 = 0xfffe;
                        iVar16 = 0;
                        if (*piVar19 != -1) {
                          iVar16 = *piVar19;
                        }
                        *(int *)(puVar2 + 0x10) = iVar16;
                        if (*puVar21 == 0) goto LAB_0123aa20;
                      } while( true );
                    }
LAB_0123aa1c:
                    uVar22 = 0xfffe;
                  }
LAB_0123aa20:
                  uVar9 = FUN_0277d6c4(param_2);
                  if (uVar9 != uVar22) {
                    if (*puVar21 != 0) {
                      cVar7 = DAT_051513c0;
                      do {
                        puVar3 = PTR_DAT_04bbbc70;
                        if (cVar7 == '\0') {
                          cVar7 = '\x01';
                          *(undefined8 *)puVar2 = 0xffffffffffffffff;
                          *(undefined8 *)(puVar2 + 8) = 0xffffffffffffffff;
                          *(undefined4 *)(puVar2 + 0x60) = 0xffffffff;
                          *puVar3 = 1;
                          *(undefined8 *)(puVar2 + 0x10) = 0xffffffffffffffff;
                          *(undefined8 *)(puVar2 + 0x18) = 0xffffffffffffffff;
                          *(undefined8 *)(puVar2 + 0x20) = 0xffffffffffffffff;
                          *(undefined8 *)(puVar2 + 0x28) = 0xffffffffffffffff;
                          *(undefined8 *)(puVar2 + 0x30) = 0xffffffffffffffff;
                          *(undefined8 *)(puVar2 + 0x38) = 0xffffffffffffffff;
                          *(undefined8 *)(puVar2 + 0x40) = 0xffffffffffffffff;
                          *(undefined8 *)(puVar2 + 0x48) = 0xffffffffffffffff;
                          *(undefined8 *)(puVar2 + 0x50) = 0xffffffffffffffff;
                          *(undefined8 *)(puVar2 + 0x58) = 0xffffffffffffffff;
                        }
                        else {
                          uVar22 = *(uint *)(puVar2 + 0x14);
                          if (-1 < (int)uVar22) {
                            if ((ushort *)((ulong)uVar22 + (long)puVar21) != (ushort *)0x0) {
                              uVar22 = (uint)*(ushort *)((ulong)uVar22 + (long)puVar21);
                              goto LAB_0123ab1c;
                            }
                            break;
                          }
                          if (uVar22 != 0xffffffff) break;
                        }
                        puVar18 = (uint *)(ulong)*puVar21;
                        uVar22 = 0xfffe;
                        if ((*puVar21 == 0) || (puVar21 == puVar18)) goto LAB_0123ab1c;
                        lVar20 = 0xc;
                        if (*(char *)((long)puVar21 + (10 - (long)puVar18)) != '\0') {
                          lVar20 = 0x1c;
                        }
                        lVar20 = (long)puVar21 + (lVar20 - (long)puVar18);
                        if (lVar20 == 0) goto LAB_0123ab1c;
                        uVar10 = (ulong)*(ushort *)((long)puVar21 + (8 - (long)puVar18));
                        *(undefined4 *)(puVar2 + 0x14) = 0xfffffffe;
                        if (uVar10 == 0) goto LAB_0123ab1c;
                        piVar19 = (int *)(lVar20 + 4);
                        while (piVar19[-1] != -0x2a6007a2) {
                          piVar19 = piVar19 + 2;
                          uVar10 = uVar10 - 1;
                          if (uVar10 == 0) goto LAB_0123ab18;
                        }
                        iVar16 = 0;
                        if (*piVar19 != -1) {
                          iVar16 = *piVar19;
                        }
                        *(int *)(puVar2 + 0x14) = iVar16;
                        if (*puVar21 == 0) break;
                      } while( true );
                    }
LAB_0123ab18:
                    uVar22 = 0xfffe;
LAB_0123ab1c:
                    uVar9 = FUN_0277d6c4(param_2);
                    if (uVar9 != uVar22) {
                      if ((param_3 & 1) == 0) {
                        if (*puVar21 != 0) {
                          cVar7 = DAT_051513c0;
                          do {
                            puVar3 = PTR_DAT_04bbbc70;
                            if (cVar7 == '\0') {
                              cVar7 = '\x01';
                              *(undefined8 *)puVar2 = 0xffffffffffffffff;
                              *(undefined8 *)(puVar2 + 8) = 0xffffffffffffffff;
                              *(undefined4 *)(puVar2 + 0x60) = 0xffffffff;
                              *puVar3 = 1;
                              *(undefined8 *)(puVar2 + 0x10) = 0xffffffffffffffff;
                              *(undefined8 *)(puVar2 + 0x18) = 0xffffffffffffffff;
                              *(undefined8 *)(puVar2 + 0x20) = 0xffffffffffffffff;
                              *(undefined8 *)(puVar2 + 0x28) = 0xffffffffffffffff;
                              *(undefined8 *)(puVar2 + 0x30) = 0xffffffffffffffff;
                              *(undefined8 *)(puVar2 + 0x38) = 0xffffffffffffffff;
                              *(undefined8 *)(puVar2 + 0x40) = 0xffffffffffffffff;
                              *(undefined8 *)(puVar2 + 0x48) = 0xffffffffffffffff;
                              *(undefined8 *)(puVar2 + 0x50) = 0xffffffffffffffff;
                              *(undefined8 *)(puVar2 + 0x58) = 0xffffffffffffffff;
                            }
                            else {
                              uVar22 = *(uint *)(puVar2 + 0x18);
                              if (-1 < (int)uVar22) {
                                if ((ushort *)((ulong)uVar22 + (long)puVar21) != (ushort *)0x0) {
                                  uVar22 = (uint)*(ushort *)((ulong)uVar22 + (long)puVar21);
                                  goto LAB_0123a640;
                                }
                                break;
                              }
                              if (uVar22 != 0xffffffff) break;
                            }
                            puVar18 = (uint *)(ulong)*puVar21;
                            uVar22 = 0xfffe;
                            if ((*puVar21 == 0) || (puVar21 == puVar18)) goto LAB_0123a640;
                            lVar20 = 0xc;
                            if (*(char *)((long)puVar21 + (10 - (long)puVar18)) != '\0') {
                              lVar20 = 0x1c;
                            }
                            lVar20 = (long)puVar21 + (lVar20 - (long)puVar18);
                            if (lVar20 == 0) goto LAB_0123a640;
                            uVar10 = (ulong)*(ushort *)((long)puVar21 + (8 - (long)puVar18));
                            *(undefined4 *)(puVar2 + 0x18) = 0xfffffffe;
                            if (uVar10 == 0) goto LAB_0123a640;
                            piVar19 = (int *)(lVar20 + 4);
                            while (piVar19[-1] != -0x17002e12) {
                              piVar19 = piVar19 + 2;
                              uVar10 = uVar10 - 1;
                              if (uVar10 == 0) goto LAB_0123a63c;
                            }
                            iVar16 = 0;
                            if (*piVar19 != -1) {
                              iVar16 = *piVar19;
                            }
                            *(int *)(puVar2 + 0x18) = iVar16;
                            if (*puVar21 == 0) break;
                          } while( true );
                        }
LAB_0123a63c:
                        uVar22 = 0xfffe;
LAB_0123a640:
                        uVar9 = FUN_0277d6c4(param_2);
                        if (uVar9 == uVar22) goto LAB_0123ae14;
                      }
                      goto LAB_0123a650;
                    }
                  }
LAB_0123ae14:
                  if (param_1 != (uint *)0x0) {
                    puVar12 = (ushort *)FUN_01246470(puVar21,0x10,0x54706054,DAT_05151388);
                    if (puVar12 == (ushort *)0x0) {
                      local_98._0_4_ = 0;
                    }
                    else {
                      local_98._0_4_ = (uint)*puVar12;
                    }
LAB_0123ae7c:
                    local_98._0_4_ = (uint)local_98 & 0xffff;
                    local_98 = (ulong)(uint)local_98;
                    FUN_0277d4ac(&local_98);
                    *param_1 = (uint)local_98;
                    param_1[1] = local_98._4_4_;
                  }
                  goto LAB_0123ae98;
                }
              }
LAB_0123a650:
              uVar8 = uVar8 + 1;
            } while (uVar8 != uVar23);
          }
        }
        goto LAB_0123a410;
      }
      lVar20 = 0xc;
      if (*(char *)((long)puVar18 + 10) != '\0') {
        lVar20 = 0x1c;
      }
      lVar20 = (long)puVar18 + lVar20 + (ulong)(ushort)puVar18[2] * 8;
      if (lVar20 == 0) goto LAB_01239fd8;
      uVar23 = 0;
      if ((ulong)uVar8 != 0) {
        uVar23 = (uint)((ulong)((long)puVar21 - lVar20) / (ulong)uVar8);
      }
      if (*puVar18 <= uVar23) {
        uVar23 = 0xffffffff;
      }
      if (((DAT_05326ec0 <= uVar23) ||
          (uVar15 = *(ushort *)(DAT_05326ec8 + (long)(int)uVar23 * 2), 0xbc < uVar15)) ||
         (uVar15 != 0x53)) goto LAB_01239fd8;
      if (param_1 == (uint *)0x0) goto LAB_0123ae98;
      if (DAT_04c487d4 == -1) {
LAB_01239fcc:
        FUN_01201740(&local_98);
      }
      else {
        local_98 = CONCAT44(local_98._4_4_,3);
        puVar21 = (uint *)(PTR_DAT_04bc39f8 + (ulong)(uint)(int)DAT_04c487d4 * 8);
        if (0xff < (uint)(int)DAT_04c487d4) {
          puVar21 = (uint *)PTR_DAT_04bc39f8;
        }
        if ((*puVar21 >> 3 & 1) == 0) goto LAB_01239fcc;
        uVar8 = DAT_0514cb58 ^ DAT_0514cb58 << 0xb;
        DAT_0514cb58 = DAT_0514cb5c;
        DAT_0514cb5c = DAT_0514cb60;
        uVar8 = uVar8 >> 8 ^ DAT_0514cb64 >> 0x13 ^ uVar8 ^ DAT_0514cb64;
        DAT_0514cb60 = DAT_0514cb64;
        iVar16 = (int)((ulong)uVar8 + (ulong)uVar8 * 2 >> 0x20);
        DAT_0514cb64 = uVar8;
        if (iVar16 == 1) {
          FUN_01201820(&local_98);
        }
        else {
          if (iVar16 == 0) goto LAB_01239fcc;
          local_98 = 0xed0f;
          FUN_0277d4ac(&local_98);
        }
      }
LAB_0123a1f8:
      *param_1 = (uint)local_98;
      param_1[1] = local_98._4_4_;
    }
    else {
      lVar20 = 0xc;
      if (*(char *)((long)puVar18 + 10) != '\0') {
        lVar20 = 0x1c;
      }
      lVar20 = (long)puVar18 + lVar20 + (ulong)(ushort)puVar18[2] * 8;
      if (lVar20 == 0) goto LAB_01239ec0;
      uVar23 = 0;
      if ((ulong)uVar8 != 0) {
        uVar23 = (uint)((ulong)((long)puVar21 - lVar20) / (ulong)uVar8);
      }
      if (*puVar18 <= uVar23) {
        uVar23 = 0xffffffff;
      }
      if ((DAT_05326ec0 <= uVar23) || (*(short *)(DAT_05326ec8 + (long)(int)uVar23 * 2) != 0x52))
      goto LAB_01239ec0;
      if (param_1 != (uint *)0x0) {
        FUN_01201880(&local_98);
        goto LAB_0123a1f8;
      }
    }
LAB_0123ae98:
    uVar13 = 1;
  }
  return uVar13;
}

