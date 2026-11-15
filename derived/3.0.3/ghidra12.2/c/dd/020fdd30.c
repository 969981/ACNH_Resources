
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_020fdd30(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  uint uVar4;
  char *pcVar5;
  undefined8 *puVar6;
  undefined *puVar7;
  undefined4 uVar8;
  undefined8 *puVar9;
  bool bVar10;
  int iVar11;
  uint *puVar12;
  long lVar13;
  uint uVar14;
  char cVar15;
  ulong uVar16;
  uint *puVar17;
  int *piVar18;
  undefined8 *puVar19;
  char *pcVar20;
  uint uVar21;
  char *pcVar22;
  uint uVar23;
  uint uVar24;
  long lVar25;
  undefined *local_f0;
  undefined8 *local_e8;
  uint local_dc;
  undefined *local_d8;
  undefined8 *local_d0;
  undefined4 local_c8;
  undefined8 local_c4;
  undefined *local_b8;
  undefined8 *local_b0;
  int local_a8;
  undefined8 local_a4;
  uint local_94;
  undefined *local_90;
  undefined1 *puStack_88;
  undefined4 local_80;
  undefined1 local_7c [7];
  undefined1 local_75;
  undefined1 local_6c [12];
  
  puVar7 = PTR_DAT_04bb40b8;
  DAT_053e6e80 = 0;
  DAT_053e6e88._0_7_ = 0;
  ram0x053e6e8f = 0;
  _DAT_053e6e70 = 0;
  DAT_053e6e78 = 0;
  _DAT_053e6e93 = 0;
  DAT_053e6e9b = 0;
  DAT_053e6ea3 = 0;
  DAT_053e6eab._0_7_ = 0;
  ram0x053e6eb2 = 0;
  _DAT_053e6eb8 = 0;
  DAT_053e6ec0 = 0;
  DAT_053e6ec8 = 0;
  DAT_053e6ed0 = 0;
  DAT_053e6ed8 = 0;
  DAT_053e6ee0 = 0;
  DAT_053e6ee8 = 0;
  DAT_053e6ef0 = 0;
  DAT_053e6ef8 = 0;
  DAT_053e6f00 = 0;
  DAT_053e6f08 = 0;
  DAT_053e6f10 = 0;
  DAT_053e6f18 = 0;
  DAT_053e6f20 = 0;
  DAT_053e6f28 = 0;
  DAT_053e6f30 = 0;
  lVar25 = *(long *)PTR_DAT_04bb4138;
  DAT_053e6f38 = 0;
  DAT_053e6f40 = 0;
  if (lVar25 == 0) {
    _DAT_053e6e70 = 0;
    DAT_053e6e78 = 0;
    DAT_053e6e80 = 0;
    DAT_053e6e88._0_7_ = 0;
    ram0x053e6e8f = 0;
    _DAT_053e6e93 = 0;
    DAT_053e6e9b = 0;
    DAT_053e6ea3 = 0;
    DAT_053e6eab._0_7_ = 0;
    ram0x053e6eb2 = 0;
    _DAT_053e6eb8 = 0;
    DAT_053e6ec0 = 0;
    DAT_053e6ec8 = 0;
    DAT_053e6ed0 = 0;
    DAT_053e6ed8 = 0;
    DAT_053e6ee0 = 0;
    DAT_053e6ee8 = 0;
    DAT_053e6ef0 = 0;
    DAT_053e6ef8 = 0;
    DAT_053e6f00 = 0;
    DAT_053e6f08 = 0;
    DAT_053e6f10 = 0;
    DAT_053e6f18 = 0;
    DAT_053e6f20 = 0;
    DAT_053e6f28 = 0;
    DAT_053e6f30 = 0;
    DAT_053e6f38 = 0;
    DAT_053e6f40 = 0;
    return;
  }
  uVar24 = *(uint *)(lVar25 + 0x1c0);
  if ((int)uVar24 < 1) {
    if ((*(long *)(lVar25 + 0xb0) == 0) ||
       (puVar12 = *(uint **)(*(long *)(lVar25 + 0xb0) + 8), puVar12 == (uint *)0x0)) {
      uVar24 = 0;
    }
    else {
      uVar24 = *puVar12;
    }
  }
  local_75 = 0;
  local_80 = 8;
  puStack_88 = local_7c;
  local_7c[0] = 0;
  uVar21 = 0;
  local_94 = 0;
  puVar1 = PTR_DAT_04bb3768 + 0x10;
  if (uVar24 != 0) {
    uVar23 = 0;
    puVar2 = PTR_DAT_04bb6a30 + 0x10;
    puVar3 = PTR_DAT_04bb2020 + 0x10;
    pcVar22 = PTR_DAT_04bb40b0;
    local_90 = puVar1;
LAB_020fded0:
    if (0 < (int)*(uint *)(lVar25 + 0x1c0)) {
      if (*(uint *)(lVar25 + 0x1c0) <= uVar23) goto LAB_020fdec4;
      uVar4 = uVar23;
      if (*(uint *)(lVar25 + 0x1b0) <= uVar23) {
        uVar4 = 0;
      }
      puVar12 = *(uint **)(*(long *)(lVar25 + 0x1b8) + (ulong)uVar4 * 8);
      if (puVar12 == (uint *)0x0) goto LAB_020fdec4;
LAB_020fdefc:
      uVar4 = *puVar12;
      if (uVar4 != 0) {
        cVar15 = *pcVar22;
        do {
          puVar17 = (uint *)(ulong)uVar4;
          if (cVar15 != '\0') {
            uVar4 = *(uint *)(puVar7 + 0x58);
            if ((int)uVar4 < 0) {
              if (uVar4 == 0xffffffff) {
                uVar14 = 0;
                if (puVar17 != (uint *)0x0) goto LAB_020fdf70;
              }
              else {
LAB_020fe068:
                uVar14 = 0;
              }
            }
            else {
              uVar14 = 0;
              if ((ushort *)((ulong)uVar4 + (long)puVar12) != (ushort *)0x0) {
                uVar14 = (uint)*(ushort *)((ulong)uVar4 + (long)puVar12);
              }
            }
LAB_020fe07c:
            puVar17 = (uint *)(ulong)*puVar12;
            if (uVar14 <= uVar21) goto joined_r0x020fe180;
            if (puVar17 == (uint *)0x0) goto LAB_020fe158;
            cVar15 = *pcVar22;
            goto LAB_020fe090;
          }
          cVar15 = '\x01';
          *(undefined8 *)puVar7 = 0xffffffffffffffff;
          *(undefined8 *)(puVar7 + 8) = 0xffffffffffffffff;
          *pcVar22 = '\x01';
          *(undefined4 *)(puVar7 + 0xa0) = 0xffffffff;
          *(undefined8 *)(puVar7 + 0x10) = 0xffffffffffffffff;
          *(undefined8 *)(puVar7 + 0x18) = 0xffffffffffffffff;
          *(undefined8 *)(puVar7 + 0x20) = 0xffffffffffffffff;
          *(undefined8 *)(puVar7 + 0x28) = 0xffffffffffffffff;
          *(undefined8 *)(puVar7 + 0x30) = 0xffffffffffffffff;
          *(undefined8 *)(puVar7 + 0x38) = 0xffffffffffffffff;
          *(undefined8 *)(puVar7 + 0x40) = 0xffffffffffffffff;
          *(undefined8 *)(puVar7 + 0x48) = 0xffffffffffffffff;
          *(undefined8 *)(puVar7 + 0x50) = 0xffffffffffffffff;
          *(undefined8 *)(puVar7 + 0x58) = 0xffffffffffffffff;
          *(undefined8 *)(puVar7 + 0x60) = 0xffffffffffffffff;
          *(undefined8 *)(puVar7 + 0x68) = 0xffffffffffffffff;
          *(undefined8 *)(puVar7 + 0x70) = 0xffffffffffffffff;
          *(undefined8 *)(puVar7 + 0x78) = 0xffffffffffffffff;
          *(undefined8 *)(puVar7 + 0x80) = 0xffffffffffffffff;
          *(undefined8 *)(puVar7 + 0x88) = 0xffffffffffffffff;
          *(undefined8 *)(puVar7 + 0x90) = 0xffffffffffffffff;
          *(undefined8 *)(puVar7 + 0x98) = 0xffffffffffffffff;
          puVar17 = (uint *)(ulong)*puVar12;
          uVar14 = 0;
          if (puVar17 == (uint *)0x0) goto LAB_020fe07c;
LAB_020fdf70:
          uVar14 = 0;
          if (puVar12 == puVar17) goto LAB_020fe07c;
          lVar13 = 0xc;
          if (*(char *)((long)puVar12 + (10 - (long)puVar17)) != '\0') {
            lVar13 = 0x1c;
          }
          lVar13 = (long)puVar12 + (lVar13 - (long)puVar17);
          if (lVar13 == 0) goto LAB_020fe068;
          uVar16 = (ulong)*(ushort *)((long)puVar12 + (8 - (long)puVar17));
          *(undefined4 *)(puVar7 + 0x58) = 0xfffffffe;
          uVar14 = 0;
          if (uVar16 == 0) goto LAB_020fe07c;
          piVar18 = (int *)(lVar13 + 4);
          while (piVar18[-1] != 0x54706054) {
            piVar18 = piVar18 + 2;
            uVar16 = uVar16 - 1;
            if (uVar16 == 0) {
              uVar14 = 0;
              goto LAB_020fe07c;
            }
          }
          iVar11 = 0;
          if (*piVar18 != -1) {
            iVar11 = *piVar18;
          }
          *(int *)(puVar7 + 0x58) = iVar11;
          uVar4 = *puVar12;
        } while (uVar4 != 0);
      }
      puVar17 = (uint *)0x0;
      goto joined_r0x020fe180;
    }
    if ((((*(long *)(lVar25 + 0xb0) != 0) &&
         (puVar12 = *(uint **)(*(long *)(lVar25 + 0xb0) + 8), puVar12 != (uint *)0x0)) &&
        ((*(uint *)(lVar25 + 200) <= uVar23 ||
         (*(char *)(*(long *)(lVar25 + 0xd0) + (long)(int)uVar23) != '\0')))) &&
       (((uVar23 < *puVar12 && (puVar12[1] != 0)) && ((ushort)puVar12[2] != 0)))) {
      iVar11 = 0xc;
      if (*(char *)((long)puVar12 + 10) != '\0') {
        iVar11 = 0x1c;
      }
      puVar12 = (uint *)((ulong)(puVar12[1] * uVar23 + (uint)(ushort)puVar12[2] * 8 + iVar11) +
                        (long)puVar12);
      if (puVar12 != (uint *)0x0) goto LAB_020fdefc;
    }
    goto LAB_020fdec4;
  }
LAB_020fe66c:
  *(uint *)(lVar25 + 0x220) = uVar21;
  return;
LAB_020fe090:
  if (cVar15 == '\0') {
    cVar15 = '\x01';
    *(undefined8 *)puVar7 = 0xffffffffffffffff;
    *(undefined8 *)(puVar7 + 8) = 0xffffffffffffffff;
    *pcVar22 = '\x01';
    *(undefined4 *)(puVar7 + 0xa0) = 0xffffffff;
    *(undefined8 *)(puVar7 + 0x10) = 0xffffffffffffffff;
    *(undefined8 *)(puVar7 + 0x18) = 0xffffffffffffffff;
    *(undefined8 *)(puVar7 + 0x20) = 0xffffffffffffffff;
    *(undefined8 *)(puVar7 + 0x28) = 0xffffffffffffffff;
    *(undefined8 *)(puVar7 + 0x30) = 0xffffffffffffffff;
    *(undefined8 *)(puVar7 + 0x38) = 0xffffffffffffffff;
    *(undefined8 *)(puVar7 + 0x40) = 0xffffffffffffffff;
    *(undefined8 *)(puVar7 + 0x48) = 0xffffffffffffffff;
    *(undefined8 *)(puVar7 + 0x50) = 0xffffffffffffffff;
    *(undefined8 *)(puVar7 + 0x58) = 0xffffffffffffffff;
    *(undefined8 *)(puVar7 + 0x60) = 0xffffffffffffffff;
    *(undefined8 *)(puVar7 + 0x68) = 0xffffffffffffffff;
    *(undefined8 *)(puVar7 + 0x70) = 0xffffffffffffffff;
    *(undefined8 *)(puVar7 + 0x78) = 0xffffffffffffffff;
    *(undefined8 *)(puVar7 + 0x80) = 0xffffffffffffffff;
    *(undefined8 *)(puVar7 + 0x88) = 0xffffffffffffffff;
    *(undefined8 *)(puVar7 + 0x90) = 0xffffffffffffffff;
    *(undefined8 *)(puVar7 + 0x98) = 0xffffffffffffffff;
    puVar17 = (uint *)(ulong)*puVar12;
  }
  else {
    uVar4 = *(uint *)(puVar7 + 0x8c);
    if (-1 < (int)uVar4) {
      pcVar20 = (char *)((ulong)uVar4 + (long)puVar12);
      goto LAB_020fe15c;
    }
    if (uVar4 != 0xffffffff) goto LAB_020fe158;
  }
  pcVar20 = (char *)0x0;
  if ((puVar17 == (uint *)0x0) || (pcVar20 = (char *)0x0, puVar12 == puVar17)) goto LAB_020fe15c;
  lVar13 = 0xc;
  if (*(char *)((long)puVar12 + (10 - (long)puVar17)) != '\0') {
    lVar13 = 0x1c;
  }
  lVar13 = (long)puVar12 + (lVar13 - (long)puVar17);
  pcVar20 = (char *)0x0;
  if (lVar13 == 0) goto LAB_020fe15c;
  uVar16 = (ulong)*(ushort *)((long)puVar12 + (8 - (long)puVar17));
  *(undefined4 *)(puVar7 + 0x8c) = 0xfffffffe;
  if (uVar16 == 0) goto LAB_020fe158;
  piVar18 = (int *)(lVar13 + 4);
  while (piVar18[-1] != 0x48ef0398) {
    piVar18 = piVar18 + 2;
    uVar16 = uVar16 - 1;
    if (uVar16 == 0) goto LAB_020fe158;
  }
  iVar11 = 0;
  if (*piVar18 != -1) {
    iVar11 = *piVar18;
  }
  *(int *)(puVar7 + 0x8c) = iVar11;
  puVar17 = (uint *)(ulong)*puVar12;
  if (*puVar12 == 0) goto LAB_020fe158;
  goto LAB_020fe090;
LAB_020fe158:
  pcVar20 = (char *)0x0;
LAB_020fe15c:
  pcVar5 = *(char **)PTR_PTR_04bc2518;
  if (pcVar20 != (char *)0x0) {
    pcVar5 = pcVar20;
  }
  puVar17 = (uint *)(ulong)*puVar12;
  if (*pcVar5 != '\0') {
    uVar21 = uVar14;
  }
joined_r0x020fe180:
  if (puVar17 != (uint *)0x0) {
    cVar15 = *pcVar22;
    do {
      if (cVar15 == '\0') {
        cVar15 = '\x01';
        *(undefined8 *)puVar7 = 0xffffffffffffffff;
        *(undefined8 *)(puVar7 + 8) = 0xffffffffffffffff;
        *pcVar22 = '\x01';
        *(undefined4 *)(puVar7 + 0xa0) = 0xffffffff;
        *(undefined8 *)(puVar7 + 0x10) = 0xffffffffffffffff;
        *(undefined8 *)(puVar7 + 0x18) = 0xffffffffffffffff;
        *(undefined8 *)(puVar7 + 0x20) = 0xffffffffffffffff;
        *(undefined8 *)(puVar7 + 0x28) = 0xffffffffffffffff;
        *(undefined8 *)(puVar7 + 0x30) = 0xffffffffffffffff;
        *(undefined8 *)(puVar7 + 0x38) = 0xffffffffffffffff;
        *(undefined8 *)(puVar7 + 0x40) = 0xffffffffffffffff;
        *(undefined8 *)(puVar7 + 0x48) = 0xffffffffffffffff;
        *(undefined8 *)(puVar7 + 0x50) = 0xffffffffffffffff;
        *(undefined8 *)(puVar7 + 0x58) = 0xffffffffffffffff;
        *(undefined8 *)(puVar7 + 0x60) = 0xffffffffffffffff;
        *(undefined8 *)(puVar7 + 0x68) = 0xffffffffffffffff;
        *(undefined8 *)(puVar7 + 0x70) = 0xffffffffffffffff;
        *(undefined8 *)(puVar7 + 0x78) = 0xffffffffffffffff;
        *(undefined8 *)(puVar7 + 0x80) = 0xffffffffffffffff;
        *(undefined8 *)(puVar7 + 0x88) = 0xffffffffffffffff;
        *(undefined8 *)(puVar7 + 0x90) = 0xffffffffffffffff;
        *(undefined8 *)(puVar7 + 0x98) = 0xffffffffffffffff;
        puVar17 = (uint *)(ulong)*puVar12;
      }
      else {
        uVar4 = *(uint *)(puVar7 + 0x80);
        if (-1 < (int)uVar4) {
          puVar19 = (undefined8 *)((ulong)uVar4 + (long)puVar12);
          goto LAB_020fe25c;
        }
        if (uVar4 != 0xffffffff) break;
      }
      puVar19 = (undefined8 *)0x0;
      if ((puVar17 == (uint *)0x0) || (puVar19 = (undefined8 *)0x0, puVar12 == puVar17))
      goto LAB_020fe25c;
      lVar13 = 0xc;
      if (*(char *)((long)puVar12 + (10 - (long)puVar17)) != '\0') {
        lVar13 = 0x1c;
      }
      lVar13 = (long)puVar12 + (lVar13 - (long)puVar17);
      puVar19 = (undefined8 *)0x0;
      if (lVar13 == 0) goto LAB_020fe25c;
      uVar16 = (ulong)*(ushort *)((long)puVar12 + (8 - (long)puVar17));
      *(undefined4 *)(puVar7 + 0x80) = 0xfffffffe;
      if (uVar16 == 0) break;
      piVar18 = (int *)(lVar13 + 4);
      while (piVar18[-1] != 0x2f1b930d) {
        piVar18 = piVar18 + 2;
        uVar16 = uVar16 - 1;
        if (uVar16 == 0) goto LAB_020fe258;
      }
      iVar11 = 0;
      if (*piVar18 != -1) {
        iVar11 = *piVar18;
      }
      *(int *)(puVar7 + 0x80) = iVar11;
      puVar17 = (uint *)(ulong)*puVar12;
      if (*puVar12 == 0) break;
    } while( true );
  }
LAB_020fe258:
  puVar19 = (undefined8 *)0x0;
LAB_020fe25c:
  local_a8 = 8;
  local_a4._7_1_ = 0;
  puVar6 = *(undefined8 **)PTR_PTR_04bc1178;
  if (puVar19 != (undefined8 *)0x0) {
    puVar6 = puVar19;
  }
  local_b0 = &local_a4;
  if (&local_a4 != puVar6) {
    lVar13 = 0;
    do {
      if (*(char *)((long)puVar6 + lVar13) == '\0') {
LAB_020fe2c8:
        iVar11 = (int)lVar13;
joined_r0x020fe2cc:
        if (7 < iVar11) {
          iVar11 = 7;
        }
        goto LAB_020fe2d4;
      }
      if (*(char *)((long)puVar6 + lVar13 + 1) == '\0') {
        lVar13 = lVar13 + 1;
        goto LAB_020fe2c8;
      }
      if (*(char *)((long)puVar6 + lVar13 + 2) == '\0') {
        iVar11 = (int)lVar13 + 2;
        goto joined_r0x020fe2cc;
      }
      lVar13 = lVar13 + 3;
    } while (lVar13 != 0x80001);
    iVar11 = 0;
LAB_020fe2d4:
    local_b8 = puVar2;
    memcpy(&local_a4,puVar6,(long)iVar11);
    *(undefined1 *)((long)&local_a4 + (long)iVar11) = 0;
  }
  local_c8 = 8;
  local_c4._7_1_ = 0;
  local_d8 = PTR_DAT_04bb6a30 + 0x10;
  local_d0 = &local_c4;
  local_b8 = puVar1;
  if (&local_c4 != puVar6) {
    lVar13 = 0;
    do {
      if (*(char *)((long)puVar6 + lVar13) == '\0') {
LAB_020fe354:
        iVar11 = (int)lVar13;
joined_r0x020fe358:
        if (7 < iVar11) {
          iVar11 = 7;
        }
        goto LAB_020fe360;
      }
      if (*(char *)((long)puVar6 + lVar13 + 1) == '\0') {
        lVar13 = lVar13 + 1;
        goto LAB_020fe354;
      }
      if (*(char *)((long)puVar6 + lVar13 + 2) == '\0') {
        iVar11 = (int)lVar13 + 2;
        goto joined_r0x020fe358;
      }
      lVar13 = lVar13 + 3;
    } while (lVar13 != 0x80001);
    iVar11 = 0;
LAB_020fe360:
    memcpy(&local_c4,puVar6,(long)iVar11);
    *(undefined1 *)((long)&local_c4 + (long)iVar11) = 0;
  }
  local_d8 = PTR_DAT_04bb3768 + 0x10;
  iVar11 = 3;
  if (local_a8 < 4) {
    iVar11 = local_a8 + -1;
  }
  *(undefined1 *)((long)local_b0 + (long)iVar11) = 0;
  local_e8 = &DAT_0407ebb1;
  if (local_94 < 0x23) {
    local_e8 = *(undefined8 **)(PTR_DAT_04bb9e38 + (ulong)local_94 * 8 + 0xb0);
  }
  local_f0 = puVar3;
  (**(code **)(local_b8 + 0x18))(&local_b8);
  (**(code **)(local_b8 + 0x18))(&local_b8);
  puVar9 = local_b0;
  (**(code **)(local_f0 + 0x18))(&local_f0);
  uVar8 = local_c8;
  puVar19 = local_d0;
  if (puVar9 == local_e8) {
LAB_020fe4b0:
    local_6c[0] = 0;
    local_f0 = PTR_DAT_04bb2020 + 0x10;
    local_e8 = &DAT_0407ebb1;
    (**(code **)(local_d8 + 0x18))(&local_d8);
    puVar6 = local_d0;
    (**(code **)(local_d8 + 0x18))(&local_d8);
    lVar13 = 0;
    do {
      if (*(char *)((long)local_d0 + lVar13) == '\0') goto LAB_020fe594;
      if (*(char *)((long)local_d0 + lVar13 + 1) == '\0') {
        lVar13 = lVar13 + 1;
        goto LAB_020fe594;
      }
      if (*(char *)((long)local_d0 + lVar13 + 2) == '\0') {
        lVar13 = lVar13 + 2;
        goto LAB_020fe594;
      }
      lVar13 = lVar13 + 3;
    } while (lVar13 != 0x80001);
    lVar13 = 0;
LAB_020fe594:
    FUN_038d0770(puVar19,0,uVar8,puVar6,lVar13,&local_b8,&local_f0,local_6c);
    FUN_038d2c30(&local_dc,&local_d8,10);
  }
  else {
    uVar16 = 0;
    bVar10 = true;
    do {
      if (*(char *)((long)local_b0 + uVar16) != *(char *)((long)local_e8 + uVar16)) break;
      if (*(char *)((long)local_b0 + uVar16) == '\0') {
        if (bVar10) goto LAB_020fe4b0;
        break;
      }
      cVar15 = *(char *)((long)local_b0 + uVar16 + 1);
      if (cVar15 != *(char *)((long)local_e8 + uVar16 + 1)) break;
      if (cVar15 == '\0') goto LAB_020fe4b0;
      cVar15 = *(char *)((long)local_b0 + uVar16 + 2);
      if (cVar15 != *(char *)((long)local_e8 + uVar16 + 2)) break;
      if (cVar15 == '\0') goto LAB_020fe4b0;
      bVar10 = uVar16 < 0x7fffe;
      uVar16 = uVar16 + 3;
    } while (uVar16 != 0x80001);
    local_f0 = PTR_DAT_04bb2020 + 0x10;
    local_e8 = puVar6;
    uVar16 = FUN_020fc100(&local_94,&local_dc,&local_f0);
    if ((uVar16 & 1) == 0) {
      pcVar22 = PTR_DAT_04bb40b0;
      goto LAB_020fdec4;
    }
  }
  uVar16 = (ulong)local_94;
  if (0x22 < local_94) {
    uVar16 = 0;
  }
  (&DAT_053e6e70)[uVar16] = (&DAT_053e6e70)[uVar16] + '\x01';
  pcVar22 = PTR_DAT_04bb40b0;
  uVar16 = (ulong)local_94;
  if (0x22 < local_94) {
    uVar16 = 0;
  }
  if ((byte)(&DAT_053e6e93)[uVar16] < local_dc) {
    uVar16 = (ulong)local_94;
    if (0x22 < local_94) {
      uVar16 = 0;
    }
    (&DAT_053e6e93)[uVar16] = (char)local_dc;
  }
  uVar16 = (ulong)local_94;
  if (0x22 < local_94) {
    uVar16 = 0;
  }
  (&DAT_053e6eb8)[uVar16] = (&DAT_053e6eb8)[uVar16] | 1 << (ulong)(local_dc & 0x1f);
LAB_020fdec4:
  uVar23 = uVar23 + 1;
  if (uVar23 == uVar24) goto LAB_020fe660;
  goto LAB_020fded0;
LAB_020fe660:
  lVar25 = *(long *)PTR_DAT_04bb4138;
  goto LAB_020fe66c;
}

