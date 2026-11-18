
void FUN_037567d0(undefined8 *param_1,uint param_2,uint param_3)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  uint *puVar4;
  int iVar5;
  uint uVar6;
  long lVar7;
  char cVar8;
  ulong uVar9;
  uint uVar10;
  uint uVar11;
  uint *puVar12;
  int *piVar13;
  
  puVar3 = PTR_DAT_04bcad20;
  puVar2 = PTR_DAT_04bcad18;
  lVar7 = *(long *)*param_1;
  if ((int)*(uint *)(lVar7 + 0x3c0) < 1) {
    if (*(long *)(lVar7 + 0x2b0) == 0) {
      return;
    }
    puVar4 = *(uint **)(*(long *)(lVar7 + 0x2b0) + 8);
    if (puVar4 == (uint *)0x0) {
      return;
    }
    if ((param_2 < *(uint *)(lVar7 + 0x2c8)) &&
       (*(char *)(*(long *)(lVar7 + 0x2d0) + (long)(int)param_2) == '\0')) {
      return;
    }
    if (*puVar4 <= param_2) {
      return;
    }
    if (puVar4[1] == 0) {
      return;
    }
    if ((ushort)puVar4[2] == 0) {
      return;
    }
    iVar5 = 0xc;
    if (*(char *)((long)puVar4 + 10) != '\0') {
      iVar5 = 0x1c;
    }
    puVar4 = (uint *)((ulong)(puVar4[1] * param_2 + (uint)(ushort)puVar4[2] * 8 + iVar5) +
                     (long)puVar4);
  }
  else {
    if (*(uint *)(lVar7 + 0x3c0) <= param_2) {
      return;
    }
    if (*(uint *)(lVar7 + 0x3b0) <= param_2) {
      param_2 = 0;
    }
    puVar4 = *(uint **)(*(long *)(lVar7 + 0x3b8) + (ulong)param_2 * 8);
  }
  if ((int)param_3 < 1) {
    return;
  }
  if (puVar4 == (uint *)0x0) {
    return;
  }
  if (*puVar4 != 0) {
    cVar8 = *PTR_DAT_04bcad18;
    do {
      if (cVar8 != '\0') {
        uVar11 = *(uint *)(puVar3 + 4);
        if ((int)uVar11 < 0) {
          if (uVar11 == 0xffffffff) goto LAB_03756870;
        }
        else if ((ushort *)((ulong)uVar11 + (long)puVar4) != (ushort *)0x0) {
          uVar11 = (uint)*(ushort *)((ulong)uVar11 + (long)puVar4);
          goto LAB_03756970;
        }
LAB_0375696c:
        uVar11 = 0;
LAB_03756970:
        uVar6 = 0;
        if (uVar11 != 0) {
          uVar6 = param_3 / uVar11;
        }
        uVar11 = *puVar4;
        if (uVar11 == 0) goto LAB_03756a04;
        uVar10 = *(uint *)puVar3;
        goto LAB_03756994;
      }
      cVar8 = '\x01';
      *(undefined8 *)puVar3 = 0xffffffffffffffff;
      *(undefined8 *)(puVar3 + 8) = 0xffffffffffffffff;
      *puVar2 = 1;
LAB_03756870:
      puVar12 = (uint *)(ulong)*puVar4;
      uVar11 = 0;
      if ((*puVar4 == 0) || (puVar4 == puVar12)) goto LAB_03756970;
      lVar7 = 0xc;
      if (*(char *)((long)puVar4 + (10 - (long)puVar12)) != '\0') {
        lVar7 = 0x1c;
      }
      lVar7 = (long)puVar4 + (lVar7 - (long)puVar12);
      if (lVar7 == 0) goto LAB_0375696c;
      uVar9 = (ulong)*(ushort *)((long)puVar4 + (8 - (long)puVar12));
      *(undefined4 *)(puVar3 + 4) = 0xfffffffe;
      uVar11 = 0;
      if (uVar9 == 0) goto LAB_03756970;
      piVar13 = (int *)(lVar7 + 4);
      while (piVar13[-1] != 0x170af5b8) {
        piVar13 = piVar13 + 2;
        uVar9 = uVar9 - 1;
        if (uVar9 == 0) {
          uVar11 = 0;
          goto LAB_03756970;
        }
      }
      iVar5 = 0;
      if (*piVar13 != -1) {
        iVar5 = *piVar13;
      }
      *(int *)(puVar3 + 4) = iVar5;
    } while (*puVar4 != 0);
  }
