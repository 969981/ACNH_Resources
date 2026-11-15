
bool FUN_01e1dfa0(long param_1)

{
  int iVar1;
  long lVar2;
  long lVar3;
  uint uVar4;
  undefined *puVar5;
  ulong uVar6;
  undefined *puVar7;
  uint *puVar8;
  char cVar9;
  uint uVar10;
  uint *puVar11;
  int *piVar12;
  undefined8 uVar13;
  undefined4 local_24;
  
  puVar7 = PTR_DAT_04bc1540;
  puVar5 = PTR_DAT_04bc1538;
  if (*(char *)(param_1 + 0x99) == '\0') {
    return false;
  }
  puVar8 = *(uint **)(param_1 + 0x58);
  if (puVar8 == (uint *)0x0) {
    return false;
  }
  if (*puVar8 == 0) {
    return false;
  }
  cVar9 = *PTR_DAT_04bc1538;
  do {
    if (cVar9 == '\0') {
      cVar9 = '\x01';
      *(undefined8 *)puVar7 = 0xffffffffffffffff;
      *(undefined8 *)(puVar7 + 8) = 0xffffffffffffffff;
      *puVar5 = 1;
      *(undefined8 *)(puVar7 + 0x20) = 0xffffffffffffffff;
      *(undefined8 *)(puVar7 + 0x10) = 0xffffffffffffffff;
      *(undefined8 *)(puVar7 + 0x18) = 0xffffffffffffffff;
    }
    else {
      uVar4 = *(uint *)(puVar7 + 0x14);
      if (-1 < (int)uVar4) {
        if ((char *)((ulong)uVar4 + (long)puVar8) == (char *)0x0) {
          return false;
        }
        if (*(char *)((ulong)uVar4 + (long)puVar8) != '\x01') {
          return false;
        }
        if (**(char **)(param_1 + 0x68) != '\0') {
          (**(code **)(*(long *)(param_1 + 0x60) + 0x18))((long *)(param_1 + 0x60));
          puVar5 = *(undefined **)(param_1 + 0x68);
          goto LAB_01e1e174;
        }
        uVar4 = *puVar8;
        if (uVar4 == 0) goto LAB_01e1e160;
        uVar10 = *(uint *)(puVar7 + 0x10);
        break;
      }
      if (uVar4 != 0xffffffff) {
        return false;
      }
    }
    puVar11 = (uint *)(ulong)*puVar8;
    if (*puVar8 == 0) {
      return false;
    }
    if (puVar8 == puVar11) {
      return false;
    }
    lVar2 = 0xc;
    if (*(char *)((long)puVar8 + (10 - (long)puVar11)) != '\0') {
      lVar2 = 0x1c;
    }
    lVar2 = (long)puVar8 + (lVar2 - (long)puVar11);
    if (lVar2 == 0) {
      return false;
    }
    uVar6 = (ulong)*(ushort *)((long)puVar8 + (8 - (long)puVar11));
    *(undefined4 *)(puVar7 + 0x14) = 0xfffffffe;
    if (uVar6 == 0) {
      return false;
    }
    piVar12 = (int *)(lVar2 + 4);
    while (piVar12[-1] != -0x7e5bc18a) {
      piVar12 = piVar12 + 2;
      uVar6 = uVar6 - 1;
      if (uVar6 == 0) {
        return false;
      }
    }
    iVar1 = 0;
    if (*piVar12 != -1) {
      iVar1 = *piVar12;
    }
    *(int *)(puVar7 + 0x14) = iVar1;
    if (*puVar8 == 0) {
      return false;
    }
  } while( true );
LAB_01e1e0f4:
  if (-1 < (int)uVar10) {
    puVar7 = (undefined *)((long)puVar8 + (ulong)uVar10);
    goto LAB_01e1e164;
  }
  if ((uVar10 != 0xffffffff) || (lVar2 = (long)puVar8 - (ulong)uVar4, lVar2 == 0)) {
LAB_01e1e160:
    puVar7 = (undefined *)0x0;
LAB_01e1e164:
    puVar5 = PTR_DAT_04c48688;
    if (puVar7 != (undefined *)0x0) {
      puVar5 = puVar7;
    }
LAB_01e1e174:
    uVar13 = *(undefined8 *)PTR_DAT_04bb4130;
    local_24 = FUN_006bd550(puVar5,0);
    puVar8 = (uint *)FUN_0079e4d0(uVar13,&local_24);
    puVar7 = PTR_DAT_04bb40a8;
    puVar5 = PTR_DAT_04bb40a0;
    if (puVar8 == (uint *)0x0) {
      return false;
    }
    if (*puVar8 == 0) {
      return false;
    }
    cVar9 = *PTR_DAT_04bb40a0;
    while( true ) {
      if (cVar9 == '\0') {
        cVar9 = '\x01';
        *(undefined8 *)puVar7 = 0xffffffffffffffff;
        *(undefined8 *)(puVar7 + 8) = 0xffffffffffffffff;
        *puVar5 = 1;
        *(undefined8 *)(puVar7 + 0x70) = 0xffffffffffffffff;
        *(undefined4 *)(puVar7 + 0x78) = 0xffffffff;
        *(undefined8 *)(puVar7 + 0x10) = 0xffffffffffffffff;
        *(undefined8 *)(puVar7 + 0x18) = 0xffffffffffffffff;
        *(undefined8 *)(puVar7 + 0x20) = 0xffffffffffffffff;
        *(undefined8 *)(puVar7 + 0x28) = 0xffffffffffffffff;
        *(undefined8 *)(puVar7 + 0x30) = 0xffffffffffffffff;
        *(undefined8 *)(puVar7 + 0x38) = 0xffffffffffffffff;
        *(undefined8 *)(puVar7 + 0x40) = 0xffffffffffffffff;
        *(undefined8 *)(puVar7 + 0x48) = 0xffffffffffffffff;
        *(undefined8 *)(puVar7 + 0x50) = 0xffffffffffffffff;
        *(undefined8 *)(puVar7 + 0x58) = 0xffffffffffffffff;
        *(undefined8 *)(puVar7 + 0x60) = 0xffffffffffffffff;
        *(undefined8 *)(puVar7 + 0x68) = 0xffffffffffffffff;
      }
      else {
        uVar4 = *(uint *)(puVar7 + 0x54);
        if (-1 < (int)uVar4) {
          if ((char *)((ulong)uVar4 + (long)puVar8) == (char *)0x0) {
            return false;
          }
          return *(char *)((ulong)uVar4 + (long)puVar8) != '\0';
        }
        if (uVar4 != 0xffffffff) {
          return false;
        }
      }
      puVar11 = (uint *)(ulong)*puVar8;
      if (*puVar8 == 0) {
        return false;
      }
      if (puVar8 == puVar11) break;
      lVar2 = 0xc;
      if (*(char *)((long)puVar8 + (10 - (long)puVar11)) != '\0') {
        lVar2 = 0x1c;
      }
      lVar2 = (long)puVar8 + (lVar2 - (long)puVar11);
      if (lVar2 == 0) {
        return false;
      }
      uVar6 = (ulong)*(ushort *)((long)puVar8 + (8 - (long)puVar11));
      *(undefined4 *)(puVar7 + 0x54) = 0xfffffffe;
      if (uVar6 == 0) {
        return false;
      }
      piVar12 = (int *)(lVar2 + 4);
      while (piVar12[-1] != 0x7d60b3d) {
        piVar12 = piVar12 + 2;
        uVar6 = uVar6 - 1;
        if (uVar6 == 0) {
          return false;
        }
      }
      iVar1 = 0;
      if (*piVar12 != -1) {
        iVar1 = *piVar12;
      }
      *(int *)(puVar7 + 0x54) = iVar1;
      if (*puVar8 == 0) {
        return false;
      }
    }
    return false;
  }
  lVar3 = 0xc;
  if (*(char *)(lVar2 + 10) != '\0') {
    lVar3 = 0x1c;
  }
  if (lVar3 + lVar2 == 0) goto LAB_01e1e160;
  uVar6 = (ulong)*(ushort *)(lVar2 + 8);
  *(undefined4 *)(puVar7 + 0x10) = 0xfffffffe;
  if (uVar6 == 0) goto LAB_01e1e160;
  puVar11 = (uint *)(lVar3 + lVar2 + 4);
  while (puVar11[-1] != 0x34c8eed5) {
    puVar11 = puVar11 + 2;
    uVar6 = uVar6 - 1;
    if (uVar6 == 0) goto LAB_01e1e160;
  }
  uVar10 = 0;
  if (*puVar11 != 0xffffffff) {
    uVar10 = *puVar11;
  }
  *(uint *)(puVar7 + 0x10) = uVar10;
  uVar4 = *puVar8;
  if (uVar4 == 0) goto LAB_01e1e160;
  goto LAB_01e1e0f4;
}

