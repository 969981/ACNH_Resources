
void FUN_020fcca0(long param_1,uint param_2)

{
  undefined *puVar1;
  long lVar2;
  uint uVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  ulong uVar7;
  uint *puVar8;
  char cVar9;
  uint uVar10;
  int iVar11;
  long lVar12;
  uint *puVar13;
  int *piVar14;
  long lVar15;
  uint uVar16;
  uint uVar17;
  undefined *local_80;
  long lStack_78;
  uint local_6c;
  uint local_68;
  uint local_64;
  
  puVar6 = PTR_DAT_04bb6a50;
  puVar5 = PTR_DAT_04bb40b8;
  lVar15 = *(long *)PTR_DAT_04bb4138;
  if ((lVar15 != 0) &&
     ((uVar16 = *(uint *)(lVar15 + 0x1c0), 0 < (int)uVar16 ||
      (((*(long *)(lVar15 + 0xb0) != 0 &&
        (puVar8 = *(uint **)(*(long *)(lVar15 + 0xb0) + 8), puVar8 != (uint *)0x0)) &&
       (uVar16 = *puVar8, uVar16 != 0)))))) {
    uVar17 = 0;
    puVar1 = PTR_DAT_04bb2020 + 0x10;
    local_64 = param_2;
    do {
      if ((int)*(uint *)(lVar15 + 0x1c0) < 1) {
        if (((((*(long *)(lVar15 + 0xb0) != 0) &&
              (puVar8 = *(uint **)(*(long *)(lVar15 + 0xb0) + 8), puVar8 != (uint *)0x0)) &&
             ((*(uint *)(lVar15 + 200) <= uVar17 ||
              (*(char *)(*(long *)(lVar15 + 0xd0) + (long)(int)uVar17) != '\0')))) &&
            ((uVar17 < *puVar8 && (puVar8[1] != 0)))) && ((ushort)puVar8[2] != 0)) {
          iVar11 = 0xc;
          if (*(char *)((long)puVar8 + 10) != '\0') {
            iVar11 = 0x1c;
          }
          puVar8 = (uint *)((ulong)(puVar8[1] * uVar17 + (uint)(ushort)puVar8[2] * 8 + iVar11) +
                           (long)puVar8);
          goto joined_r0x020fcf34;
        }
      }
      else if (uVar17 < *(uint *)(lVar15 + 0x1c0)) {
        uVar10 = uVar17;
        if (*(uint *)(lVar15 + 0x1b0) <= uVar17) {
          uVar10 = 0;
        }
        puVar8 = *(uint **)(*(long *)(lVar15 + 0x1b8) + (ulong)uVar10 * 8);
joined_r0x020fcf34:
        if (puVar8 != (uint *)0x0) {
          uVar10 = *puVar8;
          if (uVar10 == 0 || puVar8 == (uint *)(ulong)uVar10) {
LAB_020fcd68:
            uVar10 = 0;
          }
          else {
            puVar13 = (uint *)((long)puVar8 - (long)(ulong)uVar10);
            uVar10 = 0;
            if (*puVar13 != 0) {
              uVar10 = puVar13[1];
              if ((uVar10 != 0) && ((ulong)(ushort)puVar13[2] != 0)) {
                lVar12 = 0xc;
                if (*(char *)((long)puVar13 + 10) != '\0') {
                  lVar12 = 0x1c;
                }
                lVar12 = (long)puVar13 + lVar12 + (ulong)(ushort)puVar13[2] * 8;
                if (lVar12 != 0) {
                  uVar3 = 0;
                  if ((ulong)uVar10 != 0) {
                    uVar3 = (uint)((ulong)((long)puVar8 - lVar12) / (ulong)uVar10);
                  }
                  if (*puVar13 <= uVar3) {
                    uVar3 = 0xffffffff;
                  }
                  if ((uVar3 < *(uint *)puVar6) &&
                     (uVar10 = (uint)*(ushort *)(*(long *)(puVar6 + 8) + (long)(int)uVar3 * 2),
                     uVar10 < 8)) goto LAB_020fcd6c;
                }
              }
              goto LAB_020fcd68;
            }
          }
LAB_020fcd6c:
          if (uVar10 == local_64) {
            local_68 = 0;
            if (*puVar8 != 0) {
              cVar9 = *PTR_DAT_04bb40b0;
              do {
                puVar4 = PTR_DAT_04bb40b0;
                if (cVar9 == '\0') {
                  cVar9 = '\x01';
                  *(undefined8 *)puVar5 = 0xffffffffffffffff;
                  *(undefined8 *)(puVar5 + 8) = 0xffffffffffffffff;
                  *(undefined4 *)(puVar5 + 0xa0) = 0xffffffff;
                  *puVar4 = 1;
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
                }
                else {
                  uVar10 = *(uint *)(puVar5 + 0x80);
                  if (-1 < (int)uVar10) {
                    lVar12 = (ulong)uVar10 + (long)puVar8;
                    goto LAB_020fce6c;
                  }
                  if (uVar10 != 0xffffffff) break;
                }
                puVar13 = (uint *)(ulong)*puVar8;
                lVar12 = 0;
                if ((*puVar8 == 0) || (puVar8 == puVar13)) goto LAB_020fce6c;
                lVar12 = 0xc;
                if (*(char *)((long)puVar8 + (10 - (long)puVar13)) != '\0') {
                  lVar12 = 0x1c;
                }
                lVar2 = (long)puVar8 + (lVar12 - (long)puVar13);
                if (lVar2 == 0) break;
                uVar7 = (ulong)*(ushort *)((long)puVar8 + (8 - (long)puVar13));
                *(undefined4 *)(puVar5 + 0x80) = 0xfffffffe;
                lVar12 = 0;
                if (uVar7 == 0) goto LAB_020fce6c;
                piVar14 = (int *)(lVar2 + 4);
                while (piVar14[-1] != 0x2f1b930d) {
                  piVar14 = piVar14 + 2;
                  uVar7 = uVar7 - 1;
                  if (uVar7 == 0) {
                    lVar12 = 0;
                    goto LAB_020fce6c;
                  }
                }
                iVar11 = 0;
                if (*piVar14 != -1) {
                  iVar11 = *piVar14;
                }
                *(int *)(puVar5 + 0x80) = iVar11;
              } while (*puVar8 != 0);
            }
            lVar12 = 0;
LAB_020fce6c:
            lStack_78 = *(long *)PTR_PTR_04bc1178;
            if (lVar12 != 0) {
              lStack_78 = lVar12;
            }
            local_80 = puVar1;
            uVar7 = FUN_020fc100(&local_68,&local_6c,&local_80);
            if (((uVar7 & 1) != 0) && (uVar7 = (ulong)local_68, local_6c < 0x20)) {
              if (0x22 < local_68) {
                uVar7 = 0;
              }
              *(uint *)(param_1 + uVar7 * 4) =
                   *(uint *)(param_1 + uVar7 * 4) & (1 << (ulong)(local_6c & 0x1f) ^ 0xffffffffU);
            }
          }
        }
      }
      uVar17 = uVar17 + 1;
    } while (uVar17 != uVar16);
  }
  return;
}

