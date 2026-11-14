
void FUN_01b02920(byte *param_1,undefined8 *param_2,uint *param_3)

{
  int iVar1;
  undefined8 *puVar2;
  long lVar3;
  uint uVar4;
  uint uVar5;
  undefined *puVar6;
  undefined *puVar7;
  bool bVar8;
  bool bVar9;
  bool bVar10;
  bool bVar11;
  undefined8 uVar12;
  uint uVar13;
  uint uVar14;
  byte bVar15;
  uint uVar16;
  long lVar17;
  uint *puVar18;
  char cVar19;
  uint uVar20;
  uint uVar21;
  uint *puVar22;
  ulong uVar23;
  int *piVar24;
  uint uVar25;
  
  puVar7 = PTR_DAT_04bbffe0;
  puVar6 = PTR_DAT_04bbffd8;
  if (param_3 == (uint *)0x0) {
    uVar16 = *(uint *)(*(long *)PTR_DAT_04bb30a0 + 0x65204);
    if (1 < uVar16) {
      uVar16 = 0;
    }
  }
  else {
    uVar16 = *param_3;
  }
  uVar14 = 0;
  puVar2 = (undefined8 *)(*(long *)PTR_DAT_04bb32e8 + 0x4060);
  if (param_2 != (undefined8 *)0x0) {
    puVar2 = param_2;
  }
  uVar12 = *puVar2;
  uVar5 = (uint)((ulong)uVar12 >> 0x10);
  uVar13 = (uint)((ulong)uVar12 >> 0x18) & 0xff;
  bVar8 = (uVar5 & 0xff) != 1;
  lVar17 = DAT_0532a818;
  if (uVar16 != 1) {
LAB_01b02e0c:
    uVar16 = uVar14 - *(ushort *)(lVar17 + 0x1f8);
    if (uVar16 < *(uint *)(lVar17 + 0x1d8)) {
      puVar18 = *(uint **)(*(long *)(lVar17 + 0x1e0) + (long)(int)uVar16 * 8);
      if (puVar18 == (uint *)0x0) goto LAB_01b02e00;
      if (*puVar18 != 0) {
        cVar19 = *puVar6;
        do {
          if (cVar19 != '\0') {
            uVar16 = *(uint *)(puVar7 + 0x18);
            if ((int)uVar16 < 0) {
              if (uVar16 == 0xffffffff) goto LAB_01b02e64;
            }
            else if ((byte *)((ulong)uVar16 + (long)puVar18) != (byte *)0x0) {
              uVar16 = (uint)*(byte *)((ulong)uVar16 + (long)puVar18);
              goto LAB_01b02f70;
            }
            goto LAB_01b02f6c;
          }
          cVar19 = '\x01';
          *(undefined8 *)puVar7 = 0xffffffffffffffff;
          *(undefined8 *)(puVar7 + 8) = 0xffffffffffffffff;
          *puVar6 = 1;
          *(undefined4 *)(puVar7 + 0x20) = 0xffffffff;
          *(undefined8 *)(puVar7 + 0x10) = 0xffffffffffffffff;
          *(undefined8 *)(puVar7 + 0x18) = 0xffffffffffffffff;
LAB_01b02e64:
          puVar22 = (uint *)(ulong)*puVar18;
          uVar16 = 1;
          if ((*puVar18 == 0) || (puVar18 == puVar22)) {
LAB_01b02f70:
            uVar4 = *puVar18;
            if (uVar4 == 0) goto LAB_01b02fe8;
            uVar23 = (ulong)*(uint *)(puVar7 + 0x10);
            goto LAB_01b02f7c;
          }
          lVar17 = 0xc;
          if (*(char *)((long)puVar18 + (10 - (long)puVar22)) != '\0') {
            lVar17 = 0x1c;
          }
          lVar17 = (long)puVar18 + (lVar17 - (long)puVar22);
          if (lVar17 == 0) {
LAB_01b02f6c:
            uVar16 = 1;
            goto LAB_01b02f70;
          }
          uVar23 = (ulong)*(ushort *)((long)puVar18 + (8 - (long)puVar22));
          *(undefined4 *)(puVar7 + 0x18) = 0xfffffffe;
          if (uVar23 == 0) goto LAB_01b02f6c;
          piVar24 = (int *)(lVar17 + 4);
          while (piVar24[-1] != -0xe948cfb) {
            piVar24 = piVar24 + 2;
            uVar23 = uVar23 - 1;
            if (uVar23 == 0) goto LAB_01b02f6c;
          }
          iVar1 = 0;
          if (*piVar24 != -1) {
            iVar1 = *piVar24;
          }
          *(int *)(puVar7 + 0x18) = iVar1;
        } while (*puVar18 != 0);
      }
      uVar21 = 1;
      uVar25 = 2;
      uVar16 = 1;
      uVar20 = 1;
      bVar9 = true;
      bVar11 = bVar8;
      bVar10 = bVar8;
      goto LAB_01b02ef4;
    }
    goto LAB_01b02e00;
  }
LAB_01b02a1c:
  uVar16 = uVar14 - *(ushort *)(lVar17 + 0x1f8);
  if (uVar16 < *(uint *)(lVar17 + 0x1d8)) {
    puVar18 = *(uint **)(*(long *)(lVar17 + 0x1e0) + (long)(int)uVar16 * 8);
    if (puVar18 == (uint *)0x0) goto LAB_01b02a10;
    if (*puVar18 != 0) {
      cVar19 = *puVar6;
      do {
        if (cVar19 != '\0') {
          uVar16 = *(uint *)(puVar7 + 0x1c);
          if ((int)uVar16 < 0) {
            if (uVar16 == 0xffffffff) goto LAB_01b02a74;
          }
          else if ((byte *)((ulong)uVar16 + (long)puVar18) != (byte *)0x0) {
            uVar16 = (uint)*(byte *)((ulong)uVar16 + (long)puVar18);
            goto LAB_01b02b80;
          }
          goto LAB_01b02b7c;
        }
        cVar19 = '\x01';
        *(undefined8 *)puVar7 = 0xffffffffffffffff;
        *(undefined8 *)(puVar7 + 8) = 0xffffffffffffffff;
        *puVar6 = 1;
        *(undefined4 *)(puVar7 + 0x20) = 0xffffffff;
        *(undefined8 *)(puVar7 + 0x10) = 0xffffffffffffffff;
        *(undefined8 *)(puVar7 + 0x18) = 0xffffffffffffffff;
LAB_01b02a74:
        puVar22 = (uint *)(ulong)*puVar18;
        uVar16 = 1;
        if ((*puVar18 == 0) || (puVar18 == puVar22)) {
LAB_01b02b80:
          uVar4 = *puVar18;
          if (uVar4 == 0) goto LAB_01b02bf8;
          uVar23 = (ulong)*(uint *)(puVar7 + 0x14);
          goto LAB_01b02b8c;
        }
        lVar17 = 0xc;
        if (*(char *)((long)puVar18 + (10 - (long)puVar22)) != '\0') {
          lVar17 = 0x1c;
        }
        lVar17 = (long)puVar18 + (lVar17 - (long)puVar22);
        if (lVar17 == 0) {
LAB_01b02b7c:
          uVar16 = 1;
          goto LAB_01b02b80;
        }
        uVar23 = (ulong)*(ushort *)((long)puVar18 + (8 - (long)puVar22));
        *(undefined4 *)(puVar7 + 0x1c) = 0xfffffffe;
        if (uVar23 == 0) goto LAB_01b02b7c;
        piVar24 = (int *)(lVar17 + 4);
        while (piVar24[-1] != 0x6943e8ad) {
          piVar24 = piVar24 + 2;
          uVar23 = uVar23 - 1;
          if (uVar23 == 0) goto LAB_01b02b7c;
        }
        iVar1 = 0;
        if (*piVar24 != -1) {
          iVar1 = *piVar24;
        }
        *(int *)(puVar7 + 0x1c) = iVar1;
      } while (*puVar18 != 0);
    }
    uVar21 = 1;
    uVar25 = 2;
    uVar16 = 1;
    uVar20 = 1;
    bVar9 = true;
    bVar11 = bVar8;
    bVar10 = bVar8;
    goto LAB_01b02b04;
  }
  goto LAB_01b02a10;
  while( true ) {
    lVar3 = 0xc;
    if (*(char *)(lVar17 + 10) != '\0') {
      lVar3 = 0x1c;
    }
    if (lVar3 + lVar17 == 0) goto LAB_01b03018;
    uVar23 = (ulong)*(ushort *)(lVar17 + 8);
    *(undefined4 *)(puVar7 + 0x10) = 0xfffffffe;
    if (uVar23 == 0) goto LAB_01b03018;
    puVar22 = (uint *)(lVar3 + lVar17 + 4);
    while (puVar22[-1] != 0x5fad728f) {
      puVar22 = puVar22 + 2;
      uVar23 = uVar23 - 1;
      if (uVar23 == 0) goto LAB_01b03018;
    }
    uVar23 = 0;
    if (*puVar22 != 0xffffffff) {
      uVar23 = (ulong)*puVar22;
    }
    *(int *)(puVar7 + 0x10) = (int)uVar23;
    uVar4 = *puVar18;
    if (uVar4 == 0) break;
LAB_01b02f7c:
    if (-1 < (int)uVar23) {
      if ((byte *)(uVar23 + (long)puVar18) == (byte *)0x0) goto LAB_01b03018;
      uVar20 = (uint)*(byte *)(uVar23 + (long)puVar18);
      uVar4 = *puVar18;
      if (uVar4 == 0) goto LAB_01b0300c;
LAB_01b03024:
      uVar23 = (ulong)*(uint *)(puVar7 + 8);
      goto LAB_01b03028;
    }
    if ((uVar23 != 0xffffffff) || (lVar17 = (long)puVar18 - (ulong)uVar4, lVar17 == 0)) {
LAB_01b03018:
      uVar20 = 1;
      uVar4 = *puVar18;
      if (uVar4 != 0) goto LAB_01b03024;
LAB_01b0300c:
      uVar25 = 2;
      uVar21 = 1;
      goto LAB_01b03154;
    }
  }
LAB_01b02fe8:
  uVar25 = 2;
  uVar21 = 1;
  uVar20 = 1;
  goto LAB_01b03154;
LAB_01b03028:
  do {
    if (-1 < (int)uVar23) {
      if ((byte *)(uVar23 + (long)puVar18) == (byte *)0x0) goto LAB_01b030bc;
      uVar21 = (uint)*(byte *)(uVar23 + (long)puVar18);
      uVar4 = *puVar18;
      if (uVar4 == 0) goto LAB_01b03150;
LAB_01b030c8:
      uVar23 = (ulong)*(uint *)puVar7;
      goto LAB_01b030cc;
    }
    if ((uVar23 != 0xffffffff) || (lVar17 = (long)puVar18 - (ulong)uVar4, lVar17 == 0)) {
LAB_01b030bc:
      uVar21 = 1;
      uVar4 = *puVar18;
      if (uVar4 != 0) goto LAB_01b030c8;
      goto LAB_01b03150;
    }
    lVar3 = 0xc;
    if (*(char *)(lVar17 + 10) != '\0') {
      lVar3 = 0x1c;
    }
    if (lVar3 + lVar17 == 0) goto LAB_01b030bc;
    uVar23 = (ulong)*(ushort *)(lVar17 + 8);
    *(undefined4 *)(puVar7 + 8) = 0xfffffffe;
    if (uVar23 == 0) goto LAB_01b030bc;
    puVar22 = (uint *)(lVar3 + lVar17 + 4);
    while (puVar22[-1] != 0x859c3e3e) {
      puVar22 = puVar22 + 2;
      uVar23 = uVar23 - 1;
      if (uVar23 == 0) goto LAB_01b030bc;
    }
    uVar25 = 2;
    uVar23 = 0;
    if (*puVar22 != 0xffffffff) {
      uVar23 = (ulong)*puVar22;
    }
    uVar21 = 1;
    *(int *)(puVar7 + 8) = (int)uVar23;
    uVar4 = *puVar18;
  } while (uVar4 != 0);
  goto LAB_01b03154;
  while( true ) {
    if ((uVar23 != 0xffffffff) || (lVar17 = (long)puVar18 - (ulong)uVar4, lVar17 == 0))
    goto LAB_01b03150;
    lVar3 = 0xc;
    if (*(char *)(lVar17 + 10) != '\0') {
      lVar3 = 0x1c;
    }
    if (lVar3 + lVar17 == 0) goto LAB_01b03150;
    uVar23 = (ulong)*(ushort *)(lVar17 + 8);
    *(undefined4 *)puVar7 = 0xfffffffe;
    if (uVar23 == 0) goto LAB_01b03150;
    puVar22 = (uint *)(lVar3 + lVar17 + 4);
    while (puVar22[-1] != 0xa9b28820) {
      puVar22 = puVar22 + 2;
      uVar23 = uVar23 - 1;
      if (uVar23 == 0) goto LAB_01b03150;
    }
    uVar23 = 0;
    if (*puVar22 != 0xffffffff) {
      uVar23 = (ulong)*puVar22;
    }
    uVar25 = 2;
    *(int *)puVar7 = (int)uVar23;
    uVar4 = *puVar18;
    if (uVar4 == 0) break;
LAB_01b030cc:
    if (-1 < (int)uVar23) {
      if ((byte *)(uVar23 + (long)puVar18) == (byte *)0x0) {
LAB_01b03150:
        uVar25 = 2;
      }
      else {
        uVar25 = (uint)*(byte *)(uVar23 + (long)puVar18);
      }
      break;
    }
  }
LAB_01b03154:
  bVar9 = uVar16 == uVar21;
  bVar10 = uVar16 != (uVar5 & 0xff);
  if ((bVar10) || (uVar16 == uVar21)) {
    bVar11 = uVar21 != (uVar5 & 0xff);
    if (!bVar11) {
      if (uVar16 != uVar21) {
        if (uVar25 < uVar13) goto LAB_01b031a4;
        goto LAB_01b02dec;
      }
    }
LAB_01b02ef4:
    if ((((bVar11) || (bVar10)) || (uVar25 < uVar13)) || ((uVar13 < uVar20 || (!bVar9)))) {
      if (uVar16 < uVar21) {
        if ((uVar21 < (uVar5 & 0xff)) || ((uVar5 & 0xff) < uVar16)) goto LAB_01b031a4;
      }
      else {
        uVar4 = (uint)uVar12 >> 0x10 & 0xff;
        if ((uVar21 <= (uVar5 - 1 & 0xff)) && (0xc < uVar4 || uVar4 < uVar16)) {
LAB_01b031a4:
          bVar15 = *param_1 & ((byte)(1 << (ulong)(uVar14 & 0x1f)) ^ 0xff);
          goto LAB_01b02df8;
        }
      }
    }
  }
  else if (uVar13 < uVar20) goto LAB_01b031a4;
LAB_01b02dec:
  bVar15 = *param_1 | (byte)(1 << (ulong)(uVar14 & 0x1f));
LAB_01b02df8:
  *param_1 = bVar15;
  lVar17 = DAT_0532a818;
LAB_01b02e00:
  uVar14 = uVar14 + 1;
  if (uVar14 == 5) {
    return;
  }
  goto LAB_01b02e0c;
  while( true ) {
    lVar3 = 0xc;
    if (*(char *)(lVar17 + 10) != '\0') {
      lVar3 = 0x1c;
    }
    if (lVar3 + lVar17 == 0) goto LAB_01b02c28;
    uVar23 = (ulong)*(ushort *)(lVar17 + 8);
    *(undefined4 *)(puVar7 + 0x14) = 0xfffffffe;
    if (uVar23 == 0) goto LAB_01b02c28;
    puVar22 = (uint *)(lVar3 + lVar17 + 4);
    while (puVar22[-1] != 0xc785e927) {
      puVar22 = puVar22 + 2;
      uVar23 = uVar23 - 1;
      if (uVar23 == 0) goto LAB_01b02c28;
    }
    uVar23 = 0;
    if (*puVar22 != 0xffffffff) {
      uVar23 = (ulong)*puVar22;
    }
    *(int *)(puVar7 + 0x14) = (int)uVar23;
    uVar4 = *puVar18;
    if (uVar4 == 0) break;
LAB_01b02b8c:
    if (-1 < (int)uVar23) {
      if ((byte *)(uVar23 + (long)puVar18) == (byte *)0x0) goto LAB_01b02c28;
      uVar20 = (uint)*(byte *)(uVar23 + (long)puVar18);
      uVar4 = *puVar18;
      if (uVar4 == 0) goto LAB_01b02c1c;
LAB_01b02c34:
      uVar23 = (ulong)*(uint *)(puVar7 + 0xc);
      goto LAB_01b02c38;
    }
    if ((uVar23 != 0xffffffff) || (lVar17 = (long)puVar18 - (ulong)uVar4, lVar17 == 0)) {
LAB_01b02c28:
      uVar20 = 1;
      uVar4 = *puVar18;
      if (uVar4 != 0) goto LAB_01b02c34;
LAB_01b02c1c:
      uVar25 = 2;
      uVar21 = 1;
      goto LAB_01b02d64;
    }
  }
LAB_01b02bf8:
  uVar25 = 2;
  uVar21 = 1;
  uVar20 = 1;
  goto LAB_01b02d64;
LAB_01b02c38:
  do {
    if (-1 < (int)uVar23) {
      if ((byte *)(uVar23 + (long)puVar18) == (byte *)0x0) goto LAB_01b02ccc;
      uVar21 = (uint)*(byte *)(uVar23 + (long)puVar18);
      uVar4 = *puVar18;
      if (uVar4 == 0) goto LAB_01b02d60;
LAB_01b02cd8:
      uVar23 = (ulong)*(uint *)(puVar7 + 4);
      goto LAB_01b02cdc;
    }
    if ((uVar23 != 0xffffffff) || (lVar17 = (long)puVar18 - (ulong)uVar4, lVar17 == 0)) {
LAB_01b02ccc:
      uVar21 = 1;
      uVar4 = *puVar18;
      if (uVar4 != 0) goto LAB_01b02cd8;
      goto LAB_01b02d60;
    }
    lVar3 = 0xc;
    if (*(char *)(lVar17 + 10) != '\0') {
      lVar3 = 0x1c;
    }
    if (lVar3 + lVar17 == 0) goto LAB_01b02ccc;
    uVar23 = (ulong)*(ushort *)(lVar17 + 8);
    *(undefined4 *)(puVar7 + 0xc) = 0xfffffffe;
    if (uVar23 == 0) goto LAB_01b02ccc;
    puVar22 = (uint *)(lVar3 + lVar17 + 4);
    while (puVar22[-1] != 0x1db4a596) {
      puVar22 = puVar22 + 2;
      uVar23 = uVar23 - 1;
      if (uVar23 == 0) goto LAB_01b02ccc;
    }
    uVar25 = 2;
    uVar23 = 0;
    if (*puVar22 != 0xffffffff) {
      uVar23 = (ulong)*puVar22;
    }
    uVar21 = 1;
    *(int *)(puVar7 + 0xc) = (int)uVar23;
    uVar4 = *puVar18;
  } while (uVar4 != 0);
  goto LAB_01b02d64;
  while( true ) {
    if ((uVar23 != 0xffffffff) || (lVar17 = (long)puVar18 - (ulong)uVar4, lVar17 == 0))
    goto LAB_01b02d60;
    lVar3 = 0xc;
    if (*(char *)(lVar17 + 10) != '\0') {
      lVar3 = 0x1c;
    }
    if (lVar3 + lVar17 == 0) goto LAB_01b02d60;
    uVar23 = (ulong)*(ushort *)(lVar17 + 8);
    *(undefined4 *)(puVar7 + 4) = 0xfffffffe;
    if (uVar23 == 0) goto LAB_01b02d60;
    puVar22 = (uint *)(lVar3 + lVar17 + 4);
    while (puVar22[-1] != 0x319a1388) {
      puVar22 = puVar22 + 2;
      uVar23 = uVar23 - 1;
      if (uVar23 == 0) goto LAB_01b02d60;
    }
    uVar23 = 0;
    if (*puVar22 != 0xffffffff) {
      uVar23 = (ulong)*puVar22;
    }
    uVar25 = 2;
    *(int *)(puVar7 + 4) = (int)uVar23;
    uVar4 = *puVar18;
    if (uVar4 == 0) break;
LAB_01b02cdc:
    if (-1 < (int)uVar23) {
      if ((byte *)(uVar23 + (long)puVar18) == (byte *)0x0) {
LAB_01b02d60:
        uVar25 = 2;
      }
      else {
        uVar25 = (uint)*(byte *)(uVar23 + (long)puVar18);
      }
      break;
    }
  }
LAB_01b02d64:
  bVar9 = uVar16 == uVar21;
  bVar10 = uVar16 != (uVar5 & 0xff);
  if ((bVar10) || (uVar16 == uVar21)) {
    bVar11 = uVar21 != (uVar5 & 0xff);
    if (!bVar11) {
      if (uVar16 != uVar21) {
        if (uVar25 < uVar13) goto LAB_01b02db4;
        goto LAB_01b029fc;
      }
    }
LAB_01b02b04:
    if ((((bVar11) || (bVar10)) || (uVar25 < uVar13)) || ((uVar13 < uVar20 || (!bVar9)))) {
      if (uVar16 < uVar21) {
        if ((uVar21 < (uVar5 & 0xff)) || ((uVar5 & 0xff) < uVar16)) goto LAB_01b02db4;
      }
      else {
        uVar4 = (uint)uVar12 >> 0x10 & 0xff;
        if ((uVar21 <= (uVar5 - 1 & 0xff)) && (0xc < uVar4 || uVar4 < uVar16)) {
LAB_01b02db4:
          bVar15 = *param_1 & ((byte)(1 << (ulong)(uVar14 & 0x1f)) ^ 0xff);
          goto LAB_01b02a08;
        }
      }
    }
  }
  else if (uVar13 < uVar20) goto LAB_01b02db4;
LAB_01b029fc:
  bVar15 = *param_1 | (byte)(1 << (ulong)(uVar14 & 0x1f));
LAB_01b02a08:
  *param_1 = bVar15;
  lVar17 = DAT_0532a818;
LAB_01b02a10:
  uVar14 = uVar14 + 1;
  if (uVar14 == 5) {
    return;
  }
  goto LAB_01b02a1c;
}

