
bool FUN_011bba60(long param_1)

{
  int iVar1;
  long lVar2;
  long lVar3;
  uint uVar4;
  undefined *puVar5;
  undefined *puVar6;
  ulong uVar7;
  uint *puVar8;
  char cVar9;
  uint uVar10;
  uint *puVar11;
  int *piVar12;
  
  puVar6 = PTR_DAT_04bbb930;
  puVar5 = PTR_DAT_04bbb928;
  puVar8 = *(uint **)(param_1 + 8);
  if (puVar8 == (uint *)0x0) {
    return false;
  }
  if (*puVar8 == 0) {
    return false;
  }
  cVar9 = *PTR_DAT_04bbb928;
  while( true ) {
    if (cVar9 == '\0') {
      cVar9 = '\x01';
      *(undefined8 *)puVar6 = 0xffffffffffffffff;
      *(undefined8 *)(puVar6 + 8) = 0xffffffffffffffff;
      *puVar5 = 1;
      *(undefined8 *)(puVar6 + 0x50) = 0xffffffffffffffff;
      *(undefined4 *)(puVar6 + 0x58) = 0xffffffff;
      *(undefined8 *)(puVar6 + 0x10) = 0xffffffffffffffff;
      *(undefined8 *)(puVar6 + 0x18) = 0xffffffffffffffff;
      *(undefined8 *)(puVar6 + 0x20) = 0xffffffffffffffff;
      *(undefined8 *)(puVar6 + 0x28) = 0xffffffffffffffff;
      *(undefined8 *)(puVar6 + 0x30) = 0xffffffffffffffff;
      *(undefined8 *)(puVar6 + 0x38) = 0xffffffffffffffff;
      *(undefined8 *)(puVar6 + 0x40) = 0xffffffffffffffff;
      *(undefined8 *)(puVar6 + 0x48) = 0xffffffffffffffff;
    }
    else {
      uVar4 = *(uint *)(puVar6 + 0x2c);
      if (-1 < (int)uVar4) {
        if ((short *)((ulong)uVar4 + (long)puVar8) == (short *)0x0) {
          return false;
        }
        if (*(short *)((ulong)uVar4 + (long)puVar8) == 0) {
          return false;
        }
        puVar8 = *(uint **)(param_1 + 8);
        uVar4 = *puVar8;
        if (uVar4 == 0) {
          return true;
        }
        uVar10 = *(uint *)(puVar6 + 0x38);
        while( true ) {
          if (-1 < (int)uVar10) {
            if ((char *)((long)puVar8 + (ulong)uVar10) == (char *)0x0) {
              return true;
            }
            return *(char *)((long)puVar8 + (ulong)uVar10) == '\0';
          }
          if (uVar10 != 0xffffffff) {
            return true;
          }
          lVar2 = (long)puVar8 - (ulong)uVar4;
          if (lVar2 == 0) {
            return true;
          }
          lVar3 = 0xc;
          if (*(char *)(lVar2 + 10) != '\0') {
            lVar3 = 0x1c;
          }
          if (lVar3 + lVar2 == 0) break;
          uVar7 = (ulong)*(ushort *)(lVar2 + 8);
          *(undefined4 *)(puVar6 + 0x38) = 0xfffffffe;
          if (uVar7 == 0) {
            return true;
          }
          puVar11 = (uint *)(lVar3 + lVar2 + 4);
          while (puVar11[-1] != 0x30127dfd) {
            puVar11 = puVar11 + 2;
            uVar7 = uVar7 - 1;
            if (uVar7 == 0) {
              return true;
            }
          }
          uVar10 = 0;
          if (*puVar11 != 0xffffffff) {
            uVar10 = *puVar11;
          }
          *(uint *)(puVar6 + 0x38) = uVar10;
          uVar4 = *puVar8;
          if (uVar4 == 0) {
            return true;
          }
        }
        return true;
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
    uVar7 = (ulong)*(ushort *)((long)puVar8 + (8 - (long)puVar11));
    *(undefined4 *)(puVar6 + 0x2c) = 0xfffffffe;
    if (uVar7 == 0) {
      return false;
    }
    piVar12 = (int *)(lVar2 + 4);
    while (piVar12[-1] != 0x54706054) {
      piVar12 = piVar12 + 2;
      uVar7 = uVar7 - 1;
      if (uVar7 == 0) {
        return false;
      }
    }
    iVar1 = 0;
    if (*piVar12 != -1) {
      iVar1 = *piVar12;
    }
    *(int *)(puVar6 + 0x2c) = iVar1;
    if (*puVar8 == 0) {
      return false;
    }
  }
  return false;
}

