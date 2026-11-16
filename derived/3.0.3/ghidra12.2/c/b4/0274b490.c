
void FUN_0274b490(undefined2 *param_1,long *param_2,int *param_3)

{
  long lVar1;
  uint uVar2;
  uint *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  int iVar6;
  uint uVar7;
  undefined2 uVar8;
  uint *puVar9;
  byte bVar10;
  undefined2 *puVar11;
  uint *puVar12;
  ulong uVar13;
  int *piVar14;
  long lVar15;
  uint uVar16;
  uint uVar17;
  int iVar18;
  char cVar19;
  
  if ((*(char *)((long)param_2 + 0x2e) == '\0') ||
     (iVar18 = *param_3, iVar6 = FUN_0252d29c(), iVar18 != iVar6)) {
    puVar5 = PTR_DAT_04bb6348;
    puVar4 = PTR_DAT_04bb6340;
    lVar15 = *(long *)PTR_DAT_04bb2208;
    uVar16 = *(uint *)(lVar15 + 0x1c0);
    if ((0 < (int)uVar16) ||
       (((*(long *)(lVar15 + 0xb0) != 0 &&
         (puVar9 = *(uint **)(*(long *)(lVar15 + 0xb0) + 8), puVar9 != (uint *)0x0)) &&
        (uVar16 = *puVar9, uVar16 != 0)))) {
      uVar17 = 0;
      cVar19 = *PTR_DAT_04bb6340;
LAB_0274b540:
      if (0 < (int)*(uint *)(lVar15 + 0x1c0)) {
        if (uVar17 < *(uint *)(lVar15 + 0x1c0)) {
          uVar7 = uVar17;
          if (*(uint *)(lVar15 + 0x1b0) <= uVar17) {
            uVar7 = 0;
          }
          puVar9 = *(uint **)(*(long *)(lVar15 + 0x1b8) + (ulong)uVar7 * 8);
          if (puVar9 != (uint *)0x0) goto LAB_0274b56c;
        }
        goto switchD_0274b6c4_default;
      }
      if (((((*(long *)(lVar15 + 0xb0) == 0) ||
            (puVar9 = *(uint **)(*(long *)(lVar15 + 0xb0) + 8), puVar9 == (uint *)0x0)) ||
           ((uVar17 < *(uint *)(lVar15 + 200) &&
            (*(char *)(*(long *)(lVar15 + 0xd0) + (long)(int)uVar17) == '\0')))) ||
          ((*puVar9 <= uVar17 || (puVar9[1] == 0)))) || ((ushort)puVar9[2] == 0))
      goto switchD_0274b6c4_default;
      iVar18 = 0xc;
      if (*(char *)((long)puVar9 + 10) != '\0') {
        iVar18 = 0x1c;
      }
      puVar9 = (uint *)((ulong)(puVar9[1] * uVar17 + (uint)(ushort)puVar9[2] * 8 + iVar18) +
                       (long)puVar9);
      if (puVar9 == (uint *)0x0) goto switchD_0274b6c4_default;
LAB_0274b56c:
      bVar10 = 0;
      if (*puVar9 != 0) {
        do {
          if (cVar19 != '\0') {
            uVar7 = *(uint *)(puVar5 + 0xc);
            if ((int)uVar7 < 0) {
              if (uVar7 == 0xffffffff) {
                uVar7 = *puVar9;
                if (uVar7 != 0) goto LAB_0274b5b0;
                bVar10 = 0;
                goto LAB_0274b6a4;
              }
            }
            else {
              bVar10 = 0;
              if (((byte *)((ulong)uVar7 + (long)puVar9) == (byte *)0x0) ||
                 (bVar10 = *(byte *)((ulong)uVar7 + (long)puVar9), bVar10 < 5)) goto LAB_0274b6a4;
            }
LAB_0274b6a0:
            bVar10 = 0;
            goto LAB_0274b6a4;
          }
          cVar19 = '\x01';
          *(undefined8 *)puVar5 = 0xffffffffffffffff;
          *(undefined8 *)(puVar5 + 8) = 0xffffffffffffffff;
          *puVar4 = 1;
          *(undefined8 *)(puVar5 + 0x20) = 0xffffffffffffffff;
          *(undefined8 *)(puVar5 + 0x10) = 0xffffffffffffffff;
          *(undefined8 *)(puVar5 + 0x18) = 0xffffffffffffffff;
          uVar7 = *puVar9;
          bVar10 = 0;
          if (uVar7 == 0) goto LAB_0274b6a4;
LAB_0274b5b0:
          puVar12 = (uint *)(ulong)uVar7;
          if (puVar9 == puVar12) goto LAB_0274b6a0;
          lVar1 = 0xc;
          if (*(char *)((long)puVar9 + (10 - (long)puVar12)) != '\0') {
            lVar1 = 0x1c;
          }
          lVar1 = (long)puVar9 + (lVar1 - (long)puVar12);
          if (lVar1 == 0) goto LAB_0274b6a0;
          uVar13 = (ulong)*(ushort *)((long)puVar9 + (8 - (long)puVar12));
          *(undefined4 *)(puVar5 + 0xc) = 0xfffffffe;
          bVar10 = 0;
          if (uVar13 == 0) goto LAB_0274b6a4;
          piVar14 = (int *)(lVar1 + 4);
          while (piVar14[-1] != 0x5140e4b4) {
            piVar14 = piVar14 + 2;
            uVar13 = uVar13 - 1;
            if (uVar13 == 0) {
              bVar10 = 0;
              goto LAB_0274b6a4;
            }
          }
          iVar18 = 0;
          if (*piVar14 != -1) {
            iVar18 = *piVar14;
          }
          *(int *)(puVar5 + 0xc) = iVar18;
        } while (*puVar9 != 0);
        bVar10 = 0;
      }
LAB_0274b6a4:
      switch(bVar10) {
      case 1:
        if (*param_2 != 0) goto switchD_0274b6c4_caseD_3;
        break;
      case 2:
        if ((*param_2 != 0) || (*(char *)((long)param_2 + 0x2a) != '\0'))
        goto switchD_0274b6c4_caseD_3;
        break;
      case 3:
switchD_0274b6c4_caseD_3:
        while (*puVar9 != 0) {
          if (cVar19 != '\0') {
            uVar7 = *(uint *)(puVar5 + 8);
            if ((int)uVar7 < 0) {
              if (uVar7 != 0xffffffff) goto LAB_0274b874;
              puVar12 = (uint *)(ulong)*puVar9;
              if (*puVar9 != 0) goto LAB_0274b75c;
              puVar12 = (uint *)0x0;
            }
            else {
              puVar12 = (uint *)0x0;
              if ((ushort *)((ulong)uVar7 + (long)puVar9) != (ushort *)0x0) {
                puVar12 = (uint *)(ulong)*(ushort *)((ulong)uVar7 + (long)puVar9);
              }
            }
LAB_0274b7a8:
            uVar7 = *puVar9;
            goto joined_r0x0274b7ac;
          }
          cVar19 = '\x01';
          *(undefined8 *)puVar5 = 0xffffffffffffffff;
          *(undefined8 *)(puVar5 + 8) = 0xffffffffffffffff;
          *puVar4 = 1;
          *(undefined8 *)(puVar5 + 0x20) = 0xffffffffffffffff;
          *(undefined8 *)(puVar5 + 0x10) = 0xffffffffffffffff;
          *(undefined8 *)(puVar5 + 0x18) = 0xffffffffffffffff;
          puVar12 = (uint *)(ulong)*puVar9;
          if (*puVar9 == 0) goto LAB_0274b7a8;
LAB_0274b75c:
          if (puVar9 == puVar12) {
LAB_0274b874:
            puVar12 = (uint *)0x0;
            goto LAB_0274b7a8;
          }
          lVar1 = 0xc;
          if (*(char *)((long)puVar9 + (10 - (long)puVar12)) != '\0') {
            lVar1 = 0x1c;
          }
          lVar1 = (long)puVar9 + (lVar1 - (long)puVar12);
          if (lVar1 == 0) goto LAB_0274b874;
          uVar13 = (ulong)*(ushort *)((long)puVar9 + (8 - (long)puVar12));
          *(undefined4 *)(puVar5 + 8) = 0xfffffffe;
          puVar12 = (uint *)0x0;
          if (uVar13 == 0) goto LAB_0274b7a8;
          piVar14 = (int *)(lVar1 + 4);
          while (piVar14[-1] != 0x54706054) {
            piVar14 = piVar14 + 2;
            uVar13 = uVar13 - 1;
            puVar12 = (uint *)0x0;
            if (uVar13 == 0) goto LAB_0274b7a8;
          }
          iVar18 = 0;
          if (*piVar14 != -1) {
            iVar18 = *piVar14;
          }
          *(int *)(puVar5 + 8) = iVar18;
        }
        uVar8 = 0;
        goto LAB_0274b52c;
      case 4:
        if (0 < *param_2) goto switchD_0274b6c4_caseD_3;
      }
      goto switchD_0274b6c4_default;
    }
  }
  return;
joined_r0x0274b7ac:
  if (uVar7 == 0) goto LAB_0274b858;
  if (cVar19 == '\0') {
    cVar19 = '\x01';
    *(undefined8 *)puVar5 = 0xffffffffffffffff;
    *(undefined8 *)(puVar5 + 8) = 0xffffffffffffffff;
    *puVar4 = 1;
    *(undefined8 *)(puVar5 + 0x20) = 0xffffffffffffffff;
    *(undefined8 *)(puVar5 + 0x10) = 0xffffffffffffffff;
    *(undefined8 *)(puVar5 + 0x18) = 0xffffffffffffffff;
    uVar7 = *puVar9;
  }
  else {
    uVar2 = *(uint *)puVar5;
    if (-1 < (int)uVar2) {
      uVar7 = 0;
      if ((uint *)((ulong)uVar2 + (long)puVar9) != (uint *)0x0) {
        uVar7 = *(uint *)((ulong)uVar2 + (long)puVar9);
      }
      goto LAB_0274b85c;
    }
    if (uVar2 != 0xffffffff) goto LAB_0274b858;
  }
  puVar3 = (uint *)(ulong)uVar7;
  if ((puVar3 == (uint *)0x0) || (puVar9 == puVar3)) goto LAB_0274b858;
  lVar1 = 0xc;
  if (*(char *)((long)puVar9 + (10 - (long)puVar3)) != '\0') {
    lVar1 = 0x1c;
  }
  lVar1 = (long)puVar9 + (lVar1 - (long)puVar3);
  if (lVar1 == 0) goto LAB_0274b858;
  uVar13 = (ulong)*(ushort *)((long)puVar9 + (8 - (long)puVar3));
  *(undefined4 *)puVar5 = 0xfffffffe;
  if (uVar13 == 0) goto LAB_0274b858;
  piVar14 = (int *)(lVar1 + 4);
  while (piVar14[-1] != 0x4c24f1cf) {
    piVar14 = piVar14 + 2;
    uVar13 = uVar13 - 1;
    if (uVar13 == 0) goto LAB_0274b858;
  }
  iVar18 = 0;
  if (*piVar14 != -1) {
    iVar18 = *piVar14;
  }
  *(int *)puVar5 = iVar18;
  uVar7 = *puVar9;
  goto joined_r0x0274b7ac;
LAB_0274b858:
  uVar7 = 0;
LAB_0274b85c:
  if (0xfffe < uVar7) {
    uVar7 = 0xffff;
  }
  uVar8 = (undefined2)uVar7;
  if ((uint)puVar12 < 0x800) {
    puVar11 = param_1 + (long)puVar12;
  }
  else {
LAB_0274b52c:
    puVar11 = param_1;
  }
  *puVar11 = uVar8;
switchD_0274b6c4_default:
  uVar17 = uVar17 + 1;
  if (uVar17 == uVar16) {
    return;
  }
  goto LAB_0274b540;
}

