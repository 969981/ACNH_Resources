
ulong FUN_01c5b380(void)

{
  undefined **ppuVar1;
  int iVar2;
  long lVar3;
  byte bVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  ushort uVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  uint uVar13;
  uint *puVar14;
  uint *puVar15;
  int *piVar16;
  byte *pbVar17;
  int iVar18;
  long lVar19;
  uint uVar20;
  char cVar21;
  ulong uVar22;
  char *pcVar23;
  ulong uVar24;
  bool bVar25;
  undefined *local_a8;
  undefined8 local_a0;
  undefined8 local_98;
  undefined **local_90;
  undefined **local_88;
  undefined8 local_80;
  undefined8 local_70;
  char *pcStack_68;
  byte local_48 [4];
  byte local_44 [4];
  
  puVar5 = PTR_DAT_04bb2020;
  lVar19 = *(long *)PTR_DAT_04bb39b0;
  pbVar17 = PTR_DAT_04bb32e0;
  if (lVar19 == 0) {
LAB_01c5b3f4:
    if (*pbVar17 < 8) goto LAB_01c5b46c;
LAB_01c5b400:
    if (*(long **)PTR_DAT_04bb27d0 == (long *)0x0) {
LAB_01c5b464:
      pbVar17 = PTR_DAT_04bb5038;
      goto LAB_01c5b46c;
    }
    lVar19 = **(long **)PTR_DAT_04bb27d0;
    bVar4 = *(byte *)(lVar19 + 0x473);
    pbVar17 = PTR_DAT_04bb5038;
    if ((long)(char)bVar4 != 0xffffffffffffffff) {
      puVar14 = (uint *)(lVar19 + 0x48) + ((long)(char)bVar4 & 0xffffffffU) * 0x20;
      if (7 < bVar4) {
        puVar14 = (uint *)(lVar19 + 0x48);
      }
      if ((*puVar14 & 8) != 0) {
        pbVar17 = (byte *)(lVar19 + 0x471);
      }
    }
    local_44[0] = *pbVar17;
    if (7 < local_44[0]) goto LAB_01c5b464;
  }
  else {
    if (*(int *)(lVar19 + 0x15c) != 0) {
      pbVar17 = (byte *)(lVar19 + 0x158);
    }
    if (7 < *pbVar17) {
      if ((*(int *)(lVar19 + 0x15c) != 0) && (*(long *)PTR_DAT_04bb4718 != 0)) {
        pbVar17 = (byte *)(*(long *)PTR_DAT_04bb4718 + 0x11a5);
        goto LAB_01c5b3f4;
      }
      goto LAB_01c5b400;
    }
LAB_01c5b46c:
    local_44[0] = *pbVar17;
    if (7 < local_44[0]) {
      local_44[0] = 0xff;
    }
  }
  ppuVar1 = (undefined **)(PTR_DAT_04bb2020 + 0x10);
  local_88 = (undefined **)0x40d9b39;
  local_90 = ppuVar1;
  uVar10 = FUN_0274bce0(local_44,&local_90);
  puVar8 = PTR_DAT_04bc0eb8;
  local_98 = 0;
  local_a8 = PTR_DAT_04bc0eb8 + 0x10;
  local_a0 = 0;
  local_90 = &PTR_LAB_04a42538;
  local_88 = &local_a8;
  FUN_01c5fba0(&local_90);
  if (local_44[0] < 8) {
    local_88 = (undefined **)0x405cda3;
    local_90 = ppuVar1;
    uVar11 = FUN_0274bce0(local_44,&local_90);
    if ((uVar11 & 0xff80) == 0) {
      lVar19 = (ulong)(uVar11 >> 5 & 0x7ff) * 4;
      *(uint *)(local_48 + lVar19 + -0x58) =
           *(uint *)(local_48 + lVar19 + -0x58) & (1 << (ulong)(uVar11 & 0x1f) ^ 0xffffffffU);
    }
  }
  local_80 = (byte *)((ulong)local_80._4_4_ << 0x20);
  local_90 = &PTR_LAB_04a42588;
  local_88 = &local_a8;
  FUN_01c5fba0(&local_90);
  if (local_44[0] < 8) {
    local_88 = &local_a8;
    local_90 = &PTR_LAB_04a425d8;
    local_80 = local_44;
    FUN_01c5fba0(&local_90);
  }
  local_90 = &PTR_LAB_04a425b0;
  local_80 = local_44;
  local_88 = &local_a8;
  FUN_01c5fba0(&local_90);
  local_70 = (undefined *)((ulong)local_70._4_4_ << 0x20);
  local_90 = &PTR_LAB_04a42600;
  local_80 = (byte *)&local_70;
  local_88 = &local_a8;
  FUN_01c5fba0(&local_90);
  local_90 = &PTR_LAB_04a42628;
  local_88 = &local_a8;
  FUN_01c5fba0(&local_90);
  local_90 = &PTR_LAB_04a42650;
  local_88 = &local_a8;
  FUN_01c5fba0(&local_90);
  if ((uVar10 | 4) == 6) {
    uVar10 = (uint)local_a0 & 0xfeffffff;
    local_a0 = local_a0 & 0xfffffffffeffffff;
  }
  else {
    uVar10 = (uint)local_a0;
  }
  uVar10 = uVar10 - (uVar10 >> 1 & 0x55555555);
  uVar10 = (uVar10 >> 2 & 0x33333333) + (uVar10 & 0x33333333);
  uVar11 = local_a0._4_4_ - (local_a0._4_4_ >> 1 & 0x55555555);
  uVar10 = uVar10 + (uVar10 >> 4) & 0xf0f0f0f;
  uVar20 = (uint)local_98 - ((uint)local_98 >> 1 & 0x55555555);
  uVar10 = uVar10 + (uVar10 >> 8);
  uVar13 = local_98._4_4_ - (local_98._4_4_ >> 1 & 0x55555555);
  uVar11 = (uVar11 >> 2 & 0x33333333) + (uVar11 & 0x33333333);
  uVar20 = (uVar20 >> 2 & 0x33333333) + (uVar20 & 0x33333333);
  uVar11 = uVar11 + (uVar11 >> 4) & 0xf0f0f0f;
  uVar11 = uVar11 + (uVar11 >> 8);
  uVar20 = uVar20 + (uVar20 >> 4) & 0xf0f0f0f;
  uVar20 = uVar20 + (uVar20 >> 8);
  uVar13 = (uVar13 >> 2 & 0x33333333) + (uVar13 & 0x33333333);
  uVar13 = uVar13 + (uVar13 >> 4) & 0xf0f0f0f;
  uVar13 = uVar13 + (uVar13 >> 8);
  if ((uVar11 + (uVar11 >> 0x10) & 0x3f) + (uVar20 + (uVar20 >> 0x10) & 0x3f) +
      (uVar10 + (uVar10 >> 0x10) & 0x3f) + (uVar13 + (uVar13 >> 0x10) & 0x3f) != 0) {
    puVar14 = (uint *)nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_04bb39d8);
    uVar24 = 0;
    uVar11 = puVar14[3];
    uVar10 = *puVar14 ^ *puVar14 << 0xb;
    *puVar14 = puVar14[1];
    puVar14[1] = puVar14[2];
    uVar10 = uVar10 >> 8 ^ uVar11 >> 0x13 ^ uVar10 ^ uVar11;
    puVar14[2] = uVar11;
    puVar14[3] = uVar10;
    uVar9 = DAT_0534f428;
    lVar19 = DAT_0534f410;
    uVar11 = DAT_0534f408;
    puVar7 = PTR_DAT_04bc0e90;
    puVar6 = PTR_DAT_04bc0e88;
    do {
      if ((*(uint *)(local_48 + (uVar24 >> 5) * 4 + -0x58) >> (ulong)((uint)uVar24 & 0x1f) & 1) != 0
         ) goto LAB_01c5b730;
      uVar20 = (uint)uVar24 + 1;
      uVar24 = (ulong)uVar20;
    } while (uVar20 != 0x80);
    uVar24 = 0;
LAB_01c5b730:
    iVar18 = 0x80;
    do {
      if ((*(uint *)(local_48 + (ulong)(iVar18 - 1U >> 5) * 4 + -0x58) >>
           (ulong)(iVar18 - 1U & 0x1f) & 1) != 0) break;
      iVar18 = iVar18 + -1;
    } while (iVar18 != 0);
    if (iVar18 != (int)uVar24) {
      uVar20 = 0;
      cVar21 = *PTR_DAT_04bc0e88;
LAB_01c5b878:
      uVar13 = ((uint)uVar24 & 0xffff) - (uint)uVar9;
      if (uVar13 < uVar11) {
        puVar14 = *(uint **)(lVar19 + (long)(int)uVar13 * 8);
        if (puVar14 == (uint *)0x0) goto LAB_01c5b954;
        uVar13 = *puVar14;
        if (uVar13 != 0) {
          do {
            puVar15 = (uint *)(ulong)uVar13;
            if (cVar21 != '\0') {
              uVar12 = *(uint *)(puVar7 + 0x38);
              if (-1 < (int)uVar12) {
                bVar25 = false;
                uVar13 = 0;
                if ((byte *)((ulong)uVar12 + (long)puVar14) != (byte *)0x0) {
                  uVar13 = (uint)*(byte *)((ulong)uVar12 + (long)puVar14);
                }
                goto LAB_01c5b95c;
              }
              if (uVar12 != 0xffffffff) {
LAB_01c5b9cc:
                bVar25 = false;
                uVar13 = 0;
                goto LAB_01c5b95c;
              }
              if (puVar15 != (uint *)0x0) goto LAB_01c5b8d4;
              break;
            }
            cVar21 = '\x01';
            *(undefined8 *)puVar7 = 0xffffffffffffffff;
            *(undefined8 *)(puVar7 + 8) = 0xffffffffffffffff;
            *puVar6 = 1;
            *(undefined8 *)(puVar7 + 0x10) = 0xffffffffffffffff;
            *(undefined8 *)(puVar7 + 0x18) = 0xffffffffffffffff;
            *(undefined8 *)(puVar7 + 0x20) = 0xffffffffffffffff;
            *(undefined8 *)(puVar7 + 0x28) = 0xffffffffffffffff;
            *(undefined8 *)(puVar7 + 0x30) = 0xffffffffffffffff;
            *(undefined8 *)(puVar7 + 0x38) = 0xffffffffffffffff;
            puVar15 = (uint *)(ulong)*puVar14;
            if (puVar15 == (uint *)0x0) break;
LAB_01c5b8d4:
            if (puVar14 == puVar15) goto LAB_01c5b9cc;
            lVar3 = 0xc;
            if (*(char *)((long)puVar14 + (10 - (long)puVar15)) != '\0') {
              lVar3 = 0x1c;
            }
            lVar3 = (long)puVar14 + (lVar3 - (long)puVar15);
            if (lVar3 == 0) goto LAB_01c5b9cc;
            uVar22 = (ulong)*(ushort *)((long)puVar14 + (8 - (long)puVar15));
            *(undefined4 *)(puVar7 + 0x38) = 0xfffffffe;
            if (uVar22 == 0) break;
            piVar16 = (int *)(lVar3 + 4);
            while (piVar16[-1] != -0x2765f250) {
              piVar16 = piVar16 + 2;
              uVar22 = uVar22 - 1;
              if (uVar22 == 0) goto LAB_01c5b940;
            }
            iVar2 = 0;
            if (*piVar16 != -1) {
              iVar2 = *piVar16;
            }
            *(int *)(puVar7 + 0x38) = iVar2;
            uVar13 = *puVar14;
            if (uVar13 == 0) break;
          } while( true );
        }
LAB_01c5b940:
        uVar13 = 0;
        bVar25 = false;
      }
      else {
        puVar14 = (uint *)0x0;
LAB_01c5b954:
        uVar13 = 0;
        bVar25 = true;
      }
LAB_01c5b95c:
      uVar20 = uVar20 + uVar13;
      if (uVar20 <= (uint)((ulong)uVar10 * 1000 >> 0x20)) {
        do {
          uVar13 = (int)uVar24 + 1;
          uVar24 = (ulong)uVar13;
          if (0x7f < uVar13) {
            uVar13 = 0x7e;
            goto LAB_01c5b994;
          }
        } while ((*(uint *)(local_48 + (ulong)(uVar13 >> 5) * 4 + -0x58) >> (ulong)(uVar13 & 0x1f) &
                 1) == 0);
        goto LAB_01c5b870;
      }
      if (7 < local_44[0]) {
        return uVar24;
      }
      local_90 = (undefined **)(puVar5 + 0x10);
      local_88 = (undefined **)0x405cda3;
      FUN_0274bfe8(local_44,&local_90,uVar24);
      if (bVar25) {
        local_88 = *(undefined ***)PTR_PTR_04bc0eb0;
        goto LAB_01c5bb0c;
      }
      uVar10 = *puVar14;
      if (uVar10 == 0) goto LAB_01c5baf4;
      cVar21 = *puVar6;
      goto LAB_01c5ba4c;
    }
  }