LAB_03756ab0:
  uVar6 = 0;
LAB_03756ab4:
  uVar10 = 0;
  goto LAB_03756ab8;
LAB_03756994:
  if (-1 < (int)uVar10) {
    uVar11 = 0;
    if ((ushort *)((long)puVar4 + (ulong)uVar10) != (ushort *)0x0) {
      uVar11 = (uint)*(ushort *)((long)puVar4 + (ulong)uVar10);
    }
    goto LAB_03756a08;
  }
  if ((uVar10 != 0xffffffff) || (lVar7 = (long)puVar4 - (ulong)uVar11, lVar7 == 0))
  goto LAB_03756a04;
  lVar1 = 0xc;
  if (*(char *)(lVar7 + 10) != '\0') {
    lVar1 = 0x1c;
  }
  if (lVar1 + lVar7 == 0) goto LAB_03756a04;
  uVar9 = (ulong)*(ushort *)(lVar7 + 8);
  *(undefined4 *)puVar3 = 0xfffffffe;
  if (uVar9 == 0) goto LAB_03756a04;
  puVar12 = (uint *)(lVar1 + lVar7 + 4);
  while (puVar12[-1] != 0xc79325f5) {
    puVar12 = puVar12 + 2;
    uVar9 = uVar9 - 1;
    if (uVar9 == 0) goto LAB_03756a04;
  }
  uVar10 = 0;
  if (*puVar12 != 0xffffffff) {
    uVar10 = *puVar12;
  }
  *(uint *)puVar3 = uVar10;
  uVar11 = *puVar4;
  if (uVar11 == 0) goto LAB_03756a04;
  goto LAB_03756994;
LAB_03756bac:
  if (-1 < (int)uVar10) {
    if ((ushort *)((long)puVar4 + (ulong)uVar10) != (ushort *)0x0) {
      uVar10 = (uint)*(ushort *)((long)puVar4 + (ulong)uVar10);
      goto LAB_03756ab8;
    }
    goto LAB_03756ab4;
  }
  if ((uVar10 != 0xffffffff) || (lVar7 = (long)puVar4 - (ulong)uVar11, lVar7 == 0))
  goto LAB_03756ab4;
  lVar1 = 0xc;
  if (*(char *)(lVar7 + 10) != '\0') {
    lVar1 = 0x1c;
  }
  uVar10 = 0;
  if (lVar1 + lVar7 == 0) goto LAB_03756ab8;
  uVar9 = (ulong)*(ushort *)(lVar7 + 8);
  *(undefined4 *)(puVar3 + 8) = 0xfffffffe;
  if (uVar9 == 0) goto LAB_03756ab4;
  puVar12 = (uint *)(lVar1 + lVar7 + 4);
  while (puVar12[-1] != 0x2f571a00) {
    puVar12 = puVar12 + 2;
    uVar9 = uVar9 - 1;
    if (uVar9 == 0) goto LAB_03756ab4;
  }
  uVar10 = 0;
  if (*puVar12 != 0xffffffff) {
    uVar10 = *puVar12;
  }
  *(uint *)(puVar3 + 8) = uVar10;
  uVar11 = *puVar4;
  if (uVar11 == 0) goto LAB_03756ab4;
  goto LAB_03756bac;
LAB_03756a04:
  uVar11 = 0;
