
/* WARNING: Type propagation algorithm not settling */

undefined4 FUN_02c88b30(undefined8 param_1)

{
  undefined8 *puVar1;
  long lVar2;
  uint uVar3;
  uint uVar4;
  undefined *puVar5;
  undefined *puVar6;
  int iVar7;
  int iVar8;
  char cVar9;
  uint *puVar10;
  int *piVar11;
  ulong uVar12;
  long lVar13;
  uint *puVar14;
  undefined8 *puVar15;
  short local_68 [4];
  
  puVar6 = PTR_DAT_04bb57c8;
  puVar5 = PTR_DAT_04bb57c0;
  lVar13 = *(long *)PTR_DAT_04bb32f0;
  if (*(int *)(lVar13 + 0xe50) != 0) {
    puVar15 = *(undefined8 **)(lVar13 + 0xe58);
    puVar1 = puVar15 + *(int *)(lVar13 + 0xe50);
    do {
      uVar4 = *(uint *)*puVar15;
      if ((int)*(uint *)(lVar13 + 0xe28) < 1) {
        if ((((*(long *)(lVar13 + 0xd18) == 0) ||
             (puVar14 = *(uint **)(*(long *)(lVar13 + 0xd18) + 8), puVar14 == (uint *)0x0)) ||
            ((uVar4 < *(uint *)(lVar13 + 0xd30) &&
             (*(char *)(*(long *)(lVar13 + 0xd38) + (long)(int)uVar4) == '\0')))) ||
           (((*puVar14 <= uVar4 || (puVar14[1] == 0)) || ((ushort)puVar14[2] == 0))))
        goto LAB_02c88c50;
        iVar7 = 0xc;
        if (*(char *)((long)puVar14 + 10) != '\0') {
          iVar7 = 0x1c;
        }
        puVar14 = (uint *)((ulong)(puVar14[1] * uVar4 + (uint)(ushort)puVar14[2] * 8 + iVar7) +
                          (long)puVar14);
        uVar4 = *puVar14;
      }
      else if (uVar4 < *(uint *)(lVar13 + 0xe28)) {
        if (*(uint *)(lVar13 + 0xe18) <= uVar4) {
          uVar4 = 0;
        }
        puVar14 = *(uint **)(*(long *)(lVar13 + 0xe20) + (ulong)uVar4 * 8);
        uVar4 = *puVar14;
      }
      else {
LAB_02c88c50:
        puVar14 = (uint *)0x0;
        uVar4 = uRam0000000000000000;
      }
      if (uVar4 != 0) {
        cVar9 = *puVar5;
        do {
          if (cVar9 == '\0') {
            cVar9 = '\x01';
            *puVar5 = 1;
            *(undefined8 *)puVar6 = 0xffffffffffffffff;
            *(undefined8 *)(puVar6 + 8) = 0xffffffffffffffff;
            *(undefined4 *)(puVar6 + 0x10) = 0xffffffff;
          }
          else {
            uVar4 = *(uint *)(puVar6 + 8);
            if (-1 < (int)uVar4) {
              if ((short *)((ulong)uVar4 + (long)puVar14) != (short *)0x0) {
                local_68[0] = *(short *)((ulong)uVar4 + (long)puVar14);
                goto LAB_02c88d24;
              }
              break;
            }
            if (uVar4 != 0xffffffff) break;
          }
          puVar10 = (uint *)(ulong)*puVar14;
          local_68[0] = -2;
          if ((*puVar14 == 0) || (puVar14 == puVar10)) goto LAB_02c88d24;
          lVar2 = 0xc;
          if (*(char *)((long)puVar14 + (10 - (long)puVar10)) != '\0') {
            lVar2 = 0x1c;
          }
          lVar2 = (long)puVar14 + (lVar2 - (long)puVar10);
          if (lVar2 == 0) break;
          uVar12 = (ulong)*(ushort *)((long)puVar14 + (8 - (long)puVar10));
          *(undefined4 *)(puVar6 + 8) = 0xfffffffe;
          if (uVar12 == 0) break;
          piVar11 = (int *)(lVar2 + 4);
          while (piVar11[-1] != -0x52e1fb53) {
            piVar11 = piVar11 + 2;
            uVar12 = uVar12 - 1;
            if (uVar12 == 0) goto LAB_02c88d20;
          }
          iVar7 = 0;
          if (*piVar11 != -1) {
            iVar7 = *piVar11;
          }
          *(int *)(puVar6 + 8) = iVar7;
          if (*puVar14 == 0) break;
        } while( true );
      }
LAB_02c88d20:
      local_68[0] = -2;
LAB_02c88d24:
      local_68[1] = 0;
      local_68[2] = 0;
      local_68[3] = 0;
      FUN_0277d4ac(local_68);
      if (local_68[0] != -2) {
        iVar7 = FUN_0277d6c4(param_1);
        iVar8 = FUN_0277d6c4(local_68);
        if (iVar7 == iVar8) {
          uVar4 = *puVar14;
          if (uVar4 == 0) {
            return 0;
          }
          cVar9 = *puVar5;
          while( true ) {
            if (cVar9 == '\0') {
              cVar9 = '\x01';
              *puVar5 = 1;
              *(undefined8 *)puVar6 = 0xffffffffffffffff;
              *(undefined8 *)(puVar6 + 8) = 0xffffffffffffffff;
              *(undefined4 *)(puVar6 + 0x10) = 0xffffffff;
              uVar4 = *puVar14;
            }
            else {
              uVar3 = *(uint *)puVar6;
              if (-1 < (int)uVar3) {
                if ((undefined4 *)((ulong)uVar3 + (long)puVar14) == (undefined4 *)0x0) {
                  return 0;
                }
                return *(undefined4 *)((ulong)uVar3 + (long)puVar14);
              }
              if (uVar3 != 0xffffffff) {
                return 0;
              }
            }
            puVar10 = (uint *)(ulong)uVar4;
            if (puVar10 == (uint *)0x0) {
              return 0;
            }
            if (puVar14 == puVar10) break;
            lVar13 = 0xc;
            if (*(char *)((long)puVar14 + (10 - (long)puVar10)) != '\0') {
              lVar13 = 0x1c;
            }
            lVar13 = (long)puVar14 + (lVar13 - (long)puVar10);
            if (lVar13 == 0) {
              return 0;
            }
            uVar12 = (ulong)*(ushort *)((long)puVar14 + (8 - (long)puVar10));
            *(undefined4 *)puVar6 = 0xfffffffe;
            if (uVar12 == 0) {
              return 0;
            }
            piVar11 = (int *)(lVar13 + 4);
            while (piVar11[-1] != 0x598463c8) {
              piVar11 = piVar11 + 2;
              uVar12 = uVar12 - 1;
              if (uVar12 == 0) {
                return 0;
              }
            }
            iVar7 = 0;
            if (*piVar11 != -1) {
              iVar7 = *piVar11;
            }
            *(int *)puVar6 = iVar7;
            uVar4 = *puVar14;
            if (uVar4 == 0) {
              return 0;
            }
          }
          return 0;
        }
      }
      puVar15 = puVar15 + 1;
    } while (puVar15 != puVar1);
  }
  return 0;
}

