
undefined2 FUN_036ffc70(long param_1,uint param_2)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  uint *puVar4;
  uint uVar5;
  undefined *puVar6;
  int iVar7;
  char cVar8;
  uint *puVar9;
  ulong uVar10;
  int *piVar11;
  
  puVar3 = PTR_DAT_04bc2340;
  puVar2 = PTR_DAT_04bc2338;
  uVar5 = (uint)(DAT_0545c458 != -1);
  if (DAT_0545c45c != -1) {
    uVar5 = uVar5 + 1;
  }
  if ((int)param_2 < (int)uVar5) {
    puVar4 = (uint *)(&DAT_0545c458 + param_2);
    if (1 < param_2) {
      puVar4 = (uint *)&DAT_0545c458;
    }
    uVar5 = *puVar4;
    if (uVar5 != 0xffffffff && (int)uVar5 < 0x10) {
      puVar6 = &DAT_0545b240 + (ulong)uVar5 * 0x118;
      if (0xf < uVar5) {
        puVar6 = &DAT_0545b240;
      }
      if (puVar6[0x8c] != '\0') {
        uVar5 = *(uint *)(puVar6 + 0xa8);
        if ((int)*(uint *)(param_1 + 0x1c0) < 1) {
          if (*(long *)(param_1 + 0xb0) == 0) {
            return 0;
          }
          puVar4 = *(uint **)(*(long *)(param_1 + 0xb0) + 8);
          if (puVar4 == (uint *)0x0) {
            return 0;
          }
          if ((uVar5 < *(uint *)(param_1 + 200)) &&
             (*(char *)(*(long *)(param_1 + 0xd0) + (long)(int)uVar5) == '\0')) {
            return 0;
          }
          if (*puVar4 <= uVar5) {
            return 0;
          }
          if (puVar4[1] == 0) {
            return 0;
          }
          if ((ushort)puVar4[2] == 0) {
            return 0;
          }
          iVar7 = 0xc;
          if (*(char *)((long)puVar4 + 10) != '\0') {
            iVar7 = 0x1c;
          }
          puVar4 = (uint *)((ulong)(puVar4[1] * uVar5 + (uint)(ushort)puVar4[2] * 8 + iVar7) +
                           (long)puVar4);
        }
        else {
          if (*(uint *)(param_1 + 0x1c0) <= uVar5) {
            return 0;
          }
          if (*(uint *)(param_1 + 0x1b0) <= uVar5) {
            uVar5 = 0;
          }
          puVar4 = *(uint **)(*(long *)(param_1 + 0x1b8) + (ulong)uVar5 * 8);
        }
        if ((puVar4 != (uint *)0x0) && (*puVar4 != 0)) {
          cVar8 = *PTR_DAT_04bc2338;
          while( true ) {
            if (cVar8 == '\0') {
              cVar8 = '\x01';
              *(undefined8 *)puVar3 = 0xffffffffffffffff;
              *(undefined8 *)(puVar3 + 8) = 0xffffffffffffffff;
              *puVar2 = 1;
              *(undefined8 *)(puVar3 + 0x30) = 0xffffffffffffffff;
              *(undefined4 *)(puVar3 + 0x38) = 0xffffffff;
              *(undefined8 *)(puVar3 + 0x10) = 0xffffffffffffffff;
              *(undefined8 *)(puVar3 + 0x18) = 0xffffffffffffffff;
              *(undefined8 *)(puVar3 + 0x20) = 0xffffffffffffffff;
              *(undefined8 *)(puVar3 + 0x28) = 0xffffffffffffffff;
            }
            else {
              uVar5 = *(uint *)(puVar3 + 0x10);
              if (-1 < (int)uVar5) {
                if ((undefined2 *)((ulong)uVar5 + (long)puVar4) == (undefined2 *)0x0) {
                  return 0;
                }
                return *(undefined2 *)((ulong)uVar5 + (long)puVar4);
              }
              if (uVar5 != 0xffffffff) {
                return 0;
              }
            }
            puVar9 = (uint *)(ulong)*puVar4;
            if (*puVar4 == 0) {
              return 0;
            }
            if (puVar4 == puVar9) break;
            lVar1 = 0xc;
            if (*(char *)((long)puVar4 + (10 - (long)puVar9)) != '\0') {
              lVar1 = 0x1c;
            }
            lVar1 = (long)puVar4 + (lVar1 - (long)puVar9);
            if (lVar1 == 0) {
              return 0;
            }
            uVar10 = (ulong)*(ushort *)((long)puVar4 + (8 - (long)puVar9));
            *(undefined4 *)(puVar3 + 0x10) = 0xfffffffe;
            if (uVar10 == 0) {
              return 0;
            }
            piVar11 = (int *)(lVar1 + 4);
            while (piVar11[-1] != 0x54706054) {
              piVar11 = piVar11 + 2;
              uVar10 = uVar10 - 1;
              if (uVar10 == 0) {
                return 0;
              }
            }
            iVar7 = 0;
            if (*piVar11 != -1) {
              iVar7 = *piVar11;
            }
            *(int *)(puVar3 + 0x10) = iVar7;
            if (*puVar4 == 0) {
              return 0;
            }
          }
          return 0;
        }
      }
    }
  }
  return 0;
}

