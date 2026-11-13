
byte switchD_013133f4::caseD_0(uint *param_1)

{
  int iVar1;
  long lVar2;
  uint uVar3;
  byte bVar4;
  undefined *puVar5;
  undefined *puVar6;
  ulong uVar7;
  char cVar8;
  uint *puVar9;
  int *piVar10;
  
  puVar6 = PTR_DAT_04bbbde0;
  puVar5 = PTR_DAT_04bbbdd8;
  if (*param_1 != 0) {
    cVar8 = *PTR_DAT_04bbbdd8;
    do {
      if (cVar8 == '\0') {
        cVar8 = '\x01';
        *(undefined8 *)puVar6 = 0xffffffffffffffff;
        *(undefined8 *)(puVar6 + 8) = 0xffffffffffffffff;
        *puVar5 = 1;
        *(undefined8 *)(puVar6 + 0xa0) = 0xffffffffffffffff;
        *(undefined8 *)(puVar6 + 0x10) = 0xffffffffffffffff;
        *(undefined8 *)(puVar6 + 0x18) = 0xffffffffffffffff;
        *(undefined8 *)(puVar6 + 0x20) = 0xffffffffffffffff;
        *(undefined8 *)(puVar6 + 0x28) = 0xffffffffffffffff;
        *(undefined8 *)(puVar6 + 0x30) = 0xffffffffffffffff;
        *(undefined8 *)(puVar6 + 0x38) = 0xffffffffffffffff;
        *(undefined8 *)(puVar6 + 0x40) = 0xffffffffffffffff;
        *(undefined8 *)(puVar6 + 0x48) = 0xffffffffffffffff;
        *(undefined8 *)(puVar6 + 0x50) = 0xffffffffffffffff;
        *(undefined8 *)(puVar6 + 0x58) = 0xffffffffffffffff;
        *(undefined8 *)(puVar6 + 0x60) = 0xffffffffffffffff;
        *(undefined8 *)(puVar6 + 0x68) = 0xffffffffffffffff;
        *(undefined8 *)(puVar6 + 0x70) = 0xffffffffffffffff;
        *(undefined8 *)(puVar6 + 0x78) = 0xffffffffffffffff;
        *(undefined8 *)(puVar6 + 0x80) = 0xffffffffffffffff;
        *(undefined8 *)(puVar6 + 0x88) = 0xffffffffffffffff;
        *(undefined8 *)(puVar6 + 0x90) = 0xffffffffffffffff;
        *(undefined8 *)(puVar6 + 0x98) = 0xffffffffffffffff;
      }
      else {
        uVar3 = *(uint *)(puVar6 + 0x38);
        if (-1 < (int)uVar3) {
          if ((byte *)((ulong)uVar3 + (long)param_1) == (byte *)0x0) {
            return 0;
          }
          bVar4 = *(byte *)((ulong)uVar3 + (long)param_1);
          if (bVar4 < 0xd) {
            return bVar4;
          }
          return 0;
        }
        if (uVar3 != 0xffffffff) {
          return 0;
        }
      }
      puVar9 = (uint *)(ulong)*param_1;
      if (*param_1 == 0) {
        return 0;
      }
      if (param_1 == puVar9) {
        return 0;
      }
      lVar2 = 0xc;
      if (*(char *)((long)param_1 + (10 - (long)puVar9)) != '\0') {
        lVar2 = 0x1c;
      }
      lVar2 = (long)param_1 + (lVar2 - (long)puVar9);
      if (lVar2 == 0) {
        return 0;
      }
      uVar7 = (ulong)*(ushort *)((long)param_1 + (8 - (long)puVar9));
      *(undefined4 *)(puVar6 + 0x38) = 0xfffffffe;
      if (uVar7 == 0) {
        return 0;
      }
      piVar10 = (int *)(lVar2 + 4);
      while (piVar10[-1] != -0x3ac3b79c) {
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
      *(int *)(puVar6 + 0x38) = iVar1;
    } while (*param_1 != 0);
  }
  return 0;
}

