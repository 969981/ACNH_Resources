
undefined8 FUN_012724b0(long param_1)

{
  int iVar1;
  long lVar2;
  undefined *puVar3;
  uint uVar4;
  undefined *puVar5;
  undefined8 uVar6;
  uint *puVar7;
  char cVar8;
  ulong uVar9;
  undefined *puVar10;
  uint *puVar11;
  int *piVar12;
  
  puVar5 = PTR_DAT_04bbbdb0;
  puVar3 = PTR_DAT_04bbbda8;
  puVar7 = *(uint **)(param_1 + 8);
  if (puVar7 == (uint *)0x0) {
    return 0x244db4da;
  }
  if (*puVar7 != 0) {
    cVar8 = *PTR_DAT_04bbbda8;
    do {
      if (cVar8 == '\0') {
        cVar8 = '\x01';
        *(undefined8 *)puVar5 = 0xffffffffffffffff;
        *(undefined8 *)(puVar5 + 8) = 0xffffffffffffffff;
        *puVar3 = 1;
        *(undefined8 *)(puVar5 + 0x10) = 0xffffffffffffffff;
      }
      else {
        uVar4 = *(uint *)(puVar5 + 0x10);
        if (-1 < (int)uVar4) {
          puVar10 = (undefined *)((ulong)uVar4 + (long)puVar7);
          goto LAB_0127258c;
        }
        if (uVar4 != 0xffffffff) break;
      }
      puVar11 = (uint *)(ulong)*puVar7;
      puVar10 = (undefined *)0x0;
      if ((*puVar7 == 0) || (puVar7 == puVar11)) goto LAB_0127258c;
      lVar2 = 0xc;
      if (*(char *)((long)puVar7 + (10 - (long)puVar11)) != '\0') {
        lVar2 = 0x1c;
      }
      lVar2 = (long)puVar7 + (lVar2 - (long)puVar11);
      if (lVar2 == 0) break;
      uVar9 = (ulong)*(ushort *)((long)puVar7 + (8 - (long)puVar11));
      *(undefined4 *)(puVar5 + 0x10) = 0xfffffffe;
      puVar10 = (undefined *)0x0;
      if (uVar9 == 0) goto LAB_0127258c;
      piVar12 = (int *)(lVar2 + 4);
      while (piVar12[-1] != -0x2f9606f4) {
        piVar12 = piVar12 + 2;
        uVar9 = uVar9 - 1;
        if (uVar9 == 0) {
          puVar10 = (undefined *)0x0;
          goto LAB_0127258c;
        }
      }
      iVar1 = 0;
      if (*piVar12 != -1) {
        iVar1 = *piVar12;
      }
      *(int *)(puVar5 + 0x10) = iVar1;
    } while (*puVar7 != 0);
  }
  puVar10 = (undefined *)0x0;
LAB_0127258c:
  puVar3 = PTR_DAT_04c481d0;
  if (puVar10 != (undefined *)0x0) {
    puVar3 = puVar10;
  }
  uVar6 = FUN_006bd550(puVar3,0);
  return uVar6;
}

