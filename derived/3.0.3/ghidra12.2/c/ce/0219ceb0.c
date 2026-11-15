
byte FUN_0219ceb0(uint *param_1)

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
  
  puVar6 = PTR_DAT_04bc25f0;
  puVar5 = PTR_DAT_04bc25e8;
  if (*param_1 != 0) {
    cVar8 = *PTR_DAT_04bc25e8;
    do {
      if (cVar8 == '\0') {
        cVar8 = '\x01';
        *(undefined8 *)puVar6 = 0xffffffffffffffff;
        *(undefined8 *)(puVar6 + 8) = 0xffffffffffffffff;
        *puVar5 = 1;
      }
      else {
        uVar3 = *(uint *)(puVar6 + 8);
        if (-1 < (int)uVar3) {
          if ((byte *)((ulong)uVar3 + (long)param_1) == (byte *)0x0) {
            return 0;
          }
          bVar4 = *(byte *)((ulong)uVar3 + (long)param_1);
          if (bVar4 < 5) {
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
      *(undefined4 *)(puVar6 + 8) = 0xfffffffe;
      if (uVar7 == 0) {
        return 0;
      }
      piVar10 = (int *)(lVar2 + 4);
      while (piVar10[-1] != 0x378b2f14) {
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
      *(int *)(puVar6 + 8) = iVar1;
    } while (*param_1 != 0);
  }
  return 0;
}

