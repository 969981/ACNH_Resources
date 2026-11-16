
ulong FUN_0289c320(undefined8 param_1,uint param_2,int param_3)

{
  long lVar1;
  uint uVar2;
  uint uVar3;
  undefined *puVar4;
  undefined *puVar5;
  long lVar6;
  uint uVar7;
  uint *puVar8;
  uint uVar9;
  int iVar10;
  char cVar11;
  int iVar12;
  uint *puVar13;
  ulong uVar14;
  uint uVar15;
  int *piVar16;
  
  puVar5 = PTR_DAT_04bc38b0;
  puVar4 = PTR_DAT_04bc38a8;
  lVar6 = *(long *)PTR_DAT_04bb4700;
  uVar3 = *(uint *)(lVar6 + 1000);
  uVar7 = uVar3;
  if (((int)uVar3 < 1) &&
     (((*(long *)(lVar6 + 0x2d8) == 0 ||
       (puVar8 = *(uint **)(*(long *)(lVar6 + 0x2d8) + 8), puVar8 == (uint *)0x0)) ||
      (uVar7 = *puVar8, uVar7 == 0)))) {
    return 0xffffffff;
  }
  uVar9 = 0;
  iVar10 = 0;
  do {
    if ((int)uVar3 < 1) {
      if (((((*(long *)(lVar6 + 0x2d8) != 0) &&
            (puVar8 = *(uint **)(*(long *)(lVar6 + 0x2d8) + 8), puVar8 != (uint *)0x0)) &&
           ((*(uint *)(lVar6 + 0x2f0) <= uVar9 ||
            (*(char *)(*(long *)(lVar6 + 0x2f8) + (long)(int)uVar9) != '\0')))) &&
          ((uVar9 < *puVar8 && (puVar8[1] != 0)))) && ((ushort)puVar8[2] != 0)) {
        iVar12 = 0xc;
        if (*(char *)((long)puVar8 + 10) != '\0') {
          iVar12 = 0x1c;
        }
        puVar8 = (uint *)((ulong)(puVar8[1] * uVar9 + (uint)(ushort)puVar8[2] * 8 + iVar12) +
                         (long)puVar8);
        goto joined_r0x0289c440;
      }
    }
    else if (uVar9 < uVar3) {
      uVar15 = uVar9;
      if (*(uint *)(lVar6 + 0x3d8) <= uVar9) {
        uVar15 = 0;
      }
      puVar8 = *(uint **)(*(long *)(lVar6 + 0x3e0) + (ulong)uVar15 * 8);
joined_r0x0289c440:
      if (puVar8 != (uint *)0x0) {
        uVar15 = *puVar8;
        if (uVar15 == 0 || puVar8 == (uint *)(ulong)uVar15) {
LAB_0289c3b4:
          uVar15 = 0;
        }
        else {
          puVar13 = (uint *)((long)puVar8 - (long)(ulong)uVar15);
          uVar15 = 0;
          if (*puVar13 != 0) {
            uVar15 = puVar13[1];
            if ((uVar15 != 0) && ((ulong)(ushort)puVar13[2] != 0)) {
              lVar1 = 0xc;
              if (*(char *)((long)puVar13 + 10) != '\0') {
                lVar1 = 0x1c;
              }
              lVar1 = (long)puVar13 + lVar1 + (ulong)(ushort)puVar13[2] * 8;
              if (lVar1 != 0) {
                uVar2 = 0;
                if ((ulong)uVar15 != 0) {
                  uVar2 = (uint)((ulong)((long)puVar8 - lVar1) / (ulong)uVar15);
                }
                if (*puVar13 <= uVar2) {
                  uVar2 = 0xffffffff;
                }
                if ((uVar2 < *(uint *)PTR_DAT_04bc38a0) &&
                   (uVar15 = (uint)*(ushort *)
                                    (*(long *)(PTR_DAT_04bc38a0 + 8) + (long)(int)uVar2 * 2),
                   uVar15 < 3)) goto LAB_0289c3b8;
              }
            }
            goto LAB_0289c3b4;
          }
        }
LAB_0289c3b8:
        if (uVar15 == param_2) {
          if (iVar10 == param_3) {
            if (*puVar8 == 0) {
              return 0;
            }
            cVar11 = *PTR_DAT_04bc38a8;
            while( true ) {
              if (cVar11 == '\0') {
                cVar11 = '\x01';
                *(undefined8 *)puVar5 = 0xffffffffffffffff;
                *(undefined8 *)(puVar5 + 8) = 0xffffffffffffffff;
                *puVar4 = 1;
                *(undefined8 *)(puVar5 + 0x20) = 0xffffffffffffffff;
                *(undefined4 *)(puVar5 + 0x28) = 0xffffffff;
                *(undefined8 *)(puVar5 + 0x10) = 0xffffffffffffffff;
                *(undefined8 *)(puVar5 + 0x18) = 0xffffffffffffffff;
              }
              else {
                uVar3 = *(uint *)(puVar5 + 0x28);
                if (-1 < (int)uVar3) {
                  if ((ushort *)((ulong)uVar3 + (long)puVar8) == (ushort *)0x0) {
                    return 0;
                  }
                  return (ulong)*(ushort *)((ulong)uVar3 + (long)puVar8);
                }
                if (uVar3 != 0xffffffff) {
                  return 0;
                }
              }
              puVar13 = (uint *)(ulong)*puVar8;
              if (*puVar8 == 0) {
                return 0;
              }
              if (puVar8 == puVar13) break;
              lVar6 = 0xc;
              if (*(char *)((long)puVar8 + (10 - (long)puVar13)) != '\0') {
                lVar6 = 0x1c;
              }
              lVar6 = (long)puVar8 + (lVar6 - (long)puVar13);
              if (lVar6 == 0) {
                return 0;
              }
              uVar14 = (ulong)*(ushort *)((long)puVar8 + (8 - (long)puVar13));
              *(undefined4 *)(puVar5 + 0x28) = 0xfffffffe;
              if (uVar14 == 0) {
                return 0;
              }
              piVar16 = (int *)(lVar6 + 4);
              while (piVar16[-1] != 0x54706054) {
                piVar16 = piVar16 + 2;
                uVar14 = uVar14 - 1;
                if (uVar14 == 0) {
                  return 0;
                }
              }
              iVar10 = 0;
              if (*piVar16 != -1) {
                iVar10 = *piVar16;
              }
              *(int *)(puVar5 + 0x28) = iVar10;
              if (*puVar8 == 0) {
                return 0;
              }
            }
            return 0;
          }
          iVar10 = iVar10 + 1;
        }
      }
    }
    uVar9 = uVar9 + 1;
    if (uVar7 == uVar9) {
      return 0xffffffff;
    }
  } while( true );
}

