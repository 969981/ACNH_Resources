
ulong FUN_021f55b0(uint param_1)

{
  long lVar1;
  uint uVar2;
  uint uVar3;
  undefined *puVar4;
  undefined *puVar5;
  uint uVar6;
  uint *puVar7;
  uint *puVar8;
  ulong uVar9;
  int *piVar10;
  uint uVar11;
  long lVar12;
  ulong uVar13;
  int iVar14;
  char cVar15;
  
  puVar5 = PTR_DAT_04bb40b8;
  puVar4 = PTR_DAT_04bb40b0;
  lVar12 = *(long *)PTR_DAT_04bb4138;
  if (lVar12 != 0) {
    uVar2 = *(uint *)(lVar12 + 0x1c0);
    uVar11 = uVar2;
    if ((0 < (int)uVar2) ||
       (((*(long *)(lVar12 + 0xb0) != 0 &&
         (puVar7 = *(uint **)(*(long *)(lVar12 + 0xb0) + 8), puVar7 != (uint *)0x0)) &&
        (uVar11 = *puVar7, 0 < (int)uVar11)))) {
      uVar13 = 0;
      cVar15 = *PTR_DAT_04bb40b0;
      do {
        if ((int)uVar2 < 1) {
          if (((((*(long *)(lVar12 + 0xb0) != 0) &&
                (puVar7 = *(uint **)(*(long *)(lVar12 + 0xb0) + 8), puVar7 != (uint *)0x0)) &&
               ((*(uint *)(lVar12 + 200) <= uVar13 ||
                (*(char *)(*(long *)(lVar12 + 0xd0) + uVar13) != '\0')))) &&
              ((uVar13 < *puVar7 && (puVar7[1] != 0)))) && ((ushort)puVar7[2] != 0)) {
            iVar14 = 0xc;
            if (*(char *)((long)puVar7 + 10) != '\0') {
              iVar14 = 0x1c;
            }
            puVar7 = (uint *)((ulong)(puVar7[1] * (int)uVar13 + (uint)(ushort)puVar7[2] * 8 + iVar14
                                     ) + (long)puVar7);
            goto joined_r0x021f5790;
          }
        }
        else if (uVar13 < uVar2) {
          uVar9 = uVar13 & 0xffffffff;
          if (*(uint *)(lVar12 + 0x1b0) <= uVar13) {
            uVar9 = 0;
          }
          puVar7 = *(uint **)(*(long *)(lVar12 + 0x1b8) + uVar9 * 8);
joined_r0x021f5790:
          if (puVar7 != (uint *)0x0) {
            if (*puVar7 != 0) {
              while( true ) {
                if (cVar15 == '\0') {
                  cVar15 = '\x01';
                  *(undefined8 *)puVar5 = 0xffffffffffffffff;
                  *(undefined8 *)(puVar5 + 8) = 0xffffffffffffffff;
                  *puVar4 = 1;
                  *(undefined4 *)(puVar5 + 0xa0) = 0xffffffff;
                  *(undefined8 *)(puVar5 + 0x10) = 0xffffffffffffffff;
                  *(undefined8 *)(puVar5 + 0x18) = 0xffffffffffffffff;
                  *(undefined8 *)(puVar5 + 0x20) = 0xffffffffffffffff;
                  *(undefined8 *)(puVar5 + 0x28) = 0xffffffffffffffff;
                  *(undefined8 *)(puVar5 + 0x30) = 0xffffffffffffffff;
                  *(undefined8 *)(puVar5 + 0x38) = 0xffffffffffffffff;
                  *(undefined8 *)(puVar5 + 0x40) = 0xffffffffffffffff;
                  *(undefined8 *)(puVar5 + 0x48) = 0xffffffffffffffff;
                  *(undefined8 *)(puVar5 + 0x50) = 0xffffffffffffffff;
                  *(undefined8 *)(puVar5 + 0x58) = 0xffffffffffffffff;
                  *(undefined8 *)(puVar5 + 0x60) = 0xffffffffffffffff;
                  *(undefined8 *)(puVar5 + 0x68) = 0xffffffffffffffff;
                  *(undefined8 *)(puVar5 + 0x70) = 0xffffffffffffffff;
                  *(undefined8 *)(puVar5 + 0x78) = 0xffffffffffffffff;
                  *(undefined8 *)(puVar5 + 0x80) = 0xffffffffffffffff;
                  *(undefined8 *)(puVar5 + 0x88) = 0xffffffffffffffff;
                  *(undefined8 *)(puVar5 + 0x90) = 0xffffffffffffffff;
                  *(undefined8 *)(puVar5 + 0x98) = 0xffffffffffffffff;
                  uVar3 = *puVar7;
                }
                else {
                  uVar3 = *(uint *)(puVar5 + 0x30);
                  if (-1 < (int)uVar3) {
                    uVar6 = 0;
                    if ((ushort *)((ulong)uVar3 + (long)puVar7) != (ushort *)0x0) {
                      uVar6 = (uint)*(ushort *)((ulong)uVar3 + (long)puVar7);
                    }
                    goto LAB_021f5724;
                  }
                  if (uVar3 != 0xffffffff) break;
                  uVar3 = *puVar7;
                }
                if ((uVar3 == 0) || (puVar8 = (uint *)(ulong)uVar3, puVar7 == puVar8)) break;
                lVar1 = 0xc;
                if (*(char *)((long)puVar7 + (10 - (long)puVar8)) != '\0') {
                  lVar1 = 0x1c;
                }
                lVar1 = (long)puVar7 + (lVar1 - (long)puVar8);
                if (lVar1 == 0) break;
                uVar9 = (ulong)*(ushort *)((long)puVar7 + (8 - (long)puVar8));
                *(undefined4 *)(puVar5 + 0x30) = 0xfffffffe;
                if (uVar9 == 0) break;
                piVar10 = (int *)(lVar1 + 4);
                while (piVar10[-1] != 0x504428b5) {
                  piVar10 = piVar10 + 2;
                  uVar9 = uVar9 - 1;
                  if (uVar9 == 0) goto LAB_021f5720;
                }
                iVar14 = 0;
                if (*piVar10 != -1) {
                  iVar14 = *piVar10;
                }
                *(int *)(puVar5 + 0x30) = iVar14;
                if (*puVar7 == 0) break;
              }
            }
LAB_021f5720:
            uVar6 = 0;
LAB_021f5724:
            if (uVar6 == param_1) {
              return uVar13 & 0xffffffff;
            }
          }
        }
        uVar13 = uVar13 + 1;
      } while (uVar13 != uVar11);
    }
  }
  return 0xffffffff;
}

