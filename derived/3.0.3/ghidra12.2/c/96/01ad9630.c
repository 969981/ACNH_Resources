
byte FUN_01ad9630(void)

{
  int iVar1;
  long lVar2;
  uint uVar3;
  undefined *puVar4;
  undefined *puVar5;
  uint *puVar6;
  ulong uVar7;
  char cVar8;
  uint *puVar9;
  int *piVar10;
  
  puVar6 = (uint *)FUN_01ad81b0();
  puVar5 = PTR_DAT_04bbe220;
  puVar4 = PTR_DAT_04bbe218;
  if ((puVar6 != (uint *)0x0) && (*puVar6 != 0)) {
    cVar8 = *PTR_DAT_04bbe218;
    do {
      if (cVar8 == '\0') {
        cVar8 = '\x01';
        *(undefined8 *)puVar5 = 0xffffffffffffffff;
        *(undefined8 *)(puVar5 + 8) = 0xffffffffffffffff;
        *puVar4 = 1;
        *(undefined8 *)(puVar5 + 0x30) = 0xffffffffffffffff;
        *(undefined8 *)(puVar5 + 0x10) = 0xffffffffffffffff;
        *(undefined8 *)(puVar5 + 0x18) = 0xffffffffffffffff;
        *(undefined8 *)(puVar5 + 0x20) = 0xffffffffffffffff;
        *(undefined8 *)(puVar5 + 0x28) = 0xffffffffffffffff;
      }
      else {
        uVar3 = *(uint *)(puVar5 + 0x18);
        if (-1 < (int)uVar3) {
          if ((byte *)((ulong)uVar3 + (long)puVar6) == (byte *)0x0) {
            return 0;
          }
          return *(byte *)((ulong)uVar3 + (long)puVar6) >> 3 & 1;
        }
        if (uVar3 != 0xffffffff) {
          return 0;
        }
      }
      puVar9 = (uint *)(ulong)*puVar6;
      if (*puVar6 == 0) {
        return 0;
      }
      if (puVar6 == puVar9) {
        return 0;
      }
      lVar2 = 0xc;
      if (*(char *)((long)puVar6 + (10 - (long)puVar9)) != '\0') {
        lVar2 = 0x1c;
      }
      lVar2 = (long)puVar6 + (lVar2 - (long)puVar9);
      if (lVar2 == 0) {
        return 0;
      }
      uVar7 = (ulong)*(ushort *)((long)puVar6 + (8 - (long)puVar9));
      *(undefined4 *)(puVar5 + 0x18) = 0xfffffffe;
      if (uVar7 == 0) {
        return 0;
      }
      piVar10 = (int *)(lVar2 + 4);
      while (piVar10[-1] != 0x42ad246a) {
        piVar10 = piVar10 + 2;
        uVar7 = uVar7 - 1;
        if (uVar7 == 0) {
          return 0;
        }
      }
      iVar1 = 0;
      if (*piVar10 != -1) {
        iVar1 = *piVar10;
      }
      *(int *)(puVar5 + 0x18) = iVar1;
    } while (*puVar6 != 0);
  }
  return 0;
}

