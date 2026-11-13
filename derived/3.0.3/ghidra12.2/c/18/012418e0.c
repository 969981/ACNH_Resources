
ulong FUN_012418e0(ulong param_1)

{
  int iVar1;
  long lVar2;
  long lVar3;
  uint uVar4;
  ushort uVar5;
  uint uVar6;
  undefined *puVar7;
  undefined *puVar8;
  ulong uVar9;
  char cVar10;
  uint *puVar11;
  uint *puVar12;
  int *piVar13;
  long lVar14;
  
  puVar8 = PTR_DAT_04bbbc78;
  puVar7 = PTR_DAT_04bbbc70;
  uVar5 = *(ushort *)(DAT_05150358 + 0x1f8);
  uVar6 = ((uint)param_1 & 0xffff) - (uint)uVar5;
  uVar4 = *(uint *)(DAT_05150358 + 0x1d8);
  if (uVar6 < uVar4) {
    lVar14 = *(long *)(DAT_05150358 + 0x1e0);
    puVar11 = *(uint **)(lVar14 + (long)(int)uVar6 * 8);
    if (puVar11 != (uint *)0x0) {
      cVar10 = *PTR_DAT_04bbbc70;
LAB_01241950:
      uVar6 = *puVar11;
      while (uVar6 != 0) {
        if (cVar10 != '\0') {
          uVar6 = *(uint *)(puVar8 + 0x4c);
          if ((int)uVar6 < 0) {
            if (uVar6 == 0xffffffff) goto LAB_01241994;
          }
          else if ((undefined1 *)((ulong)uVar6 + (long)puVar11) != (undefined1 *)0x0) {
            switch(*(undefined1 *)((ulong)uVar6 + (long)puVar11)) {
            case 0:
              break;
            case 1:
              if (*puVar11 != 0) goto LAB_01241af8;
              goto LAB_01241c80;
            case 2:
              goto switchD_01241a2c_caseD_2;
            case 3:
              if (*puVar11 != 0) goto LAB_01241bb8;
              goto LAB_01241c80;
            default:
              goto switchD_01241a2c_default;
            }
          }
switchD_01241a2c_caseD_0:
          if (*puVar11 != 0) goto LAB_01241a38;
          break;
        }
        cVar10 = '\x01';
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
LAB_01241994:
        lVar3 = (long)puVar11 - (ulong)*puVar11;
        if ((*puVar11 == 0) || (lVar3 == 0)) goto switchD_01241a2c_caseD_0;
        lVar2 = 0xc;
        if (*(char *)(lVar3 + 10) != '\0') {
          lVar2 = 0x1c;
        }
        if (lVar2 + lVar3 == 0) goto switchD_01241a2c_caseD_0;
        uVar9 = (ulong)*(ushort *)(lVar3 + 8);
        *(undefined4 *)(puVar8 + 0x4c) = 0xfffffffe;
        if (uVar9 == 0) goto switchD_01241a2c_caseD_0;
        piVar13 = (int *)(lVar2 + lVar3 + 4);
        while (piVar13[-1] != -0xa58ccc9) {
          piVar13 = piVar13 + 2;
          uVar9 = uVar9 - 1;
          if (uVar9 == 0) goto switchD_01241a2c_caseD_0;
        }
        iVar1 = 0;
        if (*piVar13 != -1) {
          iVar1 = *piVar13;
        }
        *(int *)(puVar8 + 0x4c) = iVar1;
        uVar6 = *puVar11;
      }
      goto LAB_01241c80;
    }
  }
switchD_01241a2c_default:
  param_1 = 0xfffe;
switchD_01241a2c_caseD_2:
  return param_1;
LAB_01241bb8:
  if (cVar10 == '\0') {
    cVar10 = '\x01';
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
  }
  else {
    uVar6 = *(uint *)(puVar8 + 0x1c);
    uVar9 = (ulong)uVar6;
    if (-1 < (int)uVar6) goto LAB_01241c70;
    if (uVar6 != 0xffffffff) goto LAB_01241c80;
  }
  puVar12 = (uint *)(ulong)*puVar11;
  param_1 = 0xfffe;
  if ((*puVar11 == 0) || (puVar11 == puVar12)) goto LAB_01241c84;
  lVar3 = 0xc;
  if (*(char *)((long)puVar11 + (10 - (long)puVar12)) != '\0') {
    lVar3 = 0x1c;
  }
  lVar3 = (long)puVar11 + (lVar3 - (long)puVar12);
  if (lVar3 == 0) goto LAB_01241c80;
  uVar9 = (ulong)*(ushort *)((long)puVar11 + (8 - (long)puVar12));
  *(undefined4 *)(puVar8 + 0x1c) = 0xfffffffe;
  if (uVar9 == 0) goto LAB_01241c80;
  piVar13 = (int *)(lVar3 + 4);
  while (piVar13[-1] != 0x76e7fe08) {
    piVar13 = piVar13 + 2;
    uVar9 = uVar9 - 1;
    param_1 = 0xfffe;
    if (uVar9 == 0) goto LAB_01241c84;
  }
  iVar1 = 0;
  if (*piVar13 != -1) {
    iVar1 = *piVar13;
  }
  *(int *)(puVar8 + 0x1c) = iVar1;
  param_1 = 0xfffe;
  if (*puVar11 == 0) goto LAB_01241c84;
  goto LAB_01241bb8;
LAB_01241af8:
  if (cVar10 == '\0') {
    cVar10 = '\x01';
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
  }
  else {
    uVar6 = *(uint *)(puVar8 + 0x2c);
    uVar9 = (ulong)uVar6;
    if (-1 < (int)uVar6) goto LAB_01241c70;
    if (uVar6 != 0xffffffff) goto LAB_01241c80;
  }
  puVar12 = (uint *)(ulong)*puVar11;
  param_1 = 0xfffe;
  if ((*puVar11 == 0) || (puVar11 == puVar12)) goto LAB_01241c84;
  lVar3 = 0xc;
  if (*(char *)((long)puVar11 + (10 - (long)puVar12)) != '\0') {
    lVar3 = 0x1c;
  }
  lVar3 = (long)puVar11 + (lVar3 - (long)puVar12);
  if (lVar3 == 0) goto LAB_01241c80;
  uVar9 = (ulong)*(ushort *)((long)puVar11 + (8 - (long)puVar12));
  *(undefined4 *)(puVar8 + 0x2c) = 0xfffffffe;
  if (uVar9 == 0) goto LAB_01241c80;
  piVar13 = (int *)(lVar3 + 4);
  while (piVar13[-1] != 0x2c6a189e) {
    piVar13 = piVar13 + 2;
    uVar9 = uVar9 - 1;
    param_1 = 0xfffe;
    if (uVar9 == 0) goto LAB_01241c84;
  }
  iVar1 = 0;
  if (*piVar13 != -1) {
    iVar1 = *piVar13;
  }
  *(int *)(puVar8 + 0x2c) = iVar1;
  param_1 = 0xfffe;
  if (*puVar11 == 0) goto LAB_01241c84;
  goto LAB_01241af8;
  while( true ) {
    lVar3 = 0xc;
    if (*(char *)((long)puVar11 + (10 - (long)puVar12)) != '\0') {
      lVar3 = 0x1c;
    }
    lVar3 = (long)puVar11 + (lVar3 - (long)puVar12);
    if (lVar3 == 0) goto LAB_01241c80;
    uVar9 = (ulong)*(ushort *)((long)puVar11 + (8 - (long)puVar12));
    *(undefined4 *)(puVar8 + 0x2c) = 0xfffffffe;
    if (uVar9 == 0) goto LAB_01241c80;
    piVar13 = (int *)(lVar3 + 4);
    while (piVar13[-1] != 0x2c6a189e) {
      piVar13 = piVar13 + 2;
      uVar9 = uVar9 - 1;
      if (uVar9 == 0) goto LAB_01241c80;
    }
    iVar1 = 0;
    if (*piVar13 != -1) {
      iVar1 = *piVar13;
    }
    *(int *)(puVar8 + 0x2c) = iVar1;
    param_1 = 0xfffe;
    if (*puVar11 == 0) break;
LAB_01241a38:
    if (cVar10 == '\0') {
      cVar10 = '\x01';
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
    }
    else {
      uVar6 = *(uint *)(puVar8 + 0x2c);
      uVar9 = (ulong)uVar6;
      if (-1 < (int)uVar6) goto LAB_01241c70;
      if (uVar6 != 0xffffffff) goto LAB_01241c80;
    }
    puVar12 = (uint *)(ulong)*puVar11;
    param_1 = 0xfffe;
    if ((*puVar11 == 0) || (puVar11 == puVar12)) break;
  }
  goto LAB_01241c84;
LAB_01241c70:
  if ((ushort *)(uVar9 + (long)puVar11) == (ushort *)0x0) {
LAB_01241c80:
    param_1 = 0xfffe;
  }
  else {
    param_1 = (ulong)*(ushort *)(uVar9 + (long)puVar11);
  }
LAB_01241c84:
  uVar6 = (int)param_1 - (uint)uVar5;
  if ((uVar4 <= uVar6) ||
     (puVar11 = *(uint **)(lVar14 + (long)(int)uVar6 * 8), puVar11 == (uint *)0x0))
  goto switchD_01241a2c_default;
  goto LAB_01241950;
}