LAB_01c5b758:
  local_90 = (undefined **)(puVar8 + 0x10);
  local_80 = (byte *)0x0;
  local_48[0] = local_44[0];
  if (7 < local_44[0]) {
    local_48[0] = 0xff;
  }
  local_88 = (undefined **)0x17;
  if (local_44[0] < 8) {
    local_70 = puVar5 + 0x10;
    pcStack_68 = "LatestMysteryTourUniqueID";
    uVar10 = FUN_0274bce0(local_48,&local_70);
    if ((uVar10 & 0xff80) == 0) {
      lVar19 = (ulong)(uVar10 >> 5 & 0x7ff) * 4;
      *(uint *)(local_48 + lVar19 + -0x40) =
           *(uint *)(local_48 + lVar19 + -0x40) & (1 << (ulong)(uVar10 & 0x1f) ^ 0xffffffffU);
    }
  }
  uVar10 = FUN_01c63a20(&local_90);
  uVar10 = uVar10 & ((int)uVar10 >> 0x1f ^ 0xffffffffU);
  uVar24 = (ulong)uVar10;
  uVar10 = uVar10 & 0xffff;
  local_88 = (undefined **)0x405cda3;
LAB_01c5b7f8:
  local_90 = (undefined **)(puVar5 + 0x10);
  FUN_0274bfe8(local_44,&local_90,uVar10);
  return uVar24;
  while (uVar13 = uVar13 - 2, uVar13 != 0xfffffffe) {
LAB_01c5b994:
    uVar12 = uVar13 + 1;
    if (((*(uint *)(local_48 + (ulong)(uVar12 >> 5) * 4 + -0x58) >> (ulong)(uVar12 & 0x1f) & 1) != 0
        ) || (uVar12 = uVar13,
             (*(uint *)(local_48 + (ulong)(uVar13 >> 5) * 4 + -0x58) >> (ulong)(uVar13 & 0x1f) & 1)
             != 0)) {
      uVar24 = (ulong)(uVar12 + 1);
      goto LAB_01c5b870;
    }
  }
  uVar24 = 0;
