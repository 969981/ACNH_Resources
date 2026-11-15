
bool FUN_01e1d0f0(long param_1)

{
  int iVar1;
  long lVar2;
  uint uVar3;
  undefined *puVar4;
  undefined *puVar5;
  uint *puVar6;
  char cVar7;
  byte bVar8;
  ulong uVar9;
  uint *puVar10;
  int *piVar11;
  
  puVar5 = PTR_DAT_04bc1540;
  puVar4 = PTR_DAT_04bc1538;
  if ((*(char *)(param_1 + 0x99) == '\0') ||
     (puVar6 = *(uint **)(param_1 + 0x58), puVar6 == (uint *)0x0)) {
    return false;
  }
  if (*puVar6 == 0) {
LAB_01e1d1f8:
    bVar8 = 0;
  }
  else {
    cVar7 = *PTR_DAT_04bc1538;
    do {
      if (cVar7 == '\0') {
        cVar7 = '\x01';
        *(undefined8 *)puVar5 = 0xffffffffffffffff;
        *(undefined8 *)(puVar5 + 8) = 0xffffffffffffffff;
        *puVar4 = 1;
        *(undefined8 *)(puVar5 + 0x20) = 0xffffffffffffffff;
        *(undefined8 *)(puVar5 + 0x10) = 0xffffffffffffffff;
        *(undefined8 *)(puVar5 + 0x18) = 0xffffffffffffffff;
      }
      else {
        uVar3 = *(uint *)(puVar5 + 0x14);
        if (-1 < (int)uVar3) {
          if (((byte *)((ulong)uVar3 + (long)puVar6) == (byte *)0x0) ||
             (bVar8 = *(byte *)((ulong)uVar3 + (long)puVar6), 2 < bVar8)) goto LAB_01e1d1f8;
          goto LAB_01e1d1fc;
        }
        if (uVar3 != 0xffffffff) goto LAB_01e1d1f8;
      }
      puVar10 = (uint *)(ulong)*puVar6;
      bVar8 = 0;
      if ((*puVar6 == 0) || (puVar6 == puVar10)) goto LAB_01e1d1fc;
      lVar2 = 0xc;
      if (*(char *)((long)puVar6 + (10 - (long)puVar10)) != '\0') {
        lVar2 = 0x1c;
      }
      lVar2 = (long)puVar6 + (lVar2 - (long)puVar10);
      if (lVar2 == 0) goto LAB_01e1d1f8;
      uVar9 = (ulong)*(ushort *)((long)puVar6 + (8 - (long)puVar10));
      *(undefined4 *)(puVar5 + 0x14) = 0xfffffffe;
      bVar8 = 0;
      if (uVar9 == 0) goto LAB_01e1d1fc;
      piVar11 = (int *)(lVar2 + 4);
      while (piVar11[-1] != -0x7e5bc18a) {
        piVar11 = piVar11 + 2;
        uVar9 = uVar9 - 1;
        if (uVar9 == 0) {
          bVar8 = 0;
          goto LAB_01e1d1fc;
        }
      }
      iVar1 = 0;
      if (*piVar11 != -1) {
        iVar1 = *piVar11;
      }
      *(int *)(puVar5 + 0x14) = iVar1;
    } while (*puVar6 != 0);
    bVar8 = 0;
  }
LAB_01e1d1fc:
  return bVar8 == 1;
}

