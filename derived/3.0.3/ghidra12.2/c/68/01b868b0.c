
void FUN_01b868b0(undefined2 *param_1,uint param_2,ushort *param_3)

{
  long *plVar1;
  uint uVar2;
  int iVar3;
  ushort uVar4;
  ushort uVar5;
  ushort uVar6;
  undefined *puVar7;
  undefined *puVar8;
  bool bVar9;
  uint uVar10;
  uint uVar11;
  uint *puVar12;
  long lVar13;
  int *piVar14;
  int iVar15;
  ulong uVar16;
  char cVar17;
  uint uVar18;
  uint *puVar19;
  long lVar20;
  code *pcVar21;
  
  lVar13 = *(long *)PTR_DAT_04bb30a0;
  plVar1 = (long *)(lVar13 + 0x650a0);
  uVar10 = *(uint *)(lVar13 + 0x651b0);
  uVar11 = uVar10;
  if ((int)uVar10 < 1) {
    uVar11 = 0;
    if (*plVar1 != 0) {
      puVar19 = *(uint **)(*plVar1 + 8);
      uVar11 = 0;
      if (puVar19 != (uint *)0x0) {
        uVar11 = *puVar19;
      }
    }
  }
  uVar18 = *(uint *)(lVar13 + 0x65204);
  if (1 < uVar18) {
    uVar18 = 0;
  }
  if (uVar18 == 0) {
    pcVar21 = FUN_01b870e0;
    if (1 < (int)uVar11) goto LAB_01b86980;
LAB_01b86928:
    if (0 < (int)uVar10) goto LAB_01b86930;
LAB_01b86b08:
    uVar11 = uVar11 - 1;
    lVar20 = *plVar1;
    if (lVar20 == 0) {
      return;
    }
    puVar19 = *(uint **)(lVar20 + 8);
    if (((puVar19 == (uint *)0x0) ||
        (((uVar11 < *(uint *)(lVar13 + 0x650b8) &&
          (*(char *)(*(long *)(lVar13 + 0x650c0) + (long)(int)uVar11) == '\0')) ||
         (*puVar19 <= uVar11)))) || ((puVar19[1] == 0 || ((ushort)puVar19[2] == 0)))) {
      puVar19 = (uint *)0x0;
    }
    else {
      iVar15 = 0xc;
      if (*(char *)((long)puVar19 + 10) != '\0') {
        iVar15 = 0x1c;
      }
      puVar19 = (uint *)((ulong)(puVar19[1] * uVar11 + (uint)(ushort)puVar19[2] * 8 + iVar15) +
                        (long)puVar19);
    }
    piVar14 = *(int **)(lVar20 + 8);
    if (piVar14 == (int *)0x0) {
      return;
    }
    if ((*(int *)(lVar13 + 0x650b8) != 0) && (**(char **)(lVar13 + 0x650c0) == '\0')) {
      return;
    }
    if (*piVar14 == 0) {
      return;
    }
    if (piVar14[1] == 0) {
      return;
    }
    if ((ulong)*(ushort *)(piVar14 + 2) == 0) {
      return;
    }
    lVar13 = 0xc;
    if (*(char *)((long)piVar14 + 10) != '\0') {
      lVar13 = 0x1c;
    }
    lVar20 = (long)piVar14 + lVar13 + (ulong)*(ushort *)(piVar14 + 2) * 8;
  }
  else {
    if (uVar18 != 1) {
      return;
    }
    pcVar21 = (code *)&LAB_01b871f0;
    if ((int)uVar11 < 2) goto LAB_01b86928;
LAB_01b86980:
    uVar16 = 0;
    do {
      uVar18 = *(uint *)(lVar13 + 0x651b0);
      uVar10 = (uint)uVar16;
      if ((int)uVar18 < 1) {
        lVar20 = *plVar1;
        if (lVar20 == 0) {
          uVar16 = (ulong)(uVar10 + 1);
        }
        else {
          puVar19 = *(uint **)(lVar20 + 8);
          if ((puVar19 == (uint *)0x0) ||
             ((((uVar10 < *(uint *)(lVar13 + 0x650b8) &&
                (*(char *)(*(long *)(lVar13 + 0x650c0) + (long)(int)uVar10) == '\0')) ||
               (*puVar19 <= uVar10)) || ((puVar19[1] == 0 || ((ushort)puVar19[2] == 0)))))) {
            puVar19 = (uint *)0x0;
          }
          else {
            iVar15 = 0xc;
            if (*(char *)((long)puVar19 + 10) != '\0') {
              iVar15 = 0x1c;
            }
            puVar19 = (uint *)((ulong)(puVar19[1] * uVar10 + (uint)(ushort)puVar19[2] * 8 + iVar15)
                              + (long)puVar19);
          }
          puVar12 = *(uint **)(lVar20 + 8);
          uVar16 = (long)(int)uVar10 + 1;
          if (((puVar12 != (uint *)0x0) &&
              ((uVar10 = (uint)uVar16, *(uint *)(lVar13 + 0x650b8) <= uVar10 ||
               (*(char *)(*(long *)(lVar13 + 0x650c0) + uVar16) != '\0')))) &&
             ((uVar10 < *puVar12 && ((puVar12[1] != 0 && ((ushort)puVar12[2] != 0)))))) {
            iVar15 = 0xc;
            if (*(char *)((long)puVar12 + 10) != '\0') {
              iVar15 = 0x1c;
            }
            lVar20 = (ulong)(puVar12[1] * uVar10 + (uint)(ushort)puVar12[2] * 8 + iVar15) +
                     (long)puVar12;
            goto joined_r0x01b86af4;
          }
        }
      }
      else {
        if (uVar10 < uVar18) {
          uVar2 = uVar10;
          if (*(uint *)(lVar13 + 0x651a0) <= uVar10) {
            uVar2 = 0;
          }
          puVar19 = *(uint **)(*(long *)(lVar13 + 0x651a8) + (ulong)uVar2 * 8);
        }
        else {
          puVar19 = (uint *)0x0;
        }
        uVar10 = uVar10 + 1;
        uVar16 = (ulong)uVar10;
        if (uVar10 < uVar18) {
          if (*(uint *)(lVar13 + 0x651a0) <= uVar10) {
            uVar10 = 0;
          }
          lVar20 = *(long *)(*(long *)(lVar13 + 0x651a8) + (ulong)uVar10 * 8);
joined_r0x01b86af4:
          if ((((puVar19 != (uint *)0x0) && (lVar20 != 0)) &&
              (uVar10 = (*pcVar21)(puVar19), param_2 == (uVar10 & 0xff))) &&
             (uVar10 = (*pcVar21)(lVar20), puVar8 = PTR_DAT_04bb62f0, puVar7 = PTR_DAT_04bb62e8,
             param_2 != (uVar10 & 0xff))) {
            if (*puVar19 != 0) {
              cVar17 = *PTR_DAT_04bb62e8;
              iVar15 = 100;
              goto LAB_01b86d30;
            }
            uVar11 = 1;
            iVar15 = 100;
            goto LAB_01b87010;
          }
        }
      }
    } while ((int)uVar16 != uVar11 - 1);
    uVar10 = *(uint *)(lVar13 + 0x651b0);
    if ((int)uVar10 < 1) goto LAB_01b86b08;
LAB_01b86930:
    uVar11 = uVar11 - 1;
    if (uVar10 <= uVar11) {
      return;
    }
    lVar20 = **(long **)(lVar13 + 0x651a8);
    if (*(uint *)(lVar13 + 0x651a0) <= uVar11) {
      uVar11 = 0;
    }
    puVar19 = (uint *)(*(long **)(lVar13 + 0x651a8))[uVar11];
  }
  if (puVar19 == (uint *)0x0) {
    return;
  }
  if (lVar20 == 0) {
    return;
  }
  uVar11 = (*pcVar21)(puVar19);
  if (param_2 != (uVar11 & 0xff)) {
    return;
  }
  uVar11 = (*pcVar21)(lVar20);
  puVar8 = PTR_DAT_04bb62f0;
  puVar7 = PTR_DAT_04bb62e8;
  if (param_2 == (uVar11 & 0xff)) {
    return;
  }
  if (*puVar19 == 0) {
    uVar11 = 1;
    iVar15 = 100;
  }
  else {
    cVar17 = *PTR_DAT_04bb62e8;
    iVar15 = 100;
    do {
      if (cVar17 != '\0') {
        uVar11 = *(uint *)(puVar8 + 0x1c);
        if ((int)uVar11 < 0) {
          if (uVar11 == 0xffffffff) goto LAB_01b86c20;
        }
        else if ((byte *)((ulong)uVar11 + (long)puVar19) != (byte *)0x0) {
          uVar11 = (uint)*(byte *)((ulong)uVar11 + (long)puVar19);
          goto LAB_01b86e04;
        }
        goto LAB_01b86e00;
      }
      cVar17 = '\x01';
      *(undefined8 *)puVar8 = 0xffffffffffffffff;
      *(undefined8 *)(puVar8 + 8) = 0xffffffffffffffff;
      *puVar7 = 1;
      *(undefined8 *)(puVar8 + 0x10) = 0xffffffffffffffff;
      *(undefined8 *)(puVar8 + 0x18) = 0xffffffffffffffff;
      *(undefined8 *)(puVar8 + 0x20) = 0xffffffffffffffff;
      *(undefined8 *)(puVar8 + 0x28) = 0xffffffffffffffff;
      *(undefined8 *)(puVar8 + 0x30) = 0xffffffffffffffff;
      *(undefined8 *)(puVar8 + 0x38) = 0xffffffffffffffff;
      *(undefined8 *)(puVar8 + 0x40) = 0xffffffffffffffff;
      *(undefined8 *)(puVar8 + 0x48) = 0xffffffffffffffff;
LAB_01b86c20:
      puVar12 = (uint *)(ulong)*puVar19;
      uVar11 = 1;
      if ((*puVar19 == 0) || (puVar19 == puVar12)) {
LAB_01b86e04:
        uVar10 = *puVar19;
        iVar15 = uVar11 * 100;
        if (uVar10 != 0) {
          uVar18 = *(uint *)(puVar8 + 0x10);
          goto LAB_01b86e28;
        }
        break;
      }
      lVar13 = 0xc;
      if (*(char *)((long)puVar19 + (10 - (long)puVar12)) != '\0') {
        lVar13 = 0x1c;
      }
      lVar13 = (long)puVar19 + (lVar13 - (long)puVar12);
      if (lVar13 == 0) {
LAB_01b86e00:
        uVar11 = 1;
        goto LAB_01b86e04;
      }
      uVar16 = (ulong)*(ushort *)((long)puVar19 + (8 - (long)puVar12));
      *(undefined4 *)(puVar8 + 0x1c) = 0xfffffffe;
      if (uVar16 == 0) goto LAB_01b86e00;
      piVar14 = (int *)(lVar13 + 4);
      while (piVar14[-1] != 0x287db05d) {
        piVar14 = piVar14 + 2;
        uVar16 = uVar16 - 1;
        if (uVar16 == 0) goto LAB_01b86e00;
      }
      iVar3 = 0;
      if (*piVar14 != -1) {
        iVar3 = *piVar14;
      }
      *(int *)(puVar8 + 0x1c) = iVar3;
    } while (*puVar19 != 0);
LAB_01b86eac:
    uVar11 = 1;
  }
  goto LAB_01b86eb0;
LAB_01b86d30:
  do {
    if (cVar17 != '\0') {
      uVar11 = *(uint *)(puVar8 + 0x1c);
      if ((int)uVar11 < 0) {
        if (uVar11 == 0xffffffff) goto LAB_01b86d64;
      }
      else if ((byte *)((ulong)uVar11 + (long)puVar19) != (byte *)0x0) {
        uVar11 = (uint)*(byte *)((ulong)uVar11 + (long)puVar19);
        goto LAB_01b86f64;
      }
      goto LAB_01b86f60;
    }
    cVar17 = '\x01';
    *(undefined8 *)puVar8 = 0xffffffffffffffff;
    *(undefined8 *)(puVar8 + 8) = 0xffffffffffffffff;
    *puVar7 = 1;
    *(undefined8 *)(puVar8 + 0x10) = 0xffffffffffffffff;
    *(undefined8 *)(puVar8 + 0x18) = 0xffffffffffffffff;
    *(undefined8 *)(puVar8 + 0x20) = 0xffffffffffffffff;
    *(undefined8 *)(puVar8 + 0x28) = 0xffffffffffffffff;
    *(undefined8 *)(puVar8 + 0x30) = 0xffffffffffffffff;
    *(undefined8 *)(puVar8 + 0x38) = 0xffffffffffffffff;
    *(undefined8 *)(puVar8 + 0x40) = 0xffffffffffffffff;
    *(undefined8 *)(puVar8 + 0x48) = 0xffffffffffffffff;
LAB_01b86d64:
    puVar12 = (uint *)(ulong)*puVar19;
    uVar11 = 1;
    if ((*puVar19 == 0) || (puVar19 == puVar12)) {
LAB_01b86f64:
      uVar10 = *puVar19;
      iVar15 = uVar11 * 100;
      if (uVar10 != 0) {
        uVar18 = *(uint *)(puVar8 + 0x10);
        goto LAB_01b86f88;
      }
      break;
    }
    lVar13 = 0xc;
    if (*(char *)((long)puVar19 + (10 - (long)puVar12)) != '\0') {
      lVar13 = 0x1c;
    }
    lVar13 = (long)puVar19 + (lVar13 - (long)puVar12);
    if (lVar13 == 0) {
LAB_01b86f60:
      uVar11 = 1;
      goto LAB_01b86f64;
    }
    uVar16 = (ulong)*(ushort *)((long)puVar19 + (8 - (long)puVar12));
    *(undefined4 *)(puVar8 + 0x1c) = 0xfffffffe;
    if (uVar16 == 0) goto LAB_01b86f60;
    piVar14 = (int *)(lVar13 + 4);
    while (piVar14[-1] != 0x287db05d) {
      piVar14 = piVar14 + 2;
      uVar16 = uVar16 - 1;
      if (uVar16 == 0) goto LAB_01b86f60;
    }
    iVar3 = 0;
    if (*piVar14 != -1) {
      iVar3 = *piVar14;
    }
    *(int *)(puVar8 + 0x1c) = iVar3;
  } while (*puVar19 != 0);
LAB_01b8700c:
  uVar11 = 1;
  goto LAB_01b87010;
  while( true ) {
    if ((uVar18 != 0xffffffff) || (lVar13 = (long)puVar19 - (ulong)uVar10, lVar13 == 0))
    goto LAB_01b8700c;
    lVar20 = 0xc;
    if (*(char *)(lVar13 + 10) != '\0') {
      lVar20 = 0x1c;
    }
    if (lVar20 + lVar13 == 0) goto LAB_01b8700c;
    uVar16 = (ulong)*(ushort *)(lVar13 + 8);
    *(undefined4 *)(puVar8 + 0x10) = 0xfffffffe;
    if (uVar16 == 0) goto LAB_01b8700c;
    puVar12 = (uint *)(lVar20 + lVar13 + 4);
    while (puVar12[-1] != 0xd5692bff) {
      puVar12 = puVar12 + 2;
      uVar16 = uVar16 - 1;
      if (uVar16 == 0) goto LAB_01b8700c;
    }
    uVar18 = 0;
    if (*puVar12 != 0xffffffff) {
      uVar18 = *puVar12;
    }
    uVar11 = 1;
    *(uint *)(puVar8 + 0x10) = uVar18;
    uVar10 = *puVar19;
    if (uVar10 == 0) break;
LAB_01b86f88:
    if (-1 < (int)uVar18) {
      if ((byte *)((long)puVar19 + (ulong)uVar18) == (byte *)0x0) goto LAB_01b8700c;
      uVar11 = (uint)*(byte *)((long)puVar19 + (ulong)uVar18);
      break;
    }
  }
LAB_01b87010:
  uVar11 = iVar15 + uVar11;
  uVar5 = param_3[1];
  cVar17 = *(char *)((long)param_3 + 3);
  uVar4 = *param_3;
  uVar6 = param_3[3];
  param_1[2] = param_3[2];
  *(char *)(param_1 + 3) = (char)uVar6;
  uVar10 = (uint)uVar4;
  if (uVar11 < ((int)cVar17 + (char)uVar5 * 100 & 0xffffU)) {
    uVar10 = uVar10 + 1;
  }
  *(char *)(param_1 + 1) = (char)(uVar11 / 100);
  *param_1 = (short)uVar10;
  *(char *)((long)param_1 + 3) = (char)(uVar11 % 100);
  if ((uVar10 & 3) == 0) {
    if (0x28f < ((uVar10 & 0xffff) * 0x170a4000 & 0xffff | (uVar10 & 0xffff) * 0x5c29 >> 2 & 0x3fff)
       ) {
      return;
    }
    bVar9 = (uVar10 & 0xf) != 0;
  }
  else {
    bVar9 = true;
  }
  if (uVar11 % 100 != 0x1d || (uVar11 / 100 & 0xff) != 2) {
    return;
  }
  if (!bVar9) {
    return;
  }
  goto LAB_01b87080;
  while( true ) {
    if ((uVar18 != 0xffffffff) || (lVar13 = (long)puVar19 - (ulong)uVar10, lVar13 == 0))
    goto LAB_01b86eac;
    lVar20 = 0xc;
    if (*(char *)(lVar13 + 10) != '\0') {
      lVar20 = 0x1c;
    }
    if (lVar20 + lVar13 == 0) goto LAB_01b86eac;
    uVar16 = (ulong)*(ushort *)(lVar13 + 8);
    *(undefined4 *)(puVar8 + 0x10) = 0xfffffffe;
    if (uVar16 == 0) goto LAB_01b86eac;
    puVar12 = (uint *)(lVar20 + lVar13 + 4);
    while (puVar12[-1] != 0xd5692bff) {
      puVar12 = puVar12 + 2;
      uVar16 = uVar16 - 1;
      if (uVar16 == 0) goto LAB_01b86eac;
    }
    uVar18 = 0;
    if (*puVar12 != 0xffffffff) {
      uVar18 = *puVar12;
    }
    uVar11 = 1;
    *(uint *)(puVar8 + 0x10) = uVar18;
    uVar10 = *puVar19;
    if (uVar10 == 0) break;
LAB_01b86e28:
    if (-1 < (int)uVar18) {
      if ((byte *)((long)puVar19 + (ulong)uVar18) == (byte *)0x0) goto LAB_01b86eac;
      uVar11 = (uint)*(byte *)((long)puVar19 + (ulong)uVar18);
      break;
    }
  }
LAB_01b86eb0:
  uVar11 = iVar15 + uVar11;
  uVar5 = param_3[1];
  cVar17 = *(char *)((long)param_3 + 3);
  uVar4 = *param_3;
  uVar6 = param_3[3];
  param_1[2] = param_3[2];
  *(char *)(param_1 + 3) = (char)uVar6;
  uVar10 = (uint)uVar4;
  if (uVar11 < ((int)cVar17 + (char)uVar5 * 100 & 0xffffU)) {
    uVar10 = uVar10 + 1;
  }
  *(char *)(param_1 + 1) = (char)(uVar11 / 100);
  *param_1 = (short)uVar10;
  *(char *)((long)param_1 + 3) = (char)(uVar11 % 100);
  if ((uVar10 & 3) == 0) {
    if (0x28f < ((uVar10 & 0xffff) * 0x170a4000 & 0xffff | (uVar10 & 0xffff) * 0x5c29 >> 2 & 0x3fff)
       ) {
      return;
    }
    bVar9 = (uVar10 & 0xf) != 0;
  }
  else {
    bVar9 = true;
  }
  if ((uVar11 % 100 == 0x1d && (uVar11 / 100 & 0xff) == 2) && bVar9) {
LAB_01b87080:
    param_1[1] = 0x1c02;
  }
  return;
}

