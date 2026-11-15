
bool FUN_01e1dcc0(long param_1)

{
  int iVar1;
  long lVar2;
  long lVar3;
  uint uVar4;
  undefined *puVar5;
  undefined *puVar6;
  uint *puVar7;
  char cVar8;
  uint uVar9;
  uint *puVar10;
  ulong uVar11;
  int *piVar12;
  
  puVar6 = PTR_DAT_04bc1540;
  puVar5 = PTR_DAT_04bc1538;
  if (*(char *)(param_1 + 0x99) == '\0') {
    return false;
  }
  puVar7 = *(uint **)(param_1 + 0x58);
  if (puVar7 != (uint *)0x0) {
    if (**(char **)(param_1 + 0x68) == '\0') {
      if (*puVar7 != 0) {
        cVar8 = *PTR_DAT_04bc1538;
        do {
          if (cVar8 == '\0') {
            cVar8 = '\x01';
            *(undefined8 *)puVar6 = 0xffffffffffffffff;
            *(undefined8 *)(puVar6 + 8) = 0xffffffffffffffff;
            *puVar5 = 1;
            *(undefined8 *)(puVar6 + 0x20) = 0xffffffffffffffff;
            *(undefined8 *)(puVar6 + 0x10) = 0xffffffffffffffff;
            *(undefined8 *)(puVar6 + 0x18) = 0xffffffffffffffff;
            uVar4 = *puVar7;
          }
          else {
            if (*(int *)(puVar6 + 0x10) != -1) goto LAB_01e1dd00;
            uVar4 = *puVar7;
          }
          if ((uVar4 == 0) || (puVar10 = (uint *)(ulong)uVar4, puVar7 == puVar10))
          goto LAB_01e1dd00;
          lVar2 = 0xc;
          if (*(char *)((long)puVar7 + (10 - (long)puVar10)) != '\0') {
            lVar2 = 0x1c;
          }
          lVar2 = (long)puVar7 + (lVar2 - (long)puVar10);
          if (lVar2 == 0) goto LAB_01e1dd00;
          uVar11 = (ulong)*(ushort *)((long)puVar7 + (8 - (long)puVar10));
          *(undefined4 *)(puVar6 + 0x10) = 0xfffffffe;
          if (uVar11 == 0) goto LAB_01e1dd00;
          piVar12 = (int *)(lVar2 + 4);
          while (piVar12[-1] != 0x34c8eed5) {
            piVar12 = piVar12 + 2;
            uVar11 = uVar11 - 1;
            if (uVar11 == 0) goto LAB_01e1dd00;
          }
          iVar1 = 0;
          if (*piVar12 != -1) {
            iVar1 = *piVar12;
          }
          *(int *)(puVar6 + 0x10) = iVar1;
          if (*puVar7 == 0) {
            return false;
          }
        } while( true );
      }
    }
    else {
      (**(code **)(*(long *)(param_1 + 0x60) + 0x18))((long *)(param_1 + 0x60));
      puVar7 = *(uint **)(param_1 + 0x58);
LAB_01e1dd00:
      puVar6 = PTR_DAT_04bc1540;
      puVar5 = PTR_DAT_04bc1538;
      if (*puVar7 != 0) {
        cVar8 = *PTR_DAT_04bc1538;
        while( true ) {
          if (cVar8 == '\0') {
            cVar8 = '\x01';
            *(undefined8 *)puVar6 = 0xffffffffffffffff;
            *(undefined8 *)(puVar6 + 8) = 0xffffffffffffffff;
            *puVar5 = 1;
            *(undefined8 *)(puVar6 + 0x20) = 0xffffffffffffffff;
            *(undefined8 *)(puVar6 + 0x10) = 0xffffffffffffffff;
            *(undefined8 *)(puVar6 + 0x18) = 0xffffffffffffffff;
          }
          else {
            uVar4 = *(uint *)(puVar6 + 0x1c);
            if (-1 < (int)uVar4) {
              if ((char *)((ulong)uVar4 + (long)puVar7) == (char *)0x0) {
                return false;
              }
              if (*(char *)((ulong)uVar4 + (long)puVar7) != '\x04') {
                return false;
              }
              uVar4 = *puVar7;
              if (uVar4 == 0) {
                return false;
              }
              uVar9 = *(uint *)puVar6;
              while( true ) {
                if (-1 < (int)uVar9) {
                  if ((int *)((long)puVar7 + (ulong)uVar9) == (int *)0x0) {
                    return false;
                  }
                  return *(int *)((long)puVar7 + (ulong)uVar9) == 0x80900;
                }
                if (uVar9 != 0xffffffff) {
                  return false;
                }
                lVar2 = (long)puVar7 - (ulong)uVar4;
                if (lVar2 == 0) {
                  return false;
                }
                lVar3 = 0xc;
                if (*(char *)(lVar2 + 10) != '\0') {
                  lVar3 = 0x1c;
                }
                if (lVar3 + lVar2 == 0) break;
                uVar11 = (ulong)*(ushort *)(lVar2 + 8);
                *(undefined4 *)puVar6 = 0xfffffffe;
                if (uVar11 == 0) {
                  return false;
                }
                puVar10 = (uint *)(lVar3 + lVar2 + 4);
                while (puVar10[-1] != 0xc7ad2fdf) {
                  puVar10 = puVar10 + 2;
                  uVar11 = uVar11 - 1;
                  if (uVar11 == 0) {
                    return false;
                  }
                }
                uVar9 = 0;
                if (*puVar10 != 0xffffffff) {
                  uVar9 = *puVar10;
                }
                *(uint *)puVar6 = uVar9;
                uVar4 = *puVar7;
                if (uVar4 == 0) {
                  return false;
                }
              }
              return false;
            }
            if (uVar4 != 0xffffffff) {
              return false;
            }
          }
          puVar10 = (uint *)(ulong)*puVar7;
          if (*puVar7 == 0) {
            return false;
          }
          if (puVar7 == puVar10) break;
          lVar2 = 0xc;
          if (*(char *)((long)puVar7 + (10 - (long)puVar10)) != '\0') {
            lVar2 = 0x1c;
          }
          lVar2 = (long)puVar7 + (lVar2 - (long)puVar10);
          if (lVar2 == 0) {
            return false;
          }
          uVar11 = (ulong)*(ushort *)((long)puVar7 + (8 - (long)puVar10));
          *(undefined4 *)(puVar6 + 0x1c) = 0xfffffffe;
          if (uVar11 == 0) {
            return false;
          }
          piVar12 = (int *)(lVar2 + 4);
          while (piVar12[-1] != 0x5b7ca0b2) {
            piVar12 = piVar12 + 2;
            uVar11 = uVar11 - 1;
            if (uVar11 == 0) {
              return false;
            }
          }
          iVar1 = 0;
          if (*piVar12 != -1) {
            iVar1 = *piVar12;
          }
          *(int *)(puVar6 + 0x1c) = iVar1;
          if (*puVar7 == 0) {
            return false;
          }
        }
        return false;
      }
    }
  }
  return false;
}

