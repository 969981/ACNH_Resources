
bool FUN_01b6c4a0(long *param_1,ushort *param_2,uint *param_3,uint *param_4)

{
  bool bVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  byte bVar4;
  ushort uVar5;
  undefined *puVar6;
  undefined *puVar7;
  uint uVar8;
  uint uVar9;
  int iVar10;
  int iVar11;
  long lVar12;
  undefined1 uVar13;
  char cVar14;
  int iVar15;
  ulong uVar16;
  long lVar17;
  uint *puVar18;
  int *piVar19;
  undefined8 uVar20;
  short *psVar21;
  undefined8 *puVar22;
  uint *puVar23;
  ulong uVar24;
  undefined8 *puVar25;
  ulong uVar26;
  ushort *puVar27;
  long *plVar28;
  int *piVar29;
  uint local_209c;
  undefined8 local_2098;
  undefined8 uStack_2090;
  undefined8 local_2088;
  undefined8 *local_2080;
  undefined6 local_2078;
  undefined2 uStack_2072;
  undefined6 local_2070;
  undefined2 uStack_206a;
  long local_2068 [2];
  long local_2058 [5];
  undefined1 auStack_2030 [4032];
  undefined8 local_1070;
  undefined8 local_1068 [513];
  
  puVar7 = PTR_DAT_04bc0610;
  puVar6 = PTR_DAT_04bc0608;
  if (*param_3 == 0) {
    return false;
  }
  cVar14 = *PTR_DAT_04bc0608;
LAB_01b6c508:
  if (cVar14 == '\0') {
    cVar14 = '\x01';
    *(undefined8 *)puVar7 = 0xffffffffffffffff;
    *(undefined8 *)(puVar7 + 8) = 0xffffffffffffffff;
    *puVar6 = 1;
    *(undefined8 *)(puVar7 + 0x10) = 0xffffffffffffffff;
    *(undefined8 *)(puVar7 + 0x18) = 0xffffffffffffffff;
    *(undefined8 *)(puVar7 + 0x20) = 0xffffffffffffffff;
    *(undefined8 *)(puVar7 + 0x28) = 0xffffffffffffffff;
  }
  else {
    uVar8 = *(uint *)(puVar7 + 4);
    if (-1 < (int)uVar8) {
      if ((short *)((ulong)uVar8 + (long)param_3) == (short *)0x0) {
        return false;
      }
      if (*(short *)((ulong)uVar8 + (long)param_3) == 0) {
        return false;
      }
      if ((((param_4 != (uint *)0x0) && (*param_4 < 3)) && (param_4[1] < 3)) &&
         ((param_4[2] < 3 && (param_4[3] < 3)))) {
        local_2088 = CONCAT44(local_2088._4_4_,2);
        if (((*param_4 == 2) || ((param_4[1] == 2 || (param_4[2] == 2)))) || (param_4[3] == 2)) {
          local_2098 = CONCAT44(local_2098._4_4_,1);
          if ((((*param_4 == 1) || (param_4[1] == 1)) || (param_4[2] == 1)) || (param_4[3] == 1)) {
            uVar8 = FUN_01b5c228(param_4);
            uVar9 = FUN_01b5c36c(param_4);
            if (uVar8 == 0xffffffff) {
              return false;
            }
            if (uVar9 == 0xffffffff) {
              return false;
            }
            lVar12 = *param_1;
            uVar24 = 0;
            uVar16 = 0;
            lVar17 = lVar12 + 0x454;
            do {
              puVar27 = (ushort *)(lVar17 + (long)(int)uVar16 * 0x1e);
              if ((*puVar27 != 0xffff && *puVar27 == *param_2) &&
                 ((0xd < uVar8 ||
                  (*(ushort *)(lVar17 + (long)(int)uVar16 * 0x1e + (ulong)uVar8 * 2 + 2) ==
                   param_2[(ulong)uVar8 + 1])))) {
                local_2088 = *(undefined8 *)puVar27;
                local_2080 = (undefined8 *)*(undefined8 *)(puVar27 + 4);
                local_2078 = (undefined6)*(undefined8 *)(puVar27 + 8);
                uStack_2072 = (undefined2)*(undefined8 *)(puVar27 + 0xb);
                local_2070 = (undefined6)((ulong)*(undefined8 *)(puVar27 + 0xb) >> 0x10);
                if (uVar9 < 0xe) {
                  lVar17 = (ulong)uVar9 * 2;
                  uVar8 = (uint)*(ushort *)((long)local_2068 + lVar17 + -0x1e) +
                          (uint)param_2[(ulong)uVar9 + 1];
                  if (0xfffe < uVar8) {
                    uVar8 = 0xffff;
                  }
                  *(short *)((long)local_2068 + lVar17 + -0x1e) = (short)uVar8;
                }
                FUN_0280d7b0(lVar12,uVar24);
                iVar10 = 0;
                do {
                  psVar21 = (short *)(*param_1 + 0x454 + (long)iVar10 * 0x1e);
                  if (*psVar21 == -1) {
                    *(undefined8 *)psVar21 = local_2088;
                    *(undefined8 **)(psVar21 + 4) = local_2080;
                    *(ulong *)(psVar21 + 8) = CONCAT26(uStack_2072,local_2078);
                    *(ulong *)(psVar21 + 0xb) = CONCAT62(local_2070,uStack_2072);
                    return true;
                  }
                  iVar10 = iVar10 + 1;
                } while (iVar10 != 0x200);
                return true;
              }
              uVar24 = uVar16 + 1;
              uVar16 = uVar24 & 0xffffffff;
            } while ((int)uVar24 != 0x200);
          }
        }
      }
      iVar15 = 0;
      iVar10 = 0;
      do {
        uVar5 = *(ushort *)(*param_1 + 0x454 + (long)iVar10 * 0x1e);
        if (uVar5 == 0xffff) break;
        iVar10 = iVar10 + 1;
        if (uVar5 == *param_2) {
          iVar15 = iVar15 + 1;
        }
      } while (iVar10 != 0x200);
      if (*param_3 == 0) goto LAB_01b6c8e4;
      cVar14 = *puVar6;
      do {
        if (cVar14 != '\0') {
          uVar8 = *(uint *)(puVar7 + 4);
          if ((int)uVar8 < 0) {
            if (uVar8 == 0xffffffff) goto LAB_01b6c838;
          }
          else if ((ushort *)((ulong)uVar8 + (long)param_3) != (ushort *)0x0) {
            uVar8 = (uint)*(ushort *)((ulong)uVar8 + (long)param_3);
            goto LAB_01b6c8e8;
          }
LAB_01b6c8e4:
          uVar8 = 0;
          goto LAB_01b6c8e8;
        }
        cVar14 = '\x01';
        *(undefined8 *)puVar7 = 0xffffffffffffffff;
        *(undefined8 *)(puVar7 + 8) = 0xffffffffffffffff;
        *puVar6 = 1;
        *(undefined8 *)(puVar7 + 0x10) = 0xffffffffffffffff;
        *(undefined8 *)(puVar7 + 0x18) = 0xffffffffffffffff;
        *(undefined8 *)(puVar7 + 0x20) = 0xffffffffffffffff;
        *(undefined8 *)(puVar7 + 0x28) = 0xffffffffffffffff;
LAB_01b6c838:
        puVar23 = (uint *)(ulong)*param_3;
        uVar8 = 0;
        if ((*param_3 == 0) || (param_3 == puVar23)) goto LAB_01b6c8e8;
        lVar17 = 0xc;
        if (*(char *)((long)param_3 + (10 - (long)puVar23)) != '\0') {
          lVar17 = 0x1c;
        }
        lVar17 = (long)param_3 + (lVar17 - (long)puVar23);
        if (lVar17 == 0) goto LAB_01b6c8e4;
        uVar24 = (ulong)*(ushort *)((long)param_3 + (8 - (long)puVar23));
        *(undefined4 *)(puVar7 + 4) = 0xfffffffe;
        uVar8 = 0;
        if (uVar24 == 0) goto LAB_01b6c8e8;
        piVar29 = (int *)(lVar17 + 4);
        while (piVar29[-1] != 0x175969e1) {
          piVar29 = piVar29 + 2;
          uVar24 = uVar24 - 1;
          if (uVar24 == 0) {
            uVar8 = 0;
            goto LAB_01b6c8e8;
          }
        }
        iVar10 = 0;
        if (*piVar29 != -1) {
          iVar10 = *piVar29;
        }
        *(int *)(puVar7 + 4) = iVar10;
      } while (*param_3 != 0);
      uVar8 = 0;
LAB_01b6c8e8:
      if ((int)uVar8 <= iVar15) {
        if (*param_3 == 0) goto LAB_01b6ca9c;
        cVar14 = *puVar6;
        do {
          if (cVar14 != '\0') {
            uVar8 = *(uint *)(puVar7 + 0x24);
            if ((int)uVar8 < 0) {
              if (uVar8 == 0xffffffff) goto LAB_01b6ca10;
            }
            else if (((byte *)((ulong)uVar8 + (long)param_3) != (byte *)0x0) &&
                    (bVar4 = *(byte *)((ulong)uVar8 + (long)param_3), uVar8 = (uint)bVar4, bVar4 < 5
                    )) goto LAB_01b6caa0;
LAB_01b6ca9c:
            uVar8 = 0;
            goto LAB_01b6caa0;
          }
          cVar14 = '\x01';
          *(undefined8 *)puVar7 = 0xffffffffffffffff;
          *(undefined8 *)(puVar7 + 8) = 0xffffffffffffffff;
          *puVar6 = 1;
          *(undefined8 *)(puVar7 + 0x10) = 0xffffffffffffffff;
          *(undefined8 *)(puVar7 + 0x18) = 0xffffffffffffffff;
          *(undefined8 *)(puVar7 + 0x20) = 0xffffffffffffffff;
          *(undefined8 *)(puVar7 + 0x28) = 0xffffffffffffffff;
LAB_01b6ca10:
          puVar23 = (uint *)(ulong)*param_3;
          uVar8 = 0;
          if ((*param_3 == 0) || (param_3 == puVar23)) goto LAB_01b6caa0;
          lVar17 = 0xc;
          if (*(char *)((long)param_3 + (10 - (long)puVar23)) != '\0') {
            lVar17 = 0x1c;
          }
          lVar17 = (long)param_3 + (lVar17 - (long)puVar23);
          if (lVar17 == 0) goto LAB_01b6ca9c;
          uVar24 = (ulong)*(ushort *)((long)param_3 + (8 - (long)puVar23));
          *(undefined4 *)(puVar7 + 0x24) = 0xfffffffe;
          uVar8 = 0;
          if (uVar24 == 0) goto LAB_01b6caa0;
          piVar29 = (int *)(lVar17 + 4);
          while (piVar29[-1] != 0x638d595d) {
            piVar29 = piVar29 + 2;
            uVar24 = uVar24 - 1;
            if (uVar24 == 0) {
              uVar8 = 0;
              goto LAB_01b6caa0;
            }
          }
          iVar10 = 0;
          if (*piVar29 != -1) {
            iVar10 = *piVar29;
          }
          *(int *)(puVar7 + 0x24) = iVar10;
        } while (*param_3 != 0);
        uVar8 = 0;
LAB_01b6caa0:
        local_2088 = CONCAT44(local_2088._4_4_,uVar8);
        iVar10 = FUN_01b6ab20(&local_2088,param_4,param_2,0xffffffff);
        local_2088 = 0;
        local_2080 = (undefined8 *)0x0;
        local_2078 = SUB86(local_2068,0);
        uStack_2072 = (undefined2)((ulong)local_2068 >> 0x30);
        lVar17 = 0;
        do {
          lVar12 = lVar17 + 0x38;
          plVar28 = (long *)((long)local_2068 + lVar17 + 8);
          *plVar28 = (long)local_2058 + lVar17;
          *(long **)((long)local_2068 + lVar17) = plVar28;
          plVar28 = (long *)((long)local_2058 + lVar17 + 0x20);
          *plVar28 = (long)(auStack_2030 + lVar17);
          puVar22 = (undefined8 *)((long)local_2058 + lVar17 + 0x18);
          *puVar22 = plVar28;
          puVar25 = (undefined8 *)((long)local_2058 + lVar17 + 0x10);
          *puVar25 = puVar22;
          puVar22 = (undefined8 *)((long)local_2058 + lVar17 + 8);
          *puVar22 = puVar25;
          *(undefined8 **)((long)local_2058 + lVar17) = puVar22;
          lVar17 = lVar12;
        } while (lVar12 != 0xff8);
        local_1070 = 0;
        if (local_1068 != (undefined8 *)0x0) {
          local_2088 = 0x20000000000;
          local_2080 = local_1068;
        }
        lVar17 = *param_1;
        iVar15 = 0;
        local_2070 = local_2078;
        uStack_206a = uStack_2072;
        do {
          puVar27 = (ushort *)(lVar17 + 0x454 + (long)iVar15 * 0x1e);
          uVar5 = *puVar27;
          if (uVar5 == 0xffff) break;
          if (uVar5 == *param_2) {
            lVar12 = *(long *)PTR_DAT_04bb49a0;
            if (*(long *)(lVar12 + 0x468) == 0) {
LAB_01b6cbd4:
              puVar23 = (uint *)0x0;
            }
            else {
              if ((int)(uint)uVar5 < *(int *)(lVar12 + 0x458)) goto LAB_01b6cbd4;
              uVar8 = (uint)uVar5 - *(int *)(lVar12 + 0x458);
              if ((int)*(uint *)(lVar12 + 0x460) <= (int)uVar8) goto LAB_01b6cbd4;
              if (*(uint *)(lVar12 + 0x460) <= uVar8) {
                uVar8 = 0;
              }
              puVar23 = *(uint **)(*(long *)(lVar12 + 0x468) + (long)(int)uVar8 * 8);
            }
            if ((int)local_2088 < local_2088._4_4_) {
              piVar29 = (int *)CONCAT26(uStack_2072,local_2078);
              if (piVar29 != (int *)0x0) {
                local_2078 = (undefined6)*(undefined8 *)piVar29;
                uStack_2072 = (undefined2)((ulong)*(undefined8 *)piVar29 >> 0x30);
              }
              piVar29[0] = 0;
              piVar29[1] = 0;
              if ((int)local_2088 < local_2088._4_4_) {
                local_2080[(int)local_2088] = piVar29;
                local_2088 = CONCAT44(local_2088._4_4_,(int)local_2088 + 1);
              }
            }
            else {
              piVar29 = (int *)0x0;
            }
            *piVar29 = iVar15;
            if (puVar23 == (uint *)0x0) {
              piVar29[1] = -1;
            }
            else {
              local_2098 = 0;
              uStack_2090 = 0;
              FUN_01b6af30(puVar23,&local_2098,(long)&local_2098 + 4,&uStack_2090,
                           (long)&uStack_2090 + 4);
              if (*puVar23 == 0) {
LAB_01b6cd20:
                local_209c = 0;
              }
              else {
                cVar14 = *puVar6;
                do {
                  if (cVar14 == '\0') {
                    cVar14 = '\x01';
                    *(undefined8 *)puVar7 = 0xffffffffffffffff;
                    *(undefined8 *)(puVar7 + 8) = 0xffffffffffffffff;
                    *puVar6 = 1;
                    *(undefined8 *)(puVar7 + 0x10) = 0xffffffffffffffff;
                    *(undefined8 *)(puVar7 + 0x18) = 0xffffffffffffffff;
                    *(undefined8 *)(puVar7 + 0x20) = 0xffffffffffffffff;
                    *(undefined8 *)(puVar7 + 0x28) = 0xffffffffffffffff;
                  }
                  else {
                    uVar8 = *(uint *)(puVar7 + 0x24);
                    if (-1 < (int)uVar8) {
                      if (((byte *)((ulong)uVar8 + (long)puVar23) == (byte *)0x0) ||
                         (bVar4 = *(byte *)((ulong)uVar8 + (long)puVar23), local_209c = (uint)bVar4,
                         4 < bVar4)) goto LAB_01b6cd20;
                      goto LAB_01b6cd24;
                    }
                    if (uVar8 != 0xffffffff) goto LAB_01b6cd20;
                  }
                  puVar18 = (uint *)(ulong)*puVar23;
                  local_209c = 0;
                  if ((*puVar23 == 0) || (puVar23 == puVar18)) goto LAB_01b6cd24;
                  lVar12 = 0xc;
                  if (*(char *)((long)puVar23 + (10 - (long)puVar18)) != '\0') {
                    lVar12 = 0x1c;
                  }
                  lVar12 = (long)puVar23 + (lVar12 - (long)puVar18);
                  if (lVar12 == 0) goto LAB_01b6cd20;
                  uVar24 = (ulong)*(ushort *)((long)puVar23 + (8 - (long)puVar18));
                  *(undefined4 *)(puVar7 + 0x24) = 0xfffffffe;
                  local_209c = 0;
                  if (uVar24 == 0) goto LAB_01b6cd24;
                  piVar19 = (int *)(lVar12 + 4);
                  while (piVar19[-1] != 0x638d595d) {
                    piVar19 = piVar19 + 2;
                    uVar24 = uVar24 - 1;
                    if (uVar24 == 0) {
                      local_209c = 0;
                      goto LAB_01b6cd24;
                    }
                  }
                  iVar11 = 0;
                  if (*piVar19 != -1) {
                    iVar11 = *piVar19;
                  }
                  *(int *)(puVar7 + 0x24) = iVar11;
                } while (*puVar23 != 0);
                local_209c = 0;
              }
LAB_01b6cd24:
              iVar11 = FUN_01b6ab20(&local_209c,&local_2098,puVar27,iVar15);
              piVar29[1] = iVar11;
            }
          }
          iVar15 = iVar15 + 1;
        } while (iVar15 != 0x200);
        if (1 < (int)local_2088) {
          uVar9 = 0;
          uVar8 = (int)local_2088 - 1;
          do {
            if ((int)uVar8 <= (int)uVar9) break;
            lVar17 = local_2080[uVar9];
            uVar24 = (ulong)uVar9;
            if ((uVar8 - uVar9 & 1) == 0) {
              lVar12 = lVar17;
              uVar16 = uVar24;
            }
            else {
              uVar16 = uVar24 + 1;
              lVar12 = local_2080[uVar16];
              if (*(int *)(lVar12 + 4) < *(int *)(lVar17 + 4)) {
                local_2080[uVar16] = lVar17;
                local_2080[uVar24] = lVar12;
                lVar12 = lVar17;
              }
            }
            uVar26 = (ulong)uVar8;
            uVar8 = uVar9;
            if (~uVar24 + uVar26 != 0) {
              plVar28 = local_2080 + uVar16 + 1;
              do {
                lVar17 = *plVar28;
                if (*(int *)(lVar17 + 4) < *(int *)(lVar12 + 4)) {
                  plVar28[-1] = lVar17;
                  *plVar28 = lVar12;
                  uVar8 = (uint)uVar16;
                }
                else {
                  lVar12 = lVar17;
                }
                lVar17 = plVar28[1];
                if (*(int *)(lVar17 + 4) < *(int *)(lVar12 + 4)) {
                  uVar8 = (uint)uVar16 + 1;
                  *plVar28 = lVar17;
                  plVar28[1] = lVar12;
                }
                else {
                  lVar12 = lVar17;
                }
                uVar16 = uVar16 + 2;
                plVar28 = plVar28 + 2;
              } while (uVar26 != uVar16);
            }
            if ((int)uVar8 <= (int)uVar9) break;
            lVar17 = local_2080[uVar8];
            uVar16 = (ulong)uVar8;
            uVar9 = uVar8;
            do {
              lVar12 = local_2080[uVar16 - 1];
              if (*(int *)(lVar17 + 4) < *(int *)(lVar12 + 4)) {
                uVar9 = (uint)uVar16;
                local_2080[uVar16 - 1] = lVar17;
                local_2080[uVar16] = lVar12;
              }
              else {
                lVar17 = lVar12;
              }
              uVar16 = uVar16 - 1;
            } while ((long)uVar24 < (long)uVar16);
          } while (uVar9 != uVar8);
        }
        if ((int)local_2088 == 0) {
          puVar23 = (uint *)0x0;
        }
        else {
          puVar23 = (uint *)*local_2080;
        }
        bVar1 = (int)puVar23[1] < iVar10;
        if (iVar10 <= (int)puVar23[1]) {
          return bVar1;
        }
        uVar24 = (ulong)*puVar23;
        lVar17 = *param_1;
        if (*puVar23 < 0x200) {
          psVar21 = (short *)(lVar17 + uVar24 * 0x1e + 0x454);
          do {
            if (*psVar21 == -1) break;
            if ((uVar24 < 0x1ff) && (psVar21[0xf] != -1)) {
              *(undefined8 *)psVar21 = *(undefined8 *)(psVar21 + 0xf);
              *(undefined8 *)(psVar21 + 4) = *(undefined8 *)(psVar21 + 0x13);
              *(undefined8 *)(psVar21 + 8) = *(undefined8 *)(psVar21 + 0x17);
              *(undefined8 *)(psVar21 + 0xb) = *(undefined8 *)(psVar21 + 0x1a);
            }
            else {
              *psVar21 = -1;
              psVar21[1] = 0;
              psVar21[2] = 0;
              psVar21[3] = 0;
              psVar21[4] = 0;
              psVar21[5] = 0;
              psVar21[6] = 0;
              psVar21[7] = 0;
              psVar21[8] = 0;
              psVar21[9] = 0;
              psVar21[10] = 0;
              psVar21[0xb] = 0;
              psVar21[0xc] = 0;
              psVar21[0xd] = 0;
              psVar21[0xe] = 0;
            }
            uVar24 = uVar24 + 1;
            psVar21 = psVar21 + 0xf;
          } while (uVar24 != 0x200);
          lVar17 = *param_1;
        }
        iVar10 = 0;
        do {
          psVar21 = (short *)(lVar17 + 0x454 + (long)iVar10 * 0x1e);
          if (*psVar21 == -1) {
            uVar2 = *(undefined8 *)param_2;
            uVar3 = *(undefined8 *)(param_2 + 4);
            uVar20 = *(undefined8 *)(param_2 + 8);
            *(undefined8 *)(psVar21 + 0xb) = *(undefined8 *)(param_2 + 0xb);
            *(undefined8 *)psVar21 = uVar2;
            *(undefined8 *)(psVar21 + 4) = uVar3;
            *(undefined8 *)(psVar21 + 8) = uVar20;
            return bVar1;
          }
          iVar10 = iVar10 + 1;
        } while (iVar10 != 0x200);
        return bVar1;
      }
      lVar17 = *param_1;
      if (*(short *)(lVar17 + 0x4036) == -1) goto LAB_01b6d064;
      if (*param_3 == 0) goto LAB_01b6cf9c;
      cVar14 = *puVar6;
      while (cVar14 == '\0') {
        cVar14 = '\x01';
        *(undefined8 *)puVar7 = 0xffffffffffffffff;
        *(undefined8 *)(puVar7 + 8) = 0xffffffffffffffff;
        *puVar6 = 1;
        *(undefined8 *)(puVar7 + 0x10) = 0xffffffffffffffff;
        *(undefined8 *)(puVar7 + 0x18) = 0xffffffffffffffff;
        *(undefined8 *)(puVar7 + 0x20) = 0xffffffffffffffff;
        *(undefined8 *)(puVar7 + 0x28) = 0xffffffffffffffff;
LAB_01b6c950:
        puVar23 = (uint *)(ulong)*param_3;
        uVar13 = 0;
        if ((*param_3 == 0) || (param_3 == puVar23)) goto LAB_01b6cfa0;
        lVar17 = 0xc;
        if (*(char *)((long)param_3 + (10 - (long)puVar23)) != '\0') {
          lVar17 = 0x1c;
        }
        lVar17 = (long)param_3 + (lVar17 - (long)puVar23);
        if (lVar17 == 0) goto LAB_01b6cf9c;
        uVar24 = (ulong)*(ushort *)((long)param_3 + (8 - (long)puVar23));
        *(undefined4 *)(puVar7 + 0x20) = 0xfffffffe;
        if (uVar24 == 0) goto LAB_01b6cf9c;
        piVar29 = (int *)(lVar17 + 4);
        while (piVar29[-1] != 0x572a8fe9) {
          piVar29 = piVar29 + 2;
          uVar24 = uVar24 - 1;
          if (uVar24 == 0) goto LAB_01b6cf9c;
        }
        iVar10 = 0;
        if (*piVar29 != -1) {
          iVar10 = *piVar29;
        }
        *(int *)(puVar7 + 0x20) = iVar10;
        if (*param_3 == 0) goto LAB_01b6cf9c;
      }
      uVar8 = *(uint *)(puVar7 + 0x20);
      if ((int)uVar8 < 0) {
        if (uVar8 == 0xffffffff) goto LAB_01b6c950;
      }
      else if ((undefined1 *)((ulong)uVar8 + (long)param_3) != (undefined1 *)0x0) {
        uVar13 = *(undefined1 *)((ulong)uVar8 + (long)param_3);
        goto LAB_01b6cfa0;
      }
LAB_01b6cf9c:
      uVar13 = 0;
LAB_01b6cfa0:
      uVar8 = FUN_01b6a250(param_1,uVar13);
      if (uVar8 == 0xffffffff) {
        return false;
      }
      lVar17 = *param_1;
      if (uVar8 < 0x200) {
        uVar24 = (ulong)uVar8;
        psVar21 = (short *)(lVar17 + (ulong)uVar8 * 0x1e + 0x454);
        do {
          if (*psVar21 == -1) break;
          if ((uVar24 < 0x1ff) && (psVar21[0xf] != -1)) {
            *(undefined8 *)psVar21 = *(undefined8 *)(psVar21 + 0xf);
            *(undefined8 *)(psVar21 + 4) = *(undefined8 *)(psVar21 + 0x13);
            *(undefined8 *)(psVar21 + 8) = *(undefined8 *)(psVar21 + 0x17);
            *(undefined8 *)(psVar21 + 0xb) = *(undefined8 *)(psVar21 + 0x1a);
          }
          else {
            *psVar21 = -1;
            psVar21[1] = 0;
            psVar21[2] = 0;
            psVar21[3] = 0;
            psVar21[4] = 0;
            psVar21[5] = 0;
            psVar21[6] = 0;
            psVar21[7] = 0;
            psVar21[8] = 0;
            psVar21[9] = 0;
            psVar21[10] = 0;
            psVar21[0xb] = 0;
            psVar21[0xc] = 0;
            psVar21[0xd] = 0;
            psVar21[0xe] = 0;
          }
          uVar24 = uVar24 + 1;
          psVar21 = psVar21 + 0xf;
        } while (uVar24 != 0x200);
        lVar17 = *param_1;
      }
LAB_01b6d064:
      iVar10 = 0;
      do {
        psVar21 = (short *)(lVar17 + 0x454 + (long)iVar10 * 0x1e);
        if (*psVar21 == -1) {
          uVar2 = *(undefined8 *)param_2;
          uVar3 = *(undefined8 *)(param_2 + 4);
          uVar20 = *(undefined8 *)(param_2 + 8);
          *(undefined8 *)(psVar21 + 0xb) = *(undefined8 *)(param_2 + 0xb);
          *(undefined8 *)(psVar21 + 4) = uVar3;
          *(undefined8 *)(psVar21 + 8) = uVar20;
          *(undefined8 *)psVar21 = uVar2;
          return true;
        }
        iVar10 = iVar10 + 1;
      } while (iVar10 != 0x200);
      return true;
    }
    if (uVar8 != 0xffffffff) {
      return false;
    }
  }
  puVar23 = (uint *)(ulong)*param_3;
  if (*param_3 == 0) {
    return false;
  }
  if (param_3 == puVar23) {
    return false;
  }
  lVar17 = 0xc;
  if (*(char *)((long)param_3 + (10 - (long)puVar23)) != '\0') {
    lVar17 = 0x1c;
  }
  lVar17 = (long)param_3 + (lVar17 - (long)puVar23);
  if (lVar17 == 0) {
    return false;
  }
  uVar24 = (ulong)*(ushort *)((long)param_3 + (8 - (long)puVar23));
  *(undefined4 *)(puVar7 + 4) = 0xfffffffe;
  if (uVar24 == 0) {
    return false;
  }
  piVar29 = (int *)(lVar17 + 4);
  while (piVar29[-1] != 0x175969e1) {
    piVar29 = piVar29 + 2;
    uVar24 = uVar24 - 1;
    if (uVar24 == 0) {
      return false;
    }
  }
  iVar10 = 0;
  if (*piVar29 != -1) {
    iVar10 = *piVar29;
  }
  *(int *)(puVar7 + 4) = iVar10;
  if (*param_3 == 0) {
    return false;
  }
  goto LAB_01b6c508;
}

