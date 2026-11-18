
uint FUN_036aecf0(long param_1,uint *param_2,long param_3,uint *param_4)

{
  int iVar1;
  long lVar2;
  uint uVar3;
  uint uVar4;
  ushort uVar5;
  long lVar6;
  undefined *puVar7;
  undefined *puVar8;
  uint uVar9;
  uint *puVar10;
  uint uVar11;
  uint uVar12;
  uint uVar13;
  uint uVar14;
  uint uVar15;
  uint uVar16;
  uint uVar17;
  uint uVar18;
  uint uVar19;
  uint uVar20;
  uint *puVar21;
  char cVar22;
  uint uVar23;
  uint uVar24;
  ulong uVar25;
  int *piVar26;
  uint uVar27;
  uint uVar28;
  uint uVar29;
  uint uVar30;
  uint uVar31;
  uint uVar32;
  undefined1 local_64 [4];
  
  if (0x14 < (*param_2 & 0xffff)) {
LAB_036aee64:
    return *param_4;
  }
  FUN_006bd550(*(undefined8 *)(PTR_DAT_04bc2558 + (ulong)(ushort)*param_2 * 8 + 0x150),0);
  puVar10 = (uint *)FUN_036c67d0(param_1 + 0x800,local_64);
  puVar8 = PTR_DAT_04bc11f0;
  puVar7 = PTR_DAT_04bc11e8;
  if (puVar10 == (uint *)0x0) goto LAB_036aee64;
  if (*puVar10 != 0) {
    cVar22 = *PTR_DAT_04bc11e8;
    do {
      if (cVar22 != '\0') {
        uVar11 = *(uint *)(puVar8 + 0x3c);
        if ((int)uVar11 < 0) {
          if (uVar11 == 0xffffffff) goto LAB_036aede4;
        }
        else if ((byte *)((ulong)uVar11 + (long)puVar10) != (byte *)0x0) {
          uVar11 = (uint)*(byte *)((ulong)uVar11 + (long)puVar10);
          goto LAB_036aee9c;
        }
        goto LAB_036aee98;
      }
      cVar22 = '\x01';
      *(undefined8 *)puVar8 = 0xffffffffffffffff;
      *(undefined8 *)(puVar8 + 8) = 0xffffffffffffffff;
      *puVar7 = 1;
      *(undefined8 *)(puVar8 + 0x10) = 0xffffffffffffffff;
      *(undefined8 *)(puVar8 + 0x18) = 0xffffffffffffffff;
      *(undefined8 *)(puVar8 + 0x20) = 0xffffffffffffffff;
      *(undefined8 *)(puVar8 + 0x28) = 0xffffffffffffffff;
      *(undefined8 *)(puVar8 + 0x30) = 0xffffffffffffffff;
      *(undefined8 *)(puVar8 + 0x38) = 0xffffffffffffffff;
      *(undefined8 *)(puVar8 + 0x40) = 0xffffffffffffffff;
      *(undefined8 *)(puVar8 + 0x48) = 0xffffffffffffffff;
      *(undefined8 *)(puVar8 + 0x50) = 0xffffffffffffffff;
      *(undefined8 *)(puVar8 + 0x58) = 0xffffffffffffffff;
      *(undefined8 *)(puVar8 + 0x60) = 0xffffffffffffffff;
      *(undefined8 *)(puVar8 + 0x68) = 0xffffffffffffffff;
      *(undefined8 *)(puVar8 + 0x70) = 0xffffffffffffffff;
      *(undefined8 *)(puVar8 + 0x78) = 0xffffffffffffffff;
LAB_036aede4:
      puVar21 = (uint *)(ulong)*puVar10;
      uVar11 = 0;
      if ((*puVar10 == 0) || (puVar10 == puVar21)) {
LAB_036aee9c:
        uVar9 = *puVar10;
        if (uVar9 == 0) goto LAB_036aef30;
        uVar30 = *(uint *)(puVar8 + 0x40);
        goto LAB_036aeebc;
      }
      lVar6 = 0xc;
      if (*(char *)((long)puVar10 + (10 - (long)puVar21)) != '\0') {
        lVar6 = 0x1c;
      }
      lVar6 = (long)puVar10 + (lVar6 - (long)puVar21);
      if (lVar6 == 0) {
LAB_036aee98:
        uVar11 = 0;
        goto LAB_036aee9c;
      }
      uVar25 = (ulong)*(ushort *)((long)puVar10 + (8 - (long)puVar21));
      *(undefined4 *)(puVar8 + 0x3c) = 0xfffffffe;
      if (uVar25 == 0) goto LAB_036aee98;
      piVar26 = (int *)(lVar6 + 4);
      while (piVar26[-1] != -0xaf8bc05) {
        piVar26 = piVar26 + 2;
        uVar25 = uVar25 - 1;
        if (uVar25 == 0) goto LAB_036aee98;
      }
      iVar1 = 0;
      if (*piVar26 != -1) {
        iVar1 = *piVar26;
      }
      *(int *)(puVar8 + 0x3c) = iVar1;
    } while (*puVar10 != 0);
  }
  uVar11 = 0;
  goto LAB_036aef30;
LAB_036aeebc:
  do {
    if (-1 < (int)uVar30) {
      if ((byte *)((long)puVar10 + (ulong)uVar30) == (byte *)0x0) goto LAB_036af0dc;
      uVar9 = (uint)*(byte *)((long)puVar10 + (ulong)uVar30);
LAB_036af0e0:
      uVar30 = *puVar10;
      if (uVar30 == 0) goto LAB_036af174;
      uVar31 = *(uint *)(puVar8 + 0x44);
      goto LAB_036af100;
    }
    if ((uVar30 != 0xffffffff) || (lVar6 = (long)puVar10 - (ulong)uVar9, lVar6 == 0)) {
LAB_036af0dc:
      uVar9 = 0;
      goto LAB_036af0e0;
    }
    lVar2 = 0xc;
    if (*(char *)(lVar6 + 10) != '\0') {
      lVar2 = 0x1c;
    }
    if (lVar2 + lVar6 == 0) goto LAB_036af0dc;
    uVar25 = (ulong)*(ushort *)(lVar6 + 8);
    *(undefined4 *)(puVar8 + 0x40) = 0xfffffffe;
    if (uVar25 == 0) goto LAB_036af0dc;
    puVar21 = (uint *)(lVar2 + lVar6 + 4);
    while (puVar21[-1] != 0x4dbb249e) {
      puVar21 = puVar21 + 2;
      uVar25 = uVar25 - 1;
      if (uVar25 == 0) goto LAB_036af0dc;
    }
    uVar30 = 0;
    if (*puVar21 != 0xffffffff) {
      uVar30 = *puVar21;
    }
    *(uint *)(puVar8 + 0x40) = uVar30;
    uVar9 = *puVar10;
  } while (uVar9 != 0);
LAB_036aef30:
  uVar30 = 0;
  uVar9 = 0;
  goto LAB_036aef34;
LAB_036af100:
  do {
    if (-1 < (int)uVar31) {
      if ((byte *)((long)puVar10 + (ulong)uVar31) == (byte *)0x0) goto LAB_036af238;
      uVar30 = (uint)*(byte *)((long)puVar10 + (ulong)uVar31);
LAB_036af23c:
      uVar31 = *puVar10;
      if (uVar31 == 0) goto LAB_036aef34;
      uVar27 = *(uint *)(puVar8 + 0x48);
      goto LAB_036af25c;
    }
    if ((uVar31 != 0xffffffff) || (lVar6 = (long)puVar10 - (ulong)uVar30, lVar6 == 0)) {
LAB_036af238:
      uVar30 = 0;
      goto LAB_036af23c;
    }
    lVar2 = 0xc;
    if (*(char *)(lVar6 + 10) != '\0') {
      lVar2 = 0x1c;
    }
    if (lVar2 + lVar6 == 0) goto LAB_036af238;
    uVar25 = (ulong)*(ushort *)(lVar6 + 8);
    *(undefined4 *)(puVar8 + 0x44) = 0xfffffffe;
    if (uVar25 == 0) goto LAB_036af238;
    puVar21 = (uint *)(lVar2 + lVar6 + 4);
    while (puVar21[-1] != 0x5f0e8b70) {
      puVar21 = puVar21 + 2;
      uVar25 = uVar25 - 1;
      if (uVar25 == 0) goto LAB_036af238;
    }
    uVar31 = 0;
    if (*puVar21 != 0xffffffff) {
      uVar31 = *puVar21;
    }
    *(uint *)(puVar8 + 0x44) = uVar31;
    uVar30 = *puVar10;
  } while (uVar30 != 0);
LAB_036af174:
  uVar30 = 0;
  goto LAB_036aef34;
LAB_036afc34:
  do {
    if (-1 < (int)uVar28) {
      if ((byte *)((long)puVar10 + (ulong)uVar28) == (byte *)0x0) goto LAB_036afcbc;
      uVar27 = (uint)*(byte *)((long)puVar10 + (ulong)uVar28);
LAB_036afcc0:
      uVar28 = *puVar10;
      if (uVar28 == 0) goto LAB_036aef38;
      uVar29 = *(uint *)(puVar8 + 0x50);
      goto LAB_036afce0;
    }
    if ((uVar28 != 0xffffffff) || (lVar6 = (long)puVar10 - (ulong)uVar27, lVar6 == 0)) {
LAB_036afcbc:
      uVar27 = 0;
      goto LAB_036afcc0;
    }
    lVar2 = 0xc;
    if (*(char *)(lVar6 + 10) != '\0') {
      lVar2 = 0x1c;
    }
    if (lVar2 + lVar6 == 0) goto LAB_036afcbc;
    uVar25 = (ulong)*(ushort *)(lVar6 + 8);
    *(undefined4 *)(puVar8 + 0x4c) = 0xfffffffe;
    if (uVar25 == 0) goto LAB_036afcbc;
    puVar21 = (uint *)(lVar2 + lVar6 + 4);
    while (puVar21[-1] != 0x7a65d4ac) {
      puVar21 = puVar21 + 2;
      uVar25 = uVar25 - 1;
      if (uVar25 == 0) goto LAB_036afcbc;
    }
    uVar28 = 0;
    if (*puVar21 != 0xffffffff) {
      uVar28 = *puVar21;
    }
    *(uint *)(puVar8 + 0x4c) = uVar28;
    uVar27 = *puVar10;
  } while (uVar27 != 0);
LAB_036afca4:
  uVar27 = 0;
  goto LAB_036aef38;
LAB_036afce0:
  if (-1 < (int)uVar29) {
    if ((byte *)((long)puVar10 + (ulong)uVar29) != (byte *)0x0) {
      uVar28 = (uint)*(byte *)((long)puVar10 + (ulong)uVar29);
      uVar29 = *puVar10;
      goto joined_r0x036afd68;
    }
    goto LAB_036aef38;
  }
  if ((uVar29 != 0xffffffff) || (lVar6 = (long)puVar10 - (ulong)uVar28, lVar6 == 0))
  goto LAB_036aef38;
  lVar2 = 0xc;
  if (*(char *)(lVar6 + 10) != '\0') {
    lVar2 = 0x1c;
  }
  if (lVar2 + lVar6 == 0) goto LAB_036aef38;
  uVar25 = (ulong)*(ushort *)(lVar6 + 8);
  *(undefined4 *)(puVar8 + 0x50) = 0xfffffffe;
  if (uVar25 == 0) goto LAB_036aef38;
  puVar21 = (uint *)(lVar2 + lVar6 + 4);
  while (puVar21[-1] != 0xc2d9b3c9) {
    puVar21 = puVar21 + 2;
    uVar25 = uVar25 - 1;
    if (uVar25 == 0) goto LAB_036aef38;
  }
  uVar29 = 0;
  if (*puVar21 != 0xffffffff) {
    uVar29 = *puVar21;
  }
  *(uint *)(puVar8 + 0x50) = uVar29;
  uVar28 = *puVar10;
  if (uVar28 == 0) goto LAB_036aef38;
  goto LAB_036afce0;
LAB_036af054:
  do {
    if (-1 < (int)uVar23) {
      if ((byte *)((long)puVar10 + (ulong)uVar23) == (byte *)0x0) goto LAB_036af190;
      uVar32 = (uint)*(byte *)((long)puVar10 + (ulong)uVar23);
LAB_036af194:
      uVar23 = *puVar10;
      if (uVar23 == 0) goto LAB_036af2e0;
      uVar24 = *(uint *)(puVar8 + 0x5c);
      goto LAB_036af1b4;
    }
    if ((uVar23 != 0xffffffff) || (lVar6 = (long)puVar10 - (ulong)uVar32, lVar6 == 0)) {
LAB_036af190:
      uVar32 = 0;
      goto LAB_036af194;
    }
    lVar2 = 0xc;
    if (*(char *)(lVar6 + 10) != '\0') {
      lVar2 = 0x1c;
    }
    if (lVar2 + lVar6 == 0) goto LAB_036af190;
    uVar25 = (ulong)*(ushort *)(lVar6 + 8);
    *(undefined4 *)(puVar8 + 0x58) = 0xfffffffe;
    if (uVar25 == 0) goto LAB_036af190;
    puVar21 = (uint *)(lVar2 + lVar6 + 4);
    while (puVar21[-1] != 0x68d07b42) {
      puVar21 = puVar21 + 2;
      uVar25 = uVar25 - 1;
      if (uVar25 == 0) goto LAB_036af190;
    }
    uVar23 = 0;
    if (*puVar21 != 0xffffffff) {
      uVar23 = *puVar21;
    }
    *(uint *)(puVar8 + 0x58) = uVar23;
    uVar32 = *puVar10;
  } while (uVar32 != 0);
LAB_036af0c4:
  uVar32 = 0;
  goto LAB_036af2e0;
LAB_036af1b4:
  if (-1 < (int)uVar24) {
    if ((byte *)((long)puVar10 + (ulong)uVar24) != (byte *)0x0) {
      uVar23 = (uint)*(byte *)((long)puVar10 + (ulong)uVar24);
      goto LAB_036af2e4;
    }
    goto LAB_036af2e0;
  }
  if ((uVar24 != 0xffffffff) || (lVar6 = (long)puVar10 - (ulong)uVar23, lVar6 == 0))
  goto LAB_036af2e0;
  lVar2 = 0xc;
  if (*(char *)(lVar6 + 10) != '\0') {
    lVar2 = 0x1c;
  }
  uVar23 = 0;
  if (lVar2 + lVar6 == 0) goto LAB_036af2e4;
  uVar25 = (ulong)*(ushort *)(lVar6 + 8);
  *(undefined4 *)(puVar8 + 0x5c) = 0xfffffffe;
  if (uVar25 == 0) goto LAB_036af2e0;
  puVar21 = (uint *)(lVar2 + lVar6 + 4);
  while (puVar21[-1] != 0x30b36b14) {
    puVar21 = puVar21 + 2;
    uVar25 = uVar25 - 1;
    if (uVar25 == 0) goto LAB_036af2e0;
  }
  uVar24 = 0;
  if (*puVar21 != 0xffffffff) {
    uVar24 = *puVar21;
  }
  *(uint *)(puVar8 + 0x5c) = uVar24;
  uVar23 = *puVar10;
  if (uVar23 == 0) goto LAB_036af2e0;
  goto LAB_036af1b4;
LAB_036af25c:
  do {
    if (-1 < (int)uVar27) {
      if ((byte *)((long)puVar10 + (ulong)uVar27) == (byte *)0x0) goto LAB_036afc10;
      uVar31 = (uint)*(byte *)((long)puVar10 + (ulong)uVar27);
LAB_036afc14:
      uVar27 = *puVar10;
      if (uVar27 == 0) goto LAB_036afca4;
      uVar28 = *(uint *)(puVar8 + 0x4c);
      goto LAB_036afc34;
    }
    if ((uVar27 != 0xffffffff) || (lVar6 = (long)puVar10 - (ulong)uVar31, lVar6 == 0)) {
LAB_036afc10:
      uVar31 = 0;
      goto LAB_036afc14;
    }
    lVar2 = 0xc;
    if (*(char *)(lVar6 + 10) != '\0') {
      lVar2 = 0x1c;
    }
    if (lVar2 + lVar6 == 0) goto LAB_036afc10;
    uVar25 = (ulong)*(ushort *)(lVar6 + 8);
    *(undefined4 *)(puVar8 + 0x48) = 0xfffffffe;
    if (uVar25 == 0) goto LAB_036afc10;
    puVar21 = (uint *)(lVar2 + lVar6 + 4);
    while (puVar21[-1] != 0xe7b2ec15) {
      puVar21 = puVar21 + 2;
      uVar25 = uVar25 - 1;
      if (uVar25 == 0) goto LAB_036afc10;
    }
    uVar27 = 0;
    if (*puVar21 != 0xffffffff) {
      uVar27 = *puVar21;
    }
    *(uint *)(puVar8 + 0x48) = uVar27;
    uVar31 = *puVar10;
  } while (uVar31 != 0);
LAB_036aef34:
  uVar27 = 0;
  uVar31 = 0;
LAB_036aef38:
  uVar28 = 0;
  uVar29 = *puVar10;
joined_r0x036afd68:
  if (uVar29 != 0) {
    cVar22 = *puVar7;
    do {
      if (cVar22 != '\0') {
        uVar29 = *(uint *)(puVar8 + 0x54);
        if ((int)uVar29 < 0) {
          if (uVar29 == 0xffffffff) goto LAB_036aef9c;
        }
        else if ((byte *)((ulong)uVar29 + (long)puVar10) != (byte *)0x0) {
          uVar29 = (uint)*(byte *)((ulong)uVar29 + (long)puVar10);
          goto LAB_036af034;
        }
        goto LAB_036af030;
      }
      cVar22 = '\x01';
      *(undefined8 *)puVar8 = 0xffffffffffffffff;
      *(undefined8 *)(puVar8 + 8) = 0xffffffffffffffff;
      *puVar7 = 1;
      *(undefined8 *)(puVar8 + 0x10) = 0xffffffffffffffff;
      *(undefined8 *)(puVar8 + 0x18) = 0xffffffffffffffff;
      *(undefined8 *)(puVar8 + 0x20) = 0xffffffffffffffff;
      *(undefined8 *)(puVar8 + 0x28) = 0xffffffffffffffff;
      *(undefined8 *)(puVar8 + 0x30) = 0xffffffffffffffff;
      *(undefined8 *)(puVar8 + 0x38) = 0xffffffffffffffff;
      *(undefined8 *)(puVar8 + 0x40) = 0xffffffffffffffff;
      *(undefined8 *)(puVar8 + 0x48) = 0xffffffffffffffff;
      *(undefined8 *)(puVar8 + 0x50) = 0xffffffffffffffff;
      *(undefined8 *)(puVar8 + 0x58) = 0xffffffffffffffff;
      *(undefined8 *)(puVar8 + 0x60) = 0xffffffffffffffff;
      *(undefined8 *)(puVar8 + 0x68) = 0xffffffffffffffff;
      *(undefined8 *)(puVar8 + 0x70) = 0xffffffffffffffff;
      *(undefined8 *)(puVar8 + 0x78) = 0xffffffffffffffff;
LAB_036aef9c:
      puVar21 = (uint *)(ulong)*puVar10;
      uVar29 = 0;
      if ((*puVar10 == 0) || (puVar10 == puVar21)) {
LAB_036af034:
        uVar32 = *puVar10;
        if (uVar32 == 0) goto LAB_036af0c4;
        uVar23 = *(uint *)(puVar8 + 0x58);
        goto LAB_036af054;
      }
      lVar6 = 0xc;
      if (*(char *)((long)puVar10 + (10 - (long)puVar21)) != '\0') {
        lVar6 = 0x1c;
      }
      lVar6 = (long)puVar10 + (lVar6 - (long)puVar21);
      if (lVar6 == 0) {
LAB_036af030:
        uVar29 = 0;
        goto LAB_036af034;
      }
      uVar25 = (ulong)*(ushort *)((long)puVar10 + (8 - (long)puVar21));
      *(undefined4 *)(puVar8 + 0x54) = 0xfffffffe;
      if (uVar25 == 0) goto LAB_036af030;
      piVar26 = (int *)(lVar6 + 4);
      while (piVar26[-1] != -0x2f93e3d9) {
        piVar26 = piVar26 + 2;
        uVar25 = uVar25 - 1;
        if (uVar25 == 0) goto LAB_036af030;
      }
      iVar1 = 0;
      if (*piVar26 != -1) {
        iVar1 = *piVar26;
      }
      *(int *)(puVar8 + 0x54) = iVar1;
    } while (*puVar10 != 0);
  }
  uVar32 = 0;
  uVar29 = 0;
LAB_036af2e0:
  uVar23 = 0;
LAB_036af2e4:
  uVar24 = *puVar10;
  uVar12 = 0;
  if ((uVar24 != 0) && (puVar10 != (uint *)(ulong)uVar24)) {
    puVar21 = (uint *)((long)puVar10 - (long)(ulong)uVar24);
    uVar12 = 0;
    if (*puVar21 != 0) {
      uVar24 = puVar21[1];
      if ((uVar24 != 0) && ((ulong)(ushort)puVar21[2] != 0)) {
        lVar6 = 0xc;
        if (*(char *)((long)puVar21 + 10) != '\0') {
          lVar6 = 0x1c;
        }
        lVar6 = (long)puVar21 + lVar6 + (ulong)(ushort)puVar21[2] * 8;
        if (lVar6 != 0) {
          uVar12 = 0;
          if ((ulong)uVar24 != 0) {
            uVar12 = (uint)((ulong)((long)puVar10 - lVar6) / (ulong)uVar24);
          }
          if (*puVar21 <= uVar12) {
            uVar12 = 0xffffffff;
          }
          if ((uVar12 < DAT_05ab2598) &&
             (uVar12 = (uint)*(ushort *)(DAT_05ab25a0 + (long)(int)uVar12 * 2), uVar12 < 0x3d))
          goto LAB_036af370;
        }
      }
      uVar12 = 0;
    }
  }
LAB_036af370:
  uVar17 = 0;
  uVar24 = *puVar10;
  if ((uVar24 != 0) && (puVar10 != (uint *)(ulong)uVar24)) {
    puVar21 = (uint *)((long)puVar10 - (long)(ulong)uVar24);
    if ((*puVar21 == 0) || ((uVar24 = puVar21[1], uVar24 == 0 || ((ulong)(ushort)puVar21[2] == 0))))
    {
LAB_036af3fc:
      uVar17 = 0;
    }
    else {
      lVar6 = 0xc;
      if (*(char *)((long)puVar21 + 10) != '\0') {
        lVar6 = 0x1c;
      }
      lVar6 = (long)puVar21 + lVar6 + (ulong)(ushort)puVar21[2] * 8;
      uVar17 = 0;
      if (lVar6 != 0) {
        uVar17 = 0;
        if ((ulong)uVar24 != 0) {
          uVar17 = (uint)((ulong)((long)puVar10 - lVar6) / (ulong)uVar24);
        }
        if (*puVar21 <= uVar17) {
          uVar17 = 0xffffffff;
        }
        if ((DAT_05ab25a8 <= uVar17) ||
           (uVar5 = *(ushort *)(DAT_05ab25b0 + (long)(int)uVar17 * 2), uVar17 = (uint)uVar5,
           0x3c < uVar5)) goto LAB_036af3fc;
      }
    }
  }
  uVar13 = 0;
  uVar24 = *puVar10;
  if ((uVar24 != 0) && (puVar10 != (uint *)(ulong)uVar24)) {
    puVar21 = (uint *)((long)puVar10 - (long)(ulong)uVar24);
    uVar13 = 0;
    if (*puVar21 != 0) {
      uVar24 = puVar21[1];
      if ((uVar24 != 0) && ((ulong)(ushort)puVar21[2] != 0)) {
        lVar6 = 0xc;
        if (*(char *)((long)puVar21 + 10) != '\0') {
          lVar6 = 0x1c;
        }
        lVar6 = (long)puVar21 + lVar6 + (ulong)(ushort)puVar21[2] * 8;
        if (lVar6 != 0) {
          uVar13 = 0;
          if ((ulong)uVar24 != 0) {
            uVar13 = (uint)((ulong)((long)puVar10 - lVar6) / (ulong)uVar24);
          }
          if (*puVar21 <= uVar13) {
            uVar13 = 0xffffffff;
          }
          if ((uVar13 < DAT_05ab25b8) &&
             (uVar13 = (uint)*(ushort *)(DAT_05ab25c0 + (long)(int)uVar13 * 2), uVar13 < 0x3d))
          goto LAB_036af490;
        }
      }
      uVar13 = 0;
    }
  }
LAB_036af490:
  uVar18 = 0;
  uVar24 = *puVar10;
  if ((uVar24 != 0) && (puVar10 != (uint *)(ulong)uVar24)) {
    puVar21 = (uint *)((long)puVar10 - (long)(ulong)uVar24);
    if ((*puVar21 == 0) || ((uVar24 = puVar21[1], uVar24 == 0 || ((ulong)(ushort)puVar21[2] == 0))))
    {
LAB_036af51c:
      uVar18 = 0;
    }
    else {
      lVar6 = 0xc;
      if (*(char *)((long)puVar21 + 10) != '\0') {
        lVar6 = 0x1c;
      }
      lVar6 = (long)puVar21 + lVar6 + (ulong)(ushort)puVar21[2] * 8;
      uVar18 = 0;
      if (lVar6 != 0) {
        uVar18 = 0;
        if ((ulong)uVar24 != 0) {
          uVar18 = (uint)((ulong)((long)puVar10 - lVar6) / (ulong)uVar24);
        }
        if (*puVar21 <= uVar18) {
          uVar18 = 0xffffffff;
        }
        if ((DAT_05ab25c8 <= uVar18) ||
           (uVar5 = *(ushort *)(DAT_05ab25d0 + (long)(int)uVar18 * 2), uVar18 = (uint)uVar5,
           0x3c < uVar5)) goto LAB_036af51c;
      }
    }
  }
  uVar14 = 0;
  uVar24 = *puVar10;
  if ((uVar24 != 0) && (puVar10 != (uint *)(ulong)uVar24)) {
    puVar21 = (uint *)((long)puVar10 - (long)(ulong)uVar24);
    uVar14 = 0;
    if (*puVar21 != 0) {
      uVar24 = puVar21[1];
      if ((uVar24 != 0) && ((ulong)(ushort)puVar21[2] != 0)) {
        lVar6 = 0xc;
        if (*(char *)((long)puVar21 + 10) != '\0') {
          lVar6 = 0x1c;
        }
        lVar6 = (long)puVar21 + lVar6 + (ulong)(ushort)puVar21[2] * 8;
        if (lVar6 != 0) {
          uVar14 = 0;
          if ((ulong)uVar24 != 0) {
            uVar14 = (uint)((ulong)((long)puVar10 - lVar6) / (ulong)uVar24);
          }
          if (*puVar21 <= uVar14) {
            uVar14 = 0xffffffff;
          }
          if ((uVar14 < DAT_05ab25d8) &&
             (uVar14 = (uint)*(ushort *)(DAT_05ab25e0 + (long)(int)uVar14 * 2), uVar14 < 0x3d))
          goto LAB_036af5b0;
        }
      }
      uVar14 = 0;
    }
  }
LAB_036af5b0:
  uVar19 = 0;
  uVar24 = *puVar10;
  if ((uVar24 != 0) && (puVar10 != (uint *)(ulong)uVar24)) {
    puVar21 = (uint *)((long)puVar10 - (long)(ulong)uVar24);
    if ((*puVar21 == 0) || ((uVar24 = puVar21[1], uVar24 == 0 || ((ulong)(ushort)puVar21[2] == 0))))
    {
LAB_036af63c:
      uVar19 = 0;
    }
    else {
      lVar6 = 0xc;
      if (*(char *)((long)puVar21 + 10) != '\0') {
        lVar6 = 0x1c;
      }
      lVar6 = (long)puVar21 + lVar6 + (ulong)(ushort)puVar21[2] * 8;
      uVar19 = 0;
      if (lVar6 != 0) {
        uVar19 = 0;
        if ((ulong)uVar24 != 0) {
          uVar19 = (uint)((ulong)((long)puVar10 - lVar6) / (ulong)uVar24);
        }
        if (*puVar21 <= uVar19) {
          uVar19 = 0xffffffff;
        }
        if ((DAT_05ab25e8 <= uVar19) ||
           (uVar5 = *(ushort *)(DAT_05ab25f0 + (long)(int)uVar19 * 2), uVar19 = (uint)uVar5,
           0x3c < uVar5)) goto LAB_036af63c;
      }
    }
  }
  uVar15 = 0;
  uVar24 = *puVar10;
  if ((uVar24 != 0) && (puVar10 != (uint *)(ulong)uVar24)) {
    puVar21 = (uint *)((long)puVar10 - (long)(ulong)uVar24);
    uVar15 = 0;
    if (*puVar21 != 0) {
      uVar24 = puVar21[1];
      if ((uVar24 != 0) && ((ulong)(ushort)puVar21[2] != 0)) {
        lVar6 = 0xc;
        if (*(char *)((long)puVar21 + 10) != '\0') {
          lVar6 = 0x1c;
        }
        lVar6 = (long)puVar21 + lVar6 + (ulong)(ushort)puVar21[2] * 8;
        if (lVar6 != 0) {
          uVar15 = 0;
          if ((ulong)uVar24 != 0) {
            uVar15 = (uint)((ulong)((long)puVar10 - lVar6) / (ulong)uVar24);
          }
          if (*puVar21 <= uVar15) {
            uVar15 = 0xffffffff;
          }
          if ((uVar15 < DAT_05ab25f8) &&
             (uVar15 = (uint)*(ushort *)(DAT_05ab2600 + (long)(int)uVar15 * 2), uVar15 < 0x3d))
          goto LAB_036af6d0;
        }
      }
      uVar15 = 0;
    }
  }
LAB_036af6d0:
  uVar20 = 0;
  uVar24 = *puVar10;
  if ((uVar24 != 0) && (puVar10 != (uint *)(ulong)uVar24)) {
    puVar21 = (uint *)((long)puVar10 - (long)(ulong)uVar24);
    if ((*puVar21 == 0) || ((uVar24 = puVar21[1], uVar24 == 0 || ((ulong)(ushort)puVar21[2] == 0))))
    {
LAB_036af75c:
      uVar20 = 0;
    }
    else {
      lVar6 = 0xc;
      if (*(char *)((long)puVar21 + 10) != '\0') {
        lVar6 = 0x1c;
      }
      lVar6 = (long)puVar21 + lVar6 + (ulong)(ushort)puVar21[2] * 8;
      uVar20 = 0;
      if (lVar6 != 0) {
        uVar20 = 0;
        if ((ulong)uVar24 != 0) {
          uVar20 = (uint)((ulong)((long)puVar10 - lVar6) / (ulong)uVar24);
        }
        if (*puVar21 <= uVar20) {
          uVar20 = 0xffffffff;
        }
        if ((DAT_05ab2608 <= uVar20) ||
           (uVar5 = *(ushort *)(DAT_05ab2610 + (long)(int)uVar20 * 2), uVar20 = (uint)uVar5,
           0x3c < uVar5)) goto LAB_036af75c;
      }
    }
  }
  uVar16 = 0;
  uVar24 = *puVar10;
  if ((uVar24 != 0) && (puVar10 != (uint *)(ulong)uVar24)) {
    puVar21 = (uint *)((long)puVar10 - (long)(ulong)uVar24);
    uVar16 = 0;
    if (*puVar21 != 0) {
      uVar24 = puVar21[1];
      if ((uVar24 != 0) && ((ulong)(ushort)puVar21[2] != 0)) {
        lVar6 = 0xc;
        if (*(char *)((long)puVar21 + 10) != '\0') {
          lVar6 = 0x1c;
        }
        lVar6 = (long)puVar21 + lVar6 + (ulong)(ushort)puVar21[2] * 8;
        if (lVar6 != 0) {
          uVar16 = 0;
          if ((ulong)uVar24 != 0) {
            uVar16 = (uint)((ulong)((long)puVar10 - lVar6) / (ulong)uVar24);
          }
          if (*puVar21 <= uVar16) {
            uVar16 = 0xffffffff;
          }
          if ((uVar16 < DAT_05ab2618) &&
             (uVar16 = (uint)*(ushort *)(DAT_05ab2620 + (long)(int)uVar16 * 2), uVar16 < 0x3d))
          goto LAB_036af7f0;
        }
      }
      uVar16 = 0;
    }
  }
LAB_036af7f0:
  if ((uVar12 == 0) || (*param_4 == uVar12)) {
    uVar24 = 0;
  }
  else {
    uVar24 = uVar11;
    if ((*(uint *)(param_3 + (long)((int)uVar12 >> 5) * 4) >> (ulong)(uVar12 & 0x1f) & 1) != 0) {
      uVar24 = 0;
      uVar11 = uVar24;
    }
  }
  if ((uVar17 != 0) && (*param_4 != uVar17)) {
    if ((*(uint *)(param_3 + (long)((int)uVar17 >> 5) * 4) >> (ulong)(uVar17 & 0x1f) & 1) != 0) {
      uVar9 = 0;
    }
    uVar24 = uVar9 + uVar24;
  }
  if ((uVar13 != 0) && (*param_4 != uVar13)) {
    if ((*(uint *)(param_3 + (long)((int)uVar13 >> 5) * 4) >> (ulong)(uVar13 & 0x1f) & 1) != 0) {
      uVar30 = 0;
    }
    uVar24 = uVar30 + uVar24;
  }
  if ((uVar18 != 0) && (*param_4 != uVar18)) {
    if ((*(uint *)(param_3 + (long)((int)uVar18 >> 5) * 4) >> (ulong)(uVar18 & 0x1f) & 1) != 0) {
      uVar31 = 0;
    }
    uVar24 = uVar31 + uVar24;
  }
  if ((uVar14 != 0) && (*param_4 != uVar14)) {
    if ((*(uint *)(param_3 + (long)((int)uVar14 >> 5) * 4) >> (ulong)(uVar14 & 0x1f) & 1) != 0) {
      uVar27 = 0;
    }
    uVar24 = uVar27 + uVar24;
  }
  if ((uVar19 != 0) && (*param_4 != uVar19)) {
    if ((*(uint *)(param_3 + (long)((int)uVar19 >> 5) * 4) >> (ulong)(uVar19 & 0x1f) & 1) != 0) {
      uVar28 = 0;
    }
    uVar24 = uVar28 + uVar24;
  }
  if ((uVar15 != 0) && (*param_4 != uVar15)) {
    if ((*(uint *)(param_3 + (long)((int)uVar15 >> 5) * 4) >> (ulong)(uVar15 & 0x1f) & 1) != 0) {
      uVar29 = 0;
    }
    uVar24 = uVar29 + uVar24;
  }
  if ((uVar20 != 0) && (*param_4 != uVar20)) {
    if ((*(uint *)(param_3 + (long)((int)uVar20 >> 5) * 4) >> (ulong)(uVar20 & 0x1f) & 1) != 0) {
      uVar32 = 0;
    }
    uVar24 = uVar32 + uVar24;
  }
  if ((uVar16 != 0) && (*param_4 != uVar16)) {
    if ((*(uint *)(param_3 + (long)((int)uVar16 >> 5) * 4) >> (ulong)(uVar16 & 0x1f) & 1) != 0) {
      uVar23 = 0;
    }
    uVar24 = uVar23 + uVar24;
  }
  if (uVar24 != 0) {
    puVar21 = (uint *)nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_04bb39d8);
    uVar3 = *puVar21 ^ *puVar21 << 0xb;
    uVar4 = puVar21[3];
    *puVar21 = puVar21[1];
    puVar21[1] = puVar21[2];
    uVar3 = uVar3 >> 8 ^ uVar4 >> 0x13 ^ uVar3 ^ uVar4;
    puVar21[2] = uVar4;
    puVar21[3] = uVar3;
    uVar24 = (uint)((ulong)uVar3 * (ulong)uVar24 >> 0x20);
    if ((uVar12 == 0) || (*param_4 == uVar12)) {
      uVar11 = 0;
    }
    else if (uVar24 < uVar11) {
      return uVar12;
    }
    if (((uVar17 != 0) && (*param_4 != uVar17)) && (uVar11 = uVar11 + uVar9, uVar24 < uVar11)) {
      return uVar17;
    }
    if (((uVar13 != 0) && (*param_4 != uVar13)) && (uVar11 = uVar11 + uVar30, uVar24 < uVar11)) {
      return uVar13;
    }
    if (((uVar18 != 0) && (*param_4 != uVar18)) && (uVar11 = uVar11 + uVar31, uVar24 < uVar11)) {
      return uVar18;
    }
    if (((uVar14 != 0) && (*param_4 != uVar14)) && (uVar11 = uVar11 + uVar27, uVar24 < uVar11)) {
      return uVar14;
    }
    if (((uVar19 != 0) && (*param_4 != uVar19)) && (uVar11 = uVar11 + uVar28, uVar24 < uVar11)) {
      return uVar19;
    }
    if (((uVar15 != 0) && (*param_4 != uVar15)) && (uVar11 = uVar11 + uVar29, uVar24 < uVar11)) {
      return uVar15;
    }
    if (((uVar20 != 0) && (*param_4 != uVar20)) && (uVar11 = uVar11 + uVar32, uVar24 < uVar11)) {
      return uVar20;
    }
    if (((uVar16 != 0) && (*param_4 != uVar16)) && (uVar24 < uVar11 + uVar23)) {
      return uVar16;
    }
  }
  uVar11 = *puVar10;
  if ((uVar11 != 0) && (puVar10 != (uint *)(ulong)uVar11)) {
    puVar21 = (uint *)((long)puVar10 - (long)(ulong)uVar11);
    if ((*puVar21 != 0) && ((uVar11 = puVar21[1], uVar11 != 0 && ((ulong)(ushort)puVar21[2] != 0))))
    {
      lVar6 = 0xc;
      if (*(char *)((long)puVar21 + 10) != '\0') {
        lVar6 = 0x1c;
      }
      lVar6 = (long)puVar21 + lVar6 + (ulong)(ushort)puVar21[2] * 8;
      if (lVar6 != 0) {
        uVar9 = 0;
        if ((ulong)uVar11 != 0) {
          uVar9 = (uint)((ulong)((long)puVar10 - lVar6) / (ulong)uVar11);
        }
        if (*puVar21 <= uVar9) {
          uVar9 = 0xffffffff;
        }
        if ((uVar9 < DAT_05ab2628) &&
           (uVar5 = *(ushort *)(DAT_05ab2630 + (long)(int)uVar9 * 2), uVar5 < 0x3d)) {
          return (uint)uVar5;
        }
      }
    }
  }
  return 0;
}

