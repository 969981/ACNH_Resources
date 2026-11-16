
void FUN_02746850(undefined1 *param_1,long *param_2)

{
  uint uVar1;
  long lVar2;
  long lVar3;
  undefined *puVar4;
  undefined *puVar5;
  uint uVar6;
  undefined1 uVar7;
  uint *puVar8;
  char cVar9;
  uint uVar10;
  undefined1 *puVar11;
  byte bVar12;
  ulong uVar13;
  long lVar14;
  uint uVar15;
  uint uVar16;
  int iVar17;
  uint *puVar18;
  int *piVar19;
  
  puVar5 = PTR_DAT_04bb6360;
  puVar4 = PTR_DAT_04bb6358;
  lVar14 = *(long *)PTR_DAT_04bb2208;
  uVar15 = *(uint *)(lVar14 + 0x3e0);
  if (((int)uVar15 < 1) &&
     (((*(long *)(lVar14 + 0x2d0) == 0 ||
       (puVar8 = *(uint **)(*(long *)(lVar14 + 0x2d0) + 8), puVar8 == (uint *)0x0)) ||
      (uVar15 = *puVar8, uVar15 == 0)))) {
    return;
  }
  uVar16 = 0;
LAB_027468dc:
  if (0 < (int)*(uint *)(lVar14 + 0x3e0)) {
    if (uVar16 < *(uint *)(lVar14 + 0x3e0)) {
      uVar1 = uVar16;
      if (*(uint *)(lVar14 + 0x3d0) <= uVar16) {
        uVar1 = 0;
      }
      puVar8 = *(uint **)(*(long *)(lVar14 + 0x3d8) + (ulong)uVar1 * 8);
      if (puVar8 != (uint *)0x0) goto LAB_02746908;
    }
    goto switchD_02746a64_default;
  }
  if (((((*(long *)(lVar14 + 0x2d0) == 0) ||
        (puVar8 = *(uint **)(*(long *)(lVar14 + 0x2d0) + 8), puVar8 == (uint *)0x0)) ||
       ((uVar16 < *(uint *)(lVar14 + 0x2e8) &&
        (*(char *)(*(long *)(lVar14 + 0x2f0) + (long)(int)uVar16) == '\0')))) ||
      ((*puVar8 <= uVar16 || (puVar8[1] == 0)))) || ((ushort)puVar8[2] == 0))
  goto switchD_02746a64_default;
  iVar17 = 0xc;
  if (*(char *)((long)puVar8 + 10) != '\0') {
    iVar17 = 0x1c;
  }
  puVar8 = (uint *)((ulong)(puVar8[1] * uVar16 + (uint)(ushort)puVar8[2] * 8 + iVar17) +
                   (long)puVar8);
  if (puVar8 == (uint *)0x0) goto switchD_02746a64_default;
LAB_02746908:
  if (*puVar8 == 0) {
LAB_02746a40:
    bVar12 = 0;
  }
  else {
    cVar9 = *puVar4;
    do {
      if (cVar9 == '\0') {
        cVar9 = '\x01';
        *(undefined8 *)puVar5 = 0xffffffffffffffff;
        *(undefined8 *)(puVar5 + 8) = 0xffffffffffffffff;
        *puVar4 = 1;
        *(undefined8 *)(puVar5 + 0x20) = 0xffffffffffffffff;
        *(undefined8 *)(puVar5 + 0x10) = 0xffffffffffffffff;
        *(undefined8 *)(puVar5 + 0x18) = 0xffffffffffffffff;
      }
      else {
        uVar1 = *(uint *)(puVar5 + 8);
        if (-1 < (int)uVar1) {
          if (((byte *)((ulong)uVar1 + (long)puVar8) == (byte *)0x0) ||
             (bVar12 = *(byte *)((ulong)uVar1 + (long)puVar8), 4 < bVar12)) goto LAB_02746a40;
          goto LAB_02746a44;
        }
        if (uVar1 != 0xffffffff) goto LAB_02746a40;
      }
      puVar18 = (uint *)(ulong)*puVar8;
      bVar12 = 0;
      if ((*puVar8 == 0) || (puVar8 == puVar18)) goto LAB_02746a44;
      lVar2 = 0xc;
      if (*(char *)((long)puVar8 + (10 - (long)puVar18)) != '\0') {
        lVar2 = 0x1c;
      }
      lVar2 = (long)puVar8 + (lVar2 - (long)puVar18);
      if (lVar2 == 0) goto LAB_02746a40;
      uVar13 = (ulong)*(ushort *)((long)puVar8 + (8 - (long)puVar18));
      *(undefined4 *)(puVar5 + 8) = 0xfffffffe;
      bVar12 = 0;
      if (uVar13 == 0) goto LAB_02746a44;
      piVar19 = (int *)(lVar2 + 4);
      while (piVar19[-1] != 0x5140e4b4) {
        piVar19 = piVar19 + 2;
        uVar13 = uVar13 - 1;
        if (uVar13 == 0) {
          bVar12 = 0;
          goto LAB_02746a44;
        }
      }
      iVar17 = 0;
      if (*piVar19 != -1) {
        iVar17 = *piVar19;
      }
      *(int *)(puVar5 + 8) = iVar17;
    } while (*puVar8 != 0);
    bVar12 = 0;
  }
LAB_02746a44:
  switch(bVar12) {
  case 1:
    if (*param_2 != 0) goto switchD_02746a64_caseD_3;
    break;
  case 2:
    if ((*param_2 != 0) || (*(char *)((long)param_2 + 0x2a) != '\0')) goto switchD_02746a64_caseD_3;
    break;
  case 3:
switchD_02746a64_caseD_3:
    uVar1 = *puVar8;
    if (uVar1 != 0) {
      cVar9 = *puVar4;
      do {
        puVar18 = (uint *)(ulong)uVar1;
        if (cVar9 != '\0') {
          uVar1 = *(uint *)puVar5;
          if (-1 < (int)uVar1) {
            uVar10 = 0;
            if ((ushort *)((ulong)uVar1 + (long)puVar8) != (ushort *)0x0) {
              uVar10 = (uint)*(ushort *)((ulong)uVar1 + (long)puVar8);
            }
            goto LAB_02746b68;
          }
          if (uVar1 == 0xffffffff) {
            uVar10 = 0;
            if (puVar18 != (uint *)0x0) goto LAB_02746ae0;
            goto LAB_02746b68;
          }
LAB_02746b4c:
          uVar10 = 0;
          uVar1 = *puVar8;
          uVar6 = 0;
          if (uVar1 == 0) goto LAB_02746be8;
LAB_02746b70:
          uVar10 = uVar6;
          uVar13 = (ulong)*(uint *)(puVar5 + 0x14);
          goto LAB_02746b74;
        }
        cVar9 = '\x01';
        *(undefined8 *)puVar5 = 0xffffffffffffffff;
        *(undefined8 *)(puVar5 + 8) = 0xffffffffffffffff;
        *puVar4 = 1;
        *(undefined8 *)(puVar5 + 0x20) = 0xffffffffffffffff;
        *(undefined8 *)(puVar5 + 0x10) = 0xffffffffffffffff;
        *(undefined8 *)(puVar5 + 0x18) = 0xffffffffffffffff;
        puVar18 = (uint *)(ulong)*puVar8;
        uVar10 = 0;
        if (puVar18 == (uint *)0x0) {
LAB_02746b68:
          uVar1 = *puVar8;
          uVar6 = uVar10;
          if (uVar1 != 0) goto LAB_02746b70;
          goto LAB_02746be8;
        }
LAB_02746ae0:
        uVar10 = 0;
        if (puVar8 == puVar18) goto LAB_02746b68;
        lVar2 = 0xc;
        if (*(char *)((long)puVar8 + (10 - (long)puVar18)) != '\0') {
          lVar2 = 0x1c;
        }
        lVar2 = (long)puVar8 + (lVar2 - (long)puVar18);
        if (lVar2 == 0) goto LAB_02746b4c;
        uVar13 = (ulong)*(ushort *)((long)puVar8 + (8 - (long)puVar18));
        *(undefined4 *)puVar5 = 0xfffffffe;
        uVar10 = 0;
        if (uVar13 == 0) goto LAB_02746b68;
        piVar19 = (int *)(lVar2 + 4);
        while (piVar19[-1] != 0x54706054) {
          piVar19 = piVar19 + 2;
          uVar13 = uVar13 - 1;
          if (uVar13 == 0) {
            uVar10 = 0;
            goto LAB_02746b68;
          }
        }
        iVar17 = 0;
        if (*piVar19 != -1) {
          iVar17 = *piVar19;
        }
        *(int *)puVar5 = iVar17;
        uVar1 = *puVar8;
      } while (uVar1 != 0);
    }
    uVar7 = 0;
    goto LAB_027468c0;
  case 4:
    if (0 < *param_2) goto switchD_02746a64_caseD_3;
  }
  goto switchD_02746a64_default;
LAB_02746b74:
  if (-1 < (int)uVar13) {
    uVar7 = 0;
    if ((undefined1 *)(uVar13 + (long)puVar8) != (undefined1 *)0x0) {
      uVar7 = *(undefined1 *)(uVar13 + (long)puVar8);
    }
    goto LAB_02746bec;
  }
  if ((uVar13 != 0xffffffff) || (lVar2 = (long)puVar8 - (ulong)uVar1, lVar2 == 0))
  goto LAB_02746be8;
  lVar3 = 0xc;
  if (*(char *)(lVar2 + 10) != '\0') {
    lVar3 = 0x1c;
  }
  if (lVar3 + lVar2 == 0) goto LAB_02746be8;
  uVar13 = (ulong)*(ushort *)(lVar2 + 8);
  *(undefined4 *)(puVar5 + 0x14) = 0xfffffffe;
  if (uVar13 == 0) goto LAB_02746be8;
  puVar18 = (uint *)(lVar3 + lVar2 + 4);
  while (puVar18[-1] != 0xd55938bd) {
    puVar18 = puVar18 + 2;
    uVar13 = uVar13 - 1;
    if (uVar13 == 0) goto LAB_02746be8;
  }
  uVar13 = 0;
  if (*puVar18 != 0xffffffff) {
    uVar13 = (ulong)*puVar18;
  }
  *(int *)(puVar5 + 0x14) = (int)uVar13;
  uVar1 = *puVar8;
  if (uVar1 == 0) goto LAB_02746be8;
  goto LAB_02746b74;
LAB_02746be8:
  uVar7 = 0;
LAB_02746bec:
  if (uVar10 < 0x100) {
    puVar11 = param_1 + uVar10;
  }
  else {
LAB_027468c0:
    puVar11 = param_1;
  }
  *puVar11 = uVar7;
switchD_02746a64_default:
  uVar16 = uVar16 + 1;
  if (uVar16 == uVar15) {
    return;
  }
  goto LAB_027468dc;
}

