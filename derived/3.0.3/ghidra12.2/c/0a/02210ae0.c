
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool FUN_02210ae0(long param_1,byte *param_2,long param_3,uint *param_4,undefined4 param_5)

{
  undefined *puVar1;
  long lVar2;
  bool bVar3;
  byte bVar4;
  byte bVar5;
  byte bVar6;
  ushort uVar7;
  uint uVar8;
  uint uVar9;
  ulong uVar10;
  uint *puVar11;
  char cVar12;
  int iVar13;
  uint *puVar14;
  byte bVar15;
  int *piVar16;
  int iVar17;
  uint uVar18;
  uint uVar19;
  undefined *local_88;
  undefined1 *puStack_80;
  undefined4 local_78;
  undefined1 local_74 [7];
  undefined1 local_6d;
  undefined2 local_68;
  undefined1 local_66;
  uint local_64;
  
  bVar6 = 0;
  bVar3 = false;
  puVar1 = PTR_DAT_04bb3768 + 0x10;
  uVar19 = 0;
LAB_02210b60:
  uVar18 = 0;
  iVar17 = 2;
  local_64 = uVar19;
LAB_02210b8c:
  uVar10 = (ulong)local_64;
  if (0x22 < local_64) {
    uVar10 = 0;
  }
  uVar8 = *(uint *)(param_3 + uVar10 * 4);
  uVar9 = uVar8 - (uVar8 >> 1 & 0x55555555);
  uVar9 = (uVar9 >> 2 & 0x33333333) + (uVar9 & 0x33333333);
  uVar9 = uVar9 + (uVar9 >> 4) & 0xf0f0f0f;
  uVar9 = uVar9 + (uVar9 >> 8);
  if ((uVar18 < (uVar9 + (uVar9 >> 0x10) & 0x3f)) && (uVar8 != 0)) {
    iVar13 = iVar17;
    do {
      iVar13 = iVar13 + -1;
      if (iVar13 < 2) {
        local_68 = 0x23;
        uVar9 = uVar8 - 1 & (uVar8 ^ 0xffffffff);
        local_66 = 8;
        uVar10 = (ulong)local_64;
        uVar9 = uVar9 - (uVar9 >> 1 & 0x55555555);
        uVar9 = (uVar9 >> 2 & 0x33333333) + (uVar9 & 0x33333333);
        uVar9 = uVar9 + (uVar9 >> 4) & 0xf0f0f0f;
        uVar9 = uVar9 + (uVar9 >> 8);
        uVar9 = uVar9 + (uVar9 >> 0x10);
        if (0x1f < (uVar9 & 0x3f)) break;
        if (0x22 < local_64) {
          uVar10 = 0;
        }
        if ((*(uint *)(param_3 + uVar10 * 4) >> (ulong)(uVar9 & 0x1f) & 1) == 0) break;
        FUN_020fd218(&local_68);
        bVar4 = (byte)local_68;
        uVar10 = (ulong)(byte)local_68;
        if (((0x22 < uVar10) ||
            (bVar5 = local_68._1_1_, (byte)PTR_DAT_04bc27f0[uVar10] < local_68._1_1_)) ||
           (uVar9 = (uint)local_68._1_1_,
           ((uint)(&DAT_053e6eb8)[uVar10] >> (ulong)(uVar9 & 0x1f) & 1) == 0)) break;
        local_78 = 8;
        local_6d = 0;
        local_74[0] = 0;
        local_88 = puVar1;
        puStack_80 = local_74;
        FUN_038d1270(&local_88,"-----");
        FUN_038d1270(&local_88,"%s%02d",*(undefined8 *)(PTR_DAT_04bb9e38 + uVar10 * 8 + 0xb0),uVar9)
        ;
        uVar7 = FUN_0376baa0(&local_88);
        if (499 < uVar7) break;
        uVar7 = *(ushort *)(DAT_05aba420 + (ulong)uVar7 * 2 + 0x620);
        if ((int)*(uint *)(DAT_05aba420 + 0x1c0) < 1) {
          if (((((*(long *)(DAT_05aba420 + 0xb0) == 0) ||
                (puVar11 = *(uint **)(*(long *)(DAT_05aba420 + 0xb0) + 8), puVar11 == (uint *)0x0))
               || ((uVar9 = (uint)uVar7, uVar9 < *(uint *)(DAT_05aba420 + 200) &&
                   (*(char *)(*(long *)(DAT_05aba420 + 0xd0) + (ulong)uVar9) == '\0')))) ||
              ((*puVar11 <= uVar9 || (puVar11[1] == 0)))) || ((ushort)puVar11[2] == 0)) break;
          iVar13 = 0xc;
          if (*(char *)((long)puVar11 + 10) != '\0') {
            iVar13 = 0x1c;
          }
          puVar11 = (uint *)((ulong)(puVar11[1] * uVar9 + (uint)(ushort)puVar11[2] * 8 + iVar13) +
                            (long)puVar11);
        }
        else {
          if (*(uint *)(DAT_05aba420 + 0x1c0) <= (uint)uVar7) break;
          uVar9 = (uint)uVar7;
          if (*(uint *)(DAT_05aba420 + 0x1b0) <= uVar9) {
            uVar9 = 0;
          }
          puVar11 = *(uint **)(*(long *)(DAT_05aba420 + 0x1b8) + (ulong)uVar9 * 8);
        }
        if (puVar11 != (uint *)0x0) {
          uVar9 = *param_4;
          if (*puVar11 == 0) goto LAB_02210ecc;
          cVar12 = DAT_053360b0;
          goto LAB_02210d48;
        }
        break;
      }
      uVar8 = uVar8 - 1 & uVar8;
    } while (uVar8 != 0);
  }
  goto LAB_02210b7c;
  while( true ) {
    puVar14 = (uint *)(ulong)*puVar11;
    uVar8 = 0;
    if ((*puVar11 == 0) || (puVar11 == puVar14)) goto LAB_02210ed0;
    lVar2 = 0xc;
    if (*(char *)((long)puVar11 + (10 - (long)puVar14)) != '\0') {
      lVar2 = 0x1c;
    }
    lVar2 = (long)puVar11 + (lVar2 - (long)puVar14);
    if (lVar2 == 0) goto LAB_02210ecc;
    uVar10 = (ulong)*(ushort *)((long)puVar11 + (8 - (long)puVar14));
    *(undefined4 *)(PTR_DAT_04bc0678 + 0x50) = 0xfffffffe;
    uVar8 = 0;
    if (uVar10 == 0) goto LAB_02210ed0;
    piVar16 = (int *)(lVar2 + 4);
    while (piVar16[-1] != -0x1bbe4e6d) {
      piVar16 = piVar16 + 2;
      uVar10 = uVar10 - 1;
      if (uVar10 == 0) {
        uVar8 = 0;
        goto LAB_02210ed0;
      }
    }
    iVar13 = 0;
    if (*piVar16 != -1) {
      iVar13 = *piVar16;
    }
    *(int *)(PTR_DAT_04bc0678 + 0x50) = iVar13;
    if (*puVar11 == 0) break;
LAB_02210d48:
    if (cVar12 == '\0') {
      cVar12 = '\x01';
      *PTR_DAT_04bc0670 = 1;
      DAT_053360b4 = 0xffffffffffffffff;
      DAT_053360bc = 0xffffffffffffffff;
      DAT_053360c4 = 0xffffffffffffffff;
      DAT_053360cc = 0xffffffffffffffff;
      DAT_05336104 = 0xffffffff;
      DAT_053360d4 = 0xffffffffffffffff;
      DAT_053360dc = 0xffffffffffffffff;
      DAT_053360e4 = 0xffffffffffffffff;
      DAT_053360ec = 0xffffffffffffffff;
      DAT_053360f4 = 0xffffffffffffffff;
      _DAT_053360fc = -1;
    }
    else {
      if (-1 < (int)DAT_05336104) {
        if (((byte *)((ulong)DAT_05336104 + (long)puVar11) == (byte *)0x0) ||
           (bVar15 = *(byte *)((ulong)DAT_05336104 + (long)puVar11), uVar8 = (uint)bVar15,
           10 < bVar15)) {
LAB_02210ecc:
          uVar8 = 0;
        }
        goto LAB_02210ed0;
      }
      if (DAT_05336104 != 0xffffffff) goto LAB_02210ecc;
    }
  }
  uVar8 = 0;
LAB_02210ed0:
  if (uVar9 == uVar8) {
    if (*puVar11 != 0) {
      cVar12 = DAT_053360b0;
      do {
        if (cVar12 == '\0') {
          cVar12 = '\x01';
          *PTR_DAT_04bc0670 = 1;
          DAT_053360b4 = 0xffffffffffffffff;
          DAT_053360bc = 0xffffffffffffffff;
          DAT_053360c4 = 0xffffffffffffffff;
          DAT_053360cc = 0xffffffffffffffff;
          DAT_05336104 = 0xffffffff;
          DAT_053360d4 = 0xffffffffffffffff;
          DAT_053360dc = 0xffffffffffffffff;
          DAT_053360e4 = 0xffffffffffffffff;
          DAT_053360ec = 0xffffffffffffffff;
          DAT_053360f4 = 0xffffffffffffffff;
          _DAT_053360fc = -1;
        }
        else {
          if (-1 < _DAT_053360fc) {
            if ((byte *)((ulong)_DAT_05336100 + (long)puVar11) != (byte *)0x0) {
              bVar15 = *(byte *)((ulong)_DAT_05336100 + (long)puVar11);
              goto LAB_02210ffc;
            }
            break;
          }
          if (_DAT_05336100 != 0xffffffff) break;
        }
        puVar14 = (uint *)(ulong)*puVar11;
        bVar15 = 0;
        if ((*puVar11 == 0) || (puVar11 == puVar14)) goto LAB_02210ffc;
        lVar2 = 0xc;
        if (*(char *)((long)puVar11 + (10 - (long)puVar14)) != '\0') {
          lVar2 = 0x1c;
        }
        lVar2 = (long)puVar11 + (lVar2 - (long)puVar14);
        bVar15 = 0;
        if (lVar2 == 0) goto LAB_02210ffc;
        uVar10 = (ulong)*(ushort *)((long)puVar11 + (8 - (long)puVar14));
        *(undefined4 *)(PTR_DAT_04bc0678 + 0x4c) = 0xfffffffe;
        if (uVar10 == 0) break;
        piVar16 = (int *)(lVar2 + 4);
        while (piVar16[-1] != 0x14e0f9c1) {
          piVar16 = piVar16 + 2;
          uVar10 = uVar10 - 1;
          if (uVar10 == 0) goto LAB_02210ff8;
        }
        iVar13 = 0;
        if (*piVar16 != -1) {
          iVar13 = *piVar16;
        }
        *(int *)(PTR_DAT_04bc0678 + 0x4c) = iVar13;
        if (*puVar11 == 0) break;
      } while( true );
    }
LAB_02210ff8:
    bVar15 = 0;
LAB_02210ffc:
    if (bVar6 <= bVar15) {
      *param_2 = bVar4;
      param_2[1] = bVar5;
      bVar6 = FUN_020fd7d8(&local_68);
      param_2[2] = bVar6;
      bVar3 = true;
      bVar6 = bVar15;
    }
  }
LAB_02210b7c:
  uVar18 = uVar18 + 1;
  iVar17 = iVar17 + 1;
  if (uVar18 == 0x20) goto LAB_02210b50;
  goto LAB_02210b8c;
LAB_02210b50:
  uVar18 = 0x23;
  if ((int)uVar19 < 0x23) {
    uVar18 = uVar19 + 1;
  }
  uVar19 = uVar18;
  if (uVar18 == 0x23) {
    if (bVar3) {
      *(byte *)(param_1 + 0x1e4) = *(byte *)(param_1 + 0x1e4) | 4;
      *(undefined4 *)(param_1 + 0x1e0) = param_5;
    }
    return bVar3;
  }
  goto LAB_02210b60;
}

