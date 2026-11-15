
void FUN_02210750(long param_1,long param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  byte bVar4;
  byte bVar5;
  undefined1 uVar6;
  ushort uVar7;
  uint uVar8;
  uint *puVar9;
  char cVar10;
  int iVar11;
  long lVar12;
  uint *puVar13;
  int *piVar14;
  byte bVar15;
  byte bVar16;
  uint uVar17;
  uint uVar18;
  ulong uVar19;
  undefined *local_88;
  undefined1 *puStack_80;
  undefined4 local_78;
  undefined1 local_74 [7];
  undefined1 local_6d;
  undefined2 local_68;
  undefined1 local_66;
  uint local_64;
  
  puVar3 = PTR_DAT_04bc27f0;
  bVar15 = 0;
  puVar1 = PTR_DAT_04bb3768 + 0x10;
  uVar18 = 0;
  do {
    uVar17 = 0;
    local_64 = uVar18;
    do {
      lVar12 = param_2 + (ulong)local_64 * 4;
      if (0x22 < local_64) {
        lVar12 = param_2;
      }
      if ((*(uint *)(lVar12 + (ulong)(uVar17 >> 5) * 4) >> (ulong)(uVar17 & 0x1f) & 1) != 0) {
        local_68 = 0x23;
        local_66 = 8;
        FUN_020fd218(&local_68,(ulong)local_64,uVar17);
        bVar4 = (byte)local_68;
        uVar19 = (ulong)(byte)local_68;
        if (((uVar19 < 0x23) && (bVar5 = local_68._1_1_, local_68._1_1_ <= (byte)puVar3[uVar19])) &&
           (uVar8 = (uint)local_68._1_1_,
           (*(uint *)(PTR_DAT_04bc2a20 + uVar19 * 4) >> (ulong)(uVar8 & 0x1f) & 1) != 0)) {
          local_78 = 8;
          local_6d = 0;
          local_74[0] = 0;
          local_88 = puVar1;
          puStack_80 = local_74;
          FUN_038d1270(&local_88,"-----");
          FUN_038d1270(&local_88,"%s%02d",*(undefined8 *)(PTR_DAT_04bb9e38 + uVar19 * 8 + 0xb0),
                       uVar8);
          uVar7 = FUN_0376baa0(&local_88);
          if (uVar7 < 500) {
            lVar12 = *(long *)PTR_DAT_04bb4958;
            uVar7 = *(ushort *)(lVar12 + (ulong)uVar7 * 2 + 0x620);
            if ((int)*(uint *)(lVar12 + 0x1c0) < 1) {
              if (((((*(long *)(lVar12 + 0xb0) != 0) &&
                    (puVar9 = *(uint **)(*(long *)(lVar12 + 0xb0) + 8), puVar9 != (uint *)0x0)) &&
                   ((uVar8 = (uint)uVar7, *(uint *)(lVar12 + 200) <= uVar8 ||
                    (*(char *)(*(long *)(lVar12 + 0xd0) + (ulong)uVar8) != '\0')))) &&
                  ((uVar8 < *puVar9 && (puVar9[1] != 0)))) && ((ushort)puVar9[2] != 0)) {
                iVar11 = 0xc;
                if (*(char *)((long)puVar9 + 10) != '\0') {
                  iVar11 = 0x1c;
                }
                puVar9 = (uint *)((ulong)(puVar9[1] * uVar8 + (uint)(ushort)puVar9[2] * 8 + iVar11)
                                 + (long)puVar9);
                goto joined_r0x02210a60;
              }
            }
            else if ((uint)uVar7 < *(uint *)(lVar12 + 0x1c0)) {
              uVar8 = (uint)uVar7;
              if (*(uint *)(lVar12 + 0x1b0) <= uVar8) {
                uVar8 = 0;
              }
              puVar9 = *(uint **)(*(long *)(lVar12 + 0x1b8) + (ulong)uVar8 * 8);
joined_r0x02210a60:
              if ((puVar9 != (uint *)0x0) && (*puVar9 != 0)) {
                cVar10 = *PTR_DAT_04bc0670;
                do {
                  if (cVar10 == '\0') {
                    cVar10 = '\x01';
                    *PTR_DAT_04bc0670 = 1;
                    puVar2 = PTR_DAT_04bc0678;
                    *(undefined8 *)PTR_DAT_04bc0678 = 0xffffffffffffffff;
                    *(undefined8 *)(puVar2 + 8) = 0xffffffffffffffff;
                    *(undefined8 *)(puVar2 + 0x10) = 0xffffffffffffffff;
                    *(undefined8 *)(puVar2 + 0x18) = 0xffffffffffffffff;
                    *(undefined4 *)(puVar2 + 0x50) = 0xffffffff;
                    *(undefined8 *)(puVar2 + 0x20) = 0xffffffffffffffff;
                    *(undefined8 *)(puVar2 + 0x28) = 0xffffffffffffffff;
                    *(undefined8 *)(puVar2 + 0x30) = 0xffffffffffffffff;
                    *(undefined8 *)(puVar2 + 0x38) = 0xffffffffffffffff;
                    *(undefined8 *)(puVar2 + 0x40) = 0xffffffffffffffff;
                    *(undefined8 *)(puVar2 + 0x48) = 0xffffffffffffffff;
                  }
                  else {
                    uVar8 = *(uint *)(PTR_DAT_04bc0678 + 0x4c);
                    if (-1 < (int)uVar8) {
                      if ((byte *)((ulong)uVar8 + (long)puVar9) != (byte *)0x0) {
                        bVar16 = *(byte *)((ulong)uVar8 + (long)puVar9);
                        if (bVar15 <= bVar16) goto LAB_02210a98;
                        goto LAB_022107d0;
                      }
                      break;
                    }
                    if (uVar8 != 0xffffffff) break;
                  }
                  puVar13 = (uint *)(ulong)*puVar9;
                  if ((*puVar9 == 0) || (puVar9 == puVar13)) break;
                  lVar12 = 0xc;
                  if (*(char *)((long)puVar9 + (10 - (long)puVar13)) != '\0') {
                    lVar12 = 0x1c;
                  }
                  lVar12 = (long)puVar9 + (lVar12 - (long)puVar13);
                  if (lVar12 == 0) break;
                  uVar19 = (ulong)*(ushort *)((long)puVar9 + (8 - (long)puVar13));
                  *(undefined4 *)(PTR_DAT_04bc0678 + 0x4c) = 0xfffffffe;
                  if (uVar19 == 0) break;
                  piVar14 = (int *)(lVar12 + 4);
                  while (piVar14[-1] != 0x14e0f9c1) {
                    piVar14 = piVar14 + 2;
                    uVar19 = uVar19 - 1;
                    if (uVar19 == 0) goto joined_r0x02210a94;
                  }
                  iVar11 = 0;
                  if (*piVar14 != -1) {
                    iVar11 = *piVar14;
                  }
                  *(int *)(PTR_DAT_04bc0678 + 0x4c) = iVar11;
                  if (*puVar9 == 0) break;
                } while( true );
              }
            }
          }
joined_r0x02210a94:
          bVar16 = 0;
          if (bVar15 == 0) {
LAB_02210a98:
            *(byte *)(param_1 + 0x2d) = bVar4;
            *(byte *)(param_1 + 0x2e) = bVar5;
            uVar6 = FUN_020fd7d8(&local_68);
            *(undefined1 *)(param_1 + 0x2f) = uVar6;
            bVar15 = bVar16;
          }
        }
      }
LAB_022107d0:
      uVar17 = uVar17 + 1;
    } while (uVar17 != 0x20);
    uVar17 = 0x23;
    if ((int)uVar18 < 0x23) {
      uVar17 = uVar18 + 1;
    }
    uVar18 = uVar17;
    if (uVar17 == 0x23) {
      return;
    }
  } while( true );
}

