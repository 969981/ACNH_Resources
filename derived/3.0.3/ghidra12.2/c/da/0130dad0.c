
byte FUN_0130dad0(long param_1)

{
  int iVar1;
  long lVar2;
  uint uVar3;
  uint uVar4;
  byte bVar5;
  uint *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  int *piVar9;
  uint *puVar10;
  char cVar11;
  ulong uVar12;
  
  puVar8 = PTR_DAT_04bbbeb8;
  puVar7 = PTR_DAT_04bbbeb0;
  puVar10 = *(uint **)(param_1 + 8);
  if ((puVar10 == (uint *)0x0) || (uVar3 = *puVar10, uVar3 == 0)) {
    return 0;
  }
  cVar11 = *PTR_DAT_04bbbeb0;
  while( true ) {
    if (cVar11 == '\0') {
      cVar11 = '\x01';
      *(undefined8 *)puVar8 = 0xffffffffffffffff;
      *(undefined4 *)(puVar8 + 8) = 0xffffffff;
      *puVar7 = 1;
      uVar3 = *puVar10;
    }
    else {
      uVar4 = *(uint *)(puVar8 + 4);
      if (-1 < (int)uVar4) {
        if ((byte *)((ulong)uVar4 + (long)puVar10) == (byte *)0x0) {
          return 0;
        }
        bVar5 = *(byte *)((ulong)uVar4 + (long)puVar10);
        if (bVar5 < 0xd) {
          return bVar5;
        }
        return 0;
      }
      if (uVar4 != 0xffffffff) {
        return 0;
      }
    }
    puVar6 = (uint *)(ulong)uVar3;
    if (puVar6 == (uint *)0x0) {
      return 0;
    }
    if (puVar10 == puVar6) break;
    lVar2 = 0xc;
    if (*(char *)((long)puVar10 + (10 - (long)puVar6)) != '\0') {
      lVar2 = 0x1c;
    }
    lVar2 = (long)puVar10 + (lVar2 - (long)puVar6);
    if (lVar2 == 0) {
      return 0;
    }
    uVar12 = (ulong)*(ushort *)((long)puVar10 + (8 - (long)puVar6));
    *(undefined4 *)(puVar8 + 4) = 0xfffffffe;
    if (uVar12 == 0) {
      return 0;
    }
    piVar9 = (int *)(lVar2 + 4);
    while (piVar9[-1] != -0x50776a95) {
      piVar9 = piVar9 + 2;
      uVar12 = uVar12 - 1;
      if (uVar12 == 0) {
        return 0;
      }
    }
    iVar1 = 0;
    if (*piVar9 != -1) {
      iVar1 = *piVar9;
    }
    *(int *)(puVar8 + 4) = iVar1;
    uVar3 = *puVar10;
    if (uVar3 == 0) {
      return 0;
    }
  }
  return 0;
}

