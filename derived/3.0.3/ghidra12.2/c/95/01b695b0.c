
bool FUN_01b695b0(long *param_1,ushort *param_2,uint *param_3,uint *param_4)

{
  bool bVar1;
  undefined8 uVar2;
  byte bVar3;
  ushort uVar4;
  undefined *puVar5;
  undefined *puVar6;
  uint uVar7;
  uint uVar8;
  int iVar9;
  int iVar10;
  undefined1 uVar11;
  char cVar12;
  int iVar13;
  ulong uVar14;
  long lVar15;
  long lVar16;
  uint *puVar17;
  int *piVar18;
  undefined8 uVar19;
  uint uVar20;
  undefined8 uVar21;
  short *psVar22;
  undefined8 *puVar23;
  undefined8 *puVar24;
  ulong uVar25;
  uint *puVar26;
  ulong uVar27;
  long *plVar28;
  ushort *puVar29;
  int *piVar30;
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
  
  if ((((param_4 != (uint *)0x0) && (*param_4 < 3)) && (param_4[1] < 3)) &&
     ((param_4[2] < 3 && (param_4[3] < 3)))) {
    local_2088 = CONCAT44(local_2088._4_4_,2);
    if (((*param_4 == 2) || ((param_4[1] == 2 || (param_4[2] == 2)))) || (param_4[3] == 2)) {
      local_2098 = CONCAT44(local_2098._4_4_,1);
      if ((((*param_4 == 1) || (param_4[1] == 1)) || (param_4[2] == 1)) || (param_4[3] == 1)) {
        uVar7 = FUN_01b5c228(param_4);
        uVar8 = FUN_01b5c36c(param_4);
        if (uVar7 == 0xffffffff) {
          return false;
        }
        if (uVar8 == 0xffffffff) {
          return false;
        }
        lVar15 = *param_1;
        uVar20 = 0;
        do {
          puVar29 = (ushort *)(lVar15 + 0x454 + (long)(int)uVar20 * 0x1e);
          if ((*puVar29 != 0xffff && *puVar29 == *param_2) &&
             ((0xd < uVar7 ||
              (*(ushort *)(lVar15 + 0x454 + (long)(int)uVar20 * 0x1e + (ulong)uVar7 * 2 + 2) ==
               param_2[(ulong)uVar7 + 1])))) {
            uVar21 = *(undefined8 *)puVar29;
            local_2080 = (undefined8 *)*(undefined8 *)(puVar29 + 4);
            local_2078 = (undefined6)*(undefined8 *)(puVar29 + 8);
            uStack_2072 = (undefined2)*(undefined8 *)(puVar29 + 0xb);
            local_2070 = (undefined6)((ulong)*(undefined8 *)(puVar29 + 0xb) >> 0x10);
            if (uVar8 < 0xe) {
              lVar16 = (ulong)uVar8 * 2;
              uVar7 = (uint)*(ushort *)((long)local_2068 + lVar16 + -0x1e) +
                      (uint)param_2[(ulong)uVar8 + 1];
              if (0xfffe < uVar7) {
                uVar7 = 0xffff;
              }
              *(short *)((long)local_2068 + lVar16 + -0x1e) = (short)uVar7;
            }
            if (0x1ff < uVar20) goto LAB_01b69948;
            uVar14 = (ulong)uVar20;
            psVar22 = (short *)(lVar15 + (ulong)uVar20 * 0x1e + 0x454);
            goto LAB_01b69904;
          }
          uVar20 = uVar20 + 1;
        } while (uVar20 != 0x200);
      }
    }
  }
  puVar6 = PTR_DAT_04bc0648;
  puVar5 = PTR_DAT_04bc0640;
  iVar13 = 0;
  iVar9 = 0;
  do {
    uVar4 = *(ushort *)(*param_1 + 0x454 + (long)iVar9 * 0x1e);
    if (uVar4 == 0xffff) break;
    iVar9 = iVar9 + 1;
    if (uVar4 == *param_2) {
      iVar13 = iVar13 + 1;
    }
  } while (iVar9 != 0x200);
  if (*param_3 == 0) {
LAB_01b699ac:
    uVar7 = 0;
  }
  else {
    cVar12 = *PTR_DAT_04bc0640;
    do {
      if (cVar12 == '\0') {
        cVar12 = '\x01';
        *(undefined8 *)puVar6 = 0xffffffffffffffff;
        *(undefined8 *)(puVar6 + 8) = 0xffffffffffffffff;
        *puVar5 = 1;
        *(undefined8 *)(puVar6 + 0x10) = 0xffffffffffffffff;
        *(undefined8 *)(puVar6 + 0x18) = 0xffffffffffffffff;
        *(undefined8 *)(puVar6 + 0x20) = 0xffffffffffffffff;
        *(undefined8 *)(puVar6 + 0x28) = 0xffffffffffffffff;
      }
      else {
        uVar7 = *(uint *)(puVar6 + 0x18);
        if (-1 < (int)uVar7) {
          if ((ushort *)((ulong)uVar7 + (long)param_3) == (ushort *)0x0) goto LAB_01b699ac;
          uVar7 = (uint)*(ushort *)((ulong)uVar7 + (long)param_3);
          goto LAB_01b699b0;
        }
        if (uVar7 != 0xffffffff) goto LAB_01b699ac;
      }
      puVar26 = (uint *)(ulong)*param_3;
      uVar7 = 0;
      if ((*param_3 == 0) || (param_3 == puVar26)) goto LAB_01b699b0;
      lVar15 = 0xc;
      if (*(char *)((long)param_3 + (10 - (long)puVar26)) != '\0') {
        lVar15 = 0x1c;
      }
      lVar15 = (long)param_3 + (lVar15 - (long)puVar26);
      if (lVar15 == 0) goto LAB_01b699ac;
      uVar14 = (ulong)*(ushort *)((long)param_3 + (8 - (long)puVar26));
      *(undefined4 *)(puVar6 + 0x18) = 0xfffffffe;
      uVar7 = 0;
      if (uVar14 == 0) goto LAB_01b699b0;
      piVar30 = (int *)(lVar15 + 4);
      while (piVar30[-1] != 0x175969e1) {
        piVar30 = piVar30 + 2;
        uVar14 = uVar14 - 1;
        if (uVar14 == 0) {
          uVar7 = 0;
          goto LAB_01b699b0;
        }
      }
      iVar9 = 0;
      if (*piVar30 != -1) {
        iVar9 = *piVar30;
      }
      *(int *)(puVar6 + 0x18) = iVar9;
    } while (*param_3 != 0);
    uVar7 = 0;
  }
LAB_01b699b0:
  puVar6 = PTR_DAT_04bc0648;
  puVar5 = PTR_DAT_04bc0640;
  if (iVar13 < (int)uVar7) {
    lVar15 = *param_1;
    if (*(short *)(lVar15 + 0x4036) != -1) {
      if (*param_3 != 0) {
        cVar12 = *PTR_DAT_04bc0640;
        do {
          if (cVar12 == '\0') {
            cVar12 = '\x01';
            *(undefined8 *)puVar6 = 0xffffffffffffffff;
            *(undefined8 *)(puVar6 + 8) = 0xffffffffffffffff;
            *puVar5 = 1;
            *(undefined8 *)(puVar6 + 0x10) = 0xffffffffffffffff;
            *(undefined8 *)(puVar6 + 0x18) = 0xffffffffffffffff;
            *(undefined8 *)(puVar6 + 0x20) = 0xffffffffffffffff;
            *(undefined8 *)(puVar6 + 0x28) = 0xffffffffffffffff;
          }
          else {
            uVar7 = *(uint *)(puVar6 + 0x28);
            if (-1 < (int)uVar7) {
              if ((undefined1 *)((ulong)uVar7 + (long)param_3) != (undefined1 *)0x0) {
                uVar11 = *(undefined1 *)((ulong)uVar7 + (long)param_3);
                goto LAB_01b6a074;
              }
              break;
            }
            if (uVar7 != 0xffffffff) break;
          }
          puVar26 = (uint *)(ulong)*param_3;
          uVar11 = 0;
          if ((*param_3 == 0) || (param_3 == puVar26)) goto LAB_01b6a074;
          lVar15 = 0xc;
          if (*(char *)((long)param_3 + (10 - (long)puVar26)) != '\0') {
            lVar15 = 0x1c;
          }
          lVar15 = (long)param_3 + (lVar15 - (long)puVar26);
          if (lVar15 == 0) break;
          uVar14 = (ulong)*(ushort *)((long)param_3 + (8 - (long)puVar26));
          *(undefined4 *)(puVar6 + 0x28) = 0xfffffffe;
          if (uVar14 == 0) break;
          piVar30 = (int *)(lVar15 + 4);
          while (piVar30[-1] != 0x572a8fe9) {
            piVar30 = piVar30 + 2;
            uVar14 = uVar14 - 1;
            if (uVar14 == 0) goto LAB_01b6a070;
          }
          iVar9 = 0;
          if (*piVar30 != -1) {
            iVar9 = *piVar30;
          }
          *(int *)(puVar6 + 0x28) = iVar9;
          if (*param_3 == 0) break;
        } while( true );
      }
LAB_01b6a070:
      uVar11 = 0;
LAB_01b6a074:
      uVar7 = FUN_01b6a250(param_1,uVar11);
      if (uVar7 == 0xffffffff) {
        return false;
      }
      lVar15 = *param_1;
      if (uVar7 < 0x200) {
        uVar14 = (ulong)uVar7;
        psVar22 = (short *)(lVar15 + (ulong)uVar7 * 0x1e + 0x454);
        do {
          if (*psVar22 == -1) break;
          if ((uVar14 < 0x1ff) && (psVar22[0xf] != -1)) {
            *(undefined8 *)psVar22 = *(undefined8 *)(psVar22 + 0xf);
            *(undefined8 *)(psVar22 + 4) = *(undefined8 *)(psVar22 + 0x13);
            *(undefined8 *)(psVar22 + 8) = *(undefined8 *)(psVar22 + 0x17);
            *(undefined8 *)(psVar22 + 0xb) = *(undefined8 *)(psVar22 + 0x1a);
          }
          else {
            *psVar22 = -1;
            psVar22[1] = 0;
            psVar22[2] = 0;
            psVar22[3] = 0;
            psVar22[4] = 0;
            psVar22[5] = 0;
            psVar22[6] = 0;
            psVar22[7] = 0;
            psVar22[8] = 0;
            psVar22[9] = 0;
            psVar22[10] = 0;
            psVar22[0xb] = 0;
            psVar22[0xc] = 0;
            psVar22[0xd] = 0;
            psVar22[0xe] = 0;
          }
          uVar14 = uVar14 + 1;
          psVar22 = psVar22 + 0xf;
        } while (uVar14 != 0x200);
        lVar15 = *param_1;
      }
    }
    iVar9 = 0;
    do {
      psVar22 = (short *)(lVar15 + 0x454 + (long)iVar9 * 0x1e);
      if (*psVar22 == -1) {
        uVar21 = *(undefined8 *)param_2;
        uVar2 = *(undefined8 *)(param_2 + 4);
        uVar19 = *(undefined8 *)(param_2 + 8);
        *(undefined8 *)(psVar22 + 0xb) = *(undefined8 *)(param_2 + 0xb);
        *(undefined8 *)(psVar22 + 4) = uVar2;
        *(undefined8 *)(psVar22 + 8) = uVar19;
        *(undefined8 *)psVar22 = uVar21;
        return true;
      }
      iVar9 = iVar9 + 1;
    } while (iVar9 != 0x200);
    return true;
  }
  uVar7 = *param_3;
  uVar8 = 0;
  if ((uVar7 != 0) && (param_3 != (uint *)(ulong)uVar7)) {
    puVar26 = (uint *)((long)param_3 - (long)(ulong)uVar7);
    uVar8 = 0;
    if (*puVar26 != 0) {
      uVar7 = puVar26[1];
      if ((uVar7 != 0) && ((ulong)(ushort)puVar26[2] != 0)) {
        lVar15 = 0xc;
        if (*(char *)((long)puVar26 + 10) != '\0') {
          lVar15 = 0x1c;
        }
        lVar15 = (long)puVar26 + lVar15 + (ulong)(ushort)puVar26[2] * 8;
        if (lVar15 != 0) {
          uVar8 = 0;
          if ((ulong)uVar7 != 0) {
            uVar8 = (uint)((ulong)((long)param_3 - lVar15) / (ulong)uVar7);
          }
          if (*puVar26 <= uVar8) {
            uVar8 = 0xffffffff;
          }
          if ((uVar8 < *(uint *)PTR_DAT_04bc0638) &&
             (uVar4 = *(ushort *)(*(long *)(PTR_DAT_04bc0638 + 8) + (long)(int)uVar8 * 2),
             uVar8 = (uint)uVar4, uVar4 < 5)) goto LAB_01b69b28;
        }
      }
      uVar8 = 0;
    }
  }
LAB_01b69b28:
  local_2088 = CONCAT44(local_2088._4_4_,uVar8);
  iVar9 = FUN_01b6ab20(&local_2088,param_4,param_2,0xffffffff);
  puVar5 = PTR_DAT_04bc0610;
  local_2088 = 0;
  local_2080 = (undefined8 *)0x0;
  local_2078 = SUB86(local_2068,0);
  uStack_2072 = (undefined2)((ulong)local_2068 >> 0x30);
  lVar15 = 0;
  do {
    lVar16 = lVar15 + 0x38;
    plVar28 = (long *)((long)local_2068 + lVar15 + 8);
    *plVar28 = (long)local_2058 + lVar15;
    *(long **)((long)local_2068 + lVar15) = plVar28;
    plVar28 = (long *)((long)local_2058 + lVar15 + 0x20);
    *plVar28 = (long)(auStack_2030 + lVar15);
    puVar23 = (undefined8 *)((long)local_2058 + lVar15 + 0x18);
    *puVar23 = plVar28;
    puVar24 = (undefined8 *)((long)local_2058 + lVar15 + 0x10);
    *puVar24 = puVar23;
    puVar23 = (undefined8 *)((long)local_2058 + lVar15 + 8);
    *puVar23 = puVar24;
    *(undefined8 **)((long)local_2058 + lVar15) = puVar23;
    lVar15 = lVar16;
  } while (lVar16 != 0xff8);
  local_1070 = 0;
  if (local_1068 != (undefined8 *)0x0) {
    local_2088 = 0x20000000000;
    local_2080 = local_1068;
  }
  lVar15 = *param_1;
  iVar13 = 0;
  local_2070 = local_2078;
  uStack_206a = uStack_2072;
  do {
    puVar29 = (ushort *)(lVar15 + 0x454 + (long)iVar13 * 0x1e);
    uVar4 = *puVar29;
    if (uVar4 == 0xffff) break;
    if (uVar4 == *param_2) {
      lVar16 = *(long *)PTR_DAT_04bb49a0;
      if (*(long *)(lVar16 + 0x468) == 0) {
LAB_01b69c80:
        puVar26 = (uint *)0x0;
      }
      else {
        if ((int)(uint)uVar4 < *(int *)(lVar16 + 0x458)) goto LAB_01b69c80;
        uVar7 = (uint)uVar4 - *(int *)(lVar16 + 0x458);
        if ((int)*(uint *)(lVar16 + 0x460) <= (int)uVar7) goto LAB_01b69c80;
        if (*(uint *)(lVar16 + 0x460) <= uVar7) {
          uVar7 = 0;
        }
        puVar26 = *(uint **)(*(long *)(lVar16 + 0x468) + (long)(int)uVar7 * 8);
      }
      if ((int)local_2088 < local_2088._4_4_) {
        piVar30 = (int *)CONCAT26(uStack_2072,local_2078);
        if (piVar30 != (int *)0x0) {
          local_2078 = (undefined6)*(undefined8 *)piVar30;
          uStack_2072 = (undefined2)((ulong)*(undefined8 *)piVar30 >> 0x30);
        }
        piVar30[0] = 0;
        piVar30[1] = 0;
        if ((int)local_2088 < local_2088._4_4_) {
          local_2080[(int)local_2088] = piVar30;
          local_2088 = CONCAT44(local_2088._4_4_,(int)local_2088 + 1);
        }
      }
      else {
        piVar30 = (int *)0x0;
      }
      *piVar30 = iVar13;
      if (puVar26 == (uint *)0x0) {
        piVar30[1] = -1;
      }
      else {
        local_2098 = 0;
        uStack_2090 = 0;
        FUN_01b6af30(puVar26,&local_2098,(long)&local_2098 + 4,&uStack_2090,(long)&uStack_2090 + 4);
        if (*puVar26 == 0) {
LAB_01b69de4:
          local_209c = 0;
        }
        else {
          cVar12 = *PTR_DAT_04bc0608;
          do {
            if (cVar12 == '\0') {
              cVar12 = '\x01';
              *PTR_DAT_04bc0608 = 1;
              *(undefined8 *)puVar5 = 0xffffffffffffffff;
              *(undefined8 *)(puVar5 + 8) = 0xffffffffffffffff;
              *(undefined8 *)(puVar5 + 0x10) = 0xffffffffffffffff;
              *(undefined8 *)(puVar5 + 0x18) = 0xffffffffffffffff;
              *(undefined8 *)(puVar5 + 0x20) = 0xffffffffffffffff;
              *(undefined8 *)(puVar5 + 0x28) = 0xffffffffffffffff;
            }
            else {
              uVar7 = *(uint *)(puVar5 + 0x24);
              if (-1 < (int)uVar7) {
                if (((byte *)((ulong)uVar7 + (long)puVar26) == (byte *)0x0) ||
                   (bVar3 = *(byte *)((ulong)uVar7 + (long)puVar26), local_209c = (uint)bVar3,
                   4 < bVar3)) goto LAB_01b69de4;
                goto LAB_01b69de8;
              }
              if (uVar7 != 0xffffffff) goto LAB_01b69de4;
            }
            puVar17 = (uint *)(ulong)*puVar26;
            local_209c = 0;
            if ((*puVar26 == 0) || (puVar26 == puVar17)) goto LAB_01b69de8;
            lVar16 = 0xc;
            if (*(char *)((long)puVar26 + (10 - (long)puVar17)) != '\0') {
              lVar16 = 0x1c;
            }
            lVar16 = (long)puVar26 + (lVar16 - (long)puVar17);
            if (lVar16 == 0) goto LAB_01b69de4;
            uVar14 = (ulong)*(ushort *)((long)puVar26 + (8 - (long)puVar17));
            *(undefined4 *)(puVar5 + 0x24) = 0xfffffffe;
            local_209c = 0;
            if (uVar14 == 0) goto LAB_01b69de8;
            piVar18 = (int *)(lVar16 + 4);
            while (piVar18[-1] != 0x638d595d) {
              piVar18 = piVar18 + 2;
              uVar14 = uVar14 - 1;
              if (uVar14 == 0) {
                local_209c = 0;
                goto LAB_01b69de8;
              }
            }
            iVar10 = 0;
            if (*piVar18 != -1) {
              iVar10 = *piVar18;
            }
            *(int *)(puVar5 + 0x24) = iVar10;
          } while (*puVar26 != 0);
          local_209c = 0;
        }
LAB_01b69de8:
        iVar10 = FUN_01b6ab20(&local_209c,&local_2098,puVar29,iVar13);
        piVar30[1] = iVar10;
      }
    }
    iVar13 = iVar13 + 1;
  } while (iVar13 != 0x200);
  if (1 < (int)local_2088) {
    uVar8 = 0;
    uVar7 = (int)local_2088 - 1;
    do {
      if ((int)uVar7 <= (int)uVar8) break;
      lVar15 = local_2080[uVar8];
      uVar14 = (ulong)uVar8;
      if ((uVar7 - uVar8 & 1) == 0) {
        lVar16 = lVar15;
        uVar25 = uVar14;
      }
      else {
        uVar25 = uVar14 + 1;
        lVar16 = local_2080[uVar25];
        if (*(int *)(lVar16 + 4) < *(int *)(lVar15 + 4)) {
          local_2080[uVar25] = lVar15;
          local_2080[uVar14] = lVar16;
          lVar16 = lVar15;
        }
      }
      uVar27 = (ulong)uVar7;
      uVar7 = uVar8;
      if (~uVar14 + uVar27 != 0) {
        plVar28 = local_2080 + uVar25 + 1;
        do {
          lVar15 = *plVar28;
          if (*(int *)(lVar15 + 4) < *(int *)(lVar16 + 4)) {
            plVar28[-1] = lVar15;
            *plVar28 = lVar16;
            uVar7 = (uint)uVar25;
          }
          else {
            lVar16 = lVar15;
          }
          lVar15 = plVar28[1];
          if (*(int *)(lVar15 + 4) < *(int *)(lVar16 + 4)) {
            uVar7 = (uint)uVar25 + 1;
            *plVar28 = lVar15;
            plVar28[1] = lVar16;
          }
          else {
            lVar16 = lVar15;
          }
          uVar25 = uVar25 + 2;
          plVar28 = plVar28 + 2;
        } while (uVar27 != uVar25);
      }
      if ((int)uVar7 <= (int)uVar8) break;
      lVar15 = local_2080[uVar7];
      uVar25 = (ulong)uVar7;
      uVar8 = uVar7;
      do {
        lVar16 = local_2080[uVar25 - 1];
        if (*(int *)(lVar15 + 4) < *(int *)(lVar16 + 4)) {
          uVar8 = (uint)uVar25;
          local_2080[uVar25 - 1] = lVar15;
          local_2080[uVar25] = lVar16;
        }
        else {
          lVar15 = lVar16;
        }
        uVar25 = uVar25 - 1;
      } while ((long)uVar14 < (long)uVar25);
    } while (uVar8 != uVar7);
  }
  if ((int)local_2088 == 0) {
    puVar26 = (uint *)0x0;
  }
  else {
    puVar26 = (uint *)*local_2080;
  }
  bVar1 = (int)puVar26[1] < iVar9;
  if (iVar9 <= (int)puVar26[1]) {
    return bVar1;
  }
  uVar14 = (ulong)*puVar26;
  lVar15 = *param_1;
  if (*puVar26 < 0x200) {
    psVar22 = (short *)(lVar15 + uVar14 * 0x1e + 0x454);
    do {
      if (*psVar22 == -1) break;
      if ((uVar14 < 0x1ff) && (psVar22[0xf] != -1)) {
        *(undefined8 *)psVar22 = *(undefined8 *)(psVar22 + 0xf);
        *(undefined8 *)(psVar22 + 4) = *(undefined8 *)(psVar22 + 0x13);
        *(undefined8 *)(psVar22 + 8) = *(undefined8 *)(psVar22 + 0x17);
        *(undefined8 *)(psVar22 + 0xb) = *(undefined8 *)(psVar22 + 0x1a);
      }
      else {
        *psVar22 = -1;
        psVar22[1] = 0;
        psVar22[2] = 0;
        psVar22[3] = 0;
        psVar22[4] = 0;
        psVar22[5] = 0;
        psVar22[6] = 0;
        psVar22[7] = 0;
        psVar22[8] = 0;
        psVar22[9] = 0;
        psVar22[10] = 0;
        psVar22[0xb] = 0;
        psVar22[0xc] = 0;
        psVar22[0xd] = 0;
        psVar22[0xe] = 0;
      }
      uVar14 = uVar14 + 1;
      psVar22 = psVar22 + 0xf;
    } while (uVar14 != 0x200);
    lVar15 = *param_1;
  }
  iVar9 = 0;
  do {
    psVar22 = (short *)(lVar15 + 0x454 + (long)iVar9 * 0x1e);
    if (*psVar22 == -1) {
      uVar21 = *(undefined8 *)param_2;
      uVar2 = *(undefined8 *)(param_2 + 4);
      uVar19 = *(undefined8 *)(param_2 + 8);
      *(undefined8 *)(psVar22 + 0xb) = *(undefined8 *)(param_2 + 0xb);
      *(undefined8 *)psVar22 = uVar21;
      *(undefined8 *)(psVar22 + 4) = uVar2;
      *(undefined8 *)(psVar22 + 8) = uVar19;
      return bVar1;
    }
    iVar9 = iVar9 + 1;
  } while (iVar9 != 0x200);
  return bVar1;
  while( true ) {
    if ((uVar14 < 0x1ff) && (psVar22[0xf] != -1)) {
      *(undefined8 *)psVar22 = *(undefined8 *)(psVar22 + 0xf);
      *(undefined8 *)(psVar22 + 4) = *(undefined8 *)(psVar22 + 0x13);
      *(undefined8 *)(psVar22 + 8) = *(undefined8 *)(psVar22 + 0x17);
      *(undefined8 *)(psVar22 + 0xb) = *(undefined8 *)(psVar22 + 0x1a);
    }
    else {
      *psVar22 = -1;
      psVar22[1] = 0;
      psVar22[2] = 0;
      psVar22[3] = 0;
      psVar22[4] = 0;
      psVar22[5] = 0;
      psVar22[6] = 0;
      psVar22[7] = 0;
      psVar22[8] = 0;
      psVar22[9] = 0;
      psVar22[10] = 0;
      psVar22[0xb] = 0;
      psVar22[0xc] = 0;
      psVar22[0xd] = 0;
      psVar22[0xe] = 0;
    }
    uVar14 = uVar14 + 1;
    psVar22 = psVar22 + 0xf;
    if (uVar14 == 0x200) break;
LAB_01b69904:
    if (*psVar22 == -1) break;
  }
  lVar15 = *param_1;
LAB_01b69948:
  iVar9 = 0;
  do {
    psVar22 = (short *)(lVar15 + 0x454 + (long)iVar9 * 0x1e);
    if (*psVar22 == -1) {
      *(undefined8 *)psVar22 = uVar21;
      *(undefined8 **)(psVar22 + 4) = local_2080;
      *(ulong *)(psVar22 + 8) = CONCAT26(uStack_2072,local_2078);
      *(ulong *)(psVar22 + 0xb) = CONCAT62(local_2070,uStack_2072);
      return true;
    }
    iVar9 = iVar9 + 1;
  } while (iVar9 != 0x200);
  return true;
}

