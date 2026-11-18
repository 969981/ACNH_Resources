
/* WARNING: Removing unreachable block (ram,0x0377e9b4) */

void FUN_0377e950(uint param_1,long param_2)

{
  undefined *puVar1;
  int iVar2;
  ushort uVar3;
  undefined *puVar4;
  undefined4 uVar5;
  undefined8 *puVar6;
  ulong uVar7;
  uint *puVar8;
  char cVar9;
  uint uVar10;
  int iVar11;
  long lVar12;
  long lVar13;
  undefined *puVar14;
  long lVar15;
  uint *puVar16;
  ulong uVar17;
  long lVar18;
  undefined1 *puVar19;
  int *piVar20;
  undefined1 *puVar21;
  long lVar22;
  ulong uVar23;
  long lVar24;
  undefined *local_88;
  undefined1 *local_80;
  undefined4 local_78;
  undefined1 local_74 [7];
  undefined1 local_6d;
  uint local_68;
  uint local_64;
  
  **(undefined1 **)(param_2 + 0x28) = 0;
  **(undefined1 **)(param_2 + 0x48) = 0;
  lVar12 = *(long *)PTR_DAT_04bb46b0;
  lVar13 = 0;
  local_64 = param_1;
  if (lVar12 != 0) {
    local_88 = (undefined *)CONCAT44(local_88._4_4_,1);
    if (((*(byte *)(lVar12 + 0x50d) ^ 0xff) & 6) == 0) {
      lVar12 = (**(code **)(**(long **)(*(long *)(lVar12 + 0x10) + 0x188) + 0x38))();
    }
    else {
      lVar12 = 0;
    }
    lVar13 = 0;
    if (lVar12 != 0) {
      lVar13 = lVar12 + 0xa8;
    }
  }
  puVar4 = PTR_DAT_04bc11f0;
  lVar12 = *(long *)PTR_DAT_04bb4960;
  if (lVar12 == 0) {
    return;
  }
  uVar23 = 0;
  lVar24 = 0;
  puVar1 = PTR_DAT_04bb3768 + 0x10;
LAB_0377ea50:
  lVar22 = lVar13 + 0x498 + uVar23 * 0x16c0;
  if ((*(long **)(lVar22 + 0x28) == (long *)0x0) ||
     (puVar6 = (undefined8 *)**(long **)(lVar22 + 0x28), puVar6 == (undefined8 *)0x0)) {
    uVar7 = 0;
  }
  else {
    uVar7 = (**(code **)*puVar6)();
    uVar7 = uVar7 & 0xffffffff;
  }
  lVar18 = *(long *)(lVar22 + 0x10) + *(long *)(lVar22 + 8);
  uVar10 = (uint)*(byte *)(lVar18 + 2);
  local_88 = (undefined *)CONCAT44(local_88._4_4_,uVar10);
  if (uVar10 == local_64) {
    local_68 = (uint)*(ushort *)(lVar18 + 6);
    if (0x14 < local_68) {
      local_68 = 0;
    }
    if (local_68 < 0x15) {
      uVar5 = FUN_006bd550(*(undefined8 *)(PTR_DAT_04bc2558 + (ulong)(ushort)local_68 * 8 + 0x150),0
                          );
      local_88 = (undefined *)CONCAT44(local_88._4_4_,uVar5);
      puVar8 = (uint *)FUN_036c67d0(lVar12 + 0x800,&local_88);
      if (puVar8 != (uint *)0x0) {
        if (*puVar8 != 0) {
          cVar9 = *PTR_DAT_04bc11e8;
          do {
            puVar14 = PTR_DAT_04bc11e8;
            if (cVar9 == '\0') {
              cVar9 = '\x01';
              *(undefined8 *)puVar4 = 0xffffffffffffffff;
              *(undefined8 *)(puVar4 + 8) = 0xffffffffffffffff;
              *puVar14 = 1;
              *(undefined8 *)(puVar4 + 0x10) = 0xffffffffffffffff;
              *(undefined8 *)(puVar4 + 0x18) = 0xffffffffffffffff;
              *(undefined8 *)(puVar4 + 0x20) = 0xffffffffffffffff;
              *(undefined8 *)(puVar4 + 0x28) = 0xffffffffffffffff;
              *(undefined8 *)(puVar4 + 0x30) = 0xffffffffffffffff;
              *(undefined8 *)(puVar4 + 0x38) = 0xffffffffffffffff;
              *(undefined8 *)(puVar4 + 0x40) = 0xffffffffffffffff;
              *(undefined8 *)(puVar4 + 0x48) = 0xffffffffffffffff;
              *(undefined8 *)(puVar4 + 0x50) = 0xffffffffffffffff;
              *(undefined8 *)(puVar4 + 0x58) = 0xffffffffffffffff;
              *(undefined8 *)(puVar4 + 0x60) = 0xffffffffffffffff;
              *(undefined8 *)(puVar4 + 0x68) = 0xffffffffffffffff;
              *(undefined8 *)(puVar4 + 0x70) = 0xffffffffffffffff;
              *(undefined8 *)(puVar4 + 0x78) = 0xffffffffffffffff;
              uVar10 = *puVar8;
            }
            else {
              uVar10 = *(uint *)(puVar4 + 0x7c);
              if (-1 < (int)uVar10) {
                if ((char *)((ulong)uVar10 + (long)puVar8) == (char *)0x0) break;
                if (*(char *)((ulong)uVar10 + (long)puVar8) == '\0') break;
                local_6d = 0;
                local_74[0] = 0;
                local_78 = 8;
                lVar18 = *(long *)PTR_DAT_04bb4958;
                local_88 = puVar1;
                local_80 = local_74;
                if ((lVar18 == 0) ||
                   (uVar17 = (ulong)*(ushort *)(*(long *)(lVar22 + 0x10) + *(long *)(lVar22 + 8)),
                   499 < uVar17)) break;
                uVar3 = *(ushort *)(lVar18 + uVar17 * 2 + 0x620);
                if ((int)*(uint *)(lVar18 + 0x1c0) < 1) {
                  if ((((*(long *)(lVar18 + 0xb0) == 0) ||
                       (puVar8 = *(uint **)(*(long *)(lVar18 + 0xb0) + 8), puVar8 == (uint *)0x0))
                      || ((uVar10 = (uint)uVar3, uVar10 < *(uint *)(lVar18 + 200) &&
                          (*(char *)(*(long *)(lVar18 + 0xd0) + (ulong)uVar10) == '\0')))) ||
                     (((*puVar8 <= uVar10 || (puVar8[1] == 0)) || ((ushort)puVar8[2] == 0)))) break;
                  iVar11 = 0xc;
                  if (*(char *)((long)puVar8 + 10) != '\0') {
                    iVar11 = 0x1c;
                  }
                  puVar8 = (uint *)((ulong)(puVar8[1] * uVar10 + (uint)(ushort)puVar8[2] * 8 +
                                           iVar11) + (long)puVar8);
                }
                else {
                  if (*(uint *)(lVar18 + 0x1c0) <= (uint)uVar3) break;
                  uVar10 = (uint)uVar3;
                  if (*(uint *)(lVar18 + 0x1b0) <= uVar10) {
                    uVar10 = 0;
                  }
                  puVar8 = *(uint **)(*(long *)(lVar18 + 0x1b8) + (ulong)uVar10 * 8);
                }
                if (puVar8 != (uint *)0x0) {
                  if (*puVar8 == 0) goto LAB_0377ed54;
                  cVar9 = *PTR_DAT_04bc0670;
                  goto LAB_0377ec70;
                }
                break;
              }
              if (uVar10 != 0xffffffff) break;
              uVar10 = *puVar8;
            }
            if (uVar10 == 0) break;
            puVar16 = (uint *)(ulong)uVar10;
            if (puVar8 == puVar16) break;
            lVar18 = 0xc;
            if (*(char *)((long)puVar8 + (10 - (long)puVar16)) != '\0') {
              lVar18 = 0x1c;
            }
            lVar18 = (long)puVar8 + (lVar18 - (long)puVar16);
            if (lVar18 == 0) break;
            uVar17 = (ulong)*(ushort *)((long)puVar8 + (8 - (long)puVar16));
            *(undefined4 *)(puVar4 + 0x7c) = 0xfffffffe;
            if (uVar17 == 0) break;
            piVar20 = (int *)(lVar18 + 4);
            while (piVar20[-1] != 0x2409dcb4) {
              piVar20 = piVar20 + 2;
              uVar17 = uVar17 - 1;
              if (uVar17 == 0) goto LAB_0377ef30;
            }
            iVar11 = 0;
            if (*piVar20 != -1) {
              iVar11 = *piVar20;
            }
            *(int *)(puVar4 + 0x7c) = iVar11;
            if (*puVar8 == 0) break;
          } while( true );
        }
      }
    }
  }
  goto LAB_0377ef30;
  while( true ) {
    puVar16 = (uint *)(ulong)*puVar8;
    puVar21 = (undefined1 *)0x0;
    if ((*puVar8 == 0) || (puVar8 == puVar16)) goto LAB_0377ed58;
    lVar18 = 0xc;
    if (*(char *)((long)puVar8 + (10 - (long)puVar16)) != '\0') {
      lVar18 = 0x1c;
    }
    lVar18 = (long)puVar8 + (lVar18 - (long)puVar16);
    if (lVar18 == 0) break;
    uVar17 = (ulong)*(ushort *)((long)puVar8 + (8 - (long)puVar16));
    *(undefined4 *)(PTR_DAT_04bc0678 + 0x48) = 0xfffffffe;
    puVar21 = (undefined1 *)0x0;
    if (uVar17 == 0) goto LAB_0377ed58;
    piVar20 = (int *)(lVar18 + 4);
    while (piVar20[-1] != 0x34c8eed5) {
      piVar20 = piVar20 + 2;
      uVar17 = uVar17 - 1;
      if (uVar17 == 0) {
        puVar21 = (undefined1 *)0x0;
        goto LAB_0377ed58;
      }
    }
    iVar11 = 0;
    if (*piVar20 != -1) {
      iVar11 = *piVar20;
    }
    *(int *)(PTR_DAT_04bc0678 + 0x48) = iVar11;
    if (*puVar8 == 0) break;
LAB_0377ec70:
    if (cVar9 == '\0') {
      cVar9 = '\x01';
      *PTR_DAT_04bc0670 = 1;
      puVar14 = PTR_DAT_04bc0678;
      *(undefined8 *)PTR_DAT_04bc0678 = 0xffffffffffffffff;
      *(undefined8 *)(puVar14 + 8) = 0xffffffffffffffff;
      *(undefined4 *)(puVar14 + 0x50) = 0xffffffff;
      *(undefined8 *)(puVar14 + 0x10) = 0xffffffffffffffff;
      *(undefined8 *)(puVar14 + 0x18) = 0xffffffffffffffff;
      *(undefined8 *)(puVar14 + 0x20) = 0xffffffffffffffff;
      *(undefined8 *)(puVar14 + 0x28) = 0xffffffffffffffff;
      *(undefined8 *)(puVar14 + 0x30) = 0xffffffffffffffff;
      *(undefined8 *)(puVar14 + 0x38) = 0xffffffffffffffff;
      *(undefined8 *)(puVar14 + 0x40) = 0xffffffffffffffff;
      *(undefined8 *)(puVar14 + 0x48) = 0xffffffffffffffff;
    }
    else {
      uVar10 = *(uint *)(PTR_DAT_04bc0678 + 0x48);
      if (-1 < (int)uVar10) {
        puVar21 = (undefined1 *)((ulong)uVar10 + (long)puVar8);
        goto LAB_0377ed58;
      }
      if (uVar10 != 0xffffffff) break;
    }
  }
LAB_0377ed54:
  puVar21 = (undefined1 *)0x0;
LAB_0377ed58:
  puVar19 = *(undefined1 **)PTR_PTR_04bc0668;
  if (puVar21 != (undefined1 *)0x0) {
    puVar19 = puVar21;
  }
  if (local_74 == puVar19) {
    puVar14 = PTR_DAT_04bb3768 + 0x10;
  }
  else {
    lVar18 = 0;
    do {
      if (puVar19[lVar18] == '\0') {
LAB_0377ee40:
        iVar11 = (int)lVar18;
        if (7 < iVar11) {
          iVar11 = 7;
        }
        goto LAB_0377ee4c;
      }
      if (puVar19[lVar18 + 1] == '\0') {
        lVar18 = lVar18 + 1;
        goto LAB_0377ee40;
      }
      if (puVar19[lVar18 + 2] == '\0') {
        lVar18 = lVar18 + 2;
        goto LAB_0377ee40;
      }
      lVar18 = lVar18 + 3;
    } while (lVar18 != 0x80001);
    iVar11 = 0;
LAB_0377ee4c:
    memcpy(local_74,puVar19,(long)iVar11);
    local_74[iVar11] = 0;
    puVar14 = local_88;
  }
  lVar18 = param_2 + 0x20 + lVar24 * 0x20;
  puVar19 = *(undefined1 **)(lVar18 + 8);
  (**(code **)(puVar14 + 0x18))(&local_88);
  puVar21 = local_80;
  if (puVar19 != local_80) {
    (**(code **)(local_88 + 0x18))(&local_88);
    lVar15 = 0;
    do {
      if (local_80[lVar15] == '\0') goto LAB_0377ef00;
      if (local_80[lVar15 + 1] == '\0') {
        lVar15 = lVar15 + 1;
        goto LAB_0377ef00;
      }
      if (local_80[lVar15 + 2] == '\0') {
        lVar15 = lVar15 + 2;
        goto LAB_0377ef00;
      }
      lVar15 = lVar15 + 3;
    } while (lVar15 != 0x80001);
    lVar15 = 0;
LAB_0377ef00:
    iVar2 = *(int *)(lVar18 + 0x10);
    iVar11 = (int)lVar15;
    if (iVar2 <= (int)lVar15) {
      iVar11 = iVar2 + -1;
    }
    memcpy(puVar19,puVar21,(long)iVar11);
    puVar19[iVar11] = 0;
  }
  lVar24 = lVar24 + 1;
LAB_0377ef30:
  if ((((uVar7 & 1) != 0) && (*(long *)(lVar22 + 0x28) != 0)) &&
     (puVar6 = *(undefined8 **)(*(long *)(lVar22 + 0x28) + 8), puVar6 != (undefined8 *)0x0)) {
    (**(code **)*puVar6)();
  }
  if (0x24 < uVar23) {
    return;
  }
  uVar23 = uVar23 + 1;
  if (1 < (int)lVar24) {
    return;
  }
  goto LAB_0377ea50;
}

