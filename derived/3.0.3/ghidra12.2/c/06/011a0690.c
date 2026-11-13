
ushort FUN_011a0690(long param_1)

{
  int iVar1;
  long lVar2;
  long lVar3;
  uint uVar4;
  ushort uVar5;
  undefined *puVar6;
  undefined *puVar7;
  uint *puVar8;
  char cVar9;
  uint uVar10;
  uint *puVar11;
  ulong uVar12;
  int *piVar13;
  undefined2 local_8;
  undefined2 local_6;
  undefined4 local_4;
  
  puVar7 = PTR_DAT_04bbb918;
  puVar6 = PTR_DAT_04bbb910;
  puVar8 = *(uint **)(param_1 + 8);
  if (puVar8 == (uint *)0x0) {
    return 0;
  }
  if (*puVar8 == 0) {
    return 0;
  }
  cVar9 = *PTR_DAT_04bbb910;
  do {
    if (cVar9 == '\0') {
      cVar9 = '\x01';
      *(undefined8 *)puVar7 = 0xffffffffffffffff;
      *(undefined8 *)(puVar7 + 8) = 0xffffffffffffffff;
      *puVar6 = 1;
      *(undefined4 *)(puVar7 + 0x10) = 0xffffffff;
    }
    else {
      uVar4 = *(uint *)(puVar7 + 0xc);
      if (-1 < (int)uVar4) {
        if ((short *)((ulong)uVar4 + (long)puVar8) == (short *)0x0) {
          return 0;
        }
        if (*(short *)((ulong)uVar4 + (long)puVar8) == 0) {
          return 0;
        }
        puVar8 = *(uint **)(param_1 + 8);
        uVar4 = *puVar8;
        if (uVar4 == 0) goto LAB_011a083c;
        uVar10 = *(uint *)(puVar7 + 8);
        break;
      }
      if (uVar4 != 0xffffffff) {
        return 0;
      }
    }
    puVar11 = (uint *)(ulong)*puVar8;
    if (*puVar8 == 0) {
      return 0;
    }
    if (puVar8 == puVar11) {
      return 0;
    }
    lVar2 = 0xc;
    if (*(char *)((long)puVar8 + (10 - (long)puVar11)) != '\0') {
      lVar2 = 0x1c;
    }
    lVar2 = (long)puVar8 + (lVar2 - (long)puVar11);
    if (lVar2 == 0) {
      return 0;
    }
    uVar12 = (ulong)*(ushort *)((long)puVar8 + (8 - (long)puVar11));
    *(undefined4 *)(puVar7 + 0xc) = 0xfffffffe;
    if (uVar12 == 0) {
      return 0;
    }
    piVar13 = (int *)(lVar2 + 4);
    while (piVar13[-1] != 0x54706054) {
      piVar13 = piVar13 + 2;
      uVar12 = uVar12 - 1;
      if (uVar12 == 0) {
        return 0;
      }
    }
    iVar1 = 0;
    if (*piVar13 != -1) {
      iVar1 = *piVar13;
    }
    *(int *)(puVar7 + 0xc) = iVar1;
    if (*puVar8 == 0) {
      return 0;
    }
  } while( true );
LAB_011a07bc:
  if (-1 < (int)uVar10) {
    if ((undefined2 *)((long)puVar8 + (ulong)uVar10) != (undefined2 *)0x0) {
      local_8 = *(undefined2 *)((long)puVar8 + (ulong)uVar10);
      goto LAB_011a0840;
    }
LAB_011a083c:
    local_8 = 0xfffe;
LAB_011a0840:
    local_6 = 0;
    local_4 = 0;
    FUN_0277d4ac(&local_8);
    uVar12 = FUN_0277e294(&local_8);
    if ((uVar12 & 1) == 0) {
      return 0;
    }
    puVar8 = *(uint **)(param_1 + 8);
    uVar4 = *puVar8;
    if (uVar4 == 0) {
      return 0;
    }
    if (puVar8 == (uint *)(ulong)uVar4) {
      return 0;
    }
    puVar11 = (uint *)((long)puVar8 - (long)(ulong)uVar4);
    if (((*puVar11 != 0) && (uVar4 = puVar11[1], uVar4 != 0)) && ((ulong)(ushort)puVar11[2] != 0)) {
      lVar2 = 0xc;
      if (*(char *)((long)puVar11 + 10) != '\0') {
        lVar2 = 0x1c;
      }
      lVar2 = (long)puVar11 + lVar2 + (ulong)(ushort)puVar11[2] * 8;
      if (lVar2 != 0) {
        uVar10 = 0;
        if ((ulong)uVar4 != 0) {
          uVar10 = (uint)((ulong)((long)puVar8 - lVar2) / (ulong)uVar4);
        }
        if (*puVar11 <= uVar10) {
          uVar10 = 0xffffffff;
        }
        if ((uVar10 < *(uint *)PTR_DAT_04bbb938) &&
           (uVar5 = *(ushort *)(*(long *)(PTR_DAT_04bbb938 + 8) + (long)(int)uVar10 * 2), uVar5 < 4)
           ) {
          return uVar5;
        }
      }
    }
    return 0;
  }
  if ((uVar10 != 0xffffffff) || (lVar2 = (long)puVar8 - (ulong)uVar4, lVar2 == 0))
  goto LAB_011a083c;
  lVar3 = 0xc;
  if (*(char *)(lVar2 + 10) != '\0') {
    lVar3 = 0x1c;
  }
  if (lVar3 + lVar2 == 0) goto LAB_011a083c;
  uVar12 = (ulong)*(ushort *)(lVar2 + 8);
  *(undefined4 *)(puVar7 + 8) = 0xfffffffe;
  if (uVar12 == 0) goto LAB_011a083c;
  puVar11 = (uint *)(lVar3 + lVar2 + 4);
  while (puVar11[-1] != 0xc33a894e) {
    puVar11 = puVar11 + 2;
    uVar12 = uVar12 - 1;
    if (uVar12 == 0) goto LAB_011a083c;
  }
  uVar10 = 0;
  if (*puVar11 != 0xffffffff) {
    uVar10 = *puVar11;
  }
  *(uint *)(puVar7 + 8) = uVar10;
  uVar4 = *puVar8;
  if (uVar4 == 0) goto LAB_011a083c;
  goto LAB_011a07bc;
}

