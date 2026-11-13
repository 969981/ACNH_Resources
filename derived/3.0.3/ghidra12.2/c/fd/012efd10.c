
byte FUN_012efd10(long param_1)

{
  int iVar1;
  long lVar2;
  uint uVar3;
  byte bVar4;
  undefined *puVar5;
  undefined *puVar6;
  uint *puVar7;
  char cVar8;
  uint *puVar9;
  ulong uVar10;
  int *piVar11;
  
  puVar6 = PTR_DAT_04bbbe68;
  puVar5 = PTR_DAT_04bbbe60;
  puVar7 = *(uint **)(param_1 + 8);
  if ((puVar7 == (uint *)0x0) || (*puVar7 == 0)) {
    return 0;
  }
  cVar8 = *PTR_DAT_04bbbe60;
  while( true ) {
    if (cVar8 == '\0') {
      cVar8 = '\x01';
      *(undefined8 *)puVar6 = 0xffffffffffffffff;
      *(undefined8 *)(puVar6 + 8) = 0xffffffffffffffff;
      *puVar5 = 1;
      *(undefined8 *)(puVar6 + 0x10) = 0xffffffffffffffff;
      *(undefined8 *)(puVar6 + 0x18) = 0xffffffffffffffff;
      *(undefined8 *)(puVar6 + 0x20) = 0xffffffffffffffff;
      *(undefined8 *)(puVar6 + 0x28) = 0xffffffffffffffff;
    }
    else {
      uVar3 = *(uint *)(puVar6 + 0x28);
      if (-1 < (int)uVar3) {
        if ((byte *)((ulong)uVar3 + (long)puVar7) == (byte *)0x0) {
          return 0;
        }
        bVar4 = *(byte *)((ulong)uVar3 + (long)puVar7);
        if (bVar4 < 0xd) {
          return bVar4;
        }
        return 0;
      }
      if (uVar3 != 0xffffffff) {
        return 0;
      }
    }
    puVar9 = (uint *)(ulong)*puVar7;
    if (*puVar7 == 0) {
      return 0;
    }
    if (puVar7 == puVar9) break;
    lVar2 = 0xc;
    if (*(char *)((long)puVar7 + (10 - (long)puVar9)) != '\0') {
      lVar2 = 0x1c;
    }
    lVar2 = (long)puVar7 + (lVar2 - (long)puVar9);
    if (lVar2 == 0) {
      return 0;
    }
    uVar10 = (ulong)*(ushort *)((long)puVar7 + (8 - (long)puVar9));
    *(undefined4 *)(puVar6 + 0x28) = 0xfffffffe;
    if (uVar10 == 0) {
      return 0;
    }
    piVar11 = (int *)(lVar2 + 4);
    while (piVar11[-1] != 0x31450aa2) {
      piVar11 = piVar11 + 2;
      uVar10 = uVar10 - 1;
      if (uVar10 == 0) {
        return 0;
      }
    }
    iVar1 = 0;
    if (*piVar11 != -1) {
      iVar1 = *piVar11;
    }
    *(int *)(puVar6 + 0x28) = iVar1;
    if (*puVar7 == 0) {
      return 0;
    }
  }
  return 0;
}

