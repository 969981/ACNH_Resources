
undefined2 FUN_011a03c0(long param_1)

{
  int iVar1;
  long lVar2;
  long lVar3;
  uint uVar4;
  undefined *puVar5;
  undefined *puVar6;
  uint *puVar7;
  char cVar8;
  uint uVar9;
  uint *puVar10;
  ulong uVar11;
  int *piVar12;
  undefined2 local_38;
  undefined2 local_36;
  undefined4 local_34;
  
  puVar6 = PTR_DAT_04bbb918;
  puVar5 = PTR_DAT_04bbb910;
  puVar7 = *(uint **)(param_1 + 8);
  if (puVar7 == (uint *)0x0) {
    return 0xfffe;
  }
  if (*puVar7 == 0) {
    return 0xfffe;
  }
  cVar8 = *PTR_DAT_04bbb910;
  do {
    if (cVar8 == '\0') {
      cVar8 = '\x01';
      *(undefined8 *)puVar6 = 0xffffffffffffffff;
      *(undefined8 *)(puVar6 + 8) = 0xffffffffffffffff;
      *puVar5 = 1;
      *(undefined4 *)(puVar6 + 0x10) = 0xffffffff;
    }
    else {
      uVar4 = *(uint *)(puVar6 + 0xc);
      if (-1 < (int)uVar4) {
        if ((short *)((ulong)uVar4 + (long)puVar7) == (short *)0x0) {
          return 0xfffe;
        }
        if (*(short *)((ulong)uVar4 + (long)puVar7) == 0) {
          return 0xfffe;
        }
        puVar7 = *(uint **)(param_1 + 8);
        uVar4 = *puVar7;
        if (uVar4 == 0) goto LAB_011a057c;
        uVar9 = *(uint *)(puVar6 + 8);
        break;
      }
      if (uVar4 != 0xffffffff) {
        return 0xfffe;
      }
    }
    puVar10 = (uint *)(ulong)*puVar7;
    if (*puVar7 == 0) {
      return 0xfffe;
    }
    if (puVar7 == puVar10) {
      return 0xfffe;
    }
    lVar2 = 0xc;
    if (*(char *)((long)puVar7 + (10 - (long)puVar10)) != '\0') {
      lVar2 = 0x1c;
    }
    lVar2 = (long)puVar7 + (lVar2 - (long)puVar10);
    if (lVar2 == 0) {
      return 0xfffe;
    }
    uVar11 = (ulong)*(ushort *)((long)puVar7 + (8 - (long)puVar10));
    *(undefined4 *)(puVar6 + 0xc) = 0xfffffffe;
    if (uVar11 == 0) {
      return 0xfffe;
    }
    piVar12 = (int *)(lVar2 + 4);
    while (piVar12[-1] != 0x54706054) {
      piVar12 = piVar12 + 2;
      uVar11 = uVar11 - 1;
      if (uVar11 == 0) {
        return 0xfffe;
      }
    }
    iVar1 = 0;
    if (*piVar12 != -1) {
      iVar1 = *piVar12;
    }
    *(int *)(puVar6 + 0xc) = iVar1;
    if (*puVar7 == 0) {
      return 0xfffe;
    }
  } while( true );
LAB_011a04fc:
  if (-1 < (int)uVar9) {
    if ((undefined2 *)((long)puVar7 + (ulong)uVar9) != (undefined2 *)0x0) {
      local_38 = *(undefined2 *)((long)puVar7 + (ulong)uVar9);
      goto LAB_011a0580;
    }
LAB_011a057c:
    local_38 = 0xfffe;
LAB_011a0580:
    local_36 = 0;
    local_34 = 0;
    FUN_0277d4ac(&local_38);
    uVar11 = FUN_0277e294(&local_38);
    if (((uVar11 & 1) == 0) || (puVar7 = *(uint **)(param_1 + 8), *puVar7 == 0)) {
      return 0xfffe;
    }
    cVar8 = *puVar5;
    while( true ) {
      if (cVar8 == '\0') {
        cVar8 = '\x01';
        *(undefined8 *)puVar6 = 0xffffffffffffffff;
        *(undefined8 *)(puVar6 + 8) = 0xffffffffffffffff;
        *puVar5 = 1;
        *(undefined4 *)(puVar6 + 0x10) = 0xffffffff;
      }
      else {
        uVar4 = *(uint *)(puVar6 + 8);
        if (-1 < (int)uVar4) {
          if ((undefined2 *)((ulong)uVar4 + (long)puVar7) == (undefined2 *)0x0) {
            return 0xfffe;
          }
          return *(undefined2 *)((ulong)uVar4 + (long)puVar7);
        }
        if (uVar4 != 0xffffffff) {
          return 0xfffe;
        }
      }
      puVar10 = (uint *)(ulong)*puVar7;
      if (*puVar7 == 0) {
        return 0xfffe;
      }
      if (puVar7 == puVar10) break;
      lVar2 = 0xc;
      if (*(char *)((long)puVar7 + (10 - (long)puVar10)) != '\0') {
        lVar2 = 0x1c;
      }
      lVar2 = (long)puVar7 + (lVar2 - (long)puVar10);
      if (lVar2 == 0) {
        return 0xfffe;
      }
      uVar11 = (ulong)*(ushort *)((long)puVar7 + (8 - (long)puVar10));
      *(undefined4 *)(puVar6 + 8) = 0xfffffffe;
      if (uVar11 == 0) {
        return 0xfffe;
      }
      piVar12 = (int *)(lVar2 + 4);
      while (piVar12[-1] != -0x3cc576b2) {
        piVar12 = piVar12 + 2;
        uVar11 = uVar11 - 1;
        if (uVar11 == 0) {
          return 0xfffe;
        }
      }
      iVar1 = 0;
      if (*piVar12 != -1) {
        iVar1 = *piVar12;
      }
      *(int *)(puVar6 + 8) = iVar1;
      if (*puVar7 == 0) {
        return 0xfffe;
      }
    }
    return 0xfffe;
  }
  if ((uVar9 != 0xffffffff) || (lVar2 = (long)puVar7 - (ulong)uVar4, lVar2 == 0)) goto LAB_011a057c;
  lVar3 = 0xc;
  if (*(char *)(lVar2 + 10) != '\0') {
    lVar3 = 0x1c;
  }
  if (lVar3 + lVar2 == 0) goto LAB_011a057c;
  uVar11 = (ulong)*(ushort *)(lVar2 + 8);
  *(undefined4 *)(puVar6 + 8) = 0xfffffffe;
  if (uVar11 == 0) goto LAB_011a057c;
  puVar10 = (uint *)(lVar3 + lVar2 + 4);
  while (puVar10[-1] != 0xc33a894e) {
    puVar10 = puVar10 + 2;
    uVar11 = uVar11 - 1;
    if (uVar11 == 0) goto LAB_011a057c;
  }
  uVar9 = 0;
  if (*puVar10 != 0xffffffff) {
    uVar9 = *puVar10;
  }
  *(uint *)(puVar6 + 8) = uVar9;
  uVar4 = *puVar7;
  if (uVar4 == 0) goto LAB_011a057c;
  goto LAB_011a04fc;
}

