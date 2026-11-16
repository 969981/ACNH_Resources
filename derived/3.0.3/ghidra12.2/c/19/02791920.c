
void FUN_02791920(long param_1)

{
  ushort *puVar1;
  ushort *puVar2;
  ushort *puVar3;
  uint *puVar4;
  long lVar5;
  long lVar6;
  undefined1 *puVar7;
  ulong uVar8;
  ulong uVar9;
  undefined1 *puVar10;
  uint uVar11;
  undefined *puVar12;
  undefined *puVar13;
  bool bVar14;
  char cVar15;
  long lVar16;
  undefined4 *puVar17;
  uint uVar18;
  uint *puVar19;
  uint uVar20;
  int iVar21;
  uint uVar22;
  uint *puVar23;
  uint uVar24;
  uint *puVar25;
  ulong uVar26;
  int *piVar27;
  uint *puVar28;
  
  puVar13 = PTR_DAT_04bb6428;
  puVar12 = PTR_DAT_04bb6420;
  lVar16 = *(long *)PTR_DAT_04bb2208;
  uVar18 = *(uint *)(lVar16 + 0x1b20);
  if ((0 < (int)uVar18) ||
     (((*(long *)(lVar16 + 0x1a10) != 0 &&
       (puVar19 = *(uint **)(*(long *)(lVar16 + 0x1a10) + 8), puVar19 != (uint *)0x0)) &&
      (uVar18 = *puVar19, uVar18 != 0)))) {
    puVar1 = (ushort *)(param_1 + 0xe4a);
    cVar15 = *PTR_DAT_04bb6420;
    uVar20 = 0;
    puVar19 = (uint *)(param_1 + 0xe4c);
    puVar2 = (ushort *)(param_1 + 0xe46);
    puVar3 = (ushort *)(param_1 + 0xe48);
    puVar4 = (uint *)(param_1 + 0xe4e);
    do {
      if ((int)*(uint *)(lVar16 + 0x1b20) < 1) {
        if (((((*(long *)(lVar16 + 0x1a10) != 0) &&
              (puVar23 = *(uint **)(*(long *)(lVar16 + 0x1a10) + 8), puVar23 != (uint *)0x0)) &&
             ((*(uint *)(lVar16 + 0x1a28) <= uVar20 ||
              (*(char *)(*(long *)(lVar16 + 0x1a30) + (long)(int)uVar20) != '\0')))) &&
            ((uVar20 < *puVar23 && (puVar23[1] != 0)))) && ((ushort)puVar23[2] != 0)) {
          iVar21 = 0xc;
          if (*(char *)((long)puVar23 + 10) != '\0') {
            iVar21 = 0x1c;
          }
          puVar23 = (uint *)((ulong)(puVar23[1] * uVar20 + (uint)(ushort)puVar23[2] * 8 + iVar21) +
                            (long)puVar23);
          goto joined_r0x02791b10;
        }
      }
      else if (uVar20 < *(uint *)(lVar16 + 0x1b20)) {
        uVar24 = uVar20;
        if (*(uint *)(lVar16 + 0x1b10) <= uVar20) {
          uVar24 = 0;
        }
        puVar23 = *(uint **)(*(long *)(lVar16 + 0x1b18) + (ulong)uVar24 * 8);
joined_r0x02791b10:
        if (puVar23 != (uint *)0x0) {
          puVar25 = (uint *)(ulong)*puVar23;
          if (*puVar23 != 0) {
            do {
              if (cVar15 != '\0') {
                uVar26 = (ulong)*(uint *)(puVar13 + 0x20);
                if ((int)*(uint *)(puVar13 + 0x20) < 0) {
                  if (uVar26 == 0xffffffff) goto LAB_02791a40;
                }
                else if (((ushort *)(uVar26 + (long)puVar23) != (ushort *)0x0) &&
                        (0x1ff < *(ushort *)(uVar26 + (long)puVar23))) goto LAB_027919c4;
LAB_02791b1c:
                uVar24 = *puVar23;
                puVar25 = (uint *)(ulong)uVar24;
                goto joined_r0x02791b20;
              }
              cVar15 = '\x01';
              *(undefined8 *)puVar13 = 0xffffffffffffffff;
              *(undefined8 *)(puVar13 + 8) = 0xffffffffffffffff;
              *puVar12 = 1;
              *(undefined4 *)(puVar13 + 0x50) = 0xffffffff;
              *(undefined8 *)(puVar13 + 0x10) = 0xffffffffffffffff;
              *(undefined8 *)(puVar13 + 0x18) = 0xffffffffffffffff;
              *(undefined8 *)(puVar13 + 0x20) = 0xffffffffffffffff;
              *(undefined8 *)(puVar13 + 0x28) = 0xffffffffffffffff;
              *(undefined8 *)(puVar13 + 0x30) = 0xffffffffffffffff;
              *(undefined8 *)(puVar13 + 0x38) = 0xffffffffffffffff;
              *(undefined8 *)(puVar13 + 0x40) = 0xffffffffffffffff;
              *(undefined8 *)(puVar13 + 0x48) = 0xffffffffffffffff;
LAB_02791a40:
              lVar6 = (long)puVar23 - (ulong)*puVar23;
              if ((*puVar23 == 0) || (lVar6 == 0)) {
LAB_02791be0:
                uVar26 = 0xffffffff;
                goto LAB_02791b1c;
              }
              lVar5 = 0xc;
              if (*(char *)(lVar6 + 10) != '\0') {
                lVar5 = 0x1c;
              }
              if (lVar5 + lVar6 == 0) goto LAB_02791be0;
              uVar26 = (ulong)*(ushort *)(lVar6 + 8);
              *(undefined4 *)(puVar13 + 0x20) = 0xfffffffe;
              if (uVar26 == 0) {
LAB_02791b18:
                uVar26 = 0xfffffffe;
                goto LAB_02791b1c;
              }
              piVar27 = (int *)(lVar5 + lVar6 + 4);
              while (piVar27[-1] != 0x54706054) {
                piVar27 = piVar27 + 2;
                uVar26 = uVar26 - 1;
                if (uVar26 == 0) goto LAB_02791b18;
              }
              iVar21 = 0;
              if (*piVar27 != -1) {
                iVar21 = *piVar27;
              }
              *(int *)(puVar13 + 0x20) = iVar21;
            } while (*puVar23 != 0);
            puVar25 = (uint *)0x0;
          }
LAB_02791c14:
          uVar24 = (uint)puVar25;
          bVar14 = 0x1ff < uVar24;
          puVar7 = (undefined1 *)(param_1 + 0x400) + (long)puVar25;
          puVar23 = puVar25;
          if (bVar14) {
            puVar23 = (uint *)0x0;
            puVar7 = (undefined1 *)(param_1 + 0x400);
          }
          *(undefined2 *)(param_1 + (long)puVar23 * 2) = 0;
          *puVar7 = 0;
          puVar7 = (undefined1 *)(param_1 + 0x800) + (long)puVar25;
          if (bVar14) {
            puVar7 = (undefined1 *)(param_1 + 0x800);
          }
          *puVar7 = 0;
          puVar7 = (undefined1 *)(param_1 + 0xc40) + (long)puVar25;
          puVar10 = (undefined1 *)(param_1 + 0x600) + (long)puVar25;
          if (bVar14) {
            puVar7 = (undefined1 *)(param_1 + 0xc40);
            puVar10 = (undefined1 *)(param_1 + 0x600);
          }
          *puVar10 = 0;
          *puVar7 = 0;
          *(undefined1 *)(param_1 + 0x54a8 + (long)puVar23) = 0;
          if (*(ushort *)(param_1 + 0xe44) == uVar24) {
            *(undefined2 *)(param_1 + 0xe50) = *(undefined2 *)(param_1 + 0xe52);
            *(undefined4 *)(param_1 + 0xe4c) = *(undefined4 *)(param_1 + 0xe4e);
            *(undefined8 *)(param_1 + 0xe44) = *(undefined8 *)puVar2;
            *(undefined2 *)puVar19 = 0xffff;
          }
          if (*puVar2 == uVar24) {
            *(undefined4 *)(param_1 + 0xe4e) = *(undefined4 *)(param_1 + 0xe50);
            *(undefined8 *)puVar2 = *(undefined8 *)puVar3;
            *(undefined2 *)puVar19 = 0xffff;
          }
          if (*puVar3 == uVar24) {
            *(undefined2 *)(param_1 + 0xe50) = *(undefined2 *)(param_1 + 0xe52);
            *(undefined8 *)puVar3 = *(undefined8 *)puVar1;
            *(undefined2 *)(param_1 + 0xe4c) = 0xffff;
          }
          if (*puVar1 == uVar24) {
            *(undefined8 *)puVar1 = *(undefined8 *)(param_1 + 0xe4c);
            *(undefined2 *)(param_1 + 0xe4c) = 0xffff;
            if (uVar24 == 0xffff) {
LAB_02791cf4:
              *puVar19 = *puVar4;
              *(undefined2 *)(param_1 + 0xe50) = *(undefined2 *)(param_1 + 0xe52);
              *(undefined2 *)puVar19 = 0xffff;
            }
          }
          else if (*(ushort *)puVar19 == uVar24) goto LAB_02791cf4;
          if (*(ushort *)puVar4 == uVar24) {
            *(undefined2 *)(param_1 + 0xe4c) = 0xffff;
            *puVar4 = *(uint *)(param_1 + 0xe50);
            uVar22 = *(uint *)(param_1 + 0xe50) >> 0x10;
            uVar11 = uVar22;
          }
          else {
            uVar22 = (uint)*(ushort *)(param_1 + 0xe52);
            uVar11 = (uint)*(ushort *)(param_1 + 0xe50);
          }
          if (uVar11 == uVar24) {
            *(short *)(param_1 + 0xe50) = (short)uVar22;
            *(undefined2 *)(param_1 + 0xe4c) = 0xffff;
          }
          if (uVar22 == uVar24) {
            *(undefined2 *)puVar19 = 0xffff;
          }
        }
      }
LAB_027919c4:
      uVar20 = uVar20 + 1;
    } while (uVar20 != uVar18);
  }
  uVar26 = 0;
  do {
    uVar8 = uVar26 << 2;
    uVar9 = uVar26 >> 0x1f;
    uVar18 = (int)uVar26 + 1;
    uVar26 = (ulong)uVar18;
    *(undefined4 *)(param_1 + 0xe98 + (-uVar9 & 0xfffffffc00000000 | uVar8)) = 0;
  } while (uVar18 != 0x200);
  memset((void *)(param_1 + 0x1698),0,0x3e00);
  lVar16 = 0x200;
  puVar17 = (undefined4 *)(param_1 + 0x56be);
  do {
    *(undefined2 *)((long)puVar17 + -0xe) = 0;
    lVar16 = lVar16 + -4;
    *(undefined4 *)((long)puVar17 + -0x12) = 0;
    puVar17[-3] = 0;
    *(undefined2 *)(puVar17 + -2) = 0;
    *(undefined4 *)((long)puVar17 + -6) = 0;
    *(undefined2 *)((long)puVar17 + -2) = 0;
    *puVar17 = 0;
    *(undefined2 *)(puVar17 + 1) = 0;
    puVar17 = puVar17 + 6;
  } while (lVar16 != 0);
  *(undefined8 *)(param_1 + 0xc38) = 0xffffffffffffffff;
  *(undefined8 *)(param_1 + 0xc30) = 0xffffffffffffffff;
  *(undefined8 *)(param_1 + 0xc28) = 0xffffffffffffffff;
  *(undefined8 *)(param_1 + 0xc20) = 0xffffffffffffffff;
  *(undefined8 *)(param_1 + 0xc18) = 0xffffffffffffffff;
  *(undefined8 *)(param_1 + 0xc10) = 0xffffffffffffffff;
  *(undefined8 *)(param_1 + 0xc08) = 0xffffffffffffffff;
  *(undefined8 *)(param_1 + 0xc00) = 0xffffffffffffffff;
  *(undefined8 *)(param_1 + 0xe44) = 0xffffffffffffffff;
  *(undefined8 *)(param_1 + 0xe4c) = 0xffffffffffffffff;
  *(undefined8 *)(param_1 + 0xe54) = 0xffffffffffffffff;
  *(undefined8 *)(param_1 + 0xe5c) = 0xffffffffffffffff;
  *(undefined8 *)(param_1 + 0xe64) = 0xffffffffffffffff;
  *(undefined8 *)(param_1 + 0xe6c) = 0xffffffffffffffff;
  *(undefined8 *)(param_1 + 0xe74) = 0xffffffffffffffff;
  *(undefined8 *)(param_1 + 0xe7c) = 0xffffffffffffffff;
  *(undefined8 *)(param_1 + 0xe84) = 0xffffffffffffffff;
  *(undefined8 *)(param_1 + 0xe8c) = 0xffffffffffffffff;
  return;
joined_r0x02791b20:
  if (uVar24 == 0) goto LAB_02791c14;
  if (cVar15 != '\0') {
    if ((int)uVar26 < 0) {
      if (uVar26 == 0xffffffff) {
        puVar25 = (uint *)(ulong)*puVar23;
        if (*puVar23 != 0) goto LAB_02791b68;
        puVar25 = (uint *)0x0;
        goto LAB_02791c14;
      }
    }
    else if ((ushort *)(uVar26 + (long)puVar23) != (ushort *)0x0) {
      puVar25 = (uint *)(ulong)*(ushort *)(uVar26 + (long)puVar23);
      goto LAB_02791c14;
    }
LAB_02791c10:
    puVar25 = (uint *)0x0;
    goto LAB_02791c14;
  }
  cVar15 = '\x01';
  *(undefined8 *)puVar13 = 0xffffffffffffffff;
  *(undefined8 *)(puVar13 + 8) = 0xffffffffffffffff;
  *puVar12 = 1;
  *(undefined4 *)(puVar13 + 0x50) = 0xffffffff;
  *(undefined8 *)(puVar13 + 0x10) = 0xffffffffffffffff;
  *(undefined8 *)(puVar13 + 0x18) = 0xffffffffffffffff;
  *(undefined8 *)(puVar13 + 0x20) = 0xffffffffffffffff;
  *(undefined8 *)(puVar13 + 0x28) = 0xffffffffffffffff;
  *(undefined8 *)(puVar13 + 0x30) = 0xffffffffffffffff;
  *(undefined8 *)(puVar13 + 0x38) = 0xffffffffffffffff;
  *(undefined8 *)(puVar13 + 0x40) = 0xffffffffffffffff;
  *(undefined8 *)(puVar13 + 0x48) = 0xffffffffffffffff;
  puVar25 = (uint *)(ulong)*puVar23;
  if (*puVar23 == 0) goto LAB_02791c14;
LAB_02791b68:
  if (puVar23 == puVar25) goto LAB_02791c10;
  lVar6 = 0xc;
  if (*(char *)((long)puVar23 + (10 - (long)puVar25)) != '\0') {
    lVar6 = 0x1c;
  }
  lVar6 = (long)puVar23 + (lVar6 - (long)puVar25);
  if (lVar6 == 0) goto LAB_02791c10;
  uVar26 = (ulong)*(ushort *)((long)puVar23 + (8 - (long)puVar25));
  *(undefined4 *)(puVar13 + 0x20) = 0xfffffffe;
  puVar25 = (uint *)0x0;
  if (uVar26 == 0) goto LAB_02791c14;
  puVar28 = (uint *)(lVar6 + 4);
  while (puVar28[-1] != 0x54706054) {
    puVar28 = puVar28 + 2;
    uVar26 = uVar26 - 1;
    if (uVar26 == 0) {
      puVar25 = (uint *)0x0;
      goto LAB_02791c14;
    }
  }
  puVar25 = (uint *)0x0;
  uVar26 = 0;
  if (*puVar28 != 0xffffffff) {
    uVar26 = (ulong)*puVar28;
  }
  *(int *)(puVar13 + 0x20) = (int)uVar26;
  uVar24 = *puVar23;
  goto joined_r0x02791b20;
}

