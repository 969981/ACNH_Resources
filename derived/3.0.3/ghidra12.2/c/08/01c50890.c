
byte FUN_01c50890(long param_1,short param_2)

{
  int iVar1;
  long lVar2;
  uint uVar3;
  int iVar4;
  undefined *puVar5;
  undefined *puVar6;
  long lVar7;
  short sVar8;
  uint *puVar9;
  uint *puVar10;
  ulong uVar11;
  int *piVar12;
  long lVar13;
  long lVar14;
  uint uVar15;
  char cVar16;
  
  puVar6 = PTR_DAT_04bbec80;
  puVar5 = PTR_DAT_04bbec78;
  if (*(char *)(param_1 + 0x230) == '\0') {
    return 0;
  }
  if (*(long *)(param_1 + 0x220) == 0) {
    return 1;
  }
  lVar13 = *(long *)(param_1 + 0x228);
  iVar4 = *(int *)(*(long *)PTR_DAT_04bb4008 + 0x358);
  if (iVar4 < 1) {
    uVar15 = 0xffffffff;
  }
  else {
    lVar14 = 0;
    cVar16 = *PTR_DAT_04bbec78;
    lVar7 = *(long *)(*(long *)PTR_DAT_04bb4008 + 0x360);
    uVar15 = 0xffffffff;
    do {
      puVar9 = *(uint **)(lVar7 + lVar14 * 8);
      if (*puVar9 != 0) {
        while( true ) {
          if (cVar16 == '\0') {
            cVar16 = '\x01';
            *(undefined8 *)puVar6 = 0xffffffffffffffff;
            *(undefined8 *)(puVar6 + 8) = 0xffffffffffffffff;
            *puVar5 = 1;
            *(undefined8 *)(puVar6 + 0x10) = 0xffffffffffffffff;
            *(undefined8 *)(puVar6 + 0x18) = 0xffffffffffffffff;
            *(undefined8 *)(puVar6 + 0x20) = 0xffffffffffffffff;
            *(undefined8 *)(puVar6 + 0x28) = 0xffffffffffffffff;
            *(undefined8 *)(puVar6 + 0x30) = 0xffffffffffffffff;
            *(undefined8 *)(puVar6 + 0x38) = 0xffffffffffffffff;
            uVar3 = *puVar9;
          }
          else {
            uVar3 = *(uint *)(puVar6 + 0x20);
            if (-1 < (int)uVar3) {
              sVar8 = 0;
              if ((short *)((ulong)uVar3 + (long)puVar9) != (short *)0x0) {
                sVar8 = *(short *)((ulong)uVar3 + (long)puVar9);
              }
              goto LAB_01c509c4;
            }
            if (uVar3 != 0xffffffff) break;
            uVar3 = *puVar9;
          }
          if ((uVar3 == 0) || (puVar10 = (uint *)(ulong)uVar3, puVar9 == puVar10)) break;
          lVar2 = 0xc;
          if (*(char *)((long)puVar9 + (10 - (long)puVar10)) != '\0') {
            lVar2 = 0x1c;
          }
          lVar2 = (long)puVar9 + (lVar2 - (long)puVar10);
          if (lVar2 == 0) break;
          uVar11 = (ulong)*(ushort *)((long)puVar9 + (8 - (long)puVar10));
          *(undefined4 *)(puVar6 + 0x20) = 0xfffffffe;
          if (uVar11 == 0) break;
          piVar12 = (int *)(lVar2 + 4);
          while (piVar12[-1] != 0x54706054) {
            piVar12 = piVar12 + 2;
            uVar11 = uVar11 - 1;
            if (uVar11 == 0) goto LAB_01c509c0;
          }
          iVar1 = 0;
          if (*piVar12 != -1) {
            iVar1 = *piVar12;
          }
          *(int *)(puVar6 + 0x20) = iVar1;
          if (*puVar9 == 0) break;
        }
      }
LAB_01c509c0:
      sVar8 = 0;
LAB_01c509c4:
      if (sVar8 == param_2) {
        uVar15 = (uint)lVar14;
        break;
      }
      lVar14 = lVar14 + 1;
    } while (lVar14 < iVar4);
  }
  if (uVar15 < 0x5a) {
    uVar3 = uVar15 + 7;
    if (-1 < (int)uVar15) {
      uVar3 = uVar15;
    }
    if ((uint)((int)uVar3 >> 3) < 0xc) {
      return *(byte *)(lVar13 + (ulong)(uint)((int)uVar3 >> 3)) >> (ulong)(uVar15 & 7) & 1;
    }
  }
  return 0;
}

