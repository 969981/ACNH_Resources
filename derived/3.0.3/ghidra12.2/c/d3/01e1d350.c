
bool FUN_01e1d350(long param_1)

{
  int iVar1;
  long lVar2;
  uint uVar3;
  undefined *puVar4;
  undefined *puVar5;
  bool bVar6;
  uint *puVar7;
  undefined *puVar8;
  ulong uVar9;
  char cVar10;
  byte bVar11;
  undefined1 *puVar12;
  uint *puVar13;
  int *piVar14;
  
  puVar5 = PTR_DAT_04bc1540;
  puVar4 = PTR_DAT_04bc1538;
  if (*(char *)(param_1 + 0x99) == '\0') {
    return false;
  }
  puVar7 = *(uint **)(param_1 + 0x58);
  if (puVar7 != (uint *)0x0) {
    if (**(char **)(param_1 + 0x68) == '\0') {
      if (*puVar7 != 0) {
        cVar10 = *PTR_DAT_04bc1538;
        do {
          if (cVar10 == '\0') {
            cVar10 = '\x01';
            *(undefined8 *)puVar5 = 0xffffffffffffffff;
            *(undefined8 *)(puVar5 + 8) = 0xffffffffffffffff;
            *puVar4 = 1;
            *(undefined8 *)(puVar5 + 0x20) = 0xffffffffffffffff;
            *(undefined8 *)(puVar5 + 0x10) = 0xffffffffffffffff;
            *(undefined8 *)(puVar5 + 0x18) = 0xffffffffffffffff;
          }
          else {
            uVar3 = *(uint *)(puVar5 + 0x10);
            if (-1 < (int)uVar3) {
              puVar12 = (undefined1 *)((ulong)uVar3 + (long)puVar7);
              goto LAB_01e1d478;
            }
            if (uVar3 != 0xffffffff) break;
          }
          puVar13 = (uint *)(ulong)*puVar7;
          puVar12 = (undefined1 *)0x0;
          if ((*puVar7 == 0) || (puVar7 == puVar13)) goto LAB_01e1d478;
          lVar2 = 0xc;
          if (*(char *)((long)puVar7 + (10 - (long)puVar13)) != '\0') {
            lVar2 = 0x1c;
          }
          lVar2 = (long)puVar7 + (lVar2 - (long)puVar13);
          if (lVar2 == 0) break;
          uVar9 = (ulong)*(ushort *)((long)puVar7 + (8 - (long)puVar13));
          *(undefined4 *)(puVar5 + 0x10) = 0xfffffffe;
          puVar12 = (undefined1 *)0x0;
          if (uVar9 == 0) goto LAB_01e1d478;
          piVar14 = (int *)(lVar2 + 4);
          while (piVar14[-1] != 0x34c8eed5) {
            piVar14 = piVar14 + 2;
            uVar9 = uVar9 - 1;
            if (uVar9 == 0) {
              puVar12 = (undefined1 *)0x0;
              goto LAB_01e1d478;
            }
          }
          iVar1 = 0;
          if (*piVar14 != -1) {
            iVar1 = *piVar14;
          }
          *(int *)(puVar5 + 0x10) = iVar1;
        } while (*puVar7 != 0);
      }
      puVar12 = (undefined1 *)0x0;
LAB_01e1d478:
      puVar8 = PTR_DAT_04c48688;
      if (puVar12 != (undefined1 *)0x0) {
        puVar8 = puVar12;
      }
    }
    else {
      (**(code **)(*(long *)(param_1 + 0x60) + 0x18))((long *)(param_1 + 0x60));
      puVar8 = *(undefined **)(param_1 + 0x68);
    }
    puVar5 = PTR_DAT_04bc1540;
    puVar4 = PTR_DAT_04bc1538;
    if (puVar8 == &DAT_040bf969) {
LAB_01e1d4e0:
      puVar7 = *(uint **)(param_1 + 0x58);
      if (*puVar7 == 0) {
LAB_01e1d5d8:
        bVar11 = 0;
      }
      else {
        cVar10 = *PTR_DAT_04bc1538;
        do {
          if (cVar10 == '\0') {
            cVar10 = '\x01';
            *(undefined8 *)puVar5 = 0xffffffffffffffff;
            *(undefined8 *)(puVar5 + 8) = 0xffffffffffffffff;
            *puVar4 = 1;
            *(undefined8 *)(puVar5 + 0x20) = 0xffffffffffffffff;
            *(undefined8 *)(puVar5 + 0x10) = 0xffffffffffffffff;
            *(undefined8 *)(puVar5 + 0x18) = 0xffffffffffffffff;
          }
          else {
            uVar3 = *(uint *)(puVar5 + 0xc);
            if (-1 < (int)uVar3) {
              if (((byte *)((ulong)uVar3 + (long)puVar7) == (byte *)0x0) ||
                 (bVar11 = *(byte *)((ulong)uVar3 + (long)puVar7), 2 < bVar11)) goto LAB_01e1d5d8;
              goto LAB_01e1d5dc;
            }
            if (uVar3 != 0xffffffff) goto LAB_01e1d5d8;
          }
          puVar13 = (uint *)(ulong)*puVar7;
          bVar11 = 0;
          if ((*puVar7 == 0) || (puVar7 == puVar13)) goto LAB_01e1d5dc;
          lVar2 = 0xc;
          if (*(char *)((long)puVar7 + (10 - (long)puVar13)) != '\0') {
            lVar2 = 0x1c;
          }
          lVar2 = (long)puVar7 + (lVar2 - (long)puVar13);
          if (lVar2 == 0) goto LAB_01e1d5d8;
          uVar9 = (ulong)*(ushort *)((long)puVar7 + (8 - (long)puVar13));
          *(undefined4 *)(puVar5 + 0xc) = 0xfffffffe;
          bVar11 = 0;
          if (uVar9 == 0) goto LAB_01e1d5dc;
          piVar14 = (int *)(lVar2 + 4);
          while (piVar14[-1] != -0x53b5ccbb) {
            piVar14 = piVar14 + 2;
            uVar9 = uVar9 - 1;
            if (uVar9 == 0) {
              bVar11 = 0;
              goto LAB_01e1d5dc;
            }
          }
          iVar1 = 0;
          if (*piVar14 != -1) {
            iVar1 = *piVar14;
          }
          *(int *)(puVar5 + 0xc) = iVar1;
        } while (*puVar7 != 0);
        bVar11 = 0;
      }
LAB_01e1d5dc:
      return bVar11 == 0;
    }
    uVar9 = 0;
    bVar6 = true;
    do {
      if (puVar8[uVar9] != (&DAT_040bf969)[uVar9]) {
        return false;
      }
      if (puVar8[uVar9] == '\0') {
        if (!bVar6) {
          return false;
        }
        goto LAB_01e1d4e0;
      }
      bVar6 = uVar9 < 0x80000;
      uVar9 = uVar9 + 1;
    } while (uVar9 != 0x80001);
  }
  return false;
}