LAB_01c5b870:
  if (iVar18 == (int)uVar24) goto LAB_01c5b758;
  goto LAB_01c5b878;
LAB_01c5ba4c:
  if (cVar21 == '\0') {
    cVar21 = '\x01';
    *(undefined8 *)puVar7 = 0xffffffffffffffff;
    *(undefined8 *)(puVar7 + 8) = 0xffffffffffffffff;
    *puVar6 = 1;
    *(undefined8 *)(puVar7 + 0x10) = 0xffffffffffffffff;
    *(undefined8 *)(puVar7 + 0x18) = 0xffffffffffffffff;
    *(undefined8 *)(puVar7 + 0x20) = 0xffffffffffffffff;
    *(undefined8 *)(puVar7 + 0x28) = 0xffffffffffffffff;
    *(undefined8 *)(puVar7 + 0x30) = 0xffffffffffffffff;
    *(undefined8 *)(puVar7 + 0x38) = 0xffffffffffffffff;
    uVar10 = *puVar14;
  }
  else {
    uVar11 = *(uint *)(puVar7 + 0x28);
    if (-1 < (int)uVar11) {
      pcVar23 = (char *)((ulong)uVar11 + (long)puVar14);
      goto LAB_01c5baf8;
    }
    if (uVar11 != 0xffffffff) goto LAB_01c5baf4;
  }
  puVar15 = (uint *)(ulong)uVar10;
  pcVar23 = (char *)0x0;
  if ((puVar15 == (uint *)0x0) || (puVar14 == puVar15)) goto LAB_01c5baf8;
  lVar19 = 0xc;
  if (*(char *)((long)puVar14 + (10 - (long)puVar15)) != '\0') {
    lVar19 = 0x1c;
  }
  lVar19 = (long)puVar14 + (lVar19 - (long)puVar15);
  pcVar23 = (char *)0x0;
  if (lVar19 == 0) goto LAB_01c5baf8;
  uVar22 = (ulong)*(ushort *)((long)puVar14 + (8 - (long)puVar15));
  *(undefined4 *)(puVar7 + 0x28) = 0xfffffffe;
  if (uVar22 == 0) goto LAB_01c5baf4;
  piVar16 = (int *)(lVar19 + 4);
  while (piVar16[-1] != -0x7742f63e) {
    piVar16 = piVar16 + 2;
    uVar22 = uVar22 - 1;
    if (uVar22 == 0) goto LAB_01c5baf4;
  }
  iVar18 = 0;
  if (*piVar16 != -1) {
    iVar18 = *piVar16;
  }
  *(int *)(puVar7 + 0x28) = iVar18;
  uVar10 = *puVar14;
  if (uVar10 == 0) goto LAB_01c5baf4;
  goto LAB_01c5ba4c;
LAB_01c5baf4:
  pcVar23 = (char *)0x0;
LAB_01c5baf8:
  local_88 = (undefined **)*(char **)PTR_PTR_04bc0ea8;
  if (pcVar23 != (char *)0x0) {
    local_88 = (undefined **)pcVar23;
  }
LAB_01c5bb0c:
  if (*(char *)local_88 == '\0') {
    return uVar24;
  }
  uVar10 = 1;
  goto LAB_01c5b7f8;
}