LAB_03756a08:
  uVar9 = (ulong)*puVar4;
  if (uVar6 <= uVar11) {
    if (uVar9 != 0) {
      uVar11 = *(uint *)(puVar3 + 8);
      while( true ) {
        if (-1 < (int)uVar11) {
          uVar10 = 0;
          if ((ushort *)((long)puVar4 + (ulong)uVar11) != (ushort *)0x0) {
            uVar10 = (uint)*(ushort *)((long)puVar4 + (ulong)uVar11);
          }
          iVar5 = uVar10 * uVar6;
          goto LAB_03756b50;
        }
        if ((uVar11 != 0xffffffff) || (lVar7 = (long)puVar4 - uVar9, lVar7 == 0)) break;
        lVar1 = 0xc;
        if (*(char *)(lVar7 + 10) != '\0') {
          lVar1 = 0x1c;
        }
        if (lVar1 + lVar7 == 0) break;
        uVar9 = (ulong)*(ushort *)(lVar7 + 8);
        *(undefined4 *)(puVar3 + 8) = 0xfffffffe;
        if (uVar9 == 0) break;
        puVar12 = (uint *)(lVar1 + lVar7 + 4);
        while (puVar12[-1] != 0x2f571a00) {
          puVar12 = puVar12 + 2;
          uVar9 = uVar9 - 1;
          if (uVar9 == 0) goto LAB_03756b48;
        }
        uVar11 = 0;
        if (*puVar12 != 0xffffffff) {
          uVar11 = *puVar12;
        }
        *(uint *)(puVar3 + 8) = uVar11;
        uVar9 = (ulong)*puVar4;
        if (*puVar4 == 0) break;
      }
    }
LAB_03756b48:
    iVar5 = 0;
    goto LAB_03756b50;
  }
  if (uVar9 == 0) goto LAB_03756ab0;
  uVar11 = *(uint *)puVar3;
  do {
    if (-1 < (int)uVar11) {
      uVar6 = 0;
      if ((ushort *)((long)puVar4 + (ulong)uVar11) != (ushort *)0x0) {
        uVar6 = (uint)*(ushort *)((long)puVar4 + (ulong)uVar11);
      }
LAB_03756b8c:
      uVar11 = *puVar4;
      if (uVar11 == 0) goto LAB_03756ab4;
      uVar10 = *(uint *)(puVar3 + 8);
      goto LAB_03756bac;
    }
    if (uVar11 != 0xffffffff) {
LAB_03756b78:
      uVar6 = 0;
      goto LAB_03756b8c;
    }
    lVar7 = (long)puVar4 - uVar9;
    uVar6 = 0;
    if (lVar7 == 0) goto LAB_03756b8c;
    lVar1 = 0xc;
    if (*(char *)(lVar7 + 10) != '\0') {
      lVar1 = 0x1c;
    }
    if (lVar1 + lVar7 == 0) goto LAB_03756b78;
    uVar9 = (ulong)*(ushort *)(lVar7 + 8);
    *(undefined4 *)puVar3 = 0xfffffffe;
    uVar6 = 0;
    if (uVar9 == 0) goto LAB_03756b8c;
    puVar12 = (uint *)(lVar1 + lVar7 + 4);
    while (puVar12[-1] != 0xc79325f5) {
      puVar12 = puVar12 + 2;
      uVar9 = uVar9 - 1;
      if (uVar9 == 0) {
        uVar6 = 0;
        goto LAB_03756b8c;
      }
    }
    uVar6 = 0;
    uVar10 = 0;
    uVar11 = 0;
    if (*puVar12 != 0xffffffff) {
      uVar11 = *puVar12;
    }
    *(uint *)puVar3 = uVar11;
    uVar9 = (ulong)*puVar4;
  } while (*puVar4 != 0);
LAB_03756ab8:
  iVar5 = uVar10 * uVar6;
LAB_03756b50:
  *(int *)param_1[1] = *(int *)param_1[1] + iVar5;
  return;
}

