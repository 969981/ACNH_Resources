
void FUN_01a5ec80(long param_1)

{
  byte *pbVar1;
  byte *pbVar2;
  undefined4 *puVar3;
  int iVar4;
  undefined4 uVar5;
  ushort uVar6;
  ushort uVar7;
  uint uVar8;
  undefined *__s;
  long lVar9;
  uint *puVar10;
  ulong uVar11;
  int *piVar12;
  byte *pbVar13;
  ushort uVar14;
  char cVar15;
  byte *pbVar16;
  uint *puVar17;
  
  __s = PTR_DAT_04bbfe90;
  lVar9 = *(long *)(param_1 + 0x57e58);
  uVar14 = *(ushort *)(lVar9 + 0x1f8);
  uVar6 = *(ushort *)(lVar9 + 0x1fa);
  if (uVar6 < uVar14) {
    return;
  }
  pbVar1 = (byte *)(param_1 + 0x5c060);
  cVar15 = *PTR_DAT_04bbfe88;
LAB_01a5ed34:
  lVar9 = *(long *)(param_1 + 0x57e58);
  uVar8 = (uint)uVar14 - (uint)*(ushort *)(lVar9 + 0x1f8);
  if ((uVar8 < *(uint *)(lVar9 + 0x1d8)) &&
     (puVar17 = *(uint **)(*(long *)(lVar9 + 0x1e0) + (long)(int)uVar8 * 8), puVar17 != (uint *)0x0)
     ) {
    pbVar16 = pbVar1;
    if (*puVar17 != 0) {
      do {
        if (cVar15 == '\0') {
          cVar15 = '\x01';
          *PTR_DAT_04bbfe88 = 1;
          memset(__s,0xff,0x1ac);
          uVar8 = *puVar17;
        }
        else {
          uVar8 = *(uint *)(__s + 0x128);
          if (-1 < (int)uVar8) {
            if (((ushort *)((ulong)uVar8 + (long)puVar17) != (ushort *)0x0) &&
               (uVar7 = *(ushort *)((ulong)uVar8 + (long)puVar17), uVar7 >> 3 < 0x753)) {
              pbVar16 = pbVar1 + (ulong)uVar7 * 0x23;
            }
            break;
          }
          if (uVar8 != 0xffffffff) break;
          uVar8 = *puVar17;
        }
        if ((uVar8 == 0) || (puVar10 = (uint *)(ulong)uVar8, puVar17 == puVar10)) break;
        lVar9 = 0xc;
        if (*(char *)((long)puVar17 + (10 - (long)puVar10)) != '\0') {
          lVar9 = 0x1c;
        }
        lVar9 = (long)puVar17 + (lVar9 - (long)puVar10);
        if (lVar9 == 0) break;
        uVar11 = (ulong)*(ushort *)((long)puVar17 + (8 - (long)puVar10));
        *(undefined4 *)(__s + 0x128) = 0xfffffffe;
        if (uVar11 == 0) break;
        piVar12 = (int *)(lVar9 + 4);
        while (piVar12[-1] != 0x54706054) {
          piVar12 = piVar12 + 2;
          uVar11 = uVar11 - 1;
          if (uVar11 == 0) goto LAB_01a5eeb0;
        }
        iVar4 = 0;
        if (*piVar12 != -1) {
          iVar4 = *piVar12;
        }
        *(int *)(__s + 0x128) = iVar4;
        if (*puVar17 == 0) break;
      } while( true );
    }
LAB_01a5eeb0:
    do {
      if (*puVar17 == 0) goto LAB_01a5ed20;
      if (cVar15 == '\0') {
        cVar15 = '\x01';
        *PTR_DAT_04bbfe88 = 1;
        memset(__s,0xff,0x1ac);
        uVar8 = *puVar17;
      }
      else {
        uVar8 = *(uint *)(__s + 0x13c);
        if (-1 < (int)uVar8) {
          puVar3 = (undefined4 *)((ulong)uVar8 + (long)puVar17);
          if (puVar3 != (undefined4 *)0x0) {
            uVar5 = *puVar3;
            pbVar13 = pbVar16 + 7;
            *(undefined4 *)(pbVar16 + 3) = *(undefined4 *)((long)puVar3 + 3);
            *(undefined4 *)pbVar16 = uVar5;
            uVar8 = *puVar17;
            goto joined_r0x01a5ef80;
          }
          goto LAB_01a5ed20;
        }
        if (uVar8 != 0xffffffff) goto LAB_01a5ed20;
        uVar8 = *puVar17;
      }
      if ((uVar8 == 0) || (puVar10 = (uint *)(ulong)uVar8, puVar17 == puVar10)) goto LAB_01a5ed20;
      lVar9 = 0xc;
      if (*(char *)((long)puVar17 + (10 - (long)puVar10)) != '\0') {
        lVar9 = 0x1c;
      }
      lVar9 = (long)puVar17 + (lVar9 - (long)puVar10);
      if (lVar9 == 0) goto LAB_01a5ed20;
      uVar11 = (ulong)*(ushort *)((long)puVar17 + (8 - (long)puVar10));
      *(undefined4 *)(__s + 0x13c) = 0xfffffffe;
      if (uVar11 == 0) goto LAB_01a5ed20;
      piVar12 = (int *)(lVar9 + 4);
      while (piVar12[-1] != 0x12d4d7a6) {
        piVar12 = piVar12 + 2;
        uVar11 = uVar11 - 1;
        if (uVar11 == 0) goto LAB_01a5ed20;
      }
      iVar4 = 0;
      if (*piVar12 != -1) {
        iVar4 = *piVar12;
      }
      *(int *)(__s + 0x13c) = iVar4;
    } while( true );
  }
  goto LAB_01a5ed28;
joined_r0x01a5ef80:
  if (uVar8 == 0) goto LAB_01a5f04c;
  if (cVar15 == '\0') {
    cVar15 = '\x01';
    *PTR_DAT_04bbfe88 = 1;
    memset(__s,0xff,0x1ac);
    uVar8 = *puVar17;
  }
  else {
    uVar8 = *(uint *)(__s + 0x130);
    if (-1 < (int)uVar8) {
      puVar3 = (undefined4 *)((ulong)uVar8 + (long)puVar17);
      if (puVar3 != (undefined4 *)0x0) {
        uVar5 = *puVar3;
        *(undefined4 *)(pbVar16 + 10) = *(undefined4 *)((long)puVar3 + 3);
        *(undefined4 *)pbVar13 = uVar5;
        pbVar13 = pbVar16 + 0xe;
        goto LAB_01a5f074;
      }
      goto LAB_01a5f04c;
    }
    if (uVar8 != 0xffffffff) goto LAB_01a5f04c;
    uVar8 = *puVar17;
  }
  if ((uVar8 == 0) || (puVar10 = (uint *)(ulong)uVar8, puVar17 == puVar10)) goto LAB_01a5f04c;
  lVar9 = 0xc;
  if (*(char *)((long)puVar17 + (10 - (long)puVar10)) != '\0') {
    lVar9 = 0x1c;
  }
  lVar9 = (long)puVar17 + (lVar9 - (long)puVar10);
  if (lVar9 == 0) goto LAB_01a5f04c;
  uVar11 = (ulong)*(ushort *)((long)puVar17 + (8 - (long)puVar10));
  *(undefined4 *)(__s + 0x130) = 0xfffffffe;
  if (uVar11 == 0) goto LAB_01a5f04c;
  piVar12 = (int *)(lVar9 + 4);
  while (piVar12[-1] != -0x173bb74e) {
    piVar12 = piVar12 + 2;
    uVar11 = uVar11 - 1;
    if (uVar11 == 0) goto LAB_01a5f04c;
  }
  iVar4 = 0;
  if (*piVar12 != -1) {
    iVar4 = *piVar12;
  }
  *(int *)(__s + 0x130) = iVar4;
  uVar8 = *puVar17;
  goto joined_r0x01a5ef80;
LAB_01a5f074:
  if (*puVar17 == 0) goto LAB_01a5f04c;
  if (cVar15 == '\0') {
    cVar15 = '\x01';
    *PTR_DAT_04bbfe88 = 1;
    memset(__s,0xff,0x1ac);
  }
  else {
    uVar8 = *(uint *)(__s + 0x134);
    if (-1 < (int)uVar8) {
      puVar3 = (undefined4 *)((ulong)uVar8 + (long)puVar17);
      if (puVar3 != (undefined4 *)0x0) {
        uVar5 = *puVar3;
        *(undefined4 *)(pbVar16 + 0x11) = *(undefined4 *)((long)puVar3 + 3);
        pbVar2 = pbVar16 + 0x15;
        *(undefined4 *)pbVar13 = uVar5;
        uVar8 = *puVar17;
        goto joined_r0x01a5f15c;
      }
      goto LAB_01a5f04c;
    }
    if (uVar8 != 0xffffffff) goto LAB_01a5f04c;
  }
  puVar10 = (uint *)(ulong)*puVar17;
  if ((*puVar17 == 0) || (puVar17 == puVar10)) goto LAB_01a5f04c;
  lVar9 = 0xc;
  if (*(char *)((long)puVar17 + (10 - (long)puVar10)) != '\0') {
    lVar9 = 0x1c;
  }
  lVar9 = (long)puVar17 + (lVar9 - (long)puVar10);
  if (lVar9 == 0) goto LAB_01a5f04c;
  uVar11 = (ulong)*(ushort *)((long)puVar17 + (8 - (long)puVar10));
  *(undefined4 *)(__s + 0x134) = 0xfffffffe;
  if (uVar11 == 0) goto LAB_01a5f04c;
  piVar12 = (int *)(lVar9 + 4);
  while (piVar12[-1] != -0x58e18a4) {
    piVar12 = piVar12 + 2;
    uVar11 = uVar11 - 1;
    if (uVar11 == 0) goto LAB_01a5f04c;
  }
  iVar4 = 0;
  if (*piVar12 != -1) {
    iVar4 = *piVar12;
  }
  *(int *)(__s + 0x134) = iVar4;
  goto LAB_01a5f074;
joined_r0x01a5f15c:
  if (uVar8 == 0) goto LAB_01a5f218;
  if (cVar15 == '\0') {
    cVar15 = '\x01';
    *PTR_DAT_04bbfe88 = 1;
    memset(__s,0xff,0x1ac);
  }
  else {
    uVar8 = *(uint *)(__s + 0x138);
    if (-1 < (int)uVar8) {
      puVar3 = (undefined4 *)((ulong)uVar8 + (long)puVar17);
      if (puVar3 != (undefined4 *)0x0) {
        uVar5 = *puVar3;
        *(undefined4 *)(pbVar16 + 0x18) = *(undefined4 *)((long)puVar3 + 3);
        *(undefined4 *)pbVar2 = uVar5;
        pbVar16[0x1c] = ~(pbVar16[7] | *pbVar16 | pbVar16[0xe] | pbVar16[0x15]);
        pbVar16[0x1d] = ~(pbVar16[8] | pbVar16[1] | pbVar16[0xf] | pbVar16[0x16]);
        pbVar16[0x1e] = ~(pbVar16[9] | pbVar16[2] | pbVar16[0x10] | pbVar16[0x17]);
        pbVar16[0x1f] = ~(pbVar16[10] | pbVar16[3] | pbVar16[0x11] | pbVar16[0x18]);
        pbVar16[0x20] = ~(pbVar16[0xb] | pbVar16[4] | pbVar16[0x12] | pbVar16[0x19]);
        pbVar16[0x22] = ~(pbVar16[0xd] | pbVar16[6] | pbVar16[0x14] | pbVar16[0x1b]);
        pbVar16[0x21] = ~(pbVar16[0xc] | pbVar16[5] | pbVar16[0x13] | pbVar16[0x1a]);
        goto LAB_01a5ed28;
      }
      goto LAB_01a5f218;
    }
    if (uVar8 != 0xffffffff) goto LAB_01a5f218;
  }
  puVar10 = (uint *)(ulong)*puVar17;
  if ((*puVar17 == 0) || (puVar17 == puVar10)) goto LAB_01a5f218;
  lVar9 = 0xc;
  if (*(char *)((long)puVar17 + (10 - (long)puVar10)) != '\0') {
    lVar9 = 0x1c;
  }
  lVar9 = (long)puVar17 + (lVar9 - (long)puVar10);
  if (lVar9 == 0) goto LAB_01a5f218;
  uVar11 = (ulong)*(ushort *)((long)puVar17 + (8 - (long)puVar10));
  *(undefined4 *)(__s + 0x138) = 0xfffffffe;
  if (uVar11 == 0) goto LAB_01a5f218;
  piVar12 = (int *)(lVar9 + 4);
  while (piVar12[-1] != 0x42cd8039) {
    piVar12 = piVar12 + 2;
    uVar11 = uVar11 - 1;
    if (uVar11 == 0) goto LAB_01a5f218;
  }
  iVar4 = 0;
  if (*piVar12 != -1) {
    iVar4 = *piVar12;
  }
  *(int *)(__s + 0x138) = iVar4;
  uVar8 = *puVar17;
  goto joined_r0x01a5f15c;
LAB_01a5f218:
  pbVar16[0x18] = 0;
  pbVar16[0x19] = 0;
  pbVar16[0x1a] = 0;
  pbVar16[0x1b] = 0;
  pbVar2[0] = 0;
  pbVar2[1] = 0;
  pbVar2[2] = 0;
  pbVar2[3] = 0;
  goto LAB_01a5ed28;
LAB_01a5f04c:
  pbVar13[3] = 0;
  pbVar13[4] = 0;
  pbVar13[5] = 0;
  pbVar13[6] = 0;
  pbVar13[0] = 0;
  pbVar13[1] = 0;
  pbVar13[2] = 0;
  pbVar13[3] = 0;
  goto LAB_01a5ed28;
LAB_01a5ed20:
  pbVar16[3] = 0;
  pbVar16[4] = 0;
  pbVar16[5] = 0;
  pbVar16[6] = 0;
  pbVar16[0] = 0;
  pbVar16[1] = 0;
  pbVar16[2] = 0;
  pbVar16[3] = 0;
LAB_01a5ed28:
  uVar14 = uVar14 + 1;
  if (uVar6 < uVar14) {
    return;
  }
  goto LAB_01a5ed34;
}

