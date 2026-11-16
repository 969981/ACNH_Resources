
undefined8 FUN_0253aa40(long param_1,long param_2)

{
  int iVar1;
  uint *puVar2;
  undefined8 uVar3;
  undefined4 uVar4;
  byte bVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  bool bVar9;
  ulong uVar10;
  int *piVar11;
  uint uVar12;
  long lVar13;
  int iVar14;
  long lVar15;
  byte *pbVar16;
  int iVar17;
  int iVar18;
  undefined8 *puVar19;
  int iVar20;
  undefined8 uVar21;
  uint uVar22;
  uint uVar23;
  undefined8 uVar24;
  ulong uVar25;
  float fVar26;
  float fVar27;
  byte local_88 [4];
  undefined4 local_84;
  undefined2 local_80;
  byte local_7c [4];
  undefined4 local_78;
  undefined2 local_74;
  
  FUN_02507c6c(local_7c,7,1,0,0);
  puVar8 = PTR_DAT_04bc31b8;
  puVar7 = PTR_DAT_04bc31b0;
  puVar6 = PTR_DAT_04bb5038;
  uVar12 = (uint)local_7c[0];
  local_84 = local_78;
  local_88[0] = 0xff;
  if (local_7c[0] < 8) {
    local_88[0] = local_7c[0];
  }
  local_80 = local_74;
  if (local_7c[0] < 8) {
    iVar14 = *(int *)(param_1 + 0x23b0);
    do {
      if (iVar14 != 0) {
        iVar17 = *(int *)(param_1 + 0x23ac);
        do {
          iVar18 = 0;
          if (*(int *)(param_1 + 0x23a8) <= iVar17) {
            iVar18 = *(int *)(param_1 + 0x23a8);
          }
          bVar5 = *(byte *)(*(long *)(param_1 + 0x23a0) + (long)(iVar17 - iVar18));
          if (bVar5 < 8 && bVar5 == uVar12) {
            uVar25 = (ulong)uVar12;
            goto LAB_0253aca4;
          }
          iVar17 = iVar17 + 1;
          iVar14 = iVar14 + -1;
        } while (iVar14 != 0);
      }
      uVar25 = (ulong)uVar12;
      lVar13 = DAT_054f5738 + uVar25 * 0x80;
      uVar4 = *(undefined4 *)(puVar7 + (ulong)uVar12 * 0x30 + 0x1f);
      uVar3 = *(undefined8 *)(puVar7 + (ulong)uVar12 * 0x30 + 8);
      uVar21 = *(undefined8 *)(puVar7 + (ulong)uVar12 * 0x30 + 0x10);
      *(undefined8 *)(lVar13 + 0x2f8) = *(undefined8 *)(puVar7 + (ulong)uVar12 * 0x30 + 0x18);
      *(undefined8 *)(lVar13 + 0x2f0) = uVar21;
      *(undefined8 *)(lVar13 + 0x2e8) = uVar3;
      *(undefined4 *)(lVar13 + 0x2ff) = uVar4;
      uVar3 = *(undefined8 *)(puVar8 + (ulong)uVar12 * 0x70 + 0x30);
      uVar21 = *(undefined8 *)(puVar8 + (ulong)uVar12 * 0x70 + 0x38);
      uVar24 = *(undefined8 *)(puVar8 + (ulong)uVar12 * 0x70 + 0x28);
      *(undefined8 *)(lVar13 + 800) = *(undefined8 *)(puVar8 + (ulong)uVar12 * 0x70 + 0x20);
      *(undefined8 *)(lVar13 + 0x338) = uVar21;
      *(undefined8 *)(lVar13 + 0x330) = uVar3;
      *(undefined8 *)(lVar13 + 0x328) = uVar24;
      uVar24 = *(undefined8 *)(puVar8 + (ulong)uVar12 * 0x70 + 0x56);
      uVar3 = *(undefined8 *)(puVar8 + (ulong)uVar12 * 0x70 + 0x48);
      uVar21 = *(undefined8 *)(puVar8 + (ulong)uVar12 * 0x70 + 0x50);
      *(undefined8 *)(lVar13 + 0x340) = *(undefined8 *)(puVar8 + (ulong)uVar12 * 0x70 + 0x40);
      *(undefined8 *)(lVar13 + 0x356) = uVar24;
      *(undefined8 *)(lVar13 + 0x350) = uVar21;
      *(undefined8 *)(lVar13 + 0x348) = uVar3;
      uVar3 = *(undefined8 *)(puVar8 + (ulong)uVar12 * 0x70 + 8);
      uVar21 = *(undefined8 *)(puVar8 + (ulong)uVar12 * 0x70 + 0x10);
      fVar26 = (float)*(int *)(lVar13 + 0x2ed) * 0.001;
      *(undefined8 *)(lVar13 + 0x318) = *(undefined8 *)(puVar8 + (ulong)uVar12 * 0x70 + 0x18);
      *(undefined8 *)(lVar13 + 0x310) = uVar21;
      *(undefined8 *)(lVar13 + 0x308) = uVar3;
      fVar27 = (float)*(int *)(param_2 + 0x20) * 5.0 + 5.0;
      bVar9 = false;
      if (((float)*(int *)(param_2 + 0x10) * 5.0 <= fVar26) &&
         (bVar9 = false, !NAN(fVar26) && !NAN(fVar27))) {
        bVar9 = fVar26 < fVar27;
      }
      if (bVar9) {
        fVar27 = (float)*(int *)(lVar13 + 0x2f3) * 0.001;
        fVar26 = (float)*(int *)(param_2 + 0x24) * 5.0 + 5.0;
        bVar9 = false;
        if (((float)*(int *)(param_2 + 0x14) * 5.0 <= fVar27) &&
           (bVar9 = false, !NAN(fVar27) && !NAN(fVar26))) {
          bVar9 = fVar27 < fVar26;
        }
        if (bVar9) {
          iVar14 = *(int *)(param_1 + 0x23b0);
          iVar17 = *(int *)(param_1 + 0x23a8);
          if (iVar14 < iVar17) {
            *(int *)(param_1 + 0x23b0) = iVar14 + 1;
            iVar14 = *(int *)(param_1 + 0x23ac) + iVar14;
            iVar18 = 0;
            if (iVar17 <= iVar14) {
              iVar18 = iVar17;
            }
            *(char *)(*(long *)(param_1 + 0x23a0) + (long)(iVar14 - iVar18)) = (char)uVar12;
          }
        }
      }
LAB_0253aca4:
      do {
        if (uVar25 == 7) goto LAB_0253aaac;
        uVar25 = uVar25 + 1;
        uVar10 = FUN_02507924(local_88,puVar6 + uVar25);
      } while ((uVar10 & 1) == 0);
      bVar5 = puVar6[uVar25];
      uVar12 = (uint)bVar5;
      if (7 < uVar12) break;
      iVar14 = *(int *)(param_1 + 0x23b0);
      local_88[0] = bVar5;
    } while( true );
  }
LAB_0253aaac:
  puVar6 = PTR_DAT_04bb27d0;
  if (1 < *(byte *)(**(long **)PTR_DAT_04bb27d0 + 0x476)) {
    return 1;
  }
  lVar13 = *(long *)PTR_DAT_04bb4948;
  if (lVar13 == 0) {
    iVar14 = 0;
    iVar17 = 0;
  }
  else {
    lVar15 = *(long *)PTR_DAT_04bb27a8;
    if (lVar15 == 0) {
      iVar17 = 0;
      iVar14 = 0;
    }
    else if ((*(ushort *)(lVar15 + 0x4b68) & 1) == 0) {
      iVar14 = 0;
      iVar17 = 0;
    }
    else {
      iVar14 = *(int *)(lVar15 + 0x4b6c);
      iVar17 = *(int *)(lVar15 + 0x4b70);
      piVar11 = (int *)(**(code **)(*(long *)(lVar13 + 0x138) + 0xf0))(lVar13 + 0x138);
      iVar14 = *piVar11 + iVar14 * 0x20;
      iVar17 = piVar11[1] + iVar17 * 0x20;
    }
  }
  lVar13 = *(long *)PTR_DAT_04bb39b0;
  pbVar16 = PTR_DAT_04bb32e0;
  if (lVar13 == 0) {
LAB_0253ad68:
    if (7 < *pbVar16) {
LAB_0253ad74:
      if (*(long **)puVar6 != (long *)0x0) {
        lVar13 = **(long **)puVar6;
        bVar5 = *(byte *)(lVar13 + 0x473);
        pbVar16 = PTR_DAT_04bb5038;
        if ((long)(char)bVar5 != 0xffffffffffffffff) {
          puVar2 = (uint *)(lVar13 + 0x48) + ((long)(char)bVar5 & 0xffffffffU) * 0x20;
          if (7 < bVar5) {
            puVar2 = (uint *)(lVar13 + 0x48);
          }
          if ((*puVar2 & 8) != 0) {
            pbVar16 = (byte *)(lVar13 + 0x471);
          }
        }
        uVar12 = (uint)*pbVar16;
        if (*pbVar16 < 8) goto LAB_0253addc;
      }
      pbVar16 = PTR_DAT_04bb5038;
    }
  }
  else {
    if (*(int *)(lVar13 + 0x15c) != 0) {
      pbVar16 = (byte *)(lVar13 + 0x158);
    }
    if (7 < *pbVar16) {
      if ((*(int *)(lVar13 + 0x15c) != 0) && (DAT_054f5738 != 0)) {
        pbVar16 = (byte *)(DAT_054f5738 + 0x11a5);
        goto LAB_0253ad68;
      }
      goto LAB_0253ad74;
    }
  }
  uVar12 = (uint)*pbVar16;
  if (7 < uVar12) {
    uVar12 = 0xff;
  }
LAB_0253addc:
  iVar18 = *(int *)(param_1 + 0x23b0);
  if (iVar18 != 0) {
    iVar20 = *(int *)(param_1 + 0x23ac);
    uVar22 = uVar12;
    if (7 < uVar12) {
      uVar22 = 0xff;
    }
    do {
      iVar1 = 0;
      if (*(int *)(param_1 + 0x23a8) <= iVar20) {
        iVar1 = *(int *)(param_1 + 0x23a8);
      }
      uVar23 = (uint)*(byte *)(*(long *)(param_1 + 0x23a0) + (long)(iVar20 - iVar1));
      if (7 < uVar23) {
        uVar23 = 0xff;
      }
      if (uVar22 == uVar23) {
        return 1;
      }
      iVar20 = iVar20 + 1;
      iVar18 = iVar18 + -1;
    } while (iVar18 != 0);
  }
  puVar19 = (undefined8 *)(DAT_054f5738 + 0x2e8);
  if (uVar12 < 8) {
    puVar19 = puVar19 + (ulong)uVar12 * 0x10;
    uVar3 = *(undefined8 *)(PTR_DAT_04bc31b0 + (ulong)uVar12 * 0x30 + 8);
    uVar21 = *(undefined8 *)(PTR_DAT_04bc31b0 + (ulong)uVar12 * 0x30 + 0x10);
    uVar24 = *(undefined8 *)(PTR_DAT_04bc31b0 + (ulong)uVar12 * 0x30 + 0x18);
    *(undefined4 *)((long)puVar19 + 0x17) =
         *(undefined4 *)(PTR_DAT_04bc31b0 + (ulong)uVar12 * 0x30 + 0x1f);
    *puVar19 = uVar3;
    puVar19[1] = uVar21;
    puVar19[2] = uVar24;
    puVar6 = PTR_DAT_04bc31b8;
    uVar21 = *(undefined8 *)(PTR_DAT_04bc31b8 + (ulong)uVar12 * 0x70 + 0x38);
    uVar3 = *(undefined8 *)(PTR_DAT_04bc31b8 + (ulong)uVar12 * 0x70 + 0x20);
    uVar24 = *(undefined8 *)(PTR_DAT_04bc31b8 + (ulong)uVar12 * 0x70 + 0x28);
    puVar19[9] = *(undefined8 *)(PTR_DAT_04bc31b8 + (ulong)uVar12 * 0x70 + 0x30);
    puVar19[10] = uVar21;
    puVar19[7] = uVar3;
    puVar19[8] = uVar24;
    uVar3 = *(undefined8 *)(puVar6 + (ulong)uVar12 * 0x70 + 0x48);
    uVar21 = *(undefined8 *)(puVar6 + (ulong)uVar12 * 0x70 + 0x50);
    uVar24 = *(undefined8 *)(puVar6 + (ulong)uVar12 * 0x70 + 0x40);
    *(undefined8 *)((long)puVar19 + 0x6e) = *(undefined8 *)(puVar6 + (ulong)uVar12 * 0x70 + 0x56);
    puVar19[0xc] = uVar3;
    puVar19[0xd] = uVar21;
    puVar19[0xb] = uVar24;
    uVar3 = *(undefined8 *)(puVar6 + (ulong)uVar12 * 0x70 + 8);
    uVar21 = *(undefined8 *)(puVar6 + (ulong)uVar12 * 0x70 + 0x18);
    puVar19[5] = *(undefined8 *)(puVar6 + (ulong)uVar12 * 0x70 + 0x10);
    puVar19[6] = uVar21;
    puVar19[4] = uVar3;
  }
  fVar26 = (float)*(int *)((long)puVar19 + 5) * 0.001;
  fVar27 = (float)(iVar14 + 1) * 5.0 + 5.0;
  bVar9 = false;
  if (((float)iVar14 * 5.0 <= fVar26) && (bVar9 = false, !NAN(fVar26) && !NAN(fVar27))) {
    bVar9 = fVar26 < fVar27;
  }
  if (bVar9) {
    fVar27 = (float)*(int *)((long)puVar19 + 0xb) * 0.001;
    fVar26 = (float)(iVar17 + 1) * 5.0 + 5.0;
    bVar9 = false;
    if (((float)iVar17 * 5.0 <= fVar27) && (bVar9 = false, !NAN(fVar27) && !NAN(fVar26))) {
      bVar9 = fVar27 < fVar26;
    }
    if (bVar9) {
      iVar14 = *(int *)(param_1 + 0x23b0);
      iVar17 = *(int *)(param_1 + 0x23a8);
      if (iVar14 < iVar17) {
        *(int *)(param_1 + 0x23b0) = iVar14 + 1;
        iVar14 = *(int *)(param_1 + 0x23ac) + iVar14;
        iVar18 = 0;
        if (iVar17 <= iVar14) {
          iVar18 = iVar17;
        }
        if (7 < uVar12) {
          uVar12 = 0xff;
        }
        *(char *)(*(long *)(param_1 + 0x23a0) + (long)(iVar14 - iVar18)) = (char)uVar12;
      }
    }
  }
  return 1;
}

