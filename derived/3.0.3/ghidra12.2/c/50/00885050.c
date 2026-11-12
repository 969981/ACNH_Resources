
undefined8 FUN_00885050(uint param_1)

{
  long lVar1;
  uint uVar2;
  long lVar3;
  undefined *puVar4;
  undefined *puVar5;
  int iVar6;
  char cVar7;
  ulong uVar8;
  uint *puVar9;
  int *piVar10;
  uint *puVar11;
  undefined2 local_8;
  undefined2 local_6;
  undefined4 local_4;
  
  puVar5 = PTR_DAT_04bb57f8;
  puVar4 = PTR_DAT_04bb57f0;
  if ((int)*(uint *)(DAT_04cea100 + 0x1488) < 1) {
    if (*(long *)(DAT_04cea100 + 0x1378) == 0) {
      return 0;
    }
    puVar11 = *(uint **)(*(long *)(DAT_04cea100 + 0x1378) + 8);
    if (puVar11 == (uint *)0x0) {
      return 0;
    }
    if ((param_1 < *(uint *)(DAT_04cea100 + 0x1390)) &&
       (*(char *)(*(long *)(DAT_04cea100 + 0x1398) + (long)(int)param_1) == '\0')) {
      return 0;
    }
    if (*puVar11 <= param_1) {
      return 0;
    }
    if (puVar11[1] == 0) {
      return 0;
    }
    if ((ushort)puVar11[2] == 0) {
      return 0;
    }
    iVar6 = 0xc;
    if (*(char *)((long)puVar11 + 10) != '\0') {
      iVar6 = 0x1c;
    }
    puVar11 = (uint *)((ulong)(puVar11[1] * param_1 + (uint)(ushort)puVar11[2] * 8 + iVar6) +
                      (long)puVar11);
  }
  else {
    if (*(uint *)(DAT_04cea100 + 0x1488) <= param_1) {
      return 0;
    }
    if (*(uint *)(DAT_04cea100 + 0x1478) <= param_1) {
      param_1 = 0;
    }
    puVar11 = *(uint **)(*(long *)(DAT_04cea100 + 0x1480) + (ulong)param_1 * 8);
  }
  if (puVar11 == (uint *)0x0) {
    return 0;
  }
  if (*puVar11 != 0) {
    cVar7 = *PTR_DAT_04bb57f0;
    do {
      if (cVar7 == '\0') {
        cVar7 = '\x01';
        *(undefined8 *)puVar5 = 0xffffffffffffffff;
        *(undefined8 *)(puVar5 + 8) = 0xffffffffffffffff;
        *puVar4 = 1;
        *(undefined4 *)(puVar5 + 0x40) = 0xffffffff;
        *(undefined8 *)(puVar5 + 0x10) = 0xffffffffffffffff;
        *(undefined8 *)(puVar5 + 0x18) = 0xffffffffffffffff;
        *(undefined8 *)(puVar5 + 0x20) = 0xffffffffffffffff;
        *(undefined8 *)(puVar5 + 0x28) = 0xffffffffffffffff;
        *(undefined8 *)(puVar5 + 0x30) = 0xffffffffffffffff;
        *(undefined8 *)(puVar5 + 0x38) = 0xffffffffffffffff;
      }
      else {
        uVar2 = *(uint *)(puVar5 + 4);
        if (-1 < (int)uVar2) {
          if ((undefined2 *)((ulong)uVar2 + (long)puVar11) != (undefined2 *)0x0) {
            local_8 = *(undefined2 *)((ulong)uVar2 + (long)puVar11);
            goto LAB_008851f0;
          }
          break;
        }
        if (uVar2 != 0xffffffff) break;
      }
      puVar9 = (uint *)(ulong)*puVar11;
      local_8 = 0xfffe;
      if ((*puVar11 == 0) || (puVar11 == puVar9)) goto LAB_008851f0;
      lVar3 = 0xc;
      if (*(char *)((long)puVar11 + (10 - (long)puVar9)) != '\0') {
        lVar3 = 0x1c;
      }
      lVar3 = (long)puVar11 + (lVar3 - (long)puVar9);
      if (lVar3 == 0) break;
      uVar8 = (ulong)*(ushort *)((long)puVar11 + (8 - (long)puVar9));
      *(undefined4 *)(puVar5 + 4) = 0xfffffffe;
      if (uVar8 == 0) break;
      piVar10 = (int *)(lVar3 + 4);
      while (piVar10[-1] != 0x20cb67bc) {
        piVar10 = piVar10 + 2;
        uVar8 = uVar8 - 1;
        if (uVar8 == 0) goto LAB_008851ec;
      }
      iVar6 = 0;
      if (*piVar10 != -1) {
        iVar6 = *piVar10;
      }
      *(int *)(puVar5 + 4) = iVar6;
      if (*puVar11 == 0) break;
    } while( true );
  }
LAB_008851ec:
  local_8 = 0xfffe;
LAB_008851f0:
  local_6 = 0;
  local_4 = 0;
  FUN_0277d4ac(&local_8);
  puVar5 = PTR_DAT_04bb57f8;
  puVar4 = PTR_DAT_04bb57f0;
  if (*(int *)(*(long *)PTR_DAT_04bb30a0 + 0x65204) != 1) {
    if (*puVar11 == 0) {
      return 0;
    }
    cVar7 = *PTR_DAT_04bb57f0;
    do {
      if (cVar7 == '\0') {
        cVar7 = '\x01';
        *(undefined8 *)puVar5 = 0xffffffffffffffff;
        *(undefined8 *)(puVar5 + 8) = 0xffffffffffffffff;
        *puVar4 = 1;
        *(undefined4 *)(puVar5 + 0x40) = 0xffffffff;
        *(undefined8 *)(puVar5 + 0x10) = 0xffffffffffffffff;
        *(undefined8 *)(puVar5 + 0x18) = 0xffffffffffffffff;
        *(undefined8 *)(puVar5 + 0x20) = 0xffffffffffffffff;
        *(undefined8 *)(puVar5 + 0x28) = 0xffffffffffffffff;
        *(undefined8 *)(puVar5 + 0x30) = 0xffffffffffffffff;
        *(undefined8 *)(puVar5 + 0x38) = 0xffffffffffffffff;
      }
      else {
        uVar2 = *(uint *)(puVar5 + 8);
        if (-1 < (int)uVar2) goto LAB_008853c8;
        if (uVar2 != 0xffffffff) {
          return 0;
        }
      }
      lVar3 = (long)puVar11 - (ulong)*puVar11;
      if (*puVar11 == 0) {
        return 0;
      }
      if (lVar3 == 0) {
        return 0;
      }
      lVar1 = 0xc;
      if (*(char *)(lVar3 + 10) != '\0') {
        lVar1 = 0x1c;
      }
      if (lVar1 + lVar3 == 0) {
        return 0;
      }
      uVar8 = (ulong)*(ushort *)(lVar3 + 8);
      *(undefined4 *)(puVar5 + 8) = 0xfffffffe;
      if (uVar8 == 0) {
        return 0;
      }
      piVar10 = (int *)(lVar1 + lVar3 + 4);
      while (piVar10[-1] != 0x3ca0fc03) {
        piVar10 = piVar10 + 2;
        uVar8 = uVar8 - 1;
        if (uVar8 == 0) {
          return 0;
        }
      }
      iVar6 = 0;
      if (*piVar10 != -1) {
        iVar6 = *piVar10;
      }
      *(int *)(puVar5 + 8) = iVar6;
      if (*puVar11 == 0) {
        return 0;
      }
    } while( true );
  }
  if (*puVar11 == 0) {
    return 0;
  }
  cVar7 = *PTR_DAT_04bb57f0;
  do {
    if (cVar7 == '\0') {
      cVar7 = '\x01';
      *(undefined8 *)puVar5 = 0xffffffffffffffff;
      *(undefined8 *)(puVar5 + 8) = 0xffffffffffffffff;
      *puVar4 = 1;
      *(undefined4 *)(puVar5 + 0x40) = 0xffffffff;
      *(undefined8 *)(puVar5 + 0x10) = 0xffffffffffffffff;
      *(undefined8 *)(puVar5 + 0x18) = 0xffffffffffffffff;
      *(undefined8 *)(puVar5 + 0x20) = 0xffffffffffffffff;
      *(undefined8 *)(puVar5 + 0x28) = 0xffffffffffffffff;
      *(undefined8 *)(puVar5 + 0x30) = 0xffffffffffffffff;
      *(undefined8 *)(puVar5 + 0x38) = 0xffffffffffffffff;
    }
    else {
      uVar2 = *(uint *)(puVar5 + 0xc);
      if (-1 < (int)uVar2) {
LAB_008853c8:
        if (((char *)((ulong)uVar2 + (long)puVar11) == (char *)0x0) ||
           (*(char *)((ulong)uVar2 + (long)puVar11) == '\0')) {
          return 0;
        }
        return 1;
      }
      if (uVar2 != 0xffffffff) {
        return 0;
      }
    }
    lVar3 = (long)puVar11 - (ulong)*puVar11;
    if (*puVar11 == 0) {
      return 0;
    }
    if (lVar3 == 0) {
      return 0;
    }
    lVar1 = 0xc;
    if (*(char *)(lVar3 + 10) != '\0') {
      lVar1 = 0x1c;
    }
    if (lVar1 + lVar3 == 0) {
      return 0;
    }
    uVar8 = (ulong)*(ushort *)(lVar3 + 8);
    *(undefined4 *)(puVar5 + 0xc) = 0xfffffffe;
    if (uVar8 == 0) {
      return 0;
    }
    piVar10 = (int *)(lVar1 + lVar3 + 4);
    while (piVar10[-1] != -0x39e417bf) {
      piVar10 = piVar10 + 2;
      uVar8 = uVar8 - 1;
      if (uVar8 == 0) {
        return 0;
      }
    }
    iVar6 = 0;
    if (*piVar10 != -1) {
      iVar6 = *piVar10;
    }
    *(int *)(puVar5 + 0xc) = iVar6;
    if (*puVar11 == 0) {
      return 0;
    }
  } while( true );
}

