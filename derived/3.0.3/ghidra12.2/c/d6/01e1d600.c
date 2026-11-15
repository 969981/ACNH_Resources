
bool FUN_01e1d600(long param_1)

{
  int iVar1;
  long lVar2;
  uint uVar3;
  uint uVar4;
  undefined *puVar5;
  undefined *puVar6;
  bool bVar7;
  ulong uVar8;
  uint *puVar9;
  undefined *puVar10;
  char cVar11;
  undefined1 *puVar12;
  uint *puVar13;
  int *piVar14;
  
  if (*(char *)(param_1 + 0x99) == '\0') {
    return false;
  }
  uVar8 = FUN_01e1d350();
  puVar6 = PTR_DAT_04bc1540;
  puVar5 = PTR_DAT_04bc1538;
  if ((uVar8 & 1) == 0) {
    puVar9 = *(uint **)(param_1 + 0x58);
    if (puVar9 != (uint *)0x0) {
      if (**(char **)(param_1 + 0x68) == '\0') {
        if (*puVar9 != 0) {
          cVar11 = *PTR_DAT_04bc1538;
          do {
            if (cVar11 == '\0') {
              cVar11 = '\x01';
              *(undefined8 *)puVar6 = 0xffffffffffffffff;
              *(undefined8 *)(puVar6 + 8) = 0xffffffffffffffff;
              *puVar5 = 1;
              *(undefined8 *)(puVar6 + 0x20) = 0xffffffffffffffff;
              *(undefined8 *)(puVar6 + 0x10) = 0xffffffffffffffff;
              *(undefined8 *)(puVar6 + 0x18) = 0xffffffffffffffff;
            }
            else {
              uVar3 = *(uint *)(puVar6 + 0x10);
              if (-1 < (int)uVar3) {
                puVar12 = (undefined1 *)((ulong)uVar3 + (long)puVar9);
                goto LAB_01e1d738;
              }
              if (uVar3 != 0xffffffff) break;
            }
            puVar13 = (uint *)(ulong)*puVar9;
            puVar12 = (undefined1 *)0x0;
            if ((*puVar9 == 0) || (puVar9 == puVar13)) goto LAB_01e1d738;
            lVar2 = 0xc;
            if (*(char *)((long)puVar9 + (10 - (long)puVar13)) != '\0') {
              lVar2 = 0x1c;
            }
            lVar2 = (long)puVar9 + (lVar2 - (long)puVar13);
            if (lVar2 == 0) break;
            uVar8 = (ulong)*(ushort *)((long)puVar9 + (8 - (long)puVar13));
            *(undefined4 *)(puVar6 + 0x10) = 0xfffffffe;
            puVar12 = (undefined1 *)0x0;
            if (uVar8 == 0) goto LAB_01e1d738;
            piVar14 = (int *)(lVar2 + 4);
            while (piVar14[-1] != 0x34c8eed5) {
              piVar14 = piVar14 + 2;
              uVar8 = uVar8 - 1;
              if (uVar8 == 0) {
                puVar12 = (undefined1 *)0x0;
                goto LAB_01e1d738;
              }
            }
            iVar1 = 0;
            if (*piVar14 != -1) {
              iVar1 = *piVar14;
            }
            *(int *)(puVar6 + 0x10) = iVar1;
          } while (*puVar9 != 0);
        }
        puVar12 = (undefined1 *)0x0;
LAB_01e1d738:
        puVar10 = PTR_DAT_04c48688;
        if (puVar12 != (undefined1 *)0x0) {
          puVar10 = puVar12;
        }
      }
      else {
        (**(code **)(*(long *)(param_1 + 0x60) + 0x18))((long *)(param_1 + 0x60));
        puVar10 = *(undefined **)(param_1 + 0x68);
      }
      puVar6 = PTR_DAT_04bc1540;
      puVar5 = PTR_DAT_04bc1538;
      if (puVar10 == &DAT_040bf969) {
LAB_01e1d7a0:
        puVar9 = *(uint **)(param_1 + 0x58);
        uVar3 = *puVar9;
        if (uVar3 != 0) {
          cVar11 = *PTR_DAT_04bc1538;
          do {
            if (cVar11 == '\0') {
              *(undefined8 *)puVar6 = 0xffffffffffffffff;
              *(undefined8 *)(puVar6 + 8) = 0xffffffffffffffff;
              cVar11 = '\x01';
              *(undefined8 *)(puVar6 + 0x20) = 0xffffffffffffffff;
              *puVar5 = 1;
              *(undefined8 *)(puVar6 + 0x10) = 0xffffffffffffffff;
              *(undefined8 *)(puVar6 + 0x18) = 0xffffffffffffffff;
              uVar3 = *puVar9;
            }
            else {
              uVar4 = *(uint *)puVar6;
              if (-1 < (int)uVar4) {
                if ((int *)((ulong)uVar4 + (long)puVar9) != (int *)0x0) {
                  return *(int *)((ulong)uVar4 + (long)puVar9) == 0x18405;
                }
                break;
              }
              if (uVar4 != 0xffffffff) break;
            }
            puVar13 = (uint *)(ulong)uVar3;
            if (puVar13 == (uint *)0x0) {
              return false;
            }
            if (puVar9 == puVar13) {
              return false;
            }
            lVar2 = 0xc;
            if (*(char *)((long)puVar9 + (10 - (long)puVar13)) != '\0') {
              lVar2 = 0x1c;
            }
            lVar2 = (long)puVar9 + (lVar2 - (long)puVar13);
            if (lVar2 == 0) break;
            uVar8 = (ulong)*(ushort *)((long)puVar9 + (8 - (long)puVar13));
            *(undefined4 *)puVar6 = 0xfffffffe;
            if (uVar8 == 0) break;
            piVar14 = (int *)(lVar2 + 4);
            while (piVar14[-1] != -0x3852d021) {
              piVar14 = piVar14 + 2;
              uVar8 = uVar8 - 1;
              if (uVar8 == 0) goto LAB_01e1d8a8;
            }
            iVar1 = 0;
            if (*piVar14 != -1) {
              iVar1 = *piVar14;
            }
            *(int *)puVar6 = iVar1;
            uVar3 = *puVar9;
            if (uVar3 == 0) {
              return false;
            }
          } while( true );
        }
      }
      else {
        uVar8 = 0;
        bVar7 = true;
        do {
          if (puVar10[uVar8] != (&DAT_040bf969)[uVar8]) break;
          if (puVar10[uVar8] == '\0') {
            if (bVar7) goto LAB_01e1d7a0;
            break;
          }
          bVar7 = uVar8 < 0x80000;
          uVar8 = uVar8 + 1;
        } while (uVar8 != 0x80001);
      }
    }
LAB_01e1d8a8:
    bVar7 = false;
  }
  else {
    bVar7 = true;
  }
  return bVar7;
}

